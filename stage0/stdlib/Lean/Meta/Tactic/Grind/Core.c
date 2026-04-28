// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Core
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.Inv import Lean.Meta.Tactic.Grind.PP import Lean.Meta.Tactic.Grind.Ctor import Lean.Meta.Tactic.Grind.Beta import Lean.Meta.Tactic.Grind.Simp import Lean.Meta.Tactic.Grind.Internalize import Init.Omega
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
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getTrueExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_mkEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getENode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_checkInvariants(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_ppState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_Grind_isInconsistent___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_mk_eq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
extern lean_object* l_Lean_eagerReflBoolFalse;
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_closeGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_propagateCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_ParentSet_elems(lean_object*);
lean_object* l_Lean_Meta_Grind_propagateUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_propagateDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_preprocessLight___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushNewFact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_Grind_PendingSolverPropagations_propagate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isTrue(lean_object*);
uint8_t l_Lean_PersistentHashMap_Node_isEmpty___redArg(lean_object*);
uint64_t l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(lean_object*);
lean_object* l_Lean_Meta_Grind_DelayedTheoremInstance_check(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_setENode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getRoot(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getParents___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqv___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_propagateBetaEqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_Grind_Solvers_mergeTerms___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_resetParentsOf___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_copyParentsTo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addCongrTable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isArrow(lean_object*);
lean_object* l_Lean_Meta_Grind_isCongrRoot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getEqc(lean_object*, lean_object*, uint8_t);
uint64_t l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isFalseExpr___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_ENode_isCongrRoot(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_ppENodeRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getFnRoots(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getEqcLambdas(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_markAsInconsistent___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_hasSameType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_process_new_facts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Solvers_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isProp(lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__2;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__4;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__7;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__0;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__0;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__3;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__4;
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0;
static lean_once_cell_t l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__1;
static lean_once_cell_t l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3___boxed(lean_object**);
static lean_once_cell_t l_Lean_Meta_Grind_propagateBeta___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBeta___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBeta___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBeta___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBeta___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBeta___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBeta___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBeta___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBeta(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___boxed(lean_object**);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__4;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addHEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNewEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNewEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_grind_process_new_facts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_add(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHypothesis(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHypothesis___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(lean_object* v_e_1_, uint8_t v_flippedNew_2_, lean_object* v_targetNew_x3f_3_, lean_object* v_proofNew_x3f_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = lean_st_ref_get(v_a_9_);
lean_dec(v___x_11_);
v___x_12_ = lean_st_ref_get(v_a_5_);
lean_inc_ref(v_e_1_);
v___x_13_ = l_Lean_Meta_Grind_Goal_getENode(v___x_12_, v_e_1_, v_a_6_, v_a_7_, v_a_8_, v_a_9_);
lean_dec(v___x_12_);
if (lean_obj_tag(v___x_13_) == 0)
{
lean_object* v_a_14_; lean_object* v_self_15_; lean_object* v_next_16_; lean_object* v_root_17_; lean_object* v_congr_18_; lean_object* v_target_x3f_19_; lean_object* v_proof_x3f_20_; uint8_t v_flipped_21_; lean_object* v_size_22_; uint8_t v_interpreted_23_; uint8_t v_ctor_24_; uint8_t v_hasLambdas_25_; uint8_t v_heqProofs_26_; lean_object* v_idx_27_; lean_object* v_generation_28_; lean_object* v_mt_29_; lean_object* v_sTerms_30_; uint8_t v_funCC_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_55_; 
v_a_14_ = lean_ctor_get(v___x_13_, 0);
lean_inc(v_a_14_);
lean_dec_ref(v___x_13_);
v_self_15_ = lean_ctor_get(v_a_14_, 0);
v_next_16_ = lean_ctor_get(v_a_14_, 1);
v_root_17_ = lean_ctor_get(v_a_14_, 2);
v_congr_18_ = lean_ctor_get(v_a_14_, 3);
v_target_x3f_19_ = lean_ctor_get(v_a_14_, 4);
v_proof_x3f_20_ = lean_ctor_get(v_a_14_, 5);
v_flipped_21_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*11);
v_size_22_ = lean_ctor_get(v_a_14_, 6);
v_interpreted_23_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*11 + 1);
v_ctor_24_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*11 + 2);
v_hasLambdas_25_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*11 + 3);
v_heqProofs_26_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*11 + 4);
v_idx_27_ = lean_ctor_get(v_a_14_, 7);
v_generation_28_ = lean_ctor_get(v_a_14_, 8);
v_mt_29_ = lean_ctor_get(v_a_14_, 9);
v_sTerms_30_ = lean_ctor_get(v_a_14_, 10);
v_funCC_31_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*11 + 5);
v_isSharedCheck_55_ = !lean_is_exclusive(v_a_14_);
if (v_isSharedCheck_55_ == 0)
{
v___x_33_ = v_a_14_;
v_isShared_34_ = v_isSharedCheck_55_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_sTerms_30_);
lean_inc(v_mt_29_);
lean_inc(v_generation_28_);
lean_inc(v_idx_27_);
lean_inc(v_size_22_);
lean_inc(v_proof_x3f_20_);
lean_inc(v_target_x3f_19_);
lean_inc(v_congr_18_);
lean_inc(v_root_17_);
lean_inc(v_next_16_);
lean_inc(v_self_15_);
lean_dec(v_a_14_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_55_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___y_36_; lean_object* v___y_37_; 
if (lean_obj_tag(v_target_x3f_19_) == 1)
{
lean_object* v_val_42_; lean_object* v___x_44_; uint8_t v_isShared_45_; uint8_t v_isSharedCheck_54_; 
v_val_42_ = lean_ctor_get(v_target_x3f_19_, 0);
v_isSharedCheck_54_ = !lean_is_exclusive(v_target_x3f_19_);
if (v_isSharedCheck_54_ == 0)
{
v___x_44_ = v_target_x3f_19_;
v_isShared_45_ = v_isSharedCheck_54_;
goto v_resetjp_43_;
}
else
{
lean_inc(v_val_42_);
lean_dec(v_target_x3f_19_);
v___x_44_ = lean_box(0);
v_isShared_45_ = v_isSharedCheck_54_;
goto v_resetjp_43_;
}
v_resetjp_43_:
{
uint8_t v___y_47_; 
if (v_flipped_21_ == 0)
{
uint8_t v___x_52_; 
v___x_52_ = 1;
v___y_47_ = v___x_52_;
goto v___jp_46_;
}
else
{
uint8_t v___x_53_; 
v___x_53_ = 0;
v___y_47_ = v___x_53_;
goto v___jp_46_;
}
v___jp_46_:
{
lean_object* v___x_49_; 
lean_inc_ref(v_e_1_);
if (v_isShared_45_ == 0)
{
lean_ctor_set(v___x_44_, 0, v_e_1_);
v___x_49_ = v___x_44_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_e_1_);
v___x_49_ = v_reuseFailAlloc_51_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
lean_object* v___x_50_; 
v___x_50_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(v_val_42_, v___y_47_, v___x_49_, v_proof_x3f_20_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_);
if (lean_obj_tag(v___x_50_) == 0)
{
lean_dec_ref(v___x_50_);
v___y_36_ = v_a_5_;
v___y_37_ = v_a_9_;
goto v___jp_35_;
}
else
{
lean_del_object(v___x_33_);
lean_dec(v_sTerms_30_);
lean_dec(v_mt_29_);
lean_dec(v_generation_28_);
lean_dec(v_idx_27_);
lean_dec(v_size_22_);
lean_dec_ref(v_congr_18_);
lean_dec_ref(v_root_17_);
lean_dec_ref(v_next_16_);
lean_dec_ref(v_self_15_);
lean_dec(v_proofNew_x3f_4_);
lean_dec(v_targetNew_x3f_3_);
lean_dec_ref(v_e_1_);
return v___x_50_;
}
}
}
}
}
else
{
lean_dec(v_proof_x3f_20_);
lean_dec(v_target_x3f_19_);
v___y_36_ = v_a_5_;
v___y_37_ = v_a_9_;
goto v___jp_35_;
}
v___jp_35_:
{
lean_object* v___x_39_; 
if (v_isShared_34_ == 0)
{
lean_ctor_set(v___x_33_, 5, v_proofNew_x3f_4_);
lean_ctor_set(v___x_33_, 4, v_targetNew_x3f_3_);
v___x_39_ = v___x_33_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(0, 11, 6);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v_self_15_);
lean_ctor_set(v_reuseFailAlloc_41_, 1, v_next_16_);
lean_ctor_set(v_reuseFailAlloc_41_, 2, v_root_17_);
lean_ctor_set(v_reuseFailAlloc_41_, 3, v_congr_18_);
lean_ctor_set(v_reuseFailAlloc_41_, 4, v_targetNew_x3f_3_);
lean_ctor_set(v_reuseFailAlloc_41_, 5, v_proofNew_x3f_4_);
lean_ctor_set(v_reuseFailAlloc_41_, 6, v_size_22_);
lean_ctor_set(v_reuseFailAlloc_41_, 7, v_idx_27_);
lean_ctor_set(v_reuseFailAlloc_41_, 8, v_generation_28_);
lean_ctor_set(v_reuseFailAlloc_41_, 9, v_mt_29_);
lean_ctor_set(v_reuseFailAlloc_41_, 10, v_sTerms_30_);
lean_ctor_set_uint8(v_reuseFailAlloc_41_, sizeof(void*)*11 + 1, v_interpreted_23_);
lean_ctor_set_uint8(v_reuseFailAlloc_41_, sizeof(void*)*11 + 2, v_ctor_24_);
lean_ctor_set_uint8(v_reuseFailAlloc_41_, sizeof(void*)*11 + 3, v_hasLambdas_25_);
lean_ctor_set_uint8(v_reuseFailAlloc_41_, sizeof(void*)*11 + 4, v_heqProofs_26_);
lean_ctor_set_uint8(v_reuseFailAlloc_41_, sizeof(void*)*11 + 5, v_funCC_31_);
v___x_39_ = v_reuseFailAlloc_41_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
lean_object* v___x_40_; 
lean_ctor_set_uint8(v___x_39_, sizeof(void*)*11, v_flippedNew_2_);
v___x_40_ = l_Lean_Meta_Grind_setENode___redArg(v_e_1_, v___x_39_, v___y_36_, v___y_37_);
return v___x_40_;
}
}
}
}
else
{
lean_object* v_a_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_63_; 
lean_dec(v_proofNew_x3f_4_);
lean_dec(v_targetNew_x3f_3_);
lean_dec_ref(v_e_1_);
v_a_56_ = lean_ctor_get(v___x_13_, 0);
v_isSharedCheck_63_ = !lean_is_exclusive(v___x_13_);
if (v_isSharedCheck_63_ == 0)
{
v___x_58_ = v___x_13_;
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_a_56_);
lean_dec(v___x_13_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_61_; 
if (v_isShared_59_ == 0)
{
v___x_61_ = v___x_58_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_a_56_);
v___x_61_ = v_reuseFailAlloc_62_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
return v___x_61_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg___boxed(lean_object* v_e_64_, lean_object* v_flippedNew_65_, lean_object* v_targetNew_x3f_66_, lean_object* v_proofNew_x3f_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
uint8_t v_flippedNew_boxed_74_; lean_object* v_res_75_; 
v_flippedNew_boxed_74_ = lean_unbox(v_flippedNew_65_);
v_res_75_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(v_e_64_, v_flippedNew_boxed_74_, v_targetNew_x3f_66_, v_proofNew_x3f_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_, v_a_72_);
lean_dec(v_a_72_);
lean_dec_ref(v_a_71_);
lean_dec(v_a_70_);
lean_dec_ref(v_a_69_);
lean_dec(v_a_68_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go(lean_object* v_e_76_, uint8_t v_flippedNew_77_, lean_object* v_targetNew_x3f_78_, lean_object* v_proofNew_x3f_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(v_e_76_, v_flippedNew_77_, v_targetNew_x3f_78_, v_proofNew_x3f_79_, v_a_80_, v_a_86_, v_a_87_, v_a_88_, v_a_89_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___boxed(lean_object* v_e_92_, lean_object* v_flippedNew_93_, lean_object* v_targetNew_x3f_94_, lean_object* v_proofNew_x3f_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_){
_start:
{
uint8_t v_flippedNew_boxed_107_; lean_object* v_res_108_; 
v_flippedNew_boxed_107_ = lean_unbox(v_flippedNew_93_);
v_res_108_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go(v_e_92_, v_flippedNew_boxed_107_, v_targetNew_x3f_94_, v_proofNew_x3f_95_, v_a_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_, v_a_101_, v_a_102_, v_a_103_, v_a_104_, v_a_105_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
lean_dec(v_a_103_);
lean_dec_ref(v_a_102_);
lean_dec(v_a_101_);
lean_dec_ref(v_a_100_);
lean_dec(v_a_99_);
lean_dec_ref(v_a_98_);
lean_dec(v_a_97_);
lean_dec(v_a_96_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg(lean_object* v_e_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
uint8_t v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_116_ = 0;
v___x_117_ = lean_box(0);
v___x_118_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(v_e_109_, v___x_116_, v___x_117_, v___x_117_, v_a_110_, v_a_111_, v_a_112_, v_a_113_, v_a_114_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg___boxed(lean_object* v_e_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg(v_e_119_, v_a_120_, v_a_121_, v_a_122_, v_a_123_, v_a_124_);
lean_dec(v_a_124_);
lean_dec_ref(v_a_123_);
lean_dec(v_a_122_);
lean_dec_ref(v_a_121_);
lean_dec(v_a_120_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans(lean_object* v_e_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg(v_e_127_, v_a_128_, v_a_134_, v_a_135_, v_a_136_, v_a_137_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___boxed(lean_object* v_e_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans(v_e_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_, v_a_150_);
lean_dec(v_a_150_);
lean_dec_ref(v_a_149_);
lean_dec(v_a_148_);
lean_dec_ref(v_a_147_);
lean_dec(v_a_146_);
lean_dec_ref(v_a_145_);
lean_dec(v_a_144_);
lean_dec_ref(v_a_143_);
lean_dec(v_a_142_);
lean_dec(v_a_141_);
return v_res_152_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant(lean_object* v_parent_153_){
_start:
{
uint8_t v___x_154_; 
v___x_154_ = l_Lean_Expr_isApp(v_parent_153_);
if (v___x_154_ == 0)
{
uint8_t v___x_155_; 
v___x_155_ = l_Lean_Expr_isArrow(v_parent_153_);
return v___x_155_;
}
else
{
return v___x_154_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant___boxed(lean_object* v_parent_156_){
_start:
{
uint8_t v_res_157_; lean_object* v_r_158_; 
v_res_157_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant(v_parent_156_);
lean_dec_ref(v_parent_156_);
v_r_158_ = lean_box(v_res_157_);
return v_r_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2(lean_object* v_msgData_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_){
_start:
{
lean_object* v___x_165_; lean_object* v_env_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v_mctx_169_; lean_object* v_lctx_170_; lean_object* v_options_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_165_ = lean_st_ref_get(v___y_163_);
v_env_166_ = lean_ctor_get(v___x_165_, 0);
lean_inc_ref(v_env_166_);
lean_dec(v___x_165_);
v___x_167_ = lean_st_ref_get(v___y_163_);
lean_dec(v___x_167_);
v___x_168_ = lean_st_ref_get(v___y_161_);
v_mctx_169_ = lean_ctor_get(v___x_168_, 0);
lean_inc_ref(v_mctx_169_);
lean_dec(v___x_168_);
v_lctx_170_ = lean_ctor_get(v___y_160_, 2);
v_options_171_ = lean_ctor_get(v___y_162_, 2);
lean_inc_ref(v_options_171_);
lean_inc_ref(v_lctx_170_);
v___x_172_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_172_, 0, v_env_166_);
lean_ctor_set(v___x_172_, 1, v_mctx_169_);
lean_ctor_set(v___x_172_, 2, v_lctx_170_);
lean_ctor_set(v___x_172_, 3, v_options_171_);
v___x_173_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
lean_ctor_set(v___x_173_, 1, v_msgData_159_);
v___x_174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2___boxed(lean_object* v_msgData_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2(v_msgData_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
return v_res_181_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_182_; double v___x_183_; 
v___x_182_ = lean_unsigned_to_nat(0u);
v___x_183_ = lean_float_of_nat(v___x_182_);
return v___x_183_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = lean_mk_string_unchecked("", 0, 0);
return v___x_184_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = lean_unsigned_to_nat(0u);
v___x_186_ = lean_mk_empty_array_with_capacity(v___x_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(lean_object* v_cls_187_, lean_object* v_msg_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_){
_start:
{
lean_object* v_ref_194_; lean_object* v___x_195_; lean_object* v_a_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_240_; 
v_ref_194_ = lean_ctor_get(v___y_191_, 5);
v___x_195_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2(v_msg_188_, v___y_189_, v___y_190_, v___y_191_, v___y_192_);
v_a_196_ = lean_ctor_get(v___x_195_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_195_);
if (v_isSharedCheck_240_ == 0)
{
v___x_198_ = v___x_195_;
v_isShared_199_ = v_isSharedCheck_240_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_a_196_);
lean_dec(v___x_195_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_240_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_200_; lean_object* v_traceState_201_; lean_object* v_env_202_; lean_object* v_nextMacroScope_203_; lean_object* v_ngen_204_; lean_object* v_auxDeclNGen_205_; lean_object* v_cache_206_; lean_object* v_messages_207_; lean_object* v_infoState_208_; lean_object* v_snapshotTasks_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_239_; 
v___x_200_ = lean_st_ref_take(v___y_192_);
v_traceState_201_ = lean_ctor_get(v___x_200_, 4);
v_env_202_ = lean_ctor_get(v___x_200_, 0);
v_nextMacroScope_203_ = lean_ctor_get(v___x_200_, 1);
v_ngen_204_ = lean_ctor_get(v___x_200_, 2);
v_auxDeclNGen_205_ = lean_ctor_get(v___x_200_, 3);
v_cache_206_ = lean_ctor_get(v___x_200_, 5);
v_messages_207_ = lean_ctor_get(v___x_200_, 6);
v_infoState_208_ = lean_ctor_get(v___x_200_, 7);
v_snapshotTasks_209_ = lean_ctor_get(v___x_200_, 8);
v_isSharedCheck_239_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_239_ == 0)
{
v___x_211_ = v___x_200_;
v_isShared_212_ = v_isSharedCheck_239_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_snapshotTasks_209_);
lean_inc(v_infoState_208_);
lean_inc(v_messages_207_);
lean_inc(v_cache_206_);
lean_inc(v_traceState_201_);
lean_inc(v_auxDeclNGen_205_);
lean_inc(v_ngen_204_);
lean_inc(v_nextMacroScope_203_);
lean_inc(v_env_202_);
lean_dec(v___x_200_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_239_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
uint64_t v_tid_213_; lean_object* v_traces_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_238_; 
v_tid_213_ = lean_ctor_get_uint64(v_traceState_201_, sizeof(void*)*1);
v_traces_214_ = lean_ctor_get(v_traceState_201_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v_traceState_201_);
if (v_isSharedCheck_238_ == 0)
{
v___x_216_ = v_traceState_201_;
v_isShared_217_ = v_isSharedCheck_238_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_traces_214_);
lean_dec(v_traceState_201_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_238_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_218_; double v___x_219_; uint8_t v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_228_; 
v___x_218_ = lean_box(0);
v___x_219_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0);
v___x_220_ = 0;
v___x_221_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__1, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__1);
v___x_222_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_222_, 0, v_cls_187_);
lean_ctor_set(v___x_222_, 1, v___x_218_);
lean_ctor_set(v___x_222_, 2, v___x_221_);
lean_ctor_set_float(v___x_222_, sizeof(void*)*3, v___x_219_);
lean_ctor_set_float(v___x_222_, sizeof(void*)*3 + 8, v___x_219_);
lean_ctor_set_uint8(v___x_222_, sizeof(void*)*3 + 16, v___x_220_);
v___x_223_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__2, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__2_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__2);
v___x_224_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_224_, 0, v___x_222_);
lean_ctor_set(v___x_224_, 1, v_a_196_);
lean_ctor_set(v___x_224_, 2, v___x_223_);
lean_inc(v_ref_194_);
v___x_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_225_, 0, v_ref_194_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
v___x_226_ = l_Lean_PersistentArray_push___redArg(v_traces_214_, v___x_225_);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 0, v___x_226_);
v___x_228_ = v___x_216_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v___x_226_);
lean_ctor_set_uint64(v_reuseFailAlloc_237_, sizeof(void*)*1, v_tid_213_);
v___x_228_ = v_reuseFailAlloc_237_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
lean_object* v___x_230_; 
if (v_isShared_212_ == 0)
{
lean_ctor_set(v___x_211_, 4, v___x_228_);
v___x_230_ = v___x_211_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_env_202_);
lean_ctor_set(v_reuseFailAlloc_236_, 1, v_nextMacroScope_203_);
lean_ctor_set(v_reuseFailAlloc_236_, 2, v_ngen_204_);
lean_ctor_set(v_reuseFailAlloc_236_, 3, v_auxDeclNGen_205_);
lean_ctor_set(v_reuseFailAlloc_236_, 4, v___x_228_);
lean_ctor_set(v_reuseFailAlloc_236_, 5, v_cache_206_);
lean_ctor_set(v_reuseFailAlloc_236_, 6, v_messages_207_);
lean_ctor_set(v_reuseFailAlloc_236_, 7, v_infoState_208_);
lean_ctor_set(v_reuseFailAlloc_236_, 8, v_snapshotTasks_209_);
v___x_230_ = v_reuseFailAlloc_236_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_234_; 
v___x_231_ = lean_st_ref_set(v___y_192_, v___x_230_);
v___x_232_ = lean_box(0);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 0, v___x_232_);
v___x_234_ = v___x_198_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_232_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___boxed(lean_object* v_cls_241_, lean_object* v_msg_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v_cls_241_, v_msg_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_);
lean_dec(v___y_246_);
lean_dec_ref(v___y_245_);
lean_dec(v___y_244_);
lean_dec_ref(v___y_243_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5(lean_object* v___x_249_, lean_object* v_xs_250_, lean_object* v_v_251_, lean_object* v_i_252_){
_start:
{
lean_object* v___x_253_; uint8_t v___x_254_; 
v___x_253_ = lean_array_get_size(v_xs_250_);
v___x_254_ = lean_nat_dec_lt(v_i_252_, v___x_253_);
if (v___x_254_ == 0)
{
lean_object* v___x_255_; 
lean_dec(v_i_252_);
lean_dec_ref(v_v_251_);
v___x_255_ = lean_box(0);
return v___x_255_;
}
else
{
lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_256_ = lean_array_fget_borrowed(v_xs_250_, v_i_252_);
lean_inc_ref(v_v_251_);
lean_inc(v___x_256_);
v___x_257_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_249_, v___x_256_, v_v_251_);
if (v___x_257_ == 0)
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = lean_unsigned_to_nat(1u);
v___x_259_ = lean_nat_add(v_i_252_, v___x_258_);
lean_dec(v_i_252_);
v_i_252_ = v___x_259_;
goto _start;
}
else
{
lean_object* v___x_261_; 
lean_dec_ref(v_v_251_);
v___x_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_261_, 0, v_i_252_);
return v___x_261_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v___x_262_, lean_object* v_xs_263_, lean_object* v_v_264_, lean_object* v_i_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5(v___x_262_, v_xs_263_, v_v_264_, v_i_265_);
lean_dec_ref(v_xs_263_);
lean_dec_ref(v___x_262_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1(lean_object* v___x_267_, lean_object* v_xs_268_, lean_object* v_v_269_){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = lean_unsigned_to_nat(0u);
v___x_271_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5(v___x_267_, v_xs_268_, v_v_269_, v___x_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1___boxed(lean_object* v___x_272_, lean_object* v_xs_273_, lean_object* v_v_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1(v___x_272_, v_xs_273_, v_v_274_);
lean_dec_ref(v_xs_273_);
lean_dec_ref(v___x_272_);
return v_res_275_;
}
}
static size_t _init_l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_276_; size_t v___x_277_; size_t v___x_278_; 
v___x_276_ = ((size_t)5ULL);
v___x_277_ = ((size_t)1ULL);
v___x_278_ = lean_usize_shift_left(v___x_277_, v___x_276_);
return v___x_278_;
}
}
static size_t _init_l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_279_; size_t v___x_280_; size_t v___x_281_; 
v___x_279_ = ((size_t)1ULL);
v___x_280_ = lean_usize_once(&l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__0);
v___x_281_ = lean_usize_sub(v___x_280_, v___x_279_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(lean_object* v___x_282_, lean_object* v_x_283_, size_t v_x_284_, lean_object* v_x_285_){
_start:
{
if (lean_obj_tag(v_x_283_) == 0)
{
lean_object* v_es_286_; lean_object* v___x_287_; size_t v___x_288_; size_t v___x_289_; size_t v___x_290_; lean_object* v_j_291_; lean_object* v_entry_292_; 
v_es_286_ = lean_ctor_get(v_x_283_, 0);
v___x_287_ = lean_box(2);
v___x_288_ = ((size_t)5ULL);
v___x_289_ = lean_usize_once(&l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1);
v___x_290_ = lean_usize_land(v_x_284_, v___x_289_);
v_j_291_ = lean_usize_to_nat(v___x_290_);
v_entry_292_ = lean_array_get(v___x_287_, v_es_286_, v_j_291_);
switch(lean_obj_tag(v_entry_292_))
{
case 0:
{
lean_object* v_key_293_; uint8_t v___x_294_; 
v_key_293_ = lean_ctor_get(v_entry_292_, 0);
lean_inc(v_key_293_);
lean_dec_ref(v_entry_292_);
v___x_294_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_282_, v_x_285_, v_key_293_);
if (v___x_294_ == 0)
{
lean_dec(v_j_291_);
return v_x_283_;
}
else
{
lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_302_; 
lean_inc_ref(v_es_286_);
v_isSharedCheck_302_ = !lean_is_exclusive(v_x_283_);
if (v_isSharedCheck_302_ == 0)
{
lean_object* v_unused_303_; 
v_unused_303_ = lean_ctor_get(v_x_283_, 0);
lean_dec(v_unused_303_);
v___x_296_ = v_x_283_;
v_isShared_297_ = v_isSharedCheck_302_;
goto v_resetjp_295_;
}
else
{
lean_dec(v_x_283_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_302_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_298_; lean_object* v___x_300_; 
v___x_298_ = lean_array_set(v_es_286_, v_j_291_, v___x_287_);
lean_dec(v_j_291_);
if (v_isShared_297_ == 0)
{
lean_ctor_set(v___x_296_, 0, v___x_298_);
v___x_300_ = v___x_296_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v___x_298_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
}
case 1:
{
lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_337_; 
lean_inc_ref(v_es_286_);
v_isSharedCheck_337_ = !lean_is_exclusive(v_x_283_);
if (v_isSharedCheck_337_ == 0)
{
lean_object* v_unused_338_; 
v_unused_338_ = lean_ctor_get(v_x_283_, 0);
lean_dec(v_unused_338_);
v___x_305_ = v_x_283_;
v_isShared_306_ = v_isSharedCheck_337_;
goto v_resetjp_304_;
}
else
{
lean_dec(v_x_283_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_337_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v_node_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_336_; 
v_node_307_ = lean_ctor_get(v_entry_292_, 0);
v_isSharedCheck_336_ = !lean_is_exclusive(v_entry_292_);
if (v_isSharedCheck_336_ == 0)
{
v___x_309_ = v_entry_292_;
v_isShared_310_ = v_isSharedCheck_336_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_node_307_);
lean_dec(v_entry_292_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_336_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v_entries_311_; size_t v___x_312_; lean_object* v_newNode_313_; lean_object* v___x_314_; 
v_entries_311_ = lean_array_set(v_es_286_, v_j_291_, v___x_287_);
v___x_312_ = lean_usize_shift_right(v_x_284_, v___x_288_);
v_newNode_313_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(v___x_282_, v_node_307_, v___x_312_, v_x_285_);
lean_inc_ref(v_newNode_313_);
v___x_314_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_313_);
if (lean_obj_tag(v___x_314_) == 0)
{
lean_object* v___x_316_; 
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 0, v_newNode_313_);
v___x_316_ = v___x_309_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_newNode_313_);
v___x_316_ = v_reuseFailAlloc_321_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
lean_object* v___x_317_; lean_object* v___x_319_; 
v___x_317_ = lean_array_set(v_entries_311_, v_j_291_, v___x_316_);
lean_dec(v_j_291_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_317_);
v___x_319_ = v___x_305_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_317_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
else
{
lean_object* v_val_322_; lean_object* v_fst_323_; lean_object* v_snd_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_335_; 
lean_dec_ref(v_newNode_313_);
lean_del_object(v___x_309_);
v_val_322_ = lean_ctor_get(v___x_314_, 0);
lean_inc(v_val_322_);
lean_dec_ref(v___x_314_);
v_fst_323_ = lean_ctor_get(v_val_322_, 0);
v_snd_324_ = lean_ctor_get(v_val_322_, 1);
v_isSharedCheck_335_ = !lean_is_exclusive(v_val_322_);
if (v_isSharedCheck_335_ == 0)
{
v___x_326_ = v_val_322_;
v_isShared_327_ = v_isSharedCheck_335_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_snd_324_);
lean_inc(v_fst_323_);
lean_dec(v_val_322_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_335_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
v___x_329_ = v___x_326_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_fst_323_);
lean_ctor_set(v_reuseFailAlloc_334_, 1, v_snd_324_);
v___x_329_ = v_reuseFailAlloc_334_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
lean_object* v___x_330_; lean_object* v___x_332_; 
v___x_330_ = lean_array_set(v_entries_311_, v_j_291_, v___x_329_);
lean_dec(v_j_291_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_330_);
v___x_332_ = v___x_305_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v___x_330_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_291_);
lean_dec_ref(v_x_285_);
return v_x_283_;
}
}
}
else
{
lean_object* v_ks_339_; lean_object* v_vs_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_354_; 
v_ks_339_ = lean_ctor_get(v_x_283_, 0);
v_vs_340_ = lean_ctor_get(v_x_283_, 1);
v_isSharedCheck_354_ = !lean_is_exclusive(v_x_283_);
if (v_isSharedCheck_354_ == 0)
{
v___x_342_ = v_x_283_;
v_isShared_343_ = v_isSharedCheck_354_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_vs_340_);
lean_inc(v_ks_339_);
lean_dec(v_x_283_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_354_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_344_; 
v___x_344_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1(v___x_282_, v_ks_339_, v_x_285_);
if (lean_obj_tag(v___x_344_) == 0)
{
lean_object* v___x_346_; 
if (v_isShared_343_ == 0)
{
v___x_346_ = v___x_342_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_ks_339_);
lean_ctor_set(v_reuseFailAlloc_347_, 1, v_vs_340_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
else
{
lean_object* v_val_348_; lean_object* v_keys_x27_349_; lean_object* v_vals_x27_350_; lean_object* v___x_352_; 
v_val_348_ = lean_ctor_get(v___x_344_, 0);
lean_inc_n(v_val_348_, 2);
lean_dec_ref(v___x_344_);
v_keys_x27_349_ = l_Array_eraseIdx___redArg(v_ks_339_, v_val_348_);
v_vals_x27_350_ = l_Array_eraseIdx___redArg(v_vs_340_, v_val_348_);
if (v_isShared_343_ == 0)
{
lean_ctor_set(v___x_342_, 1, v_vals_x27_350_);
lean_ctor_set(v___x_342_, 0, v_keys_x27_349_);
v___x_352_ = v___x_342_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_keys_x27_349_);
lean_ctor_set(v_reuseFailAlloc_353_, 1, v_vals_x27_350_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___boxed(lean_object* v___x_355_, lean_object* v_x_356_, lean_object* v_x_357_, lean_object* v_x_358_){
_start:
{
size_t v_x_28746__boxed_359_; lean_object* v_res_360_; 
v_x_28746__boxed_359_ = lean_unbox_usize(v_x_357_);
lean_dec(v_x_357_);
v_res_360_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(v___x_355_, v_x_356_, v_x_28746__boxed_359_, v_x_358_);
lean_dec_ref(v___x_355_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg(lean_object* v___x_361_, lean_object* v_x_362_, lean_object* v_x_363_){
_start:
{
uint64_t v___x_364_; size_t v_h_365_; lean_object* v___x_366_; 
lean_inc_ref(v_x_363_);
v___x_364_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(v___x_361_, v_x_363_);
v_h_365_ = lean_uint64_to_usize(v___x_364_);
v___x_366_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(v___x_361_, v_x_362_, v_h_365_, v_x_363_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg___boxed(lean_object* v___x_367_, lean_object* v_x_368_, lean_object* v_x_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg(v___x_367_, v_x_368_, v_x_369_);
lean_dec_ref(v___x_367_);
return v_res_370_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = lean_mk_string_unchecked("grind", 5, 5);
return v___x_371_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = lean_mk_string_unchecked("debug", 5, 5);
return v___x_372_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = lean_mk_string_unchecked("parent", 6, 6);
return v___x_373_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_374_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__2, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__2);
v___x_375_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1);
v___x_376_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0);
v___x_377_ = l_Lean_Name_mkStr3(v___x_376_, v___x_375_, v___x_374_);
return v___x_377_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_378_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__4);
v___x_380_ = l_Lean_Name_mkStr1(v___x_379_);
return v___x_380_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_381_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3);
v___x_382_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5);
v___x_383_ = l_Lean_Name_append(v___x_382_, v___x_381_);
return v___x_383_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__7(void){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = lean_mk_string_unchecked("remove: ", 8, 8);
return v___x_384_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__7, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__7_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__7);
v___x_386_ = l_Lean_stringToMessageData(v___x_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg(lean_object* v_as_x27_387_, lean_object* v_b_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_){
_start:
{
if (lean_obj_tag(v_as_x27_387_) == 0)
{
lean_object* v___x_400_; 
v___x_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_400_, 0, v_b_388_);
return v___x_400_;
}
else
{
lean_object* v_head_401_; lean_object* v_tail_402_; lean_object* v___x_403_; lean_object* v___y_405_; lean_object* v___y_406_; uint8_t v_a_447_; uint8_t v___x_460_; 
v_head_401_ = lean_ctor_get(v_as_x27_387_, 0);
v_tail_402_ = lean_ctor_get(v_as_x27_387_, 1);
v___x_403_ = lean_box(0);
v___x_460_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant(v_head_401_);
if (v___x_460_ == 0)
{
v_a_447_ = v___x_460_;
goto v___jp_446_;
}
else
{
lean_object* v___x_461_; 
lean_inc(v_head_401_);
v___x_461_ = l_Lean_Meta_Grind_isCongrRoot___redArg(v_head_401_, v___y_389_, v___y_395_, v___y_396_, v___y_397_, v___y_398_);
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v_a_462_; uint8_t v___x_463_; 
v_a_462_ = lean_ctor_get(v___x_461_, 0);
lean_inc(v_a_462_);
lean_dec_ref(v___x_461_);
v___x_463_ = lean_unbox(v_a_462_);
lean_dec(v_a_462_);
v_a_447_ = v___x_463_;
goto v___jp_446_;
}
else
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_471_; 
v_a_464_ = lean_ctor_get(v___x_461_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_471_ == 0)
{
v___x_466_ = v___x_461_;
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_461_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_469_; 
if (v_isShared_467_ == 0)
{
v___x_469_ = v___x_466_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_a_464_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
}
v___jp_404_:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v_toGoalState_409_; lean_object* v_mvarId_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_445_; 
v___x_407_ = lean_st_ref_get(v___y_406_);
lean_dec(v___x_407_);
v___x_408_ = lean_st_ref_take(v___y_405_);
v_toGoalState_409_ = lean_ctor_get(v___x_408_, 0);
v_mvarId_410_ = lean_ctor_get(v___x_408_, 1);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_445_ == 0)
{
v___x_412_ = v___x_408_;
v_isShared_413_ = v_isSharedCheck_445_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_mvarId_410_);
lean_inc(v_toGoalState_409_);
lean_dec(v___x_408_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_445_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v_nextDeclIdx_414_; lean_object* v_enodeMap_415_; lean_object* v_exprs_416_; lean_object* v_parents_417_; lean_object* v_congrTable_418_; lean_object* v_appMap_419_; lean_object* v_indicesFound_420_; lean_object* v_newFacts_421_; uint8_t v_inconsistent_422_; lean_object* v_nextIdx_423_; lean_object* v_newRawFacts_424_; lean_object* v_facts_425_; lean_object* v_extThms_426_; lean_object* v_ematch_427_; lean_object* v_inj_428_; lean_object* v_split_429_; lean_object* v_clean_430_; lean_object* v_sstates_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_444_; 
v_nextDeclIdx_414_ = lean_ctor_get(v_toGoalState_409_, 0);
v_enodeMap_415_ = lean_ctor_get(v_toGoalState_409_, 1);
v_exprs_416_ = lean_ctor_get(v_toGoalState_409_, 2);
v_parents_417_ = lean_ctor_get(v_toGoalState_409_, 3);
v_congrTable_418_ = lean_ctor_get(v_toGoalState_409_, 4);
v_appMap_419_ = lean_ctor_get(v_toGoalState_409_, 5);
v_indicesFound_420_ = lean_ctor_get(v_toGoalState_409_, 6);
v_newFacts_421_ = lean_ctor_get(v_toGoalState_409_, 7);
v_inconsistent_422_ = lean_ctor_get_uint8(v_toGoalState_409_, sizeof(void*)*17);
v_nextIdx_423_ = lean_ctor_get(v_toGoalState_409_, 8);
v_newRawFacts_424_ = lean_ctor_get(v_toGoalState_409_, 9);
v_facts_425_ = lean_ctor_get(v_toGoalState_409_, 10);
v_extThms_426_ = lean_ctor_get(v_toGoalState_409_, 11);
v_ematch_427_ = lean_ctor_get(v_toGoalState_409_, 12);
v_inj_428_ = lean_ctor_get(v_toGoalState_409_, 13);
v_split_429_ = lean_ctor_get(v_toGoalState_409_, 14);
v_clean_430_ = lean_ctor_get(v_toGoalState_409_, 15);
v_sstates_431_ = lean_ctor_get(v_toGoalState_409_, 16);
v_isSharedCheck_444_ = !lean_is_exclusive(v_toGoalState_409_);
if (v_isSharedCheck_444_ == 0)
{
v___x_433_ = v_toGoalState_409_;
v_isShared_434_ = v_isSharedCheck_444_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_sstates_431_);
lean_inc(v_clean_430_);
lean_inc(v_split_429_);
lean_inc(v_inj_428_);
lean_inc(v_ematch_427_);
lean_inc(v_extThms_426_);
lean_inc(v_facts_425_);
lean_inc(v_newRawFacts_424_);
lean_inc(v_nextIdx_423_);
lean_inc(v_newFacts_421_);
lean_inc(v_indicesFound_420_);
lean_inc(v_appMap_419_);
lean_inc(v_congrTable_418_);
lean_inc(v_parents_417_);
lean_inc(v_exprs_416_);
lean_inc(v_enodeMap_415_);
lean_inc(v_nextDeclIdx_414_);
lean_dec(v_toGoalState_409_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_444_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_435_; lean_object* v___x_437_; 
lean_inc(v_head_401_);
v___x_435_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg(v_enodeMap_415_, v_congrTable_418_, v_head_401_);
if (v_isShared_434_ == 0)
{
lean_ctor_set(v___x_433_, 4, v___x_435_);
v___x_437_ = v___x_433_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v_nextDeclIdx_414_);
lean_ctor_set(v_reuseFailAlloc_443_, 1, v_enodeMap_415_);
lean_ctor_set(v_reuseFailAlloc_443_, 2, v_exprs_416_);
lean_ctor_set(v_reuseFailAlloc_443_, 3, v_parents_417_);
lean_ctor_set(v_reuseFailAlloc_443_, 4, v___x_435_);
lean_ctor_set(v_reuseFailAlloc_443_, 5, v_appMap_419_);
lean_ctor_set(v_reuseFailAlloc_443_, 6, v_indicesFound_420_);
lean_ctor_set(v_reuseFailAlloc_443_, 7, v_newFacts_421_);
lean_ctor_set(v_reuseFailAlloc_443_, 8, v_nextIdx_423_);
lean_ctor_set(v_reuseFailAlloc_443_, 9, v_newRawFacts_424_);
lean_ctor_set(v_reuseFailAlloc_443_, 10, v_facts_425_);
lean_ctor_set(v_reuseFailAlloc_443_, 11, v_extThms_426_);
lean_ctor_set(v_reuseFailAlloc_443_, 12, v_ematch_427_);
lean_ctor_set(v_reuseFailAlloc_443_, 13, v_inj_428_);
lean_ctor_set(v_reuseFailAlloc_443_, 14, v_split_429_);
lean_ctor_set(v_reuseFailAlloc_443_, 15, v_clean_430_);
lean_ctor_set(v_reuseFailAlloc_443_, 16, v_sstates_431_);
lean_ctor_set_uint8(v_reuseFailAlloc_443_, sizeof(void*)*17, v_inconsistent_422_);
v___x_437_ = v_reuseFailAlloc_443_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
lean_object* v___x_439_; 
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 0, v___x_437_);
v___x_439_ = v___x_412_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v___x_437_);
lean_ctor_set(v_reuseFailAlloc_442_, 1, v_mvarId_410_);
v___x_439_ = v_reuseFailAlloc_442_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
lean_object* v___x_440_; 
v___x_440_ = lean_st_ref_set(v___y_405_, v___x_439_);
v_as_x27_387_ = v_tail_402_;
v_b_388_ = v___x_403_;
goto _start;
}
}
}
}
}
v___jp_446_:
{
if (v_a_447_ == 0)
{
v_as_x27_387_ = v_tail_402_;
v_b_388_ = v___x_403_;
goto _start;
}
else
{
lean_object* v_options_449_; uint8_t v_hasTrace_450_; 
v_options_449_ = lean_ctor_get(v___y_397_, 2);
v_hasTrace_450_ = lean_ctor_get_uint8(v_options_449_, sizeof(void*)*1);
if (v_hasTrace_450_ == 0)
{
v___y_405_ = v___y_389_;
v___y_406_ = v___y_398_;
goto v___jp_404_;
}
else
{
lean_object* v_inheritedTraceOptions_451_; lean_object* v___x_452_; lean_object* v___x_453_; uint8_t v___x_454_; 
v_inheritedTraceOptions_451_ = lean_ctor_get(v___y_397_, 13);
v___x_452_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3);
v___x_453_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6);
v___x_454_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_451_, v_options_449_, v___x_453_);
if (v___x_454_ == 0)
{
v___y_405_ = v___y_389_;
v___y_406_ = v___y_398_;
goto v___jp_404_;
}
else
{
lean_object* v___x_455_; 
v___x_455_ = l_Lean_Meta_Grind_updateLastTag(v___y_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_);
if (lean_obj_tag(v___x_455_) == 0)
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
lean_dec_ref(v___x_455_);
v___x_456_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8);
lean_inc(v_head_401_);
v___x_457_ = l_Lean_MessageData_ofExpr(v_head_401_);
v___x_458_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_456_);
lean_ctor_set(v___x_458_, 1, v___x_457_);
v___x_459_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_452_, v___x_458_, v___y_395_, v___y_396_, v___y_397_, v___y_398_);
if (lean_obj_tag(v___x_459_) == 0)
{
lean_dec_ref(v___x_459_);
v___y_405_ = v___y_389_;
v___y_406_ = v___y_398_;
goto v___jp_404_;
}
else
{
return v___x_459_;
}
}
else
{
return v___x_455_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___boxed(lean_object* v_as_x27_472_, lean_object* v_b_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg(v_as_x27_472_, v_b_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
lean_dec(v___y_481_);
lean_dec_ref(v___y_480_);
lean_dec(v___y_479_);
lean_dec_ref(v___y_478_);
lean_dec(v___y_477_);
lean_dec_ref(v___y_476_);
lean_dec(v___y_475_);
lean_dec(v___y_474_);
lean_dec(v_as_x27_472_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents(lean_object* v_root_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = l_Lean_Meta_Grind_getParents___redArg(v_root_486_, v_a_487_, v_a_496_);
if (lean_obj_tag(v___x_498_) == 0)
{
lean_object* v_a_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v_a_499_ = lean_ctor_get(v___x_498_, 0);
lean_inc(v_a_499_);
lean_dec_ref(v___x_498_);
v___x_500_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_499_);
v___x_501_ = lean_box(0);
v___x_502_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg(v___x_500_, v___x_501_, v_a_487_, v_a_488_, v_a_489_, v_a_490_, v_a_491_, v_a_492_, v_a_493_, v_a_494_, v_a_495_, v_a_496_);
lean_dec(v___x_500_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_509_; 
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_509_ == 0)
{
lean_object* v_unused_510_; 
v_unused_510_ = lean_ctor_get(v___x_502_, 0);
lean_dec(v_unused_510_);
v___x_504_ = v___x_502_;
v_isShared_505_ = v_isSharedCheck_509_;
goto v_resetjp_503_;
}
else
{
lean_dec(v___x_502_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_509_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v___x_507_; 
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 0, v_a_499_);
v___x_507_ = v___x_504_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_a_499_);
v___x_507_ = v_reuseFailAlloc_508_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
return v___x_507_;
}
}
}
else
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
lean_dec(v_a_499_);
v_a_511_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_518_ == 0)
{
v___x_513_ = v___x_502_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v___x_502_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_a_511_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
}
else
{
return v___x_498_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents___boxed(lean_object* v_root_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents(v_root_519_, v_a_520_, v_a_521_, v_a_522_, v_a_523_, v_a_524_, v_a_525_, v_a_526_, v_a_527_, v_a_528_, v_a_529_);
lean_dec(v_a_529_);
lean_dec_ref(v_a_528_);
lean_dec(v_a_527_);
lean_dec_ref(v_a_526_);
lean_dec(v_a_525_);
lean_dec_ref(v_a_524_);
lean_dec(v_a_523_);
lean_dec_ref(v_a_522_);
lean_dec(v_a_521_);
lean_dec(v_a_520_);
lean_dec_ref(v_root_519_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0(lean_object* v___x_532_, lean_object* v_00_u03b2_533_, lean_object* v_x_534_, lean_object* v_x_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg(v___x_532_, v_x_534_, v_x_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___boxed(lean_object* v___x_537_, lean_object* v_00_u03b2_538_, lean_object* v_x_539_, lean_object* v_x_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0(v___x_537_, v_00_u03b2_538_, v_x_539_, v_x_540_);
lean_dec_ref(v___x_537_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1(lean_object* v_cls_542_, lean_object* v_msg_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_){
_start:
{
lean_object* v___x_555_; 
v___x_555_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v_cls_542_, v_msg_543_, v___y_550_, v___y_551_, v___y_552_, v___y_553_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___boxed(lean_object* v_cls_556_, lean_object* v_msg_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1(v_cls_556_, v_msg_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
lean_dec(v___y_563_);
lean_dec_ref(v___y_562_);
lean_dec(v___y_561_);
lean_dec_ref(v___y_560_);
lean_dec(v___y_559_);
lean_dec(v___y_558_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2(lean_object* v_as_570_, lean_object* v_as_x27_571_, lean_object* v_b_572_, lean_object* v_a_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg(v_as_x27_571_, v_b_572_, v___y_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___boxed(lean_object* v_as_586_, lean_object* v_as_x27_587_, lean_object* v_b_588_, lean_object* v_a_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2(v_as_586_, v_as_x27_587_, v_b_588_, v_a_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
lean_dec(v___y_597_);
lean_dec_ref(v___y_596_);
lean_dec(v___y_595_);
lean_dec_ref(v___y_594_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___y_591_);
lean_dec(v___y_590_);
lean_dec(v_as_x27_587_);
lean_dec(v_as_586_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0(lean_object* v___x_602_, lean_object* v_00_u03b2_603_, lean_object* v_x_604_, size_t v_x_605_, lean_object* v_x_606_){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(v___x_602_, v_x_604_, v_x_605_, v_x_606_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___boxed(lean_object* v___x_608_, lean_object* v_00_u03b2_609_, lean_object* v_x_610_, lean_object* v_x_611_, lean_object* v_x_612_){
_start:
{
size_t v_x_29218__boxed_613_; lean_object* v_res_614_; 
v_x_29218__boxed_613_ = lean_unbox_usize(v_x_611_);
lean_dec(v_x_611_);
v_res_614_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0(v___x_608_, v_00_u03b2_609_, v_x_610_, v_x_29218__boxed_613_, v_x_612_);
lean_dec_ref(v___x_608_);
return v_res_614_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = lean_mk_string_unchecked("reinsert: ", 10, 10);
return v___x_615_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_616_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__0, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__0);
v___x_617_ = l_Lean_stringToMessageData(v___x_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg(lean_object* v_as_x27_618_, lean_object* v_b_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_){
_start:
{
if (lean_obj_tag(v_as_x27_618_) == 0)
{
lean_object* v___x_631_; 
v___x_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_631_, 0, v_b_619_);
return v___x_631_;
}
else
{
lean_object* v_head_632_; lean_object* v_tail_633_; lean_object* v___x_634_; lean_object* v___y_636_; lean_object* v___y_637_; lean_object* v___y_638_; lean_object* v___y_639_; lean_object* v___y_640_; lean_object* v___y_641_; lean_object* v___y_642_; lean_object* v___y_643_; lean_object* v___y_644_; lean_object* v___y_645_; uint8_t v_a_649_; uint8_t v___x_662_; 
v_head_632_ = lean_ctor_get(v_as_x27_618_, 0);
v_tail_633_ = lean_ctor_get(v_as_x27_618_, 1);
v___x_634_ = lean_box(0);
v___x_662_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant(v_head_632_);
if (v___x_662_ == 0)
{
v_a_649_ = v___x_662_;
goto v___jp_648_;
}
else
{
lean_object* v___x_663_; 
lean_inc(v_head_632_);
v___x_663_ = l_Lean_Meta_Grind_isCongrRoot___redArg(v_head_632_, v___y_620_, v___y_626_, v___y_627_, v___y_628_, v___y_629_);
if (lean_obj_tag(v___x_663_) == 0)
{
lean_object* v_a_664_; uint8_t v___x_665_; 
v_a_664_ = lean_ctor_get(v___x_663_, 0);
lean_inc(v_a_664_);
lean_dec_ref(v___x_663_);
v___x_665_ = lean_unbox(v_a_664_);
lean_dec(v_a_664_);
v_a_649_ = v___x_665_;
goto v___jp_648_;
}
else
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_673_; 
v_a_666_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_673_ == 0)
{
v___x_668_ = v___x_663_;
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___x_663_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_671_; 
if (v_isShared_669_ == 0)
{
v___x_671_ = v___x_668_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_a_666_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
}
v___jp_635_:
{
lean_object* v___x_646_; 
lean_inc(v_head_632_);
v___x_646_ = l_Lean_Meta_Grind_addCongrTable(v_head_632_, v___y_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
if (lean_obj_tag(v___x_646_) == 0)
{
lean_dec_ref(v___x_646_);
v_as_x27_618_ = v_tail_633_;
v_b_619_ = v___x_634_;
goto _start;
}
else
{
return v___x_646_;
}
}
v___jp_648_:
{
if (v_a_649_ == 0)
{
v_as_x27_618_ = v_tail_633_;
v_b_619_ = v___x_634_;
goto _start;
}
else
{
lean_object* v_options_651_; uint8_t v_hasTrace_652_; 
v_options_651_ = lean_ctor_get(v___y_628_, 2);
v_hasTrace_652_ = lean_ctor_get_uint8(v_options_651_, sizeof(void*)*1);
if (v_hasTrace_652_ == 0)
{
v___y_636_ = v___y_620_;
v___y_637_ = v___y_621_;
v___y_638_ = v___y_622_;
v___y_639_ = v___y_623_;
v___y_640_ = v___y_624_;
v___y_641_ = v___y_625_;
v___y_642_ = v___y_626_;
v___y_643_ = v___y_627_;
v___y_644_ = v___y_628_;
v___y_645_ = v___y_629_;
goto v___jp_635_;
}
else
{
lean_object* v_inheritedTraceOptions_653_; lean_object* v___x_654_; lean_object* v___x_655_; uint8_t v___x_656_; 
v_inheritedTraceOptions_653_ = lean_ctor_get(v___y_628_, 13);
v___x_654_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3);
v___x_655_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6);
v___x_656_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_653_, v_options_651_, v___x_655_);
if (v___x_656_ == 0)
{
v___y_636_ = v___y_620_;
v___y_637_ = v___y_621_;
v___y_638_ = v___y_622_;
v___y_639_ = v___y_623_;
v___y_640_ = v___y_624_;
v___y_641_ = v___y_625_;
v___y_642_ = v___y_626_;
v___y_643_ = v___y_627_;
v___y_644_ = v___y_628_;
v___y_645_ = v___y_629_;
goto v___jp_635_;
}
else
{
lean_object* v___x_657_; 
v___x_657_ = l_Lean_Meta_Grind_updateLastTag(v___y_620_, v___y_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
lean_dec_ref(v___x_657_);
v___x_658_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1);
lean_inc(v_head_632_);
v___x_659_ = l_Lean_MessageData_ofExpr(v_head_632_);
v___x_660_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_658_);
lean_ctor_set(v___x_660_, 1, v___x_659_);
v___x_661_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_654_, v___x_660_, v___y_626_, v___y_627_, v___y_628_, v___y_629_);
if (lean_obj_tag(v___x_661_) == 0)
{
lean_dec_ref(v___x_661_);
v___y_636_ = v___y_620_;
v___y_637_ = v___y_621_;
v___y_638_ = v___y_622_;
v___y_639_ = v___y_623_;
v___y_640_ = v___y_624_;
v___y_641_ = v___y_625_;
v___y_642_ = v___y_626_;
v___y_643_ = v___y_627_;
v___y_644_ = v___y_628_;
v___y_645_ = v___y_629_;
goto v___jp_635_;
}
else
{
return v___x_661_;
}
}
else
{
return v___x_657_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___boxed(lean_object* v_as_x27_674_, lean_object* v_b_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg(v_as_x27_674_, v_b_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
lean_dec(v___y_685_);
lean_dec_ref(v___y_684_);
lean_dec(v___y_683_);
lean_dec_ref(v___y_682_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
lean_dec(v___y_679_);
lean_dec_ref(v___y_678_);
lean_dec(v___y_677_);
lean_dec(v___y_676_);
lean_dec(v_as_x27_674_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents(lean_object* v_parents_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_){
_start:
{
lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_700_ = l_Lean_Meta_Grind_ParentSet_elems(v_parents_688_);
v___x_701_ = lean_box(0);
v___x_702_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg(v___x_700_, v___x_701_, v_a_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_, v_a_696_, v_a_697_, v_a_698_);
lean_dec(v___x_700_);
if (lean_obj_tag(v___x_702_) == 0)
{
lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_709_; 
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_702_);
if (v_isSharedCheck_709_ == 0)
{
lean_object* v_unused_710_; 
v_unused_710_ = lean_ctor_get(v___x_702_, 0);
lean_dec(v_unused_710_);
v___x_704_ = v___x_702_;
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
else
{
lean_dec(v___x_702_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_707_; 
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 0, v___x_701_);
v___x_707_ = v___x_704_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v___x_701_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
}
else
{
return v___x_702_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents___boxed(lean_object* v_parents_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents(v_parents_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_);
lean_dec(v_a_721_);
lean_dec_ref(v_a_720_);
lean_dec(v_a_719_);
lean_dec_ref(v_a_718_);
lean_dec(v_a_717_);
lean_dec_ref(v_a_716_);
lean_dec(v_a_715_);
lean_dec_ref(v_a_714_);
lean_dec(v_a_713_);
lean_dec(v_a_712_);
lean_dec(v_parents_711_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0(lean_object* v_as_724_, lean_object* v_as_x27_725_, lean_object* v_b_726_, lean_object* v_a_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
lean_object* v___x_739_; 
v___x_739_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg(v_as_x27_725_, v_b_726_, v___y_728_, v___y_729_, v___y_730_, v___y_731_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___boxed(lean_object* v_as_740_, lean_object* v_as_x27_741_, lean_object* v_b_742_, lean_object* v_a_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
lean_object* v_res_755_; 
v_res_755_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0(v_as_740_, v_as_x27_741_, v_b_742_, v_a_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_, v___y_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
lean_dec(v___y_749_);
lean_dec_ref(v___y_748_);
lean_dec(v___y_747_);
lean_dec_ref(v___y_746_);
lean_dec(v___y_745_);
lean_dec(v___y_744_);
lean_dec(v_as_x27_741_);
lean_dec(v_as_740_);
return v_res_755_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_keys_756_, lean_object* v_i_757_, lean_object* v_k_758_){
_start:
{
lean_object* v___x_759_; uint8_t v___x_760_; 
v___x_759_ = lean_array_get_size(v_keys_756_);
v___x_760_ = lean_nat_dec_lt(v_i_757_, v___x_759_);
if (v___x_760_ == 0)
{
lean_dec(v_i_757_);
return v___x_760_;
}
else
{
lean_object* v_k_x27_761_; uint8_t v___x_762_; 
v_k_x27_761_ = lean_array_fget_borrowed(v_keys_756_, v_i_757_);
v___x_762_ = l_Lean_instBEqMVarId_beq(v_k_758_, v_k_x27_761_);
if (v___x_762_ == 0)
{
lean_object* v___x_763_; lean_object* v___x_764_; 
v___x_763_ = lean_unsigned_to_nat(1u);
v___x_764_ = lean_nat_add(v_i_757_, v___x_763_);
lean_dec(v_i_757_);
v_i_757_ = v___x_764_;
goto _start;
}
else
{
lean_dec(v_i_757_);
return v___x_762_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_keys_766_, lean_object* v_i_767_, lean_object* v_k_768_){
_start:
{
uint8_t v_res_769_; lean_object* v_r_770_; 
v_res_769_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg(v_keys_766_, v_i_767_, v_k_768_);
lean_dec(v_k_768_);
lean_dec_ref(v_keys_766_);
v_r_770_ = lean_box(v_res_769_);
return v_r_770_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg(lean_object* v_x_771_, size_t v_x_772_, lean_object* v_x_773_){
_start:
{
if (lean_obj_tag(v_x_771_) == 0)
{
lean_object* v_es_774_; lean_object* v___x_775_; size_t v___x_776_; size_t v___x_777_; size_t v___x_778_; lean_object* v_j_779_; lean_object* v___x_780_; 
v_es_774_ = lean_ctor_get(v_x_771_, 0);
v___x_775_ = lean_box(2);
v___x_776_ = ((size_t)5ULL);
v___x_777_ = lean_usize_once(&l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1);
v___x_778_ = lean_usize_land(v_x_772_, v___x_777_);
v_j_779_ = lean_usize_to_nat(v___x_778_);
v___x_780_ = lean_array_get_borrowed(v___x_775_, v_es_774_, v_j_779_);
lean_dec(v_j_779_);
switch(lean_obj_tag(v___x_780_))
{
case 0:
{
lean_object* v_key_781_; uint8_t v___x_782_; 
v_key_781_ = lean_ctor_get(v___x_780_, 0);
v___x_782_ = l_Lean_instBEqMVarId_beq(v_x_773_, v_key_781_);
return v___x_782_;
}
case 1:
{
lean_object* v_node_783_; size_t v___x_784_; 
v_node_783_ = lean_ctor_get(v___x_780_, 0);
v___x_784_ = lean_usize_shift_right(v_x_772_, v___x_776_);
v_x_771_ = v_node_783_;
v_x_772_ = v___x_784_;
goto _start;
}
default: 
{
uint8_t v___x_786_; 
v___x_786_ = 0;
return v___x_786_;
}
}
}
else
{
lean_object* v_ks_787_; lean_object* v___x_788_; uint8_t v___x_789_; 
v_ks_787_ = lean_ctor_get(v_x_771_, 0);
v___x_788_ = lean_unsigned_to_nat(0u);
v___x_789_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg(v_ks_787_, v___x_788_, v_x_773_);
return v___x_789_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_790_, lean_object* v_x_791_, lean_object* v_x_792_){
_start:
{
size_t v_x_10579__boxed_793_; uint8_t v_res_794_; lean_object* v_r_795_; 
v_x_10579__boxed_793_ = lean_unbox_usize(v_x_791_);
lean_dec(v_x_791_);
v_res_794_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg(v_x_790_, v_x_10579__boxed_793_, v_x_792_);
lean_dec(v_x_792_);
lean_dec_ref(v_x_790_);
v_r_795_ = lean_box(v_res_794_);
return v_r_795_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg(lean_object* v_x_796_, lean_object* v_x_797_){
_start:
{
uint64_t v___x_798_; size_t v___x_799_; uint8_t v___x_800_; 
v___x_798_ = l_Lean_instHashableMVarId_hash(v_x_797_);
v___x_799_ = lean_uint64_to_usize(v___x_798_);
v___x_800_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg(v_x_796_, v___x_799_, v_x_797_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg___boxed(lean_object* v_x_801_, lean_object* v_x_802_){
_start:
{
uint8_t v_res_803_; lean_object* v_r_804_; 
v_res_803_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg(v_x_801_, v_x_802_);
lean_dec(v_x_802_);
lean_dec_ref(v_x_801_);
v_r_804_ = lean_box(v_res_803_);
return v_r_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg(lean_object* v_mvarId_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v_mctx_811_; lean_object* v_eAssignment_812_; uint8_t v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_809_ = lean_st_ref_get(v___y_807_);
lean_dec(v___x_809_);
v___x_810_ = lean_st_ref_get(v___y_806_);
v_mctx_811_ = lean_ctor_get(v___x_810_, 0);
lean_inc_ref(v_mctx_811_);
lean_dec(v___x_810_);
v_eAssignment_812_ = lean_ctor_get(v_mctx_811_, 8);
lean_inc_ref(v_eAssignment_812_);
lean_dec_ref(v_mctx_811_);
v___x_813_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg(v_eAssignment_812_, v_mvarId_805_);
lean_dec_ref(v_eAssignment_812_);
v___x_814_ = lean_box(v___x_813_);
v___x_815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_815_, 0, v___x_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg___boxed(lean_object* v_mvarId_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg(v_mvarId_816_, v___y_817_, v___y_818_);
lean_dec(v___y_818_);
lean_dec(v___y_817_);
lean_dec(v_mvarId_816_);
return v_res_820_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0(void){
_start:
{
lean_object* v___x_821_; 
v___x_821_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_821_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__1(void){
_start:
{
lean_object* v___x_822_; 
v___x_822_ = lean_mk_string_unchecked("mp", 2, 2);
return v___x_822_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2(void){
_start:
{
lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_823_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__1);
v___x_824_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0);
v___x_825_ = l_Lean_Name_mkStr2(v___x_824_, v___x_823_);
return v___x_825_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__3(void){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_826_ = lean_box(0);
v___x_827_ = lean_box(0);
v___x_828_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
lean_ctor_set(v___x_828_, 1, v___x_826_);
return v___x_828_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4(void){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_829_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__3, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__3);
v___x_830_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2);
v___x_831_ = l_Lean_mkConst(v___x_830_, v___x_829_);
return v___x_831_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5(void){
_start:
{
lean_object* v___x_832_; 
v___x_832_ = lean_mk_string_unchecked("True", 4, 4);
return v___x_832_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__6(void){
_start:
{
lean_object* v___x_833_; 
v___x_833_ = lean_mk_string_unchecked("intro", 5, 5);
return v___x_833_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__7(void){
_start:
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_834_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__6, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__6);
v___x_835_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5);
v___x_836_ = l_Lean_Name_mkStr2(v___x_835_, v___x_834_);
return v___x_836_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8(void){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_837_ = lean_box(0);
v___x_838_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__7, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__7);
v___x_839_ = l_Lean_mkConst(v___x_838_, v___x_837_);
return v___x_839_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse(lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v_mvarId_853_; lean_object* v___x_854_; lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_908_; 
v___x_851_ = lean_st_ref_get(v_a_849_);
lean_dec(v___x_851_);
v___x_852_ = lean_st_ref_get(v_a_840_);
v_mvarId_853_ = lean_ctor_get(v___x_852_, 1);
lean_inc(v_mvarId_853_);
lean_dec(v___x_852_);
v___x_854_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg(v_mvarId_853_, v_a_847_, v_a_849_);
lean_dec(v_mvarId_853_);
v_a_855_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_908_ == 0)
{
v___x_857_ = v___x_854_;
v_isShared_858_ = v_isSharedCheck_908_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_854_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_908_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
uint8_t v___x_859_; 
v___x_859_ = lean_unbox(v_a_855_);
lean_dec(v_a_855_);
if (v___x_859_ == 0)
{
lean_object* v___x_860_; 
lean_del_object(v___x_857_);
v___x_860_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_844_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; lean_object* v___x_862_; 
v_a_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc(v_a_861_);
lean_dec_ref(v___x_860_);
v___x_862_ = l_Lean_Meta_Grind_mkEqFalseProof(v_a_861_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v_a_863_; lean_object* v___x_864_; 
v_a_863_ = lean_ctor_get(v___x_862_, 0);
lean_inc(v_a_863_);
lean_dec_ref(v___x_862_);
v___x_864_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_844_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; lean_object* v___x_866_; 
v_a_865_ = lean_ctor_get(v___x_864_, 0);
lean_inc(v_a_865_);
lean_dec_ref(v___x_864_);
v___x_866_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_844_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v_a_867_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_a_867_);
lean_dec_ref(v___x_866_);
v___x_868_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4);
v___x_869_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8);
v___x_870_ = l_Lean_mkApp4(v___x_868_, v_a_865_, v_a_867_, v_a_863_, v___x_869_);
v___x_871_ = l_Lean_Meta_Grind_closeGoal(v___x_870_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_);
return v___x_871_;
}
else
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_879_; 
lean_dec(v_a_865_);
lean_dec(v_a_863_);
v_a_872_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_879_ == 0)
{
v___x_874_ = v___x_866_;
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v___x_866_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_877_; 
if (v_isShared_875_ == 0)
{
v___x_877_ = v___x_874_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_a_872_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
}
}
else
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_887_; 
lean_dec(v_a_863_);
v_a_880_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_887_ == 0)
{
v___x_882_ = v___x_864_;
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_864_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_885_; 
if (v_isShared_883_ == 0)
{
v___x_885_ = v___x_882_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_a_880_);
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
v_a_888_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_895_ == 0)
{
v___x_890_ = v___x_862_;
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_862_);
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
else
{
lean_object* v_a_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_903_; 
v_a_896_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_903_ == 0)
{
v___x_898_ = v___x_860_;
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_a_896_);
lean_dec(v___x_860_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_901_; 
if (v_isShared_899_ == 0)
{
v___x_901_ = v___x_898_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_a_896_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
else
{
lean_object* v___x_904_; lean_object* v___x_906_; 
v___x_904_ = lean_box(0);
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 0, v___x_904_);
v___x_906_ = v___x_857_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v___x_904_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___boxed(lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse(v_a_909_, v_a_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_);
lean_dec(v_a_918_);
lean_dec_ref(v_a_917_);
lean_dec(v_a_916_);
lean_dec_ref(v_a_915_);
lean_dec(v_a_914_);
lean_dec_ref(v_a_913_);
lean_dec(v_a_912_);
lean_dec_ref(v_a_911_);
lean_dec(v_a_910_);
lean_dec(v_a_909_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0(lean_object* v_mvarId_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
lean_object* v___x_933_; 
v___x_933_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg(v_mvarId_921_, v___y_929_, v___y_931_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___boxed(lean_object* v_mvarId_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_){
_start:
{
lean_object* v_res_946_; 
v_res_946_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0(v_mvarId_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_);
lean_dec(v___y_944_);
lean_dec_ref(v___y_943_);
lean_dec(v___y_942_);
lean_dec_ref(v___y_941_);
lean_dec(v___y_940_);
lean_dec_ref(v___y_939_);
lean_dec(v___y_938_);
lean_dec_ref(v___y_937_);
lean_dec(v___y_936_);
lean_dec(v___y_935_);
lean_dec(v_mvarId_934_);
return v_res_946_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0(lean_object* v_00_u03b2_947_, lean_object* v_x_948_, lean_object* v_x_949_){
_start:
{
uint8_t v___x_950_; 
v___x_950_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg(v_x_948_, v_x_949_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___boxed(lean_object* v_00_u03b2_951_, lean_object* v_x_952_, lean_object* v_x_953_){
_start:
{
uint8_t v_res_954_; lean_object* v_r_955_; 
v_res_954_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0(v_00_u03b2_951_, v_x_952_, v_x_953_);
lean_dec(v_x_953_);
lean_dec_ref(v_x_952_);
v_r_955_ = lean_box(v_res_954_);
return v_r_955_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_956_, lean_object* v_x_957_, size_t v_x_958_, lean_object* v_x_959_){
_start:
{
uint8_t v___x_960_; 
v___x_960_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg(v_x_957_, v_x_958_, v_x_959_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_961_, lean_object* v_x_962_, lean_object* v_x_963_, lean_object* v_x_964_){
_start:
{
size_t v_x_10871__boxed_965_; uint8_t v_res_966_; lean_object* v_r_967_; 
v_x_10871__boxed_965_ = lean_unbox_usize(v_x_963_);
lean_dec(v_x_963_);
v_res_966_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1(v_00_u03b2_961_, v_x_962_, v_x_10871__boxed_965_, v_x_964_);
lean_dec(v_x_964_);
lean_dec_ref(v_x_962_);
v_r_967_ = lean_box(v_res_966_);
return v_r_967_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_968_, lean_object* v_keys_969_, lean_object* v_vals_970_, lean_object* v_heq_971_, lean_object* v_i_972_, lean_object* v_k_973_){
_start:
{
uint8_t v___x_974_; 
v___x_974_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg(v_keys_969_, v_i_972_, v_k_973_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_975_, lean_object* v_keys_976_, lean_object* v_vals_977_, lean_object* v_heq_978_, lean_object* v_i_979_, lean_object* v_k_980_){
_start:
{
uint8_t v_res_981_; lean_object* v_r_982_; 
v_res_981_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2(v_00_u03b2_975_, v_keys_976_, v_vals_977_, v_heq_978_, v_i_979_, v_k_980_);
lean_dec(v_k_980_);
lean_dec_ref(v_vals_977_);
lean_dec_ref(v_keys_976_);
v_r_982_ = lean_box(v_res_981_);
return v_r_982_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__0(void){
_start:
{
lean_object* v___x_983_; 
v___x_983_ = lean_mk_string_unchecked("eq_false_of_decide", 18, 18);
return v___x_983_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__1(void){
_start:
{
lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_984_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__0, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__0);
v___x_985_ = l_Lean_Name_mkStr1(v___x_984_);
return v___x_985_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2(void){
_start:
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_986_ = lean_box(0);
v___x_987_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__1);
v___x_988_ = l_Lean_mkConst(v___x_987_, v___x_986_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq(lean_object* v_lhs_989_, lean_object* v_rhs_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_){
_start:
{
lean_object* v___x_1002_; 
lean_inc_ref(v_rhs_990_);
lean_inc_ref(v_lhs_989_);
v___x_1002_ = l_Lean_Meta_mkEq(v_lhs_989_, v_rhs_990_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_);
if (lean_obj_tag(v___x_1002_) == 0)
{
lean_object* v_a_1003_; lean_object* v___x_1004_; 
v_a_1003_ = lean_ctor_get(v___x_1002_, 0);
lean_inc(v_a_1003_);
lean_dec_ref(v___x_1002_);
lean_inc(v_a_1000_);
lean_inc_ref(v_a_999_);
lean_inc(v_a_998_);
lean_inc_ref(v_a_997_);
lean_inc(v_a_996_);
lean_inc_ref(v_a_995_);
lean_inc(v_a_994_);
lean_inc_ref(v_a_993_);
lean_inc(v_a_992_);
lean_inc(v_a_991_);
v___x_1004_ = lean_grind_mk_eq_proof(v_lhs_989_, v_rhs_990_, v_a_991_, v_a_992_, v_a_993_, v_a_994_, v_a_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; lean_object* v___x_1006_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_a_1005_);
lean_dec_ref(v___x_1004_);
lean_inc(v_a_1003_);
v___x_1006_ = l_Lean_Meta_mkDecide(v_a_1003_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1008_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
lean_inc(v_a_1007_);
lean_dec_ref(v___x_1006_);
v___x_1008_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_995_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v_a_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v_a_1009_ = lean_ctor_get(v___x_1008_, 0);
lean_inc(v_a_1009_);
lean_dec_ref(v___x_1008_);
v___x_1010_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2);
v___x_1011_ = l_Lean_Expr_appArg_x21(v_a_1007_);
lean_dec(v_a_1007_);
v___x_1012_ = l_Lean_eagerReflBoolFalse;
lean_inc(v_a_1003_);
v___x_1013_ = l_Lean_mkApp3(v___x_1010_, v_a_1003_, v___x_1011_, v___x_1012_);
v___x_1014_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4);
v___x_1015_ = l_Lean_mkApp4(v___x_1014_, v_a_1003_, v_a_1009_, v___x_1013_, v_a_1005_);
v___x_1016_ = l_Lean_Meta_Grind_closeGoal(v___x_1015_, v_a_991_, v_a_992_, v_a_993_, v_a_994_, v_a_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_);
return v___x_1016_;
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
lean_dec(v_a_1007_);
lean_dec(v_a_1005_);
lean_dec(v_a_1003_);
v_a_1017_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_1008_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_1008_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
lean_dec(v_a_1005_);
lean_dec(v_a_1003_);
v_a_1025_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_1006_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1006_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
}
else
{
lean_object* v_a_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1040_; 
lean_dec(v_a_1003_);
v_a_1033_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1035_ = v___x_1004_;
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_a_1033_);
lean_dec(v___x_1004_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1038_; 
if (v_isShared_1036_ == 0)
{
v___x_1038_ = v___x_1035_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_a_1033_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
}
else
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1048_; 
lean_dec_ref(v_rhs_990_);
lean_dec_ref(v_lhs_989_);
v_a_1041_ = lean_ctor_get(v___x_1002_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1043_ = v___x_1002_;
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___x_1002_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1046_; 
if (v_isShared_1044_ == 0)
{
v___x_1046_ = v___x_1043_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_a_1041_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___boxed(lean_object* v_lhs_1049_, lean_object* v_rhs_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq(v_lhs_1049_, v_rhs_1050_, v_a_1051_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_);
lean_dec(v_a_1060_);
lean_dec_ref(v_a_1059_);
lean_dec(v_a_1058_);
lean_dec_ref(v_a_1057_);
lean_dec(v_a_1056_);
lean_dec_ref(v_a_1055_);
lean_dec(v_a_1054_);
lean_dec_ref(v_a_1053_);
lean_dec(v_a_1052_);
lean_dec(v_a_1051_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg(lean_object* v___x_1063_, lean_object* v_as_x27_1064_, lean_object* v_b_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_){
_start:
{
if (lean_obj_tag(v_as_x27_1064_) == 0)
{
lean_object* v___x_1077_; 
lean_dec(v___x_1063_);
v___x_1077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1077_, 0, v_b_1065_);
return v___x_1077_;
}
else
{
lean_object* v_head_1078_; lean_object* v_tail_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; 
v_head_1078_ = lean_ctor_get(v_as_x27_1064_, 0);
v_tail_1079_ = lean_ctor_get(v_as_x27_1064_, 1);
v___x_1080_ = lean_st_ref_get(v___y_1075_);
lean_dec(v___x_1080_);
v___x_1081_ = lean_st_ref_get(v___y_1066_);
lean_inc(v_head_1078_);
v___x_1082_ = l_Lean_Meta_Grind_Goal_getENode(v___x_1081_, v_head_1078_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_);
lean_dec(v___x_1081_);
if (lean_obj_tag(v___x_1082_) == 0)
{
lean_object* v_a_1083_; lean_object* v_self_1084_; lean_object* v_next_1085_; lean_object* v_root_1086_; lean_object* v_congr_1087_; lean_object* v_target_x3f_1088_; lean_object* v_proof_x3f_1089_; uint8_t v_flipped_1090_; lean_object* v_size_1091_; uint8_t v_interpreted_1092_; uint8_t v_ctor_1093_; uint8_t v_hasLambdas_1094_; uint8_t v_heqProofs_1095_; lean_object* v_idx_1096_; lean_object* v_generation_1097_; lean_object* v_mt_1098_; lean_object* v_sTerms_1099_; uint8_t v_funCC_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1113_; 
v_a_1083_ = lean_ctor_get(v___x_1082_, 0);
lean_inc(v_a_1083_);
lean_dec_ref(v___x_1082_);
v_self_1084_ = lean_ctor_get(v_a_1083_, 0);
v_next_1085_ = lean_ctor_get(v_a_1083_, 1);
v_root_1086_ = lean_ctor_get(v_a_1083_, 2);
v_congr_1087_ = lean_ctor_get(v_a_1083_, 3);
v_target_x3f_1088_ = lean_ctor_get(v_a_1083_, 4);
v_proof_x3f_1089_ = lean_ctor_get(v_a_1083_, 5);
v_flipped_1090_ = lean_ctor_get_uint8(v_a_1083_, sizeof(void*)*11);
v_size_1091_ = lean_ctor_get(v_a_1083_, 6);
v_interpreted_1092_ = lean_ctor_get_uint8(v_a_1083_, sizeof(void*)*11 + 1);
v_ctor_1093_ = lean_ctor_get_uint8(v_a_1083_, sizeof(void*)*11 + 2);
v_hasLambdas_1094_ = lean_ctor_get_uint8(v_a_1083_, sizeof(void*)*11 + 3);
v_heqProofs_1095_ = lean_ctor_get_uint8(v_a_1083_, sizeof(void*)*11 + 4);
v_idx_1096_ = lean_ctor_get(v_a_1083_, 7);
v_generation_1097_ = lean_ctor_get(v_a_1083_, 8);
v_mt_1098_ = lean_ctor_get(v_a_1083_, 9);
v_sTerms_1099_ = lean_ctor_get(v_a_1083_, 10);
v_funCC_1100_ = lean_ctor_get_uint8(v_a_1083_, sizeof(void*)*11 + 5);
v_isSharedCheck_1113_ = !lean_is_exclusive(v_a_1083_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1102_ = v_a_1083_;
v_isShared_1103_ = v_isSharedCheck_1113_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_sTerms_1099_);
lean_inc(v_mt_1098_);
lean_inc(v_generation_1097_);
lean_inc(v_idx_1096_);
lean_inc(v_size_1091_);
lean_inc(v_proof_x3f_1089_);
lean_inc(v_target_x3f_1088_);
lean_inc(v_congr_1087_);
lean_inc(v_root_1086_);
lean_inc(v_next_1085_);
lean_inc(v_self_1084_);
lean_dec(v_a_1083_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1113_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1104_; uint8_t v___x_1105_; 
v___x_1104_ = lean_box(0);
v___x_1105_ = lean_nat_dec_lt(v_mt_1098_, v___x_1063_);
lean_dec(v_mt_1098_);
if (v___x_1105_ == 0)
{
lean_del_object(v___x_1102_);
lean_dec(v_sTerms_1099_);
lean_dec(v_generation_1097_);
lean_dec(v_idx_1096_);
lean_dec(v_size_1091_);
lean_dec(v_proof_x3f_1089_);
lean_dec(v_target_x3f_1088_);
lean_dec_ref(v_congr_1087_);
lean_dec_ref(v_root_1086_);
lean_dec_ref(v_next_1085_);
lean_dec_ref(v_self_1084_);
v_as_x27_1064_ = v_tail_1079_;
v_b_1065_ = v___x_1104_;
goto _start;
}
else
{
lean_object* v___x_1108_; 
lean_inc(v___x_1063_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 9, v___x_1063_);
v___x_1108_ = v___x_1102_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(0, 11, 6);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v_self_1084_);
lean_ctor_set(v_reuseFailAlloc_1112_, 1, v_next_1085_);
lean_ctor_set(v_reuseFailAlloc_1112_, 2, v_root_1086_);
lean_ctor_set(v_reuseFailAlloc_1112_, 3, v_congr_1087_);
lean_ctor_set(v_reuseFailAlloc_1112_, 4, v_target_x3f_1088_);
lean_ctor_set(v_reuseFailAlloc_1112_, 5, v_proof_x3f_1089_);
lean_ctor_set(v_reuseFailAlloc_1112_, 6, v_size_1091_);
lean_ctor_set(v_reuseFailAlloc_1112_, 7, v_idx_1096_);
lean_ctor_set(v_reuseFailAlloc_1112_, 8, v_generation_1097_);
lean_ctor_set(v_reuseFailAlloc_1112_, 9, v___x_1063_);
lean_ctor_set(v_reuseFailAlloc_1112_, 10, v_sTerms_1099_);
lean_ctor_set_uint8(v_reuseFailAlloc_1112_, sizeof(void*)*11, v_flipped_1090_);
lean_ctor_set_uint8(v_reuseFailAlloc_1112_, sizeof(void*)*11 + 1, v_interpreted_1092_);
lean_ctor_set_uint8(v_reuseFailAlloc_1112_, sizeof(void*)*11 + 2, v_ctor_1093_);
lean_ctor_set_uint8(v_reuseFailAlloc_1112_, sizeof(void*)*11 + 3, v_hasLambdas_1094_);
lean_ctor_set_uint8(v_reuseFailAlloc_1112_, sizeof(void*)*11 + 4, v_heqProofs_1095_);
lean_ctor_set_uint8(v_reuseFailAlloc_1112_, sizeof(void*)*11 + 5, v_funCC_1100_);
v___x_1108_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
lean_object* v___x_1109_; 
lean_inc(v_head_1078_);
v___x_1109_ = l_Lean_Meta_Grind_setENode___redArg(v_head_1078_, v___x_1108_, v___y_1066_, v___y_1075_);
if (lean_obj_tag(v___x_1109_) == 0)
{
lean_object* v___x_1110_; 
lean_dec_ref(v___x_1109_);
v___x_1110_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT(v_head_1078_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_dec_ref(v___x_1110_);
v_as_x27_1064_ = v_tail_1079_;
v_b_1065_ = v___x_1104_;
goto _start;
}
else
{
lean_dec(v___x_1063_);
return v___x_1110_;
}
}
else
{
lean_dec(v___x_1063_);
return v___x_1109_;
}
}
}
}
}
else
{
lean_object* v_a_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1121_; 
lean_dec(v___x_1063_);
v_a_1114_ = lean_ctor_get(v___x_1082_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v___x_1082_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1116_ = v___x_1082_;
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_a_1114_);
lean_dec(v___x_1082_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1119_; 
if (v_isShared_1117_ == 0)
{
v___x_1119_ = v___x_1116_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_a_1114_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
return v___x_1119_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT(lean_object* v_root_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_){
_start:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1134_ = lean_st_ref_get(v_a_1132_);
lean_dec(v___x_1134_);
v___x_1135_ = lean_st_ref_get(v_a_1123_);
v___x_1136_ = l_Lean_Meta_Grind_getParents___redArg(v_root_1122_, v_a_1123_, v_a_1132_);
if (lean_obj_tag(v___x_1136_) == 0)
{
lean_object* v_toGoalState_1137_; lean_object* v_ematch_1138_; lean_object* v_a_1139_; lean_object* v_gmt_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
v_toGoalState_1137_ = lean_ctor_get(v___x_1135_, 0);
lean_inc_ref(v_toGoalState_1137_);
lean_dec(v___x_1135_);
v_ematch_1138_ = lean_ctor_get(v_toGoalState_1137_, 12);
lean_inc_ref(v_ematch_1138_);
lean_dec_ref(v_toGoalState_1137_);
v_a_1139_ = lean_ctor_get(v___x_1136_, 0);
lean_inc(v_a_1139_);
lean_dec_ref(v___x_1136_);
v_gmt_1140_ = lean_ctor_get(v_ematch_1138_, 1);
lean_inc(v_gmt_1140_);
lean_dec_ref(v_ematch_1138_);
v___x_1141_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_1139_);
lean_dec(v_a_1139_);
v___x_1142_ = lean_box(0);
v___x_1143_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg(v_gmt_1140_, v___x_1141_, v___x_1142_, v_a_1123_, v_a_1124_, v_a_1125_, v_a_1126_, v_a_1127_, v_a_1128_, v_a_1129_, v_a_1130_, v_a_1131_, v_a_1132_);
lean_dec(v___x_1141_);
if (lean_obj_tag(v___x_1143_) == 0)
{
lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1150_; 
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1143_);
if (v_isSharedCheck_1150_ == 0)
{
lean_object* v_unused_1151_; 
v_unused_1151_ = lean_ctor_get(v___x_1143_, 0);
lean_dec(v_unused_1151_);
v___x_1145_ = v___x_1143_;
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
else
{
lean_dec(v___x_1143_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
if (v_isShared_1146_ == 0)
{
lean_ctor_set(v___x_1145_, 0, v___x_1142_);
v___x_1148_ = v___x_1145_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v___x_1142_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
return v___x_1148_;
}
}
}
else
{
return v___x_1143_;
}
}
else
{
lean_object* v_a_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1159_; 
lean_dec(v___x_1135_);
v_a_1152_ = lean_ctor_get(v___x_1136_, 0);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1136_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1154_ = v___x_1136_;
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_a_1152_);
lean_dec(v___x_1136_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1157_; 
if (v_isShared_1155_ == 0)
{
v___x_1157_ = v___x_1154_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_a_1152_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT___boxed(lean_object* v_root_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_, lean_object* v_a_1170_, lean_object* v_a_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT(v_root_1160_, v_a_1161_, v_a_1162_, v_a_1163_, v_a_1164_, v_a_1165_, v_a_1166_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_);
lean_dec(v_a_1170_);
lean_dec_ref(v_a_1169_);
lean_dec(v_a_1168_);
lean_dec_ref(v_a_1167_);
lean_dec(v_a_1166_);
lean_dec_ref(v_a_1165_);
lean_dec(v_a_1164_);
lean_dec_ref(v_a_1163_);
lean_dec(v_a_1162_);
lean_dec(v_a_1161_);
lean_dec_ref(v_root_1160_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg___boxed(lean_object* v___x_1173_, lean_object* v_as_x27_1174_, lean_object* v_b_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg(v___x_1173_, v_as_x27_1174_, v_b_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
lean_dec(v___y_1179_);
lean_dec_ref(v___y_1178_);
lean_dec(v___y_1177_);
lean_dec(v___y_1176_);
lean_dec(v_as_x27_1174_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0(lean_object* v___x_1188_, lean_object* v_as_1189_, lean_object* v_as_x27_1190_, lean_object* v_b_1191_, lean_object* v_a_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_){
_start:
{
lean_object* v___x_1204_; 
v___x_1204_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg(v___x_1188_, v_as_x27_1190_, v_b_1191_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___boxed(lean_object* v___x_1205_, lean_object* v_as_1206_, lean_object* v_as_x27_1207_, lean_object* v_b_1208_, lean_object* v_a_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_){
_start:
{
lean_object* v_res_1221_; 
v_res_1221_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0(v___x_1205_, v_as_1206_, v_as_x27_1207_, v_b_1208_, v_a_1209_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_);
lean_dec(v___y_1219_);
lean_dec_ref(v___y_1218_);
lean_dec(v___y_1217_);
lean_dec_ref(v___y_1216_);
lean_dec(v___y_1215_);
lean_dec_ref(v___y_1214_);
lean_dec(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_dec(v___y_1211_);
lean_dec(v___y_1210_);
lean_dec(v_as_x27_1207_);
lean_dec(v_as_1206_);
return v_res_1221_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(lean_object* v_a_1222_, lean_object* v_a_1223_){
_start:
{
if (lean_obj_tag(v_a_1222_) == 0)
{
lean_object* v___x_1224_; 
v___x_1224_ = l_List_reverse___redArg(v_a_1223_);
return v___x_1224_;
}
else
{
lean_object* v_head_1225_; lean_object* v_tail_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1235_; 
v_head_1225_ = lean_ctor_get(v_a_1222_, 0);
v_tail_1226_ = lean_ctor_get(v_a_1222_, 1);
v_isSharedCheck_1235_ = !lean_is_exclusive(v_a_1222_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1228_ = v_a_1222_;
v_isShared_1229_ = v_isSharedCheck_1235_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_tail_1226_);
lean_inc(v_head_1225_);
lean_dec(v_a_1222_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1235_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1230_; lean_object* v___x_1232_; 
v___x_1230_ = l_Lean_MessageData_ofExpr(v_head_1225_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 1, v_a_1223_);
lean_ctor_set(v___x_1228_, 0, v___x_1230_);
v___x_1232_ = v___x_1228_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v___x_1230_);
lean_ctor_set(v_reuseFailAlloc_1234_, 1, v_a_1223_);
v___x_1232_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
v_a_1222_ = v_tail_1226_;
v_a_1223_ = v___x_1232_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1236_; 
v___x_1236_ = lean_mk_string_unchecked("beta", 4, 4);
return v___x_1236_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1237_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__0);
v___x_1238_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1);
v___x_1239_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0);
v___x_1240_ = l_Lean_Name_mkStr3(v___x_1239_, v___x_1238_, v___x_1237_);
return v___x_1240_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1241_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1);
v___x_1242_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5);
v___x_1243_ = l_Lean_Name_append(v___x_1242_, v___x_1241_);
return v___x_1243_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1244_; 
v___x_1244_ = lean_mk_string_unchecked("curr: ", 6, 6);
return v___x_1244_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1245_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__3, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__3_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__3);
v___x_1246_ = l_Lean_stringToMessageData(v___x_1245_);
return v___x_1246_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0(lean_object* v_a_1247_, lean_object* v_a_1248_, lean_object* v_lams_1249_, lean_object* v_b_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_){
_start:
{
lean_object* v_fst_1262_; lean_object* v_snd_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1368_; 
v_fst_1262_ = lean_ctor_get(v_b_1250_, 0);
v_snd_1263_ = lean_ctor_get(v_b_1250_, 1);
v_isSharedCheck_1368_ = !lean_is_exclusive(v_b_1250_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1265_ = v_b_1250_;
v_isShared_1266_ = v_isSharedCheck_1368_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_snd_1263_);
lean_inc(v_fst_1262_);
lean_dec(v_b_1250_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1368_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___y_1268_; lean_object* v___y_1269_; lean_object* v___y_1270_; lean_object* v___y_1271_; lean_object* v___y_1272_; lean_object* v___y_1273_; lean_object* v___y_1274_; lean_object* v___y_1275_; lean_object* v___y_1276_; lean_object* v___y_1277_; lean_object* v___y_1310_; lean_object* v___y_1311_; lean_object* v___y_1312_; lean_object* v___y_1313_; lean_object* v___y_1314_; lean_object* v___y_1315_; lean_object* v___y_1316_; lean_object* v___y_1317_; lean_object* v___y_1318_; lean_object* v___y_1319_; lean_object* v_options_1341_; uint8_t v_hasTrace_1342_; 
v_options_1341_ = lean_ctor_get(v___y_1259_, 2);
v_hasTrace_1342_ = lean_ctor_get_uint8(v_options_1341_, sizeof(void*)*1);
if (v_hasTrace_1342_ == 0)
{
v___y_1310_ = v___y_1251_;
v___y_1311_ = v___y_1252_;
v___y_1312_ = v___y_1253_;
v___y_1313_ = v___y_1254_;
v___y_1314_ = v___y_1255_;
v___y_1315_ = v___y_1256_;
v___y_1316_ = v___y_1257_;
v___y_1317_ = v___y_1258_;
v___y_1318_ = v___y_1259_;
v___y_1319_ = v___y_1260_;
goto v___jp_1309_;
}
else
{
lean_object* v_inheritedTraceOptions_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; uint8_t v___x_1346_; 
v_inheritedTraceOptions_1343_ = lean_ctor_get(v___y_1259_, 13);
v___x_1344_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1);
v___x_1345_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2);
v___x_1346_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1343_, v_options_1341_, v___x_1345_);
if (v___x_1346_ == 0)
{
v___y_1310_ = v___y_1251_;
v___y_1311_ = v___y_1252_;
v___y_1312_ = v___y_1253_;
v___y_1313_ = v___y_1254_;
v___y_1314_ = v___y_1255_;
v___y_1315_ = v___y_1256_;
v___y_1316_ = v___y_1257_;
v___y_1317_ = v___y_1258_;
v___y_1318_ = v___y_1259_;
v___y_1319_ = v___y_1260_;
goto v___jp_1309_;
}
else
{
lean_object* v___x_1347_; 
v___x_1347_ = l_Lean_Meta_Grind_updateLastTag(v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
if (lean_obj_tag(v___x_1347_) == 0)
{
lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
lean_dec_ref(v___x_1347_);
v___x_1348_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__4, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__4_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__4);
lean_inc(v_snd_1263_);
v___x_1349_ = l_Lean_MessageData_ofExpr(v_snd_1263_);
v___x_1350_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1348_);
lean_ctor_set(v___x_1350_, 1, v___x_1349_);
v___x_1351_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1344_, v___x_1350_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
if (lean_obj_tag(v___x_1351_) == 0)
{
lean_dec_ref(v___x_1351_);
v___y_1310_ = v___y_1251_;
v___y_1311_ = v___y_1252_;
v___y_1312_ = v___y_1253_;
v___y_1313_ = v___y_1254_;
v___y_1314_ = v___y_1255_;
v___y_1315_ = v___y_1256_;
v___y_1316_ = v___y_1257_;
v___y_1317_ = v___y_1258_;
v___y_1318_ = v___y_1259_;
v___y_1319_ = v___y_1260_;
goto v___jp_1309_;
}
else
{
lean_object* v_a_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1359_; 
lean_del_object(v___x_1265_);
lean_dec(v_snd_1263_);
lean_dec(v_fst_1262_);
v_a_1352_ = lean_ctor_get(v___x_1351_, 0);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1351_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1354_ = v___x_1351_;
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_a_1352_);
lean_dec(v___x_1351_);
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
else
{
lean_object* v_a_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1367_; 
lean_del_object(v___x_1265_);
lean_dec(v_snd_1263_);
lean_dec(v_fst_1262_);
v_a_1360_ = lean_ctor_get(v___x_1347_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1347_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1362_ = v___x_1347_;
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_a_1360_);
lean_dec(v___x_1347_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v___x_1365_; 
if (v_isShared_1363_ == 0)
{
v___x_1365_ = v___x_1362_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_a_1360_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
return v___x_1365_;
}
}
}
}
}
v___jp_1267_:
{
if (lean_obj_tag(v_snd_1263_) == 5)
{
lean_object* v_fn_1278_; lean_object* v_arg_1279_; lean_object* v___x_1280_; 
v_fn_1278_ = lean_ctor_get(v_snd_1263_, 0);
lean_inc_ref(v_fn_1278_);
v_arg_1279_ = lean_ctor_get(v_snd_1263_, 1);
lean_inc_ref(v_arg_1279_);
v___x_1280_ = l_Lean_Meta_Grind_getGeneration___redArg(v_a_1247_, v___y_1268_, v___y_1277_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v_a_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v_a_1281_ = lean_ctor_get(v___x_1280_, 0);
lean_inc(v_a_1281_);
lean_dec_ref(v___x_1280_);
v___x_1282_ = lean_box(0);
lean_inc(v___y_1277_);
lean_inc_ref(v___y_1276_);
lean_inc(v___y_1275_);
lean_inc_ref(v___y_1274_);
lean_inc(v___y_1273_);
lean_inc_ref(v___y_1272_);
lean_inc(v___y_1271_);
lean_inc_ref(v___y_1270_);
lean_inc(v___y_1269_);
lean_inc(v___y_1268_);
v___x_1283_ = lean_grind_internalize(v_snd_1263_, v_a_1281_, v___x_1282_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_);
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v___x_1284_; lean_object* v___x_1286_; 
lean_dec_ref(v___x_1283_);
v___x_1284_ = lean_array_push(v_fst_1262_, v_arg_1279_);
if (v_isShared_1266_ == 0)
{
lean_ctor_set(v___x_1265_, 1, v_fn_1278_);
lean_ctor_set(v___x_1265_, 0, v___x_1284_);
v___x_1286_ = v___x_1265_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v___x_1284_);
lean_ctor_set(v_reuseFailAlloc_1288_, 1, v_fn_1278_);
v___x_1286_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
v_b_1250_ = v___x_1286_;
goto _start;
}
}
else
{
lean_object* v_a_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1296_; 
lean_dec_ref(v_arg_1279_);
lean_dec_ref(v_fn_1278_);
lean_del_object(v___x_1265_);
lean_dec(v_fst_1262_);
v_a_1289_ = lean_ctor_get(v___x_1283_, 0);
v_isSharedCheck_1296_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1291_ = v___x_1283_;
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_a_1289_);
lean_dec(v___x_1283_);
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
else
{
lean_object* v_a_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1304_; 
lean_dec_ref(v_arg_1279_);
lean_dec_ref(v_snd_1263_);
lean_dec_ref(v_fn_1278_);
lean_del_object(v___x_1265_);
lean_dec(v_fst_1262_);
v_a_1297_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1304_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1299_ = v___x_1280_;
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_a_1297_);
lean_dec(v___x_1280_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1302_; 
if (v_isShared_1300_ == 0)
{
v___x_1302_ = v___x_1299_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v_a_1297_);
v___x_1302_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
return v___x_1302_;
}
}
}
}
else
{
lean_object* v___x_1306_; 
if (v_isShared_1266_ == 0)
{
v___x_1306_ = v___x_1265_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_fst_1262_);
lean_ctor_set(v_reuseFailAlloc_1308_, 1, v_snd_1263_);
v___x_1306_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
lean_object* v___x_1307_; 
v___x_1307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
return v___x_1307_;
}
}
}
v___jp_1309_:
{
lean_object* v___x_1320_; 
v___x_1320_ = l_Lean_Meta_Grind_isEqv___redArg(v_snd_1263_, v_a_1248_, v___y_1310_, v___y_1319_);
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v_a_1321_; uint8_t v___x_1322_; 
v_a_1321_ = lean_ctor_get(v___x_1320_, 0);
lean_inc(v_a_1321_);
lean_dec_ref(v___x_1320_);
v___x_1322_ = lean_unbox(v_a_1321_);
lean_dec(v_a_1321_);
if (v___x_1322_ == 0)
{
v___y_1268_ = v___y_1310_;
v___y_1269_ = v___y_1311_;
v___y_1270_ = v___y_1312_;
v___y_1271_ = v___y_1313_;
v___y_1272_ = v___y_1314_;
v___y_1273_ = v___y_1315_;
v___y_1274_ = v___y_1316_;
v___y_1275_ = v___y_1317_;
v___y_1276_ = v___y_1318_;
v___y_1277_ = v___y_1319_;
goto v___jp_1267_;
}
else
{
lean_object* v___x_1323_; lean_object* v___x_1324_; 
lean_inc(v_fst_1262_);
v___x_1323_ = l_Array_reverse___redArg(v_fst_1262_);
lean_inc(v_snd_1263_);
v___x_1324_ = l_Lean_Meta_Grind_propagateBetaEqs(v_lams_1249_, v_snd_1263_, v___x_1323_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_);
if (lean_obj_tag(v___x_1324_) == 0)
{
lean_dec_ref(v___x_1324_);
v___y_1268_ = v___y_1310_;
v___y_1269_ = v___y_1311_;
v___y_1270_ = v___y_1312_;
v___y_1271_ = v___y_1313_;
v___y_1272_ = v___y_1314_;
v___y_1273_ = v___y_1315_;
v___y_1274_ = v___y_1316_;
v___y_1275_ = v___y_1317_;
v___y_1276_ = v___y_1318_;
v___y_1277_ = v___y_1319_;
goto v___jp_1267_;
}
else
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
lean_del_object(v___x_1265_);
lean_dec(v_snd_1263_);
lean_dec(v_fst_1262_);
v_a_1325_ = lean_ctor_get(v___x_1324_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1324_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1327_ = v___x_1324_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1324_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1325_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
}
}
else
{
lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1340_; 
lean_del_object(v___x_1265_);
lean_dec(v_snd_1263_);
lean_dec(v_fst_1262_);
v_a_1333_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1340_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1335_ = v___x_1320_;
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_dec(v___x_1320_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1338_; 
if (v_isShared_1336_ == 0)
{
v___x_1338_ = v___x_1335_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_a_1333_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___boxed(lean_object* v_a_1369_, lean_object* v_a_1370_, lean_object* v_lams_1371_, lean_object* v_b_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_){
_start:
{
lean_object* v_res_1384_; 
v_res_1384_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0(v_a_1369_, v_a_1370_, v_lams_1371_, v_b_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
lean_dec(v___y_1382_);
lean_dec_ref(v___y_1381_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
lean_dec(v___y_1378_);
lean_dec_ref(v___y_1377_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
lean_dec(v___y_1374_);
lean_dec(v___y_1373_);
lean_dec_ref(v_lams_1371_);
lean_dec_ref(v_a_1370_);
lean_dec_ref(v_a_1369_);
return v_res_1384_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1385_; lean_object* v___x_1386_; 
v___x_1385_ = lean_unsigned_to_nat(0u);
v___x_1386_ = lean_mk_empty_array_with_capacity(v___x_1385_);
return v___x_1386_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1387_; 
v___x_1387_ = lean_mk_string_unchecked("parent: ", 8, 8);
return v___x_1387_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1388_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__1, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__1);
v___x_1389_ = l_Lean_stringToMessageData(v___x_1388_);
return v___x_1389_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg(lean_object* v_a_1390_, lean_object* v_lams_1391_, lean_object* v_as_x27_1392_, lean_object* v_b_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_){
_start:
{
if (lean_obj_tag(v_as_x27_1392_) == 0)
{
lean_object* v___x_1405_; 
v___x_1405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1405_, 0, v_b_1393_);
return v___x_1405_;
}
else
{
lean_object* v_options_1406_; lean_object* v_head_1407_; lean_object* v_tail_1408_; lean_object* v_inheritedTraceOptions_1409_; uint8_t v_hasTrace_1410_; lean_object* v___x_1411_; lean_object* v___y_1413_; lean_object* v___y_1414_; lean_object* v___y_1415_; lean_object* v___y_1416_; lean_object* v___y_1417_; lean_object* v___y_1418_; lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v___y_1421_; lean_object* v___y_1422_; lean_object* v___y_1423_; lean_object* v___x_1435_; uint8_t v_a_1437_; 
v_options_1406_ = lean_ctor_get(v___y_1402_, 2);
v_head_1407_ = lean_ctor_get(v_as_x27_1392_, 0);
v_tail_1408_ = lean_ctor_get(v_as_x27_1392_, 1);
v_inheritedTraceOptions_1409_ = lean_ctor_get(v___y_1402_, 13);
v_hasTrace_1410_ = lean_ctor_get_uint8(v_options_1406_, sizeof(void*)*1);
v___x_1411_ = lean_box(0);
v___x_1435_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1);
if (v_hasTrace_1410_ == 0)
{
v_a_1437_ = v_hasTrace_1410_;
goto v___jp_1436_;
}
else
{
lean_object* v___x_1444_; uint8_t v___x_1445_; 
v___x_1444_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2);
v___x_1445_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1409_, v_options_1406_, v___x_1444_);
v_a_1437_ = v___x_1445_;
goto v___jp_1436_;
}
v___jp_1412_:
{
lean_object* v___x_1424_; lean_object* v___x_1425_; 
lean_inc(v_head_1407_);
lean_inc_ref(v___y_1413_);
v___x_1424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___y_1413_);
lean_ctor_set(v___x_1424_, 1, v_head_1407_);
v___x_1425_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0(v_head_1407_, v_a_1390_, v_lams_1391_, v___x_1424_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_, v___y_1423_);
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_dec_ref(v___x_1425_);
v_as_x27_1392_ = v_tail_1408_;
v_b_1393_ = v___x_1411_;
goto _start;
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1434_; 
v_a_1427_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1429_ = v___x_1425_;
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1425_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
v___x_1432_ = v___x_1429_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v_a_1427_);
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
v___jp_1436_:
{
lean_object* v___x_1438_; 
v___x_1438_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0);
if (v_a_1437_ == 0)
{
v___y_1413_ = v___x_1438_;
v___y_1414_ = v___y_1394_;
v___y_1415_ = v___y_1395_;
v___y_1416_ = v___y_1396_;
v___y_1417_ = v___y_1397_;
v___y_1418_ = v___y_1398_;
v___y_1419_ = v___y_1399_;
v___y_1420_ = v___y_1400_;
v___y_1421_ = v___y_1401_;
v___y_1422_ = v___y_1402_;
v___y_1423_ = v___y_1403_;
goto v___jp_1412_;
}
else
{
lean_object* v___x_1439_; 
v___x_1439_ = l_Lean_Meta_Grind_updateLastTag(v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_);
if (lean_obj_tag(v___x_1439_) == 0)
{
lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
lean_dec_ref(v___x_1439_);
v___x_1440_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2);
lean_inc(v_head_1407_);
v___x_1441_ = l_Lean_MessageData_ofExpr(v_head_1407_);
v___x_1442_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1442_, 0, v___x_1440_);
lean_ctor_set(v___x_1442_, 1, v___x_1441_);
v___x_1443_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1435_, v___x_1442_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_);
if (lean_obj_tag(v___x_1443_) == 0)
{
lean_dec_ref(v___x_1443_);
v___y_1413_ = v___x_1438_;
v___y_1414_ = v___y_1394_;
v___y_1415_ = v___y_1395_;
v___y_1416_ = v___y_1396_;
v___y_1417_ = v___y_1397_;
v___y_1418_ = v___y_1398_;
v___y_1419_ = v___y_1399_;
v___y_1420_ = v___y_1400_;
v___y_1421_ = v___y_1401_;
v___y_1422_ = v___y_1402_;
v___y_1423_ = v___y_1403_;
goto v___jp_1412_;
}
else
{
return v___x_1443_;
}
}
else
{
return v___x_1439_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___boxed(lean_object* v_a_1446_, lean_object* v_lams_1447_, lean_object* v_as_x27_1448_, lean_object* v_b_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg(v_a_1446_, v_lams_1447_, v_as_x27_1448_, v_b_1449_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_);
lean_dec(v___y_1459_);
lean_dec_ref(v___y_1458_);
lean_dec(v___y_1457_);
lean_dec_ref(v___y_1456_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
lean_dec(v___y_1451_);
lean_dec(v___y_1450_);
lean_dec(v_as_x27_1448_);
lean_dec_ref(v_lams_1447_);
lean_dec_ref(v_a_1446_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(lean_object* v_a_1462_, lean_object* v_lams_1463_, lean_object* v_as_1464_, lean_object* v_as_x27_1465_, lean_object* v_b_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_){
_start:
{
if (lean_obj_tag(v_as_x27_1465_) == 0)
{
lean_object* v___x_1478_; 
v___x_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1478_, 0, v_b_1466_);
return v___x_1478_;
}
else
{
lean_object* v_options_1479_; lean_object* v_head_1480_; lean_object* v_tail_1481_; lean_object* v_inheritedTraceOptions_1482_; uint8_t v_hasTrace_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___y_1487_; lean_object* v___y_1488_; lean_object* v___y_1489_; lean_object* v___y_1490_; lean_object* v___y_1491_; lean_object* v___y_1492_; lean_object* v___y_1493_; lean_object* v___y_1494_; lean_object* v___y_1495_; lean_object* v___y_1496_; lean_object* v___y_1497_; uint8_t v_a_1510_; 
v_options_1479_ = lean_ctor_get(v___y_1475_, 2);
v_head_1480_ = lean_ctor_get(v_as_x27_1465_, 0);
v_tail_1481_ = lean_ctor_get(v_as_x27_1465_, 1);
v_inheritedTraceOptions_1482_ = lean_ctor_get(v___y_1475_, 13);
v_hasTrace_1483_ = lean_ctor_get_uint8(v_options_1479_, sizeof(void*)*1);
v___x_1484_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1);
v___x_1485_ = lean_box(0);
if (v_hasTrace_1483_ == 0)
{
v_a_1510_ = v_hasTrace_1483_;
goto v___jp_1509_;
}
else
{
lean_object* v___x_1517_; uint8_t v___x_1518_; 
v___x_1517_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2);
v___x_1518_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1482_, v_options_1479_, v___x_1517_);
v_a_1510_ = v___x_1518_;
goto v___jp_1509_;
}
v___jp_1486_:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; 
lean_inc(v_head_1480_);
lean_inc_ref(v___y_1487_);
v___x_1498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1498_, 0, v___y_1487_);
lean_ctor_set(v___x_1498_, 1, v_head_1480_);
v___x_1499_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0(v_head_1480_, v_a_1462_, v_lams_1463_, v___x_1498_, v___y_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v___x_1500_; 
lean_dec_ref(v___x_1499_);
v___x_1500_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg(v_a_1462_, v_lams_1463_, v_tail_1481_, v___x_1485_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_);
return v___x_1500_;
}
else
{
lean_object* v_a_1501_; lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1508_; 
v_a_1501_ = lean_ctor_get(v___x_1499_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1503_ = v___x_1499_;
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
else
{
lean_inc(v_a_1501_);
lean_dec(v___x_1499_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v___x_1506_; 
if (v_isShared_1504_ == 0)
{
v___x_1506_ = v___x_1503_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v_a_1501_);
v___x_1506_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
return v___x_1506_;
}
}
}
}
v___jp_1509_:
{
lean_object* v___x_1511_; 
v___x_1511_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0);
if (v_a_1510_ == 0)
{
v___y_1487_ = v___x_1511_;
v___y_1488_ = v___y_1467_;
v___y_1489_ = v___y_1468_;
v___y_1490_ = v___y_1469_;
v___y_1491_ = v___y_1470_;
v___y_1492_ = v___y_1471_;
v___y_1493_ = v___y_1472_;
v___y_1494_ = v___y_1473_;
v___y_1495_ = v___y_1474_;
v___y_1496_ = v___y_1475_;
v___y_1497_ = v___y_1476_;
goto v___jp_1486_;
}
else
{
lean_object* v___x_1512_; 
v___x_1512_ = l_Lean_Meta_Grind_updateLastTag(v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_);
if (lean_obj_tag(v___x_1512_) == 0)
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; 
lean_dec_ref(v___x_1512_);
v___x_1513_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2);
lean_inc(v_head_1480_);
v___x_1514_ = l_Lean_MessageData_ofExpr(v_head_1480_);
v___x_1515_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1515_, 0, v___x_1513_);
lean_ctor_set(v___x_1515_, 1, v___x_1514_);
v___x_1516_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1484_, v___x_1515_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_);
if (lean_obj_tag(v___x_1516_) == 0)
{
lean_dec_ref(v___x_1516_);
v___y_1487_ = v___x_1511_;
v___y_1488_ = v___y_1467_;
v___y_1489_ = v___y_1468_;
v___y_1490_ = v___y_1469_;
v___y_1491_ = v___y_1470_;
v___y_1492_ = v___y_1471_;
v___y_1493_ = v___y_1472_;
v___y_1494_ = v___y_1473_;
v___y_1495_ = v___y_1474_;
v___y_1496_ = v___y_1475_;
v___y_1497_ = v___y_1476_;
goto v___jp_1486_;
}
else
{
return v___x_1516_;
}
}
else
{
return v___x_1512_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg___boxed(lean_object* v_a_1519_, lean_object* v_lams_1520_, lean_object* v_as_1521_, lean_object* v_as_x27_1522_, lean_object* v_b_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_){
_start:
{
lean_object* v_res_1535_; 
v_res_1535_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(v_a_1519_, v_lams_1520_, v_as_1521_, v_as_x27_1522_, v_b_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
lean_dec(v___y_1531_);
lean_dec_ref(v___y_1530_);
lean_dec(v___y_1529_);
lean_dec_ref(v___y_1528_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
lean_dec(v___y_1525_);
lean_dec(v___y_1524_);
lean_dec(v_as_x27_1522_);
lean_dec(v_as_1521_);
lean_dec_ref(v_lams_1520_);
lean_dec_ref(v_a_1519_);
return v_res_1535_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1536_; 
v___x_1536_ = lean_mk_string_unchecked("fn: ", 4, 4);
return v___x_1536_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1537_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__0);
v___x_1538_ = l_Lean_stringToMessageData(v___x_1537_);
return v___x_1538_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__2(void){
_start:
{
lean_object* v___x_1539_; 
v___x_1539_ = lean_mk_string_unchecked(", parents: ", 11, 11);
return v___x_1539_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3(void){
_start:
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1540_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__2);
v___x_1541_ = l_Lean_stringToMessageData(v___x_1540_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4(lean_object* v_a_1542_, lean_object* v_lams_1543_, lean_object* v_as_1544_, size_t v_sz_1545_, size_t v_i_1546_, lean_object* v_b_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_){
_start:
{
uint8_t v___x_1559_; 
v___x_1559_ = lean_usize_dec_lt(v_i_1546_, v_sz_1545_);
if (v___x_1559_ == 0)
{
lean_object* v___x_1560_; 
v___x_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1560_, 0, v_b_1547_);
return v___x_1560_;
}
else
{
lean_object* v_options_1561_; lean_object* v_inheritedTraceOptions_1562_; uint8_t v_hasTrace_1563_; lean_object* v___x_1564_; lean_object* v_a_1565_; lean_object* v___y_1567_; lean_object* v___y_1568_; lean_object* v___y_1569_; lean_object* v___y_1570_; lean_object* v___y_1571_; lean_object* v___y_1572_; lean_object* v___y_1573_; lean_object* v___y_1574_; lean_object* v___y_1575_; lean_object* v___y_1576_; 
v_options_1561_ = lean_ctor_get(v___y_1556_, 2);
v_inheritedTraceOptions_1562_ = lean_ctor_get(v___y_1556_, 13);
v_hasTrace_1563_ = lean_ctor_get_uint8(v_options_1561_, sizeof(void*)*1);
v___x_1564_ = lean_box(0);
v_a_1565_ = lean_array_uget_borrowed(v_as_1544_, v_i_1546_);
if (v_hasTrace_1563_ == 0)
{
v___y_1567_ = v___y_1548_;
v___y_1568_ = v___y_1549_;
v___y_1569_ = v___y_1550_;
v___y_1570_ = v___y_1551_;
v___y_1571_ = v___y_1552_;
v___y_1572_ = v___y_1553_;
v___y_1573_ = v___y_1554_;
v___y_1574_ = v___y_1555_;
v___y_1575_ = v___y_1556_;
v___y_1576_ = v___y_1557_;
goto v___jp_1566_;
}
else
{
lean_object* v___x_1592_; lean_object* v___x_1593_; uint8_t v___x_1594_; 
v___x_1592_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1);
v___x_1593_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2);
v___x_1594_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1562_, v_options_1561_, v___x_1593_);
if (v___x_1594_ == 0)
{
v___y_1567_ = v___y_1548_;
v___y_1568_ = v___y_1549_;
v___y_1569_ = v___y_1550_;
v___y_1570_ = v___y_1551_;
v___y_1571_ = v___y_1552_;
v___y_1572_ = v___y_1553_;
v___y_1573_ = v___y_1554_;
v___y_1574_ = v___y_1555_;
v___y_1575_ = v___y_1556_;
v___y_1576_ = v___y_1557_;
goto v___jp_1566_;
}
else
{
lean_object* v___x_1595_; 
v___x_1595_ = l_Lean_Meta_Grind_updateLastTag(v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_);
if (lean_obj_tag(v___x_1595_) == 0)
{
lean_object* v___x_1596_; 
lean_dec_ref(v___x_1595_);
v___x_1596_ = l_Lean_Meta_Grind_getParents___redArg(v_a_1565_, v___y_1548_, v___y_1557_);
if (lean_obj_tag(v___x_1596_) == 0)
{
lean_object* v_a_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v_a_1597_ = lean_ctor_get(v___x_1596_, 0);
lean_inc(v_a_1597_);
lean_dec_ref(v___x_1596_);
v___x_1598_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1);
lean_inc(v_a_1565_);
v___x_1599_ = l_Lean_MessageData_ofExpr(v_a_1565_);
v___x_1600_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1600_, 0, v___x_1598_);
lean_ctor_set(v___x_1600_, 1, v___x_1599_);
v___x_1601_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3);
v___x_1602_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1602_, 0, v___x_1600_);
lean_ctor_set(v___x_1602_, 1, v___x_1601_);
v___x_1603_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_1597_);
lean_dec(v_a_1597_);
v___x_1604_ = lean_box(0);
v___x_1605_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(v___x_1603_, v___x_1604_);
v___x_1606_ = l_Lean_MessageData_ofList(v___x_1605_);
v___x_1607_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1607_, 0, v___x_1602_);
lean_ctor_set(v___x_1607_, 1, v___x_1606_);
v___x_1608_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1592_, v___x_1607_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_);
if (lean_obj_tag(v___x_1608_) == 0)
{
lean_dec_ref(v___x_1608_);
v___y_1567_ = v___y_1548_;
v___y_1568_ = v___y_1549_;
v___y_1569_ = v___y_1550_;
v___y_1570_ = v___y_1551_;
v___y_1571_ = v___y_1552_;
v___y_1572_ = v___y_1553_;
v___y_1573_ = v___y_1554_;
v___y_1574_ = v___y_1555_;
v___y_1575_ = v___y_1556_;
v___y_1576_ = v___y_1557_;
goto v___jp_1566_;
}
else
{
return v___x_1608_;
}
}
else
{
lean_object* v_a_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1616_; 
v_a_1609_ = lean_ctor_get(v___x_1596_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v___x_1596_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1611_ = v___x_1596_;
v_isShared_1612_ = v_isSharedCheck_1616_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_a_1609_);
lean_dec(v___x_1596_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1616_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1614_; 
if (v_isShared_1612_ == 0)
{
v___x_1614_ = v___x_1611_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v_a_1609_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
return v___x_1614_;
}
}
}
}
else
{
return v___x_1595_;
}
}
}
v___jp_1566_:
{
lean_object* v___x_1577_; 
v___x_1577_ = l_Lean_Meta_Grind_getParents___redArg(v_a_1565_, v___y_1567_, v___y_1576_);
if (lean_obj_tag(v___x_1577_) == 0)
{
lean_object* v_a_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v_a_1578_ = lean_ctor_get(v___x_1577_, 0);
lean_inc(v_a_1578_);
lean_dec_ref(v___x_1577_);
v___x_1579_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_1578_);
lean_dec(v_a_1578_);
v___x_1580_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(v_a_1542_, v_lams_1543_, v___x_1579_, v___x_1579_, v___x_1564_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_);
lean_dec(v___x_1579_);
if (lean_obj_tag(v___x_1580_) == 0)
{
size_t v___x_1581_; size_t v___x_1582_; 
lean_dec_ref(v___x_1580_);
v___x_1581_ = ((size_t)1ULL);
v___x_1582_ = lean_usize_add(v_i_1546_, v___x_1581_);
v_i_1546_ = v___x_1582_;
v_b_1547_ = v___x_1564_;
goto _start;
}
else
{
return v___x_1580_;
}
}
else
{
lean_object* v_a_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1591_; 
v_a_1584_ = lean_ctor_get(v___x_1577_, 0);
v_isSharedCheck_1591_ = !lean_is_exclusive(v___x_1577_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1586_ = v___x_1577_;
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_a_1584_);
lean_dec(v___x_1577_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1589_; 
if (v_isShared_1587_ == 0)
{
v___x_1589_ = v___x_1586_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v_a_1584_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___boxed(lean_object** _args){
lean_object* v_a_1617_ = _args[0];
lean_object* v_lams_1618_ = _args[1];
lean_object* v_as_1619_ = _args[2];
lean_object* v_sz_1620_ = _args[3];
lean_object* v_i_1621_ = _args[4];
lean_object* v_b_1622_ = _args[5];
lean_object* v___y_1623_ = _args[6];
lean_object* v___y_1624_ = _args[7];
lean_object* v___y_1625_ = _args[8];
lean_object* v___y_1626_ = _args[9];
lean_object* v___y_1627_ = _args[10];
lean_object* v___y_1628_ = _args[11];
lean_object* v___y_1629_ = _args[12];
lean_object* v___y_1630_ = _args[13];
lean_object* v___y_1631_ = _args[14];
lean_object* v___y_1632_ = _args[15];
lean_object* v___y_1633_ = _args[16];
_start:
{
size_t v_sz_boxed_1634_; size_t v_i_boxed_1635_; lean_object* v_res_1636_; 
v_sz_boxed_1634_ = lean_unbox_usize(v_sz_1620_);
lean_dec(v_sz_1620_);
v_i_boxed_1635_ = lean_unbox_usize(v_i_1621_);
lean_dec(v_i_1621_);
v_res_1636_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4(v_a_1617_, v_lams_1618_, v_as_1619_, v_sz_boxed_1634_, v_i_boxed_1635_, v_b_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_);
lean_dec(v___y_1632_);
lean_dec_ref(v___y_1631_);
lean_dec(v___y_1630_);
lean_dec_ref(v___y_1629_);
lean_dec(v___y_1628_);
lean_dec_ref(v___y_1627_);
lean_dec(v___y_1626_);
lean_dec_ref(v___y_1625_);
lean_dec(v___y_1624_);
lean_dec(v___y_1623_);
lean_dec_ref(v_as_1619_);
lean_dec_ref(v_lams_1618_);
lean_dec_ref(v_a_1617_);
return v_res_1636_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3(lean_object* v_a_1637_, lean_object* v_lams_1638_, lean_object* v_as_1639_, size_t v_sz_1640_, size_t v_i_1641_, lean_object* v_b_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_){
_start:
{
uint8_t v___x_1654_; 
v___x_1654_ = lean_usize_dec_lt(v_i_1641_, v_sz_1640_);
if (v___x_1654_ == 0)
{
lean_object* v___x_1655_; 
v___x_1655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1655_, 0, v_b_1642_);
return v___x_1655_;
}
else
{
lean_object* v_options_1656_; lean_object* v_inheritedTraceOptions_1657_; uint8_t v_hasTrace_1658_; lean_object* v___x_1659_; lean_object* v_a_1660_; lean_object* v___y_1662_; lean_object* v___y_1663_; lean_object* v___y_1664_; lean_object* v___y_1665_; lean_object* v___y_1666_; lean_object* v___y_1667_; lean_object* v___y_1668_; lean_object* v___y_1669_; lean_object* v___y_1670_; lean_object* v___y_1671_; 
v_options_1656_ = lean_ctor_get(v___y_1651_, 2);
v_inheritedTraceOptions_1657_ = lean_ctor_get(v___y_1651_, 13);
v_hasTrace_1658_ = lean_ctor_get_uint8(v_options_1656_, sizeof(void*)*1);
v___x_1659_ = lean_box(0);
v_a_1660_ = lean_array_uget_borrowed(v_as_1639_, v_i_1641_);
if (v_hasTrace_1658_ == 0)
{
v___y_1662_ = v___y_1643_;
v___y_1663_ = v___y_1644_;
v___y_1664_ = v___y_1645_;
v___y_1665_ = v___y_1646_;
v___y_1666_ = v___y_1647_;
v___y_1667_ = v___y_1648_;
v___y_1668_ = v___y_1649_;
v___y_1669_ = v___y_1650_;
v___y_1670_ = v___y_1651_;
v___y_1671_ = v___y_1652_;
goto v___jp_1661_;
}
else
{
lean_object* v___x_1687_; lean_object* v___x_1688_; uint8_t v___x_1689_; 
v___x_1687_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1);
v___x_1688_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2);
v___x_1689_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1657_, v_options_1656_, v___x_1688_);
if (v___x_1689_ == 0)
{
v___y_1662_ = v___y_1643_;
v___y_1663_ = v___y_1644_;
v___y_1664_ = v___y_1645_;
v___y_1665_ = v___y_1646_;
v___y_1666_ = v___y_1647_;
v___y_1667_ = v___y_1648_;
v___y_1668_ = v___y_1649_;
v___y_1669_ = v___y_1650_;
v___y_1670_ = v___y_1651_;
v___y_1671_ = v___y_1652_;
goto v___jp_1661_;
}
else
{
lean_object* v___x_1690_; 
v___x_1690_ = l_Lean_Meta_Grind_updateLastTag(v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_);
if (lean_obj_tag(v___x_1690_) == 0)
{
lean_object* v___x_1691_; 
lean_dec_ref(v___x_1690_);
v___x_1691_ = l_Lean_Meta_Grind_getParents___redArg(v_a_1660_, v___y_1643_, v___y_1652_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v_a_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; 
v_a_1692_ = lean_ctor_get(v___x_1691_, 0);
lean_inc(v_a_1692_);
lean_dec_ref(v___x_1691_);
v___x_1693_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1);
lean_inc(v_a_1660_);
v___x_1694_ = l_Lean_MessageData_ofExpr(v_a_1660_);
v___x_1695_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1695_, 0, v___x_1693_);
lean_ctor_set(v___x_1695_, 1, v___x_1694_);
v___x_1696_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3);
v___x_1697_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1697_, 0, v___x_1695_);
lean_ctor_set(v___x_1697_, 1, v___x_1696_);
v___x_1698_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_1692_);
lean_dec(v_a_1692_);
v___x_1699_ = lean_box(0);
v___x_1700_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(v___x_1698_, v___x_1699_);
v___x_1701_ = l_Lean_MessageData_ofList(v___x_1700_);
v___x_1702_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1702_, 0, v___x_1697_);
lean_ctor_set(v___x_1702_, 1, v___x_1701_);
v___x_1703_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1687_, v___x_1702_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_);
if (lean_obj_tag(v___x_1703_) == 0)
{
lean_dec_ref(v___x_1703_);
v___y_1662_ = v___y_1643_;
v___y_1663_ = v___y_1644_;
v___y_1664_ = v___y_1645_;
v___y_1665_ = v___y_1646_;
v___y_1666_ = v___y_1647_;
v___y_1667_ = v___y_1648_;
v___y_1668_ = v___y_1649_;
v___y_1669_ = v___y_1650_;
v___y_1670_ = v___y_1651_;
v___y_1671_ = v___y_1652_;
goto v___jp_1661_;
}
else
{
return v___x_1703_;
}
}
else
{
lean_object* v_a_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1711_; 
v_a_1704_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1711_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1711_ == 0)
{
v___x_1706_ = v___x_1691_;
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_a_1704_);
lean_dec(v___x_1691_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1709_; 
if (v_isShared_1707_ == 0)
{
v___x_1709_ = v___x_1706_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v_a_1704_);
v___x_1709_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
return v___x_1709_;
}
}
}
}
else
{
return v___x_1690_;
}
}
}
v___jp_1661_:
{
lean_object* v___x_1672_; 
v___x_1672_ = l_Lean_Meta_Grind_getParents___redArg(v_a_1660_, v___y_1662_, v___y_1671_);
if (lean_obj_tag(v___x_1672_) == 0)
{
lean_object* v_a_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v_a_1673_ = lean_ctor_get(v___x_1672_, 0);
lean_inc(v_a_1673_);
lean_dec_ref(v___x_1672_);
v___x_1674_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_1673_);
lean_dec(v_a_1673_);
v___x_1675_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(v_a_1637_, v_lams_1638_, v___x_1674_, v___x_1674_, v___x_1659_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_);
lean_dec(v___x_1674_);
if (lean_obj_tag(v___x_1675_) == 0)
{
size_t v___x_1676_; size_t v___x_1677_; lean_object* v___x_1678_; 
lean_dec_ref(v___x_1675_);
v___x_1676_ = ((size_t)1ULL);
v___x_1677_ = lean_usize_add(v_i_1641_, v___x_1676_);
v___x_1678_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4(v_a_1637_, v_lams_1638_, v_as_1639_, v_sz_1640_, v___x_1677_, v___x_1659_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_);
return v___x_1678_;
}
else
{
return v___x_1675_;
}
}
else
{
lean_object* v_a_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1686_; 
v_a_1679_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1681_ = v___x_1672_;
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_a_1679_);
lean_dec(v___x_1672_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1686_;
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
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_a_1679_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3___boxed(lean_object** _args){
lean_object* v_a_1712_ = _args[0];
lean_object* v_lams_1713_ = _args[1];
lean_object* v_as_1714_ = _args[2];
lean_object* v_sz_1715_ = _args[3];
lean_object* v_i_1716_ = _args[4];
lean_object* v_b_1717_ = _args[5];
lean_object* v___y_1718_ = _args[6];
lean_object* v___y_1719_ = _args[7];
lean_object* v___y_1720_ = _args[8];
lean_object* v___y_1721_ = _args[9];
lean_object* v___y_1722_ = _args[10];
lean_object* v___y_1723_ = _args[11];
lean_object* v___y_1724_ = _args[12];
lean_object* v___y_1725_ = _args[13];
lean_object* v___y_1726_ = _args[14];
lean_object* v___y_1727_ = _args[15];
lean_object* v___y_1728_ = _args[16];
_start:
{
size_t v_sz_boxed_1729_; size_t v_i_boxed_1730_; lean_object* v_res_1731_; 
v_sz_boxed_1729_ = lean_unbox_usize(v_sz_1715_);
lean_dec(v_sz_1715_);
v_i_boxed_1730_ = lean_unbox_usize(v_i_1716_);
lean_dec(v_i_1716_);
v_res_1731_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3(v_a_1712_, v_lams_1713_, v_as_1714_, v_sz_boxed_1729_, v_i_boxed_1730_, v_b_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_);
lean_dec(v___y_1727_);
lean_dec_ref(v___y_1726_);
lean_dec(v___y_1725_);
lean_dec_ref(v___y_1724_);
lean_dec(v___y_1723_);
lean_dec_ref(v___y_1722_);
lean_dec(v___y_1721_);
lean_dec_ref(v___y_1720_);
lean_dec(v___y_1719_);
lean_dec(v___y_1718_);
lean_dec_ref(v_as_1714_);
lean_dec_ref(v_lams_1713_);
lean_dec_ref(v_a_1712_);
return v_res_1731_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBeta___closed__0(void){
_start:
{
lean_object* v___x_1732_; 
v___x_1732_ = lean_mk_string_unchecked("fns: ", 5, 5);
return v___x_1732_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBeta___closed__1(void){
_start:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; 
v___x_1733_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBeta___closed__0, &l_Lean_Meta_Grind_propagateBeta___closed__0_once, _init_l_Lean_Meta_Grind_propagateBeta___closed__0);
v___x_1734_ = l_Lean_stringToMessageData(v___x_1733_);
return v___x_1734_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBeta___closed__2(void){
_start:
{
lean_object* v___x_1735_; 
v___x_1735_ = lean_mk_string_unchecked(", lams: ", 8, 8);
return v___x_1735_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBeta___closed__3(void){
_start:
{
lean_object* v___x_1736_; lean_object* v___x_1737_; 
v___x_1736_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBeta___closed__2, &l_Lean_Meta_Grind_propagateBeta___closed__2_once, _init_l_Lean_Meta_Grind_propagateBeta___closed__2);
v___x_1737_ = l_Lean_stringToMessageData(v___x_1736_);
return v___x_1737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBeta(lean_object* v_lams_1738_, lean_object* v_fns_1739_, lean_object* v_a_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_, lean_object* v_a_1749_){
_start:
{
lean_object* v___x_1751_; lean_object* v___x_1752_; uint8_t v___x_1753_; 
v___x_1751_ = lean_array_get_size(v_lams_1738_);
v___x_1752_ = lean_unsigned_to_nat(0u);
v___x_1753_ = lean_nat_dec_eq(v___x_1751_, v___x_1752_);
if (v___x_1753_ == 0)
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1754_ = lean_st_ref_get(v_a_1749_);
lean_dec(v___x_1754_);
v___x_1755_ = lean_st_ref_get(v_a_1740_);
v___x_1756_ = l_Lean_instInhabitedExpr;
v___x_1757_ = lean_unsigned_to_nat(1u);
v___x_1758_ = lean_nat_sub(v___x_1751_, v___x_1757_);
v___x_1759_ = lean_array_get_borrowed(v___x_1756_, v_lams_1738_, v___x_1758_);
lean_dec(v___x_1758_);
lean_inc(v___x_1759_);
v___x_1760_ = l_Lean_Meta_Grind_Goal_getRoot(v___x_1755_, v___x_1759_, v_a_1746_, v_a_1747_, v_a_1748_, v_a_1749_);
lean_dec(v___x_1755_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_object* v_a_1761_; lean_object* v___y_1763_; lean_object* v___y_1764_; lean_object* v___y_1765_; lean_object* v___y_1766_; lean_object* v___y_1767_; lean_object* v___y_1768_; lean_object* v___y_1769_; lean_object* v___y_1770_; lean_object* v___y_1771_; lean_object* v___y_1772_; lean_object* v_options_1785_; uint8_t v_hasTrace_1786_; 
v_a_1761_ = lean_ctor_get(v___x_1760_, 0);
lean_inc(v_a_1761_);
lean_dec_ref(v___x_1760_);
v_options_1785_ = lean_ctor_get(v_a_1748_, 2);
v_hasTrace_1786_ = lean_ctor_get_uint8(v_options_1785_, sizeof(void*)*1);
if (v_hasTrace_1786_ == 0)
{
v___y_1763_ = v_a_1740_;
v___y_1764_ = v_a_1741_;
v___y_1765_ = v_a_1742_;
v___y_1766_ = v_a_1743_;
v___y_1767_ = v_a_1744_;
v___y_1768_ = v_a_1745_;
v___y_1769_ = v_a_1746_;
v___y_1770_ = v_a_1747_;
v___y_1771_ = v_a_1748_;
v___y_1772_ = v_a_1749_;
goto v___jp_1762_;
}
else
{
lean_object* v_inheritedTraceOptions_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; uint8_t v___x_1790_; 
v_inheritedTraceOptions_1787_ = lean_ctor_get(v_a_1748_, 13);
v___x_1788_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__1);
v___x_1789_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Grind_propagateBeta_spec__0___closed__2);
v___x_1790_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1787_, v_options_1785_, v___x_1789_);
if (v___x_1790_ == 0)
{
v___y_1763_ = v_a_1740_;
v___y_1764_ = v_a_1741_;
v___y_1765_ = v_a_1742_;
v___y_1766_ = v_a_1743_;
v___y_1767_ = v_a_1744_;
v___y_1768_ = v_a_1745_;
v___y_1769_ = v_a_1746_;
v___y_1770_ = v_a_1747_;
v___y_1771_ = v_a_1748_;
v___y_1772_ = v_a_1749_;
goto v___jp_1762_;
}
else
{
lean_object* v___x_1791_; 
v___x_1791_ = l_Lean_Meta_Grind_updateLastTag(v_a_1740_, v_a_1741_, v_a_1742_, v_a_1743_, v_a_1744_, v_a_1745_, v_a_1746_, v_a_1747_, v_a_1748_, v_a_1749_);
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
lean_dec_ref(v___x_1791_);
v___x_1792_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBeta___closed__1, &l_Lean_Meta_Grind_propagateBeta___closed__1_once, _init_l_Lean_Meta_Grind_propagateBeta___closed__1);
lean_inc_ref(v_fns_1739_);
v___x_1793_ = lean_array_to_list(v_fns_1739_);
v___x_1794_ = lean_box(0);
v___x_1795_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(v___x_1793_, v___x_1794_);
v___x_1796_ = l_Lean_MessageData_ofList(v___x_1795_);
v___x_1797_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1792_);
lean_ctor_set(v___x_1797_, 1, v___x_1796_);
v___x_1798_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBeta___closed__3, &l_Lean_Meta_Grind_propagateBeta___closed__3_once, _init_l_Lean_Meta_Grind_propagateBeta___closed__3);
v___x_1799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1797_);
lean_ctor_set(v___x_1799_, 1, v___x_1798_);
lean_inc_ref(v_lams_1738_);
v___x_1800_ = lean_array_to_list(v_lams_1738_);
v___x_1801_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(v___x_1800_, v___x_1794_);
v___x_1802_ = l_Lean_MessageData_ofList(v___x_1801_);
v___x_1803_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1803_, 0, v___x_1799_);
lean_ctor_set(v___x_1803_, 1, v___x_1802_);
v___x_1804_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1788_, v___x_1803_, v_a_1746_, v_a_1747_, v_a_1748_, v_a_1749_);
if (lean_obj_tag(v___x_1804_) == 0)
{
lean_dec_ref(v___x_1804_);
v___y_1763_ = v_a_1740_;
v___y_1764_ = v_a_1741_;
v___y_1765_ = v_a_1742_;
v___y_1766_ = v_a_1743_;
v___y_1767_ = v_a_1744_;
v___y_1768_ = v_a_1745_;
v___y_1769_ = v_a_1746_;
v___y_1770_ = v_a_1747_;
v___y_1771_ = v_a_1748_;
v___y_1772_ = v_a_1749_;
goto v___jp_1762_;
}
else
{
lean_dec(v_a_1761_);
lean_dec_ref(v_fns_1739_);
lean_dec_ref(v_lams_1738_);
return v___x_1804_;
}
}
else
{
lean_dec(v_a_1761_);
lean_dec_ref(v_fns_1739_);
lean_dec_ref(v_lams_1738_);
return v___x_1791_;
}
}
}
v___jp_1762_:
{
lean_object* v___x_1773_; size_t v_sz_1774_; size_t v___x_1775_; lean_object* v___x_1776_; 
v___x_1773_ = lean_box(0);
v_sz_1774_ = lean_array_size(v_fns_1739_);
v___x_1775_ = ((size_t)0ULL);
v___x_1776_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3(v_a_1761_, v_lams_1738_, v_fns_1739_, v_sz_1774_, v___x_1775_, v___x_1773_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_);
lean_dec_ref(v_fns_1739_);
lean_dec_ref(v_lams_1738_);
lean_dec(v_a_1761_);
if (lean_obj_tag(v___x_1776_) == 0)
{
lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1783_; 
v_isSharedCheck_1783_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1783_ == 0)
{
lean_object* v_unused_1784_; 
v_unused_1784_ = lean_ctor_get(v___x_1776_, 0);
lean_dec(v_unused_1784_);
v___x_1778_ = v___x_1776_;
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
else
{
lean_dec(v___x_1776_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1781_; 
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 0, v___x_1773_);
v___x_1781_ = v___x_1778_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v___x_1773_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
}
else
{
return v___x_1776_;
}
}
}
else
{
lean_object* v_a_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1812_; 
lean_dec_ref(v_fns_1739_);
lean_dec_ref(v_lams_1738_);
v_a_1805_ = lean_ctor_get(v___x_1760_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1807_ = v___x_1760_;
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_a_1805_);
lean_dec(v___x_1760_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___x_1810_; 
if (v_isShared_1808_ == 0)
{
v___x_1810_ = v___x_1807_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v_a_1805_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
}
}
else
{
lean_object* v___x_1813_; lean_object* v___x_1814_; 
lean_dec_ref(v_fns_1739_);
lean_dec_ref(v_lams_1738_);
v___x_1813_ = lean_box(0);
v___x_1814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1813_);
return v___x_1814_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBeta___boxed(lean_object* v_lams_1815_, lean_object* v_fns_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_, lean_object* v_a_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_){
_start:
{
lean_object* v_res_1828_; 
v_res_1828_ = l_Lean_Meta_Grind_propagateBeta(v_lams_1815_, v_fns_1816_, v_a_1817_, v_a_1818_, v_a_1819_, v_a_1820_, v_a_1821_, v_a_1822_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_);
lean_dec(v_a_1826_);
lean_dec_ref(v_a_1825_);
lean_dec(v_a_1824_);
lean_dec_ref(v_a_1823_);
lean_dec(v_a_1822_);
lean_dec_ref(v_a_1821_);
lean_dec(v_a_1820_);
lean_dec_ref(v_a_1819_);
lean_dec(v_a_1818_);
lean_dec(v_a_1817_);
return v_res_1828_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1(lean_object* v_a_1829_, lean_object* v_lams_1830_, lean_object* v_as_1831_, lean_object* v_as_x27_1832_, lean_object* v_b_1833_, lean_object* v_a_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_){
_start:
{
lean_object* v___x_1846_; 
v___x_1846_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(v_a_1829_, v_lams_1830_, v_as_1831_, v_as_x27_1832_, v_b_1833_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_, v___y_1843_, v___y_1844_);
return v___x_1846_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___boxed(lean_object** _args){
lean_object* v_a_1847_ = _args[0];
lean_object* v_lams_1848_ = _args[1];
lean_object* v_as_1849_ = _args[2];
lean_object* v_as_x27_1850_ = _args[3];
lean_object* v_b_1851_ = _args[4];
lean_object* v_a_1852_ = _args[5];
lean_object* v___y_1853_ = _args[6];
lean_object* v___y_1854_ = _args[7];
lean_object* v___y_1855_ = _args[8];
lean_object* v___y_1856_ = _args[9];
lean_object* v___y_1857_ = _args[10];
lean_object* v___y_1858_ = _args[11];
lean_object* v___y_1859_ = _args[12];
lean_object* v___y_1860_ = _args[13];
lean_object* v___y_1861_ = _args[14];
lean_object* v___y_1862_ = _args[15];
lean_object* v___y_1863_ = _args[16];
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1(v_a_1847_, v_lams_1848_, v_as_1849_, v_as_x27_1850_, v_b_1851_, v_a_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_);
lean_dec(v___y_1862_);
lean_dec_ref(v___y_1861_);
lean_dec(v___y_1860_);
lean_dec_ref(v___y_1859_);
lean_dec(v___y_1858_);
lean_dec_ref(v___y_1857_);
lean_dec(v___y_1856_);
lean_dec_ref(v___y_1855_);
lean_dec(v___y_1854_);
lean_dec(v___y_1853_);
lean_dec(v_as_x27_1850_);
lean_dec(v_as_1849_);
lean_dec_ref(v_lams_1848_);
lean_dec_ref(v_a_1847_);
return v_res_1864_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1(lean_object* v_a_1865_, lean_object* v_lams_1866_, lean_object* v_as_1867_, lean_object* v_as_x27_1868_, lean_object* v_b_1869_, lean_object* v_a_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_){
_start:
{
lean_object* v___x_1882_; 
v___x_1882_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg(v_a_1865_, v_lams_1866_, v_as_x27_1868_, v_b_1869_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___boxed(lean_object** _args){
lean_object* v_a_1883_ = _args[0];
lean_object* v_lams_1884_ = _args[1];
lean_object* v_as_1885_ = _args[2];
lean_object* v_as_x27_1886_ = _args[3];
lean_object* v_b_1887_ = _args[4];
lean_object* v_a_1888_ = _args[5];
lean_object* v___y_1889_ = _args[6];
lean_object* v___y_1890_ = _args[7];
lean_object* v___y_1891_ = _args[8];
lean_object* v___y_1892_ = _args[9];
lean_object* v___y_1893_ = _args[10];
lean_object* v___y_1894_ = _args[11];
lean_object* v___y_1895_ = _args[12];
lean_object* v___y_1896_ = _args[13];
lean_object* v___y_1897_ = _args[14];
lean_object* v___y_1898_ = _args[15];
lean_object* v___y_1899_ = _args[16];
_start:
{
lean_object* v_res_1900_; 
v_res_1900_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1(v_a_1883_, v_lams_1884_, v_as_1885_, v_as_x27_1886_, v_b_1887_, v_a_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_);
lean_dec(v___y_1898_);
lean_dec_ref(v___y_1897_);
lean_dec(v___y_1896_);
lean_dec_ref(v___y_1895_);
lean_dec(v___y_1894_);
lean_dec_ref(v___y_1893_);
lean_dec(v___y_1892_);
lean_dec_ref(v___y_1891_);
lean_dec(v___y_1890_);
lean_dec(v___y_1889_);
lean_dec(v_as_x27_1886_);
lean_dec(v_as_1885_);
lean_dec_ref(v_lams_1884_);
lean_dec_ref(v_a_1883_);
return v_res_1900_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1901_ = lean_box(0);
v___x_1902_ = lean_box(0);
v___x_1903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1902_);
lean_ctor_set(v___x_1903_, 1, v___x_1901_);
return v___x_1903_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0(lean_object* v_d_1904_, lean_object* v_as_1905_, size_t v_sz_1906_, size_t v_i_1907_, lean_object* v_b_1908_){
_start:
{
lean_object* v_a_1910_; uint8_t v___x_1914_; 
v___x_1914_ = lean_usize_dec_lt(v_i_1907_, v_sz_1906_);
if (v___x_1914_ == 0)
{
lean_inc_ref(v_b_1908_);
return v_b_1908_;
}
else
{
lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v_a_1917_; 
v___x_1915_ = lean_box(0);
v___x_1916_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0);
v_a_1917_ = lean_array_uget_borrowed(v_as_1905_, v_i_1907_);
if (lean_obj_tag(v_a_1917_) == 6)
{
lean_object* v_binderType_1918_; uint8_t v___x_1919_; 
v_binderType_1918_ = lean_ctor_get(v_a_1917_, 1);
v___x_1919_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_d_1904_, v_binderType_1918_);
if (v___x_1919_ == 0)
{
v_a_1910_ = v___x_1916_;
goto v___jp_1909_;
}
else
{
lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; 
lean_inc_ref(v_a_1917_);
v___x_1920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1920_, 0, v_a_1917_);
v___x_1921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1921_, 0, v___x_1920_);
v___x_1922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1921_);
lean_ctor_set(v___x_1922_, 1, v___x_1915_);
return v___x_1922_;
}
}
else
{
v_a_1910_ = v___x_1916_;
goto v___jp_1909_;
}
}
v___jp_1909_:
{
size_t v___x_1911_; size_t v___x_1912_; 
v___x_1911_ = ((size_t)1ULL);
v___x_1912_ = lean_usize_add(v_i_1907_, v___x_1911_);
v_i_1907_ = v___x_1912_;
v_b_1908_ = v_a_1910_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___boxed(lean_object* v_d_1923_, lean_object* v_as_1924_, lean_object* v_sz_1925_, lean_object* v_i_1926_, lean_object* v_b_1927_){
_start:
{
size_t v_sz_boxed_1928_; size_t v_i_boxed_1929_; lean_object* v_res_1930_; 
v_sz_boxed_1928_ = lean_unbox_usize(v_sz_1925_);
lean_dec(v_sz_1925_);
v_i_boxed_1929_ = lean_unbox_usize(v_i_1926_);
lean_dec(v_i_1926_);
v_res_1930_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0(v_d_1923_, v_as_1924_, v_sz_boxed_1928_, v_i_boxed_1929_, v_b_1927_);
lean_dec_ref(v_b_1927_);
lean_dec_ref(v_as_1924_);
lean_dec_ref(v_d_1923_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f(lean_object* v_lams_1931_, lean_object* v_d_1932_){
_start:
{
lean_object* v___x_1933_; lean_object* v___x_1934_; size_t v_sz_1935_; size_t v___x_1936_; lean_object* v___x_1937_; lean_object* v_fst_1938_; 
v___x_1933_ = lean_box(0);
v___x_1934_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0);
v_sz_1935_ = lean_array_size(v_lams_1931_);
v___x_1936_ = ((size_t)0ULL);
v___x_1937_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0(v_d_1932_, v_lams_1931_, v_sz_1935_, v___x_1936_, v___x_1934_);
v_fst_1938_ = lean_ctor_get(v___x_1937_, 0);
lean_inc(v_fst_1938_);
lean_dec_ref(v___x_1937_);
if (lean_obj_tag(v_fst_1938_) == 0)
{
return v___x_1933_;
}
else
{
lean_object* v_val_1939_; 
v_val_1939_ = lean_ctor_get(v_fst_1938_, 0);
lean_inc(v_val_1939_);
lean_dec_ref(v_fst_1938_);
return v_val_1939_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f___boxed(lean_object* v_lams_1940_, lean_object* v_d_1941_){
_start:
{
lean_object* v_res_1942_; 
v_res_1942_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f(v_lams_1940_, v_d_1941_);
lean_dec_ref(v_d_1941_);
lean_dec_ref(v_lams_1940_);
return v_res_1942_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1943_; 
v___x_1943_ = lean_mk_string_unchecked("Inhabited", 9, 9);
return v___x_1943_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1944_; lean_object* v___x_1945_; 
v___x_1944_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0);
v___x_1945_ = l_Lean_Name_mkStr1(v___x_1944_);
return v___x_1945_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1946_; 
v___x_1946_ = lean_mk_string_unchecked("default", 7, 7);
return v___x_1946_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1947_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__2);
v___x_1948_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0);
v___x_1949_ = l_Lean_Name_mkStr2(v___x_1948_, v___x_1947_);
return v___x_1949_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1950_; 
v___x_1950_ = lean_mk_string_unchecked("Subsingleton", 12, 12);
return v___x_1950_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__5(void){
_start:
{
lean_object* v___x_1951_; lean_object* v___x_1952_; 
v___x_1951_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__4);
v___x_1952_ = l_Lean_Name_mkStr1(v___x_1951_);
return v___x_1952_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0(lean_object* v_lams_u2082_1953_, lean_object* v_lams_u2081_1954_, lean_object* v_as_1955_, size_t v_sz_1956_, size_t v_i_1957_, lean_object* v_b_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_){
_start:
{
lean_object* v_a_1971_; uint8_t v___x_1975_; 
v___x_1975_ = lean_usize_dec_lt(v_i_1957_, v_sz_1956_);
if (v___x_1975_ == 0)
{
lean_object* v___x_1976_; 
v___x_1976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1976_, 0, v_b_1958_);
return v___x_1976_;
}
else
{
lean_object* v___x_1977_; lean_object* v_a_1978_; 
v___x_1977_ = lean_box(0);
v_a_1978_ = lean_array_uget_borrowed(v_as_1955_, v_i_1957_);
if (lean_obj_tag(v_a_1978_) == 6)
{
lean_object* v_binderType_1979_; lean_object* v_body_1980_; lean_object* v___x_1981_; 
v_binderType_1979_ = lean_ctor_get(v_a_1978_, 1);
v_body_1980_ = lean_ctor_get(v_a_1978_, 2);
lean_inc_ref(v_binderType_1979_);
v___x_1981_ = l_Lean_Meta_getLevel(v_binderType_1979_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_);
if (lean_obj_tag(v___x_1981_) == 0)
{
lean_object* v_a_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v_a_1982_ = lean_ctor_get(v___x_1981_, 0);
lean_inc(v_a_1982_);
lean_dec_ref(v___x_1981_);
v___x_1983_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__1);
v___x_1984_ = lean_box(0);
v___x_1985_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1985_, 0, v_a_1982_);
lean_ctor_set(v___x_1985_, 1, v___x_1984_);
lean_inc_ref(v___x_1985_);
v___x_1986_ = l_Lean_mkConst(v___x_1983_, v___x_1985_);
lean_inc_ref(v_binderType_1979_);
v___x_1987_ = l_Lean_Expr_app___override(v___x_1986_, v_binderType_1979_);
v___x_1988_ = lean_box(0);
v___x_1989_ = l_Lean_Meta_synthInstance_x3f(v___x_1987_, v___x_1988_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
lean_inc(v_a_1990_);
lean_dec_ref(v___x_1989_);
if (lean_obj_tag(v_a_1990_) == 1)
{
lean_object* v_val_1991_; lean_object* v___x_1992_; lean_object* v___y_1994_; lean_object* v___y_1995_; lean_object* v___y_1996_; lean_object* v___y_1997_; lean_object* v___y_1998_; lean_object* v___y_1999_; lean_object* v___y_2000_; lean_object* v___y_2001_; lean_object* v___y_2002_; lean_object* v___y_2003_; uint8_t v___x_2057_; 
v_val_1991_ = lean_ctor_get(v_a_1990_, 0);
lean_inc(v_val_1991_);
lean_dec_ref(v_a_1990_);
v___x_1992_ = lean_unsigned_to_nat(0u);
v___x_2057_ = l_Lean_Expr_hasLooseBVars(v_body_1980_);
if (v___x_2057_ == 0)
{
v___y_1994_ = v___y_1959_;
v___y_1995_ = v___y_1960_;
v___y_1996_ = v___y_1961_;
v___y_1997_ = v___y_1962_;
v___y_1998_ = v___y_1963_;
v___y_1999_ = v___y_1964_;
v___y_2000_ = v___y_1965_;
v___y_2001_ = v___y_1966_;
v___y_2002_ = v___y_1967_;
v___y_2003_ = v___y_1968_;
goto v___jp_1993_;
}
else
{
lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; 
v___x_2058_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__5);
lean_inc_ref(v___x_1985_);
v___x_2059_ = l_Lean_mkConst(v___x_2058_, v___x_1985_);
lean_inc_ref(v_binderType_1979_);
v___x_2060_ = l_Lean_Expr_app___override(v___x_2059_, v_binderType_1979_);
v___x_2061_ = l_Lean_Meta_synthInstance_x3f(v___x_2060_, v___x_1988_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_);
if (lean_obj_tag(v___x_2061_) == 0)
{
lean_object* v_a_2062_; 
v_a_2062_ = lean_ctor_get(v___x_2061_, 0);
lean_inc(v_a_2062_);
lean_dec_ref(v___x_2061_);
if (lean_obj_tag(v_a_2062_) == 0)
{
lean_dec(v_val_1991_);
lean_dec_ref(v___x_1985_);
v_a_1971_ = v___x_1977_;
goto v___jp_1970_;
}
else
{
lean_dec_ref(v_a_2062_);
if (v___x_2057_ == 0)
{
lean_dec(v_val_1991_);
lean_dec_ref(v___x_1985_);
v_a_1971_ = v___x_1977_;
goto v___jp_1970_;
}
else
{
v___y_1994_ = v___y_1959_;
v___y_1995_ = v___y_1960_;
v___y_1996_ = v___y_1961_;
v___y_1997_ = v___y_1962_;
v___y_1998_ = v___y_1963_;
v___y_1999_ = v___y_1964_;
v___y_2000_ = v___y_1965_;
v___y_2001_ = v___y_1966_;
v___y_2002_ = v___y_1967_;
v___y_2003_ = v___y_1968_;
goto v___jp_1993_;
}
}
}
else
{
lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2070_; 
lean_dec(v_val_1991_);
lean_dec_ref(v___x_1985_);
v_a_2063_ = lean_ctor_get(v___x_2061_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2061_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2065_ = v___x_2061_;
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_dec(v___x_2061_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_a_2063_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
}
v___jp_1993_:
{
lean_object* v___x_2004_; 
v___x_2004_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f(v_lams_u2082_1953_, v_binderType_1979_);
if (lean_obj_tag(v___x_2004_) == 1)
{
lean_object* v_val_2005_; 
v_val_2005_ = lean_ctor_get(v___x_2004_, 0);
lean_inc(v_val_2005_);
lean_dec_ref(v___x_2004_);
if (lean_obj_tag(v_val_2005_) == 6)
{
lean_object* v_binderType_2006_; lean_object* v_body_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; 
v_binderType_2006_ = lean_ctor_get(v_val_2005_, 1);
lean_inc_ref(v_binderType_2006_);
v_body_2007_ = lean_ctor_get(v_val_2005_, 2);
lean_inc_ref(v_body_2007_);
lean_dec_ref(v_val_2005_);
v___x_2008_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3);
v___x_2009_ = l_Lean_mkConst(v___x_2008_, v___x_1985_);
v___x_2010_ = l_Lean_mkAppB(v___x_2009_, v_binderType_2006_, v_val_1991_);
v___x_2011_ = l_Lean_Meta_Grind_preprocessLight___redArg(v___x_2010_, v___y_1995_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_);
if (lean_obj_tag(v___x_2011_) == 0)
{
lean_object* v_a_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; 
v_a_2012_ = lean_ctor_get(v___x_2011_, 0);
lean_inc(v_a_2012_);
lean_dec_ref(v___x_2011_);
v___x_2013_ = lean_array_fget_borrowed(v_lams_u2081_1954_, v___x_1992_);
v___x_2014_ = lean_array_fget_borrowed(v_lams_u2082_1953_, v___x_1992_);
lean_inc(v___y_2003_);
lean_inc_ref(v___y_2002_);
lean_inc(v___y_2001_);
lean_inc_ref(v___y_2000_);
lean_inc(v___y_1999_);
lean_inc_ref(v___y_1998_);
lean_inc(v___y_1997_);
lean_inc_ref(v___y_1996_);
lean_inc(v___y_1995_);
lean_inc(v___y_1994_);
lean_inc(v___x_2014_);
lean_inc(v___x_2013_);
v___x_2015_ = lean_grind_mk_eq_proof(v___x_2013_, v___x_2014_, v___y_1994_, v___y_1995_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v_a_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; 
v_a_2016_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_a_2016_);
lean_dec_ref(v___x_2015_);
v___x_2017_ = lean_expr_instantiate1(v_body_1980_, v_a_2012_);
v___x_2018_ = lean_expr_instantiate1(v_body_2007_, v_a_2012_);
lean_dec_ref(v_body_2007_);
v___x_2019_ = l_Lean_Meta_mkCongrFun(v_a_2016_, v_a_2012_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_);
if (lean_obj_tag(v___x_2019_) == 0)
{
lean_object* v_a_2020_; lean_object* v___x_2021_; 
v_a_2020_ = lean_ctor_get(v___x_2019_, 0);
lean_inc(v_a_2020_);
lean_dec_ref(v___x_2019_);
v___x_2021_ = l_Lean_Meta_mkEq(v___x_2017_, v___x_2018_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_);
if (lean_obj_tag(v___x_2021_) == 0)
{
lean_object* v_a_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; 
v_a_2022_ = lean_ctor_get(v___x_2021_, 0);
lean_inc(v_a_2022_);
lean_dec_ref(v___x_2021_);
v___x_2023_ = l_Lean_Meta_mkExpectedPropHint(v_a_2020_, v_a_2022_);
v___x_2024_ = l_Lean_Meta_Grind_pushNewFact(v___x_2023_, v___x_1992_, v___y_1994_, v___y_1995_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_);
if (lean_obj_tag(v___x_2024_) == 0)
{
lean_dec_ref(v___x_2024_);
v_a_1971_ = v___x_1977_;
goto v___jp_1970_;
}
else
{
return v___x_2024_;
}
}
else
{
lean_object* v_a_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2032_; 
lean_dec(v_a_2020_);
v_a_2025_ = lean_ctor_get(v___x_2021_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_2021_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2027_ = v___x_2021_;
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_a_2025_);
lean_dec(v___x_2021_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2030_; 
if (v_isShared_2028_ == 0)
{
v___x_2030_ = v___x_2027_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_a_2025_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
return v___x_2030_;
}
}
}
}
else
{
lean_object* v_a_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2040_; 
lean_dec_ref(v___x_2018_);
lean_dec_ref(v___x_2017_);
v_a_2033_ = lean_ctor_get(v___x_2019_, 0);
v_isSharedCheck_2040_ = !lean_is_exclusive(v___x_2019_);
if (v_isSharedCheck_2040_ == 0)
{
v___x_2035_ = v___x_2019_;
v_isShared_2036_ = v_isSharedCheck_2040_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_a_2033_);
lean_dec(v___x_2019_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2040_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2038_; 
if (v_isShared_2036_ == 0)
{
v___x_2038_ = v___x_2035_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v_a_2033_);
v___x_2038_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
return v___x_2038_;
}
}
}
}
else
{
lean_object* v_a_2041_; lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2048_; 
lean_dec(v_a_2012_);
lean_dec_ref(v_body_2007_);
v_a_2041_ = lean_ctor_get(v___x_2015_, 0);
v_isSharedCheck_2048_ = !lean_is_exclusive(v___x_2015_);
if (v_isSharedCheck_2048_ == 0)
{
v___x_2043_ = v___x_2015_;
v_isShared_2044_ = v_isSharedCheck_2048_;
goto v_resetjp_2042_;
}
else
{
lean_inc(v_a_2041_);
lean_dec(v___x_2015_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2048_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
lean_object* v___x_2046_; 
if (v_isShared_2044_ == 0)
{
v___x_2046_ = v___x_2043_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v_a_2041_);
v___x_2046_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
return v___x_2046_;
}
}
}
}
else
{
lean_object* v_a_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2056_; 
lean_dec_ref(v_body_2007_);
v_a_2049_ = lean_ctor_get(v___x_2011_, 0);
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_2011_);
if (v_isSharedCheck_2056_ == 0)
{
v___x_2051_ = v___x_2011_;
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_a_2049_);
lean_dec(v___x_2011_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2054_; 
if (v_isShared_2052_ == 0)
{
v___x_2054_ = v___x_2051_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v_a_2049_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
return v___x_2054_;
}
}
}
}
else
{
lean_dec(v_val_2005_);
lean_dec(v_val_1991_);
lean_dec_ref(v___x_1985_);
v_a_1971_ = v___x_1977_;
goto v___jp_1970_;
}
}
else
{
lean_dec(v___x_2004_);
lean_dec(v_val_1991_);
lean_dec_ref(v___x_1985_);
v_a_1971_ = v___x_1977_;
goto v___jp_1970_;
}
}
}
else
{
lean_dec(v_a_1990_);
lean_dec_ref(v___x_1985_);
v_a_1971_ = v___x_1977_;
goto v___jp_1970_;
}
}
else
{
lean_object* v_a_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2078_; 
lean_dec_ref(v___x_1985_);
v_a_2071_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_2078_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2078_ == 0)
{
v___x_2073_ = v___x_1989_;
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_a_2071_);
lean_dec(v___x_1989_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v___x_2076_; 
if (v_isShared_2074_ == 0)
{
v___x_2076_ = v___x_2073_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v_a_2071_);
v___x_2076_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
return v___x_2076_;
}
}
}
}
else
{
lean_object* v_a_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2086_; 
v_a_2079_ = lean_ctor_get(v___x_1981_, 0);
v_isSharedCheck_2086_ = !lean_is_exclusive(v___x_1981_);
if (v_isSharedCheck_2086_ == 0)
{
v___x_2081_ = v___x_1981_;
v_isShared_2082_ = v_isSharedCheck_2086_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_a_2079_);
lean_dec(v___x_1981_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2086_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v___x_2084_; 
if (v_isShared_2082_ == 0)
{
v___x_2084_ = v___x_2081_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v_a_2079_);
v___x_2084_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
return v___x_2084_;
}
}
}
}
else
{
v_a_1971_ = v___x_1977_;
goto v___jp_1970_;
}
}
v___jp_1970_:
{
size_t v___x_1972_; size_t v___x_1973_; 
v___x_1972_ = ((size_t)1ULL);
v___x_1973_ = lean_usize_add(v_i_1957_, v___x_1972_);
v_i_1957_ = v___x_1973_;
v_b_1958_ = v_a_1971_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___boxed(lean_object** _args){
lean_object* v_lams_u2082_2087_ = _args[0];
lean_object* v_lams_u2081_2088_ = _args[1];
lean_object* v_as_2089_ = _args[2];
lean_object* v_sz_2090_ = _args[3];
lean_object* v_i_2091_ = _args[4];
lean_object* v_b_2092_ = _args[5];
lean_object* v___y_2093_ = _args[6];
lean_object* v___y_2094_ = _args[7];
lean_object* v___y_2095_ = _args[8];
lean_object* v___y_2096_ = _args[9];
lean_object* v___y_2097_ = _args[10];
lean_object* v___y_2098_ = _args[11];
lean_object* v___y_2099_ = _args[12];
lean_object* v___y_2100_ = _args[13];
lean_object* v___y_2101_ = _args[14];
lean_object* v___y_2102_ = _args[15];
lean_object* v___y_2103_ = _args[16];
_start:
{
size_t v_sz_boxed_2104_; size_t v_i_boxed_2105_; lean_object* v_res_2106_; 
v_sz_boxed_2104_ = lean_unbox_usize(v_sz_2090_);
lean_dec(v_sz_2090_);
v_i_boxed_2105_ = lean_unbox_usize(v_i_2091_);
lean_dec(v_i_2091_);
v_res_2106_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0(v_lams_u2082_2087_, v_lams_u2081_2088_, v_as_2089_, v_sz_boxed_2104_, v_i_boxed_2105_, v_b_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_);
lean_dec(v___y_2102_);
lean_dec_ref(v___y_2101_);
lean_dec(v___y_2100_);
lean_dec_ref(v___y_2099_);
lean_dec(v___y_2098_);
lean_dec_ref(v___y_2097_);
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
lean_dec(v___y_2094_);
lean_dec(v___y_2093_);
lean_dec_ref(v_as_2089_);
lean_dec_ref(v_lams_u2081_2088_);
lean_dec_ref(v_lams_u2082_2087_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns(lean_object* v_lams_u2081_2107_, lean_object* v_lams_u2082_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_, lean_object* v_a_2116_, lean_object* v_a_2117_, lean_object* v_a_2118_){
_start:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; uint8_t v___x_2122_; 
v___x_2120_ = lean_array_get_size(v_lams_u2081_2107_);
v___x_2121_ = lean_unsigned_to_nat(0u);
v___x_2122_ = lean_nat_dec_eq(v___x_2120_, v___x_2121_);
if (v___x_2122_ == 0)
{
lean_object* v___x_2123_; uint8_t v___x_2124_; 
v___x_2123_ = lean_array_get_size(v_lams_u2082_2108_);
v___x_2124_ = lean_nat_dec_eq(v___x_2123_, v___x_2121_);
if (v___x_2124_ == 0)
{
lean_object* v___x_2125_; size_t v_sz_2126_; size_t v___x_2127_; lean_object* v___x_2128_; 
v___x_2125_ = lean_box(0);
v_sz_2126_ = lean_array_size(v_lams_u2081_2107_);
v___x_2127_ = ((size_t)0ULL);
v___x_2128_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0(v_lams_u2082_2108_, v_lams_u2081_2107_, v_lams_u2081_2107_, v_sz_2126_, v___x_2127_, v___x_2125_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_, v_a_2113_, v_a_2114_, v_a_2115_, v_a_2116_, v_a_2117_, v_a_2118_);
if (lean_obj_tag(v___x_2128_) == 0)
{
lean_object* v___x_2130_; uint8_t v_isShared_2131_; uint8_t v_isSharedCheck_2135_; 
v_isSharedCheck_2135_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2135_ == 0)
{
lean_object* v_unused_2136_; 
v_unused_2136_ = lean_ctor_get(v___x_2128_, 0);
lean_dec(v_unused_2136_);
v___x_2130_ = v___x_2128_;
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
else
{
lean_dec(v___x_2128_);
v___x_2130_ = lean_box(0);
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
v_resetjp_2129_:
{
lean_object* v___x_2133_; 
if (v_isShared_2131_ == 0)
{
lean_ctor_set(v___x_2130_, 0, v___x_2125_);
v___x_2133_ = v___x_2130_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v___x_2125_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
}
else
{
return v___x_2128_;
}
}
else
{
lean_object* v___x_2137_; lean_object* v___x_2138_; 
v___x_2137_ = lean_box(0);
v___x_2138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2137_);
return v___x_2138_;
}
}
else
{
lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2139_ = lean_box(0);
v___x_2140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2139_);
return v___x_2140_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns___boxed(lean_object* v_lams_u2081_2141_, lean_object* v_lams_u2082_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_, lean_object* v_a_2149_, lean_object* v_a_2150_, lean_object* v_a_2151_, lean_object* v_a_2152_, lean_object* v_a_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns(v_lams_u2081_2141_, v_lams_u2082_2142_, v_a_2143_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_, v_a_2152_);
lean_dec(v_a_2152_);
lean_dec_ref(v_a_2151_);
lean_dec(v_a_2150_);
lean_dec_ref(v_a_2149_);
lean_dec(v_a_2148_);
lean_dec_ref(v_a_2147_);
lean_dec(v_a_2146_);
lean_dec_ref(v_a_2145_);
lean_dec(v_a_2144_);
lean_dec(v_a_2143_);
lean_dec_ref(v_lams_u2082_2142_);
lean_dec_ref(v_lams_u2081_2141_);
return v_res_2154_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___redArg(lean_object* v_x_2155_){
_start:
{
uint8_t v___x_2156_; 
v___x_2156_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_2155_);
return v___x_2156_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___redArg___boxed(lean_object* v_x_2157_){
_start:
{
uint8_t v_res_2158_; lean_object* v_r_2159_; 
v_res_2158_ = l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___redArg(v_x_2157_);
lean_dec_ref(v_x_2157_);
v_r_2159_ = lean_box(v_res_2158_);
return v_r_2159_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0(lean_object* v_00_u03b2_2160_, lean_object* v_x_2161_){
_start:
{
uint8_t v___x_2162_; 
v___x_2162_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_2161_);
return v___x_2162_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___boxed(lean_object* v_00_u03b2_2163_, lean_object* v_x_2164_){
_start:
{
uint8_t v_res_2165_; lean_object* v_r_2166_; 
v_res_2165_ = l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0(v_00_u03b2_2163_, v_x_2164_);
lean_dec_ref(v_x_2164_);
v_r_2166_ = lean_box(v_res_2165_);
return v_r_2166_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3(lean_object* v_as_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_){
_start:
{
if (lean_obj_tag(v_as_2167_) == 0)
{
lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2179_ = lean_box(0);
v___x_2180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2180_, 0, v___x_2179_);
return v___x_2180_;
}
else
{
lean_object* v_head_2181_; lean_object* v_tail_2182_; lean_object* v___x_2183_; 
v_head_2181_ = lean_ctor_get(v_as_2167_, 0);
lean_inc(v_head_2181_);
v_tail_2182_ = lean_ctor_get(v_as_2167_, 1);
lean_inc(v_tail_2182_);
lean_dec_ref(v_as_2167_);
v___x_2183_ = l_Lean_Meta_Grind_DelayedTheoremInstance_check(v_head_2181_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_);
if (lean_obj_tag(v___x_2183_) == 0)
{
lean_dec_ref(v___x_2183_);
v_as_2167_ = v_tail_2182_;
goto _start;
}
else
{
lean_dec(v_tail_2182_);
return v___x_2183_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3___boxed(lean_object* v_as_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_){
_start:
{
lean_object* v_res_2197_; 
v_res_2197_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3(v_as_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_);
lean_dec(v___y_2195_);
lean_dec_ref(v___y_2194_);
lean_dec(v___y_2193_);
lean_dec_ref(v___y_2192_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2190_);
lean_dec(v___y_2189_);
lean_dec_ref(v___y_2188_);
lean_dec(v___y_2187_);
lean_dec(v___y_2186_);
return v_res_2197_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8(lean_object* v_xs_2198_, lean_object* v_v_2199_, lean_object* v_i_2200_){
_start:
{
lean_object* v___x_2201_; uint8_t v___x_2202_; 
v___x_2201_ = lean_array_get_size(v_xs_2198_);
v___x_2202_ = lean_nat_dec_lt(v_i_2200_, v___x_2201_);
if (v___x_2202_ == 0)
{
lean_object* v___x_2203_; 
lean_dec(v_i_2200_);
v___x_2203_ = lean_box(0);
return v___x_2203_;
}
else
{
lean_object* v___x_2204_; uint8_t v___x_2205_; 
v___x_2204_ = lean_array_fget_borrowed(v_xs_2198_, v_i_2200_);
v___x_2205_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_2204_, v_v_2199_);
if (v___x_2205_ == 0)
{
lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2206_ = lean_unsigned_to_nat(1u);
v___x_2207_ = lean_nat_add(v_i_2200_, v___x_2206_);
lean_dec(v_i_2200_);
v_i_2200_ = v___x_2207_;
goto _start;
}
else
{
lean_object* v___x_2209_; 
v___x_2209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2209_, 0, v_i_2200_);
return v___x_2209_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8___boxed(lean_object* v_xs_2210_, lean_object* v_v_2211_, lean_object* v_i_2212_){
_start:
{
lean_object* v_res_2213_; 
v_res_2213_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8(v_xs_2210_, v_v_2211_, v_i_2212_);
lean_dec_ref(v_v_2211_);
lean_dec_ref(v_xs_2210_);
return v_res_2213_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5(lean_object* v_xs_2214_, lean_object* v_v_2215_){
_start:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2216_ = lean_unsigned_to_nat(0u);
v___x_2217_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8(v_xs_2214_, v_v_2215_, v___x_2216_);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5___boxed(lean_object* v_xs_2218_, lean_object* v_v_2219_){
_start:
{
lean_object* v_res_2220_; 
v_res_2220_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5(v_xs_2218_, v_v_2219_);
lean_dec_ref(v_v_2219_);
lean_dec_ref(v_xs_2218_);
return v_res_2220_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(lean_object* v_x_2221_, size_t v_x_2222_, lean_object* v_x_2223_){
_start:
{
if (lean_obj_tag(v_x_2221_) == 0)
{
lean_object* v_es_2224_; lean_object* v___x_2225_; size_t v___x_2226_; size_t v___x_2227_; size_t v___x_2228_; lean_object* v_j_2229_; lean_object* v_entry_2230_; 
v_es_2224_ = lean_ctor_get(v_x_2221_, 0);
v___x_2225_ = lean_box(2);
v___x_2226_ = ((size_t)5ULL);
v___x_2227_ = lean_usize_once(&l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1);
v___x_2228_ = lean_usize_land(v_x_2222_, v___x_2227_);
v_j_2229_ = lean_usize_to_nat(v___x_2228_);
v_entry_2230_ = lean_array_get(v___x_2225_, v_es_2224_, v_j_2229_);
switch(lean_obj_tag(v_entry_2230_))
{
case 0:
{
lean_object* v_key_2231_; uint8_t v___x_2232_; 
v_key_2231_ = lean_ctor_get(v_entry_2230_, 0);
lean_inc(v_key_2231_);
lean_dec_ref(v_entry_2230_);
v___x_2232_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_2223_, v_key_2231_);
lean_dec(v_key_2231_);
if (v___x_2232_ == 0)
{
lean_dec(v_j_2229_);
return v_x_2221_;
}
else
{
lean_object* v___x_2234_; uint8_t v_isShared_2235_; uint8_t v_isSharedCheck_2240_; 
lean_inc_ref(v_es_2224_);
v_isSharedCheck_2240_ = !lean_is_exclusive(v_x_2221_);
if (v_isSharedCheck_2240_ == 0)
{
lean_object* v_unused_2241_; 
v_unused_2241_ = lean_ctor_get(v_x_2221_, 0);
lean_dec(v_unused_2241_);
v___x_2234_ = v_x_2221_;
v_isShared_2235_ = v_isSharedCheck_2240_;
goto v_resetjp_2233_;
}
else
{
lean_dec(v_x_2221_);
v___x_2234_ = lean_box(0);
v_isShared_2235_ = v_isSharedCheck_2240_;
goto v_resetjp_2233_;
}
v_resetjp_2233_:
{
lean_object* v___x_2236_; lean_object* v___x_2238_; 
v___x_2236_ = lean_array_set(v_es_2224_, v_j_2229_, v___x_2225_);
lean_dec(v_j_2229_);
if (v_isShared_2235_ == 0)
{
lean_ctor_set(v___x_2234_, 0, v___x_2236_);
v___x_2238_ = v___x_2234_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v___x_2236_);
v___x_2238_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
return v___x_2238_;
}
}
}
}
case 1:
{
lean_object* v___x_2243_; uint8_t v_isShared_2244_; uint8_t v_isSharedCheck_2275_; 
lean_inc_ref(v_es_2224_);
v_isSharedCheck_2275_ = !lean_is_exclusive(v_x_2221_);
if (v_isSharedCheck_2275_ == 0)
{
lean_object* v_unused_2276_; 
v_unused_2276_ = lean_ctor_get(v_x_2221_, 0);
lean_dec(v_unused_2276_);
v___x_2243_ = v_x_2221_;
v_isShared_2244_ = v_isSharedCheck_2275_;
goto v_resetjp_2242_;
}
else
{
lean_dec(v_x_2221_);
v___x_2243_ = lean_box(0);
v_isShared_2244_ = v_isSharedCheck_2275_;
goto v_resetjp_2242_;
}
v_resetjp_2242_:
{
lean_object* v_node_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2274_; 
v_node_2245_ = lean_ctor_get(v_entry_2230_, 0);
v_isSharedCheck_2274_ = !lean_is_exclusive(v_entry_2230_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2247_ = v_entry_2230_;
v_isShared_2248_ = v_isSharedCheck_2274_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_node_2245_);
lean_dec(v_entry_2230_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2274_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v_entries_2249_; size_t v___x_2250_; lean_object* v_newNode_2251_; lean_object* v___x_2252_; 
v_entries_2249_ = lean_array_set(v_es_2224_, v_j_2229_, v___x_2225_);
v___x_2250_ = lean_usize_shift_right(v_x_2222_, v___x_2226_);
v_newNode_2251_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(v_node_2245_, v___x_2250_, v_x_2223_);
lean_inc_ref(v_newNode_2251_);
v___x_2252_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_2251_);
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v___x_2254_; 
if (v_isShared_2248_ == 0)
{
lean_ctor_set(v___x_2247_, 0, v_newNode_2251_);
v___x_2254_ = v___x_2247_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v_newNode_2251_);
v___x_2254_ = v_reuseFailAlloc_2259_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
lean_object* v___x_2255_; lean_object* v___x_2257_; 
v___x_2255_ = lean_array_set(v_entries_2249_, v_j_2229_, v___x_2254_);
lean_dec(v_j_2229_);
if (v_isShared_2244_ == 0)
{
lean_ctor_set(v___x_2243_, 0, v___x_2255_);
v___x_2257_ = v___x_2243_;
goto v_reusejp_2256_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v___x_2255_);
v___x_2257_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2256_;
}
v_reusejp_2256_:
{
return v___x_2257_;
}
}
}
else
{
lean_object* v_val_2260_; lean_object* v_fst_2261_; lean_object* v_snd_2262_; lean_object* v___x_2264_; uint8_t v_isShared_2265_; uint8_t v_isSharedCheck_2273_; 
lean_dec_ref(v_newNode_2251_);
lean_del_object(v___x_2247_);
v_val_2260_ = lean_ctor_get(v___x_2252_, 0);
lean_inc(v_val_2260_);
lean_dec_ref(v___x_2252_);
v_fst_2261_ = lean_ctor_get(v_val_2260_, 0);
v_snd_2262_ = lean_ctor_get(v_val_2260_, 1);
v_isSharedCheck_2273_ = !lean_is_exclusive(v_val_2260_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2264_ = v_val_2260_;
v_isShared_2265_ = v_isSharedCheck_2273_;
goto v_resetjp_2263_;
}
else
{
lean_inc(v_snd_2262_);
lean_inc(v_fst_2261_);
lean_dec(v_val_2260_);
v___x_2264_ = lean_box(0);
v_isShared_2265_ = v_isSharedCheck_2273_;
goto v_resetjp_2263_;
}
v_resetjp_2263_:
{
lean_object* v___x_2267_; 
if (v_isShared_2265_ == 0)
{
v___x_2267_ = v___x_2264_;
goto v_reusejp_2266_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v_fst_2261_);
lean_ctor_set(v_reuseFailAlloc_2272_, 1, v_snd_2262_);
v___x_2267_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2266_;
}
v_reusejp_2266_:
{
lean_object* v___x_2268_; lean_object* v___x_2270_; 
v___x_2268_ = lean_array_set(v_entries_2249_, v_j_2229_, v___x_2267_);
lean_dec(v_j_2229_);
if (v_isShared_2244_ == 0)
{
lean_ctor_set(v___x_2243_, 0, v___x_2268_);
v___x_2270_ = v___x_2243_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v___x_2268_);
v___x_2270_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
return v___x_2270_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_2229_);
return v_x_2221_;
}
}
}
else
{
lean_object* v_ks_2277_; lean_object* v_vs_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2292_; 
v_ks_2277_ = lean_ctor_get(v_x_2221_, 0);
v_vs_2278_ = lean_ctor_get(v_x_2221_, 1);
v_isSharedCheck_2292_ = !lean_is_exclusive(v_x_2221_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2280_ = v_x_2221_;
v_isShared_2281_ = v_isSharedCheck_2292_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_vs_2278_);
lean_inc(v_ks_2277_);
lean_dec(v_x_2221_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2292_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
lean_object* v___x_2282_; 
v___x_2282_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5(v_ks_2277_, v_x_2223_);
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v___x_2284_; 
if (v_isShared_2281_ == 0)
{
v___x_2284_ = v___x_2280_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v_ks_2277_);
lean_ctor_set(v_reuseFailAlloc_2285_, 1, v_vs_2278_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
return v___x_2284_;
}
}
else
{
lean_object* v_val_2286_; lean_object* v_keys_x27_2287_; lean_object* v_vals_x27_2288_; lean_object* v___x_2290_; 
v_val_2286_ = lean_ctor_get(v___x_2282_, 0);
lean_inc_n(v_val_2286_, 2);
lean_dec_ref(v___x_2282_);
v_keys_x27_2287_ = l_Array_eraseIdx___redArg(v_ks_2277_, v_val_2286_);
v_vals_x27_2288_ = l_Array_eraseIdx___redArg(v_vs_2278_, v_val_2286_);
if (v_isShared_2281_ == 0)
{
lean_ctor_set(v___x_2280_, 1, v_vals_x27_2288_);
lean_ctor_set(v___x_2280_, 0, v_keys_x27_2287_);
v___x_2290_ = v___x_2280_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_keys_x27_2287_);
lean_ctor_set(v_reuseFailAlloc_2291_, 1, v_vals_x27_2288_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg___boxed(lean_object* v_x_2293_, lean_object* v_x_2294_, lean_object* v_x_2295_){
_start:
{
size_t v_x_24426__boxed_2296_; lean_object* v_res_2297_; 
v_x_24426__boxed_2296_ = lean_unbox_usize(v_x_2294_);
lean_dec(v_x_2294_);
v_res_2297_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(v_x_2293_, v_x_24426__boxed_2296_, v_x_2295_);
lean_dec_ref(v_x_2295_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg(lean_object* v_x_2298_, lean_object* v_x_2299_){
_start:
{
uint64_t v___x_2300_; size_t v_h_2301_; lean_object* v___x_2302_; 
v___x_2300_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_2299_);
v_h_2301_ = lean_uint64_to_usize(v___x_2300_);
v___x_2302_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(v_x_2298_, v_h_2301_, v_x_2299_);
return v___x_2302_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg___boxed(lean_object* v_x_2303_, lean_object* v_x_2304_){
_start:
{
lean_object* v_res_2305_; 
v_res_2305_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg(v_x_2303_, v_x_2304_);
lean_dec_ref(v_x_2304_);
return v_res_2305_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg(lean_object* v_keys_2306_, lean_object* v_vals_2307_, lean_object* v_i_2308_, lean_object* v_k_2309_){
_start:
{
lean_object* v___x_2310_; uint8_t v___x_2311_; 
v___x_2310_ = lean_array_get_size(v_keys_2306_);
v___x_2311_ = lean_nat_dec_lt(v_i_2308_, v___x_2310_);
if (v___x_2311_ == 0)
{
lean_object* v___x_2312_; 
lean_dec(v_i_2308_);
v___x_2312_ = lean_box(0);
return v___x_2312_;
}
else
{
lean_object* v_k_x27_2313_; uint8_t v___x_2314_; 
v_k_x27_2313_ = lean_array_fget_borrowed(v_keys_2306_, v_i_2308_);
v___x_2314_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_k_2309_, v_k_x27_2313_);
if (v___x_2314_ == 0)
{
lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2315_ = lean_unsigned_to_nat(1u);
v___x_2316_ = lean_nat_add(v_i_2308_, v___x_2315_);
lean_dec(v_i_2308_);
v_i_2308_ = v___x_2316_;
goto _start;
}
else
{
lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2318_ = lean_array_fget_borrowed(v_vals_2307_, v_i_2308_);
lean_dec(v_i_2308_);
lean_inc(v___x_2318_);
v___x_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2318_);
return v___x_2319_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_keys_2320_, lean_object* v_vals_2321_, lean_object* v_i_2322_, lean_object* v_k_2323_){
_start:
{
lean_object* v_res_2324_; 
v_res_2324_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg(v_keys_2320_, v_vals_2321_, v_i_2322_, v_k_2323_);
lean_dec_ref(v_k_2323_);
lean_dec_ref(v_vals_2321_);
lean_dec_ref(v_keys_2320_);
return v_res_2324_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg(lean_object* v_x_2325_, size_t v_x_2326_, lean_object* v_x_2327_){
_start:
{
if (lean_obj_tag(v_x_2325_) == 0)
{
lean_object* v_es_2328_; lean_object* v___x_2329_; size_t v___x_2330_; size_t v___x_2331_; size_t v___x_2332_; lean_object* v_j_2333_; lean_object* v___x_2334_; 
v_es_2328_ = lean_ctor_get(v_x_2325_, 0);
v___x_2329_ = lean_box(2);
v___x_2330_ = ((size_t)5ULL);
v___x_2331_ = lean_usize_once(&l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1);
v___x_2332_ = lean_usize_land(v_x_2326_, v___x_2331_);
v_j_2333_ = lean_usize_to_nat(v___x_2332_);
v___x_2334_ = lean_array_get_borrowed(v___x_2329_, v_es_2328_, v_j_2333_);
lean_dec(v_j_2333_);
switch(lean_obj_tag(v___x_2334_))
{
case 0:
{
lean_object* v_key_2335_; lean_object* v_val_2336_; uint8_t v___x_2337_; 
v_key_2335_ = lean_ctor_get(v___x_2334_, 0);
v_val_2336_ = lean_ctor_get(v___x_2334_, 1);
v___x_2337_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_2327_, v_key_2335_);
if (v___x_2337_ == 0)
{
lean_object* v___x_2338_; 
v___x_2338_ = lean_box(0);
return v___x_2338_;
}
else
{
lean_object* v___x_2339_; 
lean_inc(v_val_2336_);
v___x_2339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2339_, 0, v_val_2336_);
return v___x_2339_;
}
}
case 1:
{
lean_object* v_node_2340_; size_t v___x_2341_; 
v_node_2340_ = lean_ctor_get(v___x_2334_, 0);
v___x_2341_ = lean_usize_shift_right(v_x_2326_, v___x_2330_);
v_x_2325_ = v_node_2340_;
v_x_2326_ = v___x_2341_;
goto _start;
}
default: 
{
lean_object* v___x_2343_; 
v___x_2343_ = lean_box(0);
return v___x_2343_;
}
}
}
else
{
lean_object* v_ks_2344_; lean_object* v_vs_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; 
v_ks_2344_ = lean_ctor_get(v_x_2325_, 0);
v_vs_2345_ = lean_ctor_get(v_x_2325_, 1);
v___x_2346_ = lean_unsigned_to_nat(0u);
v___x_2347_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg(v_ks_2344_, v_vs_2345_, v___x_2346_, v_x_2327_);
return v___x_2347_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg___boxed(lean_object* v_x_2348_, lean_object* v_x_2349_, lean_object* v_x_2350_){
_start:
{
size_t v_x_24598__boxed_2351_; lean_object* v_res_2352_; 
v_x_24598__boxed_2351_ = lean_unbox_usize(v_x_2349_);
lean_dec(v_x_2349_);
v_res_2352_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg(v_x_2348_, v_x_24598__boxed_2351_, v_x_2350_);
lean_dec_ref(v_x_2350_);
lean_dec_ref(v_x_2348_);
return v_res_2352_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg(lean_object* v_x_2353_, lean_object* v_x_2354_){
_start:
{
uint64_t v___x_2355_; size_t v___x_2356_; lean_object* v___x_2357_; 
v___x_2355_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_2354_);
v___x_2356_ = lean_uint64_to_usize(v___x_2355_);
v___x_2357_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg(v_x_2353_, v___x_2356_, v_x_2354_);
return v___x_2357_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg___boxed(lean_object* v_x_2358_, lean_object* v_x_2359_){
_start:
{
lean_object* v_res_2360_; 
v_res_2360_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg(v_x_2358_, v_x_2359_);
lean_dec_ref(v_x_2359_);
lean_dec_ref(v_x_2358_);
return v_res_2360_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg(lean_object* v_as_x27_2361_, lean_object* v_b_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_){
_start:
{
if (lean_obj_tag(v_as_x27_2361_) == 0)
{
lean_object* v___x_2374_; 
v___x_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2374_, 0, v_b_2362_);
return v___x_2374_;
}
else
{
lean_object* v_head_2375_; lean_object* v_tail_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v_toGoalState_2379_; lean_object* v_ematch_2380_; lean_object* v_delayedThmInsts_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; 
v_head_2375_ = lean_ctor_get(v_as_x27_2361_, 0);
v_tail_2376_ = lean_ctor_get(v_as_x27_2361_, 1);
v___x_2377_ = lean_st_ref_get(v___y_2372_);
lean_dec(v___x_2377_);
v___x_2378_ = lean_st_ref_get(v___y_2363_);
v_toGoalState_2379_ = lean_ctor_get(v___x_2378_, 0);
lean_inc_ref(v_toGoalState_2379_);
lean_dec(v___x_2378_);
v_ematch_2380_ = lean_ctor_get(v_toGoalState_2379_, 12);
lean_inc_ref(v_ematch_2380_);
lean_dec_ref(v_toGoalState_2379_);
v_delayedThmInsts_2381_ = lean_ctor_get(v_ematch_2380_, 10);
lean_inc_ref(v_delayedThmInsts_2381_);
lean_dec_ref(v_ematch_2380_);
v___x_2382_ = lean_box(0);
v___x_2383_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg(v_delayedThmInsts_2381_, v_head_2375_);
lean_dec_ref(v_delayedThmInsts_2381_);
if (lean_obj_tag(v___x_2383_) == 1)
{
lean_object* v_val_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v_toGoalState_2387_; lean_object* v_ematch_2388_; lean_object* v_mvarId_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2443_; 
v_val_2384_ = lean_ctor_get(v___x_2383_, 0);
lean_inc(v_val_2384_);
lean_dec_ref(v___x_2383_);
v___x_2385_ = lean_st_ref_get(v___y_2372_);
lean_dec(v___x_2385_);
v___x_2386_ = lean_st_ref_take(v___y_2363_);
v_toGoalState_2387_ = lean_ctor_get(v___x_2386_, 0);
lean_inc_ref(v_toGoalState_2387_);
v_ematch_2388_ = lean_ctor_get(v_toGoalState_2387_, 12);
lean_inc_ref(v_ematch_2388_);
v_mvarId_2389_ = lean_ctor_get(v___x_2386_, 1);
v_isSharedCheck_2443_ = !lean_is_exclusive(v___x_2386_);
if (v_isSharedCheck_2443_ == 0)
{
lean_object* v_unused_2444_; 
v_unused_2444_ = lean_ctor_get(v___x_2386_, 0);
lean_dec(v_unused_2444_);
v___x_2391_ = v___x_2386_;
v_isShared_2392_ = v_isSharedCheck_2443_;
goto v_resetjp_2390_;
}
else
{
lean_inc(v_mvarId_2389_);
lean_dec(v___x_2386_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2443_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v_nextDeclIdx_2393_; lean_object* v_enodeMap_2394_; lean_object* v_exprs_2395_; lean_object* v_parents_2396_; lean_object* v_congrTable_2397_; lean_object* v_appMap_2398_; lean_object* v_indicesFound_2399_; lean_object* v_newFacts_2400_; uint8_t v_inconsistent_2401_; lean_object* v_nextIdx_2402_; lean_object* v_newRawFacts_2403_; lean_object* v_facts_2404_; lean_object* v_extThms_2405_; lean_object* v_inj_2406_; lean_object* v_split_2407_; lean_object* v_clean_2408_; lean_object* v_sstates_2409_; lean_object* v___x_2411_; uint8_t v_isShared_2412_; uint8_t v_isSharedCheck_2441_; 
v_nextDeclIdx_2393_ = lean_ctor_get(v_toGoalState_2387_, 0);
v_enodeMap_2394_ = lean_ctor_get(v_toGoalState_2387_, 1);
v_exprs_2395_ = lean_ctor_get(v_toGoalState_2387_, 2);
v_parents_2396_ = lean_ctor_get(v_toGoalState_2387_, 3);
v_congrTable_2397_ = lean_ctor_get(v_toGoalState_2387_, 4);
v_appMap_2398_ = lean_ctor_get(v_toGoalState_2387_, 5);
v_indicesFound_2399_ = lean_ctor_get(v_toGoalState_2387_, 6);
v_newFacts_2400_ = lean_ctor_get(v_toGoalState_2387_, 7);
v_inconsistent_2401_ = lean_ctor_get_uint8(v_toGoalState_2387_, sizeof(void*)*17);
v_nextIdx_2402_ = lean_ctor_get(v_toGoalState_2387_, 8);
v_newRawFacts_2403_ = lean_ctor_get(v_toGoalState_2387_, 9);
v_facts_2404_ = lean_ctor_get(v_toGoalState_2387_, 10);
v_extThms_2405_ = lean_ctor_get(v_toGoalState_2387_, 11);
v_inj_2406_ = lean_ctor_get(v_toGoalState_2387_, 13);
v_split_2407_ = lean_ctor_get(v_toGoalState_2387_, 14);
v_clean_2408_ = lean_ctor_get(v_toGoalState_2387_, 15);
v_sstates_2409_ = lean_ctor_get(v_toGoalState_2387_, 16);
v_isSharedCheck_2441_ = !lean_is_exclusive(v_toGoalState_2387_);
if (v_isSharedCheck_2441_ == 0)
{
lean_object* v_unused_2442_; 
v_unused_2442_ = lean_ctor_get(v_toGoalState_2387_, 12);
lean_dec(v_unused_2442_);
v___x_2411_ = v_toGoalState_2387_;
v_isShared_2412_ = v_isSharedCheck_2441_;
goto v_resetjp_2410_;
}
else
{
lean_inc(v_sstates_2409_);
lean_inc(v_clean_2408_);
lean_inc(v_split_2407_);
lean_inc(v_inj_2406_);
lean_inc(v_extThms_2405_);
lean_inc(v_facts_2404_);
lean_inc(v_newRawFacts_2403_);
lean_inc(v_nextIdx_2402_);
lean_inc(v_newFacts_2400_);
lean_inc(v_indicesFound_2399_);
lean_inc(v_appMap_2398_);
lean_inc(v_congrTable_2397_);
lean_inc(v_parents_2396_);
lean_inc(v_exprs_2395_);
lean_inc(v_enodeMap_2394_);
lean_inc(v_nextDeclIdx_2393_);
lean_dec(v_toGoalState_2387_);
v___x_2411_ = lean_box(0);
v_isShared_2412_ = v_isSharedCheck_2441_;
goto v_resetjp_2410_;
}
v_resetjp_2410_:
{
lean_object* v_thmMap_2413_; lean_object* v_gmt_2414_; lean_object* v_thms_2415_; lean_object* v_newThms_2416_; lean_object* v_numInstances_2417_; lean_object* v_numDelayedInstances_2418_; lean_object* v_num_2419_; lean_object* v_preInstances_2420_; lean_object* v_nextThmIdx_2421_; lean_object* v_matchEqNames_2422_; lean_object* v_delayedThmInsts_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2440_; 
v_thmMap_2413_ = lean_ctor_get(v_ematch_2388_, 0);
v_gmt_2414_ = lean_ctor_get(v_ematch_2388_, 1);
v_thms_2415_ = lean_ctor_get(v_ematch_2388_, 2);
v_newThms_2416_ = lean_ctor_get(v_ematch_2388_, 3);
v_numInstances_2417_ = lean_ctor_get(v_ematch_2388_, 4);
v_numDelayedInstances_2418_ = lean_ctor_get(v_ematch_2388_, 5);
v_num_2419_ = lean_ctor_get(v_ematch_2388_, 6);
v_preInstances_2420_ = lean_ctor_get(v_ematch_2388_, 7);
v_nextThmIdx_2421_ = lean_ctor_get(v_ematch_2388_, 8);
v_matchEqNames_2422_ = lean_ctor_get(v_ematch_2388_, 9);
v_delayedThmInsts_2423_ = lean_ctor_get(v_ematch_2388_, 10);
v_isSharedCheck_2440_ = !lean_is_exclusive(v_ematch_2388_);
if (v_isSharedCheck_2440_ == 0)
{
v___x_2425_ = v_ematch_2388_;
v_isShared_2426_ = v_isSharedCheck_2440_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_delayedThmInsts_2423_);
lean_inc(v_matchEqNames_2422_);
lean_inc(v_nextThmIdx_2421_);
lean_inc(v_preInstances_2420_);
lean_inc(v_num_2419_);
lean_inc(v_numDelayedInstances_2418_);
lean_inc(v_numInstances_2417_);
lean_inc(v_newThms_2416_);
lean_inc(v_thms_2415_);
lean_inc(v_gmt_2414_);
lean_inc(v_thmMap_2413_);
lean_dec(v_ematch_2388_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2440_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v___x_2427_; lean_object* v___x_2429_; 
v___x_2427_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg(v_delayedThmInsts_2423_, v_head_2375_);
if (v_isShared_2426_ == 0)
{
lean_ctor_set(v___x_2425_, 10, v___x_2427_);
v___x_2429_ = v___x_2425_;
goto v_reusejp_2428_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v_thmMap_2413_);
lean_ctor_set(v_reuseFailAlloc_2439_, 1, v_gmt_2414_);
lean_ctor_set(v_reuseFailAlloc_2439_, 2, v_thms_2415_);
lean_ctor_set(v_reuseFailAlloc_2439_, 3, v_newThms_2416_);
lean_ctor_set(v_reuseFailAlloc_2439_, 4, v_numInstances_2417_);
lean_ctor_set(v_reuseFailAlloc_2439_, 5, v_numDelayedInstances_2418_);
lean_ctor_set(v_reuseFailAlloc_2439_, 6, v_num_2419_);
lean_ctor_set(v_reuseFailAlloc_2439_, 7, v_preInstances_2420_);
lean_ctor_set(v_reuseFailAlloc_2439_, 8, v_nextThmIdx_2421_);
lean_ctor_set(v_reuseFailAlloc_2439_, 9, v_matchEqNames_2422_);
lean_ctor_set(v_reuseFailAlloc_2439_, 10, v___x_2427_);
v___x_2429_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2428_;
}
v_reusejp_2428_:
{
lean_object* v___x_2431_; 
if (v_isShared_2412_ == 0)
{
lean_ctor_set(v___x_2411_, 12, v___x_2429_);
v___x_2431_ = v___x_2411_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v_nextDeclIdx_2393_);
lean_ctor_set(v_reuseFailAlloc_2438_, 1, v_enodeMap_2394_);
lean_ctor_set(v_reuseFailAlloc_2438_, 2, v_exprs_2395_);
lean_ctor_set(v_reuseFailAlloc_2438_, 3, v_parents_2396_);
lean_ctor_set(v_reuseFailAlloc_2438_, 4, v_congrTable_2397_);
lean_ctor_set(v_reuseFailAlloc_2438_, 5, v_appMap_2398_);
lean_ctor_set(v_reuseFailAlloc_2438_, 6, v_indicesFound_2399_);
lean_ctor_set(v_reuseFailAlloc_2438_, 7, v_newFacts_2400_);
lean_ctor_set(v_reuseFailAlloc_2438_, 8, v_nextIdx_2402_);
lean_ctor_set(v_reuseFailAlloc_2438_, 9, v_newRawFacts_2403_);
lean_ctor_set(v_reuseFailAlloc_2438_, 10, v_facts_2404_);
lean_ctor_set(v_reuseFailAlloc_2438_, 11, v_extThms_2405_);
lean_ctor_set(v_reuseFailAlloc_2438_, 12, v___x_2429_);
lean_ctor_set(v_reuseFailAlloc_2438_, 13, v_inj_2406_);
lean_ctor_set(v_reuseFailAlloc_2438_, 14, v_split_2407_);
lean_ctor_set(v_reuseFailAlloc_2438_, 15, v_clean_2408_);
lean_ctor_set(v_reuseFailAlloc_2438_, 16, v_sstates_2409_);
lean_ctor_set_uint8(v_reuseFailAlloc_2438_, sizeof(void*)*17, v_inconsistent_2401_);
v___x_2431_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
lean_object* v___x_2433_; 
if (v_isShared_2392_ == 0)
{
lean_ctor_set(v___x_2391_, 0, v___x_2431_);
v___x_2433_ = v___x_2391_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v___x_2431_);
lean_ctor_set(v_reuseFailAlloc_2437_, 1, v_mvarId_2389_);
v___x_2433_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
lean_object* v___x_2434_; lean_object* v___x_2435_; 
v___x_2434_ = lean_st_ref_set(v___y_2363_, v___x_2433_);
v___x_2435_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3(v_val_2384_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_);
if (lean_obj_tag(v___x_2435_) == 0)
{
lean_dec_ref(v___x_2435_);
v_as_x27_2361_ = v_tail_2376_;
v_b_2362_ = v___x_2382_;
goto _start;
}
else
{
return v___x_2435_;
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
lean_dec(v___x_2383_);
v_as_x27_2361_ = v_tail_2376_;
v_b_2362_ = v___x_2382_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg___boxed(lean_object* v_as_x27_2446_, lean_object* v_b_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_){
_start:
{
lean_object* v_res_2459_; 
v_res_2459_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg(v_as_x27_2446_, v_b_2447_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec(v___y_2451_);
lean_dec_ref(v___y_2450_);
lean_dec(v___y_2449_);
lean_dec(v___y_2448_);
lean_dec(v_as_x27_2446_);
return v_res_2459_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts(lean_object* v_toPropagateDown_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_, lean_object* v_a_2469_, lean_object* v_a_2470_){
_start:
{
lean_object* v___x_2472_; 
v___x_2472_ = l_Lean_Meta_Grind_isInconsistent___redArg(v_a_2461_, v_a_2470_);
if (lean_obj_tag(v___x_2472_) == 0)
{
lean_object* v_a_2473_; lean_object* v___x_2475_; uint8_t v_isShared_2476_; uint8_t v_isSharedCheck_2502_; 
v_a_2473_ = lean_ctor_get(v___x_2472_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___x_2472_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2475_ = v___x_2472_;
v_isShared_2476_ = v_isSharedCheck_2502_;
goto v_resetjp_2474_;
}
else
{
lean_inc(v_a_2473_);
lean_dec(v___x_2472_);
v___x_2475_ = lean_box(0);
v_isShared_2476_ = v_isSharedCheck_2502_;
goto v_resetjp_2474_;
}
v_resetjp_2474_:
{
uint8_t v___x_2477_; 
v___x_2477_ = lean_unbox(v_a_2473_);
lean_dec(v_a_2473_);
if (v___x_2477_ == 0)
{
lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v_toGoalState_2480_; lean_object* v_ematch_2481_; lean_object* v_delayedThmInsts_2482_; uint8_t v___x_2483_; 
v___x_2478_ = lean_st_ref_get(v_a_2470_);
lean_dec(v___x_2478_);
v___x_2479_ = lean_st_ref_get(v_a_2461_);
v_toGoalState_2480_ = lean_ctor_get(v___x_2479_, 0);
lean_inc_ref(v_toGoalState_2480_);
lean_dec(v___x_2479_);
v_ematch_2481_ = lean_ctor_get(v_toGoalState_2480_, 12);
lean_inc_ref(v_ematch_2481_);
lean_dec_ref(v_toGoalState_2480_);
v_delayedThmInsts_2482_ = lean_ctor_get(v_ematch_2481_, 10);
lean_inc_ref(v_delayedThmInsts_2482_);
lean_dec_ref(v_ematch_2481_);
v___x_2483_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_delayedThmInsts_2482_);
lean_dec_ref(v_delayedThmInsts_2482_);
if (v___x_2483_ == 0)
{
lean_object* v___x_2484_; lean_object* v___x_2485_; 
lean_del_object(v___x_2475_);
v___x_2484_ = lean_box(0);
v___x_2485_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg(v_toPropagateDown_2460_, v___x_2484_, v_a_2461_, v_a_2462_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_, v_a_2469_, v_a_2470_);
if (lean_obj_tag(v___x_2485_) == 0)
{
lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2492_; 
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2485_);
if (v_isSharedCheck_2492_ == 0)
{
lean_object* v_unused_2493_; 
v_unused_2493_ = lean_ctor_get(v___x_2485_, 0);
lean_dec(v_unused_2493_);
v___x_2487_ = v___x_2485_;
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
else
{
lean_dec(v___x_2485_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2490_; 
if (v_isShared_2488_ == 0)
{
lean_ctor_set(v___x_2487_, 0, v___x_2484_);
v___x_2490_ = v___x_2487_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v___x_2484_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
return v___x_2490_;
}
}
}
else
{
return v___x_2485_;
}
}
else
{
lean_object* v___x_2494_; lean_object* v___x_2496_; 
v___x_2494_ = lean_box(0);
if (v_isShared_2476_ == 0)
{
lean_ctor_set(v___x_2475_, 0, v___x_2494_);
v___x_2496_ = v___x_2475_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v___x_2494_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
return v___x_2496_;
}
}
}
else
{
lean_object* v___x_2498_; lean_object* v___x_2500_; 
v___x_2498_ = lean_box(0);
if (v_isShared_2476_ == 0)
{
lean_ctor_set(v___x_2475_, 0, v___x_2498_);
v___x_2500_ = v___x_2475_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v___x_2498_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
}
}
else
{
lean_object* v_a_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2510_; 
v_a_2503_ = lean_ctor_get(v___x_2472_, 0);
v_isSharedCheck_2510_ = !lean_is_exclusive(v___x_2472_);
if (v_isSharedCheck_2510_ == 0)
{
v___x_2505_ = v___x_2472_;
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_a_2503_);
lean_dec(v___x_2472_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v___x_2508_; 
if (v_isShared_2506_ == 0)
{
v___x_2508_ = v___x_2505_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v_a_2503_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
return v___x_2508_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts___boxed(lean_object* v_toPropagateDown_2511_, lean_object* v_a_2512_, lean_object* v_a_2513_, lean_object* v_a_2514_, lean_object* v_a_2515_, lean_object* v_a_2516_, lean_object* v_a_2517_, lean_object* v_a_2518_, lean_object* v_a_2519_, lean_object* v_a_2520_, lean_object* v_a_2521_, lean_object* v_a_2522_){
_start:
{
lean_object* v_res_2523_; 
v_res_2523_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts(v_toPropagateDown_2511_, v_a_2512_, v_a_2513_, v_a_2514_, v_a_2515_, v_a_2516_, v_a_2517_, v_a_2518_, v_a_2519_, v_a_2520_, v_a_2521_);
lean_dec(v_a_2521_);
lean_dec_ref(v_a_2520_);
lean_dec(v_a_2519_);
lean_dec_ref(v_a_2518_);
lean_dec(v_a_2517_);
lean_dec_ref(v_a_2516_);
lean_dec(v_a_2515_);
lean_dec_ref(v_a_2514_);
lean_dec(v_a_2513_);
lean_dec(v_a_2512_);
lean_dec(v_toPropagateDown_2511_);
return v_res_2523_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1(lean_object* v_00_u03b2_2524_, lean_object* v_x_2525_, lean_object* v_x_2526_){
_start:
{
lean_object* v___x_2527_; 
v___x_2527_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg(v_x_2525_, v_x_2526_);
return v___x_2527_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___boxed(lean_object* v_00_u03b2_2528_, lean_object* v_x_2529_, lean_object* v_x_2530_){
_start:
{
lean_object* v_res_2531_; 
v_res_2531_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1(v_00_u03b2_2528_, v_x_2529_, v_x_2530_);
lean_dec_ref(v_x_2530_);
lean_dec_ref(v_x_2529_);
return v_res_2531_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2(lean_object* v_00_u03b2_2532_, lean_object* v_x_2533_, lean_object* v_x_2534_){
_start:
{
lean_object* v___x_2535_; 
v___x_2535_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg(v_x_2533_, v_x_2534_);
return v___x_2535_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___boxed(lean_object* v_00_u03b2_2536_, lean_object* v_x_2537_, lean_object* v_x_2538_){
_start:
{
lean_object* v_res_2539_; 
v_res_2539_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2(v_00_u03b2_2536_, v_x_2537_, v_x_2538_);
lean_dec_ref(v_x_2538_);
return v_res_2539_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4(lean_object* v_as_2540_, lean_object* v_as_x27_2541_, lean_object* v_b_2542_, lean_object* v_a_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_){
_start:
{
lean_object* v___x_2555_; 
v___x_2555_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg(v_as_x27_2541_, v_b_2542_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_);
return v___x_2555_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___boxed(lean_object* v_as_2556_, lean_object* v_as_x27_2557_, lean_object* v_b_2558_, lean_object* v_a_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_){
_start:
{
lean_object* v_res_2571_; 
v_res_2571_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4(v_as_2556_, v_as_x27_2557_, v_b_2558_, v_a_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_);
lean_dec(v___y_2569_);
lean_dec_ref(v___y_2568_);
lean_dec(v___y_2567_);
lean_dec_ref(v___y_2566_);
lean_dec(v___y_2565_);
lean_dec_ref(v___y_2564_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
lean_dec(v___y_2561_);
lean_dec(v___y_2560_);
lean_dec(v_as_x27_2557_);
lean_dec(v_as_2556_);
return v_res_2571_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1(lean_object* v_00_u03b2_2572_, lean_object* v_x_2573_, size_t v_x_2574_, lean_object* v_x_2575_){
_start:
{
lean_object* v___x_2576_; 
v___x_2576_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg(v_x_2573_, v_x_2574_, v_x_2575_);
return v___x_2576_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___boxed(lean_object* v_00_u03b2_2577_, lean_object* v_x_2578_, lean_object* v_x_2579_, lean_object* v_x_2580_){
_start:
{
size_t v_x_24901__boxed_2581_; lean_object* v_res_2582_; 
v_x_24901__boxed_2581_ = lean_unbox_usize(v_x_2579_);
lean_dec(v_x_2579_);
v_res_2582_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1(v_00_u03b2_2577_, v_x_2578_, v_x_24901__boxed_2581_, v_x_2580_);
lean_dec_ref(v_x_2580_);
lean_dec_ref(v_x_2578_);
return v_res_2582_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3(lean_object* v_00_u03b2_2583_, lean_object* v_x_2584_, size_t v_x_2585_, lean_object* v_x_2586_){
_start:
{
lean_object* v___x_2587_; 
v___x_2587_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(v_x_2584_, v_x_2585_, v_x_2586_);
return v___x_2587_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___boxed(lean_object* v_00_u03b2_2588_, lean_object* v_x_2589_, lean_object* v_x_2590_, lean_object* v_x_2591_){
_start:
{
size_t v_x_24912__boxed_2592_; lean_object* v_res_2593_; 
v_x_24912__boxed_2592_ = lean_unbox_usize(v_x_2590_);
lean_dec(v_x_2590_);
v_res_2593_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3(v_00_u03b2_2588_, v_x_2589_, v_x_24912__boxed_2592_, v_x_2591_);
lean_dec_ref(v_x_2591_);
return v_res_2593_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_2594_, lean_object* v_keys_2595_, lean_object* v_vals_2596_, lean_object* v_heq_2597_, lean_object* v_i_2598_, lean_object* v_k_2599_){
_start:
{
lean_object* v___x_2600_; 
v___x_2600_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg(v_keys_2595_, v_vals_2596_, v_i_2598_, v_k_2599_);
return v___x_2600_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2601_, lean_object* v_keys_2602_, lean_object* v_vals_2603_, lean_object* v_heq_2604_, lean_object* v_i_2605_, lean_object* v_k_2606_){
_start:
{
lean_object* v_res_2607_; 
v_res_2607_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2(v_00_u03b2_2601_, v_keys_2602_, v_vals_2603_, v_heq_2604_, v_i_2605_, v_k_2606_);
lean_dec_ref(v_k_2606_);
lean_dec_ref(v_vals_2603_);
lean_dec_ref(v_keys_2602_);
return v_res_2607_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg(lean_object* v___x_2608_, lean_object* v_keys_2609_, lean_object* v_vals_2610_, lean_object* v_i_2611_, lean_object* v_k_2612_){
_start:
{
lean_object* v___x_2613_; uint8_t v___x_2614_; 
v___x_2613_ = lean_array_get_size(v_keys_2609_);
v___x_2614_ = lean_nat_dec_lt(v_i_2611_, v___x_2613_);
if (v___x_2614_ == 0)
{
lean_object* v___x_2615_; 
lean_dec_ref(v_k_2612_);
lean_dec(v_i_2611_);
v___x_2615_ = lean_box(0);
return v___x_2615_;
}
else
{
lean_object* v_k_x27_2616_; uint8_t v___x_2617_; 
v_k_x27_2616_ = lean_array_fget_borrowed(v_keys_2609_, v_i_2611_);
lean_inc(v_k_x27_2616_);
lean_inc_ref(v_k_2612_);
v___x_2617_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_2608_, v_k_2612_, v_k_x27_2616_);
if (v___x_2617_ == 0)
{
lean_object* v___x_2618_; lean_object* v___x_2619_; 
v___x_2618_ = lean_unsigned_to_nat(1u);
v___x_2619_ = lean_nat_add(v_i_2611_, v___x_2618_);
lean_dec(v_i_2611_);
v_i_2611_ = v___x_2619_;
goto _start;
}
else
{
lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
lean_dec_ref(v_k_2612_);
v___x_2621_ = lean_array_fget_borrowed(v_vals_2610_, v_i_2611_);
lean_dec(v_i_2611_);
lean_inc(v___x_2621_);
lean_inc(v_k_x27_2616_);
v___x_2622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2622_, 0, v_k_x27_2616_);
lean_ctor_set(v___x_2622_, 1, v___x_2621_);
v___x_2623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2622_);
return v___x_2623_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v___x_2624_, lean_object* v_keys_2625_, lean_object* v_vals_2626_, lean_object* v_i_2627_, lean_object* v_k_2628_){
_start:
{
lean_object* v_res_2629_; 
v_res_2629_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg(v___x_2624_, v_keys_2625_, v_vals_2626_, v_i_2627_, v_k_2628_);
lean_dec_ref(v_vals_2626_);
lean_dec_ref(v_keys_2625_);
lean_dec_ref(v___x_2624_);
return v_res_2629_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg(lean_object* v___x_2630_, lean_object* v_x_2631_, size_t v_x_2632_, lean_object* v_x_2633_){
_start:
{
if (lean_obj_tag(v_x_2631_) == 0)
{
lean_object* v_es_2634_; lean_object* v___x_2635_; size_t v___x_2636_; size_t v___x_2637_; size_t v___x_2638_; lean_object* v_j_2639_; lean_object* v___x_2640_; 
v_es_2634_ = lean_ctor_get(v_x_2631_, 0);
lean_inc_ref(v_es_2634_);
lean_dec_ref(v_x_2631_);
v___x_2635_ = lean_box(2);
v___x_2636_ = ((size_t)5ULL);
v___x_2637_ = lean_usize_once(&l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1);
v___x_2638_ = lean_usize_land(v_x_2632_, v___x_2637_);
v_j_2639_ = lean_usize_to_nat(v___x_2638_);
v___x_2640_ = lean_array_get(v___x_2635_, v_es_2634_, v_j_2639_);
lean_dec(v_j_2639_);
lean_dec_ref(v_es_2634_);
switch(lean_obj_tag(v___x_2640_))
{
case 0:
{
lean_object* v_key_2641_; lean_object* v_val_2642_; uint8_t v___x_2643_; 
v_key_2641_ = lean_ctor_get(v___x_2640_, 0);
lean_inc_n(v_key_2641_, 2);
v_val_2642_ = lean_ctor_get(v___x_2640_, 1);
lean_inc(v_val_2642_);
lean_dec_ref(v___x_2640_);
v___x_2643_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_2630_, v_x_2633_, v_key_2641_);
if (v___x_2643_ == 0)
{
lean_object* v___x_2644_; 
lean_dec(v_val_2642_);
lean_dec(v_key_2641_);
v___x_2644_ = lean_box(0);
return v___x_2644_;
}
else
{
lean_object* v___x_2645_; lean_object* v___x_2646_; 
v___x_2645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2645_, 0, v_key_2641_);
lean_ctor_set(v___x_2645_, 1, v_val_2642_);
v___x_2646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2646_, 0, v___x_2645_);
return v___x_2646_;
}
}
case 1:
{
lean_object* v_node_2647_; size_t v___x_2648_; 
v_node_2647_ = lean_ctor_get(v___x_2640_, 0);
lean_inc(v_node_2647_);
lean_dec_ref(v___x_2640_);
v___x_2648_ = lean_usize_shift_right(v_x_2632_, v___x_2636_);
v_x_2631_ = v_node_2647_;
v_x_2632_ = v___x_2648_;
goto _start;
}
default: 
{
lean_object* v___x_2650_; 
lean_dec_ref(v_x_2633_);
v___x_2650_ = lean_box(0);
return v___x_2650_;
}
}
}
else
{
lean_object* v_ks_2651_; lean_object* v_vs_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; 
v_ks_2651_ = lean_ctor_get(v_x_2631_, 0);
lean_inc_ref(v_ks_2651_);
v_vs_2652_ = lean_ctor_get(v_x_2631_, 1);
lean_inc_ref(v_vs_2652_);
lean_dec_ref(v_x_2631_);
v___x_2653_ = lean_unsigned_to_nat(0u);
v___x_2654_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg(v___x_2630_, v_ks_2651_, v_vs_2652_, v___x_2653_, v_x_2633_);
lean_dec_ref(v_vs_2652_);
lean_dec_ref(v_ks_2651_);
return v___x_2654_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg___boxed(lean_object* v___x_2655_, lean_object* v_x_2656_, lean_object* v_x_2657_, lean_object* v_x_2658_){
_start:
{
size_t v_x_30204__boxed_2659_; lean_object* v_res_2660_; 
v_x_30204__boxed_2659_ = lean_unbox_usize(v_x_2657_);
lean_dec(v_x_2657_);
v_res_2660_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg(v___x_2655_, v_x_2656_, v_x_30204__boxed_2659_, v_x_2658_);
lean_dec_ref(v___x_2655_);
return v_res_2660_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg(lean_object* v___x_2661_, lean_object* v_x_2662_, lean_object* v_x_2663_){
_start:
{
uint64_t v___x_2664_; size_t v___x_2665_; lean_object* v___x_2666_; 
lean_inc_ref(v_x_2663_);
v___x_2664_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(v___x_2661_, v_x_2663_);
v___x_2665_ = lean_uint64_to_usize(v___x_2664_);
lean_inc_ref(v_x_2662_);
v___x_2666_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg(v___x_2661_, v_x_2662_, v___x_2665_, v_x_2663_);
return v___x_2666_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg___boxed(lean_object* v___x_2667_, lean_object* v_x_2668_, lean_object* v_x_2669_){
_start:
{
lean_object* v_res_2670_; 
v_res_2670_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg(v___x_2667_, v_x_2668_, v_x_2669_);
lean_dec_ref(v_x_2668_);
lean_dec_ref(v___x_2667_);
return v_res_2670_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg(lean_object* v___x_2671_, lean_object* v_x_2672_, lean_object* v_x_2673_, lean_object* v_x_2674_, lean_object* v_x_2675_){
_start:
{
lean_object* v_ks_2676_; lean_object* v_vs_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2701_; 
v_ks_2676_ = lean_ctor_get(v_x_2672_, 0);
v_vs_2677_ = lean_ctor_get(v_x_2672_, 1);
v_isSharedCheck_2701_ = !lean_is_exclusive(v_x_2672_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2679_ = v_x_2672_;
v_isShared_2680_ = v_isSharedCheck_2701_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_vs_2677_);
lean_inc(v_ks_2676_);
lean_dec(v_x_2672_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2701_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v___x_2681_; uint8_t v___x_2682_; 
v___x_2681_ = lean_array_get_size(v_ks_2676_);
v___x_2682_ = lean_nat_dec_lt(v_x_2673_, v___x_2681_);
if (v___x_2682_ == 0)
{
lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2686_; 
lean_dec(v_x_2673_);
v___x_2683_ = lean_array_push(v_ks_2676_, v_x_2674_);
v___x_2684_ = lean_array_push(v_vs_2677_, v_x_2675_);
if (v_isShared_2680_ == 0)
{
lean_ctor_set(v___x_2679_, 1, v___x_2684_);
lean_ctor_set(v___x_2679_, 0, v___x_2683_);
v___x_2686_ = v___x_2679_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v___x_2683_);
lean_ctor_set(v_reuseFailAlloc_2687_, 1, v___x_2684_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
else
{
lean_object* v_k_x27_2688_; uint8_t v___x_2689_; 
v_k_x27_2688_ = lean_array_fget_borrowed(v_ks_2676_, v_x_2673_);
lean_inc(v_k_x27_2688_);
lean_inc_ref(v_x_2674_);
v___x_2689_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_2671_, v_x_2674_, v_k_x27_2688_);
if (v___x_2689_ == 0)
{
lean_object* v___x_2691_; 
if (v_isShared_2680_ == 0)
{
v___x_2691_ = v___x_2679_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v_ks_2676_);
lean_ctor_set(v_reuseFailAlloc_2695_, 1, v_vs_2677_);
v___x_2691_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
lean_object* v___x_2692_; lean_object* v___x_2693_; 
v___x_2692_ = lean_unsigned_to_nat(1u);
v___x_2693_ = lean_nat_add(v_x_2673_, v___x_2692_);
lean_dec(v_x_2673_);
v_x_2672_ = v___x_2691_;
v_x_2673_ = v___x_2693_;
goto _start;
}
}
else
{
lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2699_; 
v___x_2696_ = lean_array_fset(v_ks_2676_, v_x_2673_, v_x_2674_);
v___x_2697_ = lean_array_fset(v_vs_2677_, v_x_2673_, v_x_2675_);
lean_dec(v_x_2673_);
if (v_isShared_2680_ == 0)
{
lean_ctor_set(v___x_2679_, 1, v___x_2697_);
lean_ctor_set(v___x_2679_, 0, v___x_2696_);
v___x_2699_ = v___x_2679_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v___x_2696_);
lean_ctor_set(v_reuseFailAlloc_2700_, 1, v___x_2697_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
return v___x_2699_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v___x_2702_, lean_object* v_x_2703_, lean_object* v_x_2704_, lean_object* v_x_2705_, lean_object* v_x_2706_){
_start:
{
lean_object* v_res_2707_; 
v_res_2707_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg(v___x_2702_, v_x_2703_, v_x_2704_, v_x_2705_, v_x_2706_);
lean_dec_ref(v___x_2702_);
return v_res_2707_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg(lean_object* v___x_2708_, lean_object* v_n_2709_, lean_object* v_k_2710_, lean_object* v_v_2711_){
_start:
{
lean_object* v___x_2712_; lean_object* v___x_2713_; 
v___x_2712_ = lean_unsigned_to_nat(0u);
v___x_2713_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg(v___x_2708_, v_n_2709_, v___x_2712_, v_k_2710_, v_v_2711_);
return v___x_2713_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v___x_2714_, lean_object* v_n_2715_, lean_object* v_k_2716_, lean_object* v_v_2717_){
_start:
{
lean_object* v_res_2718_; 
v_res_2718_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg(v___x_2714_, v_n_2715_, v_k_2716_, v_v_2717_);
lean_dec_ref(v___x_2714_);
return v_res_2718_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_2719_; 
v___x_2719_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_2719_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(lean_object* v___x_2720_, lean_object* v_x_2721_, size_t v_x_2722_, size_t v_x_2723_, lean_object* v_x_2724_, lean_object* v_x_2725_){
_start:
{
if (lean_obj_tag(v_x_2721_) == 0)
{
lean_object* v_es_2726_; size_t v___x_2727_; size_t v___x_2728_; size_t v___x_2729_; size_t v___x_2730_; lean_object* v_j_2731_; lean_object* v___x_2732_; uint8_t v___x_2733_; 
v_es_2726_ = lean_ctor_get(v_x_2721_, 0);
v___x_2727_ = ((size_t)5ULL);
v___x_2728_ = ((size_t)1ULL);
v___x_2729_ = lean_usize_once(&l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___closed__1);
v___x_2730_ = lean_usize_land(v_x_2722_, v___x_2729_);
v_j_2731_ = lean_usize_to_nat(v___x_2730_);
v___x_2732_ = lean_array_get_size(v_es_2726_);
v___x_2733_ = lean_nat_dec_lt(v_j_2731_, v___x_2732_);
if (v___x_2733_ == 0)
{
lean_dec(v_j_2731_);
lean_dec(v_x_2725_);
lean_dec_ref(v_x_2724_);
return v_x_2721_;
}
else
{
lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2770_; 
lean_inc_ref(v_es_2726_);
v_isSharedCheck_2770_ = !lean_is_exclusive(v_x_2721_);
if (v_isSharedCheck_2770_ == 0)
{
lean_object* v_unused_2771_; 
v_unused_2771_ = lean_ctor_get(v_x_2721_, 0);
lean_dec(v_unused_2771_);
v___x_2735_ = v_x_2721_;
v_isShared_2736_ = v_isSharedCheck_2770_;
goto v_resetjp_2734_;
}
else
{
lean_dec(v_x_2721_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2770_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v_v_2737_; lean_object* v___x_2738_; lean_object* v_xs_x27_2739_; lean_object* v___y_2741_; 
v_v_2737_ = lean_array_fget(v_es_2726_, v_j_2731_);
v___x_2738_ = lean_box(0);
v_xs_x27_2739_ = lean_array_fset(v_es_2726_, v_j_2731_, v___x_2738_);
switch(lean_obj_tag(v_v_2737_))
{
case 0:
{
lean_object* v_key_2746_; lean_object* v_val_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2757_; 
v_key_2746_ = lean_ctor_get(v_v_2737_, 0);
v_val_2747_ = lean_ctor_get(v_v_2737_, 1);
v_isSharedCheck_2757_ = !lean_is_exclusive(v_v_2737_);
if (v_isSharedCheck_2757_ == 0)
{
v___x_2749_ = v_v_2737_;
v_isShared_2750_ = v_isSharedCheck_2757_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_val_2747_);
lean_inc(v_key_2746_);
lean_dec(v_v_2737_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2757_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
uint8_t v___x_2751_; 
lean_inc(v_key_2746_);
lean_inc_ref(v_x_2724_);
v___x_2751_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_2720_, v_x_2724_, v_key_2746_);
if (v___x_2751_ == 0)
{
lean_object* v___x_2752_; lean_object* v___x_2753_; 
lean_del_object(v___x_2749_);
v___x_2752_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2746_, v_val_2747_, v_x_2724_, v_x_2725_);
v___x_2753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2752_);
v___y_2741_ = v___x_2753_;
goto v___jp_2740_;
}
else
{
lean_object* v___x_2755_; 
lean_dec(v_val_2747_);
lean_dec(v_key_2746_);
if (v_isShared_2750_ == 0)
{
lean_ctor_set(v___x_2749_, 1, v_x_2725_);
lean_ctor_set(v___x_2749_, 0, v_x_2724_);
v___x_2755_ = v___x_2749_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_x_2724_);
lean_ctor_set(v_reuseFailAlloc_2756_, 1, v_x_2725_);
v___x_2755_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
v___y_2741_ = v___x_2755_;
goto v___jp_2740_;
}
}
}
}
case 1:
{
lean_object* v_node_2758_; lean_object* v___x_2760_; uint8_t v_isShared_2761_; uint8_t v_isSharedCheck_2768_; 
v_node_2758_ = lean_ctor_get(v_v_2737_, 0);
v_isSharedCheck_2768_ = !lean_is_exclusive(v_v_2737_);
if (v_isSharedCheck_2768_ == 0)
{
v___x_2760_ = v_v_2737_;
v_isShared_2761_ = v_isSharedCheck_2768_;
goto v_resetjp_2759_;
}
else
{
lean_inc(v_node_2758_);
lean_dec(v_v_2737_);
v___x_2760_ = lean_box(0);
v_isShared_2761_ = v_isSharedCheck_2768_;
goto v_resetjp_2759_;
}
v_resetjp_2759_:
{
size_t v___x_2762_; size_t v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2766_; 
v___x_2762_ = lean_usize_shift_right(v_x_2722_, v___x_2727_);
v___x_2763_ = lean_usize_add(v_x_2723_, v___x_2728_);
v___x_2764_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(v___x_2720_, v_node_2758_, v___x_2762_, v___x_2763_, v_x_2724_, v_x_2725_);
if (v_isShared_2761_ == 0)
{
lean_ctor_set(v___x_2760_, 0, v___x_2764_);
v___x_2766_ = v___x_2760_;
goto v_reusejp_2765_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v___x_2764_);
v___x_2766_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2765_;
}
v_reusejp_2765_:
{
v___y_2741_ = v___x_2766_;
goto v___jp_2740_;
}
}
}
default: 
{
lean_object* v___x_2769_; 
v___x_2769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2769_, 0, v_x_2724_);
lean_ctor_set(v___x_2769_, 1, v_x_2725_);
v___y_2741_ = v___x_2769_;
goto v___jp_2740_;
}
}
v___jp_2740_:
{
lean_object* v___x_2742_; lean_object* v___x_2744_; 
v___x_2742_ = lean_array_fset(v_xs_x27_2739_, v_j_2731_, v___y_2741_);
lean_dec(v_j_2731_);
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 0, v___x_2742_);
v___x_2744_ = v___x_2735_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v___x_2742_);
v___x_2744_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
return v___x_2744_;
}
}
}
}
}
else
{
lean_object* v_ks_2772_; lean_object* v_vs_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2793_; 
v_ks_2772_ = lean_ctor_get(v_x_2721_, 0);
v_vs_2773_ = lean_ctor_get(v_x_2721_, 1);
v_isSharedCheck_2793_ = !lean_is_exclusive(v_x_2721_);
if (v_isSharedCheck_2793_ == 0)
{
v___x_2775_ = v_x_2721_;
v_isShared_2776_ = v_isSharedCheck_2793_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_vs_2773_);
lean_inc(v_ks_2772_);
lean_dec(v_x_2721_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2793_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2778_; 
if (v_isShared_2776_ == 0)
{
v___x_2778_ = v___x_2775_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v_ks_2772_);
lean_ctor_set(v_reuseFailAlloc_2792_, 1, v_vs_2773_);
v___x_2778_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
lean_object* v_newNode_2779_; uint8_t v___y_2781_; size_t v___x_2787_; uint8_t v___x_2788_; 
v_newNode_2779_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg(v___x_2720_, v___x_2778_, v_x_2724_, v_x_2725_);
v___x_2787_ = ((size_t)7ULL);
v___x_2788_ = lean_usize_dec_le(v___x_2787_, v_x_2723_);
if (v___x_2788_ == 0)
{
lean_object* v___x_2789_; lean_object* v___x_2790_; uint8_t v___x_2791_; 
v___x_2789_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2779_);
v___x_2790_ = lean_unsigned_to_nat(4u);
v___x_2791_ = lean_nat_dec_lt(v___x_2789_, v___x_2790_);
lean_dec(v___x_2789_);
v___y_2781_ = v___x_2791_;
goto v___jp_2780_;
}
else
{
v___y_2781_ = v___x_2788_;
goto v___jp_2780_;
}
v___jp_2780_:
{
if (v___y_2781_ == 0)
{
lean_object* v_ks_2782_; lean_object* v_vs_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
v_ks_2782_ = lean_ctor_get(v_newNode_2779_, 0);
lean_inc_ref(v_ks_2782_);
v_vs_2783_ = lean_ctor_get(v_newNode_2779_, 1);
lean_inc_ref(v_vs_2783_);
lean_dec_ref(v_newNode_2779_);
v___x_2784_ = lean_unsigned_to_nat(0u);
v___x_2785_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0);
v___x_2786_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg(v___x_2720_, v_x_2723_, v_ks_2782_, v_vs_2783_, v___x_2784_, v___x_2785_);
lean_dec_ref(v_vs_2783_);
lean_dec_ref(v_ks_2782_);
return v___x_2786_;
}
else
{
return v_newNode_2779_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg(lean_object* v___x_2794_, size_t v_depth_2795_, lean_object* v_keys_2796_, lean_object* v_vals_2797_, lean_object* v_i_2798_, lean_object* v_entries_2799_){
_start:
{
lean_object* v___x_2800_; uint8_t v___x_2801_; 
v___x_2800_ = lean_array_get_size(v_keys_2796_);
v___x_2801_ = lean_nat_dec_lt(v_i_2798_, v___x_2800_);
if (v___x_2801_ == 0)
{
lean_dec(v_i_2798_);
return v_entries_2799_;
}
else
{
lean_object* v_k_2802_; lean_object* v_v_2803_; uint64_t v___x_2804_; size_t v_h_2805_; size_t v___x_2806_; lean_object* v___x_2807_; size_t v___x_2808_; size_t v___x_2809_; size_t v___x_2810_; size_t v_h_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; 
v_k_2802_ = lean_array_fget_borrowed(v_keys_2796_, v_i_2798_);
v_v_2803_ = lean_array_fget_borrowed(v_vals_2797_, v_i_2798_);
lean_inc_n(v_k_2802_, 2);
v___x_2804_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(v___x_2794_, v_k_2802_);
v_h_2805_ = lean_uint64_to_usize(v___x_2804_);
v___x_2806_ = ((size_t)5ULL);
v___x_2807_ = lean_unsigned_to_nat(1u);
v___x_2808_ = ((size_t)1ULL);
v___x_2809_ = lean_usize_sub(v_depth_2795_, v___x_2808_);
v___x_2810_ = lean_usize_mul(v___x_2806_, v___x_2809_);
v_h_2811_ = lean_usize_shift_right(v_h_2805_, v___x_2810_);
v___x_2812_ = lean_nat_add(v_i_2798_, v___x_2807_);
lean_dec(v_i_2798_);
lean_inc(v_v_2803_);
v___x_2813_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(v___x_2794_, v_entries_2799_, v_h_2811_, v_depth_2795_, v_k_2802_, v_v_2803_);
v_i_2798_ = v___x_2812_;
v_entries_2799_ = v___x_2813_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v___x_2815_, lean_object* v_depth_2816_, lean_object* v_keys_2817_, lean_object* v_vals_2818_, lean_object* v_i_2819_, lean_object* v_entries_2820_){
_start:
{
size_t v_depth_boxed_2821_; lean_object* v_res_2822_; 
v_depth_boxed_2821_ = lean_unbox_usize(v_depth_2816_);
lean_dec(v_depth_2816_);
v_res_2822_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg(v___x_2815_, v_depth_boxed_2821_, v_keys_2817_, v_vals_2818_, v_i_2819_, v_entries_2820_);
lean_dec_ref(v_vals_2818_);
lean_dec_ref(v_keys_2817_);
lean_dec_ref(v___x_2815_);
return v_res_2822_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___boxed(lean_object* v___x_2823_, lean_object* v_x_2824_, lean_object* v_x_2825_, lean_object* v_x_2826_, lean_object* v_x_2827_, lean_object* v_x_2828_){
_start:
{
size_t v_x_30366__boxed_2829_; size_t v_x_30367__boxed_2830_; lean_object* v_res_2831_; 
v_x_30366__boxed_2829_ = lean_unbox_usize(v_x_2825_);
lean_dec(v_x_2825_);
v_x_30367__boxed_2830_ = lean_unbox_usize(v_x_2826_);
lean_dec(v_x_2826_);
v_res_2831_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(v___x_2823_, v_x_2824_, v_x_30366__boxed_2829_, v_x_30367__boxed_2830_, v_x_2827_, v_x_2828_);
lean_dec_ref(v___x_2823_);
return v_res_2831_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg(lean_object* v___x_2832_, lean_object* v_x_2833_, lean_object* v_x_2834_, lean_object* v_x_2835_){
_start:
{
uint64_t v___x_2836_; size_t v___x_2837_; size_t v___x_2838_; lean_object* v___x_2839_; 
lean_inc_ref(v_x_2834_);
v___x_2836_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(v___x_2832_, v_x_2834_);
v___x_2837_ = lean_uint64_to_usize(v___x_2836_);
v___x_2838_ = ((size_t)1ULL);
v___x_2839_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(v___x_2832_, v_x_2833_, v___x_2837_, v___x_2838_, v_x_2834_, v_x_2835_);
return v___x_2839_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg___boxed(lean_object* v___x_2840_, lean_object* v_x_2841_, lean_object* v_x_2842_, lean_object* v_x_2843_){
_start:
{
lean_object* v_res_2844_; 
v_res_2844_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg(v___x_2840_, v_x_2841_, v_x_2842_, v_x_2843_);
lean_dec_ref(v___x_2840_);
return v_res_2844_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_2845_; lean_object* v___x_2846_; 
v___x_2845_ = lean_box(0);
v___x_2846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2846_, 0, v___x_2845_);
return v___x_2846_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2847_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0);
v___x_2848_ = l_Lean_Name_mkStr1(v___x_2847_);
return v___x_2848_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg(lean_object* v_lhs_2849_, lean_object* v_rootNew_2850_, uint8_t v_a_2851_, lean_object* v_b_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_){
_start:
{
lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v_snd_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_3030_; 
v___x_2860_ = lean_st_ref_get(v___y_2858_);
lean_dec(v___x_2860_);
v___x_2861_ = lean_st_ref_get(v___y_2853_);
v_snd_2862_ = lean_ctor_get(v_b_2852_, 1);
v_isSharedCheck_3030_ = !lean_is_exclusive(v_b_2852_);
if (v_isSharedCheck_3030_ == 0)
{
lean_object* v_unused_3031_; 
v_unused_3031_ = lean_ctor_get(v_b_2852_, 0);
lean_dec(v_unused_3031_);
v___x_2864_ = v_b_2852_;
v_isShared_2865_ = v_isSharedCheck_3030_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_snd_2862_);
lean_dec(v_b_2852_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_3030_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
lean_object* v___x_2866_; 
lean_inc(v_snd_2862_);
v___x_2866_ = l_Lean_Meta_Grind_Goal_getENode(v___x_2861_, v_snd_2862_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_);
lean_dec(v___x_2861_);
if (lean_obj_tag(v___x_2866_) == 0)
{
lean_object* v_a_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_3021_; 
v_a_2867_ = lean_ctor_get(v___x_2866_, 0);
v_isSharedCheck_3021_ = !lean_is_exclusive(v___x_2866_);
if (v_isSharedCheck_3021_ == 0)
{
v___x_2869_ = v___x_2866_;
v_isShared_2870_ = v_isSharedCheck_3021_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_a_2867_);
lean_dec(v___x_2866_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_3021_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v_self_2871_; lean_object* v_next_2872_; lean_object* v_congr_2873_; lean_object* v_target_x3f_2874_; lean_object* v_proof_x3f_2875_; uint8_t v_flipped_2876_; lean_object* v_size_2877_; uint8_t v_interpreted_2878_; uint8_t v_ctor_2879_; uint8_t v_hasLambdas_2880_; uint8_t v_heqProofs_2881_; lean_object* v_idx_2882_; lean_object* v_generation_2883_; lean_object* v_mt_2884_; lean_object* v_sTerms_2885_; uint8_t v_funCC_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_3019_; 
v_self_2871_ = lean_ctor_get(v_a_2867_, 0);
v_next_2872_ = lean_ctor_get(v_a_2867_, 1);
v_congr_2873_ = lean_ctor_get(v_a_2867_, 3);
v_target_x3f_2874_ = lean_ctor_get(v_a_2867_, 4);
v_proof_x3f_2875_ = lean_ctor_get(v_a_2867_, 5);
v_flipped_2876_ = lean_ctor_get_uint8(v_a_2867_, sizeof(void*)*11);
v_size_2877_ = lean_ctor_get(v_a_2867_, 6);
v_interpreted_2878_ = lean_ctor_get_uint8(v_a_2867_, sizeof(void*)*11 + 1);
v_ctor_2879_ = lean_ctor_get_uint8(v_a_2867_, sizeof(void*)*11 + 2);
v_hasLambdas_2880_ = lean_ctor_get_uint8(v_a_2867_, sizeof(void*)*11 + 3);
v_heqProofs_2881_ = lean_ctor_get_uint8(v_a_2867_, sizeof(void*)*11 + 4);
v_idx_2882_ = lean_ctor_get(v_a_2867_, 7);
v_generation_2883_ = lean_ctor_get(v_a_2867_, 8);
v_mt_2884_ = lean_ctor_get(v_a_2867_, 9);
v_sTerms_2885_ = lean_ctor_get(v_a_2867_, 10);
v_funCC_2886_ = lean_ctor_get_uint8(v_a_2867_, sizeof(void*)*11 + 5);
v_isSharedCheck_3019_ = !lean_is_exclusive(v_a_2867_);
if (v_isSharedCheck_3019_ == 0)
{
lean_object* v_unused_3020_; 
v_unused_3020_ = lean_ctor_get(v_a_2867_, 2);
lean_dec(v_unused_3020_);
v___x_2888_ = v_a_2867_;
v_isShared_2889_ = v_isSharedCheck_3019_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_sTerms_2885_);
lean_inc(v_mt_2884_);
lean_inc(v_generation_2883_);
lean_inc(v_idx_2882_);
lean_inc(v_size_2877_);
lean_inc(v_proof_x3f_2875_);
lean_inc(v_target_x3f_2874_);
lean_inc(v_congr_2873_);
lean_inc(v_next_2872_);
lean_inc(v_self_2871_);
lean_dec(v_a_2867_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_3019_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
lean_object* v___x_2890_; lean_object* v___y_2905_; lean_object* v___x_2915_; 
v___x_2890_ = lean_box(0);
lean_inc(v_sTerms_2885_);
lean_inc(v_mt_2884_);
lean_inc(v_generation_2883_);
lean_inc(v_idx_2882_);
lean_inc(v_size_2877_);
lean_inc(v_proof_x3f_2875_);
lean_inc(v_target_x3f_2874_);
lean_inc_ref(v_rootNew_2850_);
lean_inc_ref(v_next_2872_);
lean_inc_ref(v_self_2871_);
if (v_isShared_2889_ == 0)
{
lean_ctor_set(v___x_2888_, 2, v_rootNew_2850_);
v___x_2915_ = v___x_2888_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(0, 11, 6);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v_self_2871_);
lean_ctor_set(v_reuseFailAlloc_3018_, 1, v_next_2872_);
lean_ctor_set(v_reuseFailAlloc_3018_, 2, v_rootNew_2850_);
lean_ctor_set(v_reuseFailAlloc_3018_, 3, v_congr_2873_);
lean_ctor_set(v_reuseFailAlloc_3018_, 4, v_target_x3f_2874_);
lean_ctor_set(v_reuseFailAlloc_3018_, 5, v_proof_x3f_2875_);
lean_ctor_set(v_reuseFailAlloc_3018_, 6, v_size_2877_);
lean_ctor_set(v_reuseFailAlloc_3018_, 7, v_idx_2882_);
lean_ctor_set(v_reuseFailAlloc_3018_, 8, v_generation_2883_);
lean_ctor_set(v_reuseFailAlloc_3018_, 9, v_mt_2884_);
lean_ctor_set(v_reuseFailAlloc_3018_, 10, v_sTerms_2885_);
lean_ctor_set_uint8(v_reuseFailAlloc_3018_, sizeof(void*)*11, v_flipped_2876_);
lean_ctor_set_uint8(v_reuseFailAlloc_3018_, sizeof(void*)*11 + 1, v_interpreted_2878_);
lean_ctor_set_uint8(v_reuseFailAlloc_3018_, sizeof(void*)*11 + 2, v_ctor_2879_);
lean_ctor_set_uint8(v_reuseFailAlloc_3018_, sizeof(void*)*11 + 3, v_hasLambdas_2880_);
lean_ctor_set_uint8(v_reuseFailAlloc_3018_, sizeof(void*)*11 + 4, v_heqProofs_2881_);
lean_ctor_set_uint8(v_reuseFailAlloc_3018_, sizeof(void*)*11 + 5, v_funCC_2886_);
v___x_2915_ = v_reuseFailAlloc_3018_;
goto v_reusejp_2914_;
}
v___jp_2891_:
{
uint8_t v___x_2892_; 
v___x_2892_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_next_2872_, v_lhs_2849_);
if (v___x_2892_ == 0)
{
lean_object* v___x_2894_; 
lean_del_object(v___x_2869_);
lean_dec(v_snd_2862_);
if (v_isShared_2865_ == 0)
{
lean_ctor_set(v___x_2864_, 1, v_next_2872_);
lean_ctor_set(v___x_2864_, 0, v___x_2890_);
v___x_2894_ = v___x_2864_;
goto v_reusejp_2893_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v___x_2890_);
lean_ctor_set(v_reuseFailAlloc_2896_, 1, v_next_2872_);
v___x_2894_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2893_;
}
v_reusejp_2893_:
{
v_b_2852_ = v___x_2894_;
goto _start;
}
}
else
{
lean_object* v___x_2897_; lean_object* v___x_2899_; 
lean_dec_ref(v_next_2872_);
lean_dec_ref(v_rootNew_2850_);
v___x_2897_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0);
if (v_isShared_2865_ == 0)
{
lean_ctor_set(v___x_2864_, 0, v___x_2897_);
v___x_2899_ = v___x_2864_;
goto v_reusejp_2898_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v___x_2897_);
lean_ctor_set(v_reuseFailAlloc_2903_, 1, v_snd_2862_);
v___x_2899_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2898_;
}
v_reusejp_2898_:
{
lean_object* v___x_2901_; 
if (v_isShared_2870_ == 0)
{
lean_ctor_set(v___x_2869_, 0, v___x_2899_);
v___x_2901_ = v___x_2869_;
goto v_reusejp_2900_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v___x_2899_);
v___x_2901_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2900_;
}
v_reusejp_2900_:
{
return v___x_2901_;
}
}
}
}
v___jp_2904_:
{
if (lean_obj_tag(v___y_2905_) == 0)
{
lean_dec_ref(v___y_2905_);
goto v___jp_2891_;
}
else
{
lean_object* v_a_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2913_; 
lean_dec_ref(v_next_2872_);
lean_del_object(v___x_2869_);
lean_del_object(v___x_2864_);
lean_dec(v_snd_2862_);
lean_dec_ref(v_rootNew_2850_);
v_a_2906_ = lean_ctor_get(v___y_2905_, 0);
v_isSharedCheck_2913_ = !lean_is_exclusive(v___y_2905_);
if (v_isSharedCheck_2913_ == 0)
{
v___x_2908_ = v___y_2905_;
v_isShared_2909_ = v_isSharedCheck_2913_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_a_2906_);
lean_dec(v___y_2905_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2913_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v___x_2911_; 
if (v_isShared_2909_ == 0)
{
v___x_2911_ = v___x_2908_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v_a_2906_);
v___x_2911_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
return v___x_2911_;
}
}
}
}
v_reusejp_2914_:
{
lean_object* v___x_2916_; 
lean_inc_ref(v___x_2915_);
lean_inc_ref(v_self_2871_);
v___x_2916_ = l_Lean_Meta_Grind_setENode___redArg(v_self_2871_, v___x_2915_, v___y_2853_, v___y_2858_);
if (lean_obj_tag(v___x_2916_) == 0)
{
lean_dec_ref(v___x_2916_);
if (v_a_2851_ == 0)
{
lean_dec_ref(v___x_2915_);
lean_dec(v_sTerms_2885_);
lean_dec(v_mt_2884_);
lean_dec(v_generation_2883_);
lean_dec(v_idx_2882_);
lean_dec(v_size_2877_);
lean_dec(v_proof_x3f_2875_);
lean_dec(v_target_x3f_2874_);
lean_dec_ref(v_self_2871_);
goto v___jp_2891_;
}
else
{
lean_object* v___x_2917_; lean_object* v___x_2918_; uint8_t v___x_2919_; 
v___x_2917_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1);
v___x_2918_ = lean_unsigned_to_nat(3u);
v___x_2919_ = l_Lean_Expr_isAppOfArity(v_self_2871_, v___x_2917_, v___x_2918_);
if (v___x_2919_ == 0)
{
lean_dec_ref(v___x_2915_);
lean_dec(v_sTerms_2885_);
lean_dec(v_mt_2884_);
lean_dec(v_generation_2883_);
lean_dec(v_idx_2882_);
lean_dec(v_size_2877_);
lean_dec(v_proof_x3f_2875_);
lean_dec(v_target_x3f_2874_);
lean_dec_ref(v_self_2871_);
goto v___jp_2891_;
}
else
{
uint8_t v___x_2920_; 
v___x_2920_ = l_Lean_Meta_Grind_ENode_isCongrRoot(v___x_2915_);
lean_dec_ref(v___x_2915_);
if (v___x_2920_ == 0)
{
lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v_toGoalState_2923_; lean_object* v_enodeMap_2924_; lean_object* v_congrTable_2925_; lean_object* v___x_2926_; 
v___x_2921_ = lean_st_ref_get(v___y_2858_);
lean_dec(v___x_2921_);
v___x_2922_ = lean_st_ref_get(v___y_2853_);
v_toGoalState_2923_ = lean_ctor_get(v___x_2922_, 0);
lean_inc_ref(v_toGoalState_2923_);
lean_dec(v___x_2922_);
v_enodeMap_2924_ = lean_ctor_get(v_toGoalState_2923_, 1);
lean_inc_ref(v_enodeMap_2924_);
v_congrTable_2925_ = lean_ctor_get(v_toGoalState_2923_, 4);
lean_inc_ref(v_congrTable_2925_);
lean_dec_ref(v_toGoalState_2923_);
lean_inc_ref(v_self_2871_);
v___x_2926_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg(v_enodeMap_2924_, v_congrTable_2925_, v_self_2871_);
lean_dec_ref(v_congrTable_2925_);
lean_dec_ref(v_enodeMap_2924_);
if (lean_obj_tag(v___x_2926_) == 0)
{
lean_dec(v_sTerms_2885_);
lean_dec(v_mt_2884_);
lean_dec(v_generation_2883_);
lean_dec(v_idx_2882_);
lean_dec(v_size_2877_);
lean_dec(v_proof_x3f_2875_);
lean_dec(v_target_x3f_2874_);
lean_dec_ref(v_self_2871_);
goto v___jp_2891_;
}
else
{
lean_object* v_val_2927_; lean_object* v_fst_2928_; lean_object* v___x_2929_; 
v_val_2927_ = lean_ctor_get(v___x_2926_, 0);
lean_inc(v_val_2927_);
lean_dec_ref(v___x_2926_);
v_fst_2928_ = lean_ctor_get(v_val_2927_, 0);
lean_inc(v_fst_2928_);
lean_dec(v_val_2927_);
v___x_2929_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_fst_2928_, v___y_2854_);
if (lean_obj_tag(v___x_2929_) == 0)
{
lean_object* v_a_2930_; uint8_t v___x_2931_; 
v_a_2930_ = lean_ctor_get(v___x_2929_, 0);
lean_inc(v_a_2930_);
lean_dec_ref(v___x_2929_);
v___x_2931_ = lean_unbox(v_a_2930_);
lean_dec(v_a_2930_);
if (v___x_2931_ == 0)
{
lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v_toGoalState_2934_; lean_object* v_mvarId_2935_; lean_object* v___x_2937_; uint8_t v_isShared_2938_; uint8_t v_isSharedCheck_3009_; 
v___x_2932_ = lean_st_ref_get(v___y_2858_);
lean_dec(v___x_2932_);
v___x_2933_ = lean_st_ref_take(v___y_2853_);
v_toGoalState_2934_ = lean_ctor_get(v___x_2933_, 0);
v_mvarId_2935_ = lean_ctor_get(v___x_2933_, 1);
v_isSharedCheck_3009_ = !lean_is_exclusive(v___x_2933_);
if (v_isSharedCheck_3009_ == 0)
{
v___x_2937_ = v___x_2933_;
v_isShared_2938_ = v_isSharedCheck_3009_;
goto v_resetjp_2936_;
}
else
{
lean_inc(v_mvarId_2935_);
lean_inc(v_toGoalState_2934_);
lean_dec(v___x_2933_);
v___x_2937_ = lean_box(0);
v_isShared_2938_ = v_isSharedCheck_3009_;
goto v_resetjp_2936_;
}
v_resetjp_2936_:
{
lean_object* v_nextDeclIdx_2939_; lean_object* v_enodeMap_2940_; lean_object* v_exprs_2941_; lean_object* v_parents_2942_; lean_object* v_congrTable_2943_; lean_object* v_appMap_2944_; lean_object* v_indicesFound_2945_; lean_object* v_newFacts_2946_; uint8_t v_inconsistent_2947_; lean_object* v_nextIdx_2948_; lean_object* v_newRawFacts_2949_; lean_object* v_facts_2950_; lean_object* v_extThms_2951_; lean_object* v_ematch_2952_; lean_object* v_inj_2953_; lean_object* v_split_2954_; lean_object* v_clean_2955_; lean_object* v_sstates_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_3008_; 
v_nextDeclIdx_2939_ = lean_ctor_get(v_toGoalState_2934_, 0);
v_enodeMap_2940_ = lean_ctor_get(v_toGoalState_2934_, 1);
v_exprs_2941_ = lean_ctor_get(v_toGoalState_2934_, 2);
v_parents_2942_ = lean_ctor_get(v_toGoalState_2934_, 3);
v_congrTable_2943_ = lean_ctor_get(v_toGoalState_2934_, 4);
v_appMap_2944_ = lean_ctor_get(v_toGoalState_2934_, 5);
v_indicesFound_2945_ = lean_ctor_get(v_toGoalState_2934_, 6);
v_newFacts_2946_ = lean_ctor_get(v_toGoalState_2934_, 7);
v_inconsistent_2947_ = lean_ctor_get_uint8(v_toGoalState_2934_, sizeof(void*)*17);
v_nextIdx_2948_ = lean_ctor_get(v_toGoalState_2934_, 8);
v_newRawFacts_2949_ = lean_ctor_get(v_toGoalState_2934_, 9);
v_facts_2950_ = lean_ctor_get(v_toGoalState_2934_, 10);
v_extThms_2951_ = lean_ctor_get(v_toGoalState_2934_, 11);
v_ematch_2952_ = lean_ctor_get(v_toGoalState_2934_, 12);
v_inj_2953_ = lean_ctor_get(v_toGoalState_2934_, 13);
v_split_2954_ = lean_ctor_get(v_toGoalState_2934_, 14);
v_clean_2955_ = lean_ctor_get(v_toGoalState_2934_, 15);
v_sstates_2956_ = lean_ctor_get(v_toGoalState_2934_, 16);
v_isSharedCheck_3008_ = !lean_is_exclusive(v_toGoalState_2934_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_2958_ = v_toGoalState_2934_;
v_isShared_2959_ = v_isSharedCheck_3008_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_sstates_2956_);
lean_inc(v_clean_2955_);
lean_inc(v_split_2954_);
lean_inc(v_inj_2953_);
lean_inc(v_ematch_2952_);
lean_inc(v_extThms_2951_);
lean_inc(v_facts_2950_);
lean_inc(v_newRawFacts_2949_);
lean_inc(v_nextIdx_2948_);
lean_inc(v_newFacts_2946_);
lean_inc(v_indicesFound_2945_);
lean_inc(v_appMap_2944_);
lean_inc(v_congrTable_2943_);
lean_inc(v_parents_2942_);
lean_inc(v_exprs_2941_);
lean_inc(v_enodeMap_2940_);
lean_inc(v_nextDeclIdx_2939_);
lean_dec(v_toGoalState_2934_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_3008_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2963_; 
v___x_2960_ = lean_box(0);
lean_inc_ref(v_self_2871_);
v___x_2961_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg(v_enodeMap_2940_, v_congrTable_2943_, v_self_2871_, v___x_2960_);
if (v_isShared_2959_ == 0)
{
lean_ctor_set(v___x_2958_, 4, v___x_2961_);
v___x_2963_ = v___x_2958_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_nextDeclIdx_2939_);
lean_ctor_set(v_reuseFailAlloc_3007_, 1, v_enodeMap_2940_);
lean_ctor_set(v_reuseFailAlloc_3007_, 2, v_exprs_2941_);
lean_ctor_set(v_reuseFailAlloc_3007_, 3, v_parents_2942_);
lean_ctor_set(v_reuseFailAlloc_3007_, 4, v___x_2961_);
lean_ctor_set(v_reuseFailAlloc_3007_, 5, v_appMap_2944_);
lean_ctor_set(v_reuseFailAlloc_3007_, 6, v_indicesFound_2945_);
lean_ctor_set(v_reuseFailAlloc_3007_, 7, v_newFacts_2946_);
lean_ctor_set(v_reuseFailAlloc_3007_, 8, v_nextIdx_2948_);
lean_ctor_set(v_reuseFailAlloc_3007_, 9, v_newRawFacts_2949_);
lean_ctor_set(v_reuseFailAlloc_3007_, 10, v_facts_2950_);
lean_ctor_set(v_reuseFailAlloc_3007_, 11, v_extThms_2951_);
lean_ctor_set(v_reuseFailAlloc_3007_, 12, v_ematch_2952_);
lean_ctor_set(v_reuseFailAlloc_3007_, 13, v_inj_2953_);
lean_ctor_set(v_reuseFailAlloc_3007_, 14, v_split_2954_);
lean_ctor_set(v_reuseFailAlloc_3007_, 15, v_clean_2955_);
lean_ctor_set(v_reuseFailAlloc_3007_, 16, v_sstates_2956_);
lean_ctor_set_uint8(v_reuseFailAlloc_3007_, sizeof(void*)*17, v_inconsistent_2947_);
v___x_2963_ = v_reuseFailAlloc_3007_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
lean_object* v___x_2965_; 
if (v_isShared_2938_ == 0)
{
lean_ctor_set(v___x_2937_, 0, v___x_2963_);
v___x_2965_ = v___x_2937_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v___x_2963_);
lean_ctor_set(v_reuseFailAlloc_3006_, 1, v_mvarId_2935_);
v___x_2965_ = v_reuseFailAlloc_3006_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; 
v___x_2966_ = lean_st_ref_set(v___y_2853_, v___x_2965_);
lean_inc_ref(v_rootNew_2850_);
lean_inc_ref(v_next_2872_);
lean_inc_ref_n(v_self_2871_, 3);
v___x_2967_ = lean_alloc_ctor(0, 11, 6);
lean_ctor_set(v___x_2967_, 0, v_self_2871_);
lean_ctor_set(v___x_2967_, 1, v_next_2872_);
lean_ctor_set(v___x_2967_, 2, v_rootNew_2850_);
lean_ctor_set(v___x_2967_, 3, v_self_2871_);
lean_ctor_set(v___x_2967_, 4, v_target_x3f_2874_);
lean_ctor_set(v___x_2967_, 5, v_proof_x3f_2875_);
lean_ctor_set(v___x_2967_, 6, v_size_2877_);
lean_ctor_set(v___x_2967_, 7, v_idx_2882_);
lean_ctor_set(v___x_2967_, 8, v_generation_2883_);
lean_ctor_set(v___x_2967_, 9, v_mt_2884_);
lean_ctor_set(v___x_2967_, 10, v_sTerms_2885_);
lean_ctor_set_uint8(v___x_2967_, sizeof(void*)*11, v_flipped_2876_);
lean_ctor_set_uint8(v___x_2967_, sizeof(void*)*11 + 1, v_interpreted_2878_);
lean_ctor_set_uint8(v___x_2967_, sizeof(void*)*11 + 2, v_ctor_2879_);
lean_ctor_set_uint8(v___x_2967_, sizeof(void*)*11 + 3, v_hasLambdas_2880_);
lean_ctor_set_uint8(v___x_2967_, sizeof(void*)*11 + 4, v_heqProofs_2881_);
lean_ctor_set_uint8(v___x_2967_, sizeof(void*)*11 + 5, v_funCC_2886_);
v___x_2968_ = l_Lean_Meta_Grind_setENode___redArg(v_self_2871_, v___x_2967_, v___y_2853_, v___y_2858_);
if (lean_obj_tag(v___x_2968_) == 0)
{
lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
lean_dec_ref(v___x_2968_);
v___x_2969_ = lean_st_ref_get(v___y_2858_);
lean_dec(v___x_2969_);
v___x_2970_ = lean_st_ref_get(v___y_2853_);
lean_inc(v_fst_2928_);
v___x_2971_ = l_Lean_Meta_Grind_Goal_getENode(v___x_2970_, v_fst_2928_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_);
lean_dec(v___x_2970_);
if (lean_obj_tag(v___x_2971_) == 0)
{
lean_object* v_a_2972_; lean_object* v_self_2973_; lean_object* v_next_2974_; lean_object* v_root_2975_; lean_object* v_target_x3f_2976_; lean_object* v_proof_x3f_2977_; uint8_t v_flipped_2978_; lean_object* v_size_2979_; uint8_t v_interpreted_2980_; uint8_t v_ctor_2981_; uint8_t v_hasLambdas_2982_; uint8_t v_heqProofs_2983_; lean_object* v_idx_2984_; lean_object* v_generation_2985_; lean_object* v_mt_2986_; lean_object* v_sTerms_2987_; uint8_t v_funCC_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_2996_; 
v_a_2972_ = lean_ctor_get(v___x_2971_, 0);
lean_inc(v_a_2972_);
lean_dec_ref(v___x_2971_);
v_self_2973_ = lean_ctor_get(v_a_2972_, 0);
v_next_2974_ = lean_ctor_get(v_a_2972_, 1);
v_root_2975_ = lean_ctor_get(v_a_2972_, 2);
v_target_x3f_2976_ = lean_ctor_get(v_a_2972_, 4);
v_proof_x3f_2977_ = lean_ctor_get(v_a_2972_, 5);
v_flipped_2978_ = lean_ctor_get_uint8(v_a_2972_, sizeof(void*)*11);
v_size_2979_ = lean_ctor_get(v_a_2972_, 6);
v_interpreted_2980_ = lean_ctor_get_uint8(v_a_2972_, sizeof(void*)*11 + 1);
v_ctor_2981_ = lean_ctor_get_uint8(v_a_2972_, sizeof(void*)*11 + 2);
v_hasLambdas_2982_ = lean_ctor_get_uint8(v_a_2972_, sizeof(void*)*11 + 3);
v_heqProofs_2983_ = lean_ctor_get_uint8(v_a_2972_, sizeof(void*)*11 + 4);
v_idx_2984_ = lean_ctor_get(v_a_2972_, 7);
v_generation_2985_ = lean_ctor_get(v_a_2972_, 8);
v_mt_2986_ = lean_ctor_get(v_a_2972_, 9);
v_sTerms_2987_ = lean_ctor_get(v_a_2972_, 10);
v_funCC_2988_ = lean_ctor_get_uint8(v_a_2972_, sizeof(void*)*11 + 5);
v_isSharedCheck_2996_ = !lean_is_exclusive(v_a_2972_);
if (v_isSharedCheck_2996_ == 0)
{
lean_object* v_unused_2997_; 
v_unused_2997_ = lean_ctor_get(v_a_2972_, 3);
lean_dec(v_unused_2997_);
v___x_2990_ = v_a_2972_;
v_isShared_2991_ = v_isSharedCheck_2996_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_sTerms_2987_);
lean_inc(v_mt_2986_);
lean_inc(v_generation_2985_);
lean_inc(v_idx_2984_);
lean_inc(v_size_2979_);
lean_inc(v_proof_x3f_2977_);
lean_inc(v_target_x3f_2976_);
lean_inc(v_root_2975_);
lean_inc(v_next_2974_);
lean_inc(v_self_2973_);
lean_dec(v_a_2972_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_2996_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2993_; 
if (v_isShared_2991_ == 0)
{
lean_ctor_set(v___x_2990_, 3, v_self_2871_);
v___x_2993_ = v___x_2990_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(0, 11, 6);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v_self_2973_);
lean_ctor_set(v_reuseFailAlloc_2995_, 1, v_next_2974_);
lean_ctor_set(v_reuseFailAlloc_2995_, 2, v_root_2975_);
lean_ctor_set(v_reuseFailAlloc_2995_, 3, v_self_2871_);
lean_ctor_set(v_reuseFailAlloc_2995_, 4, v_target_x3f_2976_);
lean_ctor_set(v_reuseFailAlloc_2995_, 5, v_proof_x3f_2977_);
lean_ctor_set(v_reuseFailAlloc_2995_, 6, v_size_2979_);
lean_ctor_set(v_reuseFailAlloc_2995_, 7, v_idx_2984_);
lean_ctor_set(v_reuseFailAlloc_2995_, 8, v_generation_2985_);
lean_ctor_set(v_reuseFailAlloc_2995_, 9, v_mt_2986_);
lean_ctor_set(v_reuseFailAlloc_2995_, 10, v_sTerms_2987_);
lean_ctor_set_uint8(v_reuseFailAlloc_2995_, sizeof(void*)*11, v_flipped_2978_);
lean_ctor_set_uint8(v_reuseFailAlloc_2995_, sizeof(void*)*11 + 1, v_interpreted_2980_);
lean_ctor_set_uint8(v_reuseFailAlloc_2995_, sizeof(void*)*11 + 2, v_ctor_2981_);
lean_ctor_set_uint8(v_reuseFailAlloc_2995_, sizeof(void*)*11 + 3, v_hasLambdas_2982_);
lean_ctor_set_uint8(v_reuseFailAlloc_2995_, sizeof(void*)*11 + 4, v_heqProofs_2983_);
lean_ctor_set_uint8(v_reuseFailAlloc_2995_, sizeof(void*)*11 + 5, v_funCC_2988_);
v___x_2993_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
lean_object* v___x_2994_; 
v___x_2994_ = l_Lean_Meta_Grind_setENode___redArg(v_fst_2928_, v___x_2993_, v___y_2853_, v___y_2858_);
v___y_2905_ = v___x_2994_;
goto v___jp_2904_;
}
}
}
else
{
lean_object* v_a_2998_; lean_object* v___x_3000_; uint8_t v_isShared_3001_; uint8_t v_isSharedCheck_3005_; 
lean_dec(v_fst_2928_);
lean_dec_ref(v_next_2872_);
lean_dec_ref(v_self_2871_);
lean_del_object(v___x_2869_);
lean_del_object(v___x_2864_);
lean_dec(v_snd_2862_);
lean_dec_ref(v_rootNew_2850_);
v_a_2998_ = lean_ctor_get(v___x_2971_, 0);
v_isSharedCheck_3005_ = !lean_is_exclusive(v___x_2971_);
if (v_isSharedCheck_3005_ == 0)
{
v___x_3000_ = v___x_2971_;
v_isShared_3001_ = v_isSharedCheck_3005_;
goto v_resetjp_2999_;
}
else
{
lean_inc(v_a_2998_);
lean_dec(v___x_2971_);
v___x_3000_ = lean_box(0);
v_isShared_3001_ = v_isSharedCheck_3005_;
goto v_resetjp_2999_;
}
v_resetjp_2999_:
{
lean_object* v___x_3003_; 
if (v_isShared_3001_ == 0)
{
v___x_3003_ = v___x_3000_;
goto v_reusejp_3002_;
}
else
{
lean_object* v_reuseFailAlloc_3004_; 
v_reuseFailAlloc_3004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3004_, 0, v_a_2998_);
v___x_3003_ = v_reuseFailAlloc_3004_;
goto v_reusejp_3002_;
}
v_reusejp_3002_:
{
return v___x_3003_;
}
}
}
}
else
{
lean_dec(v_fst_2928_);
lean_dec_ref(v_self_2871_);
v___y_2905_ = v___x_2968_;
goto v___jp_2904_;
}
}
}
}
}
}
else
{
lean_dec(v_fst_2928_);
lean_dec(v_sTerms_2885_);
lean_dec(v_mt_2884_);
lean_dec(v_generation_2883_);
lean_dec(v_idx_2882_);
lean_dec(v_size_2877_);
lean_dec(v_proof_x3f_2875_);
lean_dec(v_target_x3f_2874_);
lean_dec_ref(v_self_2871_);
goto v___jp_2891_;
}
}
else
{
lean_object* v_a_3010_; lean_object* v___x_3012_; uint8_t v_isShared_3013_; uint8_t v_isSharedCheck_3017_; 
lean_dec(v_fst_2928_);
lean_dec(v_sTerms_2885_);
lean_dec(v_mt_2884_);
lean_dec(v_generation_2883_);
lean_dec(v_idx_2882_);
lean_dec(v_size_2877_);
lean_dec(v_proof_x3f_2875_);
lean_dec(v_target_x3f_2874_);
lean_dec_ref(v_next_2872_);
lean_dec_ref(v_self_2871_);
lean_del_object(v___x_2869_);
lean_del_object(v___x_2864_);
lean_dec(v_snd_2862_);
lean_dec_ref(v_rootNew_2850_);
v_a_3010_ = lean_ctor_get(v___x_2929_, 0);
v_isSharedCheck_3017_ = !lean_is_exclusive(v___x_2929_);
if (v_isSharedCheck_3017_ == 0)
{
v___x_3012_ = v___x_2929_;
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
else
{
lean_inc(v_a_3010_);
lean_dec(v___x_2929_);
v___x_3012_ = lean_box(0);
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
v_resetjp_3011_:
{
lean_object* v___x_3015_; 
if (v_isShared_3013_ == 0)
{
v___x_3015_ = v___x_3012_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v_a_3010_);
v___x_3015_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
return v___x_3015_;
}
}
}
}
}
else
{
lean_dec(v_sTerms_2885_);
lean_dec(v_mt_2884_);
lean_dec(v_generation_2883_);
lean_dec(v_idx_2882_);
lean_dec(v_size_2877_);
lean_dec(v_proof_x3f_2875_);
lean_dec(v_target_x3f_2874_);
lean_dec_ref(v_self_2871_);
goto v___jp_2891_;
}
}
}
}
else
{
lean_dec_ref(v___x_2915_);
lean_dec(v_sTerms_2885_);
lean_dec(v_mt_2884_);
lean_dec(v_generation_2883_);
lean_dec(v_idx_2882_);
lean_dec(v_size_2877_);
lean_dec(v_proof_x3f_2875_);
lean_dec(v_target_x3f_2874_);
lean_dec_ref(v_self_2871_);
v___y_2905_ = v___x_2916_;
goto v___jp_2904_;
}
}
}
}
}
else
{
lean_object* v_a_3022_; lean_object* v___x_3024_; uint8_t v_isShared_3025_; uint8_t v_isSharedCheck_3029_; 
lean_del_object(v___x_2864_);
lean_dec(v_snd_2862_);
lean_dec_ref(v_rootNew_2850_);
v_a_3022_ = lean_ctor_get(v___x_2866_, 0);
v_isSharedCheck_3029_ = !lean_is_exclusive(v___x_2866_);
if (v_isSharedCheck_3029_ == 0)
{
v___x_3024_ = v___x_2866_;
v_isShared_3025_ = v_isSharedCheck_3029_;
goto v_resetjp_3023_;
}
else
{
lean_inc(v_a_3022_);
lean_dec(v___x_2866_);
v___x_3024_ = lean_box(0);
v_isShared_3025_ = v_isSharedCheck_3029_;
goto v_resetjp_3023_;
}
v_resetjp_3023_:
{
lean_object* v___x_3027_; 
if (v_isShared_3025_ == 0)
{
v___x_3027_ = v___x_3024_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v_a_3022_);
v___x_3027_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
return v___x_3027_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___boxed(lean_object* v_lhs_3032_, lean_object* v_rootNew_3033_, lean_object* v_a_3034_, lean_object* v_b_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_){
_start:
{
uint8_t v_a_30554__boxed_3043_; lean_object* v_res_3044_; 
v_a_30554__boxed_3043_ = lean_unbox(v_a_3034_);
v_res_3044_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg(v_lhs_3032_, v_rootNew_3033_, v_a_30554__boxed_3043_, v_b_3035_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_, v___y_3041_);
lean_dec(v___y_3041_);
lean_dec_ref(v___y_3040_);
lean_dec(v___y_3039_);
lean_dec_ref(v___y_3038_);
lean_dec_ref(v___y_3037_);
lean_dec(v___y_3036_);
lean_dec_ref(v_lhs_3032_);
return v_res_3044_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots(lean_object* v_lhs_3045_, lean_object* v_rootNew_3046_, lean_object* v_a_3047_, lean_object* v_a_3048_, lean_object* v_a_3049_, lean_object* v_a_3050_, lean_object* v_a_3051_, lean_object* v_a_3052_, lean_object* v_a_3053_, lean_object* v_a_3054_, lean_object* v_a_3055_, lean_object* v_a_3056_){
_start:
{
lean_object* v___x_3058_; 
v___x_3058_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_rootNew_3046_, v_a_3051_);
if (lean_obj_tag(v___x_3058_) == 0)
{
lean_object* v_a_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; uint8_t v___x_3062_; lean_object* v___x_3063_; 
v_a_3059_ = lean_ctor_get(v___x_3058_, 0);
lean_inc(v_a_3059_);
lean_dec_ref(v___x_3058_);
v___x_3060_ = lean_box(0);
lean_inc_ref(v_lhs_3045_);
v___x_3061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3061_, 0, v___x_3060_);
lean_ctor_set(v___x_3061_, 1, v_lhs_3045_);
v___x_3062_ = lean_unbox(v_a_3059_);
lean_dec(v_a_3059_);
v___x_3063_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg(v_lhs_3045_, v_rootNew_3046_, v___x_3062_, v___x_3061_, v_a_3047_, v_a_3051_, v_a_3053_, v_a_3054_, v_a_3055_, v_a_3056_);
lean_dec_ref(v_lhs_3045_);
if (lean_obj_tag(v___x_3063_) == 0)
{
lean_object* v_a_3064_; lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3077_; 
v_a_3064_ = lean_ctor_get(v___x_3063_, 0);
v_isSharedCheck_3077_ = !lean_is_exclusive(v___x_3063_);
if (v_isSharedCheck_3077_ == 0)
{
v___x_3066_ = v___x_3063_;
v_isShared_3067_ = v_isSharedCheck_3077_;
goto v_resetjp_3065_;
}
else
{
lean_inc(v_a_3064_);
lean_dec(v___x_3063_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3077_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v_fst_3068_; 
v_fst_3068_ = lean_ctor_get(v_a_3064_, 0);
lean_inc(v_fst_3068_);
lean_dec(v_a_3064_);
if (lean_obj_tag(v_fst_3068_) == 0)
{
lean_object* v___x_3069_; lean_object* v___x_3071_; 
v___x_3069_ = lean_box(0);
if (v_isShared_3067_ == 0)
{
lean_ctor_set(v___x_3066_, 0, v___x_3069_);
v___x_3071_ = v___x_3066_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v___x_3069_);
v___x_3071_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
return v___x_3071_;
}
}
else
{
lean_object* v_val_3073_; lean_object* v___x_3075_; 
v_val_3073_ = lean_ctor_get(v_fst_3068_, 0);
lean_inc(v_val_3073_);
lean_dec_ref(v_fst_3068_);
if (v_isShared_3067_ == 0)
{
lean_ctor_set(v___x_3066_, 0, v_val_3073_);
v___x_3075_ = v___x_3066_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3076_; 
v_reuseFailAlloc_3076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3076_, 0, v_val_3073_);
v___x_3075_ = v_reuseFailAlloc_3076_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
return v___x_3075_;
}
}
}
}
else
{
lean_object* v_a_3078_; lean_object* v___x_3080_; uint8_t v_isShared_3081_; uint8_t v_isSharedCheck_3085_; 
v_a_3078_ = lean_ctor_get(v___x_3063_, 0);
v_isSharedCheck_3085_ = !lean_is_exclusive(v___x_3063_);
if (v_isSharedCheck_3085_ == 0)
{
v___x_3080_ = v___x_3063_;
v_isShared_3081_ = v_isSharedCheck_3085_;
goto v_resetjp_3079_;
}
else
{
lean_inc(v_a_3078_);
lean_dec(v___x_3063_);
v___x_3080_ = lean_box(0);
v_isShared_3081_ = v_isSharedCheck_3085_;
goto v_resetjp_3079_;
}
v_resetjp_3079_:
{
lean_object* v___x_3083_; 
if (v_isShared_3081_ == 0)
{
v___x_3083_ = v___x_3080_;
goto v_reusejp_3082_;
}
else
{
lean_object* v_reuseFailAlloc_3084_; 
v_reuseFailAlloc_3084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3084_, 0, v_a_3078_);
v___x_3083_ = v_reuseFailAlloc_3084_;
goto v_reusejp_3082_;
}
v_reusejp_3082_:
{
return v___x_3083_;
}
}
}
}
else
{
lean_object* v_a_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3093_; 
lean_dec_ref(v_rootNew_3046_);
lean_dec_ref(v_lhs_3045_);
v_a_3086_ = lean_ctor_get(v___x_3058_, 0);
v_isSharedCheck_3093_ = !lean_is_exclusive(v___x_3058_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3088_ = v___x_3058_;
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_a_3086_);
lean_dec(v___x_3058_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v___x_3091_; 
if (v_isShared_3089_ == 0)
{
v___x_3091_ = v___x_3088_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_a_3086_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
return v___x_3091_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots___boxed(lean_object* v_lhs_3094_, lean_object* v_rootNew_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_, lean_object* v_a_3098_, lean_object* v_a_3099_, lean_object* v_a_3100_, lean_object* v_a_3101_, lean_object* v_a_3102_, lean_object* v_a_3103_, lean_object* v_a_3104_, lean_object* v_a_3105_, lean_object* v_a_3106_){
_start:
{
lean_object* v_res_3107_; 
v_res_3107_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots(v_lhs_3094_, v_rootNew_3095_, v_a_3096_, v_a_3097_, v_a_3098_, v_a_3099_, v_a_3100_, v_a_3101_, v_a_3102_, v_a_3103_, v_a_3104_, v_a_3105_);
lean_dec(v_a_3105_);
lean_dec_ref(v_a_3104_);
lean_dec(v_a_3103_);
lean_dec_ref(v_a_3102_);
lean_dec(v_a_3101_);
lean_dec_ref(v_a_3100_);
lean_dec(v_a_3099_);
lean_dec_ref(v_a_3098_);
lean_dec(v_a_3097_);
lean_dec(v_a_3096_);
return v_res_3107_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0(lean_object* v___x_3108_, lean_object* v_00_u03b2_3109_, lean_object* v_x_3110_, lean_object* v_x_3111_){
_start:
{
lean_object* v___x_3112_; 
v___x_3112_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg(v___x_3108_, v_x_3110_, v_x_3111_);
return v___x_3112_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___boxed(lean_object* v___x_3113_, lean_object* v_00_u03b2_3114_, lean_object* v_x_3115_, lean_object* v_x_3116_){
_start:
{
lean_object* v_res_3117_; 
v_res_3117_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0(v___x_3113_, v_00_u03b2_3114_, v_x_3115_, v_x_3116_);
lean_dec_ref(v_x_3115_);
lean_dec_ref(v___x_3113_);
return v_res_3117_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1(lean_object* v___x_3118_, lean_object* v_00_u03b2_3119_, lean_object* v_x_3120_, lean_object* v_x_3121_, lean_object* v_x_3122_){
_start:
{
lean_object* v___x_3123_; 
v___x_3123_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg(v___x_3118_, v_x_3120_, v_x_3121_, v_x_3122_);
return v___x_3123_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___boxed(lean_object* v___x_3124_, lean_object* v_00_u03b2_3125_, lean_object* v_x_3126_, lean_object* v_x_3127_, lean_object* v_x_3128_){
_start:
{
lean_object* v_res_3129_; 
v_res_3129_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1(v___x_3124_, v_00_u03b2_3125_, v_x_3126_, v_x_3127_, v_x_3128_);
lean_dec_ref(v___x_3124_);
return v_res_3129_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2(lean_object* v_lhs_3130_, lean_object* v_rootNew_3131_, uint8_t v_a_3132_, lean_object* v_b_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_){
_start:
{
lean_object* v___x_3145_; 
v___x_3145_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg(v_lhs_3130_, v_rootNew_3131_, v_a_3132_, v_b_3133_, v___y_3134_, v___y_3138_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_);
return v___x_3145_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___boxed(lean_object* v_lhs_3146_, lean_object* v_rootNew_3147_, lean_object* v_a_3148_, lean_object* v_b_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_){
_start:
{
uint8_t v_a_30917__boxed_3161_; lean_object* v_res_3162_; 
v_a_30917__boxed_3161_ = lean_unbox(v_a_3148_);
v_res_3162_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2(v_lhs_3146_, v_rootNew_3147_, v_a_30917__boxed_3161_, v_b_3149_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_, v___y_3158_, v___y_3159_);
lean_dec(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3156_);
lean_dec(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec(v___y_3153_);
lean_dec_ref(v___y_3152_);
lean_dec(v___y_3151_);
lean_dec(v___y_3150_);
lean_dec_ref(v_lhs_3146_);
return v_res_3162_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0(lean_object* v___x_3163_, lean_object* v_00_u03b2_3164_, lean_object* v_x_3165_, size_t v_x_3166_, lean_object* v_x_3167_){
_start:
{
lean_object* v___x_3168_; 
lean_inc_ref(v_x_3165_);
v___x_3168_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg(v___x_3163_, v_x_3165_, v_x_3166_, v_x_3167_);
return v___x_3168_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___boxed(lean_object* v___x_3169_, lean_object* v_00_u03b2_3170_, lean_object* v_x_3171_, lean_object* v_x_3172_, lean_object* v_x_3173_){
_start:
{
size_t v_x_30957__boxed_3174_; lean_object* v_res_3175_; 
v_x_30957__boxed_3174_ = lean_unbox_usize(v_x_3172_);
lean_dec(v_x_3172_);
v_res_3175_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0(v___x_3169_, v_00_u03b2_3170_, v_x_3171_, v_x_30957__boxed_3174_, v_x_3173_);
lean_dec_ref(v_x_3171_);
lean_dec_ref(v___x_3169_);
return v_res_3175_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2(lean_object* v___x_3176_, lean_object* v_00_u03b2_3177_, lean_object* v_x_3178_, size_t v_x_3179_, size_t v_x_3180_, lean_object* v_x_3181_, lean_object* v_x_3182_){
_start:
{
lean_object* v___x_3183_; 
v___x_3183_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(v___x_3176_, v_x_3178_, v_x_3179_, v_x_3180_, v_x_3181_, v_x_3182_);
return v___x_3183_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___boxed(lean_object* v___x_3184_, lean_object* v_00_u03b2_3185_, lean_object* v_x_3186_, lean_object* v_x_3187_, lean_object* v_x_3188_, lean_object* v_x_3189_, lean_object* v_x_3190_){
_start:
{
size_t v_x_30971__boxed_3191_; size_t v_x_30972__boxed_3192_; lean_object* v_res_3193_; 
v_x_30971__boxed_3191_ = lean_unbox_usize(v_x_3187_);
lean_dec(v_x_3187_);
v_x_30972__boxed_3192_ = lean_unbox_usize(v_x_3188_);
lean_dec(v_x_3188_);
v_res_3193_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2(v___x_3184_, v_00_u03b2_3185_, v_x_3186_, v_x_30971__boxed_3191_, v_x_30972__boxed_3192_, v_x_3189_, v_x_3190_);
lean_dec_ref(v___x_3184_);
return v_res_3193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1(lean_object* v___x_3194_, lean_object* v_00_u03b2_3195_, lean_object* v_keys_3196_, lean_object* v_vals_3197_, lean_object* v_heq_3198_, lean_object* v_i_3199_, lean_object* v_k_3200_){
_start:
{
lean_object* v___x_3201_; 
v___x_3201_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg(v___x_3194_, v_keys_3196_, v_vals_3197_, v_i_3199_, v_k_3200_);
return v___x_3201_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___boxed(lean_object* v___x_3202_, lean_object* v_00_u03b2_3203_, lean_object* v_keys_3204_, lean_object* v_vals_3205_, lean_object* v_heq_3206_, lean_object* v_i_3207_, lean_object* v_k_3208_){
_start:
{
lean_object* v_res_3209_; 
v_res_3209_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1(v___x_3202_, v_00_u03b2_3203_, v_keys_3204_, v_vals_3205_, v_heq_3206_, v_i_3207_, v_k_3208_);
lean_dec_ref(v_vals_3205_);
lean_dec_ref(v_keys_3204_);
lean_dec_ref(v___x_3202_);
return v_res_3209_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4(lean_object* v___x_3210_, lean_object* v_00_u03b2_3211_, lean_object* v_n_3212_, lean_object* v_k_3213_, lean_object* v_v_3214_){
_start:
{
lean_object* v___x_3215_; 
v___x_3215_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg(v___x_3210_, v_n_3212_, v_k_3213_, v_v_3214_);
return v___x_3215_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___boxed(lean_object* v___x_3216_, lean_object* v_00_u03b2_3217_, lean_object* v_n_3218_, lean_object* v_k_3219_, lean_object* v_v_3220_){
_start:
{
lean_object* v_res_3221_; 
v_res_3221_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4(v___x_3216_, v_00_u03b2_3217_, v_n_3218_, v_k_3219_, v_v_3220_);
lean_dec_ref(v___x_3216_);
return v_res_3221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5(lean_object* v___x_3222_, lean_object* v_00_u03b2_3223_, size_t v_depth_3224_, lean_object* v_keys_3225_, lean_object* v_vals_3226_, lean_object* v_heq_3227_, lean_object* v_i_3228_, lean_object* v_entries_3229_){
_start:
{
lean_object* v___x_3230_; 
v___x_3230_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg(v___x_3222_, v_depth_3224_, v_keys_3225_, v_vals_3226_, v_i_3228_, v_entries_3229_);
return v___x_3230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___boxed(lean_object* v___x_3231_, lean_object* v_00_u03b2_3232_, lean_object* v_depth_3233_, lean_object* v_keys_3234_, lean_object* v_vals_3235_, lean_object* v_heq_3236_, lean_object* v_i_3237_, lean_object* v_entries_3238_){
_start:
{
size_t v_depth_boxed_3239_; lean_object* v_res_3240_; 
v_depth_boxed_3239_ = lean_unbox_usize(v_depth_3233_);
lean_dec(v_depth_3233_);
v_res_3240_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5(v___x_3231_, v_00_u03b2_3232_, v_depth_boxed_3239_, v_keys_3234_, v_vals_3235_, v_heq_3236_, v_i_3237_, v_entries_3238_);
lean_dec_ref(v_vals_3235_);
lean_dec_ref(v_keys_3234_);
lean_dec_ref(v___x_3231_);
return v_res_3240_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6(lean_object* v___x_3241_, lean_object* v_00_u03b2_3242_, lean_object* v_x_3243_, lean_object* v_x_3244_, lean_object* v_x_3245_, lean_object* v_x_3246_){
_start:
{
lean_object* v___x_3247_; 
v___x_3247_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg(v___x_3241_, v_x_3243_, v_x_3244_, v_x_3245_, v_x_3246_);
return v___x_3247_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___boxed(lean_object* v___x_3248_, lean_object* v_00_u03b2_3249_, lean_object* v_x_3250_, lean_object* v_x_3251_, lean_object* v_x_3252_, lean_object* v_x_3253_){
_start:
{
lean_object* v_res_3254_; 
v_res_3254_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6(v___x_3248_, v_00_u03b2_3249_, v_x_3250_, v_x_3251_, v_x_3252_, v_x_3253_);
lean_dec_ref(v___x_3248_);
return v_res_3254_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg(lean_object* v_as_x27_3255_, lean_object* v_b_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_){
_start:
{
if (lean_obj_tag(v_as_x27_3255_) == 0)
{
lean_object* v___x_3268_; 
v___x_3268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3268_, 0, v_b_3256_);
return v___x_3268_;
}
else
{
lean_object* v_head_3269_; lean_object* v_tail_3270_; lean_object* v___x_3271_; 
v_head_3269_ = lean_ctor_get(v_as_x27_3255_, 0);
v_tail_3270_ = lean_ctor_get(v_as_x27_3255_, 1);
lean_inc(v_head_3269_);
v___x_3271_ = l_Lean_Meta_Grind_propagateUp(v_head_3269_, v___y_3257_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
if (lean_obj_tag(v___x_3271_) == 0)
{
lean_object* v___x_3272_; 
lean_dec_ref(v___x_3271_);
v___x_3272_ = lean_box(0);
v_as_x27_3255_ = v_tail_3270_;
v_b_3256_ = v___x_3272_;
goto _start;
}
else
{
return v___x_3271_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg___boxed(lean_object* v_as_x27_3274_, lean_object* v_b_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_){
_start:
{
lean_object* v_res_3287_; 
v_res_3287_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg(v_as_x27_3274_, v_b_3275_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
lean_dec(v___y_3285_);
lean_dec_ref(v___y_3284_);
lean_dec(v___y_3283_);
lean_dec_ref(v___y_3282_);
lean_dec(v___y_3281_);
lean_dec_ref(v___y_3280_);
lean_dec(v___y_3279_);
lean_dec_ref(v___y_3278_);
lean_dec(v___y_3277_);
lean_dec(v___y_3276_);
lean_dec(v_as_x27_3274_);
return v_res_3287_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg(lean_object* v_as_x27_3288_, lean_object* v_b_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_){
_start:
{
if (lean_obj_tag(v_as_x27_3288_) == 0)
{
lean_object* v___x_3301_; 
v___x_3301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3301_, 0, v_b_3289_);
return v___x_3301_;
}
else
{
lean_object* v_head_3302_; lean_object* v_tail_3303_; lean_object* v___x_3304_; 
v_head_3302_ = lean_ctor_get(v_as_x27_3288_, 0);
v_tail_3303_ = lean_ctor_get(v_as_x27_3288_, 1);
lean_inc(v_head_3302_);
v___x_3304_ = l_Lean_Meta_Grind_propagateDown(v_head_3302_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_);
if (lean_obj_tag(v___x_3304_) == 0)
{
lean_object* v___x_3305_; 
lean_dec_ref(v___x_3304_);
v___x_3305_ = lean_box(0);
v_as_x27_3288_ = v_tail_3303_;
v_b_3289_ = v___x_3305_;
goto _start;
}
else
{
return v___x_3304_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg___boxed(lean_object* v_as_x27_3307_, lean_object* v_b_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_){
_start:
{
lean_object* v_res_3320_; 
v_res_3320_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg(v_as_x27_3307_, v_b_3308_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
lean_dec(v___y_3318_);
lean_dec_ref(v___y_3317_);
lean_dec(v___y_3316_);
lean_dec_ref(v___y_3315_);
lean_dec(v___y_3314_);
lean_dec_ref(v___y_3313_);
lean_dec(v___y_3312_);
lean_dec_ref(v___y_3311_);
lean_dec(v___y_3310_);
lean_dec(v___y_3309_);
lean_dec(v_as_x27_3307_);
return v_res_3320_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0(void){
_start:
{
lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v_cls_3323_; 
v___x_3321_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1);
v___x_3322_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0);
v_cls_3323_ = l_Lean_Name_mkStr2(v___x_3322_, v___x_3321_);
return v_cls_3323_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1(void){
_start:
{
lean_object* v_cls_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; 
v_cls_3324_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0);
v___x_3325_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5);
v___x_3326_ = l_Lean_Name_append(v___x_3325_, v_cls_3324_);
return v___x_3326_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__2(void){
_start:
{
lean_object* v___x_3327_; 
v___x_3327_ = lean_mk_string_unchecked(" new root ", 10, 10);
return v___x_3327_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3(void){
_start:
{
lean_object* v___x_3328_; lean_object* v___x_3329_; 
v___x_3328_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__2, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__2);
v___x_3329_ = l_Lean_stringToMessageData(v___x_3328_);
return v___x_3329_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__4(void){
_start:
{
lean_object* v___x_3330_; 
v___x_3330_ = lean_mk_string_unchecked(", ", 2, 2);
return v___x_3330_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5(void){
_start:
{
lean_object* v___x_3331_; lean_object* v___x_3332_; 
v___x_3331_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__4, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__4);
v___x_3332_ = l_Lean_stringToMessageData(v___x_3331_);
return v___x_3332_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__6(void){
_start:
{
lean_object* v___x_3333_; 
v___x_3333_ = lean_mk_string_unchecked("adding ", 7, 7);
return v___x_3333_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7(void){
_start:
{
lean_object* v___x_3334_; lean_object* v___x_3335_; 
v___x_3334_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__6, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__6);
v___x_3335_ = l_Lean_stringToMessageData(v___x_3334_);
return v___x_3335_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__8(void){
_start:
{
lean_object* v___x_3336_; 
v___x_3336_ = lean_mk_string_unchecked(" ↦ ", 5, 3);
return v___x_3336_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9(void){
_start:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; 
v___x_3337_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__8, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__8);
v___x_3338_ = l_Lean_stringToMessageData(v___x_3337_);
return v___x_3338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go(lean_object* v_proof_3339_, uint8_t v_isHEq_3340_, lean_object* v_lhs_3341_, lean_object* v_rhs_3342_, lean_object* v_lhsNode_3343_, lean_object* v_rhsNode_3344_, lean_object* v_lhsRoot_3345_, lean_object* v_rhsRoot_3346_, uint8_t v_flipped_3347_, lean_object* v_a_3348_, lean_object* v_a_3349_, lean_object* v_a_3350_, lean_object* v_a_3351_, lean_object* v_a_3352_, lean_object* v_a_3353_, lean_object* v_a_3354_, lean_object* v_a_3355_, lean_object* v_a_3356_, lean_object* v_a_3357_){
_start:
{
lean_object* v___y_3360_; lean_object* v___y_3361_; lean_object* v___y_3362_; lean_object* v___y_3363_; lean_object* v___y_3364_; lean_object* v___y_3365_; lean_object* v___y_3366_; lean_object* v___y_3367_; lean_object* v___y_3368_; lean_object* v___y_3369_; lean_object* v___y_3370_; lean_object* v___y_3371_; lean_object* v___y_3372_; lean_object* v___y_3373_; lean_object* v___y_3374_; lean_object* v___y_3375_; lean_object* v___y_3412_; lean_object* v___y_3413_; lean_object* v___y_3414_; lean_object* v___y_3415_; lean_object* v___y_3416_; lean_object* v___y_3417_; lean_object* v___y_3418_; lean_object* v___y_3419_; uint8_t v___y_3420_; lean_object* v___y_3421_; lean_object* v___y_3422_; lean_object* v___y_3423_; lean_object* v___y_3424_; lean_object* v___y_3425_; lean_object* v___y_3426_; lean_object* v___y_3427_; lean_object* v___y_3428_; uint8_t v___y_3429_; uint8_t v___y_3430_; uint8_t v___y_3431_; lean_object* v___y_3432_; lean_object* v___y_3433_; lean_object* v___y_3434_; lean_object* v___y_3435_; lean_object* v___y_3436_; lean_object* v___y_3437_; lean_object* v___y_3438_; lean_object* v___y_3439_; lean_object* v___y_3440_; lean_object* v___y_3441_; lean_object* v___y_3442_; lean_object* v___y_3443_; lean_object* v___y_3444_; uint8_t v___y_3445_; uint8_t v___y_3446_; lean_object* v___y_3476_; lean_object* v___y_3477_; lean_object* v___y_3478_; lean_object* v___y_3479_; lean_object* v___y_3480_; lean_object* v___y_3481_; lean_object* v___y_3482_; lean_object* v___y_3483_; lean_object* v___y_3484_; lean_object* v___y_3485_; lean_object* v___y_3486_; lean_object* v___y_3487_; lean_object* v___y_3488_; lean_object* v___y_3489_; lean_object* v___y_3490_; lean_object* v___y_3491_; uint8_t v___y_3492_; uint8_t v___y_3493_; uint8_t v___y_3494_; uint8_t v___y_3495_; lean_object* v___y_3496_; uint8_t v___y_3497_; lean_object* v___y_3498_; lean_object* v___y_3499_; lean_object* v___y_3500_; lean_object* v___y_3501_; lean_object* v___y_3502_; lean_object* v___y_3503_; lean_object* v___y_3504_; lean_object* v___y_3505_; lean_object* v___y_3506_; lean_object* v___y_3507_; lean_object* v___y_3508_; lean_object* v___y_3509_; uint8_t v___y_3510_; uint8_t v___y_3511_; lean_object* v___y_3513_; lean_object* v___y_3514_; lean_object* v___y_3515_; uint8_t v___y_3516_; lean_object* v___y_3517_; uint8_t v___y_3518_; lean_object* v___y_3519_; lean_object* v___y_3520_; lean_object* v___y_3521_; lean_object* v___y_3522_; lean_object* v___y_3523_; lean_object* v___y_3524_; lean_object* v___y_3525_; lean_object* v___y_3526_; lean_object* v___y_3527_; lean_object* v___y_3528_; lean_object* v___y_3529_; lean_object* v___y_3530_; lean_object* v___y_3531_; lean_object* v___y_3532_; lean_object* v___y_3533_; lean_object* v___y_3534_; lean_object* v_options_3595_; lean_object* v_inheritedTraceOptions_3596_; uint8_t v_hasTrace_3597_; lean_object* v_cls_3598_; lean_object* v___y_3600_; lean_object* v___y_3601_; lean_object* v___y_3602_; lean_object* v___y_3603_; lean_object* v_fns_u2082_3604_; lean_object* v___y_3605_; lean_object* v___y_3606_; lean_object* v___y_3607_; lean_object* v___y_3608_; lean_object* v___y_3609_; lean_object* v___y_3610_; lean_object* v___y_3611_; lean_object* v___y_3612_; lean_object* v___y_3613_; lean_object* v___y_3614_; lean_object* v___y_3688_; lean_object* v___y_3689_; lean_object* v___y_3690_; lean_object* v_fns_u2081_3691_; lean_object* v___y_3692_; lean_object* v___y_3693_; lean_object* v___y_3694_; lean_object* v___y_3695_; lean_object* v___y_3696_; lean_object* v___y_3697_; lean_object* v___y_3698_; lean_object* v___y_3699_; lean_object* v___y_3700_; lean_object* v___y_3701_; lean_object* v___y_3718_; lean_object* v___y_3719_; lean_object* v___y_3720_; lean_object* v___y_3721_; lean_object* v___y_3722_; lean_object* v___y_3723_; lean_object* v___y_3724_; lean_object* v___y_3725_; lean_object* v___y_3726_; lean_object* v___y_3727_; 
v_options_3595_ = lean_ctor_get(v_a_3356_, 2);
v_inheritedTraceOptions_3596_ = lean_ctor_get(v_a_3356_, 13);
v_hasTrace_3597_ = lean_ctor_get_uint8(v_options_3595_, sizeof(void*)*1);
v_cls_3598_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0);
if (v_hasTrace_3597_ == 0)
{
v___y_3718_ = v_a_3348_;
v___y_3719_ = v_a_3349_;
v___y_3720_ = v_a_3350_;
v___y_3721_ = v_a_3351_;
v___y_3722_ = v_a_3352_;
v___y_3723_ = v_a_3353_;
v___y_3724_ = v_a_3354_;
v___y_3725_ = v_a_3355_;
v___y_3726_ = v_a_3356_;
v___y_3727_ = v_a_3357_;
goto v___jp_3717_;
}
else
{
lean_object* v___x_3797_; uint8_t v___x_3798_; 
v___x_3797_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1);
v___x_3798_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3596_, v_options_3595_, v___x_3797_);
if (v___x_3798_ == 0)
{
v___y_3718_ = v_a_3348_;
v___y_3719_ = v_a_3349_;
v___y_3720_ = v_a_3350_;
v___y_3721_ = v_a_3351_;
v___y_3722_ = v_a_3352_;
v___y_3723_ = v_a_3353_;
v___y_3724_ = v_a_3354_;
v___y_3725_ = v_a_3355_;
v___y_3726_ = v_a_3356_;
v___y_3727_ = v_a_3357_;
goto v___jp_3717_;
}
else
{
lean_object* v___x_3799_; 
v___x_3799_ = l_Lean_Meta_Grind_updateLastTag(v_a_3348_, v_a_3349_, v_a_3350_, v_a_3351_, v_a_3352_, v_a_3353_, v_a_3354_, v_a_3355_, v_a_3356_, v_a_3357_);
if (lean_obj_tag(v___x_3799_) == 0)
{
lean_object* v___x_3800_; 
lean_dec_ref(v___x_3799_);
lean_inc_ref(v_lhs_3341_);
v___x_3800_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_lhs_3341_, v_a_3348_, v_a_3354_, v_a_3355_, v_a_3356_, v_a_3357_);
if (lean_obj_tag(v___x_3800_) == 0)
{
lean_object* v_a_3801_; lean_object* v___x_3802_; 
v_a_3801_ = lean_ctor_get(v___x_3800_, 0);
lean_inc(v_a_3801_);
lean_dec_ref(v___x_3800_);
lean_inc_ref(v_rhs_3342_);
v___x_3802_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_rhs_3342_, v_a_3348_, v_a_3354_, v_a_3355_, v_a_3356_, v_a_3357_);
if (lean_obj_tag(v___x_3802_) == 0)
{
lean_object* v_a_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; 
v_a_3803_ = lean_ctor_get(v___x_3802_, 0);
lean_inc(v_a_3803_);
lean_dec_ref(v___x_3802_);
v___x_3804_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7);
v___x_3805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3805_, 0, v___x_3804_);
lean_ctor_set(v___x_3805_, 1, v_a_3801_);
v___x_3806_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9);
v___x_3807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3807_, 0, v___x_3805_);
lean_ctor_set(v___x_3807_, 1, v___x_3806_);
v___x_3808_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3807_);
lean_ctor_set(v___x_3808_, 1, v_a_3803_);
v___x_3809_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v_cls_3598_, v___x_3808_, v_a_3354_, v_a_3355_, v_a_3356_, v_a_3357_);
if (lean_obj_tag(v___x_3809_) == 0)
{
lean_dec_ref(v___x_3809_);
v___y_3718_ = v_a_3348_;
v___y_3719_ = v_a_3349_;
v___y_3720_ = v_a_3350_;
v___y_3721_ = v_a_3351_;
v___y_3722_ = v_a_3352_;
v___y_3723_ = v_a_3353_;
v___y_3724_ = v_a_3354_;
v___y_3725_ = v_a_3355_;
v___y_3726_ = v_a_3356_;
v___y_3727_ = v_a_3357_;
goto v___jp_3717_;
}
else
{
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_rhsNode_3344_);
lean_dec_ref(v_lhsNode_3343_);
lean_dec_ref(v_rhs_3342_);
lean_dec_ref(v_lhs_3341_);
lean_dec_ref(v_proof_3339_);
return v___x_3809_;
}
}
else
{
lean_object* v_a_3810_; lean_object* v___x_3812_; uint8_t v_isShared_3813_; uint8_t v_isSharedCheck_3817_; 
lean_dec(v_a_3801_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_rhsNode_3344_);
lean_dec_ref(v_lhsNode_3343_);
lean_dec_ref(v_rhs_3342_);
lean_dec_ref(v_lhs_3341_);
lean_dec_ref(v_proof_3339_);
v_a_3810_ = lean_ctor_get(v___x_3802_, 0);
v_isSharedCheck_3817_ = !lean_is_exclusive(v___x_3802_);
if (v_isSharedCheck_3817_ == 0)
{
v___x_3812_ = v___x_3802_;
v_isShared_3813_ = v_isSharedCheck_3817_;
goto v_resetjp_3811_;
}
else
{
lean_inc(v_a_3810_);
lean_dec(v___x_3802_);
v___x_3812_ = lean_box(0);
v_isShared_3813_ = v_isSharedCheck_3817_;
goto v_resetjp_3811_;
}
v_resetjp_3811_:
{
lean_object* v___x_3815_; 
if (v_isShared_3813_ == 0)
{
v___x_3815_ = v___x_3812_;
goto v_reusejp_3814_;
}
else
{
lean_object* v_reuseFailAlloc_3816_; 
v_reuseFailAlloc_3816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3816_, 0, v_a_3810_);
v___x_3815_ = v_reuseFailAlloc_3816_;
goto v_reusejp_3814_;
}
v_reusejp_3814_:
{
return v___x_3815_;
}
}
}
}
else
{
lean_object* v_a_3818_; lean_object* v___x_3820_; uint8_t v_isShared_3821_; uint8_t v_isSharedCheck_3825_; 
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_rhsNode_3344_);
lean_dec_ref(v_lhsNode_3343_);
lean_dec_ref(v_rhs_3342_);
lean_dec_ref(v_lhs_3341_);
lean_dec_ref(v_proof_3339_);
v_a_3818_ = lean_ctor_get(v___x_3800_, 0);
v_isSharedCheck_3825_ = !lean_is_exclusive(v___x_3800_);
if (v_isSharedCheck_3825_ == 0)
{
v___x_3820_ = v___x_3800_;
v_isShared_3821_ = v_isSharedCheck_3825_;
goto v_resetjp_3819_;
}
else
{
lean_inc(v_a_3818_);
lean_dec(v___x_3800_);
v___x_3820_ = lean_box(0);
v_isShared_3821_ = v_isSharedCheck_3825_;
goto v_resetjp_3819_;
}
v_resetjp_3819_:
{
lean_object* v___x_3823_; 
if (v_isShared_3821_ == 0)
{
v___x_3823_ = v___x_3820_;
goto v_reusejp_3822_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3824_, 0, v_a_3818_);
v___x_3823_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3822_;
}
v_reusejp_3822_:
{
return v___x_3823_;
}
}
}
}
else
{
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_rhsNode_3344_);
lean_dec_ref(v_lhsNode_3343_);
lean_dec_ref(v_rhs_3342_);
lean_dec_ref(v_lhs_3341_);
lean_dec_ref(v_proof_3339_);
return v___x_3799_;
}
}
}
v___jp_3359_:
{
lean_object* v___x_3376_; 
v___x_3376_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_3366_, v___y_3375_);
if (lean_obj_tag(v___x_3376_) == 0)
{
lean_object* v_a_3377_; lean_object* v___x_3379_; uint8_t v_isShared_3380_; uint8_t v_isSharedCheck_3402_; 
v_a_3377_ = lean_ctor_get(v___x_3376_, 0);
v_isSharedCheck_3402_ = !lean_is_exclusive(v___x_3376_);
if (v_isSharedCheck_3402_ == 0)
{
v___x_3379_ = v___x_3376_;
v_isShared_3380_ = v_isSharedCheck_3402_;
goto v_resetjp_3378_;
}
else
{
lean_inc(v_a_3377_);
lean_dec(v___x_3376_);
v___x_3379_ = lean_box(0);
v_isShared_3380_ = v_isSharedCheck_3402_;
goto v_resetjp_3378_;
}
v_resetjp_3378_:
{
uint8_t v___x_3381_; 
v___x_3381_ = lean_unbox(v_a_3377_);
lean_dec(v_a_3377_);
if (v___x_3381_ == 0)
{
lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
lean_del_object(v___x_3379_);
v___x_3382_ = l_Lean_Meta_Grind_ParentSet_elems(v___y_3365_);
lean_dec(v___y_3365_);
v___x_3383_ = lean_box(0);
v___x_3384_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg(v___x_3382_, v___x_3383_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_);
lean_dec(v___x_3382_);
if (lean_obj_tag(v___x_3384_) == 0)
{
lean_object* v___x_3385_; 
lean_dec_ref(v___x_3384_);
v___x_3385_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg(v___y_3362_, v___x_3383_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_);
if (lean_obj_tag(v___x_3385_) == 0)
{
lean_object* v___x_3386_; 
lean_dec_ref(v___x_3385_);
v___x_3386_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns(v___y_3360_, v___y_3364_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_);
lean_dec_ref(v___y_3364_);
lean_dec_ref(v___y_3360_);
if (lean_obj_tag(v___x_3386_) == 0)
{
lean_object* v___x_3387_; 
lean_dec_ref(v___x_3386_);
v___x_3387_ = l_Lean_Meta_Grind_PendingSolverPropagations_propagate(v___y_3363_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_);
if (lean_obj_tag(v___x_3387_) == 0)
{
lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3396_; 
v_isSharedCheck_3396_ = !lean_is_exclusive(v___x_3387_);
if (v_isSharedCheck_3396_ == 0)
{
lean_object* v_unused_3397_; 
v_unused_3397_ = lean_ctor_get(v___x_3387_, 0);
lean_dec(v_unused_3397_);
v___x_3389_ = v___x_3387_;
v_isShared_3390_ = v_isSharedCheck_3396_;
goto v_resetjp_3388_;
}
else
{
lean_dec(v___x_3387_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3396_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
uint8_t v___x_3391_; 
v___x_3391_ = l_Lean_Expr_isTrue(v___y_3361_);
if (v___x_3391_ == 0)
{
lean_object* v___x_3393_; 
lean_dec(v___y_3362_);
if (v_isShared_3390_ == 0)
{
lean_ctor_set(v___x_3389_, 0, v___x_3383_);
v___x_3393_ = v___x_3389_;
goto v_reusejp_3392_;
}
else
{
lean_object* v_reuseFailAlloc_3394_; 
v_reuseFailAlloc_3394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3394_, 0, v___x_3383_);
v___x_3393_ = v_reuseFailAlloc_3394_;
goto v_reusejp_3392_;
}
v_reusejp_3392_:
{
return v___x_3393_;
}
}
else
{
lean_object* v___x_3395_; 
lean_del_object(v___x_3389_);
v___x_3395_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts(v___y_3362_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_);
lean_dec(v___y_3362_);
return v___x_3395_;
}
}
}
else
{
lean_dec(v___y_3362_);
lean_dec_ref(v___y_3361_);
return v___x_3387_;
}
}
else
{
lean_dec(v___y_3363_);
lean_dec(v___y_3362_);
lean_dec_ref(v___y_3361_);
return v___x_3386_;
}
}
else
{
lean_dec_ref(v___y_3364_);
lean_dec(v___y_3363_);
lean_dec(v___y_3362_);
lean_dec_ref(v___y_3361_);
lean_dec_ref(v___y_3360_);
return v___x_3385_;
}
}
else
{
lean_dec_ref(v___y_3364_);
lean_dec(v___y_3363_);
lean_dec(v___y_3362_);
lean_dec_ref(v___y_3361_);
lean_dec_ref(v___y_3360_);
return v___x_3384_;
}
}
else
{
lean_object* v___x_3398_; lean_object* v___x_3400_; 
lean_dec(v___y_3365_);
lean_dec_ref(v___y_3364_);
lean_dec(v___y_3363_);
lean_dec(v___y_3362_);
lean_dec_ref(v___y_3361_);
lean_dec_ref(v___y_3360_);
v___x_3398_ = lean_box(0);
if (v_isShared_3380_ == 0)
{
lean_ctor_set(v___x_3379_, 0, v___x_3398_);
v___x_3400_ = v___x_3379_;
goto v_reusejp_3399_;
}
else
{
lean_object* v_reuseFailAlloc_3401_; 
v_reuseFailAlloc_3401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3401_, 0, v___x_3398_);
v___x_3400_ = v_reuseFailAlloc_3401_;
goto v_reusejp_3399_;
}
v_reusejp_3399_:
{
return v___x_3400_;
}
}
}
}
else
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
lean_dec(v___y_3365_);
lean_dec_ref(v___y_3364_);
lean_dec(v___y_3363_);
lean_dec(v___y_3362_);
lean_dec_ref(v___y_3361_);
lean_dec_ref(v___y_3360_);
v_a_3403_ = lean_ctor_get(v___x_3376_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3376_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3376_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3376_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
v___jp_3411_:
{
lean_object* v___x_3447_; lean_object* v___x_3448_; 
lean_inc_ref(v___y_3427_);
v___x_3447_ = lean_alloc_ctor(0, 11, 6);
lean_ctor_set(v___x_3447_, 0, v___y_3427_);
lean_ctor_set(v___x_3447_, 1, v___y_3417_);
lean_ctor_set(v___x_3447_, 2, v___y_3444_);
lean_ctor_set(v___x_3447_, 3, v___y_3439_);
lean_ctor_set(v___x_3447_, 4, v___y_3412_);
lean_ctor_set(v___x_3447_, 5, v___y_3440_);
lean_ctor_set(v___x_3447_, 6, v___y_3422_);
lean_ctor_set(v___x_3447_, 7, v___y_3413_);
lean_ctor_set(v___x_3447_, 8, v___y_3443_);
lean_ctor_set(v___x_3447_, 9, v___y_3415_);
lean_ctor_set(v___x_3447_, 10, v___y_3419_);
lean_ctor_set_uint8(v___x_3447_, sizeof(void*)*11, v___y_3431_);
lean_ctor_set_uint8(v___x_3447_, sizeof(void*)*11 + 1, v___y_3445_);
lean_ctor_set_uint8(v___x_3447_, sizeof(void*)*11 + 2, v___y_3430_);
lean_ctor_set_uint8(v___x_3447_, sizeof(void*)*11 + 3, v___y_3420_);
lean_ctor_set_uint8(v___x_3447_, sizeof(void*)*11 + 4, v___y_3446_);
lean_ctor_set_uint8(v___x_3447_, sizeof(void*)*11 + 5, v___y_3429_);
lean_inc_ref(v___y_3423_);
v___x_3448_ = l_Lean_Meta_Grind_setENode___redArg(v___y_3423_, v___x_3447_, v___y_3436_, v___y_3433_);
if (lean_obj_tag(v___x_3448_) == 0)
{
lean_object* v___x_3449_; 
lean_dec_ref(v___x_3448_);
lean_inc_ref(v___y_3421_);
v___x_3449_ = l_Lean_Meta_Grind_propagateBeta(v___y_3421_, v___y_3428_, v___y_3436_, v___y_3424_, v___y_3432_, v___y_3414_, v___y_3416_, v___y_3434_, v___y_3441_, v___y_3438_, v___y_3437_, v___y_3433_);
if (lean_obj_tag(v___x_3449_) == 0)
{
lean_object* v___x_3450_; 
lean_dec_ref(v___x_3449_);
lean_inc_ref(v___y_3426_);
v___x_3450_ = l_Lean_Meta_Grind_propagateBeta(v___y_3426_, v___y_3435_, v___y_3436_, v___y_3424_, v___y_3432_, v___y_3414_, v___y_3416_, v___y_3434_, v___y_3441_, v___y_3438_, v___y_3437_, v___y_3433_);
if (lean_obj_tag(v___x_3450_) == 0)
{
lean_object* v___x_3451_; 
lean_dec_ref(v___x_3450_);
v___x_3451_ = l_Lean_Meta_Grind_Solvers_mergeTerms___redArg(v_rhsRoot_3346_, v_lhsRoot_3345_, v___y_3436_, v___y_3441_, v___y_3438_, v___y_3437_, v___y_3433_);
if (lean_obj_tag(v___x_3451_) == 0)
{
lean_object* v_a_3452_; lean_object* v___x_3453_; 
v_a_3452_ = lean_ctor_get(v___x_3451_, 0);
lean_inc(v_a_3452_);
lean_dec_ref(v___x_3451_);
v___x_3453_ = l_Lean_Meta_Grind_resetParentsOf___redArg(v___y_3442_, v___y_3436_, v___y_3433_);
lean_dec_ref(v___y_3442_);
if (lean_obj_tag(v___x_3453_) == 0)
{
lean_object* v___x_3454_; 
lean_dec_ref(v___x_3453_);
lean_inc_ref(v___y_3423_);
v___x_3454_ = l_Lean_Meta_Grind_copyParentsTo(v___y_3418_, v___y_3423_, v___y_3436_, v___y_3424_, v___y_3432_, v___y_3414_, v___y_3416_, v___y_3434_, v___y_3441_, v___y_3438_, v___y_3437_, v___y_3433_);
if (lean_obj_tag(v___x_3454_) == 0)
{
lean_object* v___x_3455_; 
lean_dec_ref(v___x_3454_);
v___x_3455_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_3436_, v___y_3433_);
if (lean_obj_tag(v___x_3455_) == 0)
{
lean_object* v_a_3456_; uint8_t v___x_3457_; 
v_a_3456_ = lean_ctor_get(v___x_3455_, 0);
lean_inc(v_a_3456_);
lean_dec_ref(v___x_3455_);
v___x_3457_ = lean_unbox(v_a_3456_);
lean_dec(v_a_3456_);
if (v___x_3457_ == 0)
{
lean_object* v___x_3458_; 
v___x_3458_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT(v___y_3427_, v___y_3436_, v___y_3424_, v___y_3432_, v___y_3414_, v___y_3416_, v___y_3434_, v___y_3441_, v___y_3438_, v___y_3437_, v___y_3433_);
lean_dec_ref(v___y_3427_);
if (lean_obj_tag(v___x_3458_) == 0)
{
lean_dec_ref(v___x_3458_);
v___y_3360_ = v___y_3421_;
v___y_3361_ = v___y_3423_;
v___y_3362_ = v___y_3425_;
v___y_3363_ = v_a_3452_;
v___y_3364_ = v___y_3426_;
v___y_3365_ = v___y_3418_;
v___y_3366_ = v___y_3436_;
v___y_3367_ = v___y_3424_;
v___y_3368_ = v___y_3432_;
v___y_3369_ = v___y_3414_;
v___y_3370_ = v___y_3416_;
v___y_3371_ = v___y_3434_;
v___y_3372_ = v___y_3441_;
v___y_3373_ = v___y_3438_;
v___y_3374_ = v___y_3437_;
v___y_3375_ = v___y_3433_;
goto v___jp_3359_;
}
else
{
lean_dec(v_a_3452_);
lean_dec_ref(v___y_3426_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3423_);
lean_dec_ref(v___y_3421_);
lean_dec(v___y_3418_);
return v___x_3458_;
}
}
else
{
lean_dec_ref(v___y_3427_);
v___y_3360_ = v___y_3421_;
v___y_3361_ = v___y_3423_;
v___y_3362_ = v___y_3425_;
v___y_3363_ = v_a_3452_;
v___y_3364_ = v___y_3426_;
v___y_3365_ = v___y_3418_;
v___y_3366_ = v___y_3436_;
v___y_3367_ = v___y_3424_;
v___y_3368_ = v___y_3432_;
v___y_3369_ = v___y_3414_;
v___y_3370_ = v___y_3416_;
v___y_3371_ = v___y_3434_;
v___y_3372_ = v___y_3441_;
v___y_3373_ = v___y_3438_;
v___y_3374_ = v___y_3437_;
v___y_3375_ = v___y_3433_;
goto v___jp_3359_;
}
}
else
{
lean_object* v_a_3459_; lean_object* v___x_3461_; uint8_t v_isShared_3462_; uint8_t v_isSharedCheck_3466_; 
lean_dec(v_a_3452_);
lean_dec_ref(v___y_3427_);
lean_dec_ref(v___y_3426_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3423_);
lean_dec_ref(v___y_3421_);
lean_dec(v___y_3418_);
v_a_3459_ = lean_ctor_get(v___x_3455_, 0);
v_isSharedCheck_3466_ = !lean_is_exclusive(v___x_3455_);
if (v_isSharedCheck_3466_ == 0)
{
v___x_3461_ = v___x_3455_;
v_isShared_3462_ = v_isSharedCheck_3466_;
goto v_resetjp_3460_;
}
else
{
lean_inc(v_a_3459_);
lean_dec(v___x_3455_);
v___x_3461_ = lean_box(0);
v_isShared_3462_ = v_isSharedCheck_3466_;
goto v_resetjp_3460_;
}
v_resetjp_3460_:
{
lean_object* v___x_3464_; 
if (v_isShared_3462_ == 0)
{
v___x_3464_ = v___x_3461_;
goto v_reusejp_3463_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v_a_3459_);
v___x_3464_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3463_;
}
v_reusejp_3463_:
{
return v___x_3464_;
}
}
}
}
else
{
lean_dec(v_a_3452_);
lean_dec_ref(v___y_3427_);
lean_dec_ref(v___y_3426_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3423_);
lean_dec_ref(v___y_3421_);
lean_dec(v___y_3418_);
return v___x_3454_;
}
}
else
{
lean_dec(v_a_3452_);
lean_dec_ref(v___y_3427_);
lean_dec_ref(v___y_3426_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3423_);
lean_dec_ref(v___y_3421_);
lean_dec(v___y_3418_);
return v___x_3453_;
}
}
else
{
lean_object* v_a_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3474_; 
lean_dec_ref(v___y_3442_);
lean_dec_ref(v___y_3427_);
lean_dec_ref(v___y_3426_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3423_);
lean_dec_ref(v___y_3421_);
lean_dec(v___y_3418_);
v_a_3467_ = lean_ctor_get(v___x_3451_, 0);
v_isSharedCheck_3474_ = !lean_is_exclusive(v___x_3451_);
if (v_isSharedCheck_3474_ == 0)
{
v___x_3469_ = v___x_3451_;
v_isShared_3470_ = v_isSharedCheck_3474_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_a_3467_);
lean_dec(v___x_3451_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3474_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v___x_3472_; 
if (v_isShared_3470_ == 0)
{
v___x_3472_ = v___x_3469_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3473_; 
v_reuseFailAlloc_3473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3473_, 0, v_a_3467_);
v___x_3472_ = v_reuseFailAlloc_3473_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
return v___x_3472_;
}
}
}
}
else
{
lean_dec_ref(v___y_3442_);
lean_dec_ref(v___y_3427_);
lean_dec_ref(v___y_3426_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3423_);
lean_dec_ref(v___y_3421_);
lean_dec(v___y_3418_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
return v___x_3450_;
}
}
else
{
lean_dec_ref(v___y_3442_);
lean_dec_ref(v___y_3435_);
lean_dec_ref(v___y_3427_);
lean_dec_ref(v___y_3426_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3423_);
lean_dec_ref(v___y_3421_);
lean_dec(v___y_3418_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
return v___x_3449_;
}
}
else
{
lean_dec_ref(v___y_3442_);
lean_dec_ref(v___y_3435_);
lean_dec_ref(v___y_3428_);
lean_dec_ref(v___y_3427_);
lean_dec_ref(v___y_3426_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3423_);
lean_dec_ref(v___y_3421_);
lean_dec(v___y_3418_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
return v___x_3448_;
}
}
v___jp_3475_:
{
if (v_isHEq_3340_ == 0)
{
if (v___y_3493_ == 0)
{
v___y_3412_ = v___y_3476_;
v___y_3413_ = v___y_3477_;
v___y_3414_ = v___y_3478_;
v___y_3415_ = v___y_3479_;
v___y_3416_ = v___y_3480_;
v___y_3417_ = v___y_3481_;
v___y_3418_ = v___y_3483_;
v___y_3419_ = v___y_3482_;
v___y_3420_ = v___y_3511_;
v___y_3421_ = v___y_3484_;
v___y_3422_ = v___y_3485_;
v___y_3423_ = v___y_3486_;
v___y_3424_ = v___y_3487_;
v___y_3425_ = v___y_3488_;
v___y_3426_ = v___y_3489_;
v___y_3427_ = v___y_3490_;
v___y_3428_ = v___y_3491_;
v___y_3429_ = v___y_3492_;
v___y_3430_ = v___y_3494_;
v___y_3431_ = v___y_3495_;
v___y_3432_ = v___y_3496_;
v___y_3433_ = v___y_3498_;
v___y_3434_ = v___y_3499_;
v___y_3435_ = v___y_3500_;
v___y_3436_ = v___y_3501_;
v___y_3437_ = v___y_3502_;
v___y_3438_ = v___y_3503_;
v___y_3439_ = v___y_3504_;
v___y_3440_ = v___y_3505_;
v___y_3441_ = v___y_3506_;
v___y_3442_ = v___y_3507_;
v___y_3443_ = v___y_3508_;
v___y_3444_ = v___y_3509_;
v___y_3445_ = v___y_3510_;
v___y_3446_ = v___y_3497_;
goto v___jp_3411_;
}
else
{
v___y_3412_ = v___y_3476_;
v___y_3413_ = v___y_3477_;
v___y_3414_ = v___y_3478_;
v___y_3415_ = v___y_3479_;
v___y_3416_ = v___y_3480_;
v___y_3417_ = v___y_3481_;
v___y_3418_ = v___y_3483_;
v___y_3419_ = v___y_3482_;
v___y_3420_ = v___y_3511_;
v___y_3421_ = v___y_3484_;
v___y_3422_ = v___y_3485_;
v___y_3423_ = v___y_3486_;
v___y_3424_ = v___y_3487_;
v___y_3425_ = v___y_3488_;
v___y_3426_ = v___y_3489_;
v___y_3427_ = v___y_3490_;
v___y_3428_ = v___y_3491_;
v___y_3429_ = v___y_3492_;
v___y_3430_ = v___y_3494_;
v___y_3431_ = v___y_3495_;
v___y_3432_ = v___y_3496_;
v___y_3433_ = v___y_3498_;
v___y_3434_ = v___y_3499_;
v___y_3435_ = v___y_3500_;
v___y_3436_ = v___y_3501_;
v___y_3437_ = v___y_3502_;
v___y_3438_ = v___y_3503_;
v___y_3439_ = v___y_3504_;
v___y_3440_ = v___y_3505_;
v___y_3441_ = v___y_3506_;
v___y_3442_ = v___y_3507_;
v___y_3443_ = v___y_3508_;
v___y_3444_ = v___y_3509_;
v___y_3445_ = v___y_3510_;
v___y_3446_ = v___y_3493_;
goto v___jp_3411_;
}
}
else
{
v___y_3412_ = v___y_3476_;
v___y_3413_ = v___y_3477_;
v___y_3414_ = v___y_3478_;
v___y_3415_ = v___y_3479_;
v___y_3416_ = v___y_3480_;
v___y_3417_ = v___y_3481_;
v___y_3418_ = v___y_3483_;
v___y_3419_ = v___y_3482_;
v___y_3420_ = v___y_3511_;
v___y_3421_ = v___y_3484_;
v___y_3422_ = v___y_3485_;
v___y_3423_ = v___y_3486_;
v___y_3424_ = v___y_3487_;
v___y_3425_ = v___y_3488_;
v___y_3426_ = v___y_3489_;
v___y_3427_ = v___y_3490_;
v___y_3428_ = v___y_3491_;
v___y_3429_ = v___y_3492_;
v___y_3430_ = v___y_3494_;
v___y_3431_ = v___y_3495_;
v___y_3432_ = v___y_3496_;
v___y_3433_ = v___y_3498_;
v___y_3434_ = v___y_3499_;
v___y_3435_ = v___y_3500_;
v___y_3436_ = v___y_3501_;
v___y_3437_ = v___y_3502_;
v___y_3438_ = v___y_3503_;
v___y_3439_ = v___y_3504_;
v___y_3440_ = v___y_3505_;
v___y_3441_ = v___y_3506_;
v___y_3442_ = v___y_3507_;
v___y_3443_ = v___y_3508_;
v___y_3444_ = v___y_3509_;
v___y_3445_ = v___y_3510_;
v___y_3446_ = v_isHEq_3340_;
goto v___jp_3411_;
}
}
v___jp_3512_:
{
lean_object* v___x_3535_; 
v___x_3535_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents(v___y_3524_, v___y_3525_, v___y_3526_, v___y_3527_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_);
if (lean_obj_tag(v___x_3535_) == 0)
{
lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; 
lean_dec_ref(v___x_3535_);
v___x_3536_ = lean_st_ref_get(v___y_3534_);
lean_dec(v___x_3536_);
v___x_3537_ = lean_st_ref_get(v___y_3525_);
v___x_3538_ = lean_st_ref_get(v___y_3534_);
lean_dec(v___x_3538_);
v___x_3539_ = lean_st_ref_get(v___y_3525_);
lean_inc_ref(v___y_3519_);
v___x_3540_ = l_Lean_Meta_Grind_Goal_getENode(v___x_3539_, v___y_3519_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_);
lean_dec(v___x_3539_);
if (lean_obj_tag(v___x_3540_) == 0)
{
lean_object* v_a_3541_; lean_object* v_self_3542_; lean_object* v_root_3543_; lean_object* v_congr_3544_; lean_object* v_target_x3f_3545_; lean_object* v_proof_x3f_3546_; uint8_t v_flipped_3547_; lean_object* v_size_3548_; uint8_t v_interpreted_3549_; uint8_t v_ctor_3550_; uint8_t v_hasLambdas_3551_; uint8_t v_heqProofs_3552_; lean_object* v_idx_3553_; lean_object* v_generation_3554_; lean_object* v_mt_3555_; lean_object* v_sTerms_3556_; uint8_t v_funCC_3557_; lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3585_; 
v_a_3541_ = lean_ctor_get(v___x_3540_, 0);
lean_inc(v_a_3541_);
lean_dec_ref(v___x_3540_);
v_self_3542_ = lean_ctor_get(v_a_3541_, 0);
v_root_3543_ = lean_ctor_get(v_a_3541_, 2);
v_congr_3544_ = lean_ctor_get(v_a_3541_, 3);
v_target_x3f_3545_ = lean_ctor_get(v_a_3541_, 4);
v_proof_x3f_3546_ = lean_ctor_get(v_a_3541_, 5);
v_flipped_3547_ = lean_ctor_get_uint8(v_a_3541_, sizeof(void*)*11);
v_size_3548_ = lean_ctor_get(v_a_3541_, 6);
v_interpreted_3549_ = lean_ctor_get_uint8(v_a_3541_, sizeof(void*)*11 + 1);
v_ctor_3550_ = lean_ctor_get_uint8(v_a_3541_, sizeof(void*)*11 + 2);
v_hasLambdas_3551_ = lean_ctor_get_uint8(v_a_3541_, sizeof(void*)*11 + 3);
v_heqProofs_3552_ = lean_ctor_get_uint8(v_a_3541_, sizeof(void*)*11 + 4);
v_idx_3553_ = lean_ctor_get(v_a_3541_, 7);
v_generation_3554_ = lean_ctor_get(v_a_3541_, 8);
v_mt_3555_ = lean_ctor_get(v_a_3541_, 9);
v_sTerms_3556_ = lean_ctor_get(v_a_3541_, 10);
v_funCC_3557_ = lean_ctor_get_uint8(v_a_3541_, sizeof(void*)*11 + 5);
v_isSharedCheck_3585_ = !lean_is_exclusive(v_a_3541_);
if (v_isSharedCheck_3585_ == 0)
{
lean_object* v_unused_3586_; 
v_unused_3586_ = lean_ctor_get(v_a_3541_, 1);
lean_dec(v_unused_3586_);
v___x_3559_ = v_a_3541_;
v_isShared_3560_ = v_isSharedCheck_3585_;
goto v_resetjp_3558_;
}
else
{
lean_inc(v_sTerms_3556_);
lean_inc(v_mt_3555_);
lean_inc(v_generation_3554_);
lean_inc(v_idx_3553_);
lean_inc(v_size_3548_);
lean_inc(v_proof_x3f_3546_);
lean_inc(v_target_x3f_3545_);
lean_inc(v_congr_3544_);
lean_inc(v_root_3543_);
lean_inc(v_self_3542_);
lean_dec(v_a_3541_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3585_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
lean_object* v_self_3561_; lean_object* v_next_3562_; lean_object* v_root_3563_; lean_object* v_congr_3564_; lean_object* v_target_x3f_3565_; lean_object* v_proof_x3f_3566_; uint8_t v_flipped_3567_; lean_object* v_size_3568_; uint8_t v_interpreted_3569_; uint8_t v_ctor_3570_; uint8_t v_hasLambdas_3571_; uint8_t v_heqProofs_3572_; lean_object* v_idx_3573_; lean_object* v_generation_3574_; lean_object* v_mt_3575_; lean_object* v_sTerms_3576_; uint8_t v_funCC_3577_; lean_object* v___x_3579_; 
v_self_3561_ = lean_ctor_get(v_rhsRoot_3346_, 0);
v_next_3562_ = lean_ctor_get(v_rhsRoot_3346_, 1);
v_root_3563_ = lean_ctor_get(v_rhsRoot_3346_, 2);
v_congr_3564_ = lean_ctor_get(v_rhsRoot_3346_, 3);
v_target_x3f_3565_ = lean_ctor_get(v_rhsRoot_3346_, 4);
v_proof_x3f_3566_ = lean_ctor_get(v_rhsRoot_3346_, 5);
v_flipped_3567_ = lean_ctor_get_uint8(v_rhsRoot_3346_, sizeof(void*)*11);
v_size_3568_ = lean_ctor_get(v_rhsRoot_3346_, 6);
v_interpreted_3569_ = lean_ctor_get_uint8(v_rhsRoot_3346_, sizeof(void*)*11 + 1);
v_ctor_3570_ = lean_ctor_get_uint8(v_rhsRoot_3346_, sizeof(void*)*11 + 2);
v_hasLambdas_3571_ = lean_ctor_get_uint8(v_rhsRoot_3346_, sizeof(void*)*11 + 3);
v_heqProofs_3572_ = lean_ctor_get_uint8(v_rhsRoot_3346_, sizeof(void*)*11 + 4);
v_idx_3573_ = lean_ctor_get(v_rhsRoot_3346_, 7);
v_generation_3574_ = lean_ctor_get(v_rhsRoot_3346_, 8);
v_mt_3575_ = lean_ctor_get(v_rhsRoot_3346_, 9);
v_sTerms_3576_ = lean_ctor_get(v_rhsRoot_3346_, 10);
v_funCC_3577_ = lean_ctor_get_uint8(v_rhsRoot_3346_, sizeof(void*)*11 + 5);
lean_inc_ref(v_next_3562_);
if (v_isShared_3560_ == 0)
{
lean_ctor_set(v___x_3559_, 1, v_next_3562_);
v___x_3579_ = v___x_3559_;
goto v_reusejp_3578_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(0, 11, 6);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_self_3542_);
lean_ctor_set(v_reuseFailAlloc_3584_, 1, v_next_3562_);
lean_ctor_set(v_reuseFailAlloc_3584_, 2, v_root_3543_);
lean_ctor_set(v_reuseFailAlloc_3584_, 3, v_congr_3544_);
lean_ctor_set(v_reuseFailAlloc_3584_, 4, v_target_x3f_3545_);
lean_ctor_set(v_reuseFailAlloc_3584_, 5, v_proof_x3f_3546_);
lean_ctor_set(v_reuseFailAlloc_3584_, 6, v_size_3548_);
lean_ctor_set(v_reuseFailAlloc_3584_, 7, v_idx_3553_);
lean_ctor_set(v_reuseFailAlloc_3584_, 8, v_generation_3554_);
lean_ctor_set(v_reuseFailAlloc_3584_, 9, v_mt_3555_);
lean_ctor_set(v_reuseFailAlloc_3584_, 10, v_sTerms_3556_);
lean_ctor_set_uint8(v_reuseFailAlloc_3584_, sizeof(void*)*11, v_flipped_3547_);
lean_ctor_set_uint8(v_reuseFailAlloc_3584_, sizeof(void*)*11 + 1, v_interpreted_3549_);
lean_ctor_set_uint8(v_reuseFailAlloc_3584_, sizeof(void*)*11 + 2, v_ctor_3550_);
lean_ctor_set_uint8(v_reuseFailAlloc_3584_, sizeof(void*)*11 + 3, v_hasLambdas_3551_);
lean_ctor_set_uint8(v_reuseFailAlloc_3584_, sizeof(void*)*11 + 4, v_heqProofs_3552_);
lean_ctor_set_uint8(v_reuseFailAlloc_3584_, sizeof(void*)*11 + 5, v_funCC_3557_);
v___x_3579_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3578_;
}
v_reusejp_3578_:
{
lean_object* v___x_3580_; 
v___x_3580_ = l_Lean_Meta_Grind_setENode___redArg(v___y_3517_, v___x_3579_, v___y_3525_, v___y_3534_);
if (lean_obj_tag(v___x_3580_) == 0)
{
uint8_t v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; 
lean_dec_ref(v___x_3580_);
v___x_3581_ = 0;
v___x_3582_ = l_Lean_Meta_Grind_Goal_getEqc(v___x_3537_, v_lhs_3341_, v___x_3581_);
lean_dec(v___x_3537_);
v___x_3583_ = lean_nat_add(v_size_3568_, v___y_3514_);
lean_dec(v___y_3514_);
if (v_hasLambdas_3571_ == 0)
{
lean_inc_ref(v_root_3563_);
lean_inc(v_generation_3574_);
lean_inc(v_proof_x3f_3566_);
lean_inc_ref(v_congr_3564_);
lean_inc_ref(v_self_3561_);
lean_inc(v_sTerms_3576_);
lean_inc(v_mt_3575_);
lean_inc(v_idx_3573_);
lean_inc(v_target_x3f_3565_);
v___y_3476_ = v_target_x3f_3565_;
v___y_3477_ = v_idx_3573_;
v___y_3478_ = v___y_3528_;
v___y_3479_ = v_mt_3575_;
v___y_3480_ = v___y_3529_;
v___y_3481_ = v___y_3523_;
v___y_3482_ = v_sTerms_3576_;
v___y_3483_ = v___y_3524_;
v___y_3484_ = v___y_3513_;
v___y_3485_ = v___x_3583_;
v___y_3486_ = v___y_3515_;
v___y_3487_ = v___y_3526_;
v___y_3488_ = v___x_3582_;
v___y_3489_ = v___y_3520_;
v___y_3490_ = v_self_3561_;
v___y_3491_ = v___y_3522_;
v___y_3492_ = v_funCC_3577_;
v___y_3493_ = v_heqProofs_3572_;
v___y_3494_ = v_ctor_3570_;
v___y_3495_ = v_flipped_3567_;
v___y_3496_ = v___y_3527_;
v___y_3497_ = v___y_3516_;
v___y_3498_ = v___y_3534_;
v___y_3499_ = v___y_3530_;
v___y_3500_ = v___y_3521_;
v___y_3501_ = v___y_3525_;
v___y_3502_ = v___y_3533_;
v___y_3503_ = v___y_3532_;
v___y_3504_ = v_congr_3564_;
v___y_3505_ = v_proof_x3f_3566_;
v___y_3506_ = v___y_3531_;
v___y_3507_ = v___y_3519_;
v___y_3508_ = v_generation_3574_;
v___y_3509_ = v_root_3563_;
v___y_3510_ = v_interpreted_3569_;
v___y_3511_ = v___y_3518_;
goto v___jp_3475_;
}
else
{
lean_inc_ref(v_root_3563_);
lean_inc(v_generation_3574_);
lean_inc(v_proof_x3f_3566_);
lean_inc_ref(v_congr_3564_);
lean_inc_ref(v_self_3561_);
lean_inc(v_sTerms_3576_);
lean_inc(v_mt_3575_);
lean_inc(v_idx_3573_);
lean_inc(v_target_x3f_3565_);
v___y_3476_ = v_target_x3f_3565_;
v___y_3477_ = v_idx_3573_;
v___y_3478_ = v___y_3528_;
v___y_3479_ = v_mt_3575_;
v___y_3480_ = v___y_3529_;
v___y_3481_ = v___y_3523_;
v___y_3482_ = v_sTerms_3576_;
v___y_3483_ = v___y_3524_;
v___y_3484_ = v___y_3513_;
v___y_3485_ = v___x_3583_;
v___y_3486_ = v___y_3515_;
v___y_3487_ = v___y_3526_;
v___y_3488_ = v___x_3582_;
v___y_3489_ = v___y_3520_;
v___y_3490_ = v_self_3561_;
v___y_3491_ = v___y_3522_;
v___y_3492_ = v_funCC_3577_;
v___y_3493_ = v_heqProofs_3572_;
v___y_3494_ = v_ctor_3570_;
v___y_3495_ = v_flipped_3567_;
v___y_3496_ = v___y_3527_;
v___y_3497_ = v___y_3516_;
v___y_3498_ = v___y_3534_;
v___y_3499_ = v___y_3530_;
v___y_3500_ = v___y_3521_;
v___y_3501_ = v___y_3525_;
v___y_3502_ = v___y_3533_;
v___y_3503_ = v___y_3532_;
v___y_3504_ = v_congr_3564_;
v___y_3505_ = v_proof_x3f_3566_;
v___y_3506_ = v___y_3531_;
v___y_3507_ = v___y_3519_;
v___y_3508_ = v_generation_3574_;
v___y_3509_ = v_root_3563_;
v___y_3510_ = v_interpreted_3569_;
v___y_3511_ = v_hasLambdas_3571_;
goto v___jp_3475_;
}
}
else
{
lean_dec(v___x_3537_);
lean_dec(v___y_3524_);
lean_dec_ref(v___y_3523_);
lean_dec_ref(v___y_3522_);
lean_dec_ref(v___y_3521_);
lean_dec_ref(v___y_3520_);
lean_dec_ref(v___y_3519_);
lean_dec_ref(v___y_3515_);
lean_dec(v___y_3514_);
lean_dec_ref(v___y_3513_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_lhs_3341_);
return v___x_3580_;
}
}
}
}
else
{
lean_object* v_a_3587_; lean_object* v___x_3589_; uint8_t v_isShared_3590_; uint8_t v_isSharedCheck_3594_; 
lean_dec(v___x_3537_);
lean_dec(v___y_3524_);
lean_dec_ref(v___y_3523_);
lean_dec_ref(v___y_3522_);
lean_dec_ref(v___y_3521_);
lean_dec_ref(v___y_3520_);
lean_dec_ref(v___y_3519_);
lean_dec_ref(v___y_3517_);
lean_dec_ref(v___y_3515_);
lean_dec(v___y_3514_);
lean_dec_ref(v___y_3513_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_lhs_3341_);
v_a_3587_ = lean_ctor_get(v___x_3540_, 0);
v_isSharedCheck_3594_ = !lean_is_exclusive(v___x_3540_);
if (v_isSharedCheck_3594_ == 0)
{
v___x_3589_ = v___x_3540_;
v_isShared_3590_ = v_isSharedCheck_3594_;
goto v_resetjp_3588_;
}
else
{
lean_inc(v_a_3587_);
lean_dec(v___x_3540_);
v___x_3589_ = lean_box(0);
v_isShared_3590_ = v_isSharedCheck_3594_;
goto v_resetjp_3588_;
}
v_resetjp_3588_:
{
lean_object* v___x_3592_; 
if (v_isShared_3590_ == 0)
{
v___x_3592_ = v___x_3589_;
goto v_reusejp_3591_;
}
else
{
lean_object* v_reuseFailAlloc_3593_; 
v_reuseFailAlloc_3593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3593_, 0, v_a_3587_);
v___x_3592_ = v_reuseFailAlloc_3593_;
goto v_reusejp_3591_;
}
v_reusejp_3591_:
{
return v___x_3592_;
}
}
}
}
else
{
lean_dec(v___y_3524_);
lean_dec_ref(v___y_3523_);
lean_dec_ref(v___y_3522_);
lean_dec_ref(v___y_3521_);
lean_dec_ref(v___y_3520_);
lean_dec_ref(v___y_3519_);
lean_dec_ref(v___y_3517_);
lean_dec_ref(v___y_3515_);
lean_dec(v___y_3514_);
lean_dec_ref(v___y_3513_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_lhs_3341_);
return v___x_3535_;
}
}
v___jp_3599_:
{
lean_object* v_self_3615_; lean_object* v_next_3616_; lean_object* v_size_3617_; uint8_t v_hasLambdas_3618_; uint8_t v_heqProofs_3619_; lean_object* v___x_3620_; 
v_self_3615_ = lean_ctor_get(v_lhsRoot_3345_, 0);
v_next_3616_ = lean_ctor_get(v_lhsRoot_3345_, 1);
v_size_3617_ = lean_ctor_get(v_lhsRoot_3345_, 6);
v_hasLambdas_3618_ = lean_ctor_get_uint8(v_lhsRoot_3345_, sizeof(void*)*11 + 3);
v_heqProofs_3619_ = lean_ctor_get_uint8(v_lhsRoot_3345_, sizeof(void*)*11 + 4);
v___x_3620_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents(v_self_3615_, v___y_3605_, v___y_3606_, v___y_3607_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_, v___y_3612_, v___y_3613_, v___y_3614_);
if (lean_obj_tag(v___x_3620_) == 0)
{
lean_object* v_a_3621_; lean_object* v_root_3622_; lean_object* v___x_3623_; 
v_a_3621_ = lean_ctor_get(v___x_3620_, 0);
lean_inc(v_a_3621_);
lean_dec_ref(v___x_3620_);
v_root_3622_ = lean_ctor_get(v_rhsNode_3344_, 2);
lean_inc_ref_n(v_root_3622_, 2);
lean_dec_ref(v_rhsNode_3344_);
lean_inc_ref(v_lhs_3341_);
v___x_3623_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots(v_lhs_3341_, v_root_3622_, v___y_3605_, v___y_3606_, v___y_3607_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_, v___y_3612_, v___y_3613_, v___y_3614_);
if (lean_obj_tag(v___x_3623_) == 0)
{
lean_object* v_options_3624_; uint8_t v_hasTrace_3625_; 
lean_dec_ref(v___x_3623_);
v_options_3624_ = lean_ctor_get(v___y_3613_, 2);
v_hasTrace_3625_ = lean_ctor_get_uint8(v_options_3624_, sizeof(void*)*1);
if (v_hasTrace_3625_ == 0)
{
lean_inc_ref(v_next_3616_);
lean_inc_ref(v_self_3615_);
lean_inc(v_size_3617_);
v___y_3513_ = v___y_3600_;
v___y_3514_ = v_size_3617_;
v___y_3515_ = v_root_3622_;
v___y_3516_ = v_heqProofs_3619_;
v___y_3517_ = v___y_3601_;
v___y_3518_ = v_hasLambdas_3618_;
v___y_3519_ = v_self_3615_;
v___y_3520_ = v___y_3602_;
v___y_3521_ = v_fns_u2082_3604_;
v___y_3522_ = v___y_3603_;
v___y_3523_ = v_next_3616_;
v___y_3524_ = v_a_3621_;
v___y_3525_ = v___y_3605_;
v___y_3526_ = v___y_3606_;
v___y_3527_ = v___y_3607_;
v___y_3528_ = v___y_3608_;
v___y_3529_ = v___y_3609_;
v___y_3530_ = v___y_3610_;
v___y_3531_ = v___y_3611_;
v___y_3532_ = v___y_3612_;
v___y_3533_ = v___y_3613_;
v___y_3534_ = v___y_3614_;
goto v___jp_3512_;
}
else
{
lean_object* v_inheritedTraceOptions_3626_; lean_object* v___x_3627_; uint8_t v___x_3628_; 
v_inheritedTraceOptions_3626_ = lean_ctor_get(v___y_3613_, 13);
v___x_3627_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1);
v___x_3628_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3626_, v_options_3624_, v___x_3627_);
if (v___x_3628_ == 0)
{
lean_inc_ref(v_next_3616_);
lean_inc_ref(v_self_3615_);
lean_inc(v_size_3617_);
v___y_3513_ = v___y_3600_;
v___y_3514_ = v_size_3617_;
v___y_3515_ = v_root_3622_;
v___y_3516_ = v_heqProofs_3619_;
v___y_3517_ = v___y_3601_;
v___y_3518_ = v_hasLambdas_3618_;
v___y_3519_ = v_self_3615_;
v___y_3520_ = v___y_3602_;
v___y_3521_ = v_fns_u2082_3604_;
v___y_3522_ = v___y_3603_;
v___y_3523_ = v_next_3616_;
v___y_3524_ = v_a_3621_;
v___y_3525_ = v___y_3605_;
v___y_3526_ = v___y_3606_;
v___y_3527_ = v___y_3607_;
v___y_3528_ = v___y_3608_;
v___y_3529_ = v___y_3609_;
v___y_3530_ = v___y_3610_;
v___y_3531_ = v___y_3611_;
v___y_3532_ = v___y_3612_;
v___y_3533_ = v___y_3613_;
v___y_3534_ = v___y_3614_;
goto v___jp_3512_;
}
else
{
lean_object* v___x_3629_; 
v___x_3629_ = l_Lean_Meta_Grind_updateLastTag(v___y_3605_, v___y_3606_, v___y_3607_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_, v___y_3612_, v___y_3613_, v___y_3614_);
if (lean_obj_tag(v___x_3629_) == 0)
{
lean_object* v___x_3630_; 
lean_dec_ref(v___x_3629_);
lean_inc_ref(v_lhs_3341_);
v___x_3630_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_lhs_3341_, v___y_3605_, v___y_3611_, v___y_3612_, v___y_3613_, v___y_3614_);
if (lean_obj_tag(v___x_3630_) == 0)
{
lean_object* v_a_3631_; lean_object* v___x_3632_; 
v_a_3631_ = lean_ctor_get(v___x_3630_, 0);
lean_inc(v_a_3631_);
lean_dec_ref(v___x_3630_);
lean_inc_ref(v_root_3622_);
v___x_3632_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_root_3622_, v___y_3605_, v___y_3611_, v___y_3612_, v___y_3613_, v___y_3614_);
if (lean_obj_tag(v___x_3632_) == 0)
{
lean_object* v_a_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
v_a_3633_ = lean_ctor_get(v___x_3632_, 0);
lean_inc(v_a_3633_);
lean_dec_ref(v___x_3632_);
v___x_3634_ = lean_st_ref_get(v___y_3614_);
lean_dec(v___x_3634_);
v___x_3635_ = lean_st_ref_get(v___y_3605_);
lean_inc_ref(v_lhs_3341_);
v___x_3636_ = l_Lean_Meta_Grind_Goal_getRoot(v___x_3635_, v_lhs_3341_, v___y_3611_, v___y_3612_, v___y_3613_, v___y_3614_);
lean_dec(v___x_3635_);
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3637_; lean_object* v___x_3638_; 
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
lean_inc(v_a_3637_);
lean_dec_ref(v___x_3636_);
v___x_3638_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_a_3637_, v___y_3605_, v___y_3611_, v___y_3612_, v___y_3613_, v___y_3614_);
if (lean_obj_tag(v___x_3638_) == 0)
{
lean_object* v_a_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; 
v_a_3639_ = lean_ctor_get(v___x_3638_, 0);
lean_inc(v_a_3639_);
lean_dec_ref(v___x_3638_);
v___x_3640_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3);
v___x_3641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3641_, 0, v_a_3631_);
lean_ctor_set(v___x_3641_, 1, v___x_3640_);
v___x_3642_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3642_, 0, v___x_3641_);
lean_ctor_set(v___x_3642_, 1, v_a_3633_);
v___x_3643_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5);
v___x_3644_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3644_, 0, v___x_3642_);
lean_ctor_set(v___x_3644_, 1, v___x_3643_);
v___x_3645_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3645_, 0, v___x_3644_);
lean_ctor_set(v___x_3645_, 1, v_a_3639_);
v___x_3646_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v_cls_3598_, v___x_3645_, v___y_3611_, v___y_3612_, v___y_3613_, v___y_3614_);
if (lean_obj_tag(v___x_3646_) == 0)
{
lean_dec_ref(v___x_3646_);
lean_inc_ref(v_next_3616_);
lean_inc_ref(v_self_3615_);
lean_inc(v_size_3617_);
v___y_3513_ = v___y_3600_;
v___y_3514_ = v_size_3617_;
v___y_3515_ = v_root_3622_;
v___y_3516_ = v_heqProofs_3619_;
v___y_3517_ = v___y_3601_;
v___y_3518_ = v_hasLambdas_3618_;
v___y_3519_ = v_self_3615_;
v___y_3520_ = v___y_3602_;
v___y_3521_ = v_fns_u2082_3604_;
v___y_3522_ = v___y_3603_;
v___y_3523_ = v_next_3616_;
v___y_3524_ = v_a_3621_;
v___y_3525_ = v___y_3605_;
v___y_3526_ = v___y_3606_;
v___y_3527_ = v___y_3607_;
v___y_3528_ = v___y_3608_;
v___y_3529_ = v___y_3609_;
v___y_3530_ = v___y_3610_;
v___y_3531_ = v___y_3611_;
v___y_3532_ = v___y_3612_;
v___y_3533_ = v___y_3613_;
v___y_3534_ = v___y_3614_;
goto v___jp_3512_;
}
else
{
lean_dec_ref(v_root_3622_);
lean_dec(v_a_3621_);
lean_dec_ref(v_fns_u2082_3604_);
lean_dec_ref(v___y_3603_);
lean_dec_ref(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec_ref(v___y_3600_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_lhs_3341_);
return v___x_3646_;
}
}
else
{
lean_object* v_a_3647_; lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3654_; 
lean_dec(v_a_3633_);
lean_dec(v_a_3631_);
lean_dec_ref(v_root_3622_);
lean_dec(v_a_3621_);
lean_dec_ref(v_fns_u2082_3604_);
lean_dec_ref(v___y_3603_);
lean_dec_ref(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec_ref(v___y_3600_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_lhs_3341_);
v_a_3647_ = lean_ctor_get(v___x_3638_, 0);
v_isSharedCheck_3654_ = !lean_is_exclusive(v___x_3638_);
if (v_isSharedCheck_3654_ == 0)
{
v___x_3649_ = v___x_3638_;
v_isShared_3650_ = v_isSharedCheck_3654_;
goto v_resetjp_3648_;
}
else
{
lean_inc(v_a_3647_);
lean_dec(v___x_3638_);
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
else
{
lean_object* v_a_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3662_; 
lean_dec(v_a_3633_);
lean_dec(v_a_3631_);
lean_dec_ref(v_root_3622_);
lean_dec(v_a_3621_);
lean_dec_ref(v_fns_u2082_3604_);
lean_dec_ref(v___y_3603_);
lean_dec_ref(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec_ref(v___y_3600_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_lhs_3341_);
v_a_3655_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3662_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3662_ == 0)
{
v___x_3657_ = v___x_3636_;
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_a_3655_);
lean_dec(v___x_3636_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3660_; 
if (v_isShared_3658_ == 0)
{
v___x_3660_ = v___x_3657_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v_a_3655_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
return v___x_3660_;
}
}
}
}
else
{
lean_object* v_a_3663_; lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3670_; 
lean_dec(v_a_3631_);
lean_dec_ref(v_root_3622_);
lean_dec(v_a_3621_);
lean_dec_ref(v_fns_u2082_3604_);
lean_dec_ref(v___y_3603_);
lean_dec_ref(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec_ref(v___y_3600_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_lhs_3341_);
v_a_3663_ = lean_ctor_get(v___x_3632_, 0);
v_isSharedCheck_3670_ = !lean_is_exclusive(v___x_3632_);
if (v_isSharedCheck_3670_ == 0)
{
v___x_3665_ = v___x_3632_;
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
else
{
lean_inc(v_a_3663_);
lean_dec(v___x_3632_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v___x_3668_; 
if (v_isShared_3666_ == 0)
{
v___x_3668_ = v___x_3665_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v_a_3663_);
v___x_3668_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
return v___x_3668_;
}
}
}
}
else
{
lean_object* v_a_3671_; lean_object* v___x_3673_; uint8_t v_isShared_3674_; uint8_t v_isSharedCheck_3678_; 
lean_dec_ref(v_root_3622_);
lean_dec(v_a_3621_);
lean_dec_ref(v_fns_u2082_3604_);
lean_dec_ref(v___y_3603_);
lean_dec_ref(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec_ref(v___y_3600_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_lhs_3341_);
v_a_3671_ = lean_ctor_get(v___x_3630_, 0);
v_isSharedCheck_3678_ = !lean_is_exclusive(v___x_3630_);
if (v_isSharedCheck_3678_ == 0)
{
v___x_3673_ = v___x_3630_;
v_isShared_3674_ = v_isSharedCheck_3678_;
goto v_resetjp_3672_;
}
else
{
lean_inc(v_a_3671_);
lean_dec(v___x_3630_);
v___x_3673_ = lean_box(0);
v_isShared_3674_ = v_isSharedCheck_3678_;
goto v_resetjp_3672_;
}
v_resetjp_3672_:
{
lean_object* v___x_3676_; 
if (v_isShared_3674_ == 0)
{
v___x_3676_ = v___x_3673_;
goto v_reusejp_3675_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v_a_3671_);
v___x_3676_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3675_;
}
v_reusejp_3675_:
{
return v___x_3676_;
}
}
}
}
else
{
lean_dec_ref(v_root_3622_);
lean_dec(v_a_3621_);
lean_dec_ref(v_fns_u2082_3604_);
lean_dec_ref(v___y_3603_);
lean_dec_ref(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec_ref(v___y_3600_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_lhs_3341_);
return v___x_3629_;
}
}
}
}
else
{
lean_dec_ref(v_root_3622_);
lean_dec(v_a_3621_);
lean_dec_ref(v_fns_u2082_3604_);
lean_dec_ref(v___y_3603_);
lean_dec_ref(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec_ref(v___y_3600_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_lhs_3341_);
return v___x_3623_;
}
}
else
{
lean_object* v_a_3679_; lean_object* v___x_3681_; uint8_t v_isShared_3682_; uint8_t v_isSharedCheck_3686_; 
lean_dec_ref(v_fns_u2082_3604_);
lean_dec_ref(v___y_3603_);
lean_dec_ref(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec_ref(v___y_3600_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_rhsNode_3344_);
lean_dec_ref(v_lhs_3341_);
v_a_3679_ = lean_ctor_get(v___x_3620_, 0);
v_isSharedCheck_3686_ = !lean_is_exclusive(v___x_3620_);
if (v_isSharedCheck_3686_ == 0)
{
v___x_3681_ = v___x_3620_;
v_isShared_3682_ = v_isSharedCheck_3686_;
goto v_resetjp_3680_;
}
else
{
lean_inc(v_a_3679_);
lean_dec(v___x_3620_);
v___x_3681_ = lean_box(0);
v_isShared_3682_ = v_isSharedCheck_3686_;
goto v_resetjp_3680_;
}
v_resetjp_3680_:
{
lean_object* v___x_3684_; 
if (v_isShared_3682_ == 0)
{
v___x_3684_ = v___x_3681_;
goto v_reusejp_3683_;
}
else
{
lean_object* v_reuseFailAlloc_3685_; 
v_reuseFailAlloc_3685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3685_, 0, v_a_3679_);
v___x_3684_ = v_reuseFailAlloc_3685_;
goto v_reusejp_3683_;
}
v_reusejp_3683_:
{
return v___x_3684_;
}
}
}
}
v___jp_3687_:
{
lean_object* v___x_3702_; lean_object* v___x_3703_; uint8_t v___x_3704_; 
v___x_3702_ = lean_array_get_size(v___y_3690_);
v___x_3703_ = lean_unsigned_to_nat(0u);
v___x_3704_ = lean_nat_dec_eq(v___x_3702_, v___x_3703_);
if (v___x_3704_ == 0)
{
lean_object* v_self_3705_; lean_object* v___x_3706_; 
v_self_3705_ = lean_ctor_get(v_lhsRoot_3345_, 0);
lean_inc_ref(v_self_3705_);
v___x_3706_ = l_Lean_Meta_Grind_getFnRoots(v_self_3705_, v___y_3692_, v___y_3693_, v___y_3694_, v___y_3695_, v___y_3696_, v___y_3697_, v___y_3698_, v___y_3699_, v___y_3700_, v___y_3701_);
if (lean_obj_tag(v___x_3706_) == 0)
{
lean_object* v_a_3707_; 
v_a_3707_ = lean_ctor_get(v___x_3706_, 0);
lean_inc(v_a_3707_);
lean_dec_ref(v___x_3706_);
v___y_3600_ = v___y_3688_;
v___y_3601_ = v___y_3689_;
v___y_3602_ = v___y_3690_;
v___y_3603_ = v_fns_u2081_3691_;
v_fns_u2082_3604_ = v_a_3707_;
v___y_3605_ = v___y_3692_;
v___y_3606_ = v___y_3693_;
v___y_3607_ = v___y_3694_;
v___y_3608_ = v___y_3695_;
v___y_3609_ = v___y_3696_;
v___y_3610_ = v___y_3697_;
v___y_3611_ = v___y_3698_;
v___y_3612_ = v___y_3699_;
v___y_3613_ = v___y_3700_;
v___y_3614_ = v___y_3701_;
goto v___jp_3599_;
}
else
{
lean_object* v_a_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3715_; 
lean_dec_ref(v_fns_u2081_3691_);
lean_dec_ref(v___y_3690_);
lean_dec_ref(v___y_3689_);
lean_dec_ref(v___y_3688_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_rhsNode_3344_);
lean_dec_ref(v_lhs_3341_);
v_a_3708_ = lean_ctor_get(v___x_3706_, 0);
v_isSharedCheck_3715_ = !lean_is_exclusive(v___x_3706_);
if (v_isSharedCheck_3715_ == 0)
{
v___x_3710_ = v___x_3706_;
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_a_3708_);
lean_dec(v___x_3706_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
lean_object* v___x_3713_; 
if (v_isShared_3711_ == 0)
{
v___x_3713_ = v___x_3710_;
goto v_reusejp_3712_;
}
else
{
lean_object* v_reuseFailAlloc_3714_; 
v_reuseFailAlloc_3714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3714_, 0, v_a_3708_);
v___x_3713_ = v_reuseFailAlloc_3714_;
goto v_reusejp_3712_;
}
v_reusejp_3712_:
{
return v___x_3713_;
}
}
}
}
else
{
lean_object* v___x_3716_; 
v___x_3716_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0);
v___y_3600_ = v___y_3688_;
v___y_3601_ = v___y_3689_;
v___y_3602_ = v___y_3690_;
v___y_3603_ = v_fns_u2081_3691_;
v_fns_u2082_3604_ = v___x_3716_;
v___y_3605_ = v___y_3692_;
v___y_3606_ = v___y_3693_;
v___y_3607_ = v___y_3694_;
v___y_3608_ = v___y_3695_;
v___y_3609_ = v___y_3696_;
v___y_3610_ = v___y_3697_;
v___y_3611_ = v___y_3698_;
v___y_3612_ = v___y_3699_;
v___y_3613_ = v___y_3700_;
v___y_3614_ = v___y_3701_;
goto v___jp_3599_;
}
}
v___jp_3717_:
{
lean_object* v___x_3728_; 
lean_inc_ref(v_lhs_3341_);
v___x_3728_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg(v_lhs_3341_, v___y_3718_, v___y_3724_, v___y_3725_, v___y_3726_, v___y_3727_);
if (lean_obj_tag(v___x_3728_) == 0)
{
lean_object* v___x_3730_; uint8_t v_isShared_3731_; uint8_t v_isSharedCheck_3795_; 
v_isSharedCheck_3795_ = !lean_is_exclusive(v___x_3728_);
if (v_isSharedCheck_3795_ == 0)
{
lean_object* v_unused_3796_; 
v_unused_3796_ = lean_ctor_get(v___x_3728_, 0);
lean_dec(v_unused_3796_);
v___x_3730_ = v___x_3728_;
v_isShared_3731_ = v_isSharedCheck_3795_;
goto v_resetjp_3729_;
}
else
{
lean_dec(v___x_3728_);
v___x_3730_ = lean_box(0);
v_isShared_3731_ = v_isSharedCheck_3795_;
goto v_resetjp_3729_;
}
v_resetjp_3729_:
{
lean_object* v_self_3732_; lean_object* v_next_3733_; lean_object* v_root_3734_; lean_object* v_congr_3735_; lean_object* v_size_3736_; uint8_t v_interpreted_3737_; uint8_t v_ctor_3738_; uint8_t v_hasLambdas_3739_; uint8_t v_heqProofs_3740_; lean_object* v_idx_3741_; lean_object* v_generation_3742_; lean_object* v_mt_3743_; lean_object* v_sTerms_3744_; uint8_t v_funCC_3745_; lean_object* v___x_3747_; uint8_t v_isShared_3748_; uint8_t v_isSharedCheck_3792_; 
v_self_3732_ = lean_ctor_get(v_lhsNode_3343_, 0);
v_next_3733_ = lean_ctor_get(v_lhsNode_3343_, 1);
v_root_3734_ = lean_ctor_get(v_lhsNode_3343_, 2);
v_congr_3735_ = lean_ctor_get(v_lhsNode_3343_, 3);
v_size_3736_ = lean_ctor_get(v_lhsNode_3343_, 6);
v_interpreted_3737_ = lean_ctor_get_uint8(v_lhsNode_3343_, sizeof(void*)*11 + 1);
v_ctor_3738_ = lean_ctor_get_uint8(v_lhsNode_3343_, sizeof(void*)*11 + 2);
v_hasLambdas_3739_ = lean_ctor_get_uint8(v_lhsNode_3343_, sizeof(void*)*11 + 3);
v_heqProofs_3740_ = lean_ctor_get_uint8(v_lhsNode_3343_, sizeof(void*)*11 + 4);
v_idx_3741_ = lean_ctor_get(v_lhsNode_3343_, 7);
v_generation_3742_ = lean_ctor_get(v_lhsNode_3343_, 8);
v_mt_3743_ = lean_ctor_get(v_lhsNode_3343_, 9);
v_sTerms_3744_ = lean_ctor_get(v_lhsNode_3343_, 10);
v_funCC_3745_ = lean_ctor_get_uint8(v_lhsNode_3343_, sizeof(void*)*11 + 5);
v_isSharedCheck_3792_ = !lean_is_exclusive(v_lhsNode_3343_);
if (v_isSharedCheck_3792_ == 0)
{
lean_object* v_unused_3793_; lean_object* v_unused_3794_; 
v_unused_3793_ = lean_ctor_get(v_lhsNode_3343_, 5);
lean_dec(v_unused_3793_);
v_unused_3794_ = lean_ctor_get(v_lhsNode_3343_, 4);
lean_dec(v_unused_3794_);
v___x_3747_ = v_lhsNode_3343_;
v_isShared_3748_ = v_isSharedCheck_3792_;
goto v_resetjp_3746_;
}
else
{
lean_inc(v_sTerms_3744_);
lean_inc(v_mt_3743_);
lean_inc(v_generation_3742_);
lean_inc(v_idx_3741_);
lean_inc(v_size_3736_);
lean_inc(v_congr_3735_);
lean_inc(v_root_3734_);
lean_inc(v_next_3733_);
lean_inc(v_self_3732_);
lean_dec(v_lhsNode_3343_);
v___x_3747_ = lean_box(0);
v_isShared_3748_ = v_isSharedCheck_3792_;
goto v_resetjp_3746_;
}
v_resetjp_3746_:
{
lean_object* v___x_3750_; 
if (v_isShared_3731_ == 0)
{
lean_ctor_set_tag(v___x_3730_, 1);
lean_ctor_set(v___x_3730_, 0, v_rhs_3342_);
v___x_3750_ = v___x_3730_;
goto v_reusejp_3749_;
}
else
{
lean_object* v_reuseFailAlloc_3791_; 
v_reuseFailAlloc_3791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3791_, 0, v_rhs_3342_);
v___x_3750_ = v_reuseFailAlloc_3791_;
goto v_reusejp_3749_;
}
v_reusejp_3749_:
{
lean_object* v___x_3751_; lean_object* v___x_3753_; 
v___x_3751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3751_, 0, v_proof_3339_);
lean_inc_ref(v_root_3734_);
if (v_isShared_3748_ == 0)
{
lean_ctor_set(v___x_3747_, 5, v___x_3751_);
lean_ctor_set(v___x_3747_, 4, v___x_3750_);
v___x_3753_ = v___x_3747_;
goto v_reusejp_3752_;
}
else
{
lean_object* v_reuseFailAlloc_3790_; 
v_reuseFailAlloc_3790_ = lean_alloc_ctor(0, 11, 6);
lean_ctor_set(v_reuseFailAlloc_3790_, 0, v_self_3732_);
lean_ctor_set(v_reuseFailAlloc_3790_, 1, v_next_3733_);
lean_ctor_set(v_reuseFailAlloc_3790_, 2, v_root_3734_);
lean_ctor_set(v_reuseFailAlloc_3790_, 3, v_congr_3735_);
lean_ctor_set(v_reuseFailAlloc_3790_, 4, v___x_3750_);
lean_ctor_set(v_reuseFailAlloc_3790_, 5, v___x_3751_);
lean_ctor_set(v_reuseFailAlloc_3790_, 6, v_size_3736_);
lean_ctor_set(v_reuseFailAlloc_3790_, 7, v_idx_3741_);
lean_ctor_set(v_reuseFailAlloc_3790_, 8, v_generation_3742_);
lean_ctor_set(v_reuseFailAlloc_3790_, 9, v_mt_3743_);
lean_ctor_set(v_reuseFailAlloc_3790_, 10, v_sTerms_3744_);
lean_ctor_set_uint8(v_reuseFailAlloc_3790_, sizeof(void*)*11 + 1, v_interpreted_3737_);
lean_ctor_set_uint8(v_reuseFailAlloc_3790_, sizeof(void*)*11 + 2, v_ctor_3738_);
lean_ctor_set_uint8(v_reuseFailAlloc_3790_, sizeof(void*)*11 + 3, v_hasLambdas_3739_);
lean_ctor_set_uint8(v_reuseFailAlloc_3790_, sizeof(void*)*11 + 4, v_heqProofs_3740_);
lean_ctor_set_uint8(v_reuseFailAlloc_3790_, sizeof(void*)*11 + 5, v_funCC_3745_);
v___x_3753_ = v_reuseFailAlloc_3790_;
goto v_reusejp_3752_;
}
v_reusejp_3752_:
{
lean_object* v___x_3754_; 
lean_ctor_set_uint8(v___x_3753_, sizeof(void*)*11, v_flipped_3347_);
lean_inc_ref(v_lhs_3341_);
v___x_3754_ = l_Lean_Meta_Grind_setENode___redArg(v_lhs_3341_, v___x_3753_, v___y_3718_, v___y_3727_);
if (lean_obj_tag(v___x_3754_) == 0)
{
lean_object* v___x_3755_; 
lean_dec_ref(v___x_3754_);
v___x_3755_ = l_Lean_Meta_Grind_getEqcLambdas(v_lhsRoot_3345_, v___y_3718_, v___y_3719_, v___y_3720_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_, v___y_3727_);
if (lean_obj_tag(v___x_3755_) == 0)
{
lean_object* v_a_3756_; lean_object* v___x_3757_; 
v_a_3756_ = lean_ctor_get(v___x_3755_, 0);
lean_inc(v_a_3756_);
lean_dec_ref(v___x_3755_);
v___x_3757_ = l_Lean_Meta_Grind_getEqcLambdas(v_rhsRoot_3346_, v___y_3718_, v___y_3719_, v___y_3720_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_, v___y_3727_);
if (lean_obj_tag(v___x_3757_) == 0)
{
lean_object* v_a_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; uint8_t v___x_3761_; 
v_a_3758_ = lean_ctor_get(v___x_3757_, 0);
lean_inc(v_a_3758_);
lean_dec_ref(v___x_3757_);
v___x_3759_ = lean_array_get_size(v_a_3756_);
v___x_3760_ = lean_unsigned_to_nat(0u);
v___x_3761_ = lean_nat_dec_eq(v___x_3759_, v___x_3760_);
if (v___x_3761_ == 0)
{
lean_object* v_self_3762_; lean_object* v___x_3763_; 
v_self_3762_ = lean_ctor_get(v_rhsRoot_3346_, 0);
lean_inc_ref(v_self_3762_);
v___x_3763_ = l_Lean_Meta_Grind_getFnRoots(v_self_3762_, v___y_3718_, v___y_3719_, v___y_3720_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_, v___y_3727_);
if (lean_obj_tag(v___x_3763_) == 0)
{
lean_object* v_a_3764_; 
v_a_3764_ = lean_ctor_get(v___x_3763_, 0);
lean_inc(v_a_3764_);
lean_dec_ref(v___x_3763_);
v___y_3688_ = v_a_3756_;
v___y_3689_ = v_root_3734_;
v___y_3690_ = v_a_3758_;
v_fns_u2081_3691_ = v_a_3764_;
v___y_3692_ = v___y_3718_;
v___y_3693_ = v___y_3719_;
v___y_3694_ = v___y_3720_;
v___y_3695_ = v___y_3721_;
v___y_3696_ = v___y_3722_;
v___y_3697_ = v___y_3723_;
v___y_3698_ = v___y_3724_;
v___y_3699_ = v___y_3725_;
v___y_3700_ = v___y_3726_;
v___y_3701_ = v___y_3727_;
goto v___jp_3687_;
}
else
{
lean_object* v_a_3765_; lean_object* v___x_3767_; uint8_t v_isShared_3768_; uint8_t v_isSharedCheck_3772_; 
lean_dec(v_a_3758_);
lean_dec(v_a_3756_);
lean_dec_ref(v_root_3734_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_rhsNode_3344_);
lean_dec_ref(v_lhs_3341_);
v_a_3765_ = lean_ctor_get(v___x_3763_, 0);
v_isSharedCheck_3772_ = !lean_is_exclusive(v___x_3763_);
if (v_isSharedCheck_3772_ == 0)
{
v___x_3767_ = v___x_3763_;
v_isShared_3768_ = v_isSharedCheck_3772_;
goto v_resetjp_3766_;
}
else
{
lean_inc(v_a_3765_);
lean_dec(v___x_3763_);
v___x_3767_ = lean_box(0);
v_isShared_3768_ = v_isSharedCheck_3772_;
goto v_resetjp_3766_;
}
v_resetjp_3766_:
{
lean_object* v___x_3770_; 
if (v_isShared_3768_ == 0)
{
v___x_3770_ = v___x_3767_;
goto v_reusejp_3769_;
}
else
{
lean_object* v_reuseFailAlloc_3771_; 
v_reuseFailAlloc_3771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3771_, 0, v_a_3765_);
v___x_3770_ = v_reuseFailAlloc_3771_;
goto v_reusejp_3769_;
}
v_reusejp_3769_:
{
return v___x_3770_;
}
}
}
}
else
{
lean_object* v___x_3773_; 
v___x_3773_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0);
v___y_3688_ = v_a_3756_;
v___y_3689_ = v_root_3734_;
v___y_3690_ = v_a_3758_;
v_fns_u2081_3691_ = v___x_3773_;
v___y_3692_ = v___y_3718_;
v___y_3693_ = v___y_3719_;
v___y_3694_ = v___y_3720_;
v___y_3695_ = v___y_3721_;
v___y_3696_ = v___y_3722_;
v___y_3697_ = v___y_3723_;
v___y_3698_ = v___y_3724_;
v___y_3699_ = v___y_3725_;
v___y_3700_ = v___y_3726_;
v___y_3701_ = v___y_3727_;
goto v___jp_3687_;
}
}
else
{
lean_object* v_a_3774_; lean_object* v___x_3776_; uint8_t v_isShared_3777_; uint8_t v_isSharedCheck_3781_; 
lean_dec(v_a_3756_);
lean_dec_ref(v_root_3734_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_rhsNode_3344_);
lean_dec_ref(v_lhs_3341_);
v_a_3774_ = lean_ctor_get(v___x_3757_, 0);
v_isSharedCheck_3781_ = !lean_is_exclusive(v___x_3757_);
if (v_isSharedCheck_3781_ == 0)
{
v___x_3776_ = v___x_3757_;
v_isShared_3777_ = v_isSharedCheck_3781_;
goto v_resetjp_3775_;
}
else
{
lean_inc(v_a_3774_);
lean_dec(v___x_3757_);
v___x_3776_ = lean_box(0);
v_isShared_3777_ = v_isSharedCheck_3781_;
goto v_resetjp_3775_;
}
v_resetjp_3775_:
{
lean_object* v___x_3779_; 
if (v_isShared_3777_ == 0)
{
v___x_3779_ = v___x_3776_;
goto v_reusejp_3778_;
}
else
{
lean_object* v_reuseFailAlloc_3780_; 
v_reuseFailAlloc_3780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3780_, 0, v_a_3774_);
v___x_3779_ = v_reuseFailAlloc_3780_;
goto v_reusejp_3778_;
}
v_reusejp_3778_:
{
return v___x_3779_;
}
}
}
}
else
{
lean_object* v_a_3782_; lean_object* v___x_3784_; uint8_t v_isShared_3785_; uint8_t v_isSharedCheck_3789_; 
lean_dec_ref(v_root_3734_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_rhsNode_3344_);
lean_dec_ref(v_lhs_3341_);
v_a_3782_ = lean_ctor_get(v___x_3755_, 0);
v_isSharedCheck_3789_ = !lean_is_exclusive(v___x_3755_);
if (v_isSharedCheck_3789_ == 0)
{
v___x_3784_ = v___x_3755_;
v_isShared_3785_ = v_isSharedCheck_3789_;
goto v_resetjp_3783_;
}
else
{
lean_inc(v_a_3782_);
lean_dec(v___x_3755_);
v___x_3784_ = lean_box(0);
v_isShared_3785_ = v_isSharedCheck_3789_;
goto v_resetjp_3783_;
}
v_resetjp_3783_:
{
lean_object* v___x_3787_; 
if (v_isShared_3785_ == 0)
{
v___x_3787_ = v___x_3784_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3788_; 
v_reuseFailAlloc_3788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3788_, 0, v_a_3782_);
v___x_3787_ = v_reuseFailAlloc_3788_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
return v___x_3787_;
}
}
}
}
else
{
lean_dec_ref(v_root_3734_);
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_rhsNode_3344_);
lean_dec_ref(v_lhs_3341_);
return v___x_3754_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_rhsRoot_3346_);
lean_dec_ref(v_lhsRoot_3345_);
lean_dec_ref(v_rhsNode_3344_);
lean_dec_ref(v_lhsNode_3343_);
lean_dec_ref(v_rhs_3342_);
lean_dec_ref(v_lhs_3341_);
lean_dec_ref(v_proof_3339_);
return v___x_3728_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___boxed(lean_object** _args){
lean_object* v_proof_3826_ = _args[0];
lean_object* v_isHEq_3827_ = _args[1];
lean_object* v_lhs_3828_ = _args[2];
lean_object* v_rhs_3829_ = _args[3];
lean_object* v_lhsNode_3830_ = _args[4];
lean_object* v_rhsNode_3831_ = _args[5];
lean_object* v_lhsRoot_3832_ = _args[6];
lean_object* v_rhsRoot_3833_ = _args[7];
lean_object* v_flipped_3834_ = _args[8];
lean_object* v_a_3835_ = _args[9];
lean_object* v_a_3836_ = _args[10];
lean_object* v_a_3837_ = _args[11];
lean_object* v_a_3838_ = _args[12];
lean_object* v_a_3839_ = _args[13];
lean_object* v_a_3840_ = _args[14];
lean_object* v_a_3841_ = _args[15];
lean_object* v_a_3842_ = _args[16];
lean_object* v_a_3843_ = _args[17];
lean_object* v_a_3844_ = _args[18];
lean_object* v_a_3845_ = _args[19];
_start:
{
uint8_t v_isHEq_boxed_3846_; uint8_t v_flipped_boxed_3847_; lean_object* v_res_3848_; 
v_isHEq_boxed_3846_ = lean_unbox(v_isHEq_3827_);
v_flipped_boxed_3847_ = lean_unbox(v_flipped_3834_);
v_res_3848_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go(v_proof_3826_, v_isHEq_boxed_3846_, v_lhs_3828_, v_rhs_3829_, v_lhsNode_3830_, v_rhsNode_3831_, v_lhsRoot_3832_, v_rhsRoot_3833_, v_flipped_boxed_3847_, v_a_3835_, v_a_3836_, v_a_3837_, v_a_3838_, v_a_3839_, v_a_3840_, v_a_3841_, v_a_3842_, v_a_3843_, v_a_3844_);
lean_dec(v_a_3844_);
lean_dec_ref(v_a_3843_);
lean_dec(v_a_3842_);
lean_dec_ref(v_a_3841_);
lean_dec(v_a_3840_);
lean_dec_ref(v_a_3839_);
lean_dec(v_a_3838_);
lean_dec_ref(v_a_3837_);
lean_dec(v_a_3836_);
lean_dec(v_a_3835_);
return v_res_3848_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0(lean_object* v_as_3849_, lean_object* v_as_x27_3850_, lean_object* v_b_3851_, lean_object* v_a_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_){
_start:
{
lean_object* v___x_3864_; 
v___x_3864_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg(v_as_x27_3850_, v_b_3851_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3856_, v___y_3857_, v___y_3858_, v___y_3859_, v___y_3860_, v___y_3861_, v___y_3862_);
return v___x_3864_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___boxed(lean_object* v_as_3865_, lean_object* v_as_x27_3866_, lean_object* v_b_3867_, lean_object* v_a_3868_, lean_object* v___y_3869_, lean_object* v___y_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_){
_start:
{
lean_object* v_res_3880_; 
v_res_3880_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0(v_as_3865_, v_as_x27_3866_, v_b_3867_, v_a_3868_, v___y_3869_, v___y_3870_, v___y_3871_, v___y_3872_, v___y_3873_, v___y_3874_, v___y_3875_, v___y_3876_, v___y_3877_, v___y_3878_);
lean_dec(v___y_3878_);
lean_dec_ref(v___y_3877_);
lean_dec(v___y_3876_);
lean_dec_ref(v___y_3875_);
lean_dec(v___y_3874_);
lean_dec_ref(v___y_3873_);
lean_dec(v___y_3872_);
lean_dec_ref(v___y_3871_);
lean_dec(v___y_3870_);
lean_dec(v___y_3869_);
lean_dec(v_as_x27_3866_);
lean_dec(v_as_3865_);
return v_res_3880_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1(lean_object* v_as_3881_, lean_object* v_as_x27_3882_, lean_object* v_b_3883_, lean_object* v_a_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_){
_start:
{
lean_object* v___x_3896_; 
v___x_3896_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg(v_as_x27_3882_, v_b_3883_, v___y_3885_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_, v___y_3894_);
return v___x_3896_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___boxed(lean_object* v_as_3897_, lean_object* v_as_x27_3898_, lean_object* v_b_3899_, lean_object* v_a_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_, lean_object* v___y_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_){
_start:
{
lean_object* v_res_3912_; 
v_res_3912_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1(v_as_3897_, v_as_x27_3898_, v_b_3899_, v_a_3900_, v___y_3901_, v___y_3902_, v___y_3903_, v___y_3904_, v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_, v___y_3909_, v___y_3910_);
lean_dec(v___y_3910_);
lean_dec_ref(v___y_3909_);
lean_dec(v___y_3908_);
lean_dec_ref(v___y_3907_);
lean_dec(v___y_3906_);
lean_dec_ref(v___y_3905_);
lean_dec(v___y_3904_);
lean_dec_ref(v___y_3903_);
lean_dec(v___y_3902_);
lean_dec(v___y_3901_);
lean_dec(v_as_x27_3898_);
lean_dec(v_as_3897_);
return v_res_3912_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__0(void){
_start:
{
lean_object* v___x_3913_; 
v___x_3913_ = lean_mk_string_unchecked("after addEqStep, ", 17, 17);
return v___x_3913_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1(void){
_start:
{
lean_object* v___x_3914_; lean_object* v___x_3915_; 
v___x_3914_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__0, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__0);
v___x_3915_ = l_Lean_stringToMessageData(v___x_3914_);
return v___x_3915_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__2(void){
_start:
{
lean_object* v___x_3916_; 
v___x_3916_ = lean_mk_string_unchecked("eqc", 3, 3);
return v___x_3916_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3(void){
_start:
{
lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; 
v___x_3917_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__2, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__2);
v___x_3918_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0);
v___x_3919_ = l_Lean_Name_mkStr2(v___x_3918_, v___x_3917_);
return v___x_3919_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4(void){
_start:
{
lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; 
v___x_3920_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3);
v___x_3921_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5);
v___x_3922_ = l_Lean_Name_append(v___x_3921_, v___x_3920_);
return v___x_3922_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__5(void){
_start:
{
lean_object* v___x_3923_; 
v___x_3923_ = lean_mk_string_unchecked(" and ", 5, 5);
return v___x_3923_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6(void){
_start:
{
lean_object* v___x_3924_; lean_object* v___x_3925_; 
v___x_3924_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__5, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__5);
v___x_3925_ = l_Lean_stringToMessageData(v___x_3924_);
return v___x_3925_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__7(void){
_start:
{
lean_object* v___x_3926_; 
v___x_3926_ = lean_mk_string_unchecked(" are already in the same equivalence class", 42, 42);
return v___x_3926_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8(void){
_start:
{
lean_object* v___x_3927_; lean_object* v___x_3928_; 
v___x_3927_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__7, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__7);
v___x_3928_ = l_Lean_stringToMessageData(v___x_3927_);
return v___x_3928_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep(lean_object* v_lhs_3929_, lean_object* v_rhs_3930_, lean_object* v_proof_3931_, uint8_t v_isHEq_3932_, lean_object* v_a_3933_, lean_object* v_a_3934_, lean_object* v_a_3935_, lean_object* v_a_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_, lean_object* v_a_3939_, lean_object* v_a_3940_, lean_object* v_a_3941_, lean_object* v_a_3942_){
_start:
{
lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; 
v___x_3947_ = lean_st_ref_get(v_a_3942_);
lean_dec(v___x_3947_);
v___x_3948_ = lean_st_ref_get(v_a_3933_);
lean_inc_ref(v_lhs_3929_);
v___x_3949_ = l_Lean_Meta_Grind_Goal_getENode(v___x_3948_, v_lhs_3929_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_);
lean_dec(v___x_3948_);
if (lean_obj_tag(v___x_3949_) == 0)
{
lean_object* v_a_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; 
v_a_3950_ = lean_ctor_get(v___x_3949_, 0);
lean_inc(v_a_3950_);
lean_dec_ref(v___x_3949_);
v___x_3951_ = lean_st_ref_get(v_a_3942_);
lean_dec(v___x_3951_);
v___x_3952_ = lean_st_ref_get(v_a_3933_);
lean_inc_ref(v_rhs_3930_);
v___x_3953_ = l_Lean_Meta_Grind_Goal_getENode(v___x_3952_, v_rhs_3930_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_);
lean_dec(v___x_3952_);
if (lean_obj_tag(v___x_3953_) == 0)
{
lean_object* v_a_3954_; lean_object* v_root_3955_; lean_object* v_root_3956_; uint8_t v___x_3957_; 
v_a_3954_ = lean_ctor_get(v___x_3953_, 0);
lean_inc(v_a_3954_);
lean_dec_ref(v___x_3953_);
v_root_3955_ = lean_ctor_get(v_a_3950_, 2);
v_root_3956_ = lean_ctor_get(v_a_3954_, 2);
v___x_3957_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_root_3955_, v_root_3956_);
if (v___x_3957_ == 0)
{
lean_object* v_options_3958_; lean_object* v_inheritedTraceOptions_3959_; uint8_t v_hasTrace_3960_; uint8_t v___x_3961_; lean_object* v___y_3963_; lean_object* v___y_3964_; lean_object* v___y_3965_; lean_object* v___y_3966_; lean_object* v___y_3967_; lean_object* v___y_3968_; lean_object* v___y_3969_; lean_object* v___y_3970_; lean_object* v___y_3971_; lean_object* v___y_3972_; lean_object* v___y_3999_; lean_object* v___y_4000_; uint8_t v___y_4001_; lean_object* v___y_4002_; lean_object* v___y_4003_; lean_object* v___y_4004_; lean_object* v___y_4005_; lean_object* v___y_4006_; lean_object* v___y_4007_; lean_object* v___y_4008_; lean_object* v___y_4009_; lean_object* v___y_4010_; lean_object* v___y_4011_; lean_object* v___y_4027_; lean_object* v___y_4028_; lean_object* v___y_4029_; lean_object* v___y_4030_; lean_object* v___y_4031_; lean_object* v___y_4032_; lean_object* v___y_4033_; lean_object* v___y_4034_; uint8_t v___y_4035_; lean_object* v___y_4036_; lean_object* v___y_4037_; lean_object* v___y_4038_; lean_object* v___y_4039_; uint8_t v___y_4040_; lean_object* v___y_4045_; lean_object* v___y_4046_; uint8_t v___y_4047_; lean_object* v___y_4048_; lean_object* v___y_4049_; lean_object* v___y_4050_; lean_object* v___y_4051_; lean_object* v___y_4052_; lean_object* v___y_4053_; lean_object* v___y_4054_; lean_object* v___y_4055_; lean_object* v___y_4056_; lean_object* v___y_4057_; lean_object* v___y_4072_; lean_object* v___y_4073_; uint8_t v___y_4074_; uint8_t v___y_4075_; lean_object* v___y_4076_; lean_object* v___y_4077_; lean_object* v___y_4078_; lean_object* v___y_4079_; lean_object* v___y_4080_; lean_object* v___y_4081_; lean_object* v___y_4082_; lean_object* v___y_4083_; lean_object* v___y_4084_; lean_object* v___y_4085_; lean_object* v___y_4088_; lean_object* v___y_4089_; lean_object* v___y_4090_; lean_object* v___y_4091_; lean_object* v___y_4092_; lean_object* v___y_4093_; lean_object* v___y_4094_; lean_object* v___y_4095_; lean_object* v___y_4096_; lean_object* v___y_4097_; lean_object* v___y_4098_; uint8_t v___y_4099_; uint8_t v___y_4100_; lean_object* v___y_4101_; lean_object* v___y_4104_; lean_object* v___y_4105_; lean_object* v___y_4106_; lean_object* v___y_4107_; lean_object* v___y_4108_; lean_object* v___y_4109_; lean_object* v___y_4110_; lean_object* v___y_4111_; lean_object* v___y_4112_; lean_object* v___y_4113_; lean_object* v___y_4114_; uint8_t v___y_4115_; uint8_t v___y_4116_; lean_object* v___y_4117_; lean_object* v___y_4120_; lean_object* v___y_4121_; lean_object* v___y_4122_; lean_object* v___y_4123_; lean_object* v___y_4124_; lean_object* v___y_4125_; lean_object* v___y_4126_; lean_object* v___y_4127_; lean_object* v___y_4128_; lean_object* v___y_4129_; lean_object* v___y_4130_; uint8_t v___y_4131_; uint8_t v___y_4132_; lean_object* v___y_4133_; uint8_t v___y_4134_; lean_object* v___y_4136_; lean_object* v_size_4137_; uint8_t v_interpreted_4138_; uint8_t v_ctor_4139_; lean_object* v___y_4140_; lean_object* v_size_4141_; lean_object* v___y_4142_; lean_object* v___y_4143_; lean_object* v___y_4144_; lean_object* v___y_4145_; lean_object* v___y_4146_; lean_object* v___y_4147_; lean_object* v___y_4148_; lean_object* v___y_4149_; lean_object* v___y_4150_; uint8_t v___y_4151_; uint8_t v___y_4152_; lean_object* v___y_4153_; lean_object* v___y_4156_; lean_object* v___y_4157_; lean_object* v___y_4158_; lean_object* v___y_4159_; lean_object* v___y_4160_; lean_object* v___y_4161_; lean_object* v___y_4162_; lean_object* v___y_4163_; lean_object* v___y_4164_; lean_object* v___y_4165_; lean_object* v___y_4166_; uint8_t v___y_4167_; uint8_t v___y_4168_; lean_object* v___y_4169_; uint8_t v___y_4170_; lean_object* v___y_4181_; lean_object* v___y_4182_; uint8_t v_interpreted_4183_; uint8_t v_valueInconsistency_4184_; uint8_t v_trueEqFalse_4185_; lean_object* v___y_4186_; lean_object* v___y_4187_; lean_object* v___y_4188_; lean_object* v___y_4189_; lean_object* v___y_4190_; lean_object* v___y_4191_; lean_object* v___y_4192_; lean_object* v___y_4193_; lean_object* v___y_4194_; lean_object* v___y_4195_; lean_object* v___y_4198_; lean_object* v___y_4199_; uint8_t v_valueInconsistency_4200_; uint8_t v_trueEqFalse_4201_; lean_object* v___y_4202_; lean_object* v___y_4203_; lean_object* v___y_4204_; lean_object* v___y_4205_; lean_object* v___y_4206_; lean_object* v___y_4207_; lean_object* v___y_4208_; lean_object* v___y_4209_; lean_object* v___y_4210_; lean_object* v___y_4211_; lean_object* v___y_4214_; lean_object* v___y_4215_; lean_object* v___y_4216_; lean_object* v___y_4217_; lean_object* v___y_4218_; lean_object* v___y_4219_; lean_object* v___y_4220_; lean_object* v___y_4221_; lean_object* v___y_4222_; lean_object* v___y_4223_; lean_object* v___y_4224_; lean_object* v___y_4225_; lean_object* v___y_4228_; lean_object* v___y_4229_; lean_object* v___y_4230_; lean_object* v___y_4231_; lean_object* v___y_4232_; lean_object* v___y_4233_; uint8_t v___y_4234_; lean_object* v___y_4235_; lean_object* v___y_4236_; lean_object* v___y_4237_; lean_object* v___y_4238_; lean_object* v___y_4239_; lean_object* v___y_4240_; lean_object* v___y_4256_; lean_object* v___y_4257_; lean_object* v___y_4258_; lean_object* v___y_4259_; lean_object* v___y_4260_; lean_object* v___y_4261_; lean_object* v___y_4262_; lean_object* v___y_4263_; lean_object* v___y_4264_; lean_object* v___y_4265_; lean_object* v___y_4266_; lean_object* v___y_4267_; uint8_t v___y_4268_; lean_object* v___y_4275_; lean_object* v___y_4276_; lean_object* v___y_4277_; lean_object* v___y_4278_; lean_object* v___y_4279_; lean_object* v___y_4280_; lean_object* v___y_4281_; lean_object* v___y_4282_; lean_object* v___y_4283_; lean_object* v___y_4284_; 
v_options_3958_ = lean_ctor_get(v_a_3941_, 2);
v_inheritedTraceOptions_3959_ = lean_ctor_get(v_a_3941_, 13);
v_hasTrace_3960_ = lean_ctor_get_uint8(v_options_3958_, sizeof(void*)*1);
v___x_3961_ = 1;
if (v_hasTrace_3960_ == 0)
{
v___y_4275_ = v_a_3933_;
v___y_4276_ = v_a_3934_;
v___y_4277_ = v_a_3935_;
v___y_4278_ = v_a_3936_;
v___y_4279_ = v_a_3937_;
v___y_4280_ = v_a_3938_;
v___y_4281_ = v_a_3939_;
v___y_4282_ = v_a_3940_;
v___y_4283_ = v_a_3941_;
v___y_4284_ = v_a_3942_;
goto v___jp_4274_;
}
else
{
lean_object* v___x_4312_; lean_object* v___y_4314_; lean_object* v___x_4326_; uint8_t v___x_4327_; 
v___x_4312_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3);
v___x_4326_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4);
v___x_4327_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3959_, v_options_3958_, v___x_4326_);
if (v___x_4327_ == 0)
{
v___y_4275_ = v_a_3933_;
v___y_4276_ = v_a_3934_;
v___y_4277_ = v_a_3935_;
v___y_4278_ = v_a_3936_;
v___y_4279_ = v_a_3937_;
v___y_4280_ = v_a_3938_;
v___y_4281_ = v_a_3939_;
v___y_4282_ = v_a_3940_;
v___y_4283_ = v_a_3941_;
v___y_4284_ = v_a_3942_;
goto v___jp_4274_;
}
else
{
lean_object* v___x_4328_; 
v___x_4328_ = l_Lean_Meta_Grind_updateLastTag(v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_, v_a_3938_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_);
if (lean_obj_tag(v___x_4328_) == 0)
{
lean_dec_ref(v___x_4328_);
if (v_isHEq_3932_ == 0)
{
lean_object* v___x_4329_; 
lean_inc_ref(v_rhs_3930_);
lean_inc_ref(v_lhs_3929_);
v___x_4329_ = l_Lean_Meta_mkEq(v_lhs_3929_, v_rhs_3930_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_);
v___y_4314_ = v___x_4329_;
goto v___jp_4313_;
}
else
{
lean_object* v___x_4330_; 
lean_inc_ref(v_rhs_3930_);
lean_inc_ref(v_lhs_3929_);
v___x_4330_ = l_Lean_Meta_mkHEq(v_lhs_3929_, v_rhs_3930_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_);
v___y_4314_ = v___x_4330_;
goto v___jp_4313_;
}
}
else
{
lean_dec(v_a_3954_);
lean_dec(v_a_3950_);
lean_dec_ref(v_proof_3931_);
lean_dec_ref(v_rhs_3930_);
lean_dec_ref(v_lhs_3929_);
return v___x_4328_;
}
}
v___jp_4313_:
{
if (lean_obj_tag(v___y_4314_) == 0)
{
lean_object* v_a_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; 
v_a_4315_ = lean_ctor_get(v___y_4314_, 0);
lean_inc(v_a_4315_);
lean_dec_ref(v___y_4314_);
v___x_4316_ = l_Lean_MessageData_ofExpr(v_a_4315_);
v___x_4317_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_4312_, v___x_4316_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_);
if (lean_obj_tag(v___x_4317_) == 0)
{
lean_dec_ref(v___x_4317_);
v___y_4275_ = v_a_3933_;
v___y_4276_ = v_a_3934_;
v___y_4277_ = v_a_3935_;
v___y_4278_ = v_a_3936_;
v___y_4279_ = v_a_3937_;
v___y_4280_ = v_a_3938_;
v___y_4281_ = v_a_3939_;
v___y_4282_ = v_a_3940_;
v___y_4283_ = v_a_3941_;
v___y_4284_ = v_a_3942_;
goto v___jp_4274_;
}
else
{
lean_dec(v_a_3954_);
lean_dec(v_a_3950_);
lean_dec_ref(v_proof_3931_);
lean_dec_ref(v_rhs_3930_);
lean_dec_ref(v_lhs_3929_);
return v___x_4317_;
}
}
else
{
lean_object* v_a_4318_; lean_object* v___x_4320_; uint8_t v_isShared_4321_; uint8_t v_isSharedCheck_4325_; 
lean_dec(v_a_3954_);
lean_dec(v_a_3950_);
lean_dec_ref(v_proof_3931_);
lean_dec_ref(v_rhs_3930_);
lean_dec_ref(v_lhs_3929_);
v_a_4318_ = lean_ctor_get(v___y_4314_, 0);
v_isSharedCheck_4325_ = !lean_is_exclusive(v___y_4314_);
if (v_isSharedCheck_4325_ == 0)
{
v___x_4320_ = v___y_4314_;
v_isShared_4321_ = v_isSharedCheck_4325_;
goto v_resetjp_4319_;
}
else
{
lean_inc(v_a_4318_);
lean_dec(v___y_4314_);
v___x_4320_ = lean_box(0);
v_isShared_4321_ = v_isSharedCheck_4325_;
goto v_resetjp_4319_;
}
v_resetjp_4319_:
{
lean_object* v___x_4323_; 
if (v_isShared_4321_ == 0)
{
v___x_4323_ = v___x_4320_;
goto v_reusejp_4322_;
}
else
{
lean_object* v_reuseFailAlloc_4324_; 
v_reuseFailAlloc_4324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4324_, 0, v_a_4318_);
v___x_4323_ = v_reuseFailAlloc_4324_;
goto v_reusejp_4322_;
}
v_reusejp_4322_:
{
return v___x_4323_;
}
}
}
}
}
v___jp_3962_:
{
lean_object* v_options_3973_; uint8_t v_hasTrace_3974_; 
v_options_3973_ = lean_ctor_get(v___y_3971_, 2);
v_hasTrace_3974_ = lean_ctor_get_uint8(v_options_3973_, sizeof(void*)*1);
if (v_hasTrace_3974_ == 0)
{
lean_object* v___x_3975_; 
v___x_3975_ = l_Lean_Meta_Grind_checkInvariants(v___x_3957_, v___y_3963_, v___y_3964_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_);
return v___x_3975_;
}
else
{
lean_object* v_inheritedTraceOptions_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; uint8_t v___x_3979_; 
v_inheritedTraceOptions_3976_ = lean_ctor_get(v___y_3971_, 13);
v___x_3977_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0);
v___x_3978_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1);
v___x_3979_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3976_, v_options_3973_, v___x_3978_);
if (v___x_3979_ == 0)
{
lean_object* v___x_3980_; 
v___x_3980_ = l_Lean_Meta_Grind_checkInvariants(v___x_3957_, v___y_3963_, v___y_3964_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_);
return v___x_3980_;
}
else
{
lean_object* v___x_3981_; 
v___x_3981_ = l_Lean_Meta_Grind_updateLastTag(v___y_3963_, v___y_3964_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_);
if (lean_obj_tag(v___x_3981_) == 0)
{
lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; 
lean_dec_ref(v___x_3981_);
v___x_3982_ = lean_st_ref_get(v___y_3972_);
lean_dec(v___x_3982_);
v___x_3983_ = lean_st_ref_get(v___y_3963_);
v___x_3984_ = l_Lean_Meta_Grind_Goal_ppState(v___x_3983_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_);
lean_dec(v___x_3983_);
if (lean_obj_tag(v___x_3984_) == 0)
{
lean_object* v_a_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; 
v_a_3985_ = lean_ctor_get(v___x_3984_, 0);
lean_inc(v_a_3985_);
lean_dec_ref(v___x_3984_);
v___x_3986_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1);
v___x_3987_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3987_, 0, v___x_3986_);
lean_ctor_set(v___x_3987_, 1, v_a_3985_);
v___x_3988_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_3977_, v___x_3987_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_);
if (lean_obj_tag(v___x_3988_) == 0)
{
lean_object* v___x_3989_; 
lean_dec_ref(v___x_3988_);
v___x_3989_ = l_Lean_Meta_Grind_checkInvariants(v___x_3957_, v___y_3963_, v___y_3964_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_);
return v___x_3989_;
}
else
{
return v___x_3988_;
}
}
else
{
lean_object* v_a_3990_; lean_object* v___x_3992_; uint8_t v_isShared_3993_; uint8_t v_isSharedCheck_3997_; 
v_a_3990_ = lean_ctor_get(v___x_3984_, 0);
v_isSharedCheck_3997_ = !lean_is_exclusive(v___x_3984_);
if (v_isSharedCheck_3997_ == 0)
{
v___x_3992_ = v___x_3984_;
v_isShared_3993_ = v_isSharedCheck_3997_;
goto v_resetjp_3991_;
}
else
{
lean_inc(v_a_3990_);
lean_dec(v___x_3984_);
v___x_3992_ = lean_box(0);
v_isShared_3993_ = v_isSharedCheck_3997_;
goto v_resetjp_3991_;
}
v_resetjp_3991_:
{
lean_object* v___x_3995_; 
if (v_isShared_3993_ == 0)
{
v___x_3995_ = v___x_3992_;
goto v_reusejp_3994_;
}
else
{
lean_object* v_reuseFailAlloc_3996_; 
v_reuseFailAlloc_3996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3996_, 0, v_a_3990_);
v___x_3995_ = v_reuseFailAlloc_3996_;
goto v_reusejp_3994_;
}
v_reusejp_3994_:
{
return v___x_3995_;
}
}
}
}
else
{
return v___x_3981_;
}
}
}
}
v___jp_3998_:
{
lean_object* v___x_4012_; 
v___x_4012_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_4002_, v___y_4011_);
if (lean_obj_tag(v___x_4012_) == 0)
{
lean_object* v_a_4013_; uint8_t v___x_4014_; 
v_a_4013_ = lean_ctor_get(v___x_4012_, 0);
lean_inc(v_a_4013_);
lean_dec_ref(v___x_4012_);
v___x_4014_ = lean_unbox(v_a_4013_);
lean_dec(v_a_4013_);
if (v___x_4014_ == 0)
{
if (v___y_4001_ == 0)
{
lean_dec_ref(v___y_4000_);
lean_dec_ref(v___y_3999_);
v___y_3963_ = v___y_4002_;
v___y_3964_ = v___y_4003_;
v___y_3965_ = v___y_4004_;
v___y_3966_ = v___y_4005_;
v___y_3967_ = v___y_4006_;
v___y_3968_ = v___y_4007_;
v___y_3969_ = v___y_4008_;
v___y_3970_ = v___y_4009_;
v___y_3971_ = v___y_4010_;
v___y_3972_ = v___y_4011_;
goto v___jp_3962_;
}
else
{
lean_object* v_self_4015_; lean_object* v_self_4016_; lean_object* v___x_4017_; 
v_self_4015_ = lean_ctor_get(v___y_4000_, 0);
lean_inc_ref(v_self_4015_);
lean_dec_ref(v___y_4000_);
v_self_4016_ = lean_ctor_get(v___y_3999_, 0);
lean_inc_ref(v_self_4016_);
lean_dec_ref(v___y_3999_);
v___x_4017_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq(v_self_4015_, v_self_4016_, v___y_4002_, v___y_4003_, v___y_4004_, v___y_4005_, v___y_4006_, v___y_4007_, v___y_4008_, v___y_4009_, v___y_4010_, v___y_4011_);
if (lean_obj_tag(v___x_4017_) == 0)
{
lean_dec_ref(v___x_4017_);
v___y_3963_ = v___y_4002_;
v___y_3964_ = v___y_4003_;
v___y_3965_ = v___y_4004_;
v___y_3966_ = v___y_4005_;
v___y_3967_ = v___y_4006_;
v___y_3968_ = v___y_4007_;
v___y_3969_ = v___y_4008_;
v___y_3970_ = v___y_4009_;
v___y_3971_ = v___y_4010_;
v___y_3972_ = v___y_4011_;
goto v___jp_3962_;
}
else
{
return v___x_4017_;
}
}
}
else
{
lean_dec_ref(v___y_4000_);
lean_dec_ref(v___y_3999_);
v___y_3963_ = v___y_4002_;
v___y_3964_ = v___y_4003_;
v___y_3965_ = v___y_4004_;
v___y_3966_ = v___y_4005_;
v___y_3967_ = v___y_4006_;
v___y_3968_ = v___y_4007_;
v___y_3969_ = v___y_4008_;
v___y_3970_ = v___y_4009_;
v___y_3971_ = v___y_4010_;
v___y_3972_ = v___y_4011_;
goto v___jp_3962_;
}
}
else
{
lean_object* v_a_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4025_; 
lean_dec_ref(v___y_4000_);
lean_dec_ref(v___y_3999_);
v_a_4018_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4020_ = v___x_4012_;
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_a_4018_);
lean_dec(v___x_4012_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
lean_object* v___x_4023_; 
if (v_isShared_4021_ == 0)
{
v___x_4023_ = v___x_4020_;
goto v_reusejp_4022_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v_a_4018_);
v___x_4023_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4022_;
}
v_reusejp_4022_:
{
return v___x_4023_;
}
}
}
}
v___jp_4026_:
{
if (v___y_4040_ == 0)
{
v___y_3999_ = v___y_4027_;
v___y_4000_ = v___y_4029_;
v___y_4001_ = v___y_4035_;
v___y_4002_ = v___y_4028_;
v___y_4003_ = v___y_4034_;
v___y_4004_ = v___y_4033_;
v___y_4005_ = v___y_4037_;
v___y_4006_ = v___y_4039_;
v___y_4007_ = v___y_4032_;
v___y_4008_ = v___y_4036_;
v___y_4009_ = v___y_4031_;
v___y_4010_ = v___y_4030_;
v___y_4011_ = v___y_4038_;
goto v___jp_3998_;
}
else
{
lean_object* v_self_4041_; lean_object* v_self_4042_; lean_object* v___x_4043_; 
v_self_4041_ = lean_ctor_get(v___y_4029_, 0);
v_self_4042_ = lean_ctor_get(v___y_4027_, 0);
lean_inc_ref(v_self_4042_);
lean_inc_ref(v_self_4041_);
v___x_4043_ = l_Lean_Meta_Grind_propagateCtor(v_self_4041_, v_self_4042_, v___y_4028_, v___y_4034_, v___y_4033_, v___y_4037_, v___y_4039_, v___y_4032_, v___y_4036_, v___y_4031_, v___y_4030_, v___y_4038_);
if (lean_obj_tag(v___x_4043_) == 0)
{
lean_dec_ref(v___x_4043_);
v___y_3999_ = v___y_4027_;
v___y_4000_ = v___y_4029_;
v___y_4001_ = v___y_4035_;
v___y_4002_ = v___y_4028_;
v___y_4003_ = v___y_4034_;
v___y_4004_ = v___y_4033_;
v___y_4005_ = v___y_4037_;
v___y_4006_ = v___y_4039_;
v___y_4007_ = v___y_4032_;
v___y_4008_ = v___y_4036_;
v___y_4009_ = v___y_4031_;
v___y_4010_ = v___y_4030_;
v___y_4011_ = v___y_4038_;
goto v___jp_3998_;
}
else
{
lean_dec_ref(v___y_4029_);
lean_dec_ref(v___y_4027_);
return v___x_4043_;
}
}
}
v___jp_4044_:
{
lean_object* v___x_4058_; 
v___x_4058_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_4048_, v___y_4057_);
if (lean_obj_tag(v___x_4058_) == 0)
{
lean_object* v_a_4059_; uint8_t v___x_4060_; 
v_a_4059_ = lean_ctor_get(v___x_4058_, 0);
lean_inc(v_a_4059_);
lean_dec_ref(v___x_4058_);
v___x_4060_ = lean_unbox(v_a_4059_);
lean_dec(v_a_4059_);
if (v___x_4060_ == 0)
{
uint8_t v_ctor_4061_; 
v_ctor_4061_ = lean_ctor_get_uint8(v___y_4046_, sizeof(void*)*11 + 2);
if (v_ctor_4061_ == 0)
{
v___y_4027_ = v___y_4045_;
v___y_4028_ = v___y_4048_;
v___y_4029_ = v___y_4046_;
v___y_4030_ = v___y_4056_;
v___y_4031_ = v___y_4055_;
v___y_4032_ = v___y_4053_;
v___y_4033_ = v___y_4050_;
v___y_4034_ = v___y_4049_;
v___y_4035_ = v___y_4047_;
v___y_4036_ = v___y_4054_;
v___y_4037_ = v___y_4051_;
v___y_4038_ = v___y_4057_;
v___y_4039_ = v___y_4052_;
v___y_4040_ = v___x_3957_;
goto v___jp_4026_;
}
else
{
uint8_t v_ctor_4062_; 
v_ctor_4062_ = lean_ctor_get_uint8(v___y_4045_, sizeof(void*)*11 + 2);
v___y_4027_ = v___y_4045_;
v___y_4028_ = v___y_4048_;
v___y_4029_ = v___y_4046_;
v___y_4030_ = v___y_4056_;
v___y_4031_ = v___y_4055_;
v___y_4032_ = v___y_4053_;
v___y_4033_ = v___y_4050_;
v___y_4034_ = v___y_4049_;
v___y_4035_ = v___y_4047_;
v___y_4036_ = v___y_4054_;
v___y_4037_ = v___y_4051_;
v___y_4038_ = v___y_4057_;
v___y_4039_ = v___y_4052_;
v___y_4040_ = v_ctor_4062_;
goto v___jp_4026_;
}
}
else
{
v___y_3999_ = v___y_4045_;
v___y_4000_ = v___y_4046_;
v___y_4001_ = v___y_4047_;
v___y_4002_ = v___y_4048_;
v___y_4003_ = v___y_4049_;
v___y_4004_ = v___y_4050_;
v___y_4005_ = v___y_4051_;
v___y_4006_ = v___y_4052_;
v___y_4007_ = v___y_4053_;
v___y_4008_ = v___y_4054_;
v___y_4009_ = v___y_4055_;
v___y_4010_ = v___y_4056_;
v___y_4011_ = v___y_4057_;
goto v___jp_3998_;
}
}
else
{
lean_object* v_a_4063_; lean_object* v___x_4065_; uint8_t v_isShared_4066_; uint8_t v_isSharedCheck_4070_; 
lean_dec_ref(v___y_4046_);
lean_dec_ref(v___y_4045_);
v_a_4063_ = lean_ctor_get(v___x_4058_, 0);
v_isSharedCheck_4070_ = !lean_is_exclusive(v___x_4058_);
if (v_isSharedCheck_4070_ == 0)
{
v___x_4065_ = v___x_4058_;
v_isShared_4066_ = v_isSharedCheck_4070_;
goto v_resetjp_4064_;
}
else
{
lean_inc(v_a_4063_);
lean_dec(v___x_4058_);
v___x_4065_ = lean_box(0);
v_isShared_4066_ = v_isSharedCheck_4070_;
goto v_resetjp_4064_;
}
v_resetjp_4064_:
{
lean_object* v___x_4068_; 
if (v_isShared_4066_ == 0)
{
v___x_4068_ = v___x_4065_;
goto v_reusejp_4067_;
}
else
{
lean_object* v_reuseFailAlloc_4069_; 
v_reuseFailAlloc_4069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4069_, 0, v_a_4063_);
v___x_4068_ = v_reuseFailAlloc_4069_;
goto v_reusejp_4067_;
}
v_reusejp_4067_:
{
return v___x_4068_;
}
}
}
}
v___jp_4071_:
{
if (v___y_4075_ == 0)
{
v___y_4045_ = v___y_4072_;
v___y_4046_ = v___y_4073_;
v___y_4047_ = v___y_4074_;
v___y_4048_ = v___y_4076_;
v___y_4049_ = v___y_4077_;
v___y_4050_ = v___y_4078_;
v___y_4051_ = v___y_4079_;
v___y_4052_ = v___y_4080_;
v___y_4053_ = v___y_4081_;
v___y_4054_ = v___y_4082_;
v___y_4055_ = v___y_4083_;
v___y_4056_ = v___y_4084_;
v___y_4057_ = v___y_4085_;
goto v___jp_4044_;
}
else
{
lean_object* v___x_4086_; 
v___x_4086_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse(v___y_4076_, v___y_4077_, v___y_4078_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_, v___y_4083_, v___y_4084_, v___y_4085_);
if (lean_obj_tag(v___x_4086_) == 0)
{
lean_dec_ref(v___x_4086_);
v___y_4045_ = v___y_4072_;
v___y_4046_ = v___y_4073_;
v___y_4047_ = v___y_4074_;
v___y_4048_ = v___y_4076_;
v___y_4049_ = v___y_4077_;
v___y_4050_ = v___y_4078_;
v___y_4051_ = v___y_4079_;
v___y_4052_ = v___y_4080_;
v___y_4053_ = v___y_4081_;
v___y_4054_ = v___y_4082_;
v___y_4055_ = v___y_4083_;
v___y_4056_ = v___y_4084_;
v___y_4057_ = v___y_4085_;
goto v___jp_4044_;
}
else
{
lean_dec_ref(v___y_4073_);
lean_dec_ref(v___y_4072_);
return v___x_4086_;
}
}
}
v___jp_4087_:
{
lean_object* v___x_4102_; 
lean_inc_ref(v___y_4089_);
lean_inc_ref(v___y_4088_);
v___x_4102_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go(v_proof_3931_, v_isHEq_3932_, v_rhs_3930_, v_lhs_3929_, v_a_3954_, v_a_3950_, v___y_4088_, v___y_4089_, v___x_3961_, v___y_4101_, v___y_4094_, v___y_4096_, v___y_4092_, v___y_4091_, v___y_4097_, v___y_4095_, v___y_4098_, v___y_4093_, v___y_4090_);
if (lean_obj_tag(v___x_4102_) == 0)
{
lean_dec_ref(v___x_4102_);
v___y_4072_ = v___y_4088_;
v___y_4073_ = v___y_4089_;
v___y_4074_ = v___y_4100_;
v___y_4075_ = v___y_4099_;
v___y_4076_ = v___y_4101_;
v___y_4077_ = v___y_4094_;
v___y_4078_ = v___y_4096_;
v___y_4079_ = v___y_4092_;
v___y_4080_ = v___y_4091_;
v___y_4081_ = v___y_4097_;
v___y_4082_ = v___y_4095_;
v___y_4083_ = v___y_4098_;
v___y_4084_ = v___y_4093_;
v___y_4085_ = v___y_4090_;
goto v___jp_4071_;
}
else
{
lean_dec_ref(v___y_4089_);
lean_dec_ref(v___y_4088_);
return v___x_4102_;
}
}
v___jp_4103_:
{
lean_object* v___x_4118_; 
lean_inc_ref(v___y_4104_);
lean_inc_ref(v___y_4105_);
v___x_4118_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go(v_proof_3931_, v_isHEq_3932_, v_lhs_3929_, v_rhs_3930_, v_a_3950_, v_a_3954_, v___y_4105_, v___y_4104_, v___x_3957_, v___y_4117_, v___y_4110_, v___y_4112_, v___y_4108_, v___y_4107_, v___y_4113_, v___y_4111_, v___y_4114_, v___y_4109_, v___y_4106_);
if (lean_obj_tag(v___x_4118_) == 0)
{
lean_dec_ref(v___x_4118_);
v___y_4072_ = v___y_4104_;
v___y_4073_ = v___y_4105_;
v___y_4074_ = v___y_4116_;
v___y_4075_ = v___y_4115_;
v___y_4076_ = v___y_4117_;
v___y_4077_ = v___y_4110_;
v___y_4078_ = v___y_4112_;
v___y_4079_ = v___y_4108_;
v___y_4080_ = v___y_4107_;
v___y_4081_ = v___y_4113_;
v___y_4082_ = v___y_4111_;
v___y_4083_ = v___y_4114_;
v___y_4084_ = v___y_4109_;
v___y_4085_ = v___y_4106_;
goto v___jp_4071_;
}
else
{
lean_dec_ref(v___y_4105_);
lean_dec_ref(v___y_4104_);
return v___x_4118_;
}
}
v___jp_4119_:
{
if (v___y_4134_ == 0)
{
v___y_4104_ = v___y_4120_;
v___y_4105_ = v___y_4121_;
v___y_4106_ = v___y_4122_;
v___y_4107_ = v___y_4123_;
v___y_4108_ = v___y_4124_;
v___y_4109_ = v___y_4125_;
v___y_4110_ = v___y_4126_;
v___y_4111_ = v___y_4127_;
v___y_4112_ = v___y_4128_;
v___y_4113_ = v___y_4129_;
v___y_4114_ = v___y_4130_;
v___y_4115_ = v___y_4132_;
v___y_4116_ = v___y_4131_;
v___y_4117_ = v___y_4133_;
goto v___jp_4103_;
}
else
{
v___y_4088_ = v___y_4120_;
v___y_4089_ = v___y_4121_;
v___y_4090_ = v___y_4122_;
v___y_4091_ = v___y_4123_;
v___y_4092_ = v___y_4124_;
v___y_4093_ = v___y_4125_;
v___y_4094_ = v___y_4126_;
v___y_4095_ = v___y_4127_;
v___y_4096_ = v___y_4128_;
v___y_4097_ = v___y_4129_;
v___y_4098_ = v___y_4130_;
v___y_4099_ = v___y_4132_;
v___y_4100_ = v___y_4131_;
v___y_4101_ = v___y_4133_;
goto v___jp_4087_;
}
}
v___jp_4135_:
{
uint8_t v___x_4154_; 
v___x_4154_ = lean_nat_dec_lt(v_size_4137_, v_size_4141_);
lean_dec(v_size_4141_);
lean_dec(v_size_4137_);
if (v___x_4154_ == 0)
{
v___y_4120_ = v___y_4136_;
v___y_4121_ = v___y_4140_;
v___y_4122_ = v___y_4142_;
v___y_4123_ = v___y_4143_;
v___y_4124_ = v___y_4144_;
v___y_4125_ = v___y_4145_;
v___y_4126_ = v___y_4146_;
v___y_4127_ = v___y_4147_;
v___y_4128_ = v___y_4148_;
v___y_4129_ = v___y_4149_;
v___y_4130_ = v___y_4150_;
v___y_4131_ = v___y_4152_;
v___y_4132_ = v___y_4151_;
v___y_4133_ = v___y_4153_;
v___y_4134_ = v___x_3957_;
goto v___jp_4119_;
}
else
{
if (v_interpreted_4138_ == 0)
{
if (v___x_4154_ == 0)
{
v___y_4120_ = v___y_4136_;
v___y_4121_ = v___y_4140_;
v___y_4122_ = v___y_4142_;
v___y_4123_ = v___y_4143_;
v___y_4124_ = v___y_4144_;
v___y_4125_ = v___y_4145_;
v___y_4126_ = v___y_4146_;
v___y_4127_ = v___y_4147_;
v___y_4128_ = v___y_4148_;
v___y_4129_ = v___y_4149_;
v___y_4130_ = v___y_4150_;
v___y_4131_ = v___y_4152_;
v___y_4132_ = v___y_4151_;
v___y_4133_ = v___y_4153_;
v___y_4134_ = v___x_3957_;
goto v___jp_4119_;
}
else
{
if (v_ctor_4139_ == 0)
{
v___y_4120_ = v___y_4136_;
v___y_4121_ = v___y_4140_;
v___y_4122_ = v___y_4142_;
v___y_4123_ = v___y_4143_;
v___y_4124_ = v___y_4144_;
v___y_4125_ = v___y_4145_;
v___y_4126_ = v___y_4146_;
v___y_4127_ = v___y_4147_;
v___y_4128_ = v___y_4148_;
v___y_4129_ = v___y_4149_;
v___y_4130_ = v___y_4150_;
v___y_4131_ = v___y_4152_;
v___y_4132_ = v___y_4151_;
v___y_4133_ = v___y_4153_;
v___y_4134_ = v___x_4154_;
goto v___jp_4119_;
}
else
{
v___y_4104_ = v___y_4136_;
v___y_4105_ = v___y_4140_;
v___y_4106_ = v___y_4142_;
v___y_4107_ = v___y_4143_;
v___y_4108_ = v___y_4144_;
v___y_4109_ = v___y_4145_;
v___y_4110_ = v___y_4146_;
v___y_4111_ = v___y_4147_;
v___y_4112_ = v___y_4148_;
v___y_4113_ = v___y_4149_;
v___y_4114_ = v___y_4150_;
v___y_4115_ = v___y_4151_;
v___y_4116_ = v___y_4152_;
v___y_4117_ = v___y_4153_;
goto v___jp_4103_;
}
}
}
else
{
v___y_4120_ = v___y_4136_;
v___y_4121_ = v___y_4140_;
v___y_4122_ = v___y_4142_;
v___y_4123_ = v___y_4143_;
v___y_4124_ = v___y_4144_;
v___y_4125_ = v___y_4145_;
v___y_4126_ = v___y_4146_;
v___y_4127_ = v___y_4147_;
v___y_4128_ = v___y_4148_;
v___y_4129_ = v___y_4149_;
v___y_4130_ = v___y_4150_;
v___y_4131_ = v___y_4152_;
v___y_4132_ = v___y_4151_;
v___y_4133_ = v___y_4153_;
v___y_4134_ = v___x_3957_;
goto v___jp_4119_;
}
}
}
v___jp_4155_:
{
if (v___y_4170_ == 0)
{
uint8_t v_ctor_4171_; 
v_ctor_4171_ = lean_ctor_get_uint8(v___y_4157_, sizeof(void*)*11 + 2);
if (v_ctor_4171_ == 0)
{
if (v___x_3957_ == 0)
{
lean_object* v_size_4172_; lean_object* v_size_4173_; uint8_t v_interpreted_4174_; uint8_t v_ctor_4175_; 
v_size_4172_ = lean_ctor_get(v___y_4157_, 6);
lean_inc(v_size_4172_);
v_size_4173_ = lean_ctor_get(v___y_4156_, 6);
lean_inc(v_size_4173_);
v_interpreted_4174_ = lean_ctor_get_uint8(v___y_4156_, sizeof(void*)*11 + 1);
v_ctor_4175_ = lean_ctor_get_uint8(v___y_4156_, sizeof(void*)*11 + 2);
v___y_4136_ = v___y_4156_;
v_size_4137_ = v_size_4173_;
v_interpreted_4138_ = v_interpreted_4174_;
v_ctor_4139_ = v_ctor_4175_;
v___y_4140_ = v___y_4157_;
v_size_4141_ = v_size_4172_;
v___y_4142_ = v___y_4158_;
v___y_4143_ = v___y_4159_;
v___y_4144_ = v___y_4160_;
v___y_4145_ = v___y_4161_;
v___y_4146_ = v___y_4162_;
v___y_4147_ = v___y_4163_;
v___y_4148_ = v___y_4164_;
v___y_4149_ = v___y_4165_;
v___y_4150_ = v___y_4166_;
v___y_4151_ = v___y_4168_;
v___y_4152_ = v___y_4167_;
v___y_4153_ = v___y_4169_;
goto v___jp_4135_;
}
else
{
v___y_4088_ = v___y_4156_;
v___y_4089_ = v___y_4157_;
v___y_4090_ = v___y_4158_;
v___y_4091_ = v___y_4159_;
v___y_4092_ = v___y_4160_;
v___y_4093_ = v___y_4161_;
v___y_4094_ = v___y_4162_;
v___y_4095_ = v___y_4163_;
v___y_4096_ = v___y_4164_;
v___y_4097_ = v___y_4165_;
v___y_4098_ = v___y_4166_;
v___y_4099_ = v___y_4168_;
v___y_4100_ = v___y_4167_;
v___y_4101_ = v___y_4169_;
goto v___jp_4087_;
}
}
else
{
uint8_t v_ctor_4176_; 
v_ctor_4176_ = lean_ctor_get_uint8(v___y_4156_, sizeof(void*)*11 + 2);
if (v_ctor_4176_ == 0)
{
v___y_4088_ = v___y_4156_;
v___y_4089_ = v___y_4157_;
v___y_4090_ = v___y_4158_;
v___y_4091_ = v___y_4159_;
v___y_4092_ = v___y_4160_;
v___y_4093_ = v___y_4161_;
v___y_4094_ = v___y_4162_;
v___y_4095_ = v___y_4163_;
v___y_4096_ = v___y_4164_;
v___y_4097_ = v___y_4165_;
v___y_4098_ = v___y_4166_;
v___y_4099_ = v___y_4168_;
v___y_4100_ = v___y_4167_;
v___y_4101_ = v___y_4169_;
goto v___jp_4087_;
}
else
{
lean_object* v_size_4177_; lean_object* v_size_4178_; uint8_t v_interpreted_4179_; 
v_size_4177_ = lean_ctor_get(v___y_4157_, 6);
lean_inc(v_size_4177_);
v_size_4178_ = lean_ctor_get(v___y_4156_, 6);
lean_inc(v_size_4178_);
v_interpreted_4179_ = lean_ctor_get_uint8(v___y_4156_, sizeof(void*)*11 + 1);
v___y_4136_ = v___y_4156_;
v_size_4137_ = v_size_4178_;
v_interpreted_4138_ = v_interpreted_4179_;
v_ctor_4139_ = v_ctor_4176_;
v___y_4140_ = v___y_4157_;
v_size_4141_ = v_size_4177_;
v___y_4142_ = v___y_4158_;
v___y_4143_ = v___y_4159_;
v___y_4144_ = v___y_4160_;
v___y_4145_ = v___y_4161_;
v___y_4146_ = v___y_4162_;
v___y_4147_ = v___y_4163_;
v___y_4148_ = v___y_4164_;
v___y_4149_ = v___y_4165_;
v___y_4150_ = v___y_4166_;
v___y_4151_ = v___y_4168_;
v___y_4152_ = v___y_4167_;
v___y_4153_ = v___y_4169_;
goto v___jp_4135_;
}
}
}
else
{
v___y_4088_ = v___y_4156_;
v___y_4089_ = v___y_4157_;
v___y_4090_ = v___y_4158_;
v___y_4091_ = v___y_4159_;
v___y_4092_ = v___y_4160_;
v___y_4093_ = v___y_4161_;
v___y_4094_ = v___y_4162_;
v___y_4095_ = v___y_4163_;
v___y_4096_ = v___y_4164_;
v___y_4097_ = v___y_4165_;
v___y_4098_ = v___y_4166_;
v___y_4099_ = v___y_4168_;
v___y_4100_ = v___y_4167_;
v___y_4101_ = v___y_4169_;
goto v___jp_4087_;
}
}
v___jp_4180_:
{
if (v_interpreted_4183_ == 0)
{
v___y_4156_ = v___y_4181_;
v___y_4157_ = v___y_4182_;
v___y_4158_ = v___y_4195_;
v___y_4159_ = v___y_4190_;
v___y_4160_ = v___y_4189_;
v___y_4161_ = v___y_4194_;
v___y_4162_ = v___y_4187_;
v___y_4163_ = v___y_4192_;
v___y_4164_ = v___y_4188_;
v___y_4165_ = v___y_4191_;
v___y_4166_ = v___y_4193_;
v___y_4167_ = v_valueInconsistency_4184_;
v___y_4168_ = v_trueEqFalse_4185_;
v___y_4169_ = v___y_4186_;
v___y_4170_ = v___x_3957_;
goto v___jp_4155_;
}
else
{
uint8_t v_interpreted_4196_; 
v_interpreted_4196_ = lean_ctor_get_uint8(v___y_4181_, sizeof(void*)*11 + 1);
if (v_interpreted_4196_ == 0)
{
v___y_4088_ = v___y_4181_;
v___y_4089_ = v___y_4182_;
v___y_4090_ = v___y_4195_;
v___y_4091_ = v___y_4190_;
v___y_4092_ = v___y_4189_;
v___y_4093_ = v___y_4194_;
v___y_4094_ = v___y_4187_;
v___y_4095_ = v___y_4192_;
v___y_4096_ = v___y_4188_;
v___y_4097_ = v___y_4191_;
v___y_4098_ = v___y_4193_;
v___y_4099_ = v_trueEqFalse_4185_;
v___y_4100_ = v_valueInconsistency_4184_;
v___y_4101_ = v___y_4186_;
goto v___jp_4087_;
}
else
{
v___y_4156_ = v___y_4181_;
v___y_4157_ = v___y_4182_;
v___y_4158_ = v___y_4195_;
v___y_4159_ = v___y_4190_;
v___y_4160_ = v___y_4189_;
v___y_4161_ = v___y_4194_;
v___y_4162_ = v___y_4187_;
v___y_4163_ = v___y_4192_;
v___y_4164_ = v___y_4188_;
v___y_4165_ = v___y_4191_;
v___y_4166_ = v___y_4193_;
v___y_4167_ = v_valueInconsistency_4184_;
v___y_4168_ = v_trueEqFalse_4185_;
v___y_4169_ = v___y_4186_;
v___y_4170_ = v___x_3957_;
goto v___jp_4155_;
}
}
}
v___jp_4197_:
{
uint8_t v_interpreted_4212_; 
v_interpreted_4212_ = lean_ctor_get_uint8(v___y_4199_, sizeof(void*)*11 + 1);
v___y_4181_ = v___y_4198_;
v___y_4182_ = v___y_4199_;
v_interpreted_4183_ = v_interpreted_4212_;
v_valueInconsistency_4184_ = v_valueInconsistency_4200_;
v_trueEqFalse_4185_ = v_trueEqFalse_4201_;
v___y_4186_ = v___y_4202_;
v___y_4187_ = v___y_4203_;
v___y_4188_ = v___y_4204_;
v___y_4189_ = v___y_4205_;
v___y_4190_ = v___y_4206_;
v___y_4191_ = v___y_4207_;
v___y_4192_ = v___y_4208_;
v___y_4193_ = v___y_4209_;
v___y_4194_ = v___y_4210_;
v___y_4195_ = v___y_4211_;
goto v___jp_4180_;
}
v___jp_4213_:
{
lean_object* v___x_4226_; 
v___x_4226_ = l_Lean_Meta_Grind_markAsInconsistent___redArg(v___y_4219_, v___y_4224_, v___y_4222_, v___y_4225_, v___y_4221_);
if (lean_obj_tag(v___x_4226_) == 0)
{
lean_dec_ref(v___x_4226_);
v___y_4198_ = v___y_4214_;
v___y_4199_ = v___y_4217_;
v_valueInconsistency_4200_ = v___x_3957_;
v_trueEqFalse_4201_ = v___x_3961_;
v___y_4202_ = v___y_4219_;
v___y_4203_ = v___y_4215_;
v___y_4204_ = v___y_4218_;
v___y_4205_ = v___y_4220_;
v___y_4206_ = v___y_4223_;
v___y_4207_ = v___y_4216_;
v___y_4208_ = v___y_4224_;
v___y_4209_ = v___y_4222_;
v___y_4210_ = v___y_4225_;
v___y_4211_ = v___y_4221_;
goto v___jp_4197_;
}
else
{
lean_dec_ref(v___y_4217_);
lean_dec_ref(v___y_4214_);
lean_dec(v_a_3954_);
lean_dec(v_a_3950_);
lean_dec_ref(v_proof_3931_);
lean_dec_ref(v_rhs_3930_);
lean_dec_ref(v_lhs_3929_);
return v___x_4226_;
}
}
v___jp_4227_:
{
if (v___y_4234_ == 0)
{
lean_object* v_self_4241_; uint8_t v_interpreted_4242_; lean_object* v_self_4243_; lean_object* v___x_4244_; 
v_self_4241_ = lean_ctor_get(v___y_4231_, 0);
v_interpreted_4242_ = lean_ctor_get_uint8(v___y_4231_, sizeof(void*)*11 + 1);
v_self_4243_ = lean_ctor_get(v___y_4228_, 0);
lean_inc_ref(v_self_4243_);
lean_inc_ref(v_self_4241_);
v___x_4244_ = l_Lean_Meta_Grind_hasSameType(v_self_4241_, v_self_4243_, v___y_4239_, v___y_4237_, v___y_4240_, v___y_4236_);
if (lean_obj_tag(v___x_4244_) == 0)
{
lean_object* v_a_4245_; uint8_t v___x_4246_; 
v_a_4245_ = lean_ctor_get(v___x_4244_, 0);
lean_inc(v_a_4245_);
lean_dec_ref(v___x_4244_);
v___x_4246_ = lean_unbox(v_a_4245_);
lean_dec(v_a_4245_);
if (v___x_4246_ == 0)
{
v___y_4181_ = v___y_4228_;
v___y_4182_ = v___y_4231_;
v_interpreted_4183_ = v_interpreted_4242_;
v_valueInconsistency_4184_ = v___x_3957_;
v_trueEqFalse_4185_ = v___x_3957_;
v___y_4186_ = v___y_4233_;
v___y_4187_ = v___y_4230_;
v___y_4188_ = v___y_4232_;
v___y_4189_ = v___y_4235_;
v___y_4190_ = v___y_4238_;
v___y_4191_ = v___y_4229_;
v___y_4192_ = v___y_4239_;
v___y_4193_ = v___y_4237_;
v___y_4194_ = v___y_4240_;
v___y_4195_ = v___y_4236_;
goto v___jp_4180_;
}
else
{
v___y_4181_ = v___y_4228_;
v___y_4182_ = v___y_4231_;
v_interpreted_4183_ = v_interpreted_4242_;
v_valueInconsistency_4184_ = v___x_3961_;
v_trueEqFalse_4185_ = v___x_3957_;
v___y_4186_ = v___y_4233_;
v___y_4187_ = v___y_4230_;
v___y_4188_ = v___y_4232_;
v___y_4189_ = v___y_4235_;
v___y_4190_ = v___y_4238_;
v___y_4191_ = v___y_4229_;
v___y_4192_ = v___y_4239_;
v___y_4193_ = v___y_4237_;
v___y_4194_ = v___y_4240_;
v___y_4195_ = v___y_4236_;
goto v___jp_4180_;
}
}
else
{
lean_object* v_a_4247_; lean_object* v___x_4249_; uint8_t v_isShared_4250_; uint8_t v_isSharedCheck_4254_; 
lean_dec_ref(v___y_4231_);
lean_dec_ref(v___y_4228_);
lean_dec(v_a_3954_);
lean_dec(v_a_3950_);
lean_dec_ref(v_proof_3931_);
lean_dec_ref(v_rhs_3930_);
lean_dec_ref(v_lhs_3929_);
v_a_4247_ = lean_ctor_get(v___x_4244_, 0);
v_isSharedCheck_4254_ = !lean_is_exclusive(v___x_4244_);
if (v_isSharedCheck_4254_ == 0)
{
v___x_4249_ = v___x_4244_;
v_isShared_4250_ = v_isSharedCheck_4254_;
goto v_resetjp_4248_;
}
else
{
lean_inc(v_a_4247_);
lean_dec(v___x_4244_);
v___x_4249_ = lean_box(0);
v_isShared_4250_ = v_isSharedCheck_4254_;
goto v_resetjp_4248_;
}
v_resetjp_4248_:
{
lean_object* v___x_4252_; 
if (v_isShared_4250_ == 0)
{
v___x_4252_ = v___x_4249_;
goto v_reusejp_4251_;
}
else
{
lean_object* v_reuseFailAlloc_4253_; 
v_reuseFailAlloc_4253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4253_, 0, v_a_4247_);
v___x_4252_ = v_reuseFailAlloc_4253_;
goto v_reusejp_4251_;
}
v_reusejp_4251_:
{
return v___x_4252_;
}
}
}
}
else
{
v___y_4198_ = v___y_4228_;
v___y_4199_ = v___y_4231_;
v_valueInconsistency_4200_ = v___x_3961_;
v_trueEqFalse_4201_ = v___x_3957_;
v___y_4202_ = v___y_4233_;
v___y_4203_ = v___y_4230_;
v___y_4204_ = v___y_4232_;
v___y_4205_ = v___y_4235_;
v___y_4206_ = v___y_4238_;
v___y_4207_ = v___y_4229_;
v___y_4208_ = v___y_4239_;
v___y_4209_ = v___y_4237_;
v___y_4210_ = v___y_4240_;
v___y_4211_ = v___y_4236_;
goto v___jp_4197_;
}
}
v___jp_4255_:
{
if (v___y_4268_ == 0)
{
v___y_4198_ = v___y_4256_;
v___y_4199_ = v___y_4259_;
v_valueInconsistency_4200_ = v___x_3957_;
v_trueEqFalse_4201_ = v___x_3957_;
v___y_4202_ = v___y_4261_;
v___y_4203_ = v___y_4257_;
v___y_4204_ = v___y_4260_;
v___y_4205_ = v___y_4262_;
v___y_4206_ = v___y_4265_;
v___y_4207_ = v___y_4258_;
v___y_4208_ = v___y_4266_;
v___y_4209_ = v___y_4264_;
v___y_4210_ = v___y_4267_;
v___y_4211_ = v___y_4263_;
goto v___jp_4197_;
}
else
{
uint8_t v___x_4269_; 
lean_inc_ref(v_root_3955_);
v___x_4269_ = l_Lean_Expr_isTrue(v_root_3955_);
if (v___x_4269_ == 0)
{
uint8_t v___x_4270_; 
lean_inc_ref(v_root_3956_);
v___x_4270_ = l_Lean_Expr_isTrue(v_root_3956_);
if (v___x_4270_ == 0)
{
if (v_isHEq_3932_ == 0)
{
uint8_t v_heqProofs_4271_; 
v_heqProofs_4271_ = lean_ctor_get_uint8(v___y_4259_, sizeof(void*)*11 + 4);
if (v_heqProofs_4271_ == 0)
{
uint8_t v_heqProofs_4272_; 
v_heqProofs_4272_ = lean_ctor_get_uint8(v___y_4256_, sizeof(void*)*11 + 4);
if (v_heqProofs_4272_ == 0)
{
uint8_t v_interpreted_4273_; 
v_interpreted_4273_ = lean_ctor_get_uint8(v___y_4259_, sizeof(void*)*11 + 1);
v___y_4181_ = v___y_4256_;
v___y_4182_ = v___y_4259_;
v_interpreted_4183_ = v_interpreted_4273_;
v_valueInconsistency_4184_ = v___x_3961_;
v_trueEqFalse_4185_ = v___x_3957_;
v___y_4186_ = v___y_4261_;
v___y_4187_ = v___y_4257_;
v___y_4188_ = v___y_4260_;
v___y_4189_ = v___y_4262_;
v___y_4190_ = v___y_4265_;
v___y_4191_ = v___y_4258_;
v___y_4192_ = v___y_4266_;
v___y_4193_ = v___y_4264_;
v___y_4194_ = v___y_4267_;
v___y_4195_ = v___y_4263_;
goto v___jp_4180_;
}
else
{
v___y_4228_ = v___y_4256_;
v___y_4229_ = v___y_4258_;
v___y_4230_ = v___y_4257_;
v___y_4231_ = v___y_4259_;
v___y_4232_ = v___y_4260_;
v___y_4233_ = v___y_4261_;
v___y_4234_ = v___x_4270_;
v___y_4235_ = v___y_4262_;
v___y_4236_ = v___y_4263_;
v___y_4237_ = v___y_4264_;
v___y_4238_ = v___y_4265_;
v___y_4239_ = v___y_4266_;
v___y_4240_ = v___y_4267_;
goto v___jp_4227_;
}
}
else
{
v___y_4228_ = v___y_4256_;
v___y_4229_ = v___y_4258_;
v___y_4230_ = v___y_4257_;
v___y_4231_ = v___y_4259_;
v___y_4232_ = v___y_4260_;
v___y_4233_ = v___y_4261_;
v___y_4234_ = v___x_4270_;
v___y_4235_ = v___y_4262_;
v___y_4236_ = v___y_4263_;
v___y_4237_ = v___y_4264_;
v___y_4238_ = v___y_4265_;
v___y_4239_ = v___y_4266_;
v___y_4240_ = v___y_4267_;
goto v___jp_4227_;
}
}
else
{
v___y_4228_ = v___y_4256_;
v___y_4229_ = v___y_4258_;
v___y_4230_ = v___y_4257_;
v___y_4231_ = v___y_4259_;
v___y_4232_ = v___y_4260_;
v___y_4233_ = v___y_4261_;
v___y_4234_ = v___x_4270_;
v___y_4235_ = v___y_4262_;
v___y_4236_ = v___y_4263_;
v___y_4237_ = v___y_4264_;
v___y_4238_ = v___y_4265_;
v___y_4239_ = v___y_4266_;
v___y_4240_ = v___y_4267_;
goto v___jp_4227_;
}
}
else
{
v___y_4214_ = v___y_4256_;
v___y_4215_ = v___y_4257_;
v___y_4216_ = v___y_4258_;
v___y_4217_ = v___y_4259_;
v___y_4218_ = v___y_4260_;
v___y_4219_ = v___y_4261_;
v___y_4220_ = v___y_4262_;
v___y_4221_ = v___y_4263_;
v___y_4222_ = v___y_4264_;
v___y_4223_ = v___y_4265_;
v___y_4224_ = v___y_4266_;
v___y_4225_ = v___y_4267_;
goto v___jp_4213_;
}
}
else
{
v___y_4214_ = v___y_4256_;
v___y_4215_ = v___y_4257_;
v___y_4216_ = v___y_4258_;
v___y_4217_ = v___y_4259_;
v___y_4218_ = v___y_4260_;
v___y_4219_ = v___y_4261_;
v___y_4220_ = v___y_4262_;
v___y_4221_ = v___y_4263_;
v___y_4222_ = v___y_4264_;
v___y_4223_ = v___y_4265_;
v___y_4224_ = v___y_4266_;
v___y_4225_ = v___y_4267_;
goto v___jp_4213_;
}
}
}
v___jp_4274_:
{
lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; 
v___x_4285_ = lean_st_ref_get(v___y_4284_);
lean_dec(v___x_4285_);
v___x_4286_ = lean_st_ref_get(v___y_4275_);
lean_inc_ref(v_root_3955_);
v___x_4287_ = l_Lean_Meta_Grind_Goal_getENode(v___x_4286_, v_root_3955_, v___y_4281_, v___y_4282_, v___y_4283_, v___y_4284_);
lean_dec(v___x_4286_);
if (lean_obj_tag(v___x_4287_) == 0)
{
lean_object* v_a_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; 
v_a_4288_ = lean_ctor_get(v___x_4287_, 0);
lean_inc(v_a_4288_);
lean_dec_ref(v___x_4287_);
v___x_4289_ = lean_st_ref_get(v___y_4284_);
lean_dec(v___x_4289_);
v___x_4290_ = lean_st_ref_get(v___y_4275_);
lean_inc_ref(v_root_3956_);
v___x_4291_ = l_Lean_Meta_Grind_Goal_getENode(v___x_4290_, v_root_3956_, v___y_4281_, v___y_4282_, v___y_4283_, v___y_4284_);
lean_dec(v___x_4290_);
if (lean_obj_tag(v___x_4291_) == 0)
{
uint8_t v_interpreted_4292_; 
v_interpreted_4292_ = lean_ctor_get_uint8(v_a_4288_, sizeof(void*)*11 + 1);
if (v_interpreted_4292_ == 0)
{
lean_object* v_a_4293_; 
v_a_4293_ = lean_ctor_get(v___x_4291_, 0);
lean_inc(v_a_4293_);
lean_dec_ref(v___x_4291_);
v___y_4256_ = v_a_4293_;
v___y_4257_ = v___y_4276_;
v___y_4258_ = v___y_4280_;
v___y_4259_ = v_a_4288_;
v___y_4260_ = v___y_4277_;
v___y_4261_ = v___y_4275_;
v___y_4262_ = v___y_4278_;
v___y_4263_ = v___y_4284_;
v___y_4264_ = v___y_4282_;
v___y_4265_ = v___y_4279_;
v___y_4266_ = v___y_4281_;
v___y_4267_ = v___y_4283_;
v___y_4268_ = v___x_3957_;
goto v___jp_4255_;
}
else
{
lean_object* v_a_4294_; uint8_t v_interpreted_4295_; 
v_a_4294_ = lean_ctor_get(v___x_4291_, 0);
lean_inc(v_a_4294_);
lean_dec_ref(v___x_4291_);
v_interpreted_4295_ = lean_ctor_get_uint8(v_a_4294_, sizeof(void*)*11 + 1);
v___y_4256_ = v_a_4294_;
v___y_4257_ = v___y_4276_;
v___y_4258_ = v___y_4280_;
v___y_4259_ = v_a_4288_;
v___y_4260_ = v___y_4277_;
v___y_4261_ = v___y_4275_;
v___y_4262_ = v___y_4278_;
v___y_4263_ = v___y_4284_;
v___y_4264_ = v___y_4282_;
v___y_4265_ = v___y_4279_;
v___y_4266_ = v___y_4281_;
v___y_4267_ = v___y_4283_;
v___y_4268_ = v_interpreted_4295_;
goto v___jp_4255_;
}
}
else
{
lean_object* v_a_4296_; lean_object* v___x_4298_; uint8_t v_isShared_4299_; uint8_t v_isSharedCheck_4303_; 
lean_dec(v_a_4288_);
lean_dec(v_a_3954_);
lean_dec(v_a_3950_);
lean_dec_ref(v_proof_3931_);
lean_dec_ref(v_rhs_3930_);
lean_dec_ref(v_lhs_3929_);
v_a_4296_ = lean_ctor_get(v___x_4291_, 0);
v_isSharedCheck_4303_ = !lean_is_exclusive(v___x_4291_);
if (v_isSharedCheck_4303_ == 0)
{
v___x_4298_ = v___x_4291_;
v_isShared_4299_ = v_isSharedCheck_4303_;
goto v_resetjp_4297_;
}
else
{
lean_inc(v_a_4296_);
lean_dec(v___x_4291_);
v___x_4298_ = lean_box(0);
v_isShared_4299_ = v_isSharedCheck_4303_;
goto v_resetjp_4297_;
}
v_resetjp_4297_:
{
lean_object* v___x_4301_; 
if (v_isShared_4299_ == 0)
{
v___x_4301_ = v___x_4298_;
goto v_reusejp_4300_;
}
else
{
lean_object* v_reuseFailAlloc_4302_; 
v_reuseFailAlloc_4302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4302_, 0, v_a_4296_);
v___x_4301_ = v_reuseFailAlloc_4302_;
goto v_reusejp_4300_;
}
v_reusejp_4300_:
{
return v___x_4301_;
}
}
}
}
else
{
lean_object* v_a_4304_; lean_object* v___x_4306_; uint8_t v_isShared_4307_; uint8_t v_isSharedCheck_4311_; 
lean_dec(v_a_3954_);
lean_dec(v_a_3950_);
lean_dec_ref(v_proof_3931_);
lean_dec_ref(v_rhs_3930_);
lean_dec_ref(v_lhs_3929_);
v_a_4304_ = lean_ctor_get(v___x_4287_, 0);
v_isSharedCheck_4311_ = !lean_is_exclusive(v___x_4287_);
if (v_isSharedCheck_4311_ == 0)
{
v___x_4306_ = v___x_4287_;
v_isShared_4307_ = v_isSharedCheck_4311_;
goto v_resetjp_4305_;
}
else
{
lean_inc(v_a_4304_);
lean_dec(v___x_4287_);
v___x_4306_ = lean_box(0);
v_isShared_4307_ = v_isSharedCheck_4311_;
goto v_resetjp_4305_;
}
v_resetjp_4305_:
{
lean_object* v___x_4309_; 
if (v_isShared_4307_ == 0)
{
v___x_4309_ = v___x_4306_;
goto v_reusejp_4308_;
}
else
{
lean_object* v_reuseFailAlloc_4310_; 
v_reuseFailAlloc_4310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4310_, 0, v_a_4304_);
v___x_4309_ = v_reuseFailAlloc_4310_;
goto v_reusejp_4308_;
}
v_reusejp_4308_:
{
return v___x_4309_;
}
}
}
}
}
else
{
lean_object* v_options_4331_; uint8_t v_hasTrace_4332_; 
lean_dec(v_a_3954_);
lean_dec(v_a_3950_);
lean_dec_ref(v_proof_3931_);
v_options_4331_ = lean_ctor_get(v_a_3941_, 2);
v_hasTrace_4332_ = lean_ctor_get_uint8(v_options_4331_, sizeof(void*)*1);
if (v_hasTrace_4332_ == 0)
{
lean_dec_ref(v_rhs_3930_);
lean_dec_ref(v_lhs_3929_);
goto v___jp_3944_;
}
else
{
lean_object* v_inheritedTraceOptions_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; uint8_t v___x_4336_; 
v_inheritedTraceOptions_4333_ = lean_ctor_get(v_a_3941_, 13);
v___x_4334_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0);
v___x_4335_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1);
v___x_4336_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4333_, v_options_4331_, v___x_4335_);
if (v___x_4336_ == 0)
{
lean_dec_ref(v_rhs_3930_);
lean_dec_ref(v_lhs_3929_);
goto v___jp_3944_;
}
else
{
lean_object* v___x_4337_; 
v___x_4337_ = l_Lean_Meta_Grind_updateLastTag(v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_, v_a_3938_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_);
if (lean_obj_tag(v___x_4337_) == 0)
{
lean_object* v___x_4338_; 
lean_dec_ref(v___x_4337_);
v___x_4338_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_lhs_3929_, v_a_3933_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_);
if (lean_obj_tag(v___x_4338_) == 0)
{
lean_object* v_a_4339_; lean_object* v___x_4340_; 
v_a_4339_ = lean_ctor_get(v___x_4338_, 0);
lean_inc(v_a_4339_);
lean_dec_ref(v___x_4338_);
v___x_4340_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_rhs_3930_, v_a_3933_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_);
if (lean_obj_tag(v___x_4340_) == 0)
{
lean_object* v_a_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; 
v_a_4341_ = lean_ctor_get(v___x_4340_, 0);
lean_inc(v_a_4341_);
lean_dec_ref(v___x_4340_);
v___x_4342_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6);
v___x_4343_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4343_, 0, v_a_4339_);
lean_ctor_set(v___x_4343_, 1, v___x_4342_);
v___x_4344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4344_, 0, v___x_4343_);
lean_ctor_set(v___x_4344_, 1, v_a_4341_);
v___x_4345_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8);
v___x_4346_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4346_, 0, v___x_4344_);
lean_ctor_set(v___x_4346_, 1, v___x_4345_);
v___x_4347_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_4334_, v___x_4346_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_);
if (lean_obj_tag(v___x_4347_) == 0)
{
lean_dec_ref(v___x_4347_);
goto v___jp_3944_;
}
else
{
return v___x_4347_;
}
}
else
{
lean_object* v_a_4348_; lean_object* v___x_4350_; uint8_t v_isShared_4351_; uint8_t v_isSharedCheck_4355_; 
lean_dec(v_a_4339_);
v_a_4348_ = lean_ctor_get(v___x_4340_, 0);
v_isSharedCheck_4355_ = !lean_is_exclusive(v___x_4340_);
if (v_isSharedCheck_4355_ == 0)
{
v___x_4350_ = v___x_4340_;
v_isShared_4351_ = v_isSharedCheck_4355_;
goto v_resetjp_4349_;
}
else
{
lean_inc(v_a_4348_);
lean_dec(v___x_4340_);
v___x_4350_ = lean_box(0);
v_isShared_4351_ = v_isSharedCheck_4355_;
goto v_resetjp_4349_;
}
v_resetjp_4349_:
{
lean_object* v___x_4353_; 
if (v_isShared_4351_ == 0)
{
v___x_4353_ = v___x_4350_;
goto v_reusejp_4352_;
}
else
{
lean_object* v_reuseFailAlloc_4354_; 
v_reuseFailAlloc_4354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4354_, 0, v_a_4348_);
v___x_4353_ = v_reuseFailAlloc_4354_;
goto v_reusejp_4352_;
}
v_reusejp_4352_:
{
return v___x_4353_;
}
}
}
}
else
{
lean_object* v_a_4356_; lean_object* v___x_4358_; uint8_t v_isShared_4359_; uint8_t v_isSharedCheck_4363_; 
lean_dec_ref(v_rhs_3930_);
v_a_4356_ = lean_ctor_get(v___x_4338_, 0);
v_isSharedCheck_4363_ = !lean_is_exclusive(v___x_4338_);
if (v_isSharedCheck_4363_ == 0)
{
v___x_4358_ = v___x_4338_;
v_isShared_4359_ = v_isSharedCheck_4363_;
goto v_resetjp_4357_;
}
else
{
lean_inc(v_a_4356_);
lean_dec(v___x_4338_);
v___x_4358_ = lean_box(0);
v_isShared_4359_ = v_isSharedCheck_4363_;
goto v_resetjp_4357_;
}
v_resetjp_4357_:
{
lean_object* v___x_4361_; 
if (v_isShared_4359_ == 0)
{
v___x_4361_ = v___x_4358_;
goto v_reusejp_4360_;
}
else
{
lean_object* v_reuseFailAlloc_4362_; 
v_reuseFailAlloc_4362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4362_, 0, v_a_4356_);
v___x_4361_ = v_reuseFailAlloc_4362_;
goto v_reusejp_4360_;
}
v_reusejp_4360_:
{
return v___x_4361_;
}
}
}
}
else
{
lean_dec_ref(v_rhs_3930_);
lean_dec_ref(v_lhs_3929_);
return v___x_4337_;
}
}
}
}
}
else
{
lean_object* v_a_4364_; lean_object* v___x_4366_; uint8_t v_isShared_4367_; uint8_t v_isSharedCheck_4371_; 
lean_dec(v_a_3950_);
lean_dec_ref(v_proof_3931_);
lean_dec_ref(v_rhs_3930_);
lean_dec_ref(v_lhs_3929_);
v_a_4364_ = lean_ctor_get(v___x_3953_, 0);
v_isSharedCheck_4371_ = !lean_is_exclusive(v___x_3953_);
if (v_isSharedCheck_4371_ == 0)
{
v___x_4366_ = v___x_3953_;
v_isShared_4367_ = v_isSharedCheck_4371_;
goto v_resetjp_4365_;
}
else
{
lean_inc(v_a_4364_);
lean_dec(v___x_3953_);
v___x_4366_ = lean_box(0);
v_isShared_4367_ = v_isSharedCheck_4371_;
goto v_resetjp_4365_;
}
v_resetjp_4365_:
{
lean_object* v___x_4369_; 
if (v_isShared_4367_ == 0)
{
v___x_4369_ = v___x_4366_;
goto v_reusejp_4368_;
}
else
{
lean_object* v_reuseFailAlloc_4370_; 
v_reuseFailAlloc_4370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4370_, 0, v_a_4364_);
v___x_4369_ = v_reuseFailAlloc_4370_;
goto v_reusejp_4368_;
}
v_reusejp_4368_:
{
return v___x_4369_;
}
}
}
}
else
{
lean_object* v_a_4372_; lean_object* v___x_4374_; uint8_t v_isShared_4375_; uint8_t v_isSharedCheck_4379_; 
lean_dec_ref(v_proof_3931_);
lean_dec_ref(v_rhs_3930_);
lean_dec_ref(v_lhs_3929_);
v_a_4372_ = lean_ctor_get(v___x_3949_, 0);
v_isSharedCheck_4379_ = !lean_is_exclusive(v___x_3949_);
if (v_isSharedCheck_4379_ == 0)
{
v___x_4374_ = v___x_3949_;
v_isShared_4375_ = v_isSharedCheck_4379_;
goto v_resetjp_4373_;
}
else
{
lean_inc(v_a_4372_);
lean_dec(v___x_3949_);
v___x_4374_ = lean_box(0);
v_isShared_4375_ = v_isSharedCheck_4379_;
goto v_resetjp_4373_;
}
v_resetjp_4373_:
{
lean_object* v___x_4377_; 
if (v_isShared_4375_ == 0)
{
v___x_4377_ = v___x_4374_;
goto v_reusejp_4376_;
}
else
{
lean_object* v_reuseFailAlloc_4378_; 
v_reuseFailAlloc_4378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4378_, 0, v_a_4372_);
v___x_4377_ = v_reuseFailAlloc_4378_;
goto v_reusejp_4376_;
}
v_reusejp_4376_:
{
return v___x_4377_;
}
}
}
v___jp_3944_:
{
lean_object* v___x_3945_; lean_object* v___x_3946_; 
v___x_3945_ = lean_box(0);
v___x_3946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3946_, 0, v___x_3945_);
return v___x_3946_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___boxed(lean_object* v_lhs_4380_, lean_object* v_rhs_4381_, lean_object* v_proof_4382_, lean_object* v_isHEq_4383_, lean_object* v_a_4384_, lean_object* v_a_4385_, lean_object* v_a_4386_, lean_object* v_a_4387_, lean_object* v_a_4388_, lean_object* v_a_4389_, lean_object* v_a_4390_, lean_object* v_a_4391_, lean_object* v_a_4392_, lean_object* v_a_4393_, lean_object* v_a_4394_){
_start:
{
uint8_t v_isHEq_boxed_4395_; lean_object* v_res_4396_; 
v_isHEq_boxed_4395_ = lean_unbox(v_isHEq_4383_);
v_res_4396_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep(v_lhs_4380_, v_rhs_4381_, v_proof_4382_, v_isHEq_boxed_4395_, v_a_4384_, v_a_4385_, v_a_4386_, v_a_4387_, v_a_4388_, v_a_4389_, v_a_4390_, v_a_4391_, v_a_4392_, v_a_4393_);
lean_dec(v_a_4393_);
lean_dec_ref(v_a_4392_);
lean_dec(v_a_4391_);
lean_dec_ref(v_a_4390_);
lean_dec(v_a_4389_);
lean_dec_ref(v_a_4388_);
lean_dec(v_a_4387_);
lean_dec_ref(v_a_4386_);
lean_dec(v_a_4385_);
lean_dec(v_a_4384_);
return v_res_4396_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg___closed__0(void){
_start:
{
lean_object* v___x_4397_; lean_object* v___x_4398_; 
v___x_4397_ = lean_unsigned_to_nat(0u);
v___x_4398_ = lean_mk_empty_array_with_capacity(v___x_4397_);
return v___x_4398_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg(lean_object* v_a_4399_, lean_object* v_a_4400_){
_start:
{
lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v_toGoalState_4404_; lean_object* v_mvarId_4405_; lean_object* v___x_4407_; uint8_t v_isShared_4408_; uint8_t v_isSharedCheck_4441_; 
v___x_4402_ = lean_st_ref_get(v_a_4400_);
lean_dec(v___x_4402_);
v___x_4403_ = lean_st_ref_take(v_a_4399_);
v_toGoalState_4404_ = lean_ctor_get(v___x_4403_, 0);
v_mvarId_4405_ = lean_ctor_get(v___x_4403_, 1);
v_isSharedCheck_4441_ = !lean_is_exclusive(v___x_4403_);
if (v_isSharedCheck_4441_ == 0)
{
v___x_4407_ = v___x_4403_;
v_isShared_4408_ = v_isSharedCheck_4441_;
goto v_resetjp_4406_;
}
else
{
lean_inc(v_mvarId_4405_);
lean_inc(v_toGoalState_4404_);
lean_dec(v___x_4403_);
v___x_4407_ = lean_box(0);
v_isShared_4408_ = v_isSharedCheck_4441_;
goto v_resetjp_4406_;
}
v_resetjp_4406_:
{
lean_object* v_nextDeclIdx_4409_; lean_object* v_enodeMap_4410_; lean_object* v_exprs_4411_; lean_object* v_parents_4412_; lean_object* v_congrTable_4413_; lean_object* v_appMap_4414_; lean_object* v_indicesFound_4415_; uint8_t v_inconsistent_4416_; lean_object* v_nextIdx_4417_; lean_object* v_newRawFacts_4418_; lean_object* v_facts_4419_; lean_object* v_extThms_4420_; lean_object* v_ematch_4421_; lean_object* v_inj_4422_; lean_object* v_split_4423_; lean_object* v_clean_4424_; lean_object* v_sstates_4425_; lean_object* v___x_4427_; uint8_t v_isShared_4428_; uint8_t v_isSharedCheck_4439_; 
v_nextDeclIdx_4409_ = lean_ctor_get(v_toGoalState_4404_, 0);
v_enodeMap_4410_ = lean_ctor_get(v_toGoalState_4404_, 1);
v_exprs_4411_ = lean_ctor_get(v_toGoalState_4404_, 2);
v_parents_4412_ = lean_ctor_get(v_toGoalState_4404_, 3);
v_congrTable_4413_ = lean_ctor_get(v_toGoalState_4404_, 4);
v_appMap_4414_ = lean_ctor_get(v_toGoalState_4404_, 5);
v_indicesFound_4415_ = lean_ctor_get(v_toGoalState_4404_, 6);
v_inconsistent_4416_ = lean_ctor_get_uint8(v_toGoalState_4404_, sizeof(void*)*17);
v_nextIdx_4417_ = lean_ctor_get(v_toGoalState_4404_, 8);
v_newRawFacts_4418_ = lean_ctor_get(v_toGoalState_4404_, 9);
v_facts_4419_ = lean_ctor_get(v_toGoalState_4404_, 10);
v_extThms_4420_ = lean_ctor_get(v_toGoalState_4404_, 11);
v_ematch_4421_ = lean_ctor_get(v_toGoalState_4404_, 12);
v_inj_4422_ = lean_ctor_get(v_toGoalState_4404_, 13);
v_split_4423_ = lean_ctor_get(v_toGoalState_4404_, 14);
v_clean_4424_ = lean_ctor_get(v_toGoalState_4404_, 15);
v_sstates_4425_ = lean_ctor_get(v_toGoalState_4404_, 16);
v_isSharedCheck_4439_ = !lean_is_exclusive(v_toGoalState_4404_);
if (v_isSharedCheck_4439_ == 0)
{
lean_object* v_unused_4440_; 
v_unused_4440_ = lean_ctor_get(v_toGoalState_4404_, 7);
lean_dec(v_unused_4440_);
v___x_4427_ = v_toGoalState_4404_;
v_isShared_4428_ = v_isSharedCheck_4439_;
goto v_resetjp_4426_;
}
else
{
lean_inc(v_sstates_4425_);
lean_inc(v_clean_4424_);
lean_inc(v_split_4423_);
lean_inc(v_inj_4422_);
lean_inc(v_ematch_4421_);
lean_inc(v_extThms_4420_);
lean_inc(v_facts_4419_);
lean_inc(v_newRawFacts_4418_);
lean_inc(v_nextIdx_4417_);
lean_inc(v_indicesFound_4415_);
lean_inc(v_appMap_4414_);
lean_inc(v_congrTable_4413_);
lean_inc(v_parents_4412_);
lean_inc(v_exprs_4411_);
lean_inc(v_enodeMap_4410_);
lean_inc(v_nextDeclIdx_4409_);
lean_dec(v_toGoalState_4404_);
v___x_4427_ = lean_box(0);
v_isShared_4428_ = v_isSharedCheck_4439_;
goto v_resetjp_4426_;
}
v_resetjp_4426_:
{
lean_object* v___x_4429_; lean_object* v___x_4431_; 
v___x_4429_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg___closed__0);
if (v_isShared_4428_ == 0)
{
lean_ctor_set(v___x_4427_, 7, v___x_4429_);
v___x_4431_ = v___x_4427_;
goto v_reusejp_4430_;
}
else
{
lean_object* v_reuseFailAlloc_4438_; 
v_reuseFailAlloc_4438_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_4438_, 0, v_nextDeclIdx_4409_);
lean_ctor_set(v_reuseFailAlloc_4438_, 1, v_enodeMap_4410_);
lean_ctor_set(v_reuseFailAlloc_4438_, 2, v_exprs_4411_);
lean_ctor_set(v_reuseFailAlloc_4438_, 3, v_parents_4412_);
lean_ctor_set(v_reuseFailAlloc_4438_, 4, v_congrTable_4413_);
lean_ctor_set(v_reuseFailAlloc_4438_, 5, v_appMap_4414_);
lean_ctor_set(v_reuseFailAlloc_4438_, 6, v_indicesFound_4415_);
lean_ctor_set(v_reuseFailAlloc_4438_, 7, v___x_4429_);
lean_ctor_set(v_reuseFailAlloc_4438_, 8, v_nextIdx_4417_);
lean_ctor_set(v_reuseFailAlloc_4438_, 9, v_newRawFacts_4418_);
lean_ctor_set(v_reuseFailAlloc_4438_, 10, v_facts_4419_);
lean_ctor_set(v_reuseFailAlloc_4438_, 11, v_extThms_4420_);
lean_ctor_set(v_reuseFailAlloc_4438_, 12, v_ematch_4421_);
lean_ctor_set(v_reuseFailAlloc_4438_, 13, v_inj_4422_);
lean_ctor_set(v_reuseFailAlloc_4438_, 14, v_split_4423_);
lean_ctor_set(v_reuseFailAlloc_4438_, 15, v_clean_4424_);
lean_ctor_set(v_reuseFailAlloc_4438_, 16, v_sstates_4425_);
lean_ctor_set_uint8(v_reuseFailAlloc_4438_, sizeof(void*)*17, v_inconsistent_4416_);
v___x_4431_ = v_reuseFailAlloc_4438_;
goto v_reusejp_4430_;
}
v_reusejp_4430_:
{
lean_object* v___x_4433_; 
if (v_isShared_4408_ == 0)
{
lean_ctor_set(v___x_4407_, 0, v___x_4431_);
v___x_4433_ = v___x_4407_;
goto v_reusejp_4432_;
}
else
{
lean_object* v_reuseFailAlloc_4437_; 
v_reuseFailAlloc_4437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4437_, 0, v___x_4431_);
lean_ctor_set(v_reuseFailAlloc_4437_, 1, v_mvarId_4405_);
v___x_4433_ = v_reuseFailAlloc_4437_;
goto v_reusejp_4432_;
}
v_reusejp_4432_:
{
lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; 
v___x_4434_ = lean_st_ref_set(v_a_4399_, v___x_4433_);
v___x_4435_ = lean_box(0);
v___x_4436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4436_, 0, v___x_4435_);
return v___x_4436_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg___boxed(lean_object* v_a_4442_, lean_object* v_a_4443_, lean_object* v_a_4444_){
_start:
{
lean_object* v_res_4445_; 
v_res_4445_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg(v_a_4442_, v_a_4443_);
lean_dec(v_a_4443_);
lean_dec(v_a_4442_);
return v_res_4445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts(lean_object* v_a_4446_, lean_object* v_a_4447_, lean_object* v_a_4448_, lean_object* v_a_4449_, lean_object* v_a_4450_, lean_object* v_a_4451_, lean_object* v_a_4452_, lean_object* v_a_4453_, lean_object* v_a_4454_, lean_object* v_a_4455_){
_start:
{
lean_object* v___x_4457_; 
v___x_4457_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg(v_a_4446_, v_a_4455_);
return v___x_4457_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___boxed(lean_object* v_a_4458_, lean_object* v_a_4459_, lean_object* v_a_4460_, lean_object* v_a_4461_, lean_object* v_a_4462_, lean_object* v_a_4463_, lean_object* v_a_4464_, lean_object* v_a_4465_, lean_object* v_a_4466_, lean_object* v_a_4467_, lean_object* v_a_4468_){
_start:
{
lean_object* v_res_4469_; 
v_res_4469_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts(v_a_4458_, v_a_4459_, v_a_4460_, v_a_4461_, v_a_4462_, v_a_4463_, v_a_4464_, v_a_4465_, v_a_4466_, v_a_4467_);
lean_dec(v_a_4467_);
lean_dec_ref(v_a_4466_);
lean_dec(v_a_4465_);
lean_dec_ref(v_a_4464_);
lean_dec(v_a_4463_);
lean_dec_ref(v_a_4462_);
lean_dec(v_a_4461_);
lean_dec_ref(v_a_4460_);
lean_dec(v_a_4459_);
lean_dec(v_a_4458_);
return v_res_4469_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___redArg(lean_object* v_a_4470_, lean_object* v_a_4471_){
_start:
{
lean_object* v___x_4473_; lean_object* v___x_4474_; lean_object* v_toGoalState_4475_; lean_object* v_newFacts_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; uint8_t v___x_4480_; 
v___x_4473_ = lean_st_ref_get(v_a_4471_);
lean_dec(v___x_4473_);
v___x_4474_ = lean_st_ref_get(v_a_4470_);
v_toGoalState_4475_ = lean_ctor_get(v___x_4474_, 0);
lean_inc_ref(v_toGoalState_4475_);
lean_dec(v___x_4474_);
v_newFacts_4476_ = lean_ctor_get(v_toGoalState_4475_, 7);
lean_inc_ref(v_newFacts_4476_);
lean_dec_ref(v_toGoalState_4475_);
v___x_4477_ = lean_array_get_size(v_newFacts_4476_);
v___x_4478_ = lean_unsigned_to_nat(1u);
v___x_4479_ = lean_nat_sub(v___x_4477_, v___x_4478_);
v___x_4480_ = lean_nat_dec_lt(v___x_4479_, v___x_4477_);
if (v___x_4480_ == 0)
{
lean_object* v___x_4481_; lean_object* v___x_4482_; 
lean_dec(v___x_4479_);
lean_dec_ref(v_newFacts_4476_);
v___x_4481_ = lean_box(0);
v___x_4482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4482_, 0, v___x_4481_);
return v___x_4482_;
}
else
{
lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v_toGoalState_4485_; lean_object* v_mvarId_4486_; lean_object* v___x_4488_; uint8_t v_isShared_4489_; uint8_t v_isSharedCheck_4523_; 
v___x_4483_ = lean_st_ref_get(v_a_4471_);
lean_dec(v___x_4483_);
v___x_4484_ = lean_st_ref_take(v_a_4470_);
v_toGoalState_4485_ = lean_ctor_get(v___x_4484_, 0);
v_mvarId_4486_ = lean_ctor_get(v___x_4484_, 1);
v_isSharedCheck_4523_ = !lean_is_exclusive(v___x_4484_);
if (v_isSharedCheck_4523_ == 0)
{
v___x_4488_ = v___x_4484_;
v_isShared_4489_ = v_isSharedCheck_4523_;
goto v_resetjp_4487_;
}
else
{
lean_inc(v_mvarId_4486_);
lean_inc(v_toGoalState_4485_);
lean_dec(v___x_4484_);
v___x_4488_ = lean_box(0);
v_isShared_4489_ = v_isSharedCheck_4523_;
goto v_resetjp_4487_;
}
v_resetjp_4487_:
{
lean_object* v_nextDeclIdx_4490_; lean_object* v_enodeMap_4491_; lean_object* v_exprs_4492_; lean_object* v_parents_4493_; lean_object* v_congrTable_4494_; lean_object* v_appMap_4495_; lean_object* v_indicesFound_4496_; lean_object* v_newFacts_4497_; uint8_t v_inconsistent_4498_; lean_object* v_nextIdx_4499_; lean_object* v_newRawFacts_4500_; lean_object* v_facts_4501_; lean_object* v_extThms_4502_; lean_object* v_ematch_4503_; lean_object* v_inj_4504_; lean_object* v_split_4505_; lean_object* v_clean_4506_; lean_object* v_sstates_4507_; lean_object* v___x_4509_; uint8_t v_isShared_4510_; uint8_t v_isSharedCheck_4522_; 
v_nextDeclIdx_4490_ = lean_ctor_get(v_toGoalState_4485_, 0);
v_enodeMap_4491_ = lean_ctor_get(v_toGoalState_4485_, 1);
v_exprs_4492_ = lean_ctor_get(v_toGoalState_4485_, 2);
v_parents_4493_ = lean_ctor_get(v_toGoalState_4485_, 3);
v_congrTable_4494_ = lean_ctor_get(v_toGoalState_4485_, 4);
v_appMap_4495_ = lean_ctor_get(v_toGoalState_4485_, 5);
v_indicesFound_4496_ = lean_ctor_get(v_toGoalState_4485_, 6);
v_newFacts_4497_ = lean_ctor_get(v_toGoalState_4485_, 7);
v_inconsistent_4498_ = lean_ctor_get_uint8(v_toGoalState_4485_, sizeof(void*)*17);
v_nextIdx_4499_ = lean_ctor_get(v_toGoalState_4485_, 8);
v_newRawFacts_4500_ = lean_ctor_get(v_toGoalState_4485_, 9);
v_facts_4501_ = lean_ctor_get(v_toGoalState_4485_, 10);
v_extThms_4502_ = lean_ctor_get(v_toGoalState_4485_, 11);
v_ematch_4503_ = lean_ctor_get(v_toGoalState_4485_, 12);
v_inj_4504_ = lean_ctor_get(v_toGoalState_4485_, 13);
v_split_4505_ = lean_ctor_get(v_toGoalState_4485_, 14);
v_clean_4506_ = lean_ctor_get(v_toGoalState_4485_, 15);
v_sstates_4507_ = lean_ctor_get(v_toGoalState_4485_, 16);
v_isSharedCheck_4522_ = !lean_is_exclusive(v_toGoalState_4485_);
if (v_isSharedCheck_4522_ == 0)
{
v___x_4509_ = v_toGoalState_4485_;
v_isShared_4510_ = v_isSharedCheck_4522_;
goto v_resetjp_4508_;
}
else
{
lean_inc(v_sstates_4507_);
lean_inc(v_clean_4506_);
lean_inc(v_split_4505_);
lean_inc(v_inj_4504_);
lean_inc(v_ematch_4503_);
lean_inc(v_extThms_4502_);
lean_inc(v_facts_4501_);
lean_inc(v_newRawFacts_4500_);
lean_inc(v_nextIdx_4499_);
lean_inc(v_newFacts_4497_);
lean_inc(v_indicesFound_4496_);
lean_inc(v_appMap_4495_);
lean_inc(v_congrTable_4494_);
lean_inc(v_parents_4493_);
lean_inc(v_exprs_4492_);
lean_inc(v_enodeMap_4491_);
lean_inc(v_nextDeclIdx_4490_);
lean_dec(v_toGoalState_4485_);
v___x_4509_ = lean_box(0);
v_isShared_4510_ = v_isSharedCheck_4522_;
goto v_resetjp_4508_;
}
v_resetjp_4508_:
{
lean_object* v___x_4511_; lean_object* v___x_4513_; 
v___x_4511_ = lean_array_pop(v_newFacts_4497_);
if (v_isShared_4510_ == 0)
{
lean_ctor_set(v___x_4509_, 7, v___x_4511_);
v___x_4513_ = v___x_4509_;
goto v_reusejp_4512_;
}
else
{
lean_object* v_reuseFailAlloc_4521_; 
v_reuseFailAlloc_4521_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_4521_, 0, v_nextDeclIdx_4490_);
lean_ctor_set(v_reuseFailAlloc_4521_, 1, v_enodeMap_4491_);
lean_ctor_set(v_reuseFailAlloc_4521_, 2, v_exprs_4492_);
lean_ctor_set(v_reuseFailAlloc_4521_, 3, v_parents_4493_);
lean_ctor_set(v_reuseFailAlloc_4521_, 4, v_congrTable_4494_);
lean_ctor_set(v_reuseFailAlloc_4521_, 5, v_appMap_4495_);
lean_ctor_set(v_reuseFailAlloc_4521_, 6, v_indicesFound_4496_);
lean_ctor_set(v_reuseFailAlloc_4521_, 7, v___x_4511_);
lean_ctor_set(v_reuseFailAlloc_4521_, 8, v_nextIdx_4499_);
lean_ctor_set(v_reuseFailAlloc_4521_, 9, v_newRawFacts_4500_);
lean_ctor_set(v_reuseFailAlloc_4521_, 10, v_facts_4501_);
lean_ctor_set(v_reuseFailAlloc_4521_, 11, v_extThms_4502_);
lean_ctor_set(v_reuseFailAlloc_4521_, 12, v_ematch_4503_);
lean_ctor_set(v_reuseFailAlloc_4521_, 13, v_inj_4504_);
lean_ctor_set(v_reuseFailAlloc_4521_, 14, v_split_4505_);
lean_ctor_set(v_reuseFailAlloc_4521_, 15, v_clean_4506_);
lean_ctor_set(v_reuseFailAlloc_4521_, 16, v_sstates_4507_);
lean_ctor_set_uint8(v_reuseFailAlloc_4521_, sizeof(void*)*17, v_inconsistent_4498_);
v___x_4513_ = v_reuseFailAlloc_4521_;
goto v_reusejp_4512_;
}
v_reusejp_4512_:
{
lean_object* v___x_4515_; 
if (v_isShared_4489_ == 0)
{
lean_ctor_set(v___x_4488_, 0, v___x_4513_);
v___x_4515_ = v___x_4488_;
goto v_reusejp_4514_;
}
else
{
lean_object* v_reuseFailAlloc_4520_; 
v_reuseFailAlloc_4520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4520_, 0, v___x_4513_);
lean_ctor_set(v_reuseFailAlloc_4520_, 1, v_mvarId_4486_);
v___x_4515_ = v_reuseFailAlloc_4520_;
goto v_reusejp_4514_;
}
v_reusejp_4514_:
{
lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; 
v___x_4516_ = lean_st_ref_set(v_a_4470_, v___x_4515_);
v___x_4517_ = lean_array_fget(v_newFacts_4476_, v___x_4479_);
lean_dec(v___x_4479_);
lean_dec_ref(v_newFacts_4476_);
v___x_4518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4518_, 0, v___x_4517_);
v___x_4519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4519_, 0, v___x_4518_);
return v___x_4519_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___redArg___boxed(lean_object* v_a_4524_, lean_object* v_a_4525_, lean_object* v_a_4526_){
_start:
{
lean_object* v_res_4527_; 
v_res_4527_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___redArg(v_a_4524_, v_a_4525_);
lean_dec(v_a_4525_);
lean_dec(v_a_4524_);
return v_res_4527_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f(lean_object* v_a_4528_, lean_object* v_a_4529_, lean_object* v_a_4530_, lean_object* v_a_4531_, lean_object* v_a_4532_, lean_object* v_a_4533_, lean_object* v_a_4534_, lean_object* v_a_4535_, lean_object* v_a_4536_, lean_object* v_a_4537_){
_start:
{
lean_object* v___x_4539_; 
v___x_4539_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___redArg(v_a_4528_, v_a_4537_);
return v___x_4539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___boxed(lean_object* v_a_4540_, lean_object* v_a_4541_, lean_object* v_a_4542_, lean_object* v_a_4543_, lean_object* v_a_4544_, lean_object* v_a_4545_, lean_object* v_a_4546_, lean_object* v_a_4547_, lean_object* v_a_4548_, lean_object* v_a_4549_, lean_object* v_a_4550_){
_start:
{
lean_object* v_res_4551_; 
v_res_4551_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f(v_a_4540_, v_a_4541_, v_a_4542_, v_a_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_);
lean_dec(v_a_4549_);
lean_dec_ref(v_a_4548_);
lean_dec(v_a_4547_);
lean_dec_ref(v_a_4546_);
lean_dec(v_a_4545_);
lean_dec_ref(v_a_4544_);
lean_dec(v_a_4543_);
lean_dec_ref(v_a_4542_);
lean_dec(v_a_4541_);
lean_dec(v_a_4540_);
return v_res_4551_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(lean_object* v_lhs_4552_, lean_object* v_rhs_4553_, lean_object* v_proof_4554_, uint8_t v_isHEq_4555_, lean_object* v_a_4556_, lean_object* v_a_4557_, lean_object* v_a_4558_, lean_object* v_a_4559_, lean_object* v_a_4560_, lean_object* v_a_4561_, lean_object* v_a_4562_, lean_object* v_a_4563_, lean_object* v_a_4564_, lean_object* v_a_4565_){
_start:
{
lean_object* v___x_4567_; 
v___x_4567_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep(v_lhs_4552_, v_rhs_4553_, v_proof_4554_, v_isHEq_4555_, v_a_4556_, v_a_4557_, v_a_4558_, v_a_4559_, v_a_4560_, v_a_4561_, v_a_4562_, v_a_4563_, v_a_4564_, v_a_4565_);
if (lean_obj_tag(v___x_4567_) == 0)
{
lean_object* v___x_4568_; 
lean_dec_ref(v___x_4567_);
lean_inc(v_a_4565_);
lean_inc_ref(v_a_4564_);
lean_inc(v_a_4563_);
lean_inc_ref(v_a_4562_);
lean_inc(v_a_4561_);
lean_inc_ref(v_a_4560_);
lean_inc(v_a_4559_);
lean_inc_ref(v_a_4558_);
lean_inc(v_a_4557_);
lean_inc(v_a_4556_);
v___x_4568_ = lean_grind_process_new_facts(v_a_4556_, v_a_4557_, v_a_4558_, v_a_4559_, v_a_4560_, v_a_4561_, v_a_4562_, v_a_4563_, v_a_4564_, v_a_4565_);
return v___x_4568_;
}
else
{
return v___x_4567_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore___boxed(lean_object* v_lhs_4569_, lean_object* v_rhs_4570_, lean_object* v_proof_4571_, lean_object* v_isHEq_4572_, lean_object* v_a_4573_, lean_object* v_a_4574_, lean_object* v_a_4575_, lean_object* v_a_4576_, lean_object* v_a_4577_, lean_object* v_a_4578_, lean_object* v_a_4579_, lean_object* v_a_4580_, lean_object* v_a_4581_, lean_object* v_a_4582_, lean_object* v_a_4583_){
_start:
{
uint8_t v_isHEq_boxed_4584_; lean_object* v_res_4585_; 
v_isHEq_boxed_4584_ = lean_unbox(v_isHEq_4572_);
v_res_4585_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(v_lhs_4569_, v_rhs_4570_, v_proof_4571_, v_isHEq_boxed_4584_, v_a_4573_, v_a_4574_, v_a_4575_, v_a_4576_, v_a_4577_, v_a_4578_, v_a_4579_, v_a_4580_, v_a_4581_, v_a_4582_);
lean_dec(v_a_4582_);
lean_dec_ref(v_a_4581_);
lean_dec(v_a_4580_);
lean_dec_ref(v_a_4579_);
lean_dec(v_a_4578_);
lean_dec_ref(v_a_4577_);
lean_dec(v_a_4576_);
lean_dec_ref(v_a_4575_);
lean_dec(v_a_4574_);
lean_dec(v_a_4573_);
return v_res_4585_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(lean_object* v_lhs_4586_, lean_object* v_rhs_4587_, lean_object* v_proof_4588_, lean_object* v_a_4589_, lean_object* v_a_4590_, lean_object* v_a_4591_, lean_object* v_a_4592_, lean_object* v_a_4593_, lean_object* v_a_4594_, lean_object* v_a_4595_, lean_object* v_a_4596_, lean_object* v_a_4597_, lean_object* v_a_4598_){
_start:
{
uint8_t v___x_4600_; lean_object* v___x_4601_; 
v___x_4600_ = 0;
v___x_4601_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(v_lhs_4586_, v_rhs_4587_, v_proof_4588_, v___x_4600_, v_a_4589_, v_a_4590_, v_a_4591_, v_a_4592_, v_a_4593_, v_a_4594_, v_a_4595_, v_a_4596_, v_a_4597_, v_a_4598_);
return v___x_4601_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq___boxed(lean_object* v_lhs_4602_, lean_object* v_rhs_4603_, lean_object* v_proof_4604_, lean_object* v_a_4605_, lean_object* v_a_4606_, lean_object* v_a_4607_, lean_object* v_a_4608_, lean_object* v_a_4609_, lean_object* v_a_4610_, lean_object* v_a_4611_, lean_object* v_a_4612_, lean_object* v_a_4613_, lean_object* v_a_4614_, lean_object* v_a_4615_){
_start:
{
lean_object* v_res_4616_; 
v_res_4616_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(v_lhs_4602_, v_rhs_4603_, v_proof_4604_, v_a_4605_, v_a_4606_, v_a_4607_, v_a_4608_, v_a_4609_, v_a_4610_, v_a_4611_, v_a_4612_, v_a_4613_, v_a_4614_);
lean_dec(v_a_4614_);
lean_dec_ref(v_a_4613_);
lean_dec(v_a_4612_);
lean_dec_ref(v_a_4611_);
lean_dec(v_a_4610_);
lean_dec_ref(v_a_4609_);
lean_dec(v_a_4608_);
lean_dec_ref(v_a_4607_);
lean_dec(v_a_4606_);
lean_dec(v_a_4605_);
return v_res_4616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addHEq(lean_object* v_lhs_4617_, lean_object* v_rhs_4618_, lean_object* v_proof_4619_, lean_object* v_a_4620_, lean_object* v_a_4621_, lean_object* v_a_4622_, lean_object* v_a_4623_, lean_object* v_a_4624_, lean_object* v_a_4625_, lean_object* v_a_4626_, lean_object* v_a_4627_, lean_object* v_a_4628_, lean_object* v_a_4629_){
_start:
{
uint8_t v___x_4631_; lean_object* v___x_4632_; 
v___x_4631_ = 1;
v___x_4632_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(v_lhs_4617_, v_rhs_4618_, v_proof_4619_, v___x_4631_, v_a_4620_, v_a_4621_, v_a_4622_, v_a_4623_, v_a_4624_, v_a_4625_, v_a_4626_, v_a_4627_, v_a_4628_, v_a_4629_);
return v___x_4632_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addHEq___boxed(lean_object* v_lhs_4633_, lean_object* v_rhs_4634_, lean_object* v_proof_4635_, lean_object* v_a_4636_, lean_object* v_a_4637_, lean_object* v_a_4638_, lean_object* v_a_4639_, lean_object* v_a_4640_, lean_object* v_a_4641_, lean_object* v_a_4642_, lean_object* v_a_4643_, lean_object* v_a_4644_, lean_object* v_a_4645_, lean_object* v_a_4646_){
_start:
{
lean_object* v_res_4647_; 
v_res_4647_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addHEq(v_lhs_4633_, v_rhs_4634_, v_proof_4635_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_, v_a_4640_, v_a_4641_, v_a_4642_, v_a_4643_, v_a_4644_, v_a_4645_);
lean_dec(v_a_4645_);
lean_dec_ref(v_a_4644_);
lean_dec(v_a_4643_);
lean_dec_ref(v_a_4642_);
lean_dec(v_a_4641_);
lean_dec_ref(v_a_4640_);
lean_dec(v_a_4639_);
lean_dec_ref(v_a_4638_);
lean_dec(v_a_4637_);
lean_dec(v_a_4636_);
return v_res_4647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(lean_object* v_fact_4648_, lean_object* v_a_4649_, lean_object* v_a_4650_){
_start:
{
lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v_toGoalState_4654_; lean_object* v_mvarId_4655_; lean_object* v___x_4657_; uint8_t v_isShared_4658_; uint8_t v_isSharedCheck_4691_; 
v___x_4652_ = lean_st_ref_get(v_a_4650_);
lean_dec(v___x_4652_);
v___x_4653_ = lean_st_ref_take(v_a_4649_);
v_toGoalState_4654_ = lean_ctor_get(v___x_4653_, 0);
v_mvarId_4655_ = lean_ctor_get(v___x_4653_, 1);
v_isSharedCheck_4691_ = !lean_is_exclusive(v___x_4653_);
if (v_isSharedCheck_4691_ == 0)
{
v___x_4657_ = v___x_4653_;
v_isShared_4658_ = v_isSharedCheck_4691_;
goto v_resetjp_4656_;
}
else
{
lean_inc(v_mvarId_4655_);
lean_inc(v_toGoalState_4654_);
lean_dec(v___x_4653_);
v___x_4657_ = lean_box(0);
v_isShared_4658_ = v_isSharedCheck_4691_;
goto v_resetjp_4656_;
}
v_resetjp_4656_:
{
lean_object* v_nextDeclIdx_4659_; lean_object* v_enodeMap_4660_; lean_object* v_exprs_4661_; lean_object* v_parents_4662_; lean_object* v_congrTable_4663_; lean_object* v_appMap_4664_; lean_object* v_indicesFound_4665_; lean_object* v_newFacts_4666_; uint8_t v_inconsistent_4667_; lean_object* v_nextIdx_4668_; lean_object* v_newRawFacts_4669_; lean_object* v_facts_4670_; lean_object* v_extThms_4671_; lean_object* v_ematch_4672_; lean_object* v_inj_4673_; lean_object* v_split_4674_; lean_object* v_clean_4675_; lean_object* v_sstates_4676_; lean_object* v___x_4678_; uint8_t v_isShared_4679_; uint8_t v_isSharedCheck_4690_; 
v_nextDeclIdx_4659_ = lean_ctor_get(v_toGoalState_4654_, 0);
v_enodeMap_4660_ = lean_ctor_get(v_toGoalState_4654_, 1);
v_exprs_4661_ = lean_ctor_get(v_toGoalState_4654_, 2);
v_parents_4662_ = lean_ctor_get(v_toGoalState_4654_, 3);
v_congrTable_4663_ = lean_ctor_get(v_toGoalState_4654_, 4);
v_appMap_4664_ = lean_ctor_get(v_toGoalState_4654_, 5);
v_indicesFound_4665_ = lean_ctor_get(v_toGoalState_4654_, 6);
v_newFacts_4666_ = lean_ctor_get(v_toGoalState_4654_, 7);
v_inconsistent_4667_ = lean_ctor_get_uint8(v_toGoalState_4654_, sizeof(void*)*17);
v_nextIdx_4668_ = lean_ctor_get(v_toGoalState_4654_, 8);
v_newRawFacts_4669_ = lean_ctor_get(v_toGoalState_4654_, 9);
v_facts_4670_ = lean_ctor_get(v_toGoalState_4654_, 10);
v_extThms_4671_ = lean_ctor_get(v_toGoalState_4654_, 11);
v_ematch_4672_ = lean_ctor_get(v_toGoalState_4654_, 12);
v_inj_4673_ = lean_ctor_get(v_toGoalState_4654_, 13);
v_split_4674_ = lean_ctor_get(v_toGoalState_4654_, 14);
v_clean_4675_ = lean_ctor_get(v_toGoalState_4654_, 15);
v_sstates_4676_ = lean_ctor_get(v_toGoalState_4654_, 16);
v_isSharedCheck_4690_ = !lean_is_exclusive(v_toGoalState_4654_);
if (v_isSharedCheck_4690_ == 0)
{
v___x_4678_ = v_toGoalState_4654_;
v_isShared_4679_ = v_isSharedCheck_4690_;
goto v_resetjp_4677_;
}
else
{
lean_inc(v_sstates_4676_);
lean_inc(v_clean_4675_);
lean_inc(v_split_4674_);
lean_inc(v_inj_4673_);
lean_inc(v_ematch_4672_);
lean_inc(v_extThms_4671_);
lean_inc(v_facts_4670_);
lean_inc(v_newRawFacts_4669_);
lean_inc(v_nextIdx_4668_);
lean_inc(v_newFacts_4666_);
lean_inc(v_indicesFound_4665_);
lean_inc(v_appMap_4664_);
lean_inc(v_congrTable_4663_);
lean_inc(v_parents_4662_);
lean_inc(v_exprs_4661_);
lean_inc(v_enodeMap_4660_);
lean_inc(v_nextDeclIdx_4659_);
lean_dec(v_toGoalState_4654_);
v___x_4678_ = lean_box(0);
v_isShared_4679_ = v_isSharedCheck_4690_;
goto v_resetjp_4677_;
}
v_resetjp_4677_:
{
lean_object* v___x_4680_; lean_object* v___x_4682_; 
v___x_4680_ = l_Lean_PersistentArray_push___redArg(v_facts_4670_, v_fact_4648_);
if (v_isShared_4679_ == 0)
{
lean_ctor_set(v___x_4678_, 10, v___x_4680_);
v___x_4682_ = v___x_4678_;
goto v_reusejp_4681_;
}
else
{
lean_object* v_reuseFailAlloc_4689_; 
v_reuseFailAlloc_4689_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_4689_, 0, v_nextDeclIdx_4659_);
lean_ctor_set(v_reuseFailAlloc_4689_, 1, v_enodeMap_4660_);
lean_ctor_set(v_reuseFailAlloc_4689_, 2, v_exprs_4661_);
lean_ctor_set(v_reuseFailAlloc_4689_, 3, v_parents_4662_);
lean_ctor_set(v_reuseFailAlloc_4689_, 4, v_congrTable_4663_);
lean_ctor_set(v_reuseFailAlloc_4689_, 5, v_appMap_4664_);
lean_ctor_set(v_reuseFailAlloc_4689_, 6, v_indicesFound_4665_);
lean_ctor_set(v_reuseFailAlloc_4689_, 7, v_newFacts_4666_);
lean_ctor_set(v_reuseFailAlloc_4689_, 8, v_nextIdx_4668_);
lean_ctor_set(v_reuseFailAlloc_4689_, 9, v_newRawFacts_4669_);
lean_ctor_set(v_reuseFailAlloc_4689_, 10, v___x_4680_);
lean_ctor_set(v_reuseFailAlloc_4689_, 11, v_extThms_4671_);
lean_ctor_set(v_reuseFailAlloc_4689_, 12, v_ematch_4672_);
lean_ctor_set(v_reuseFailAlloc_4689_, 13, v_inj_4673_);
lean_ctor_set(v_reuseFailAlloc_4689_, 14, v_split_4674_);
lean_ctor_set(v_reuseFailAlloc_4689_, 15, v_clean_4675_);
lean_ctor_set(v_reuseFailAlloc_4689_, 16, v_sstates_4676_);
lean_ctor_set_uint8(v_reuseFailAlloc_4689_, sizeof(void*)*17, v_inconsistent_4667_);
v___x_4682_ = v_reuseFailAlloc_4689_;
goto v_reusejp_4681_;
}
v_reusejp_4681_:
{
lean_object* v___x_4684_; 
if (v_isShared_4658_ == 0)
{
lean_ctor_set(v___x_4657_, 0, v___x_4682_);
v___x_4684_ = v___x_4657_;
goto v_reusejp_4683_;
}
else
{
lean_object* v_reuseFailAlloc_4688_; 
v_reuseFailAlloc_4688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4688_, 0, v___x_4682_);
lean_ctor_set(v_reuseFailAlloc_4688_, 1, v_mvarId_4655_);
v___x_4684_ = v_reuseFailAlloc_4688_;
goto v_reusejp_4683_;
}
v_reusejp_4683_:
{
lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; 
v___x_4685_ = lean_st_ref_set(v_a_4649_, v___x_4684_);
v___x_4686_ = lean_box(0);
v___x_4687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4687_, 0, v___x_4686_);
return v___x_4687_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg___boxed(lean_object* v_fact_4692_, lean_object* v_a_4693_, lean_object* v_a_4694_, lean_object* v_a_4695_){
_start:
{
lean_object* v_res_4696_; 
v_res_4696_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(v_fact_4692_, v_a_4693_, v_a_4694_);
lean_dec(v_a_4694_);
lean_dec(v_a_4693_);
return v_res_4696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact(lean_object* v_fact_4697_, lean_object* v_a_4698_, lean_object* v_a_4699_, lean_object* v_a_4700_, lean_object* v_a_4701_, lean_object* v_a_4702_, lean_object* v_a_4703_, lean_object* v_a_4704_, lean_object* v_a_4705_, lean_object* v_a_4706_, lean_object* v_a_4707_){
_start:
{
lean_object* v___x_4709_; 
v___x_4709_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(v_fact_4697_, v_a_4698_, v_a_4707_);
return v___x_4709_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___boxed(lean_object* v_fact_4710_, lean_object* v_a_4711_, lean_object* v_a_4712_, lean_object* v_a_4713_, lean_object* v_a_4714_, lean_object* v_a_4715_, lean_object* v_a_4716_, lean_object* v_a_4717_, lean_object* v_a_4718_, lean_object* v_a_4719_, lean_object* v_a_4720_, lean_object* v_a_4721_){
_start:
{
lean_object* v_res_4722_; 
v_res_4722_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact(v_fact_4710_, v_a_4711_, v_a_4712_, v_a_4713_, v_a_4714_, v_a_4715_, v_a_4716_, v_a_4717_, v_a_4718_, v_a_4719_, v_a_4720_);
lean_dec(v_a_4720_);
lean_dec_ref(v_a_4719_);
lean_dec(v_a_4718_);
lean_dec_ref(v_a_4717_);
lean_dec(v_a_4716_);
lean_dec_ref(v_a_4715_);
lean_dec(v_a_4714_);
lean_dec_ref(v_a_4713_);
lean_dec(v_a_4712_);
lean_dec(v_a_4711_);
return v_res_4722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNewEq(lean_object* v_lhs_4723_, lean_object* v_rhs_4724_, lean_object* v_proof_4725_, lean_object* v_generation_4726_, lean_object* v_a_4727_, lean_object* v_a_4728_, lean_object* v_a_4729_, lean_object* v_a_4730_, lean_object* v_a_4731_, lean_object* v_a_4732_, lean_object* v_a_4733_, lean_object* v_a_4734_, lean_object* v_a_4735_, lean_object* v_a_4736_){
_start:
{
lean_object* v___x_4738_; 
lean_inc_ref(v_rhs_4724_);
lean_inc_ref(v_lhs_4723_);
v___x_4738_ = l_Lean_Meta_mkEq(v_lhs_4723_, v_rhs_4724_, v_a_4733_, v_a_4734_, v_a_4735_, v_a_4736_);
if (lean_obj_tag(v___x_4738_) == 0)
{
lean_object* v_a_4739_; lean_object* v___x_4740_; lean_object* v___x_4742_; uint8_t v_isShared_4743_; uint8_t v_isSharedCheck_4750_; 
v_a_4739_ = lean_ctor_get(v___x_4738_, 0);
lean_inc_n(v_a_4739_, 2);
lean_dec_ref(v___x_4738_);
v___x_4740_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(v_a_4739_, v_a_4727_, v_a_4736_);
v_isSharedCheck_4750_ = !lean_is_exclusive(v___x_4740_);
if (v_isSharedCheck_4750_ == 0)
{
lean_object* v_unused_4751_; 
v_unused_4751_ = lean_ctor_get(v___x_4740_, 0);
lean_dec(v_unused_4751_);
v___x_4742_ = v___x_4740_;
v_isShared_4743_ = v_isSharedCheck_4750_;
goto v_resetjp_4741_;
}
else
{
lean_dec(v___x_4740_);
v___x_4742_ = lean_box(0);
v_isShared_4743_ = v_isSharedCheck_4750_;
goto v_resetjp_4741_;
}
v_resetjp_4741_:
{
lean_object* v___x_4745_; 
if (v_isShared_4743_ == 0)
{
lean_ctor_set_tag(v___x_4742_, 1);
lean_ctor_set(v___x_4742_, 0, v_a_4739_);
v___x_4745_ = v___x_4742_;
goto v_reusejp_4744_;
}
else
{
lean_object* v_reuseFailAlloc_4749_; 
v_reuseFailAlloc_4749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4749_, 0, v_a_4739_);
v___x_4745_ = v_reuseFailAlloc_4749_;
goto v_reusejp_4744_;
}
v_reusejp_4744_:
{
lean_object* v___x_4746_; 
lean_inc(v_a_4736_);
lean_inc_ref(v_a_4735_);
lean_inc(v_a_4734_);
lean_inc_ref(v_a_4733_);
lean_inc(v_a_4732_);
lean_inc_ref(v_a_4731_);
lean_inc(v_a_4730_);
lean_inc_ref(v_a_4729_);
lean_inc(v_a_4728_);
lean_inc(v_a_4727_);
lean_inc_ref(v___x_4745_);
lean_inc(v_generation_4726_);
lean_inc_ref(v_lhs_4723_);
v___x_4746_ = lean_grind_internalize(v_lhs_4723_, v_generation_4726_, v___x_4745_, v_a_4727_, v_a_4728_, v_a_4729_, v_a_4730_, v_a_4731_, v_a_4732_, v_a_4733_, v_a_4734_, v_a_4735_, v_a_4736_);
if (lean_obj_tag(v___x_4746_) == 0)
{
lean_object* v___x_4747_; 
lean_dec_ref(v___x_4746_);
lean_inc(v_a_4736_);
lean_inc_ref(v_a_4735_);
lean_inc(v_a_4734_);
lean_inc_ref(v_a_4733_);
lean_inc(v_a_4732_);
lean_inc_ref(v_a_4731_);
lean_inc(v_a_4730_);
lean_inc_ref(v_a_4729_);
lean_inc(v_a_4728_);
lean_inc(v_a_4727_);
lean_inc_ref(v_rhs_4724_);
v___x_4747_ = lean_grind_internalize(v_rhs_4724_, v_generation_4726_, v___x_4745_, v_a_4727_, v_a_4728_, v_a_4729_, v_a_4730_, v_a_4731_, v_a_4732_, v_a_4733_, v_a_4734_, v_a_4735_, v_a_4736_);
if (lean_obj_tag(v___x_4747_) == 0)
{
lean_object* v___x_4748_; 
lean_dec_ref(v___x_4747_);
v___x_4748_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(v_lhs_4723_, v_rhs_4724_, v_proof_4725_, v_a_4727_, v_a_4728_, v_a_4729_, v_a_4730_, v_a_4731_, v_a_4732_, v_a_4733_, v_a_4734_, v_a_4735_, v_a_4736_);
return v___x_4748_;
}
else
{
lean_dec_ref(v_proof_4725_);
lean_dec_ref(v_rhs_4724_);
lean_dec_ref(v_lhs_4723_);
return v___x_4747_;
}
}
else
{
lean_dec_ref(v___x_4745_);
lean_dec(v_generation_4726_);
lean_dec_ref(v_proof_4725_);
lean_dec_ref(v_rhs_4724_);
lean_dec_ref(v_lhs_4723_);
return v___x_4746_;
}
}
}
}
else
{
lean_object* v_a_4752_; lean_object* v___x_4754_; uint8_t v_isShared_4755_; uint8_t v_isSharedCheck_4759_; 
lean_dec(v_generation_4726_);
lean_dec_ref(v_proof_4725_);
lean_dec_ref(v_rhs_4724_);
lean_dec_ref(v_lhs_4723_);
v_a_4752_ = lean_ctor_get(v___x_4738_, 0);
v_isSharedCheck_4759_ = !lean_is_exclusive(v___x_4738_);
if (v_isSharedCheck_4759_ == 0)
{
v___x_4754_ = v___x_4738_;
v_isShared_4755_ = v_isSharedCheck_4759_;
goto v_resetjp_4753_;
}
else
{
lean_inc(v_a_4752_);
lean_dec(v___x_4738_);
v___x_4754_ = lean_box(0);
v_isShared_4755_ = v_isSharedCheck_4759_;
goto v_resetjp_4753_;
}
v_resetjp_4753_:
{
lean_object* v___x_4757_; 
if (v_isShared_4755_ == 0)
{
v___x_4757_ = v___x_4754_;
goto v_reusejp_4756_;
}
else
{
lean_object* v_reuseFailAlloc_4758_; 
v_reuseFailAlloc_4758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4758_, 0, v_a_4752_);
v___x_4757_ = v_reuseFailAlloc_4758_;
goto v_reusejp_4756_;
}
v_reusejp_4756_:
{
return v___x_4757_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNewEq___boxed(lean_object* v_lhs_4760_, lean_object* v_rhs_4761_, lean_object* v_proof_4762_, lean_object* v_generation_4763_, lean_object* v_a_4764_, lean_object* v_a_4765_, lean_object* v_a_4766_, lean_object* v_a_4767_, lean_object* v_a_4768_, lean_object* v_a_4769_, lean_object* v_a_4770_, lean_object* v_a_4771_, lean_object* v_a_4772_, lean_object* v_a_4773_, lean_object* v_a_4774_){
_start:
{
lean_object* v_res_4775_; 
v_res_4775_ = l_Lean_Meta_Grind_addNewEq(v_lhs_4760_, v_rhs_4761_, v_proof_4762_, v_generation_4763_, v_a_4764_, v_a_4765_, v_a_4766_, v_a_4767_, v_a_4768_, v_a_4769_, v_a_4770_, v_a_4771_, v_a_4772_, v_a_4773_);
lean_dec(v_a_4773_);
lean_dec_ref(v_a_4772_);
lean_dec(v_a_4771_);
lean_dec_ref(v_a_4770_);
lean_dec(v_a_4769_);
lean_dec_ref(v_a_4768_);
lean_dec(v_a_4767_);
lean_dec_ref(v_a_4766_);
lean_dec(v_a_4765_);
lean_dec(v_a_4764_);
return v_res_4775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(lean_object* v_proof_4776_, lean_object* v_generation_4777_, lean_object* v_p_4778_, uint8_t v_isNeg_4779_, lean_object* v_a_4780_, lean_object* v_a_4781_, lean_object* v_a_4782_, lean_object* v_a_4783_, lean_object* v_a_4784_, lean_object* v_a_4785_, lean_object* v_a_4786_, lean_object* v_a_4787_, lean_object* v_a_4788_, lean_object* v_a_4789_){
_start:
{
lean_object* v___x_4791_; lean_object* v___x_4792_; 
v___x_4791_ = lean_box(0);
lean_inc(v_a_4789_);
lean_inc_ref(v_a_4788_);
lean_inc(v_a_4787_);
lean_inc_ref(v_a_4786_);
lean_inc(v_a_4785_);
lean_inc_ref(v_a_4784_);
lean_inc(v_a_4783_);
lean_inc_ref(v_a_4782_);
lean_inc(v_a_4781_);
lean_inc(v_a_4780_);
lean_inc_ref(v_p_4778_);
v___x_4792_ = lean_grind_internalize(v_p_4778_, v_generation_4777_, v___x_4791_, v_a_4780_, v_a_4781_, v_a_4782_, v_a_4783_, v_a_4784_, v_a_4785_, v_a_4786_, v_a_4787_, v_a_4788_, v_a_4789_);
if (lean_obj_tag(v___x_4792_) == 0)
{
lean_dec_ref(v___x_4792_);
if (v_isNeg_4779_ == 0)
{
lean_object* v___x_4793_; 
v___x_4793_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_4784_);
if (lean_obj_tag(v___x_4793_) == 0)
{
lean_object* v_a_4794_; lean_object* v___x_4795_; 
v_a_4794_ = lean_ctor_get(v___x_4793_, 0);
lean_inc(v_a_4794_);
lean_dec_ref(v___x_4793_);
v___x_4795_ = l_Lean_Meta_mkEqTrue(v_proof_4776_, v_a_4786_, v_a_4787_, v_a_4788_, v_a_4789_);
if (lean_obj_tag(v___x_4795_) == 0)
{
lean_object* v_a_4796_; lean_object* v___x_4797_; 
v_a_4796_ = lean_ctor_get(v___x_4795_, 0);
lean_inc(v_a_4796_);
lean_dec_ref(v___x_4795_);
v___x_4797_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(v_p_4778_, v_a_4794_, v_a_4796_, v_a_4780_, v_a_4781_, v_a_4782_, v_a_4783_, v_a_4784_, v_a_4785_, v_a_4786_, v_a_4787_, v_a_4788_, v_a_4789_);
return v___x_4797_;
}
else
{
lean_object* v_a_4798_; lean_object* v___x_4800_; uint8_t v_isShared_4801_; uint8_t v_isSharedCheck_4805_; 
lean_dec(v_a_4794_);
lean_dec_ref(v_p_4778_);
v_a_4798_ = lean_ctor_get(v___x_4795_, 0);
v_isSharedCheck_4805_ = !lean_is_exclusive(v___x_4795_);
if (v_isSharedCheck_4805_ == 0)
{
v___x_4800_ = v___x_4795_;
v_isShared_4801_ = v_isSharedCheck_4805_;
goto v_resetjp_4799_;
}
else
{
lean_inc(v_a_4798_);
lean_dec(v___x_4795_);
v___x_4800_ = lean_box(0);
v_isShared_4801_ = v_isSharedCheck_4805_;
goto v_resetjp_4799_;
}
v_resetjp_4799_:
{
lean_object* v___x_4803_; 
if (v_isShared_4801_ == 0)
{
v___x_4803_ = v___x_4800_;
goto v_reusejp_4802_;
}
else
{
lean_object* v_reuseFailAlloc_4804_; 
v_reuseFailAlloc_4804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4804_, 0, v_a_4798_);
v___x_4803_ = v_reuseFailAlloc_4804_;
goto v_reusejp_4802_;
}
v_reusejp_4802_:
{
return v___x_4803_;
}
}
}
}
else
{
lean_object* v_a_4806_; lean_object* v___x_4808_; uint8_t v_isShared_4809_; uint8_t v_isSharedCheck_4813_; 
lean_dec_ref(v_p_4778_);
lean_dec_ref(v_proof_4776_);
v_a_4806_ = lean_ctor_get(v___x_4793_, 0);
v_isSharedCheck_4813_ = !lean_is_exclusive(v___x_4793_);
if (v_isSharedCheck_4813_ == 0)
{
v___x_4808_ = v___x_4793_;
v_isShared_4809_ = v_isSharedCheck_4813_;
goto v_resetjp_4807_;
}
else
{
lean_inc(v_a_4806_);
lean_dec(v___x_4793_);
v___x_4808_ = lean_box(0);
v_isShared_4809_ = v_isSharedCheck_4813_;
goto v_resetjp_4807_;
}
v_resetjp_4807_:
{
lean_object* v___x_4811_; 
if (v_isShared_4809_ == 0)
{
v___x_4811_ = v___x_4808_;
goto v_reusejp_4810_;
}
else
{
lean_object* v_reuseFailAlloc_4812_; 
v_reuseFailAlloc_4812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4812_, 0, v_a_4806_);
v___x_4811_ = v_reuseFailAlloc_4812_;
goto v_reusejp_4810_;
}
v_reusejp_4810_:
{
return v___x_4811_;
}
}
}
}
else
{
lean_object* v___x_4814_; 
v___x_4814_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_4784_);
if (lean_obj_tag(v___x_4814_) == 0)
{
lean_object* v_a_4815_; lean_object* v___x_4816_; 
v_a_4815_ = lean_ctor_get(v___x_4814_, 0);
lean_inc(v_a_4815_);
lean_dec_ref(v___x_4814_);
v___x_4816_ = l_Lean_Meta_mkEqFalse(v_proof_4776_, v_a_4786_, v_a_4787_, v_a_4788_, v_a_4789_);
if (lean_obj_tag(v___x_4816_) == 0)
{
lean_object* v_a_4817_; lean_object* v___x_4818_; 
v_a_4817_ = lean_ctor_get(v___x_4816_, 0);
lean_inc(v_a_4817_);
lean_dec_ref(v___x_4816_);
v___x_4818_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(v_p_4778_, v_a_4815_, v_a_4817_, v_a_4780_, v_a_4781_, v_a_4782_, v_a_4783_, v_a_4784_, v_a_4785_, v_a_4786_, v_a_4787_, v_a_4788_, v_a_4789_);
return v___x_4818_;
}
else
{
lean_object* v_a_4819_; lean_object* v___x_4821_; uint8_t v_isShared_4822_; uint8_t v_isSharedCheck_4826_; 
lean_dec(v_a_4815_);
lean_dec_ref(v_p_4778_);
v_a_4819_ = lean_ctor_get(v___x_4816_, 0);
v_isSharedCheck_4826_ = !lean_is_exclusive(v___x_4816_);
if (v_isSharedCheck_4826_ == 0)
{
v___x_4821_ = v___x_4816_;
v_isShared_4822_ = v_isSharedCheck_4826_;
goto v_resetjp_4820_;
}
else
{
lean_inc(v_a_4819_);
lean_dec(v___x_4816_);
v___x_4821_ = lean_box(0);
v_isShared_4822_ = v_isSharedCheck_4826_;
goto v_resetjp_4820_;
}
v_resetjp_4820_:
{
lean_object* v___x_4824_; 
if (v_isShared_4822_ == 0)
{
v___x_4824_ = v___x_4821_;
goto v_reusejp_4823_;
}
else
{
lean_object* v_reuseFailAlloc_4825_; 
v_reuseFailAlloc_4825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4825_, 0, v_a_4819_);
v___x_4824_ = v_reuseFailAlloc_4825_;
goto v_reusejp_4823_;
}
v_reusejp_4823_:
{
return v___x_4824_;
}
}
}
}
else
{
lean_object* v_a_4827_; lean_object* v___x_4829_; uint8_t v_isShared_4830_; uint8_t v_isSharedCheck_4834_; 
lean_dec_ref(v_p_4778_);
lean_dec_ref(v_proof_4776_);
v_a_4827_ = lean_ctor_get(v___x_4814_, 0);
v_isSharedCheck_4834_ = !lean_is_exclusive(v___x_4814_);
if (v_isSharedCheck_4834_ == 0)
{
v___x_4829_ = v___x_4814_;
v_isShared_4830_ = v_isSharedCheck_4834_;
goto v_resetjp_4828_;
}
else
{
lean_inc(v_a_4827_);
lean_dec(v___x_4814_);
v___x_4829_ = lean_box(0);
v_isShared_4830_ = v_isSharedCheck_4834_;
goto v_resetjp_4828_;
}
v_resetjp_4828_:
{
lean_object* v___x_4832_; 
if (v_isShared_4830_ == 0)
{
v___x_4832_ = v___x_4829_;
goto v_reusejp_4831_;
}
else
{
lean_object* v_reuseFailAlloc_4833_; 
v_reuseFailAlloc_4833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4833_, 0, v_a_4827_);
v___x_4832_ = v_reuseFailAlloc_4833_;
goto v_reusejp_4831_;
}
v_reusejp_4831_:
{
return v___x_4832_;
}
}
}
}
}
else
{
lean_dec_ref(v_p_4778_);
lean_dec_ref(v_proof_4776_);
return v___x_4792_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact___boxed(lean_object* v_proof_4835_, lean_object* v_generation_4836_, lean_object* v_p_4837_, lean_object* v_isNeg_4838_, lean_object* v_a_4839_, lean_object* v_a_4840_, lean_object* v_a_4841_, lean_object* v_a_4842_, lean_object* v_a_4843_, lean_object* v_a_4844_, lean_object* v_a_4845_, lean_object* v_a_4846_, lean_object* v_a_4847_, lean_object* v_a_4848_, lean_object* v_a_4849_){
_start:
{
uint8_t v_isNeg_boxed_4850_; lean_object* v_res_4851_; 
v_isNeg_boxed_4850_ = lean_unbox(v_isNeg_4838_);
v_res_4851_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_4835_, v_generation_4836_, v_p_4837_, v_isNeg_boxed_4850_, v_a_4839_, v_a_4840_, v_a_4841_, v_a_4842_, v_a_4843_, v_a_4844_, v_a_4845_, v_a_4846_, v_a_4847_, v_a_4848_);
lean_dec(v_a_4848_);
lean_dec_ref(v_a_4847_);
lean_dec(v_a_4846_);
lean_dec_ref(v_a_4845_);
lean_dec(v_a_4844_);
lean_dec_ref(v_a_4843_);
lean_dec(v_a_4842_);
lean_dec_ref(v_a_4841_);
lean_dec(v_a_4840_);
lean_dec(v_a_4839_);
return v_res_4851_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq(lean_object* v_proof_4852_, lean_object* v_generation_4853_, lean_object* v_p_4854_, lean_object* v_lhs_4855_, lean_object* v_rhs_4856_, uint8_t v_isNeg_4857_, uint8_t v_isHEq_4858_, lean_object* v_a_4859_, lean_object* v_a_4860_, lean_object* v_a_4861_, lean_object* v_a_4862_, lean_object* v_a_4863_, lean_object* v_a_4864_, lean_object* v_a_4865_, lean_object* v_a_4866_, lean_object* v_a_4867_, lean_object* v_a_4868_){
_start:
{
if (v_isNeg_4857_ == 0)
{
lean_object* v___x_4870_; lean_object* v___x_4871_; 
lean_inc_ref(v_p_4854_);
v___x_4870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4870_, 0, v_p_4854_);
lean_inc(v_a_4868_);
lean_inc_ref(v_a_4867_);
lean_inc(v_a_4866_);
lean_inc_ref(v_a_4865_);
lean_inc(v_a_4864_);
lean_inc_ref(v_a_4863_);
lean_inc(v_a_4862_);
lean_inc_ref(v_a_4861_);
lean_inc(v_a_4860_);
lean_inc(v_a_4859_);
lean_inc_ref(v___x_4870_);
lean_inc(v_generation_4853_);
lean_inc_ref(v_lhs_4855_);
v___x_4871_ = lean_grind_internalize(v_lhs_4855_, v_generation_4853_, v___x_4870_, v_a_4859_, v_a_4860_, v_a_4861_, v_a_4862_, v_a_4863_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_);
if (lean_obj_tag(v___x_4871_) == 0)
{
lean_object* v___x_4872_; 
lean_dec_ref(v___x_4871_);
lean_inc(v_a_4868_);
lean_inc_ref(v_a_4867_);
lean_inc(v_a_4866_);
lean_inc_ref(v_a_4865_);
lean_inc(v_a_4864_);
lean_inc_ref(v_a_4863_);
lean_inc(v_a_4862_);
lean_inc_ref(v_a_4861_);
lean_inc(v_a_4860_);
lean_inc(v_a_4859_);
lean_inc_ref(v_rhs_4856_);
v___x_4872_ = lean_grind_internalize(v_rhs_4856_, v_generation_4853_, v___x_4870_, v_a_4859_, v_a_4860_, v_a_4861_, v_a_4862_, v_a_4863_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_);
if (lean_obj_tag(v___x_4872_) == 0)
{
lean_object* v___x_4873_; lean_object* v___x_4874_; 
lean_dec_ref(v___x_4872_);
v___x_4873_ = lean_box(0);
v___x_4874_ = l_Lean_Meta_Grind_Solvers_internalize(v_p_4854_, v___x_4873_, v_a_4859_, v_a_4860_, v_a_4861_, v_a_4862_, v_a_4863_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_);
if (lean_obj_tag(v___x_4874_) == 0)
{
lean_object* v___x_4875_; 
lean_dec_ref(v___x_4874_);
v___x_4875_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(v_lhs_4855_, v_rhs_4856_, v_proof_4852_, v_isHEq_4858_, v_a_4859_, v_a_4860_, v_a_4861_, v_a_4862_, v_a_4863_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_);
return v___x_4875_;
}
else
{
lean_dec_ref(v_rhs_4856_);
lean_dec_ref(v_lhs_4855_);
lean_dec_ref(v_proof_4852_);
return v___x_4874_;
}
}
else
{
lean_dec_ref(v_rhs_4856_);
lean_dec_ref(v_lhs_4855_);
lean_dec_ref(v_p_4854_);
lean_dec_ref(v_proof_4852_);
return v___x_4872_;
}
}
else
{
lean_dec_ref(v___x_4870_);
lean_dec_ref(v_rhs_4856_);
lean_dec_ref(v_lhs_4855_);
lean_dec_ref(v_p_4854_);
lean_dec(v_generation_4853_);
lean_dec_ref(v_proof_4852_);
return v___x_4871_;
}
}
else
{
lean_object* v___x_4876_; lean_object* v___x_4877_; 
lean_dec_ref(v_rhs_4856_);
lean_dec_ref(v_lhs_4855_);
v___x_4876_ = lean_box(0);
lean_inc(v_a_4868_);
lean_inc_ref(v_a_4867_);
lean_inc(v_a_4866_);
lean_inc_ref(v_a_4865_);
lean_inc(v_a_4864_);
lean_inc_ref(v_a_4863_);
lean_inc(v_a_4862_);
lean_inc_ref(v_a_4861_);
lean_inc(v_a_4860_);
lean_inc(v_a_4859_);
lean_inc_ref(v_p_4854_);
v___x_4877_ = lean_grind_internalize(v_p_4854_, v_generation_4853_, v___x_4876_, v_a_4859_, v_a_4860_, v_a_4861_, v_a_4862_, v_a_4863_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_);
if (lean_obj_tag(v___x_4877_) == 0)
{
lean_object* v___x_4878_; 
lean_dec_ref(v___x_4877_);
v___x_4878_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_4863_);
if (lean_obj_tag(v___x_4878_) == 0)
{
lean_object* v_a_4879_; lean_object* v___x_4880_; 
v_a_4879_ = lean_ctor_get(v___x_4878_, 0);
lean_inc(v_a_4879_);
lean_dec_ref(v___x_4878_);
v___x_4880_ = l_Lean_Meta_mkEqFalse(v_proof_4852_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_);
if (lean_obj_tag(v___x_4880_) == 0)
{
lean_object* v_a_4881_; lean_object* v___x_4882_; 
v_a_4881_ = lean_ctor_get(v___x_4880_, 0);
lean_inc(v_a_4881_);
lean_dec_ref(v___x_4880_);
v___x_4882_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(v_p_4854_, v_a_4879_, v_a_4881_, v_a_4859_, v_a_4860_, v_a_4861_, v_a_4862_, v_a_4863_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_);
return v___x_4882_;
}
else
{
lean_object* v_a_4883_; lean_object* v___x_4885_; uint8_t v_isShared_4886_; uint8_t v_isSharedCheck_4890_; 
lean_dec(v_a_4879_);
lean_dec_ref(v_p_4854_);
v_a_4883_ = lean_ctor_get(v___x_4880_, 0);
v_isSharedCheck_4890_ = !lean_is_exclusive(v___x_4880_);
if (v_isSharedCheck_4890_ == 0)
{
v___x_4885_ = v___x_4880_;
v_isShared_4886_ = v_isSharedCheck_4890_;
goto v_resetjp_4884_;
}
else
{
lean_inc(v_a_4883_);
lean_dec(v___x_4880_);
v___x_4885_ = lean_box(0);
v_isShared_4886_ = v_isSharedCheck_4890_;
goto v_resetjp_4884_;
}
v_resetjp_4884_:
{
lean_object* v___x_4888_; 
if (v_isShared_4886_ == 0)
{
v___x_4888_ = v___x_4885_;
goto v_reusejp_4887_;
}
else
{
lean_object* v_reuseFailAlloc_4889_; 
v_reuseFailAlloc_4889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4889_, 0, v_a_4883_);
v___x_4888_ = v_reuseFailAlloc_4889_;
goto v_reusejp_4887_;
}
v_reusejp_4887_:
{
return v___x_4888_;
}
}
}
}
else
{
lean_object* v_a_4891_; lean_object* v___x_4893_; uint8_t v_isShared_4894_; uint8_t v_isSharedCheck_4898_; 
lean_dec_ref(v_p_4854_);
lean_dec_ref(v_proof_4852_);
v_a_4891_ = lean_ctor_get(v___x_4878_, 0);
v_isSharedCheck_4898_ = !lean_is_exclusive(v___x_4878_);
if (v_isSharedCheck_4898_ == 0)
{
v___x_4893_ = v___x_4878_;
v_isShared_4894_ = v_isSharedCheck_4898_;
goto v_resetjp_4892_;
}
else
{
lean_inc(v_a_4891_);
lean_dec(v___x_4878_);
v___x_4893_ = lean_box(0);
v_isShared_4894_ = v_isSharedCheck_4898_;
goto v_resetjp_4892_;
}
v_resetjp_4892_:
{
lean_object* v___x_4896_; 
if (v_isShared_4894_ == 0)
{
v___x_4896_ = v___x_4893_;
goto v_reusejp_4895_;
}
else
{
lean_object* v_reuseFailAlloc_4897_; 
v_reuseFailAlloc_4897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4897_, 0, v_a_4891_);
v___x_4896_ = v_reuseFailAlloc_4897_;
goto v_reusejp_4895_;
}
v_reusejp_4895_:
{
return v___x_4896_;
}
}
}
}
else
{
lean_dec_ref(v_p_4854_);
lean_dec_ref(v_proof_4852_);
return v___x_4877_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq___boxed(lean_object** _args){
lean_object* v_proof_4899_ = _args[0];
lean_object* v_generation_4900_ = _args[1];
lean_object* v_p_4901_ = _args[2];
lean_object* v_lhs_4902_ = _args[3];
lean_object* v_rhs_4903_ = _args[4];
lean_object* v_isNeg_4904_ = _args[5];
lean_object* v_isHEq_4905_ = _args[6];
lean_object* v_a_4906_ = _args[7];
lean_object* v_a_4907_ = _args[8];
lean_object* v_a_4908_ = _args[9];
lean_object* v_a_4909_ = _args[10];
lean_object* v_a_4910_ = _args[11];
lean_object* v_a_4911_ = _args[12];
lean_object* v_a_4912_ = _args[13];
lean_object* v_a_4913_ = _args[14];
lean_object* v_a_4914_ = _args[15];
lean_object* v_a_4915_ = _args[16];
lean_object* v_a_4916_ = _args[17];
_start:
{
uint8_t v_isNeg_boxed_4917_; uint8_t v_isHEq_boxed_4918_; lean_object* v_res_4919_; 
v_isNeg_boxed_4917_ = lean_unbox(v_isNeg_4904_);
v_isHEq_boxed_4918_ = lean_unbox(v_isHEq_4905_);
v_res_4919_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq(v_proof_4899_, v_generation_4900_, v_p_4901_, v_lhs_4902_, v_rhs_4903_, v_isNeg_boxed_4917_, v_isHEq_boxed_4918_, v_a_4906_, v_a_4907_, v_a_4908_, v_a_4909_, v_a_4910_, v_a_4911_, v_a_4912_, v_a_4913_, v_a_4914_, v_a_4915_);
lean_dec(v_a_4915_);
lean_dec_ref(v_a_4914_);
lean_dec(v_a_4913_);
lean_dec_ref(v_a_4912_);
lean_dec(v_a_4911_);
lean_dec_ref(v_a_4910_);
lean_dec(v_a_4909_);
lean_dec_ref(v_a_4908_);
lean_dec(v_a_4907_);
lean_dec(v_a_4906_);
return v_res_4919_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__0(void){
_start:
{
lean_object* v___x_4920_; 
v___x_4920_ = lean_mk_string_unchecked("HEq", 3, 3);
return v___x_4920_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__1(void){
_start:
{
lean_object* v___x_4921_; lean_object* v___x_4922_; 
v___x_4921_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__0);
v___x_4922_ = l_Lean_Name_mkStr1(v___x_4921_);
return v___x_4922_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go(lean_object* v_proof_4923_, lean_object* v_generation_4924_, lean_object* v_p_4925_, uint8_t v_isNeg_4926_, lean_object* v_a_4927_, lean_object* v_a_4928_, lean_object* v_a_4929_, lean_object* v_a_4930_, lean_object* v_a_4931_, lean_object* v_a_4932_, lean_object* v_a_4933_, lean_object* v_a_4934_, lean_object* v_a_4935_, lean_object* v_a_4936_){
_start:
{
lean_object* v___x_4938_; 
lean_inc_ref(v_p_4925_);
v___x_4938_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_p_4925_, v_a_4934_, v_a_4936_);
if (lean_obj_tag(v___x_4938_) == 0)
{
lean_object* v_a_4939_; lean_object* v___x_4940_; uint8_t v___x_4941_; 
v_a_4939_ = lean_ctor_get(v___x_4938_, 0);
lean_inc(v_a_4939_);
lean_dec_ref(v___x_4938_);
v___x_4940_ = l_Lean_Expr_cleanupAnnotations(v_a_4939_);
v___x_4941_ = l_Lean_Expr_isApp(v___x_4940_);
if (v___x_4941_ == 0)
{
lean_object* v___x_4942_; 
lean_dec_ref(v___x_4940_);
v___x_4942_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_4923_, v_generation_4924_, v_p_4925_, v_isNeg_4926_, v_a_4927_, v_a_4928_, v_a_4929_, v_a_4930_, v_a_4931_, v_a_4932_, v_a_4933_, v_a_4934_, v_a_4935_, v_a_4936_);
return v___x_4942_;
}
else
{
lean_object* v_arg_4943_; lean_object* v___x_4944_; uint8_t v___x_4945_; 
v_arg_4943_ = lean_ctor_get(v___x_4940_, 1);
lean_inc_ref(v_arg_4943_);
v___x_4944_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4940_);
v___x_4945_ = l_Lean_Expr_isApp(v___x_4944_);
if (v___x_4945_ == 0)
{
lean_object* v___x_4946_; 
lean_dec_ref(v___x_4944_);
lean_dec_ref(v_arg_4943_);
v___x_4946_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_4923_, v_generation_4924_, v_p_4925_, v_isNeg_4926_, v_a_4927_, v_a_4928_, v_a_4929_, v_a_4930_, v_a_4931_, v_a_4932_, v_a_4933_, v_a_4934_, v_a_4935_, v_a_4936_);
return v___x_4946_;
}
else
{
lean_object* v_arg_4947_; lean_object* v___x_4948_; uint8_t v___x_4949_; 
v_arg_4947_ = lean_ctor_get(v___x_4944_, 1);
lean_inc_ref(v_arg_4947_);
v___x_4948_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4944_);
v___x_4949_ = l_Lean_Expr_isApp(v___x_4948_);
if (v___x_4949_ == 0)
{
lean_object* v___x_4950_; 
lean_dec_ref(v___x_4948_);
lean_dec_ref(v_arg_4947_);
lean_dec_ref(v_arg_4943_);
v___x_4950_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_4923_, v_generation_4924_, v_p_4925_, v_isNeg_4926_, v_a_4927_, v_a_4928_, v_a_4929_, v_a_4930_, v_a_4931_, v_a_4932_, v_a_4933_, v_a_4934_, v_a_4935_, v_a_4936_);
return v___x_4950_;
}
else
{
lean_object* v_arg_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; uint8_t v___x_4954_; 
v_arg_4951_ = lean_ctor_get(v___x_4948_, 1);
lean_inc_ref(v_arg_4951_);
v___x_4952_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4948_);
v___x_4953_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1);
v___x_4954_ = l_Lean_Expr_isConstOf(v___x_4952_, v___x_4953_);
if (v___x_4954_ == 0)
{
uint8_t v___x_4955_; 
lean_dec_ref(v_arg_4947_);
v___x_4955_ = l_Lean_Expr_isApp(v___x_4952_);
if (v___x_4955_ == 0)
{
lean_object* v___x_4956_; 
lean_dec_ref(v___x_4952_);
lean_dec_ref(v_arg_4951_);
lean_dec_ref(v_arg_4943_);
v___x_4956_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_4923_, v_generation_4924_, v_p_4925_, v_isNeg_4926_, v_a_4927_, v_a_4928_, v_a_4929_, v_a_4930_, v_a_4931_, v_a_4932_, v_a_4933_, v_a_4934_, v_a_4935_, v_a_4936_);
return v___x_4956_;
}
else
{
lean_object* v___x_4957_; lean_object* v___x_4958_; uint8_t v___x_4959_; 
v___x_4957_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4952_);
v___x_4958_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__1);
v___x_4959_ = l_Lean_Expr_isConstOf(v___x_4957_, v___x_4958_);
lean_dec_ref(v___x_4957_);
if (v___x_4959_ == 0)
{
lean_object* v___x_4960_; 
lean_dec_ref(v_arg_4951_);
lean_dec_ref(v_arg_4943_);
v___x_4960_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_4923_, v_generation_4924_, v_p_4925_, v_isNeg_4926_, v_a_4927_, v_a_4928_, v_a_4929_, v_a_4930_, v_a_4931_, v_a_4932_, v_a_4933_, v_a_4934_, v_a_4935_, v_a_4936_);
return v___x_4960_;
}
else
{
lean_object* v___x_4961_; 
v___x_4961_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq(v_proof_4923_, v_generation_4924_, v_p_4925_, v_arg_4951_, v_arg_4943_, v_isNeg_4926_, v___x_4959_, v_a_4927_, v_a_4928_, v_a_4929_, v_a_4930_, v_a_4931_, v_a_4932_, v_a_4933_, v_a_4934_, v_a_4935_, v_a_4936_);
return v___x_4961_;
}
}
}
else
{
uint8_t v___x_4962_; 
lean_dec_ref(v___x_4952_);
v___x_4962_ = l_Lean_Expr_isProp(v_arg_4951_);
lean_dec_ref(v_arg_4951_);
if (v___x_4962_ == 0)
{
lean_object* v___x_4963_; 
v___x_4963_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq(v_proof_4923_, v_generation_4924_, v_p_4925_, v_arg_4947_, v_arg_4943_, v_isNeg_4926_, v___x_4962_, v_a_4927_, v_a_4928_, v_a_4929_, v_a_4930_, v_a_4931_, v_a_4932_, v_a_4933_, v_a_4934_, v_a_4935_, v_a_4936_);
return v___x_4963_;
}
else
{
lean_object* v___x_4964_; 
lean_dec_ref(v_arg_4947_);
lean_dec_ref(v_arg_4943_);
v___x_4964_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_4923_, v_generation_4924_, v_p_4925_, v_isNeg_4926_, v_a_4927_, v_a_4928_, v_a_4929_, v_a_4930_, v_a_4931_, v_a_4932_, v_a_4933_, v_a_4934_, v_a_4935_, v_a_4936_);
return v___x_4964_;
}
}
}
}
}
}
else
{
lean_object* v_a_4965_; lean_object* v___x_4967_; uint8_t v_isShared_4968_; uint8_t v_isSharedCheck_4972_; 
lean_dec_ref(v_p_4925_);
lean_dec(v_generation_4924_);
lean_dec_ref(v_proof_4923_);
v_a_4965_ = lean_ctor_get(v___x_4938_, 0);
v_isSharedCheck_4972_ = !lean_is_exclusive(v___x_4938_);
if (v_isSharedCheck_4972_ == 0)
{
v___x_4967_ = v___x_4938_;
v_isShared_4968_ = v_isSharedCheck_4972_;
goto v_resetjp_4966_;
}
else
{
lean_inc(v_a_4965_);
lean_dec(v___x_4938_);
v___x_4967_ = lean_box(0);
v_isShared_4968_ = v_isSharedCheck_4972_;
goto v_resetjp_4966_;
}
v_resetjp_4966_:
{
lean_object* v___x_4970_; 
if (v_isShared_4968_ == 0)
{
v___x_4970_ = v___x_4967_;
goto v_reusejp_4969_;
}
else
{
lean_object* v_reuseFailAlloc_4971_; 
v_reuseFailAlloc_4971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4971_, 0, v_a_4965_);
v___x_4970_ = v_reuseFailAlloc_4971_;
goto v_reusejp_4969_;
}
v_reusejp_4969_:
{
return v___x_4970_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___boxed(lean_object* v_proof_4973_, lean_object* v_generation_4974_, lean_object* v_p_4975_, lean_object* v_isNeg_4976_, lean_object* v_a_4977_, lean_object* v_a_4978_, lean_object* v_a_4979_, lean_object* v_a_4980_, lean_object* v_a_4981_, lean_object* v_a_4982_, lean_object* v_a_4983_, lean_object* v_a_4984_, lean_object* v_a_4985_, lean_object* v_a_4986_, lean_object* v_a_4987_){
_start:
{
uint8_t v_isNeg_boxed_4988_; lean_object* v_res_4989_; 
v_isNeg_boxed_4988_ = lean_unbox(v_isNeg_4976_);
v_res_4989_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go(v_proof_4973_, v_generation_4974_, v_p_4975_, v_isNeg_boxed_4988_, v_a_4977_, v_a_4978_, v_a_4979_, v_a_4980_, v_a_4981_, v_a_4982_, v_a_4983_, v_a_4984_, v_a_4985_, v_a_4986_);
lean_dec(v_a_4986_);
lean_dec_ref(v_a_4985_);
lean_dec(v_a_4984_);
lean_dec_ref(v_a_4983_);
lean_dec(v_a_4982_);
lean_dec_ref(v_a_4981_);
lean_dec(v_a_4980_);
lean_dec_ref(v_a_4979_);
lean_dec(v_a_4978_);
lean_dec(v_a_4977_);
return v_res_4989_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__0(void){
_start:
{
lean_object* v___x_4990_; 
v___x_4990_ = lean_mk_string_unchecked("Not", 3, 3);
return v___x_4990_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__1(void){
_start:
{
lean_object* v___x_4991_; lean_object* v___x_4992_; 
v___x_4991_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__0, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__0);
v___x_4992_ = l_Lean_Name_mkStr1(v___x_4991_);
return v___x_4992_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__2(void){
_start:
{
lean_object* v___x_4993_; 
v___x_4993_ = lean_mk_string_unchecked("assert", 6, 6);
return v___x_4993_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3(void){
_start:
{
lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; 
v___x_4994_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__2, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__2);
v___x_4995_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0);
v___x_4996_ = l_Lean_Name_mkStr2(v___x_4995_, v___x_4994_);
return v___x_4996_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4(void){
_start:
{
lean_object* v___x_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; 
v___x_4997_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3);
v___x_4998_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5);
v___x_4999_ = l_Lean_Name_append(v___x_4998_, v___x_4997_);
return v___x_4999_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep(lean_object* v_fact_5000_, lean_object* v_proof_5001_, lean_object* v_generation_5002_, lean_object* v_a_5003_, lean_object* v_a_5004_, lean_object* v_a_5005_, lean_object* v_a_5006_, lean_object* v_a_5007_, lean_object* v_a_5008_, lean_object* v_a_5009_, lean_object* v_a_5010_, lean_object* v_a_5011_, lean_object* v_a_5012_){
_start:
{
lean_object* v___y_5015_; lean_object* v___y_5016_; lean_object* v___y_5017_; lean_object* v___y_5018_; lean_object* v___y_5019_; lean_object* v___y_5020_; lean_object* v___y_5021_; lean_object* v___y_5022_; lean_object* v___y_5023_; lean_object* v___y_5024_; lean_object* v___y_5028_; lean_object* v___y_5029_; lean_object* v___y_5030_; lean_object* v___y_5031_; lean_object* v___y_5032_; lean_object* v___y_5033_; lean_object* v___y_5034_; lean_object* v___y_5035_; lean_object* v___y_5036_; lean_object* v___y_5037_; lean_object* v___x_5045_; lean_object* v_options_5046_; uint8_t v_hasTrace_5047_; 
lean_inc_ref(v_fact_5000_);
v___x_5045_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(v_fact_5000_, v_a_5003_, v_a_5012_);
lean_dec_ref(v___x_5045_);
v_options_5046_ = lean_ctor_get(v_a_5011_, 2);
v_hasTrace_5047_ = lean_ctor_get_uint8(v_options_5046_, sizeof(void*)*1);
if (v_hasTrace_5047_ == 0)
{
v___y_5028_ = v_a_5003_;
v___y_5029_ = v_a_5004_;
v___y_5030_ = v_a_5005_;
v___y_5031_ = v_a_5006_;
v___y_5032_ = v_a_5007_;
v___y_5033_ = v_a_5008_;
v___y_5034_ = v_a_5009_;
v___y_5035_ = v_a_5010_;
v___y_5036_ = v_a_5011_;
v___y_5037_ = v_a_5012_;
goto v___jp_5027_;
}
else
{
lean_object* v_inheritedTraceOptions_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; uint8_t v___x_5051_; 
v_inheritedTraceOptions_5048_ = lean_ctor_get(v_a_5011_, 13);
v___x_5049_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3);
v___x_5050_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4);
v___x_5051_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5048_, v_options_5046_, v___x_5050_);
if (v___x_5051_ == 0)
{
v___y_5028_ = v_a_5003_;
v___y_5029_ = v_a_5004_;
v___y_5030_ = v_a_5005_;
v___y_5031_ = v_a_5006_;
v___y_5032_ = v_a_5007_;
v___y_5033_ = v_a_5008_;
v___y_5034_ = v_a_5009_;
v___y_5035_ = v_a_5010_;
v___y_5036_ = v_a_5011_;
v___y_5037_ = v_a_5012_;
goto v___jp_5027_;
}
else
{
lean_object* v___x_5052_; 
v___x_5052_ = l_Lean_Meta_Grind_updateLastTag(v_a_5003_, v_a_5004_, v_a_5005_, v_a_5006_, v_a_5007_, v_a_5008_, v_a_5009_, v_a_5010_, v_a_5011_, v_a_5012_);
if (lean_obj_tag(v___x_5052_) == 0)
{
lean_object* v___x_5053_; lean_object* v___x_5054_; 
lean_dec_ref(v___x_5052_);
lean_inc_ref(v_fact_5000_);
v___x_5053_ = l_Lean_MessageData_ofExpr(v_fact_5000_);
v___x_5054_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_5049_, v___x_5053_, v_a_5009_, v_a_5010_, v_a_5011_, v_a_5012_);
if (lean_obj_tag(v___x_5054_) == 0)
{
lean_dec_ref(v___x_5054_);
v___y_5028_ = v_a_5003_;
v___y_5029_ = v_a_5004_;
v___y_5030_ = v_a_5005_;
v___y_5031_ = v_a_5006_;
v___y_5032_ = v_a_5007_;
v___y_5033_ = v_a_5008_;
v___y_5034_ = v_a_5009_;
v___y_5035_ = v_a_5010_;
v___y_5036_ = v_a_5011_;
v___y_5037_ = v_a_5012_;
goto v___jp_5027_;
}
else
{
lean_dec(v_generation_5002_);
lean_dec_ref(v_proof_5001_);
lean_dec_ref(v_fact_5000_);
return v___x_5054_;
}
}
else
{
lean_dec(v_generation_5002_);
lean_dec_ref(v_proof_5001_);
lean_dec_ref(v_fact_5000_);
return v___x_5052_;
}
}
}
v___jp_5014_:
{
uint8_t v___x_5025_; lean_object* v___x_5026_; 
v___x_5025_ = 0;
v___x_5026_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go(v_proof_5001_, v_generation_5002_, v_fact_5000_, v___x_5025_, v___y_5015_, v___y_5016_, v___y_5017_, v___y_5018_, v___y_5019_, v___y_5020_, v___y_5021_, v___y_5022_, v___y_5023_, v___y_5024_);
return v___x_5026_;
}
v___jp_5027_:
{
lean_object* v___x_5038_; uint8_t v___x_5039_; 
lean_inc_ref(v_fact_5000_);
v___x_5038_ = l_Lean_Expr_cleanupAnnotations(v_fact_5000_);
v___x_5039_ = l_Lean_Expr_isApp(v___x_5038_);
if (v___x_5039_ == 0)
{
lean_dec_ref(v___x_5038_);
v___y_5015_ = v___y_5028_;
v___y_5016_ = v___y_5029_;
v___y_5017_ = v___y_5030_;
v___y_5018_ = v___y_5031_;
v___y_5019_ = v___y_5032_;
v___y_5020_ = v___y_5033_;
v___y_5021_ = v___y_5034_;
v___y_5022_ = v___y_5035_;
v___y_5023_ = v___y_5036_;
v___y_5024_ = v___y_5037_;
goto v___jp_5014_;
}
else
{
lean_object* v_arg_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; uint8_t v___x_5043_; 
v_arg_5040_ = lean_ctor_get(v___x_5038_, 1);
lean_inc_ref(v_arg_5040_);
v___x_5041_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5038_);
v___x_5042_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__1);
v___x_5043_ = l_Lean_Expr_isConstOf(v___x_5041_, v___x_5042_);
lean_dec_ref(v___x_5041_);
if (v___x_5043_ == 0)
{
lean_dec_ref(v_arg_5040_);
v___y_5015_ = v___y_5028_;
v___y_5016_ = v___y_5029_;
v___y_5017_ = v___y_5030_;
v___y_5018_ = v___y_5031_;
v___y_5019_ = v___y_5032_;
v___y_5020_ = v___y_5033_;
v___y_5021_ = v___y_5034_;
v___y_5022_ = v___y_5035_;
v___y_5023_ = v___y_5036_;
v___y_5024_ = v___y_5037_;
goto v___jp_5014_;
}
else
{
lean_object* v___x_5044_; 
lean_dec_ref(v_fact_5000_);
v___x_5044_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go(v_proof_5001_, v_generation_5002_, v_arg_5040_, v___x_5043_, v___y_5028_, v___y_5029_, v___y_5030_, v___y_5031_, v___y_5032_, v___y_5033_, v___y_5034_, v___y_5035_, v___y_5036_, v___y_5037_);
return v___x_5044_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___boxed(lean_object* v_fact_5055_, lean_object* v_proof_5056_, lean_object* v_generation_5057_, lean_object* v_a_5058_, lean_object* v_a_5059_, lean_object* v_a_5060_, lean_object* v_a_5061_, lean_object* v_a_5062_, lean_object* v_a_5063_, lean_object* v_a_5064_, lean_object* v_a_5065_, lean_object* v_a_5066_, lean_object* v_a_5067_, lean_object* v_a_5068_){
_start:
{
lean_object* v_res_5069_; 
v_res_5069_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep(v_fact_5055_, v_proof_5056_, v_generation_5057_, v_a_5058_, v_a_5059_, v_a_5060_, v_a_5061_, v_a_5062_, v_a_5063_, v_a_5064_, v_a_5065_, v_a_5066_, v_a_5067_);
lean_dec(v_a_5067_);
lean_dec_ref(v_a_5066_);
lean_dec(v_a_5065_);
lean_dec_ref(v_a_5064_);
lean_dec(v_a_5063_);
lean_dec_ref(v_a_5062_);
lean_dec(v_a_5061_);
lean_dec_ref(v_a_5060_);
lean_dec(v_a_5059_);
lean_dec(v_a_5058_);
return v_res_5069_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; 
v___x_5070_ = lean_box(0);
v___x_5071_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0);
v___x_5072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5072_, 0, v___x_5071_);
lean_ctor_set(v___x_5072_, 1, v___x_5070_);
return v___x_5072_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg(lean_object* v___y_5073_, lean_object* v___y_5074_, lean_object* v___y_5075_, lean_object* v___y_5076_, lean_object* v___y_5077_, lean_object* v___y_5078_, lean_object* v___y_5079_, lean_object* v___y_5080_, lean_object* v___y_5081_, lean_object* v___y_5082_){
_start:
{
lean_object* v___x_5084_; 
v___x_5084_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_5073_, v___y_5082_);
if (lean_obj_tag(v___x_5084_) == 0)
{
lean_object* v_a_5085_; uint8_t v___x_5086_; 
v_a_5085_ = lean_ctor_get(v___x_5084_, 0);
lean_inc(v_a_5085_);
lean_dec_ref(v___x_5084_);
v___x_5086_ = lean_unbox(v_a_5085_);
lean_dec(v_a_5085_);
if (v___x_5086_ == 0)
{
lean_object* v___x_5087_; lean_object* v___x_5088_; 
v___x_5087_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0);
v___x_5088_ = l_Lean_Core_checkSystem(v___x_5087_, v___y_5081_, v___y_5082_);
if (lean_obj_tag(v___x_5088_) == 0)
{
lean_object* v___x_5089_; 
lean_dec_ref(v___x_5088_);
v___x_5089_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___redArg(v___y_5073_, v___y_5082_);
if (lean_obj_tag(v___x_5089_) == 0)
{
lean_object* v_a_5090_; lean_object* v___x_5092_; uint8_t v_isShared_5093_; uint8_t v_isSharedCheck_5126_; 
v_a_5090_ = lean_ctor_get(v___x_5089_, 0);
v_isSharedCheck_5126_ = !lean_is_exclusive(v___x_5089_);
if (v_isSharedCheck_5126_ == 0)
{
v___x_5092_ = v___x_5089_;
v_isShared_5093_ = v_isSharedCheck_5126_;
goto v_resetjp_5091_;
}
else
{
lean_inc(v_a_5090_);
lean_dec(v___x_5089_);
v___x_5092_ = lean_box(0);
v_isShared_5093_ = v_isSharedCheck_5126_;
goto v_resetjp_5091_;
}
v_resetjp_5091_:
{
if (lean_obj_tag(v_a_5090_) == 1)
{
lean_object* v_val_5094_; 
lean_del_object(v___x_5092_);
v_val_5094_ = lean_ctor_get(v_a_5090_, 0);
lean_inc(v_val_5094_);
lean_dec_ref(v_a_5090_);
if (lean_obj_tag(v_val_5094_) == 0)
{
lean_object* v_lhs_5095_; lean_object* v_rhs_5096_; lean_object* v_proof_5097_; uint8_t v_isHEq_5098_; lean_object* v___x_5099_; 
v_lhs_5095_ = lean_ctor_get(v_val_5094_, 0);
lean_inc_ref(v_lhs_5095_);
v_rhs_5096_ = lean_ctor_get(v_val_5094_, 1);
lean_inc_ref(v_rhs_5096_);
v_proof_5097_ = lean_ctor_get(v_val_5094_, 2);
lean_inc_ref(v_proof_5097_);
v_isHEq_5098_ = lean_ctor_get_uint8(v_val_5094_, sizeof(void*)*3);
lean_dec_ref(v_val_5094_);
v___x_5099_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep(v_lhs_5095_, v_rhs_5096_, v_proof_5097_, v_isHEq_5098_, v___y_5073_, v___y_5074_, v___y_5075_, v___y_5076_, v___y_5077_, v___y_5078_, v___y_5079_, v___y_5080_, v___y_5081_, v___y_5082_);
if (lean_obj_tag(v___x_5099_) == 0)
{
lean_dec_ref(v___x_5099_);
goto _start;
}
else
{
lean_object* v_a_5101_; lean_object* v___x_5103_; uint8_t v_isShared_5104_; uint8_t v_isSharedCheck_5108_; 
v_a_5101_ = lean_ctor_get(v___x_5099_, 0);
v_isSharedCheck_5108_ = !lean_is_exclusive(v___x_5099_);
if (v_isSharedCheck_5108_ == 0)
{
v___x_5103_ = v___x_5099_;
v_isShared_5104_ = v_isSharedCheck_5108_;
goto v_resetjp_5102_;
}
else
{
lean_inc(v_a_5101_);
lean_dec(v___x_5099_);
v___x_5103_ = lean_box(0);
v_isShared_5104_ = v_isSharedCheck_5108_;
goto v_resetjp_5102_;
}
v_resetjp_5102_:
{
lean_object* v___x_5106_; 
if (v_isShared_5104_ == 0)
{
v___x_5106_ = v___x_5103_;
goto v_reusejp_5105_;
}
else
{
lean_object* v_reuseFailAlloc_5107_; 
v_reuseFailAlloc_5107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5107_, 0, v_a_5101_);
v___x_5106_ = v_reuseFailAlloc_5107_;
goto v_reusejp_5105_;
}
v_reusejp_5105_:
{
return v___x_5106_;
}
}
}
}
else
{
lean_object* v_prop_5109_; lean_object* v_proof_5110_; lean_object* v_generation_5111_; lean_object* v___x_5112_; 
v_prop_5109_ = lean_ctor_get(v_val_5094_, 0);
lean_inc_ref(v_prop_5109_);
v_proof_5110_ = lean_ctor_get(v_val_5094_, 1);
lean_inc_ref(v_proof_5110_);
v_generation_5111_ = lean_ctor_get(v_val_5094_, 2);
lean_inc(v_generation_5111_);
lean_dec_ref(v_val_5094_);
v___x_5112_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep(v_prop_5109_, v_proof_5110_, v_generation_5111_, v___y_5073_, v___y_5074_, v___y_5075_, v___y_5076_, v___y_5077_, v___y_5078_, v___y_5079_, v___y_5080_, v___y_5081_, v___y_5082_);
if (lean_obj_tag(v___x_5112_) == 0)
{
lean_dec_ref(v___x_5112_);
goto _start;
}
else
{
lean_object* v_a_5114_; lean_object* v___x_5116_; uint8_t v_isShared_5117_; uint8_t v_isSharedCheck_5121_; 
v_a_5114_ = lean_ctor_get(v___x_5112_, 0);
v_isSharedCheck_5121_ = !lean_is_exclusive(v___x_5112_);
if (v_isSharedCheck_5121_ == 0)
{
v___x_5116_ = v___x_5112_;
v_isShared_5117_ = v_isSharedCheck_5121_;
goto v_resetjp_5115_;
}
else
{
lean_inc(v_a_5114_);
lean_dec(v___x_5112_);
v___x_5116_ = lean_box(0);
v_isShared_5117_ = v_isSharedCheck_5121_;
goto v_resetjp_5115_;
}
v_resetjp_5115_:
{
lean_object* v___x_5119_; 
if (v_isShared_5117_ == 0)
{
v___x_5119_ = v___x_5116_;
goto v_reusejp_5118_;
}
else
{
lean_object* v_reuseFailAlloc_5120_; 
v_reuseFailAlloc_5120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5120_, 0, v_a_5114_);
v___x_5119_ = v_reuseFailAlloc_5120_;
goto v_reusejp_5118_;
}
v_reusejp_5118_:
{
return v___x_5119_;
}
}
}
}
}
else
{
lean_object* v___x_5122_; lean_object* v___x_5124_; 
lean_dec(v_a_5090_);
v___x_5122_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___closed__0);
if (v_isShared_5093_ == 0)
{
lean_ctor_set(v___x_5092_, 0, v___x_5122_);
v___x_5124_ = v___x_5092_;
goto v_reusejp_5123_;
}
else
{
lean_object* v_reuseFailAlloc_5125_; 
v_reuseFailAlloc_5125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5125_, 0, v___x_5122_);
v___x_5124_ = v_reuseFailAlloc_5125_;
goto v_reusejp_5123_;
}
v_reusejp_5123_:
{
return v___x_5124_;
}
}
}
}
else
{
lean_object* v_a_5127_; lean_object* v___x_5129_; uint8_t v_isShared_5130_; uint8_t v_isSharedCheck_5134_; 
v_a_5127_ = lean_ctor_get(v___x_5089_, 0);
v_isSharedCheck_5134_ = !lean_is_exclusive(v___x_5089_);
if (v_isSharedCheck_5134_ == 0)
{
v___x_5129_ = v___x_5089_;
v_isShared_5130_ = v_isSharedCheck_5134_;
goto v_resetjp_5128_;
}
else
{
lean_inc(v_a_5127_);
lean_dec(v___x_5089_);
v___x_5129_ = lean_box(0);
v_isShared_5130_ = v_isSharedCheck_5134_;
goto v_resetjp_5128_;
}
v_resetjp_5128_:
{
lean_object* v___x_5132_; 
if (v_isShared_5130_ == 0)
{
v___x_5132_ = v___x_5129_;
goto v_reusejp_5131_;
}
else
{
lean_object* v_reuseFailAlloc_5133_; 
v_reuseFailAlloc_5133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5133_, 0, v_a_5127_);
v___x_5132_ = v_reuseFailAlloc_5133_;
goto v_reusejp_5131_;
}
v_reusejp_5131_:
{
return v___x_5132_;
}
}
}
}
else
{
lean_object* v_a_5135_; lean_object* v___x_5137_; uint8_t v_isShared_5138_; uint8_t v_isSharedCheck_5142_; 
v_a_5135_ = lean_ctor_get(v___x_5088_, 0);
v_isSharedCheck_5142_ = !lean_is_exclusive(v___x_5088_);
if (v_isSharedCheck_5142_ == 0)
{
v___x_5137_ = v___x_5088_;
v_isShared_5138_ = v_isSharedCheck_5142_;
goto v_resetjp_5136_;
}
else
{
lean_inc(v_a_5135_);
lean_dec(v___x_5088_);
v___x_5137_ = lean_box(0);
v_isShared_5138_ = v_isSharedCheck_5142_;
goto v_resetjp_5136_;
}
v_resetjp_5136_:
{
lean_object* v___x_5140_; 
if (v_isShared_5138_ == 0)
{
v___x_5140_ = v___x_5137_;
goto v_reusejp_5139_;
}
else
{
lean_object* v_reuseFailAlloc_5141_; 
v_reuseFailAlloc_5141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5141_, 0, v_a_5135_);
v___x_5140_ = v_reuseFailAlloc_5141_;
goto v_reusejp_5139_;
}
v_reusejp_5139_:
{
return v___x_5140_;
}
}
}
}
else
{
lean_object* v___x_5143_; 
v___x_5143_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg(v___y_5073_, v___y_5082_);
if (lean_obj_tag(v___x_5143_) == 0)
{
lean_object* v___x_5145_; uint8_t v_isShared_5146_; uint8_t v_isSharedCheck_5151_; 
v_isSharedCheck_5151_ = !lean_is_exclusive(v___x_5143_);
if (v_isSharedCheck_5151_ == 0)
{
lean_object* v_unused_5152_; 
v_unused_5152_ = lean_ctor_get(v___x_5143_, 0);
lean_dec(v_unused_5152_);
v___x_5145_ = v___x_5143_;
v_isShared_5146_ = v_isSharedCheck_5151_;
goto v_resetjp_5144_;
}
else
{
lean_dec(v___x_5143_);
v___x_5145_ = lean_box(0);
v_isShared_5146_ = v_isSharedCheck_5151_;
goto v_resetjp_5144_;
}
v_resetjp_5144_:
{
lean_object* v___x_5147_; lean_object* v___x_5149_; 
v___x_5147_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___closed__0, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___closed__0);
if (v_isShared_5146_ == 0)
{
lean_ctor_set(v___x_5145_, 0, v___x_5147_);
v___x_5149_ = v___x_5145_;
goto v_reusejp_5148_;
}
else
{
lean_object* v_reuseFailAlloc_5150_; 
v_reuseFailAlloc_5150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5150_, 0, v___x_5147_);
v___x_5149_ = v_reuseFailAlloc_5150_;
goto v_reusejp_5148_;
}
v_reusejp_5148_:
{
return v___x_5149_;
}
}
}
else
{
lean_object* v_a_5153_; lean_object* v___x_5155_; uint8_t v_isShared_5156_; uint8_t v_isSharedCheck_5160_; 
v_a_5153_ = lean_ctor_get(v___x_5143_, 0);
v_isSharedCheck_5160_ = !lean_is_exclusive(v___x_5143_);
if (v_isSharedCheck_5160_ == 0)
{
v___x_5155_ = v___x_5143_;
v_isShared_5156_ = v_isSharedCheck_5160_;
goto v_resetjp_5154_;
}
else
{
lean_inc(v_a_5153_);
lean_dec(v___x_5143_);
v___x_5155_ = lean_box(0);
v_isShared_5156_ = v_isSharedCheck_5160_;
goto v_resetjp_5154_;
}
v_resetjp_5154_:
{
lean_object* v___x_5158_; 
if (v_isShared_5156_ == 0)
{
v___x_5158_ = v___x_5155_;
goto v_reusejp_5157_;
}
else
{
lean_object* v_reuseFailAlloc_5159_; 
v_reuseFailAlloc_5159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5159_, 0, v_a_5153_);
v___x_5158_ = v_reuseFailAlloc_5159_;
goto v_reusejp_5157_;
}
v_reusejp_5157_:
{
return v___x_5158_;
}
}
}
}
}
else
{
lean_object* v_a_5161_; lean_object* v___x_5163_; uint8_t v_isShared_5164_; uint8_t v_isSharedCheck_5168_; 
v_a_5161_ = lean_ctor_get(v___x_5084_, 0);
v_isSharedCheck_5168_ = !lean_is_exclusive(v___x_5084_);
if (v_isSharedCheck_5168_ == 0)
{
v___x_5163_ = v___x_5084_;
v_isShared_5164_ = v_isSharedCheck_5168_;
goto v_resetjp_5162_;
}
else
{
lean_inc(v_a_5161_);
lean_dec(v___x_5084_);
v___x_5163_ = lean_box(0);
v_isShared_5164_ = v_isSharedCheck_5168_;
goto v_resetjp_5162_;
}
v_resetjp_5162_:
{
lean_object* v___x_5166_; 
if (v_isShared_5164_ == 0)
{
v___x_5166_ = v___x_5163_;
goto v_reusejp_5165_;
}
else
{
lean_object* v_reuseFailAlloc_5167_; 
v_reuseFailAlloc_5167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5167_, 0, v_a_5161_);
v___x_5166_ = v_reuseFailAlloc_5167_;
goto v_reusejp_5165_;
}
v_reusejp_5165_:
{
return v___x_5166_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___boxed(lean_object* v___y_5169_, lean_object* v___y_5170_, lean_object* v___y_5171_, lean_object* v___y_5172_, lean_object* v___y_5173_, lean_object* v___y_5174_, lean_object* v___y_5175_, lean_object* v___y_5176_, lean_object* v___y_5177_, lean_object* v___y_5178_, lean_object* v___y_5179_){
_start:
{
lean_object* v_res_5180_; 
v_res_5180_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg(v___y_5169_, v___y_5170_, v___y_5171_, v___y_5172_, v___y_5173_, v___y_5174_, v___y_5175_, v___y_5176_, v___y_5177_, v___y_5178_);
lean_dec(v___y_5178_);
lean_dec_ref(v___y_5177_);
lean_dec(v___y_5176_);
lean_dec_ref(v___y_5175_);
lean_dec(v___y_5174_);
lean_dec_ref(v___y_5173_);
lean_dec(v___y_5172_);
lean_dec_ref(v___y_5171_);
lean_dec(v___y_5170_);
lean_dec(v___y_5169_);
return v_res_5180_;
}
}
LEAN_EXPORT lean_object* lean_grind_process_new_facts(lean_object* v_a_5181_, lean_object* v_a_5182_, lean_object* v_a_5183_, lean_object* v_a_5184_, lean_object* v_a_5185_, lean_object* v_a_5186_, lean_object* v_a_5187_, lean_object* v_a_5188_, lean_object* v_a_5189_, lean_object* v_a_5190_){
_start:
{
lean_object* v___x_5192_; 
v___x_5192_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg(v_a_5181_, v_a_5182_, v_a_5183_, v_a_5184_, v_a_5185_, v_a_5186_, v_a_5187_, v_a_5188_, v_a_5189_, v_a_5190_);
lean_dec(v_a_5190_);
lean_dec_ref(v_a_5189_);
lean_dec(v_a_5188_);
lean_dec_ref(v_a_5187_);
lean_dec(v_a_5186_);
lean_dec_ref(v_a_5185_);
lean_dec(v_a_5184_);
lean_dec_ref(v_a_5183_);
lean_dec(v_a_5182_);
lean_dec(v_a_5181_);
if (lean_obj_tag(v___x_5192_) == 0)
{
lean_object* v_a_5193_; lean_object* v___x_5195_; uint8_t v_isShared_5196_; uint8_t v_isSharedCheck_5206_; 
v_a_5193_ = lean_ctor_get(v___x_5192_, 0);
v_isSharedCheck_5206_ = !lean_is_exclusive(v___x_5192_);
if (v_isSharedCheck_5206_ == 0)
{
v___x_5195_ = v___x_5192_;
v_isShared_5196_ = v_isSharedCheck_5206_;
goto v_resetjp_5194_;
}
else
{
lean_inc(v_a_5193_);
lean_dec(v___x_5192_);
v___x_5195_ = lean_box(0);
v_isShared_5196_ = v_isSharedCheck_5206_;
goto v_resetjp_5194_;
}
v_resetjp_5194_:
{
lean_object* v_fst_5197_; 
v_fst_5197_ = lean_ctor_get(v_a_5193_, 0);
lean_inc(v_fst_5197_);
lean_dec(v_a_5193_);
if (lean_obj_tag(v_fst_5197_) == 0)
{
lean_object* v___x_5198_; lean_object* v___x_5200_; 
v___x_5198_ = lean_box(0);
if (v_isShared_5196_ == 0)
{
lean_ctor_set(v___x_5195_, 0, v___x_5198_);
v___x_5200_ = v___x_5195_;
goto v_reusejp_5199_;
}
else
{
lean_object* v_reuseFailAlloc_5201_; 
v_reuseFailAlloc_5201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5201_, 0, v___x_5198_);
v___x_5200_ = v_reuseFailAlloc_5201_;
goto v_reusejp_5199_;
}
v_reusejp_5199_:
{
return v___x_5200_;
}
}
else
{
lean_object* v_val_5202_; lean_object* v___x_5204_; 
v_val_5202_ = lean_ctor_get(v_fst_5197_, 0);
lean_inc(v_val_5202_);
lean_dec_ref(v_fst_5197_);
if (v_isShared_5196_ == 0)
{
lean_ctor_set(v___x_5195_, 0, v_val_5202_);
v___x_5204_ = v___x_5195_;
goto v_reusejp_5203_;
}
else
{
lean_object* v_reuseFailAlloc_5205_; 
v_reuseFailAlloc_5205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5205_, 0, v_val_5202_);
v___x_5204_ = v_reuseFailAlloc_5205_;
goto v_reusejp_5203_;
}
v_reusejp_5203_:
{
return v___x_5204_;
}
}
}
}
else
{
lean_object* v_a_5207_; lean_object* v___x_5209_; uint8_t v_isShared_5210_; uint8_t v_isSharedCheck_5214_; 
v_a_5207_ = lean_ctor_get(v___x_5192_, 0);
v_isSharedCheck_5214_ = !lean_is_exclusive(v___x_5192_);
if (v_isSharedCheck_5214_ == 0)
{
v___x_5209_ = v___x_5192_;
v_isShared_5210_ = v_isSharedCheck_5214_;
goto v_resetjp_5208_;
}
else
{
lean_inc(v_a_5207_);
lean_dec(v___x_5192_);
v___x_5209_ = lean_box(0);
v_isShared_5210_ = v_isSharedCheck_5214_;
goto v_resetjp_5208_;
}
v_resetjp_5208_:
{
lean_object* v___x_5212_; 
if (v_isShared_5210_ == 0)
{
v___x_5212_ = v___x_5209_;
goto v_reusejp_5211_;
}
else
{
lean_object* v_reuseFailAlloc_5213_; 
v_reuseFailAlloc_5213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5213_, 0, v_a_5207_);
v___x_5212_ = v_reuseFailAlloc_5213_;
goto v_reusejp_5211_;
}
v_reusejp_5211_:
{
return v___x_5212_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl___boxed(lean_object* v_a_5215_, lean_object* v_a_5216_, lean_object* v_a_5217_, lean_object* v_a_5218_, lean_object* v_a_5219_, lean_object* v_a_5220_, lean_object* v_a_5221_, lean_object* v_a_5222_, lean_object* v_a_5223_, lean_object* v_a_5224_, lean_object* v_a_5225_){
_start:
{
lean_object* v_res_5226_; 
v_res_5226_ = lean_grind_process_new_facts(v_a_5215_, v_a_5216_, v_a_5217_, v_a_5218_, v_a_5219_, v_a_5220_, v_a_5221_, v_a_5222_, v_a_5223_, v_a_5224_);
return v_res_5226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0(lean_object* v_b_5227_, lean_object* v___y_5228_, lean_object* v___y_5229_, lean_object* v___y_5230_, lean_object* v___y_5231_, lean_object* v___y_5232_, lean_object* v___y_5233_, lean_object* v___y_5234_, lean_object* v___y_5235_, lean_object* v___y_5236_, lean_object* v___y_5237_){
_start:
{
lean_object* v___x_5239_; 
v___x_5239_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg(v___y_5228_, v___y_5229_, v___y_5230_, v___y_5231_, v___y_5232_, v___y_5233_, v___y_5234_, v___y_5235_, v___y_5236_, v___y_5237_);
return v___x_5239_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___boxed(lean_object* v_b_5240_, lean_object* v___y_5241_, lean_object* v___y_5242_, lean_object* v___y_5243_, lean_object* v___y_5244_, lean_object* v___y_5245_, lean_object* v___y_5246_, lean_object* v___y_5247_, lean_object* v___y_5248_, lean_object* v___y_5249_, lean_object* v___y_5250_, lean_object* v___y_5251_){
_start:
{
lean_object* v_res_5252_; 
v_res_5252_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0(v_b_5240_, v___y_5241_, v___y_5242_, v___y_5243_, v___y_5244_, v___y_5245_, v___y_5246_, v___y_5247_, v___y_5248_, v___y_5249_, v___y_5250_);
lean_dec(v___y_5250_);
lean_dec_ref(v___y_5249_);
lean_dec(v___y_5248_);
lean_dec_ref(v___y_5247_);
lean_dec(v___y_5246_);
lean_dec_ref(v___y_5245_);
lean_dec(v___y_5244_);
lean_dec_ref(v___y_5243_);
lean_dec(v___y_5242_);
lean_dec(v___y_5241_);
lean_dec_ref(v_b_5240_);
return v_res_5252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_add(lean_object* v_fact_5253_, lean_object* v_proof_5254_, lean_object* v_generation_5255_, lean_object* v_a_5256_, lean_object* v_a_5257_, lean_object* v_a_5258_, lean_object* v_a_5259_, lean_object* v_a_5260_, lean_object* v_a_5261_, lean_object* v_a_5262_, lean_object* v_a_5263_, lean_object* v_a_5264_, lean_object* v_a_5265_){
_start:
{
uint8_t v___x_5267_; 
lean_inc_ref(v_fact_5253_);
v___x_5267_ = l_Lean_Expr_isTrue(v_fact_5253_);
if (v___x_5267_ == 0)
{
lean_object* v___x_5268_; 
v___x_5268_ = l_Lean_Meta_Grind_isInconsistent___redArg(v_a_5256_, v_a_5265_);
if (lean_obj_tag(v___x_5268_) == 0)
{
lean_object* v_a_5269_; lean_object* v___x_5271_; uint8_t v_isShared_5272_; uint8_t v_isSharedCheck_5280_; 
v_a_5269_ = lean_ctor_get(v___x_5268_, 0);
v_isSharedCheck_5280_ = !lean_is_exclusive(v___x_5268_);
if (v_isSharedCheck_5280_ == 0)
{
v___x_5271_ = v___x_5268_;
v_isShared_5272_ = v_isSharedCheck_5280_;
goto v_resetjp_5270_;
}
else
{
lean_inc(v_a_5269_);
lean_dec(v___x_5268_);
v___x_5271_ = lean_box(0);
v_isShared_5272_ = v_isSharedCheck_5280_;
goto v_resetjp_5270_;
}
v_resetjp_5270_:
{
uint8_t v___x_5273_; 
v___x_5273_ = lean_unbox(v_a_5269_);
lean_dec(v_a_5269_);
if (v___x_5273_ == 0)
{
lean_object* v___x_5274_; lean_object* v___x_5275_; 
lean_del_object(v___x_5271_);
v___x_5274_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg(v_a_5256_, v_a_5265_);
lean_dec_ref(v___x_5274_);
v___x_5275_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep(v_fact_5253_, v_proof_5254_, v_generation_5255_, v_a_5256_, v_a_5257_, v_a_5258_, v_a_5259_, v_a_5260_, v_a_5261_, v_a_5262_, v_a_5263_, v_a_5264_, v_a_5265_);
return v___x_5275_;
}
else
{
lean_object* v___x_5276_; lean_object* v___x_5278_; 
lean_dec(v_generation_5255_);
lean_dec_ref(v_proof_5254_);
lean_dec_ref(v_fact_5253_);
v___x_5276_ = lean_box(0);
if (v_isShared_5272_ == 0)
{
lean_ctor_set(v___x_5271_, 0, v___x_5276_);
v___x_5278_ = v___x_5271_;
goto v_reusejp_5277_;
}
else
{
lean_object* v_reuseFailAlloc_5279_; 
v_reuseFailAlloc_5279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5279_, 0, v___x_5276_);
v___x_5278_ = v_reuseFailAlloc_5279_;
goto v_reusejp_5277_;
}
v_reusejp_5277_:
{
return v___x_5278_;
}
}
}
}
else
{
lean_object* v_a_5281_; lean_object* v___x_5283_; uint8_t v_isShared_5284_; uint8_t v_isSharedCheck_5288_; 
lean_dec(v_generation_5255_);
lean_dec_ref(v_proof_5254_);
lean_dec_ref(v_fact_5253_);
v_a_5281_ = lean_ctor_get(v___x_5268_, 0);
v_isSharedCheck_5288_ = !lean_is_exclusive(v___x_5268_);
if (v_isSharedCheck_5288_ == 0)
{
v___x_5283_ = v___x_5268_;
v_isShared_5284_ = v_isSharedCheck_5288_;
goto v_resetjp_5282_;
}
else
{
lean_inc(v_a_5281_);
lean_dec(v___x_5268_);
v___x_5283_ = lean_box(0);
v_isShared_5284_ = v_isSharedCheck_5288_;
goto v_resetjp_5282_;
}
v_resetjp_5282_:
{
lean_object* v___x_5286_; 
if (v_isShared_5284_ == 0)
{
v___x_5286_ = v___x_5283_;
goto v_reusejp_5285_;
}
else
{
lean_object* v_reuseFailAlloc_5287_; 
v_reuseFailAlloc_5287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5287_, 0, v_a_5281_);
v___x_5286_ = v_reuseFailAlloc_5287_;
goto v_reusejp_5285_;
}
v_reusejp_5285_:
{
return v___x_5286_;
}
}
}
}
else
{
lean_object* v___x_5289_; lean_object* v___x_5290_; 
lean_dec(v_generation_5255_);
lean_dec_ref(v_proof_5254_);
lean_dec_ref(v_fact_5253_);
v___x_5289_ = lean_box(0);
v___x_5290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5290_, 0, v___x_5289_);
return v___x_5290_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_add___boxed(lean_object* v_fact_5291_, lean_object* v_proof_5292_, lean_object* v_generation_5293_, lean_object* v_a_5294_, lean_object* v_a_5295_, lean_object* v_a_5296_, lean_object* v_a_5297_, lean_object* v_a_5298_, lean_object* v_a_5299_, lean_object* v_a_5300_, lean_object* v_a_5301_, lean_object* v_a_5302_, lean_object* v_a_5303_, lean_object* v_a_5304_){
_start:
{
lean_object* v_res_5305_; 
v_res_5305_ = l_Lean_Meta_Grind_add(v_fact_5291_, v_proof_5292_, v_generation_5293_, v_a_5294_, v_a_5295_, v_a_5296_, v_a_5297_, v_a_5298_, v_a_5299_, v_a_5300_, v_a_5301_, v_a_5302_, v_a_5303_);
lean_dec(v_a_5303_);
lean_dec_ref(v_a_5302_);
lean_dec(v_a_5301_);
lean_dec_ref(v_a_5300_);
lean_dec(v_a_5299_);
lean_dec_ref(v_a_5298_);
lean_dec(v_a_5297_);
lean_dec_ref(v_a_5296_);
lean_dec(v_a_5295_);
lean_dec(v_a_5294_);
return v_res_5305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHypothesis(lean_object* v_fvarId_5306_, lean_object* v_generation_5307_, lean_object* v_a_5308_, lean_object* v_a_5309_, lean_object* v_a_5310_, lean_object* v_a_5311_, lean_object* v_a_5312_, lean_object* v_a_5313_, lean_object* v_a_5314_, lean_object* v_a_5315_, lean_object* v_a_5316_, lean_object* v_a_5317_){
_start:
{
lean_object* v___x_5319_; 
lean_inc(v_fvarId_5306_);
v___x_5319_ = l_Lean_FVarId_getType___redArg(v_fvarId_5306_, v_a_5314_, v_a_5316_, v_a_5317_);
if (lean_obj_tag(v___x_5319_) == 0)
{
lean_object* v_a_5320_; lean_object* v___x_5321_; lean_object* v___x_5322_; 
v_a_5320_ = lean_ctor_get(v___x_5319_, 0);
lean_inc(v_a_5320_);
lean_dec_ref(v___x_5319_);
v___x_5321_ = l_Lean_mkFVar(v_fvarId_5306_);
v___x_5322_ = l_Lean_Meta_Grind_add(v_a_5320_, v___x_5321_, v_generation_5307_, v_a_5308_, v_a_5309_, v_a_5310_, v_a_5311_, v_a_5312_, v_a_5313_, v_a_5314_, v_a_5315_, v_a_5316_, v_a_5317_);
return v___x_5322_;
}
else
{
lean_object* v_a_5323_; lean_object* v___x_5325_; uint8_t v_isShared_5326_; uint8_t v_isSharedCheck_5330_; 
lean_dec(v_generation_5307_);
lean_dec(v_fvarId_5306_);
v_a_5323_ = lean_ctor_get(v___x_5319_, 0);
v_isSharedCheck_5330_ = !lean_is_exclusive(v___x_5319_);
if (v_isSharedCheck_5330_ == 0)
{
v___x_5325_ = v___x_5319_;
v_isShared_5326_ = v_isSharedCheck_5330_;
goto v_resetjp_5324_;
}
else
{
lean_inc(v_a_5323_);
lean_dec(v___x_5319_);
v___x_5325_ = lean_box(0);
v_isShared_5326_ = v_isSharedCheck_5330_;
goto v_resetjp_5324_;
}
v_resetjp_5324_:
{
lean_object* v___x_5328_; 
if (v_isShared_5326_ == 0)
{
v___x_5328_ = v___x_5325_;
goto v_reusejp_5327_;
}
else
{
lean_object* v_reuseFailAlloc_5329_; 
v_reuseFailAlloc_5329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5329_, 0, v_a_5323_);
v___x_5328_ = v_reuseFailAlloc_5329_;
goto v_reusejp_5327_;
}
v_reusejp_5327_:
{
return v___x_5328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHypothesis___boxed(lean_object* v_fvarId_5331_, lean_object* v_generation_5332_, lean_object* v_a_5333_, lean_object* v_a_5334_, lean_object* v_a_5335_, lean_object* v_a_5336_, lean_object* v_a_5337_, lean_object* v_a_5338_, lean_object* v_a_5339_, lean_object* v_a_5340_, lean_object* v_a_5341_, lean_object* v_a_5342_, lean_object* v_a_5343_){
_start:
{
lean_object* v_res_5344_; 
v_res_5344_ = l_Lean_Meta_Grind_addHypothesis(v_fvarId_5331_, v_generation_5332_, v_a_5333_, v_a_5334_, v_a_5335_, v_a_5336_, v_a_5337_, v_a_5338_, v_a_5339_, v_a_5340_, v_a_5341_, v_a_5342_);
lean_dec(v_a_5342_);
lean_dec_ref(v_a_5341_);
lean_dec(v_a_5340_);
lean_dec_ref(v_a_5339_);
lean_dec(v_a_5338_);
lean_dec_ref(v_a_5337_);
lean_dec(v_a_5336_);
lean_dec_ref(v_a_5335_);
lean_dec(v_a_5334_);
lean_dec(v_a_5333_);
return v_res_5344_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Inv(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_PP(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Ctor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Beta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Internalize(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Core(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Inv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_PP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Ctor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Beta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Core(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Inv(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_PP(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Ctor(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Beta(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Internalize(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Core(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Inv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_PP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Ctor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Beta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Core(builtin);
}
#ifdef __cplusplus
}
#endif
