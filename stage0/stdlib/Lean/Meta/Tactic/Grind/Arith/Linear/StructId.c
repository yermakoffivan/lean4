// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Linear.StructId
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.OrderInsts import Lean.Meta.Tactic.Grind.Arith.Cutsat.ToInt import Lean.Meta.Tactic.Grind.Arith.CommRing.RingId import Lean.Meta.Tactic.Grind.Arith.Linear.Var import Lean.Meta.Tactic.Grind.Arith.Insts import Init.Grind.Module.Envelope
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstanceMeta_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint64_t l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Int_mkType;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkNumeral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_neg(lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_Linear_linearExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_mkVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCommRingId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkLawfulOrderLTInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Nat_mkType;
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_Meta_Grind_mkIsPreorderInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkIsPartialOrderInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkIsLinearOrderInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocessConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocessConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isCutsatType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isCutsatType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__2(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__10;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__11;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__12;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__13;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__14;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__15;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__16;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__17;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__18;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__19;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__20;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__21;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__22;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__23;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__24;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__25;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__26;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__27;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__28;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__29;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__30;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__31;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__32;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__33;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__34;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__35;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__36;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__37;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__38;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__39;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__40;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__41;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__42;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__43;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__44;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__45;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__46;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__47;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__48;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__49;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__50;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__51;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__52;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__53;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__54;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__55;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__56;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__57;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__58;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__59;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__60;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__61;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__62;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__63;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__64_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__64;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__65_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__65;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__10;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__11;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__12;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__13;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__14;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(lean_object* v_e_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = l_Lean_Meta_Sym_canon(v_e_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
if (lean_obj_tag(v___x_9_) == 0)
{
lean_object* v_a_10_; lean_object* v___x_11_; 
v_a_10_ = lean_ctor_get(v___x_9_, 0);
lean_inc(v_a_10_);
lean_dec_ref(v___x_9_);
v___x_11_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_10_, v_a_3_, v_a_7_);
return v___x_11_;
}
else
{
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg___boxed(lean_object* v_e_12_, lean_object* v_a_13_, lean_object* v_a_14_, lean_object* v_a_15_, lean_object* v_a_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v_e_12_, v_a_13_, v_a_14_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
lean_dec(v_a_18_);
lean_dec_ref(v_a_17_);
lean_dec(v_a_16_);
lean_dec_ref(v_a_15_);
lean_dec(v_a_14_);
lean_dec_ref(v_a_13_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(lean_object* v_e_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_, lean_object* v_a_25_, lean_object* v_a_26_, lean_object* v_a_27_, lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v_e_21_, v_a_26_, v_a_27_, v_a_28_, v_a_29_, v_a_30_, v_a_31_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___boxed(lean_object* v_e_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v_e_34_, v_a_35_, v_a_36_, v_a_37_, v_a_38_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_);
lean_dec(v_a_44_);
lean_dec_ref(v_a_43_);
lean_dec(v_a_42_);
lean_dec_ref(v_a_41_);
lean_dec(v_a_40_);
lean_dec_ref(v_a_39_);
lean_dec(v_a_38_);
lean_dec_ref(v_a_37_);
lean_dec(v_a_36_);
lean_dec(v_a_35_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn___redArg(lean_object* v_fn_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v_fn_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn___redArg___boxed(lean_object* v_fn_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn___redArg(v_fn_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_);
lean_dec(v_a_62_);
lean_dec_ref(v_a_61_);
lean_dec(v_a_60_);
lean_dec_ref(v_a_59_);
lean_dec(v_a_58_);
lean_dec_ref(v_a_57_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn(lean_object* v_fn_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v_fn_65_, v_a_70_, v_a_71_, v_a_72_, v_a_73_, v_a_74_, v_a_75_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn___boxed(lean_object* v_fn_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn(v_fn_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
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
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocessConst(lean_object* v_c_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v_c_91_, v_a_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
if (lean_obj_tag(v___x_103_) == 0)
{
lean_object* v_a_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v_a_104_ = lean_ctor_get(v___x_103_, 0);
lean_inc_n(v_a_104_, 2);
lean_dec_ref(v___x_103_);
v___x_105_ = lean_unsigned_to_nat(0u);
v___x_106_ = lean_box(0);
lean_inc(v_a_101_);
lean_inc_ref(v_a_100_);
lean_inc(v_a_99_);
lean_inc_ref(v_a_98_);
lean_inc(v_a_97_);
lean_inc_ref(v_a_96_);
lean_inc(v_a_95_);
lean_inc_ref(v_a_94_);
lean_inc(v_a_93_);
lean_inc(v_a_92_);
v___x_107_ = lean_grind_internalize(v_a_104_, v___x_105_, v___x_106_, v_a_92_, v_a_93_, v_a_94_, v_a_95_, v_a_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
if (lean_obj_tag(v___x_107_) == 0)
{
lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_114_; 
v_isSharedCheck_114_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_114_ == 0)
{
lean_object* v_unused_115_; 
v_unused_115_ = lean_ctor_get(v___x_107_, 0);
lean_dec(v_unused_115_);
v___x_109_ = v___x_107_;
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
else
{
lean_dec(v___x_107_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_112_; 
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 0, v_a_104_);
v___x_112_ = v___x_109_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_a_104_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
}
}
}
else
{
lean_object* v_a_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_123_; 
lean_dec(v_a_104_);
v_a_116_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_123_ == 0)
{
v___x_118_ = v___x_107_;
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_a_116_);
lean_dec(v___x_107_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___x_121_; 
if (v_isShared_119_ == 0)
{
v___x_121_ = v___x_118_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_a_116_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
}
}
else
{
return v___x_103_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocessConst___boxed(lean_object* v_c_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocessConst(v_c_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_);
lean_dec(v_a_134_);
lean_dec_ref(v_a_133_);
lean_dec(v_a_132_);
lean_dec_ref(v_a_131_);
lean_dec(v_a_130_);
lean_dec_ref(v_a_129_);
lean_dec(v_a_128_);
lean_dec_ref(v_a_127_);
lean_dec(v_a_126_);
lean_dec(v_a_125_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(lean_object* v_c_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = l_Lean_Meta_Sym_canon(v_c_137_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_);
if (lean_obj_tag(v___x_149_) == 0)
{
lean_object* v_a_150_; lean_object* v___x_151_; 
v_a_150_ = lean_ctor_get(v___x_149_, 0);
lean_inc(v_a_150_);
lean_dec_ref(v___x_149_);
v___x_151_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_150_, v_a_143_, v_a_147_);
if (lean_obj_tag(v___x_151_) == 0)
{
lean_object* v_a_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v_a_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc_n(v_a_152_, 2);
lean_dec_ref(v___x_151_);
v___x_153_ = lean_unsigned_to_nat(0u);
v___x_154_ = lean_box(0);
lean_inc(v_a_147_);
lean_inc_ref(v_a_146_);
lean_inc(v_a_145_);
lean_inc_ref(v_a_144_);
lean_inc(v_a_143_);
lean_inc_ref(v_a_142_);
lean_inc(v_a_141_);
lean_inc_ref(v_a_140_);
lean_inc(v_a_139_);
lean_inc(v_a_138_);
v___x_155_ = lean_grind_internalize(v_a_152_, v___x_153_, v___x_154_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_);
if (lean_obj_tag(v___x_155_) == 0)
{
lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_162_; 
v_isSharedCheck_162_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_162_ == 0)
{
lean_object* v_unused_163_; 
v_unused_163_ = lean_ctor_get(v___x_155_, 0);
lean_dec(v_unused_163_);
v___x_157_ = v___x_155_;
v_isShared_158_ = v_isSharedCheck_162_;
goto v_resetjp_156_;
}
else
{
lean_dec(v___x_155_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_162_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_160_; 
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 0, v_a_152_);
v___x_160_ = v___x_157_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v_a_152_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
}
else
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
lean_dec(v_a_152_);
v_a_164_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_171_ == 0)
{
v___x_166_ = v___x_155_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_155_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
if (v_isShared_167_ == 0)
{
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_a_164_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
}
else
{
return v___x_151_;
}
}
else
{
return v___x_149_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst___boxed(lean_object* v_c_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(v_c_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_, v_a_178_, v_a_179_, v_a_180_, v_a_181_, v_a_182_);
lean_dec(v_a_182_);
lean_dec_ref(v_a_181_);
lean_dec(v_a_180_);
lean_dec_ref(v_a_179_);
lean_dec(v_a_178_);
lean_dec_ref(v_a_177_);
lean_dec(v_a_176_);
lean_dec_ref(v_a_175_);
lean_dec(v_a_174_);
lean_dec(v_a_173_);
return v_res_184_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__0(void){
_start:
{
lean_object* v___x_185_; 
v___x_185_ = lean_mk_string_unchecked("`grind linarith` expected", 25, 25);
return v___x_185_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__0);
v___x_187_ = l_Lean_stringToMessageData(v___x_186_);
return v___x_187_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__2(void){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = lean_mk_string_unchecked("\nto be definitionally equal to", 30, 30);
return v___x_188_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__2);
v___x_190_ = l_Lean_stringToMessageData(v___x_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(lean_object* v_a_191_, lean_object* v_b_192_){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_194_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1);
v___x_195_ = l_Lean_indentExpr(v_a_191_);
v___x_196_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_194_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
v___x_197_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3);
v___x_198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_196_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
v___x_199_ = l_Lean_indentExpr(v_b_192_);
v___x_200_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_198_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
v___x_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___boxed(lean_object* v_a_202_, lean_object* v_b_203_, lean_object* v_a_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(v_a_202_, v_b_203_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg(lean_object* v_a_206_, lean_object* v_b_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(v_a_206_, v_b_207_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___boxed(lean_object* v_a_214_, lean_object* v_b_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg(v_a_214_, v_b_215_, v_a_216_, v_a_217_, v_a_218_, v_a_219_);
lean_dec(v_a_219_);
lean_dec_ref(v_a_218_);
lean_dec(v_a_217_);
lean_dec_ref(v_a_216_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0(lean_object* v_msgData_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v___x_228_; lean_object* v_env_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v_mctx_232_; lean_object* v_lctx_233_; lean_object* v_options_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_228_ = lean_st_ref_get(v___y_226_);
v_env_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc_ref(v_env_229_);
lean_dec(v___x_228_);
v___x_230_ = lean_st_ref_get(v___y_226_);
lean_dec(v___x_230_);
v___x_231_ = lean_st_ref_get(v___y_224_);
v_mctx_232_ = lean_ctor_get(v___x_231_, 0);
lean_inc_ref(v_mctx_232_);
lean_dec(v___x_231_);
v_lctx_233_ = lean_ctor_get(v___y_223_, 2);
v_options_234_ = lean_ctor_get(v___y_225_, 2);
lean_inc_ref(v_options_234_);
lean_inc_ref(v_lctx_233_);
v___x_235_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_235_, 0, v_env_229_);
lean_ctor_set(v___x_235_, 1, v_mctx_232_);
lean_ctor_set(v___x_235_, 2, v_lctx_233_);
lean_ctor_set(v___x_235_, 3, v_options_234_);
v___x_236_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
lean_ctor_set(v___x_236_, 1, v_msgData_222_);
v___x_237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0___boxed(lean_object* v_msgData_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0(v_msgData_238_, v___y_239_, v___y_240_, v___y_241_, v___y_242_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
lean_dec(v___y_240_);
lean_dec_ref(v___y_239_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg(lean_object* v_msg_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_){
_start:
{
lean_object* v_ref_251_; lean_object* v___x_252_; lean_object* v_a_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_261_; 
v_ref_251_ = lean_ctor_get(v___y_248_, 5);
v___x_252_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0(v_msg_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
v_a_253_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_261_ == 0)
{
v___x_255_ = v___x_252_;
v_isShared_256_ = v_isSharedCheck_261_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_a_253_);
lean_dec(v___x_252_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_261_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_257_; lean_object* v___x_259_; 
lean_inc(v_ref_251_);
v___x_257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_257_, 0, v_ref_251_);
lean_ctor_set(v___x_257_, 1, v_a_253_);
if (v_isShared_256_ == 0)
{
lean_ctor_set_tag(v___x_255_, 1);
lean_ctor_set(v___x_255_, 0, v___x_257_);
v___x_259_ = v___x_255_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v___x_257_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg___boxed(lean_object* v_msg_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg(v_msg_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(lean_object* v_a_269_, lean_object* v_b_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_){
_start:
{
lean_object* v___x_276_; 
lean_inc_ref(v_b_270_);
lean_inc_ref(v_a_269_);
v___x_276_ = l_Lean_Meta_isDefEqD(v_a_269_, v_b_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_289_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_289_ == 0)
{
v___x_279_ = v___x_276_;
v_isShared_280_ = v_isSharedCheck_289_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_276_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_289_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
uint8_t v___x_281_; 
v___x_281_ = lean_unbox(v_a_277_);
lean_dec(v_a_277_);
if (v___x_281_ == 0)
{
lean_object* v___x_282_; lean_object* v_a_283_; lean_object* v___x_284_; 
lean_del_object(v___x_279_);
v___x_282_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(v_a_269_, v_b_270_);
v_a_283_ = lean_ctor_get(v___x_282_, 0);
lean_inc(v_a_283_);
lean_dec_ref(v___x_282_);
v___x_284_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg(v_a_283_, v_a_271_, v_a_272_, v_a_273_, v_a_274_);
return v___x_284_;
}
else
{
lean_object* v___x_285_; lean_object* v___x_287_; 
lean_dec_ref(v_b_270_);
lean_dec_ref(v_a_269_);
v___x_285_ = lean_box(0);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_285_);
v___x_287_ = v___x_279_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v___x_285_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
}
else
{
lean_object* v_a_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_297_; 
lean_dec_ref(v_b_270_);
lean_dec_ref(v_a_269_);
v_a_290_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_297_ == 0)
{
v___x_292_ = v___x_276_;
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_a_290_);
lean_dec(v___x_276_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_295_; 
if (v_isShared_293_ == 0)
{
v___x_295_ = v___x_292_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_a_290_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq___boxed(lean_object* v_a_298_, lean_object* v_b_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(v_a_298_, v_b_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
lean_dec(v_a_301_);
lean_dec_ref(v_a_300_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0(lean_object* v_00_u03b1_306_, lean_object* v_msg_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg(v_msg_307_, v___y_308_, v___y_309_, v___y_310_, v___y_311_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___boxed(lean_object* v_00_u03b1_314_, lean_object* v_msg_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0(v_00_u03b1_314_, v_msg_315_, v___y_316_, v___y_317_, v___y_318_, v___y_319_);
lean_dec(v___y_319_);
lean_dec_ref(v___y_318_);
lean_dec(v___y_317_);
lean_dec_ref(v___y_316_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0(lean_object* v_p_322_, lean_object* v_x_323_, size_t v_x_324_, size_t v_x_325_){
_start:
{
if (lean_obj_tag(v_x_323_) == 0)
{
lean_object* v_cs_326_; size_t v_j_327_; lean_object* v___x_328_; lean_object* v___x_329_; uint8_t v___x_330_; 
v_cs_326_ = lean_ctor_get(v_x_323_, 0);
v_j_327_ = lean_usize_shift_right(v_x_324_, v_x_325_);
v___x_328_ = lean_usize_to_nat(v_j_327_);
v___x_329_ = lean_array_get_size(v_cs_326_);
v___x_330_ = lean_nat_dec_lt(v___x_328_, v___x_329_);
if (v___x_330_ == 0)
{
lean_dec(v___x_328_);
lean_dec(v_p_322_);
return v_x_323_;
}
else
{
lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_348_; 
lean_inc_ref(v_cs_326_);
v_isSharedCheck_348_ = !lean_is_exclusive(v_x_323_);
if (v_isSharedCheck_348_ == 0)
{
lean_object* v_unused_349_; 
v_unused_349_ = lean_ctor_get(v_x_323_, 0);
lean_dec(v_unused_349_);
v___x_332_ = v_x_323_;
v_isShared_333_ = v_isSharedCheck_348_;
goto v_resetjp_331_;
}
else
{
lean_dec(v_x_323_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_348_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
size_t v___x_334_; size_t v___x_335_; size_t v___x_336_; size_t v_i_337_; size_t v___x_338_; size_t v_shift_339_; lean_object* v_v_340_; lean_object* v___x_341_; lean_object* v_xs_x27_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_346_; 
v___x_334_ = ((size_t)1ULL);
v___x_335_ = lean_usize_shift_left(v___x_334_, v_x_325_);
v___x_336_ = lean_usize_sub(v___x_335_, v___x_334_);
v_i_337_ = lean_usize_land(v_x_324_, v___x_336_);
v___x_338_ = ((size_t)5ULL);
v_shift_339_ = lean_usize_sub(v_x_325_, v___x_338_);
v_v_340_ = lean_array_fget(v_cs_326_, v___x_328_);
v___x_341_ = lean_box(0);
v_xs_x27_342_ = lean_array_fset(v_cs_326_, v___x_328_, v___x_341_);
v___x_343_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0(v_p_322_, v_v_340_, v_i_337_, v_shift_339_);
v___x_344_ = lean_array_fset(v_xs_x27_342_, v___x_328_, v___x_343_);
lean_dec(v___x_328_);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 0, v___x_344_);
v___x_346_ = v___x_332_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v___x_344_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
}
else
{
lean_object* v_vs_350_; lean_object* v___x_351_; lean_object* v___x_352_; uint8_t v___x_353_; 
v_vs_350_ = lean_ctor_get(v_x_323_, 0);
v___x_351_ = lean_usize_to_nat(v_x_324_);
v___x_352_ = lean_array_get_size(v_vs_350_);
v___x_353_ = lean_nat_dec_lt(v___x_351_, v___x_352_);
if (v___x_353_ == 0)
{
lean_dec(v___x_351_);
lean_dec(v_p_322_);
return v_x_323_;
}
else
{
lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_367_; 
lean_inc_ref(v_vs_350_);
v_isSharedCheck_367_ = !lean_is_exclusive(v_x_323_);
if (v_isSharedCheck_367_ == 0)
{
lean_object* v_unused_368_; 
v_unused_368_ = lean_ctor_get(v_x_323_, 0);
lean_dec(v_unused_368_);
v___x_355_ = v_x_323_;
v_isShared_356_ = v_isSharedCheck_367_;
goto v_resetjp_354_;
}
else
{
lean_dec(v_x_323_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_367_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v_v_357_; lean_object* v___x_358_; lean_object* v_xs_x27_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_365_; 
v_v_357_ = lean_array_fget(v_vs_350_, v___x_351_);
v___x_358_ = lean_box(0);
v_xs_x27_359_ = lean_array_fset(v_vs_350_, v___x_351_, v___x_358_);
v___x_360_ = lean_box(9);
v___x_361_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_361_, 0, v_p_322_);
lean_ctor_set(v___x_361_, 1, v___x_360_);
lean_ctor_set_uint8(v___x_361_, sizeof(void*)*2, v___x_353_);
v___x_362_ = l_Lean_PersistentArray_push___redArg(v_v_357_, v___x_361_);
v___x_363_ = lean_array_fset(v_xs_x27_359_, v___x_351_, v___x_362_);
lean_dec(v___x_351_);
if (v_isShared_356_ == 0)
{
lean_ctor_set(v___x_355_, 0, v___x_363_);
v___x_365_ = v___x_355_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v___x_363_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0___boxed(lean_object* v_p_369_, lean_object* v_x_370_, lean_object* v_x_371_, lean_object* v_x_372_){
_start:
{
size_t v_x_269__boxed_373_; size_t v_x_270__boxed_374_; lean_object* v_res_375_; 
v_x_269__boxed_373_ = lean_unbox_usize(v_x_371_);
lean_dec(v_x_371_);
v_x_270__boxed_374_ = lean_unbox_usize(v_x_372_);
lean_dec(v_x_372_);
v_res_375_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0(v_p_369_, v_x_370_, v_x_269__boxed_373_, v_x_270__boxed_374_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0(lean_object* v_p_376_, lean_object* v_t_377_, lean_object* v_i_378_){
_start:
{
lean_object* v_root_379_; lean_object* v_tail_380_; lean_object* v_size_381_; size_t v_shift_382_; lean_object* v_tailOff_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_409_; 
v_root_379_ = lean_ctor_get(v_t_377_, 0);
v_tail_380_ = lean_ctor_get(v_t_377_, 1);
v_size_381_ = lean_ctor_get(v_t_377_, 2);
v_shift_382_ = lean_ctor_get_usize(v_t_377_, 4);
v_tailOff_383_ = lean_ctor_get(v_t_377_, 3);
v_isSharedCheck_409_ = !lean_is_exclusive(v_t_377_);
if (v_isSharedCheck_409_ == 0)
{
v___x_385_ = v_t_377_;
v_isShared_386_ = v_isSharedCheck_409_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_tailOff_383_);
lean_inc(v_size_381_);
lean_inc(v_tail_380_);
lean_inc(v_root_379_);
lean_dec(v_t_377_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_409_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
uint8_t v___x_387_; 
v___x_387_ = lean_nat_dec_le(v_tailOff_383_, v_i_378_);
if (v___x_387_ == 0)
{
size_t v___x_388_; lean_object* v___x_389_; lean_object* v___x_391_; 
v___x_388_ = lean_usize_of_nat(v_i_378_);
v___x_389_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0(v_p_376_, v_root_379_, v___x_388_, v_shift_382_);
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 0, v___x_389_);
v___x_391_ = v___x_385_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_389_);
lean_ctor_set(v_reuseFailAlloc_392_, 1, v_tail_380_);
lean_ctor_set(v_reuseFailAlloc_392_, 2, v_size_381_);
lean_ctor_set(v_reuseFailAlloc_392_, 3, v_tailOff_383_);
lean_ctor_set_usize(v_reuseFailAlloc_392_, 4, v_shift_382_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
else
{
lean_object* v___x_393_; lean_object* v___x_394_; uint8_t v___x_395_; 
v___x_393_ = lean_nat_sub(v_i_378_, v_tailOff_383_);
v___x_394_ = lean_array_get_size(v_tail_380_);
v___x_395_ = lean_nat_dec_lt(v___x_393_, v___x_394_);
if (v___x_395_ == 0)
{
lean_object* v___x_397_; 
lean_dec(v___x_393_);
lean_dec(v_p_376_);
if (v_isShared_386_ == 0)
{
v___x_397_ = v___x_385_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_root_379_);
lean_ctor_set(v_reuseFailAlloc_398_, 1, v_tail_380_);
lean_ctor_set(v_reuseFailAlloc_398_, 2, v_size_381_);
lean_ctor_set(v_reuseFailAlloc_398_, 3, v_tailOff_383_);
lean_ctor_set_usize(v_reuseFailAlloc_398_, 4, v_shift_382_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
else
{
lean_object* v_v_399_; lean_object* v___x_400_; lean_object* v_xs_x27_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_407_; 
v_v_399_ = lean_array_fget(v_tail_380_, v___x_393_);
v___x_400_ = lean_box(0);
v_xs_x27_401_ = lean_array_fset(v_tail_380_, v___x_393_, v___x_400_);
v___x_402_ = lean_box(9);
v___x_403_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_403_, 0, v_p_376_);
lean_ctor_set(v___x_403_, 1, v___x_402_);
lean_ctor_set_uint8(v___x_403_, sizeof(void*)*2, v___x_395_);
v___x_404_ = l_Lean_PersistentArray_push___redArg(v_v_399_, v___x_403_);
v___x_405_ = lean_array_fset(v_xs_x27_401_, v___x_393_, v___x_404_);
lean_dec(v___x_393_);
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 1, v___x_405_);
v___x_407_ = v___x_385_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_root_379_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v___x_405_);
lean_ctor_set(v_reuseFailAlloc_408_, 2, v_size_381_);
lean_ctor_set(v_reuseFailAlloc_408_, 3, v_tailOff_383_);
lean_ctor_set_usize(v_reuseFailAlloc_408_, 4, v_shift_382_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0___boxed(lean_object* v_p_410_, lean_object* v_t_411_, lean_object* v_i_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0(v_p_410_, v_t_411_, v_i_412_);
lean_dec(v_i_412_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0(lean_object* v_a_414_, lean_object* v_p_415_, lean_object* v_one_416_, lean_object* v_s_417_){
_start:
{
lean_object* v_structs_418_; lean_object* v_typeIdOf_419_; lean_object* v_exprToStructId_420_; lean_object* v_exprToStructIdEntries_421_; lean_object* v_forbiddenNatModules_422_; lean_object* v_natStructs_423_; lean_object* v_natTypeIdOf_424_; lean_object* v_exprToNatStructId_425_; lean_object* v___x_426_; uint8_t v___x_427_; 
v_structs_418_ = lean_ctor_get(v_s_417_, 0);
v_typeIdOf_419_ = lean_ctor_get(v_s_417_, 1);
v_exprToStructId_420_ = lean_ctor_get(v_s_417_, 2);
v_exprToStructIdEntries_421_ = lean_ctor_get(v_s_417_, 3);
v_forbiddenNatModules_422_ = lean_ctor_get(v_s_417_, 4);
v_natStructs_423_ = lean_ctor_get(v_s_417_, 5);
v_natTypeIdOf_424_ = lean_ctor_get(v_s_417_, 6);
v_exprToNatStructId_425_ = lean_ctor_get(v_s_417_, 7);
v___x_426_ = lean_array_get_size(v_structs_418_);
v___x_427_ = lean_nat_dec_lt(v_a_414_, v___x_426_);
if (v___x_427_ == 0)
{
lean_dec(v_p_415_);
return v_s_417_;
}
else
{
lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_489_; 
lean_inc_ref(v_exprToNatStructId_425_);
lean_inc_ref(v_natTypeIdOf_424_);
lean_inc_ref(v_natStructs_423_);
lean_inc_ref(v_forbiddenNatModules_422_);
lean_inc_ref(v_exprToStructIdEntries_421_);
lean_inc_ref(v_exprToStructId_420_);
lean_inc_ref(v_typeIdOf_419_);
lean_inc_ref(v_structs_418_);
v_isSharedCheck_489_ = !lean_is_exclusive(v_s_417_);
if (v_isSharedCheck_489_ == 0)
{
lean_object* v_unused_490_; lean_object* v_unused_491_; lean_object* v_unused_492_; lean_object* v_unused_493_; lean_object* v_unused_494_; lean_object* v_unused_495_; lean_object* v_unused_496_; lean_object* v_unused_497_; 
v_unused_490_ = lean_ctor_get(v_s_417_, 7);
lean_dec(v_unused_490_);
v_unused_491_ = lean_ctor_get(v_s_417_, 6);
lean_dec(v_unused_491_);
v_unused_492_ = lean_ctor_get(v_s_417_, 5);
lean_dec(v_unused_492_);
v_unused_493_ = lean_ctor_get(v_s_417_, 4);
lean_dec(v_unused_493_);
v_unused_494_ = lean_ctor_get(v_s_417_, 3);
lean_dec(v_unused_494_);
v_unused_495_ = lean_ctor_get(v_s_417_, 2);
lean_dec(v_unused_495_);
v_unused_496_ = lean_ctor_get(v_s_417_, 1);
lean_dec(v_unused_496_);
v_unused_497_ = lean_ctor_get(v_s_417_, 0);
lean_dec(v_unused_497_);
v___x_429_ = v_s_417_;
v_isShared_430_ = v_isSharedCheck_489_;
goto v_resetjp_428_;
}
else
{
lean_dec(v_s_417_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_489_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v_v_431_; lean_object* v_id_432_; lean_object* v_ringId_x3f_433_; lean_object* v_type_434_; lean_object* v_u_435_; lean_object* v_intModuleInst_436_; lean_object* v_leInst_x3f_437_; lean_object* v_ltInst_x3f_438_; lean_object* v_lawfulOrderLTInst_x3f_439_; lean_object* v_isPreorderInst_x3f_440_; lean_object* v_orderedAddInst_x3f_441_; lean_object* v_isLinearInst_x3f_442_; lean_object* v_noNatDivInst_x3f_443_; lean_object* v_ringInst_x3f_444_; lean_object* v_commRingInst_x3f_445_; lean_object* v_orderedRingInst_x3f_446_; lean_object* v_fieldInst_x3f_447_; lean_object* v_charInst_x3f_448_; lean_object* v_zero_449_; lean_object* v_ofNatZero_450_; lean_object* v_one_x3f_451_; lean_object* v_leFn_x3f_452_; lean_object* v_ltFn_x3f_453_; lean_object* v_addFn_454_; lean_object* v_zsmulFn_455_; lean_object* v_nsmulFn_456_; lean_object* v_zsmulFn_x3f_457_; lean_object* v_nsmulFn_x3f_458_; lean_object* v_homomulFn_x3f_459_; lean_object* v_subFn_460_; lean_object* v_negFn_461_; lean_object* v_vars_462_; lean_object* v_varMap_463_; lean_object* v_lowers_464_; lean_object* v_uppers_465_; lean_object* v_diseqs_466_; lean_object* v_assignment_467_; uint8_t v_caseSplits_468_; lean_object* v_conflict_x3f_469_; lean_object* v_diseqSplits_470_; lean_object* v_elimEqs_471_; lean_object* v_elimStack_472_; lean_object* v_occurs_473_; lean_object* v_ignored_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_488_; 
v_v_431_ = lean_array_fget(v_structs_418_, v_a_414_);
v_id_432_ = lean_ctor_get(v_v_431_, 0);
v_ringId_x3f_433_ = lean_ctor_get(v_v_431_, 1);
v_type_434_ = lean_ctor_get(v_v_431_, 2);
v_u_435_ = lean_ctor_get(v_v_431_, 3);
v_intModuleInst_436_ = lean_ctor_get(v_v_431_, 4);
v_leInst_x3f_437_ = lean_ctor_get(v_v_431_, 5);
v_ltInst_x3f_438_ = lean_ctor_get(v_v_431_, 6);
v_lawfulOrderLTInst_x3f_439_ = lean_ctor_get(v_v_431_, 7);
v_isPreorderInst_x3f_440_ = lean_ctor_get(v_v_431_, 8);
v_orderedAddInst_x3f_441_ = lean_ctor_get(v_v_431_, 9);
v_isLinearInst_x3f_442_ = lean_ctor_get(v_v_431_, 10);
v_noNatDivInst_x3f_443_ = lean_ctor_get(v_v_431_, 11);
v_ringInst_x3f_444_ = lean_ctor_get(v_v_431_, 12);
v_commRingInst_x3f_445_ = lean_ctor_get(v_v_431_, 13);
v_orderedRingInst_x3f_446_ = lean_ctor_get(v_v_431_, 14);
v_fieldInst_x3f_447_ = lean_ctor_get(v_v_431_, 15);
v_charInst_x3f_448_ = lean_ctor_get(v_v_431_, 16);
v_zero_449_ = lean_ctor_get(v_v_431_, 17);
v_ofNatZero_450_ = lean_ctor_get(v_v_431_, 18);
v_one_x3f_451_ = lean_ctor_get(v_v_431_, 19);
v_leFn_x3f_452_ = lean_ctor_get(v_v_431_, 20);
v_ltFn_x3f_453_ = lean_ctor_get(v_v_431_, 21);
v_addFn_454_ = lean_ctor_get(v_v_431_, 22);
v_zsmulFn_455_ = lean_ctor_get(v_v_431_, 23);
v_nsmulFn_456_ = lean_ctor_get(v_v_431_, 24);
v_zsmulFn_x3f_457_ = lean_ctor_get(v_v_431_, 25);
v_nsmulFn_x3f_458_ = lean_ctor_get(v_v_431_, 26);
v_homomulFn_x3f_459_ = lean_ctor_get(v_v_431_, 27);
v_subFn_460_ = lean_ctor_get(v_v_431_, 28);
v_negFn_461_ = lean_ctor_get(v_v_431_, 29);
v_vars_462_ = lean_ctor_get(v_v_431_, 30);
v_varMap_463_ = lean_ctor_get(v_v_431_, 31);
v_lowers_464_ = lean_ctor_get(v_v_431_, 32);
v_uppers_465_ = lean_ctor_get(v_v_431_, 33);
v_diseqs_466_ = lean_ctor_get(v_v_431_, 34);
v_assignment_467_ = lean_ctor_get(v_v_431_, 35);
v_caseSplits_468_ = lean_ctor_get_uint8(v_v_431_, sizeof(void*)*42);
v_conflict_x3f_469_ = lean_ctor_get(v_v_431_, 36);
v_diseqSplits_470_ = lean_ctor_get(v_v_431_, 37);
v_elimEqs_471_ = lean_ctor_get(v_v_431_, 38);
v_elimStack_472_ = lean_ctor_get(v_v_431_, 39);
v_occurs_473_ = lean_ctor_get(v_v_431_, 40);
v_ignored_474_ = lean_ctor_get(v_v_431_, 41);
v_isSharedCheck_488_ = !lean_is_exclusive(v_v_431_);
if (v_isSharedCheck_488_ == 0)
{
v___x_476_ = v_v_431_;
v_isShared_477_ = v_isSharedCheck_488_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_ignored_474_);
lean_inc(v_occurs_473_);
lean_inc(v_elimStack_472_);
lean_inc(v_elimEqs_471_);
lean_inc(v_diseqSplits_470_);
lean_inc(v_conflict_x3f_469_);
lean_inc(v_assignment_467_);
lean_inc(v_diseqs_466_);
lean_inc(v_uppers_465_);
lean_inc(v_lowers_464_);
lean_inc(v_varMap_463_);
lean_inc(v_vars_462_);
lean_inc(v_negFn_461_);
lean_inc(v_subFn_460_);
lean_inc(v_homomulFn_x3f_459_);
lean_inc(v_nsmulFn_x3f_458_);
lean_inc(v_zsmulFn_x3f_457_);
lean_inc(v_nsmulFn_456_);
lean_inc(v_zsmulFn_455_);
lean_inc(v_addFn_454_);
lean_inc(v_ltFn_x3f_453_);
lean_inc(v_leFn_x3f_452_);
lean_inc(v_one_x3f_451_);
lean_inc(v_ofNatZero_450_);
lean_inc(v_zero_449_);
lean_inc(v_charInst_x3f_448_);
lean_inc(v_fieldInst_x3f_447_);
lean_inc(v_orderedRingInst_x3f_446_);
lean_inc(v_commRingInst_x3f_445_);
lean_inc(v_ringInst_x3f_444_);
lean_inc(v_noNatDivInst_x3f_443_);
lean_inc(v_isLinearInst_x3f_442_);
lean_inc(v_orderedAddInst_x3f_441_);
lean_inc(v_isPreorderInst_x3f_440_);
lean_inc(v_lawfulOrderLTInst_x3f_439_);
lean_inc(v_ltInst_x3f_438_);
lean_inc(v_leInst_x3f_437_);
lean_inc(v_intModuleInst_436_);
lean_inc(v_u_435_);
lean_inc(v_type_434_);
lean_inc(v_ringId_x3f_433_);
lean_inc(v_id_432_);
lean_dec(v_v_431_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_488_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_478_; lean_object* v_xs_x27_479_; lean_object* v___x_480_; lean_object* v___x_482_; 
v___x_478_ = lean_box(0);
v_xs_x27_479_ = lean_array_fset(v_structs_418_, v_a_414_, v___x_478_);
v___x_480_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0(v_p_415_, v_lowers_464_, v_one_416_);
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 32, v___x_480_);
v___x_482_ = v___x_476_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_id_432_);
lean_ctor_set(v_reuseFailAlloc_487_, 1, v_ringId_x3f_433_);
lean_ctor_set(v_reuseFailAlloc_487_, 2, v_type_434_);
lean_ctor_set(v_reuseFailAlloc_487_, 3, v_u_435_);
lean_ctor_set(v_reuseFailAlloc_487_, 4, v_intModuleInst_436_);
lean_ctor_set(v_reuseFailAlloc_487_, 5, v_leInst_x3f_437_);
lean_ctor_set(v_reuseFailAlloc_487_, 6, v_ltInst_x3f_438_);
lean_ctor_set(v_reuseFailAlloc_487_, 7, v_lawfulOrderLTInst_x3f_439_);
lean_ctor_set(v_reuseFailAlloc_487_, 8, v_isPreorderInst_x3f_440_);
lean_ctor_set(v_reuseFailAlloc_487_, 9, v_orderedAddInst_x3f_441_);
lean_ctor_set(v_reuseFailAlloc_487_, 10, v_isLinearInst_x3f_442_);
lean_ctor_set(v_reuseFailAlloc_487_, 11, v_noNatDivInst_x3f_443_);
lean_ctor_set(v_reuseFailAlloc_487_, 12, v_ringInst_x3f_444_);
lean_ctor_set(v_reuseFailAlloc_487_, 13, v_commRingInst_x3f_445_);
lean_ctor_set(v_reuseFailAlloc_487_, 14, v_orderedRingInst_x3f_446_);
lean_ctor_set(v_reuseFailAlloc_487_, 15, v_fieldInst_x3f_447_);
lean_ctor_set(v_reuseFailAlloc_487_, 16, v_charInst_x3f_448_);
lean_ctor_set(v_reuseFailAlloc_487_, 17, v_zero_449_);
lean_ctor_set(v_reuseFailAlloc_487_, 18, v_ofNatZero_450_);
lean_ctor_set(v_reuseFailAlloc_487_, 19, v_one_x3f_451_);
lean_ctor_set(v_reuseFailAlloc_487_, 20, v_leFn_x3f_452_);
lean_ctor_set(v_reuseFailAlloc_487_, 21, v_ltFn_x3f_453_);
lean_ctor_set(v_reuseFailAlloc_487_, 22, v_addFn_454_);
lean_ctor_set(v_reuseFailAlloc_487_, 23, v_zsmulFn_455_);
lean_ctor_set(v_reuseFailAlloc_487_, 24, v_nsmulFn_456_);
lean_ctor_set(v_reuseFailAlloc_487_, 25, v_zsmulFn_x3f_457_);
lean_ctor_set(v_reuseFailAlloc_487_, 26, v_nsmulFn_x3f_458_);
lean_ctor_set(v_reuseFailAlloc_487_, 27, v_homomulFn_x3f_459_);
lean_ctor_set(v_reuseFailAlloc_487_, 28, v_subFn_460_);
lean_ctor_set(v_reuseFailAlloc_487_, 29, v_negFn_461_);
lean_ctor_set(v_reuseFailAlloc_487_, 30, v_vars_462_);
lean_ctor_set(v_reuseFailAlloc_487_, 31, v_varMap_463_);
lean_ctor_set(v_reuseFailAlloc_487_, 32, v___x_480_);
lean_ctor_set(v_reuseFailAlloc_487_, 33, v_uppers_465_);
lean_ctor_set(v_reuseFailAlloc_487_, 34, v_diseqs_466_);
lean_ctor_set(v_reuseFailAlloc_487_, 35, v_assignment_467_);
lean_ctor_set(v_reuseFailAlloc_487_, 36, v_conflict_x3f_469_);
lean_ctor_set(v_reuseFailAlloc_487_, 37, v_diseqSplits_470_);
lean_ctor_set(v_reuseFailAlloc_487_, 38, v_elimEqs_471_);
lean_ctor_set(v_reuseFailAlloc_487_, 39, v_elimStack_472_);
lean_ctor_set(v_reuseFailAlloc_487_, 40, v_occurs_473_);
lean_ctor_set(v_reuseFailAlloc_487_, 41, v_ignored_474_);
lean_ctor_set_uint8(v_reuseFailAlloc_487_, sizeof(void*)*42, v_caseSplits_468_);
v___x_482_ = v_reuseFailAlloc_487_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
lean_object* v___x_483_; lean_object* v___x_485_; 
v___x_483_ = lean_array_fset(v_xs_x27_479_, v_a_414_, v___x_482_);
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 0, v___x_483_);
v___x_485_ = v___x_429_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v___x_483_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v_typeIdOf_419_);
lean_ctor_set(v_reuseFailAlloc_486_, 2, v_exprToStructId_420_);
lean_ctor_set(v_reuseFailAlloc_486_, 3, v_exprToStructIdEntries_421_);
lean_ctor_set(v_reuseFailAlloc_486_, 4, v_forbiddenNatModules_422_);
lean_ctor_set(v_reuseFailAlloc_486_, 5, v_natStructs_423_);
lean_ctor_set(v_reuseFailAlloc_486_, 6, v_natTypeIdOf_424_);
lean_ctor_set(v_reuseFailAlloc_486_, 7, v_exprToNatStructId_425_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0___boxed(lean_object* v_a_498_, lean_object* v_p_499_, lean_object* v_one_500_, lean_object* v_s_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0(v_a_498_, v_p_499_, v_one_500_, v_s_501_);
lean_dec(v_one_500_);
lean_dec(v_a_498_);
return v_res_502_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0(void){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_503_ = lean_unsigned_to_nat(1u);
v___x_504_ = lean_nat_to_int(v___x_503_);
return v___x_504_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1(void){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0);
v___x_506_ = lean_int_neg(v___x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg(lean_object* v_one_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v_p_514_; lean_object* v___f_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_512_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1);
v___x_513_ = lean_box(0);
lean_inc(v_one_507_);
v_p_514_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_p_514_, 0, v___x_512_);
lean_ctor_set(v_p_514_, 1, v_one_507_);
lean_ctor_set(v_p_514_, 2, v___x_513_);
lean_inc(v_a_508_);
v___f_515_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_515_, 0, v_a_508_);
lean_closure_set(v___f_515_, 1, v_p_514_);
lean_closure_set(v___f_515_, 2, v_one_507_);
v___x_516_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_517_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_516_, v___f_515_, v_a_509_, v_a_510_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___boxed(lean_object* v_one_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg(v_one_518_, v_a_519_, v_a_520_, v_a_521_);
lean_dec(v_a_521_);
lean_dec(v_a_520_);
lean_dec(v_a_519_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne(lean_object* v_one_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_){
_start:
{
lean_object* v___x_537_; 
v___x_537_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg(v_one_524_, v_a_525_, v_a_526_, v_a_535_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___boxed(lean_object* v_one_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne(v_one_538_, v_a_539_, v_a_540_, v_a_541_, v_a_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_, v_a_549_);
lean_dec(v_a_549_);
lean_dec_ref(v_a_548_);
lean_dec(v_a_547_);
lean_dec_ref(v_a_546_);
lean_dec(v_a_545_);
lean_dec_ref(v_a_544_);
lean_dec(v_a_543_);
lean_dec_ref(v_a_542_);
lean_dec(v_a_541_);
lean_dec(v_a_540_);
lean_dec(v_a_539_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0(lean_object* v_p_552_, lean_object* v_x_553_, size_t v_x_554_, size_t v_x_555_){
_start:
{
if (lean_obj_tag(v_x_553_) == 0)
{
lean_object* v_cs_556_; size_t v_j_557_; lean_object* v___x_558_; lean_object* v___x_559_; uint8_t v___x_560_; 
v_cs_556_ = lean_ctor_get(v_x_553_, 0);
v_j_557_ = lean_usize_shift_right(v_x_554_, v_x_555_);
v___x_558_ = lean_usize_to_nat(v_j_557_);
v___x_559_ = lean_array_get_size(v_cs_556_);
v___x_560_ = lean_nat_dec_lt(v___x_558_, v___x_559_);
if (v___x_560_ == 0)
{
lean_dec(v___x_558_);
lean_dec(v_p_552_);
return v_x_553_;
}
else
{
lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_578_; 
lean_inc_ref(v_cs_556_);
v_isSharedCheck_578_ = !lean_is_exclusive(v_x_553_);
if (v_isSharedCheck_578_ == 0)
{
lean_object* v_unused_579_; 
v_unused_579_ = lean_ctor_get(v_x_553_, 0);
lean_dec(v_unused_579_);
v___x_562_ = v_x_553_;
v_isShared_563_ = v_isSharedCheck_578_;
goto v_resetjp_561_;
}
else
{
lean_dec(v_x_553_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_578_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
size_t v___x_564_; size_t v___x_565_; size_t v___x_566_; size_t v_i_567_; size_t v___x_568_; size_t v_shift_569_; lean_object* v_v_570_; lean_object* v___x_571_; lean_object* v_xs_x27_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_576_; 
v___x_564_ = ((size_t)1ULL);
v___x_565_ = lean_usize_shift_left(v___x_564_, v_x_555_);
v___x_566_ = lean_usize_sub(v___x_565_, v___x_564_);
v_i_567_ = lean_usize_land(v_x_554_, v___x_566_);
v___x_568_ = ((size_t)5ULL);
v_shift_569_ = lean_usize_sub(v_x_555_, v___x_568_);
v_v_570_ = lean_array_fget(v_cs_556_, v___x_558_);
v___x_571_ = lean_box(0);
v_xs_x27_572_ = lean_array_fset(v_cs_556_, v___x_558_, v___x_571_);
v___x_573_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0(v_p_552_, v_v_570_, v_i_567_, v_shift_569_);
v___x_574_ = lean_array_fset(v_xs_x27_572_, v___x_558_, v___x_573_);
lean_dec(v___x_558_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v___x_574_);
v___x_576_ = v___x_562_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v___x_574_);
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
else
{
lean_object* v_vs_580_; lean_object* v___x_581_; lean_object* v___x_582_; uint8_t v___x_583_; 
v_vs_580_ = lean_ctor_get(v_x_553_, 0);
v___x_581_ = lean_usize_to_nat(v_x_554_);
v___x_582_ = lean_array_get_size(v_vs_580_);
v___x_583_ = lean_nat_dec_lt(v___x_581_, v___x_582_);
if (v___x_583_ == 0)
{
lean_dec(v___x_581_);
lean_dec(v_p_552_);
return v_x_553_;
}
else
{
lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_597_; 
lean_inc_ref(v_vs_580_);
v_isSharedCheck_597_ = !lean_is_exclusive(v_x_553_);
if (v_isSharedCheck_597_ == 0)
{
lean_object* v_unused_598_; 
v_unused_598_ = lean_ctor_get(v_x_553_, 0);
lean_dec(v_unused_598_);
v___x_585_ = v_x_553_;
v_isShared_586_ = v_isSharedCheck_597_;
goto v_resetjp_584_;
}
else
{
lean_dec(v_x_553_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_597_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v_v_587_; lean_object* v___x_588_; lean_object* v_xs_x27_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_595_; 
v_v_587_ = lean_array_fget(v_vs_580_, v___x_581_);
v___x_588_ = lean_box(0);
v_xs_x27_589_ = lean_array_fset(v_vs_580_, v___x_581_, v___x_588_);
v___x_590_ = lean_box(6);
v___x_591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_591_, 0, v_p_552_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
v___x_592_ = l_Lean_PersistentArray_push___redArg(v_v_587_, v___x_591_);
v___x_593_ = lean_array_fset(v_xs_x27_589_, v___x_581_, v___x_592_);
lean_dec(v___x_581_);
if (v_isShared_586_ == 0)
{
lean_ctor_set(v___x_585_, 0, v___x_593_);
v___x_595_ = v___x_585_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v___x_593_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0___boxed(lean_object* v_p_599_, lean_object* v_x_600_, lean_object* v_x_601_, lean_object* v_x_602_){
_start:
{
size_t v_x_258__boxed_603_; size_t v_x_259__boxed_604_; lean_object* v_res_605_; 
v_x_258__boxed_603_ = lean_unbox_usize(v_x_601_);
lean_dec(v_x_601_);
v_x_259__boxed_604_ = lean_unbox_usize(v_x_602_);
lean_dec(v_x_602_);
v_res_605_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0(v_p_599_, v_x_600_, v_x_258__boxed_603_, v_x_259__boxed_604_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0(lean_object* v_p_606_, lean_object* v_t_607_, lean_object* v_i_608_){
_start:
{
lean_object* v_root_609_; lean_object* v_tail_610_; lean_object* v_size_611_; size_t v_shift_612_; lean_object* v_tailOff_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_639_; 
v_root_609_ = lean_ctor_get(v_t_607_, 0);
v_tail_610_ = lean_ctor_get(v_t_607_, 1);
v_size_611_ = lean_ctor_get(v_t_607_, 2);
v_shift_612_ = lean_ctor_get_usize(v_t_607_, 4);
v_tailOff_613_ = lean_ctor_get(v_t_607_, 3);
v_isSharedCheck_639_ = !lean_is_exclusive(v_t_607_);
if (v_isSharedCheck_639_ == 0)
{
v___x_615_ = v_t_607_;
v_isShared_616_ = v_isSharedCheck_639_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_tailOff_613_);
lean_inc(v_size_611_);
lean_inc(v_tail_610_);
lean_inc(v_root_609_);
lean_dec(v_t_607_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_639_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
uint8_t v___x_617_; 
v___x_617_ = lean_nat_dec_le(v_tailOff_613_, v_i_608_);
if (v___x_617_ == 0)
{
size_t v___x_618_; lean_object* v___x_619_; lean_object* v___x_621_; 
v___x_618_ = lean_usize_of_nat(v_i_608_);
v___x_619_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0(v_p_606_, v_root_609_, v___x_618_, v_shift_612_);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 0, v___x_619_);
v___x_621_ = v___x_615_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_619_);
lean_ctor_set(v_reuseFailAlloc_622_, 1, v_tail_610_);
lean_ctor_set(v_reuseFailAlloc_622_, 2, v_size_611_);
lean_ctor_set(v_reuseFailAlloc_622_, 3, v_tailOff_613_);
lean_ctor_set_usize(v_reuseFailAlloc_622_, 4, v_shift_612_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
else
{
lean_object* v___x_623_; lean_object* v___x_624_; uint8_t v___x_625_; 
v___x_623_ = lean_nat_sub(v_i_608_, v_tailOff_613_);
v___x_624_ = lean_array_get_size(v_tail_610_);
v___x_625_ = lean_nat_dec_lt(v___x_623_, v___x_624_);
if (v___x_625_ == 0)
{
lean_object* v___x_627_; 
lean_dec(v___x_623_);
lean_dec(v_p_606_);
if (v_isShared_616_ == 0)
{
v___x_627_ = v___x_615_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_root_609_);
lean_ctor_set(v_reuseFailAlloc_628_, 1, v_tail_610_);
lean_ctor_set(v_reuseFailAlloc_628_, 2, v_size_611_);
lean_ctor_set(v_reuseFailAlloc_628_, 3, v_tailOff_613_);
lean_ctor_set_usize(v_reuseFailAlloc_628_, 4, v_shift_612_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
else
{
lean_object* v_v_629_; lean_object* v___x_630_; lean_object* v_xs_x27_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_637_; 
v_v_629_ = lean_array_fget(v_tail_610_, v___x_623_);
v___x_630_ = lean_box(0);
v_xs_x27_631_ = lean_array_fset(v_tail_610_, v___x_623_, v___x_630_);
v___x_632_ = lean_box(6);
v___x_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_633_, 0, v_p_606_);
lean_ctor_set(v___x_633_, 1, v___x_632_);
v___x_634_ = l_Lean_PersistentArray_push___redArg(v_v_629_, v___x_633_);
v___x_635_ = lean_array_fset(v_xs_x27_631_, v___x_623_, v___x_634_);
lean_dec(v___x_623_);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 1, v___x_635_);
v___x_637_ = v___x_615_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_root_609_);
lean_ctor_set(v_reuseFailAlloc_638_, 1, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_638_, 2, v_size_611_);
lean_ctor_set(v_reuseFailAlloc_638_, 3, v_tailOff_613_);
lean_ctor_set_usize(v_reuseFailAlloc_638_, 4, v_shift_612_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0___boxed(lean_object* v_p_640_, lean_object* v_t_641_, lean_object* v_i_642_){
_start:
{
lean_object* v_res_643_; 
v_res_643_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0(v_p_640_, v_t_641_, v_i_642_);
lean_dec(v_i_642_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0(lean_object* v_a_644_, lean_object* v_p_645_, lean_object* v_one_646_, lean_object* v_s_647_){
_start:
{
lean_object* v_structs_648_; lean_object* v_typeIdOf_649_; lean_object* v_exprToStructId_650_; lean_object* v_exprToStructIdEntries_651_; lean_object* v_forbiddenNatModules_652_; lean_object* v_natStructs_653_; lean_object* v_natTypeIdOf_654_; lean_object* v_exprToNatStructId_655_; lean_object* v___x_656_; uint8_t v___x_657_; 
v_structs_648_ = lean_ctor_get(v_s_647_, 0);
v_typeIdOf_649_ = lean_ctor_get(v_s_647_, 1);
v_exprToStructId_650_ = lean_ctor_get(v_s_647_, 2);
v_exprToStructIdEntries_651_ = lean_ctor_get(v_s_647_, 3);
v_forbiddenNatModules_652_ = lean_ctor_get(v_s_647_, 4);
v_natStructs_653_ = lean_ctor_get(v_s_647_, 5);
v_natTypeIdOf_654_ = lean_ctor_get(v_s_647_, 6);
v_exprToNatStructId_655_ = lean_ctor_get(v_s_647_, 7);
v___x_656_ = lean_array_get_size(v_structs_648_);
v___x_657_ = lean_nat_dec_lt(v_a_644_, v___x_656_);
if (v___x_657_ == 0)
{
lean_dec(v_p_645_);
return v_s_647_;
}
else
{
lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_719_; 
lean_inc_ref(v_exprToNatStructId_655_);
lean_inc_ref(v_natTypeIdOf_654_);
lean_inc_ref(v_natStructs_653_);
lean_inc_ref(v_forbiddenNatModules_652_);
lean_inc_ref(v_exprToStructIdEntries_651_);
lean_inc_ref(v_exprToStructId_650_);
lean_inc_ref(v_typeIdOf_649_);
lean_inc_ref(v_structs_648_);
v_isSharedCheck_719_ = !lean_is_exclusive(v_s_647_);
if (v_isSharedCheck_719_ == 0)
{
lean_object* v_unused_720_; lean_object* v_unused_721_; lean_object* v_unused_722_; lean_object* v_unused_723_; lean_object* v_unused_724_; lean_object* v_unused_725_; lean_object* v_unused_726_; lean_object* v_unused_727_; 
v_unused_720_ = lean_ctor_get(v_s_647_, 7);
lean_dec(v_unused_720_);
v_unused_721_ = lean_ctor_get(v_s_647_, 6);
lean_dec(v_unused_721_);
v_unused_722_ = lean_ctor_get(v_s_647_, 5);
lean_dec(v_unused_722_);
v_unused_723_ = lean_ctor_get(v_s_647_, 4);
lean_dec(v_unused_723_);
v_unused_724_ = lean_ctor_get(v_s_647_, 3);
lean_dec(v_unused_724_);
v_unused_725_ = lean_ctor_get(v_s_647_, 2);
lean_dec(v_unused_725_);
v_unused_726_ = lean_ctor_get(v_s_647_, 1);
lean_dec(v_unused_726_);
v_unused_727_ = lean_ctor_get(v_s_647_, 0);
lean_dec(v_unused_727_);
v___x_659_ = v_s_647_;
v_isShared_660_ = v_isSharedCheck_719_;
goto v_resetjp_658_;
}
else
{
lean_dec(v_s_647_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_719_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v_v_661_; lean_object* v_id_662_; lean_object* v_ringId_x3f_663_; lean_object* v_type_664_; lean_object* v_u_665_; lean_object* v_intModuleInst_666_; lean_object* v_leInst_x3f_667_; lean_object* v_ltInst_x3f_668_; lean_object* v_lawfulOrderLTInst_x3f_669_; lean_object* v_isPreorderInst_x3f_670_; lean_object* v_orderedAddInst_x3f_671_; lean_object* v_isLinearInst_x3f_672_; lean_object* v_noNatDivInst_x3f_673_; lean_object* v_ringInst_x3f_674_; lean_object* v_commRingInst_x3f_675_; lean_object* v_orderedRingInst_x3f_676_; lean_object* v_fieldInst_x3f_677_; lean_object* v_charInst_x3f_678_; lean_object* v_zero_679_; lean_object* v_ofNatZero_680_; lean_object* v_one_x3f_681_; lean_object* v_leFn_x3f_682_; lean_object* v_ltFn_x3f_683_; lean_object* v_addFn_684_; lean_object* v_zsmulFn_685_; lean_object* v_nsmulFn_686_; lean_object* v_zsmulFn_x3f_687_; lean_object* v_nsmulFn_x3f_688_; lean_object* v_homomulFn_x3f_689_; lean_object* v_subFn_690_; lean_object* v_negFn_691_; lean_object* v_vars_692_; lean_object* v_varMap_693_; lean_object* v_lowers_694_; lean_object* v_uppers_695_; lean_object* v_diseqs_696_; lean_object* v_assignment_697_; uint8_t v_caseSplits_698_; lean_object* v_conflict_x3f_699_; lean_object* v_diseqSplits_700_; lean_object* v_elimEqs_701_; lean_object* v_elimStack_702_; lean_object* v_occurs_703_; lean_object* v_ignored_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_718_; 
v_v_661_ = lean_array_fget(v_structs_648_, v_a_644_);
v_id_662_ = lean_ctor_get(v_v_661_, 0);
v_ringId_x3f_663_ = lean_ctor_get(v_v_661_, 1);
v_type_664_ = lean_ctor_get(v_v_661_, 2);
v_u_665_ = lean_ctor_get(v_v_661_, 3);
v_intModuleInst_666_ = lean_ctor_get(v_v_661_, 4);
v_leInst_x3f_667_ = lean_ctor_get(v_v_661_, 5);
v_ltInst_x3f_668_ = lean_ctor_get(v_v_661_, 6);
v_lawfulOrderLTInst_x3f_669_ = lean_ctor_get(v_v_661_, 7);
v_isPreorderInst_x3f_670_ = lean_ctor_get(v_v_661_, 8);
v_orderedAddInst_x3f_671_ = lean_ctor_get(v_v_661_, 9);
v_isLinearInst_x3f_672_ = lean_ctor_get(v_v_661_, 10);
v_noNatDivInst_x3f_673_ = lean_ctor_get(v_v_661_, 11);
v_ringInst_x3f_674_ = lean_ctor_get(v_v_661_, 12);
v_commRingInst_x3f_675_ = lean_ctor_get(v_v_661_, 13);
v_orderedRingInst_x3f_676_ = lean_ctor_get(v_v_661_, 14);
v_fieldInst_x3f_677_ = lean_ctor_get(v_v_661_, 15);
v_charInst_x3f_678_ = lean_ctor_get(v_v_661_, 16);
v_zero_679_ = lean_ctor_get(v_v_661_, 17);
v_ofNatZero_680_ = lean_ctor_get(v_v_661_, 18);
v_one_x3f_681_ = lean_ctor_get(v_v_661_, 19);
v_leFn_x3f_682_ = lean_ctor_get(v_v_661_, 20);
v_ltFn_x3f_683_ = lean_ctor_get(v_v_661_, 21);
v_addFn_684_ = lean_ctor_get(v_v_661_, 22);
v_zsmulFn_685_ = lean_ctor_get(v_v_661_, 23);
v_nsmulFn_686_ = lean_ctor_get(v_v_661_, 24);
v_zsmulFn_x3f_687_ = lean_ctor_get(v_v_661_, 25);
v_nsmulFn_x3f_688_ = lean_ctor_get(v_v_661_, 26);
v_homomulFn_x3f_689_ = lean_ctor_get(v_v_661_, 27);
v_subFn_690_ = lean_ctor_get(v_v_661_, 28);
v_negFn_691_ = lean_ctor_get(v_v_661_, 29);
v_vars_692_ = lean_ctor_get(v_v_661_, 30);
v_varMap_693_ = lean_ctor_get(v_v_661_, 31);
v_lowers_694_ = lean_ctor_get(v_v_661_, 32);
v_uppers_695_ = lean_ctor_get(v_v_661_, 33);
v_diseqs_696_ = lean_ctor_get(v_v_661_, 34);
v_assignment_697_ = lean_ctor_get(v_v_661_, 35);
v_caseSplits_698_ = lean_ctor_get_uint8(v_v_661_, sizeof(void*)*42);
v_conflict_x3f_699_ = lean_ctor_get(v_v_661_, 36);
v_diseqSplits_700_ = lean_ctor_get(v_v_661_, 37);
v_elimEqs_701_ = lean_ctor_get(v_v_661_, 38);
v_elimStack_702_ = lean_ctor_get(v_v_661_, 39);
v_occurs_703_ = lean_ctor_get(v_v_661_, 40);
v_ignored_704_ = lean_ctor_get(v_v_661_, 41);
v_isSharedCheck_718_ = !lean_is_exclusive(v_v_661_);
if (v_isSharedCheck_718_ == 0)
{
v___x_706_ = v_v_661_;
v_isShared_707_ = v_isSharedCheck_718_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_ignored_704_);
lean_inc(v_occurs_703_);
lean_inc(v_elimStack_702_);
lean_inc(v_elimEqs_701_);
lean_inc(v_diseqSplits_700_);
lean_inc(v_conflict_x3f_699_);
lean_inc(v_assignment_697_);
lean_inc(v_diseqs_696_);
lean_inc(v_uppers_695_);
lean_inc(v_lowers_694_);
lean_inc(v_varMap_693_);
lean_inc(v_vars_692_);
lean_inc(v_negFn_691_);
lean_inc(v_subFn_690_);
lean_inc(v_homomulFn_x3f_689_);
lean_inc(v_nsmulFn_x3f_688_);
lean_inc(v_zsmulFn_x3f_687_);
lean_inc(v_nsmulFn_686_);
lean_inc(v_zsmulFn_685_);
lean_inc(v_addFn_684_);
lean_inc(v_ltFn_x3f_683_);
lean_inc(v_leFn_x3f_682_);
lean_inc(v_one_x3f_681_);
lean_inc(v_ofNatZero_680_);
lean_inc(v_zero_679_);
lean_inc(v_charInst_x3f_678_);
lean_inc(v_fieldInst_x3f_677_);
lean_inc(v_orderedRingInst_x3f_676_);
lean_inc(v_commRingInst_x3f_675_);
lean_inc(v_ringInst_x3f_674_);
lean_inc(v_noNatDivInst_x3f_673_);
lean_inc(v_isLinearInst_x3f_672_);
lean_inc(v_orderedAddInst_x3f_671_);
lean_inc(v_isPreorderInst_x3f_670_);
lean_inc(v_lawfulOrderLTInst_x3f_669_);
lean_inc(v_ltInst_x3f_668_);
lean_inc(v_leInst_x3f_667_);
lean_inc(v_intModuleInst_666_);
lean_inc(v_u_665_);
lean_inc(v_type_664_);
lean_inc(v_ringId_x3f_663_);
lean_inc(v_id_662_);
lean_dec(v_v_661_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_718_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_708_; lean_object* v_xs_x27_709_; lean_object* v___x_710_; lean_object* v___x_712_; 
v___x_708_ = lean_box(0);
v_xs_x27_709_ = lean_array_fset(v_structs_648_, v_a_644_, v___x_708_);
v___x_710_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0(v_p_645_, v_diseqs_696_, v_one_646_);
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 34, v___x_710_);
v___x_712_ = v___x_706_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_id_662_);
lean_ctor_set(v_reuseFailAlloc_717_, 1, v_ringId_x3f_663_);
lean_ctor_set(v_reuseFailAlloc_717_, 2, v_type_664_);
lean_ctor_set(v_reuseFailAlloc_717_, 3, v_u_665_);
lean_ctor_set(v_reuseFailAlloc_717_, 4, v_intModuleInst_666_);
lean_ctor_set(v_reuseFailAlloc_717_, 5, v_leInst_x3f_667_);
lean_ctor_set(v_reuseFailAlloc_717_, 6, v_ltInst_x3f_668_);
lean_ctor_set(v_reuseFailAlloc_717_, 7, v_lawfulOrderLTInst_x3f_669_);
lean_ctor_set(v_reuseFailAlloc_717_, 8, v_isPreorderInst_x3f_670_);
lean_ctor_set(v_reuseFailAlloc_717_, 9, v_orderedAddInst_x3f_671_);
lean_ctor_set(v_reuseFailAlloc_717_, 10, v_isLinearInst_x3f_672_);
lean_ctor_set(v_reuseFailAlloc_717_, 11, v_noNatDivInst_x3f_673_);
lean_ctor_set(v_reuseFailAlloc_717_, 12, v_ringInst_x3f_674_);
lean_ctor_set(v_reuseFailAlloc_717_, 13, v_commRingInst_x3f_675_);
lean_ctor_set(v_reuseFailAlloc_717_, 14, v_orderedRingInst_x3f_676_);
lean_ctor_set(v_reuseFailAlloc_717_, 15, v_fieldInst_x3f_677_);
lean_ctor_set(v_reuseFailAlloc_717_, 16, v_charInst_x3f_678_);
lean_ctor_set(v_reuseFailAlloc_717_, 17, v_zero_679_);
lean_ctor_set(v_reuseFailAlloc_717_, 18, v_ofNatZero_680_);
lean_ctor_set(v_reuseFailAlloc_717_, 19, v_one_x3f_681_);
lean_ctor_set(v_reuseFailAlloc_717_, 20, v_leFn_x3f_682_);
lean_ctor_set(v_reuseFailAlloc_717_, 21, v_ltFn_x3f_683_);
lean_ctor_set(v_reuseFailAlloc_717_, 22, v_addFn_684_);
lean_ctor_set(v_reuseFailAlloc_717_, 23, v_zsmulFn_685_);
lean_ctor_set(v_reuseFailAlloc_717_, 24, v_nsmulFn_686_);
lean_ctor_set(v_reuseFailAlloc_717_, 25, v_zsmulFn_x3f_687_);
lean_ctor_set(v_reuseFailAlloc_717_, 26, v_nsmulFn_x3f_688_);
lean_ctor_set(v_reuseFailAlloc_717_, 27, v_homomulFn_x3f_689_);
lean_ctor_set(v_reuseFailAlloc_717_, 28, v_subFn_690_);
lean_ctor_set(v_reuseFailAlloc_717_, 29, v_negFn_691_);
lean_ctor_set(v_reuseFailAlloc_717_, 30, v_vars_692_);
lean_ctor_set(v_reuseFailAlloc_717_, 31, v_varMap_693_);
lean_ctor_set(v_reuseFailAlloc_717_, 32, v_lowers_694_);
lean_ctor_set(v_reuseFailAlloc_717_, 33, v_uppers_695_);
lean_ctor_set(v_reuseFailAlloc_717_, 34, v___x_710_);
lean_ctor_set(v_reuseFailAlloc_717_, 35, v_assignment_697_);
lean_ctor_set(v_reuseFailAlloc_717_, 36, v_conflict_x3f_699_);
lean_ctor_set(v_reuseFailAlloc_717_, 37, v_diseqSplits_700_);
lean_ctor_set(v_reuseFailAlloc_717_, 38, v_elimEqs_701_);
lean_ctor_set(v_reuseFailAlloc_717_, 39, v_elimStack_702_);
lean_ctor_set(v_reuseFailAlloc_717_, 40, v_occurs_703_);
lean_ctor_set(v_reuseFailAlloc_717_, 41, v_ignored_704_);
lean_ctor_set_uint8(v_reuseFailAlloc_717_, sizeof(void*)*42, v_caseSplits_698_);
v___x_712_ = v_reuseFailAlloc_717_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
lean_object* v___x_713_; lean_object* v___x_715_; 
v___x_713_ = lean_array_fset(v_xs_x27_709_, v_a_644_, v___x_712_);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 0, v___x_713_);
v___x_715_ = v___x_659_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_716_, 1, v_typeIdOf_649_);
lean_ctor_set(v_reuseFailAlloc_716_, 2, v_exprToStructId_650_);
lean_ctor_set(v_reuseFailAlloc_716_, 3, v_exprToStructIdEntries_651_);
lean_ctor_set(v_reuseFailAlloc_716_, 4, v_forbiddenNatModules_652_);
lean_ctor_set(v_reuseFailAlloc_716_, 5, v_natStructs_653_);
lean_ctor_set(v_reuseFailAlloc_716_, 6, v_natTypeIdOf_654_);
lean_ctor_set(v_reuseFailAlloc_716_, 7, v_exprToNatStructId_655_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0___boxed(lean_object* v_a_728_, lean_object* v_p_729_, lean_object* v_one_730_, lean_object* v_s_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0(v_a_728_, v_p_729_, v_one_730_, v_s_731_);
lean_dec(v_one_730_);
lean_dec(v_a_728_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(lean_object* v_one_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_){
_start:
{
lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v_p_740_; lean_object* v___f_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_738_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0);
v___x_739_ = lean_box(0);
lean_inc(v_one_733_);
v_p_740_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_p_740_, 0, v___x_738_);
lean_ctor_set(v_p_740_, 1, v_one_733_);
lean_ctor_set(v_p_740_, 2, v___x_739_);
lean_inc(v_a_734_);
v___f_741_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_741_, 0, v_a_734_);
lean_closure_set(v___f_741_, 1, v_p_740_);
lean_closure_set(v___f_741_, 2, v_one_733_);
v___x_742_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_743_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_742_, v___f_741_, v_a_735_, v_a_736_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___boxed(lean_object* v_one_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(v_one_744_, v_a_745_, v_a_746_, v_a_747_);
lean_dec(v_a_747_);
lean_dec(v_a_746_);
lean_dec(v_a_745_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne(lean_object* v_one_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_){
_start:
{
lean_object* v___x_763_; 
v___x_763_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(v_one_750_, v_a_751_, v_a_752_, v_a_761_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___boxed(lean_object* v_one_764_, lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne(v_one_764_, v_a_765_, v_a_766_, v_a_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_, v_a_772_, v_a_773_, v_a_774_, v_a_775_);
lean_dec(v_a_775_);
lean_dec_ref(v_a_774_);
lean_dec(v_a_773_);
lean_dec_ref(v_a_772_);
lean_dec(v_a_771_);
lean_dec_ref(v_a_770_);
lean_dec(v_a_769_);
lean_dec_ref(v_a_768_);
lean_dec(v_a_767_);
lean_dec(v_a_766_);
lean_dec(v_a_765_);
return v_res_777_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst(lean_object* v_isCharInst_x3f_778_){
_start:
{
if (lean_obj_tag(v_isCharInst_x3f_778_) == 0)
{
uint8_t v___x_779_; 
v___x_779_ = 0;
return v___x_779_;
}
else
{
lean_object* v_val_780_; lean_object* v_snd_781_; lean_object* v___x_782_; uint8_t v___x_783_; 
v_val_780_ = lean_ctor_get(v_isCharInst_x3f_778_, 0);
v_snd_781_ = lean_ctor_get(v_val_780_, 1);
v___x_782_ = lean_unsigned_to_nat(1u);
v___x_783_ = lean_nat_dec_eq(v_snd_781_, v___x_782_);
if (v___x_783_ == 0)
{
uint8_t v___x_784_; 
v___x_784_ = 1;
return v___x_784_;
}
else
{
uint8_t v___x_785_; 
v___x_785_ = 0;
return v___x_785_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst___boxed(lean_object* v_isCharInst_x3f_786_){
_start:
{
uint8_t v_res_787_; lean_object* v_r_788_; 
v_res_787_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst(v_isCharInst_x3f_786_);
lean_dec(v_isCharInst_x3f_786_);
v_r_788_ = lean_box(v_res_787_);
return v_r_788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isCutsatType(lean_object* v_type_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_){
_start:
{
lean_object* v___x_805_; 
v___x_805_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_792_);
if (lean_obj_tag(v___x_805_) == 0)
{
lean_object* v_a_806_; uint8_t v_lia_807_; 
v_a_806_ = lean_ctor_get(v___x_805_, 0);
lean_inc(v_a_806_);
lean_dec_ref(v___x_805_);
v_lia_807_ = lean_ctor_get_uint8(v_a_806_, sizeof(void*)*11 + 23);
lean_dec(v_a_806_);
if (v_lia_807_ == 0)
{
lean_dec_ref(v_type_789_);
goto v___jp_801_;
}
else
{
lean_object* v___x_808_; 
v___x_808_ = l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType(v_type_789_, v_a_790_, v_a_791_, v_a_792_, v_a_793_, v_a_794_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_);
if (lean_obj_tag(v___x_808_) == 0)
{
lean_object* v_a_809_; uint8_t v___x_810_; 
v_a_809_ = lean_ctor_get(v___x_808_, 0);
lean_inc(v_a_809_);
v___x_810_ = lean_unbox(v_a_809_);
lean_dec(v_a_809_);
if (v___x_810_ == 0)
{
lean_dec_ref(v___x_808_);
goto v___jp_801_;
}
else
{
return v___x_808_;
}
}
else
{
return v___x_808_;
}
}
}
else
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_818_; 
lean_dec_ref(v_type_789_);
v_a_811_ = lean_ctor_get(v___x_805_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_805_);
if (v_isSharedCheck_818_ == 0)
{
v___x_813_ = v___x_805_;
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_805_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_a_811_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
v___jp_801_:
{
uint8_t v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_802_ = 0;
v___x_803_ = lean_box(v___x_802_);
v___x_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_804_, 0, v___x_803_);
return v___x_804_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isCutsatType___boxed(lean_object* v_type_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isCutsatType(v_type_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
lean_dec(v_a_829_);
lean_dec_ref(v_a_828_);
lean_dec(v_a_827_);
lean_dec_ref(v_a_826_);
lean_dec(v_a_825_);
lean_dec_ref(v_a_824_);
lean_dec(v_a_823_);
lean_dec_ref(v_a_822_);
lean_dec(v_a_821_);
lean_dec(v_a_820_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f(lean_object* v_ringId_x3f_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_){
_start:
{
if (lean_obj_tag(v_ringId_x3f_832_) == 1)
{
lean_object* v_val_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_871_; 
v_val_844_ = lean_ctor_get(v_ringId_x3f_832_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v_ringId_x3f_832_);
if (v_isSharedCheck_871_ == 0)
{
v___x_846_ = v_ringId_x3f_832_;
v_isShared_847_ = v_isSharedCheck_871_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_val_844_);
lean_dec(v_ringId_x3f_832_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_871_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
uint8_t v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_848_ = 0;
v___x_849_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_849_, 0, v_val_844_);
lean_ctor_set_uint8(v___x_849_, sizeof(void*)*1, v___x_848_);
v___x_850_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___x_849_, v_a_833_, v_a_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_, v_a_840_, v_a_841_, v_a_842_);
lean_dec_ref(v___x_849_);
if (lean_obj_tag(v___x_850_) == 0)
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_862_; 
v_a_851_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_862_ == 0)
{
v___x_853_ = v___x_850_;
v_isShared_854_ = v_isSharedCheck_862_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_850_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_862_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v_commRingInst_855_; lean_object* v___x_857_; 
v_commRingInst_855_ = lean_ctor_get(v_a_851_, 4);
lean_inc_ref(v_commRingInst_855_);
lean_dec(v_a_851_);
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 0, v_commRingInst_855_);
v___x_857_ = v___x_846_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_commRingInst_855_);
v___x_857_ = v_reuseFailAlloc_861_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
lean_object* v___x_859_; 
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 0, v___x_857_);
v___x_859_ = v___x_853_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v___x_857_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
}
else
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_870_; 
lean_del_object(v___x_846_);
v_a_863_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_870_ == 0)
{
v___x_865_ = v___x_850_;
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v___x_850_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_868_; 
if (v_isShared_866_ == 0)
{
v___x_868_ = v___x_865_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_a_863_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
}
}
else
{
lean_object* v___x_872_; lean_object* v___x_873_; 
lean_dec(v_ringId_x3f_832_);
v___x_872_ = lean_box(0);
v___x_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
return v___x_873_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f___boxed(lean_object* v_ringId_x3f_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f(v_ringId_x3f_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_, v_a_882_, v_a_883_, v_a_884_);
lean_dec(v_a_884_);
lean_dec_ref(v_a_883_);
lean_dec(v_a_882_);
lean_dec_ref(v_a_881_);
lean_dec(v_a_880_);
lean_dec_ref(v_a_879_);
lean_dec(v_a_878_);
lean_dec_ref(v_a_877_);
lean_dec(v_a_876_);
lean_dec(v_a_875_);
return v_res_886_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_887_; 
v___x_887_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_887_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_888_; 
v___x_888_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_888_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__2(void){
_start:
{
lean_object* v___x_889_; 
v___x_889_ = lean_mk_string_unchecked("CommRing", 8, 8);
return v___x_889_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__3(void){
_start:
{
lean_object* v___x_890_; 
v___x_890_ = lean_mk_string_unchecked("toRing", 6, 6);
return v___x_890_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4(void){
_start:
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_891_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__3);
v___x_892_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__2);
v___x_893_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1);
v___x_894_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0);
v___x_895_ = l_Lean_Name_mkStr4(v___x_894_, v___x_893_, v___x_892_, v___x_891_);
return v___x_895_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5(void){
_start:
{
lean_object* v___x_896_; 
v___x_896_ = lean_mk_string_unchecked("Ring", 4, 4);
return v___x_896_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6(void){
_start:
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_897_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5);
v___x_898_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1);
v___x_899_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0);
v___x_900_ = l_Lean_Name_mkStr3(v___x_899_, v___x_898_, v___x_897_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg(lean_object* v_u_901_, lean_object* v_type_902_, lean_object* v_commRingInst_x3f_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_){
_start:
{
if (lean_obj_tag(v_commRingInst_x3f_903_) == 1)
{
lean_object* v_val_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_922_; 
v_val_909_ = lean_ctor_get(v_commRingInst_x3f_903_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v_commRingInst_x3f_903_);
if (v_isSharedCheck_922_ == 0)
{
v___x_911_ = v_commRingInst_x3f_903_;
v_isShared_912_ = v_isSharedCheck_922_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_val_909_);
lean_dec(v_commRingInst_x3f_903_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_922_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_919_; 
v___x_913_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4);
v___x_914_ = lean_box(0);
v___x_915_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_915_, 0, v_u_901_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v___x_916_ = l_Lean_mkConst(v___x_913_, v___x_915_);
v___x_917_ = l_Lean_mkAppB(v___x_916_, v_type_902_, v_val_909_);
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 0, v___x_917_);
v___x_919_ = v___x_911_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v___x_917_);
v___x_919_ = v_reuseFailAlloc_921_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
lean_object* v___x_920_; 
v___x_920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_920_, 0, v___x_919_);
return v___x_920_;
}
}
}
else
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
lean_dec(v_commRingInst_x3f_903_);
v___x_923_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6);
v___x_924_ = lean_box(0);
v___x_925_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_925_, 0, v_u_901_);
lean_ctor_set(v___x_925_, 1, v___x_924_);
v___x_926_ = l_Lean_mkConst(v___x_923_, v___x_925_);
v___x_927_ = l_Lean_Expr_app___override(v___x_926_, v_type_902_);
v___x_928_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_927_, v_a_904_, v_a_905_, v_a_906_, v_a_907_);
return v___x_928_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___boxed(lean_object* v_u_929_, lean_object* v_type_930_, lean_object* v_commRingInst_x3f_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg(v_u_929_, v_type_930_, v_commRingInst_x3f_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
lean_dec(v_a_935_);
lean_dec_ref(v_a_934_);
lean_dec(v_a_933_);
lean_dec_ref(v_a_932_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f(lean_object* v_u_938_, lean_object* v_type_939_, lean_object* v_commRingInst_x3f_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_){
_start:
{
lean_object* v___x_952_; 
v___x_952_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg(v_u_938_, v_type_939_, v_commRingInst_x3f_940_, v_a_947_, v_a_948_, v_a_949_, v_a_950_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___boxed(lean_object* v_u_953_, lean_object* v_type_954_, lean_object* v_commRingInst_x3f_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_, lean_object* v_a_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f(v_u_953_, v_type_954_, v_commRingInst_x3f_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec(v_a_956_);
return v_res_967_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_968_; 
v___x_968_ = lean_mk_string_unchecked("toIntModule", 11, 11);
return v___x_968_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_969_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__0);
v___x_970_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5);
v___x_971_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1);
v___x_972_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0);
v___x_973_ = l_Lean_Name_mkStr4(v___x_972_, v___x_971_, v___x_970_, v___x_969_);
return v___x_973_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2(void){
_start:
{
lean_object* v___x_974_; 
v___x_974_ = lean_mk_string_unchecked("IntModule", 9, 9);
return v___x_974_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3(void){
_start:
{
lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_975_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2);
v___x_976_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1);
v___x_977_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0);
v___x_978_ = l_Lean_Name_mkStr3(v___x_977_, v___x_976_, v___x_975_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg(lean_object* v_u_979_, lean_object* v_type_980_, lean_object* v_ringInst_x3f_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_){
_start:
{
if (lean_obj_tag(v_ringInst_x3f_981_) == 1)
{
lean_object* v_val_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_1000_; 
v_val_987_ = lean_ctor_get(v_ringInst_x3f_981_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v_ringInst_x3f_981_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_989_ = v_ringInst_x3f_981_;
v_isShared_990_ = v_isSharedCheck_1000_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_val_987_);
lean_dec(v_ringInst_x3f_981_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_1000_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_997_; 
v___x_991_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1);
v___x_992_ = lean_box(0);
v___x_993_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_993_, 0, v_u_979_);
lean_ctor_set(v___x_993_, 1, v___x_992_);
v___x_994_ = l_Lean_mkConst(v___x_991_, v___x_993_);
v___x_995_ = l_Lean_mkAppB(v___x_994_, v_type_980_, v_val_987_);
if (v_isShared_990_ == 0)
{
lean_ctor_set(v___x_989_, 0, v___x_995_);
v___x_997_ = v___x_989_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v___x_995_);
v___x_997_ = v_reuseFailAlloc_999_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
lean_object* v___x_998_; 
v___x_998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_998_, 0, v___x_997_);
return v___x_998_;
}
}
}
else
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
lean_dec(v_ringInst_x3f_981_);
v___x_1001_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3);
v___x_1002_ = lean_box(0);
v___x_1003_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1003_, 0, v_u_979_);
lean_ctor_set(v___x_1003_, 1, v___x_1002_);
v___x_1004_ = l_Lean_mkConst(v___x_1001_, v___x_1003_);
v___x_1005_ = l_Lean_Expr_app___override(v___x_1004_, v_type_980_);
v___x_1006_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_1005_, v_a_982_, v_a_983_, v_a_984_, v_a_985_);
return v___x_1006_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___boxed(lean_object* v_u_1007_, lean_object* v_type_1008_, lean_object* v_ringInst_x3f_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_){
_start:
{
lean_object* v_res_1015_; 
v_res_1015_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg(v_u_1007_, v_type_1008_, v_ringInst_x3f_1009_, v_a_1010_, v_a_1011_, v_a_1012_, v_a_1013_);
lean_dec(v_a_1013_);
lean_dec_ref(v_a_1012_);
lean_dec(v_a_1011_);
lean_dec_ref(v_a_1010_);
return v_res_1015_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f(lean_object* v_u_1016_, lean_object* v_type_1017_, lean_object* v_ringInst_x3f_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_){
_start:
{
lean_object* v___x_1030_; 
v___x_1030_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg(v_u_1016_, v_type_1017_, v_ringInst_x3f_1018_, v_a_1025_, v_a_1026_, v_a_1027_, v_a_1028_);
return v___x_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___boxed(lean_object* v_u_1031_, lean_object* v_type_1032_, lean_object* v_ringInst_x3f_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f(v_u_1031_, v_type_1032_, v_ringInst_x3f_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_, v_a_1041_, v_a_1042_, v_a_1043_);
lean_dec(v_a_1043_);
lean_dec_ref(v_a_1042_);
lean_dec(v_a_1041_);
lean_dec_ref(v_a_1040_);
lean_dec(v_a_1039_);
lean_dec_ref(v_a_1038_);
lean_dec(v_a_1037_);
lean_dec_ref(v_a_1036_);
lean_dec(v_a_1035_);
lean_dec(v_a_1034_);
return v_res_1045_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_1046_; 
v___x_1046_ = lean_mk_string_unchecked("toSemiring", 10, 10);
return v___x_1046_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1047_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__0);
v___x_1048_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5);
v___x_1049_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1);
v___x_1050_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0);
v___x_1051_ = l_Lean_Name_mkStr4(v___x_1050_, v___x_1049_, v___x_1048_, v___x_1047_);
return v___x_1051_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__2(void){
_start:
{
lean_object* v___x_1052_; 
v___x_1052_ = lean_mk_string_unchecked("Semiring", 8, 8);
return v___x_1052_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3(void){
_start:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1053_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__2);
v___x_1054_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1);
v___x_1055_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0);
v___x_1056_ = l_Lean_Name_mkStr3(v___x_1055_, v___x_1054_, v___x_1053_);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg(lean_object* v_u_1057_, lean_object* v_type_1058_, lean_object* v_ringInst_x3f_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_){
_start:
{
if (lean_obj_tag(v_ringInst_x3f_1059_) == 1)
{
lean_object* v_val_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1078_; 
v_val_1065_ = lean_ctor_get(v_ringInst_x3f_1059_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v_ringInst_x3f_1059_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1067_ = v_ringInst_x3f_1059_;
v_isShared_1068_ = v_isSharedCheck_1078_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_val_1065_);
lean_dec(v_ringInst_x3f_1059_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1078_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1075_; 
v___x_1069_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1);
v___x_1070_ = lean_box(0);
v___x_1071_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1071_, 0, v_u_1057_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
v___x_1072_ = l_Lean_mkConst(v___x_1069_, v___x_1071_);
v___x_1073_ = l_Lean_mkAppB(v___x_1072_, v_type_1058_, v_val_1065_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 0, v___x_1073_);
v___x_1075_ = v___x_1067_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_1073_);
v___x_1075_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
lean_object* v___x_1076_; 
v___x_1076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1075_);
return v___x_1076_;
}
}
}
else
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; 
lean_dec(v_ringInst_x3f_1059_);
v___x_1079_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3);
v___x_1080_ = lean_box(0);
v___x_1081_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1081_, 0, v_u_1057_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
v___x_1082_ = l_Lean_mkConst(v___x_1079_, v___x_1081_);
v___x_1083_ = l_Lean_Expr_app___override(v___x_1082_, v_type_1058_);
v___x_1084_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_1083_, v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_);
return v___x_1084_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___boxed(lean_object* v_u_1085_, lean_object* v_type_1086_, lean_object* v_ringInst_x3f_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_){
_start:
{
lean_object* v_res_1093_; 
v_res_1093_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg(v_u_1085_, v_type_1086_, v_ringInst_x3f_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_);
lean_dec(v_a_1091_);
lean_dec_ref(v_a_1090_);
lean_dec(v_a_1089_);
lean_dec_ref(v_a_1088_);
return v_res_1093_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f(lean_object* v_u_1094_, lean_object* v_type_1095_, lean_object* v_ringInst_x3f_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_){
_start:
{
lean_object* v___x_1108_; 
v___x_1108_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg(v_u_1094_, v_type_1095_, v_ringInst_x3f_1096_, v_a_1103_, v_a_1104_, v_a_1105_, v_a_1106_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___boxed(lean_object* v_u_1109_, lean_object* v_type_1110_, lean_object* v_ringInst_x3f_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f(v_u_1109_, v_type_1110_, v_ringInst_x3f_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_);
lean_dec(v_a_1121_);
lean_dec_ref(v_a_1120_);
lean_dec(v_a_1119_);
lean_dec_ref(v_a_1118_);
lean_dec(v_a_1117_);
lean_dec_ref(v_a_1116_);
lean_dec(v_a_1115_);
lean_dec_ref(v_a_1114_);
lean_dec(v_a_1113_);
lean_dec(v_a_1112_);
return v_res_1123_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0(void){
_start:
{
lean_object* v___x_1124_; 
v___x_1124_ = lean_mk_string_unchecked("One", 3, 3);
return v___x_1124_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__1(void){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1125_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0);
v___x_1126_ = l_Lean_Name_mkStr1(v___x_1125_);
return v___x_1126_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__2(void){
_start:
{
lean_object* v___x_1127_; 
v___x_1127_ = lean_mk_string_unchecked("one", 3, 3);
return v___x_1127_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3(void){
_start:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1128_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__2);
v___x_1129_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0);
v___x_1130_ = l_Lean_Name_mkStr2(v___x_1129_, v___x_1128_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f(lean_object* v_u_1131_, lean_object* v_type_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1144_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__1);
v___x_1145_ = lean_box(0);
v___x_1146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1146_, 0, v_u_1131_);
lean_ctor_set(v___x_1146_, 1, v___x_1145_);
lean_inc_ref(v___x_1146_);
v___x_1147_ = l_Lean_mkConst(v___x_1144_, v___x_1146_);
lean_inc_ref(v_type_1132_);
v___x_1148_ = l_Lean_Expr_app___override(v___x_1147_, v_type_1132_);
v___x_1149_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_1148_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_);
if (lean_obj_tag(v___x_1149_) == 0)
{
lean_object* v_a_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1231_; 
v_a_1150_ = lean_ctor_get(v___x_1149_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v___x_1149_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1152_ = v___x_1149_;
v_isShared_1153_ = v_isSharedCheck_1231_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_a_1150_);
lean_dec(v___x_1149_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1231_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
if (lean_obj_tag(v_a_1150_) == 1)
{
lean_object* v_val_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1226_; 
lean_del_object(v___x_1152_);
v_val_1154_ = lean_ctor_get(v_a_1150_, 0);
v_isSharedCheck_1226_ = !lean_is_exclusive(v_a_1150_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1156_ = v_a_1150_;
v_isShared_1157_ = v_isSharedCheck_1226_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_val_1154_);
lean_dec(v_a_1150_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1226_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1158_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3);
v___x_1159_ = l_Lean_mkConst(v___x_1158_, v___x_1146_);
lean_inc_ref(v_type_1132_);
v___x_1160_ = l_Lean_mkAppB(v___x_1159_, v_type_1132_, v_val_1154_);
v___x_1161_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(v___x_1160_, v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_);
if (lean_obj_tag(v___x_1161_) == 0)
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1217_; 
v_a_1162_ = lean_ctor_get(v___x_1161_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1164_ = v___x_1161_;
v_isShared_1165_ = v_isSharedCheck_1217_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v___x_1161_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1217_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; 
v___x_1173_ = lean_unsigned_to_nat(1u);
v___x_1174_ = l_Lean_Meta_mkNumeral(v_type_1132_, v___x_1173_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_);
if (lean_obj_tag(v___x_1174_) == 0)
{
lean_object* v_a_1175_; lean_object* v___x_1176_; 
v_a_1175_ = lean_ctor_get(v___x_1174_, 0);
lean_inc_n(v_a_1175_, 2);
lean_dec_ref(v___x_1174_);
lean_inc(v_a_1162_);
v___x_1176_ = l_Lean_Meta_isDefEqD(v_a_1162_, v_a_1175_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v_a_1177_; uint8_t v___x_1178_; 
v_a_1177_ = lean_ctor_get(v___x_1176_, 0);
lean_inc(v_a_1177_);
lean_dec_ref(v___x_1176_);
v___x_1178_ = lean_unbox(v_a_1177_);
lean_dec(v_a_1177_);
if (v___x_1178_ == 0)
{
lean_object* v___x_1179_; lean_object* v_a_1180_; lean_object* v___x_1181_; 
lean_inc(v_a_1162_);
v___x_1179_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(v_a_1162_, v_a_1175_);
v_a_1180_ = lean_ctor_get(v___x_1179_, 0);
lean_inc(v_a_1180_);
lean_dec_ref(v___x_1179_);
v___x_1181_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_1137_);
if (lean_obj_tag(v___x_1181_) == 0)
{
lean_object* v_a_1182_; uint8_t v___x_1183_; 
v_a_1182_ = lean_ctor_get(v___x_1181_, 0);
lean_inc(v_a_1182_);
lean_dec_ref(v___x_1181_);
v___x_1183_ = lean_unbox(v_a_1182_);
lean_dec(v_a_1182_);
if (v___x_1183_ == 0)
{
lean_dec(v_a_1180_);
goto v___jp_1166_;
}
else
{
lean_object* v___x_1184_; 
v___x_1184_ = l_Lean_Meta_Sym_reportIssue(v_a_1180_, v_a_1137_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_);
if (lean_obj_tag(v___x_1184_) == 0)
{
lean_dec_ref(v___x_1184_);
goto v___jp_1166_;
}
else
{
lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1192_; 
lean_del_object(v___x_1164_);
lean_dec(v_a_1162_);
lean_del_object(v___x_1156_);
v_a_1185_ = lean_ctor_get(v___x_1184_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1187_ = v___x_1184_;
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_dec(v___x_1184_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1190_; 
if (v_isShared_1188_ == 0)
{
v___x_1190_ = v___x_1187_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_a_1185_);
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
else
{
lean_object* v_a_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1200_; 
lean_dec(v_a_1180_);
lean_del_object(v___x_1164_);
lean_dec(v_a_1162_);
lean_del_object(v___x_1156_);
v_a_1193_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1200_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1195_ = v___x_1181_;
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_a_1193_);
lean_dec(v___x_1181_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1198_; 
if (v_isShared_1196_ == 0)
{
v___x_1198_ = v___x_1195_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v_a_1193_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
return v___x_1198_;
}
}
}
}
else
{
lean_dec(v_a_1175_);
goto v___jp_1166_;
}
}
else
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1208_; 
lean_dec(v_a_1175_);
lean_del_object(v___x_1164_);
lean_dec(v_a_1162_);
lean_del_object(v___x_1156_);
v_a_1201_ = lean_ctor_get(v___x_1176_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1176_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1203_ = v___x_1176_;
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1176_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1206_; 
if (v_isShared_1204_ == 0)
{
v___x_1206_ = v___x_1203_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v_a_1201_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
}
else
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1216_; 
lean_del_object(v___x_1164_);
lean_dec(v_a_1162_);
lean_del_object(v___x_1156_);
v_a_1209_ = lean_ctor_get(v___x_1174_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1174_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1211_ = v___x_1174_;
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1174_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1214_; 
if (v_isShared_1212_ == 0)
{
v___x_1214_ = v___x_1211_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_a_1209_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
v___jp_1166_:
{
lean_object* v___x_1168_; 
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 0, v_a_1162_);
v___x_1168_ = v___x_1156_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_a_1162_);
v___x_1168_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
lean_object* v___x_1170_; 
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 0, v___x_1168_);
v___x_1170_ = v___x_1164_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v___x_1168_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
}
}
else
{
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1225_; 
lean_del_object(v___x_1156_);
lean_dec_ref(v_type_1132_);
v_a_1218_ = lean_ctor_get(v___x_1161_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1220_ = v___x_1161_;
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1161_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1223_; 
if (v_isShared_1221_ == 0)
{
v___x_1223_ = v___x_1220_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_a_1218_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
}
}
else
{
lean_object* v___x_1227_; lean_object* v___x_1229_; 
lean_dec(v_a_1150_);
lean_dec_ref(v___x_1146_);
lean_dec_ref(v_type_1132_);
v___x_1227_ = lean_box(0);
if (v_isShared_1153_ == 0)
{
lean_ctor_set(v___x_1152_, 0, v___x_1227_);
v___x_1229_ = v___x_1152_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v___x_1227_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
}
}
else
{
lean_dec_ref(v___x_1146_);
lean_dec_ref(v_type_1132_);
return v___x_1149_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___boxed(lean_object* v_u_1232_, lean_object* v_type_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_, lean_object* v_a_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_){
_start:
{
lean_object* v_res_1245_; 
v_res_1245_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f(v_u_1232_, v_type_1233_, v_a_1234_, v_a_1235_, v_a_1236_, v_a_1237_, v_a_1238_, v_a_1239_, v_a_1240_, v_a_1241_, v_a_1242_, v_a_1243_);
lean_dec(v_a_1243_);
lean_dec_ref(v_a_1242_);
lean_dec(v_a_1241_);
lean_dec_ref(v_a_1240_);
lean_dec(v_a_1239_);
lean_dec_ref(v_a_1238_);
lean_dec(v_a_1237_);
lean_dec_ref(v_a_1236_);
lean_dec(v_a_1235_);
lean_dec(v_a_1234_);
return v_res_1245_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_1246_; 
v___x_1246_ = lean_mk_string_unchecked("OrderedRing", 11, 11);
return v___x_1246_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1247_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__0);
v___x_1248_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1);
v___x_1249_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0);
v___x_1250_ = l_Lean_Name_mkStr3(v___x_1249_, v___x_1248_, v___x_1247_);
return v___x_1250_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__2(void){
_start:
{
lean_object* v___x_1251_; 
v___x_1251_ = lean_mk_string_unchecked("type has a `Preorder` and is a `Semiring`, but is not an ordered ring, failed to synthesize", 91, 91);
return v___x_1251_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3(void){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1252_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__2);
v___x_1253_ = l_Lean_stringToMessageData(v___x_1252_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg(lean_object* v_u_1254_, lean_object* v_type_1255_, lean_object* v_semiringInst_x3f_1256_, lean_object* v_leInst_x3f_1257_, lean_object* v_ltInst_x3f_1258_, lean_object* v_preorderInst_x3f_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_){
_start:
{
if (lean_obj_tag(v_semiringInst_x3f_1256_) == 1)
{
if (lean_obj_tag(v_leInst_x3f_1257_) == 1)
{
if (lean_obj_tag(v_ltInst_x3f_1258_) == 1)
{
if (lean_obj_tag(v_preorderInst_x3f_1259_) == 1)
{
lean_object* v_val_1270_; lean_object* v_val_1271_; lean_object* v_val_1272_; lean_object* v_val_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v_isOrdType_1278_; lean_object* v___x_1279_; 
v_val_1270_ = lean_ctor_get(v_semiringInst_x3f_1256_, 0);
lean_inc(v_val_1270_);
lean_dec_ref(v_semiringInst_x3f_1256_);
v_val_1271_ = lean_ctor_get(v_leInst_x3f_1257_, 0);
lean_inc(v_val_1271_);
lean_dec_ref(v_leInst_x3f_1257_);
v_val_1272_ = lean_ctor_get(v_ltInst_x3f_1258_, 0);
lean_inc(v_val_1272_);
lean_dec_ref(v_ltInst_x3f_1258_);
v_val_1273_ = lean_ctor_get(v_preorderInst_x3f_1259_, 0);
lean_inc(v_val_1273_);
lean_dec_ref(v_preorderInst_x3f_1259_);
v___x_1274_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1);
v___x_1275_ = lean_box(0);
v___x_1276_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1276_, 0, v_u_1254_);
lean_ctor_set(v___x_1276_, 1, v___x_1275_);
v___x_1277_ = l_Lean_mkConst(v___x_1274_, v___x_1276_);
v_isOrdType_1278_ = l_Lean_mkApp5(v___x_1277_, v_type_1255_, v_val_1270_, v_val_1271_, v_val_1272_, v_val_1273_);
lean_inc_ref(v_isOrdType_1278_);
v___x_1279_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v_isOrdType_1278_, v_a_1262_, v_a_1263_, v_a_1264_, v_a_1265_);
if (lean_obj_tag(v___x_1279_) == 0)
{
lean_object* v_a_1280_; 
v_a_1280_ = lean_ctor_get(v___x_1279_, 0);
lean_inc(v_a_1280_);
if (lean_obj_tag(v_a_1280_) == 1)
{
lean_dec_ref(v_a_1280_);
lean_dec_ref(v_isOrdType_1278_);
return v___x_1279_;
}
else
{
lean_object* v___x_1281_; 
lean_dec(v_a_1280_);
lean_dec_ref(v___x_1279_);
v___x_1281_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_1260_);
if (lean_obj_tag(v___x_1281_) == 0)
{
lean_object* v_a_1282_; uint8_t v___x_1283_; 
v_a_1282_ = lean_ctor_get(v___x_1281_, 0);
lean_inc(v_a_1282_);
lean_dec_ref(v___x_1281_);
v___x_1283_ = lean_unbox(v_a_1282_);
lean_dec(v_a_1282_);
if (v___x_1283_ == 0)
{
lean_dec_ref(v_isOrdType_1278_);
goto v___jp_1267_;
}
else
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1284_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3);
v___x_1285_ = l_Lean_indentExpr(v_isOrdType_1278_);
v___x_1286_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1284_);
lean_ctor_set(v___x_1286_, 1, v___x_1285_);
v___x_1287_ = l_Lean_Meta_Sym_reportIssue(v___x_1286_, v_a_1260_, v_a_1261_, v_a_1262_, v_a_1263_, v_a_1264_, v_a_1265_);
if (lean_obj_tag(v___x_1287_) == 0)
{
lean_dec_ref(v___x_1287_);
goto v___jp_1267_;
}
else
{
lean_object* v_a_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1295_; 
v_a_1288_ = lean_ctor_get(v___x_1287_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v___x_1287_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1290_ = v___x_1287_;
v_isShared_1291_ = v_isSharedCheck_1295_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_a_1288_);
lean_dec(v___x_1287_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1295_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v___x_1293_; 
if (v_isShared_1291_ == 0)
{
v___x_1293_ = v___x_1290_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v_a_1288_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
return v___x_1293_;
}
}
}
}
}
else
{
lean_object* v_a_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1303_; 
lean_dec_ref(v_isOrdType_1278_);
v_a_1296_ = lean_ctor_get(v___x_1281_, 0);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1281_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1298_ = v___x_1281_;
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_a_1296_);
lean_dec(v___x_1281_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1301_; 
if (v_isShared_1299_ == 0)
{
v___x_1301_ = v___x_1298_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_a_1296_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
return v___x_1301_;
}
}
}
}
}
else
{
lean_dec_ref(v_isOrdType_1278_);
return v___x_1279_;
}
}
else
{
lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1311_; 
lean_dec_ref(v_leInst_x3f_1257_);
lean_dec_ref(v_semiringInst_x3f_1256_);
lean_dec(v_preorderInst_x3f_1259_);
lean_dec_ref(v_type_1255_);
lean_dec(v_u_1254_);
v_isSharedCheck_1311_ = !lean_is_exclusive(v_ltInst_x3f_1258_);
if (v_isSharedCheck_1311_ == 0)
{
lean_object* v_unused_1312_; 
v_unused_1312_ = lean_ctor_get(v_ltInst_x3f_1258_, 0);
lean_dec(v_unused_1312_);
v___x_1305_ = v_ltInst_x3f_1258_;
v_isShared_1306_ = v_isSharedCheck_1311_;
goto v_resetjp_1304_;
}
else
{
lean_dec(v_ltInst_x3f_1258_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1311_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1307_; lean_object* v___x_1309_; 
v___x_1307_ = lean_box(0);
if (v_isShared_1306_ == 0)
{
lean_ctor_set_tag(v___x_1305_, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1307_);
v___x_1309_ = v___x_1305_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v___x_1307_);
v___x_1309_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
return v___x_1309_;
}
}
}
}
else
{
lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1320_; 
lean_dec_ref(v_semiringInst_x3f_1256_);
lean_dec(v_preorderInst_x3f_1259_);
lean_dec(v_ltInst_x3f_1258_);
lean_dec_ref(v_type_1255_);
lean_dec(v_u_1254_);
v_isSharedCheck_1320_ = !lean_is_exclusive(v_leInst_x3f_1257_);
if (v_isSharedCheck_1320_ == 0)
{
lean_object* v_unused_1321_; 
v_unused_1321_ = lean_ctor_get(v_leInst_x3f_1257_, 0);
lean_dec(v_unused_1321_);
v___x_1314_ = v_leInst_x3f_1257_;
v_isShared_1315_ = v_isSharedCheck_1320_;
goto v_resetjp_1313_;
}
else
{
lean_dec(v_leInst_x3f_1257_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1320_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1316_; lean_object* v___x_1318_; 
v___x_1316_ = lean_box(0);
if (v_isShared_1315_ == 0)
{
lean_ctor_set_tag(v___x_1314_, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1316_);
v___x_1318_ = v___x_1314_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v___x_1316_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
}
}
else
{
lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1329_; 
lean_dec(v_preorderInst_x3f_1259_);
lean_dec(v_ltInst_x3f_1258_);
lean_dec(v_leInst_x3f_1257_);
lean_dec_ref(v_type_1255_);
lean_dec(v_u_1254_);
v_isSharedCheck_1329_ = !lean_is_exclusive(v_semiringInst_x3f_1256_);
if (v_isSharedCheck_1329_ == 0)
{
lean_object* v_unused_1330_; 
v_unused_1330_ = lean_ctor_get(v_semiringInst_x3f_1256_, 0);
lean_dec(v_unused_1330_);
v___x_1323_ = v_semiringInst_x3f_1256_;
v_isShared_1324_ = v_isSharedCheck_1329_;
goto v_resetjp_1322_;
}
else
{
lean_dec(v_semiringInst_x3f_1256_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1329_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___x_1325_; lean_object* v___x_1327_; 
v___x_1325_ = lean_box(0);
if (v_isShared_1324_ == 0)
{
lean_ctor_set_tag(v___x_1323_, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1325_);
v___x_1327_ = v___x_1323_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v___x_1325_);
v___x_1327_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
return v___x_1327_;
}
}
}
}
else
{
lean_object* v___x_1331_; lean_object* v___x_1332_; 
lean_dec(v_preorderInst_x3f_1259_);
lean_dec(v_ltInst_x3f_1258_);
lean_dec(v_leInst_x3f_1257_);
lean_dec(v_semiringInst_x3f_1256_);
lean_dec_ref(v_type_1255_);
lean_dec(v_u_1254_);
v___x_1331_ = lean_box(0);
v___x_1332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1331_);
return v___x_1332_;
}
v___jp_1267_:
{
lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1268_ = lean_box(0);
v___x_1269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
return v___x_1269_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___boxed(lean_object* v_u_1333_, lean_object* v_type_1334_, lean_object* v_semiringInst_x3f_1335_, lean_object* v_leInst_x3f_1336_, lean_object* v_ltInst_x3f_1337_, lean_object* v_preorderInst_x3f_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_, lean_object* v_a_1344_, lean_object* v_a_1345_){
_start:
{
lean_object* v_res_1346_; 
v_res_1346_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg(v_u_1333_, v_type_1334_, v_semiringInst_x3f_1335_, v_leInst_x3f_1336_, v_ltInst_x3f_1337_, v_preorderInst_x3f_1338_, v_a_1339_, v_a_1340_, v_a_1341_, v_a_1342_, v_a_1343_, v_a_1344_);
lean_dec(v_a_1344_);
lean_dec_ref(v_a_1343_);
lean_dec(v_a_1342_);
lean_dec_ref(v_a_1341_);
lean_dec(v_a_1340_);
lean_dec_ref(v_a_1339_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f(lean_object* v_u_1347_, lean_object* v_type_1348_, lean_object* v_semiringInst_x3f_1349_, lean_object* v_leInst_x3f_1350_, lean_object* v_ltInst_x3f_1351_, lean_object* v_preorderInst_x3f_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_, lean_object* v_a_1358_, lean_object* v_a_1359_, lean_object* v_a_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_){
_start:
{
lean_object* v___x_1364_; 
v___x_1364_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg(v_u_1347_, v_type_1348_, v_semiringInst_x3f_1349_, v_leInst_x3f_1350_, v_ltInst_x3f_1351_, v_preorderInst_x3f_1352_, v_a_1357_, v_a_1358_, v_a_1359_, v_a_1360_, v_a_1361_, v_a_1362_);
return v___x_1364_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___boxed(lean_object** _args){
lean_object* v_u_1365_ = _args[0];
lean_object* v_type_1366_ = _args[1];
lean_object* v_semiringInst_x3f_1367_ = _args[2];
lean_object* v_leInst_x3f_1368_ = _args[3];
lean_object* v_ltInst_x3f_1369_ = _args[4];
lean_object* v_preorderInst_x3f_1370_ = _args[5];
lean_object* v_a_1371_ = _args[6];
lean_object* v_a_1372_ = _args[7];
lean_object* v_a_1373_ = _args[8];
lean_object* v_a_1374_ = _args[9];
lean_object* v_a_1375_ = _args[10];
lean_object* v_a_1376_ = _args[11];
lean_object* v_a_1377_ = _args[12];
lean_object* v_a_1378_ = _args[13];
lean_object* v_a_1379_ = _args[14];
lean_object* v_a_1380_ = _args[15];
lean_object* v_a_1381_ = _args[16];
_start:
{
lean_object* v_res_1382_; 
v_res_1382_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f(v_u_1365_, v_type_1366_, v_semiringInst_x3f_1367_, v_leInst_x3f_1368_, v_ltInst_x3f_1369_, v_preorderInst_x3f_1370_, v_a_1371_, v_a_1372_, v_a_1373_, v_a_1374_, v_a_1375_, v_a_1376_, v_a_1377_, v_a_1378_, v_a_1379_, v_a_1380_);
lean_dec(v_a_1380_);
lean_dec_ref(v_a_1379_);
lean_dec(v_a_1378_);
lean_dec_ref(v_a_1377_);
lean_dec(v_a_1376_);
lean_dec_ref(v_a_1375_);
lean_dec(v_a_1374_);
lean_dec_ref(v_a_1373_);
lean_dec(v_a_1372_);
lean_dec(v_a_1371_);
return v_res_1382_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_1383_; 
v___x_1383_ = lean_mk_string_unchecked("NatModule", 9, 9);
return v___x_1383_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1384_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__0);
v___x_1385_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1);
v___x_1386_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0);
v___x_1387_ = l_Lean_Name_mkStr3(v___x_1386_, v___x_1385_, v___x_1384_);
return v___x_1387_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__2(void){
_start:
{
lean_object* v___x_1388_; 
v___x_1388_ = lean_mk_string_unchecked("NoNatZeroDivisors", 17, 17);
return v___x_1388_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3(void){
_start:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1389_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__2);
v___x_1390_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1);
v___x_1391_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0);
v___x_1392_ = l_Lean_Name_mkStr3(v___x_1391_, v___x_1390_, v___x_1389_);
return v___x_1392_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg(lean_object* v_u_1393_, lean_object* v_type_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_, lean_object* v_a_1398_){
_start:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v_natModuleType_1404_; lean_object* v___x_1405_; 
v___x_1400_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1);
v___x_1401_ = lean_box(0);
v___x_1402_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1402_, 0, v_u_1393_);
lean_ctor_set(v___x_1402_, 1, v___x_1401_);
lean_inc_ref(v___x_1402_);
v___x_1403_ = l_Lean_mkConst(v___x_1400_, v___x_1402_);
lean_inc_ref(v_type_1394_);
v_natModuleType_1404_ = l_Lean_Expr_app___override(v___x_1403_, v_type_1394_);
v___x_1405_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v_natModuleType_1404_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_);
if (lean_obj_tag(v___x_1405_) == 0)
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1419_; 
v_a_1406_ = lean_ctor_get(v___x_1405_, 0);
v_isSharedCheck_1419_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1408_ = v___x_1405_;
v_isShared_1409_ = v_isSharedCheck_1419_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1405_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1419_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
if (lean_obj_tag(v_a_1406_) == 1)
{
lean_object* v_val_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; 
lean_del_object(v___x_1408_);
v_val_1410_ = lean_ctor_get(v_a_1406_, 0);
lean_inc(v_val_1410_);
lean_dec_ref(v_a_1406_);
v___x_1411_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3);
v___x_1412_ = l_Lean_mkConst(v___x_1411_, v___x_1402_);
v___x_1413_ = l_Lean_mkAppB(v___x_1412_, v_type_1394_, v_val_1410_);
v___x_1414_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_1413_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_);
return v___x_1414_;
}
else
{
lean_object* v___x_1415_; lean_object* v___x_1417_; 
lean_dec(v_a_1406_);
lean_dec_ref(v___x_1402_);
lean_dec_ref(v_type_1394_);
v___x_1415_ = lean_box(0);
if (v_isShared_1409_ == 0)
{
lean_ctor_set(v___x_1408_, 0, v___x_1415_);
v___x_1417_ = v___x_1408_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v___x_1415_);
v___x_1417_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
return v___x_1417_;
}
}
}
}
else
{
lean_dec_ref(v___x_1402_);
lean_dec_ref(v_type_1394_);
return v___x_1405_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___boxed(lean_object* v_u_1420_, lean_object* v_type_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_){
_start:
{
lean_object* v_res_1427_; 
v_res_1427_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg(v_u_1420_, v_type_1421_, v_a_1422_, v_a_1423_, v_a_1424_, v_a_1425_);
lean_dec(v_a_1425_);
lean_dec_ref(v_a_1424_);
lean_dec(v_a_1423_);
lean_dec_ref(v_a_1422_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f(lean_object* v_u_1428_, lean_object* v_type_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_, lean_object* v_a_1433_, lean_object* v_a_1434_, lean_object* v_a_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_, lean_object* v_a_1439_){
_start:
{
lean_object* v___x_1441_; 
v___x_1441_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg(v_u_1428_, v_type_1429_, v_a_1436_, v_a_1437_, v_a_1438_, v_a_1439_);
return v___x_1441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___boxed(lean_object* v_u_1442_, lean_object* v_type_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_, lean_object* v_a_1453_, lean_object* v_a_1454_){
_start:
{
lean_object* v_res_1455_; 
v_res_1455_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f(v_u_1442_, v_type_1443_, v_a_1444_, v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_, v_a_1450_, v_a_1451_, v_a_1452_, v_a_1453_);
lean_dec(v_a_1453_);
lean_dec_ref(v_a_1452_);
lean_dec(v_a_1451_);
lean_dec_ref(v_a_1450_);
lean_dec(v_a_1449_);
lean_dec_ref(v_a_1448_);
lean_dec(v_a_1447_);
lean_dec_ref(v_a_1446_);
lean_dec(v_a_1445_);
lean_dec(v_a_1444_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(lean_object* v_declName_1456_, lean_object* v_u_1457_, lean_object* v_type_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_){
_start:
{
lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1464_ = lean_box(0);
v___x_1465_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1465_, 0, v_u_1457_);
lean_ctor_set(v___x_1465_, 1, v___x_1464_);
v___x_1466_ = l_Lean_mkConst(v_declName_1456_, v___x_1465_);
v___x_1467_ = l_Lean_Expr_app___override(v___x_1466_, v_type_1458_);
v___x_1468_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_1467_, v_a_1459_, v_a_1460_, v_a_1461_, v_a_1462_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg___boxed(lean_object* v_declName_1469_, lean_object* v_u_1470_, lean_object* v_type_1471_, lean_object* v_a_1472_, lean_object* v_a_1473_, lean_object* v_a_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_){
_start:
{
lean_object* v_res_1477_; 
v_res_1477_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v_declName_1469_, v_u_1470_, v_type_1471_, v_a_1472_, v_a_1473_, v_a_1474_, v_a_1475_);
lean_dec(v_a_1475_);
lean_dec_ref(v_a_1474_);
lean_dec(v_a_1473_);
lean_dec_ref(v_a_1472_);
return v_res_1477_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f(lean_object* v_declName_1478_, lean_object* v_u_1479_, lean_object* v_type_1480_, lean_object* v_a_1481_, lean_object* v_a_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_){
_start:
{
lean_object* v___x_1492_; 
v___x_1492_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v_declName_1478_, v_u_1479_, v_type_1480_, v_a_1487_, v_a_1488_, v_a_1489_, v_a_1490_);
return v___x_1492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___boxed(lean_object* v_declName_1493_, lean_object* v_u_1494_, lean_object* v_type_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_, lean_object* v_a_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f(v_declName_1493_, v_u_1494_, v_type_1495_, v_a_1496_, v_a_1497_, v_a_1498_, v_a_1499_, v_a_1500_, v_a_1501_, v_a_1502_, v_a_1503_, v_a_1504_, v_a_1505_);
lean_dec(v_a_1505_);
lean_dec_ref(v_a_1504_);
lean_dec(v_a_1503_);
lean_dec_ref(v_a_1502_);
lean_dec(v_a_1501_);
lean_dec_ref(v_a_1500_);
lean_dec(v_a_1499_);
lean_dec_ref(v_a_1498_);
lean_dec(v_a_1497_);
lean_dec(v_a_1496_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg(lean_object* v_declName_1508_, lean_object* v_u_1509_, lean_object* v_type_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_){
_start:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1518_ = lean_box(0);
v___x_1519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1519_, 0, v_u_1509_);
lean_ctor_set(v___x_1519_, 1, v___x_1518_);
v___x_1520_ = l_Lean_mkConst(v_declName_1508_, v___x_1519_);
v___x_1521_ = l_Lean_Expr_app___override(v___x_1520_, v_type_1510_);
v___x_1522_ = l_Lean_Meta_Sym_synthInstance(v___x_1521_, v_a_1511_, v_a_1512_, v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_);
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg___boxed(lean_object* v_declName_1523_, lean_object* v_u_1524_, lean_object* v_type_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_){
_start:
{
lean_object* v_res_1533_; 
v_res_1533_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg(v_declName_1523_, v_u_1524_, v_type_1525_, v_a_1526_, v_a_1527_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_);
lean_dec(v_a_1531_);
lean_dec_ref(v_a_1530_);
lean_dec(v_a_1529_);
lean_dec_ref(v_a_1528_);
lean_dec(v_a_1527_);
lean_dec_ref(v_a_1526_);
return v_res_1533_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst(lean_object* v_declName_1534_, lean_object* v_u_1535_, lean_object* v_type_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_){
_start:
{
lean_object* v___x_1548_; 
v___x_1548_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg(v_declName_1534_, v_u_1535_, v_type_1536_, v_a_1541_, v_a_1542_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_);
return v___x_1548_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___boxed(lean_object* v_declName_1549_, lean_object* v_u_1550_, lean_object* v_type_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst(v_declName_1549_, v_u_1550_, v_type_1551_, v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_);
lean_dec(v_a_1561_);
lean_dec_ref(v_a_1560_);
lean_dec(v_a_1559_);
lean_dec_ref(v_a_1558_);
lean_dec(v_a_1557_);
lean_dec_ref(v_a_1556_);
lean_dec(v_a_1555_);
lean_dec_ref(v_a_1554_);
lean_dec(v_a_1553_);
lean_dec(v_a_1552_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg(lean_object* v_declName_1564_, lean_object* v_u_1565_, lean_object* v_type_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1574_ = lean_box(0);
lean_inc_n(v_u_1565_, 2);
v___x_1575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1575_, 0, v_u_1565_);
lean_ctor_set(v___x_1575_, 1, v___x_1574_);
v___x_1576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1576_, 0, v_u_1565_);
lean_ctor_set(v___x_1576_, 1, v___x_1575_);
v___x_1577_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1577_, 0, v_u_1565_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
v___x_1578_ = l_Lean_mkConst(v_declName_1564_, v___x_1577_);
lean_inc_ref_n(v_type_1566_, 2);
v___x_1579_ = l_Lean_mkApp3(v___x_1578_, v_type_1566_, v_type_1566_, v_type_1566_);
v___x_1580_ = l_Lean_Meta_Sym_synthInstance(v___x_1579_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_);
return v___x_1580_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg___boxed(lean_object* v_declName_1581_, lean_object* v_u_1582_, lean_object* v_type_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg(v_declName_1581_, v_u_1582_, v_type_1583_, v_a_1584_, v_a_1585_, v_a_1586_, v_a_1587_, v_a_1588_, v_a_1589_);
lean_dec(v_a_1589_);
lean_dec_ref(v_a_1588_);
lean_dec(v_a_1587_);
lean_dec_ref(v_a_1586_);
lean_dec(v_a_1585_);
lean_dec_ref(v_a_1584_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst(lean_object* v_declName_1592_, lean_object* v_u_1593_, lean_object* v_type_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_){
_start:
{
lean_object* v___x_1606_; 
v___x_1606_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg(v_declName_1592_, v_u_1593_, v_type_1594_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_, v_a_1603_, v_a_1604_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___boxed(lean_object* v_declName_1607_, lean_object* v_u_1608_, lean_object* v_type_1609_, lean_object* v_a_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_){
_start:
{
lean_object* v_res_1621_; 
v_res_1621_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst(v_declName_1607_, v_u_1608_, v_type_1609_, v_a_1610_, v_a_1611_, v_a_1612_, v_a_1613_, v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_);
lean_dec(v_a_1619_);
lean_dec_ref(v_a_1618_);
lean_dec(v_a_1617_);
lean_dec_ref(v_a_1616_);
lean_dec(v_a_1615_);
lean_dec_ref(v_a_1614_);
lean_dec(v_a_1613_);
lean_dec_ref(v_a_1612_);
lean_dec(v_a_1611_);
lean_dec(v_a_1610_);
return v_res_1621_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__0(void){
_start:
{
lean_object* v___x_1622_; 
v___x_1622_ = lean_mk_string_unchecked("HSMul", 5, 5);
return v___x_1622_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1(void){
_start:
{
lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1623_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__0);
v___x_1624_ = l_Lean_Name_mkStr1(v___x_1623_);
return v___x_1624_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2(void){
_start:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1625_ = lean_unsigned_to_nat(0u);
v___x_1626_ = l_Lean_Level_ofNat(v___x_1625_);
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg(lean_object* v_u_1627_, lean_object* v_type_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_){
_start:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___x_1636_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1);
v___x_1637_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2);
v___x_1638_ = lean_box(0);
lean_inc(v_u_1627_);
v___x_1639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1639_, 0, v_u_1627_);
lean_ctor_set(v___x_1639_, 1, v___x_1638_);
v___x_1640_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1640_, 0, v_u_1627_);
lean_ctor_set(v___x_1640_, 1, v___x_1639_);
v___x_1641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1637_);
lean_ctor_set(v___x_1641_, 1, v___x_1640_);
v___x_1642_ = l_Lean_mkConst(v___x_1636_, v___x_1641_);
v___x_1643_ = l_Lean_Int_mkType;
lean_inc_ref(v_type_1628_);
v___x_1644_ = l_Lean_mkApp3(v___x_1642_, v___x_1643_, v_type_1628_, v_type_1628_);
v___x_1645_ = l_Lean_Meta_Sym_synthInstance(v___x_1644_, v_a_1629_, v_a_1630_, v_a_1631_, v_a_1632_, v_a_1633_, v_a_1634_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___boxed(lean_object* v_u_1646_, lean_object* v_type_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_){
_start:
{
lean_object* v_res_1655_; 
v_res_1655_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg(v_u_1646_, v_type_1647_, v_a_1648_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_, v_a_1653_);
lean_dec(v_a_1653_);
lean_dec_ref(v_a_1652_);
lean_dec(v_a_1651_);
lean_dec_ref(v_a_1650_);
lean_dec(v_a_1649_);
lean_dec_ref(v_a_1648_);
return v_res_1655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst(lean_object* v_u_1656_, lean_object* v_type_1657_, lean_object* v_a_1658_, lean_object* v_a_1659_, lean_object* v_a_1660_, lean_object* v_a_1661_, lean_object* v_a_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_){
_start:
{
lean_object* v___x_1669_; 
v___x_1669_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg(v_u_1656_, v_type_1657_, v_a_1662_, v_a_1663_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___boxed(lean_object* v_u_1670_, lean_object* v_type_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_){
_start:
{
lean_object* v_res_1683_; 
v_res_1683_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst(v_u_1670_, v_type_1671_, v_a_1672_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_, v_a_1680_, v_a_1681_);
lean_dec(v_a_1681_);
lean_dec_ref(v_a_1680_);
lean_dec(v_a_1679_);
lean_dec_ref(v_a_1678_);
lean_dec(v_a_1677_);
lean_dec_ref(v_a_1676_);
lean_dec(v_a_1675_);
lean_dec_ref(v_a_1674_);
lean_dec(v_a_1673_);
lean_dec(v_a_1672_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___redArg(lean_object* v_u_1684_, lean_object* v_type_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_, lean_object* v_a_1688_, lean_object* v_a_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_){
_start:
{
lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; 
v___x_1693_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1);
v___x_1694_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2);
v___x_1695_ = lean_box(0);
lean_inc(v_u_1684_);
v___x_1696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1696_, 0, v_u_1684_);
lean_ctor_set(v___x_1696_, 1, v___x_1695_);
v___x_1697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1697_, 0, v_u_1684_);
lean_ctor_set(v___x_1697_, 1, v___x_1696_);
v___x_1698_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1694_);
lean_ctor_set(v___x_1698_, 1, v___x_1697_);
v___x_1699_ = l_Lean_mkConst(v___x_1693_, v___x_1698_);
v___x_1700_ = l_Lean_Nat_mkType;
lean_inc_ref(v_type_1685_);
v___x_1701_ = l_Lean_mkApp3(v___x_1699_, v___x_1700_, v_type_1685_, v_type_1685_);
v___x_1702_ = l_Lean_Meta_Sym_synthInstance(v___x_1701_, v_a_1686_, v_a_1687_, v_a_1688_, v_a_1689_, v_a_1690_, v_a_1691_);
return v___x_1702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___redArg___boxed(lean_object* v_u_1703_, lean_object* v_type_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_, lean_object* v_a_1711_){
_start:
{
lean_object* v_res_1712_; 
v_res_1712_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___redArg(v_u_1703_, v_type_1704_, v_a_1705_, v_a_1706_, v_a_1707_, v_a_1708_, v_a_1709_, v_a_1710_);
lean_dec(v_a_1710_);
lean_dec_ref(v_a_1709_);
lean_dec(v_a_1708_);
lean_dec_ref(v_a_1707_);
lean_dec(v_a_1706_);
lean_dec_ref(v_a_1705_);
return v_res_1712_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst(lean_object* v_u_1713_, lean_object* v_type_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_, lean_object* v_a_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_){
_start:
{
lean_object* v___x_1726_; 
v___x_1726_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___redArg(v_u_1713_, v_type_1714_, v_a_1719_, v_a_1720_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_);
return v___x_1726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___boxed(lean_object* v_u_1727_, lean_object* v_type_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst(v_u_1727_, v_type_1728_, v_a_1729_, v_a_1730_, v_a_1731_, v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_);
lean_dec(v_a_1738_);
lean_dec_ref(v_a_1737_);
lean_dec(v_a_1736_);
lean_dec_ref(v_a_1735_);
lean_dec(v_a_1734_);
lean_dec_ref(v_a_1733_);
lean_dec(v_a_1732_);
lean_dec_ref(v_a_1731_);
lean_dec(v_a_1730_);
lean_dec(v_a_1729_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(lean_object* v_leInst_x3f_1741_, lean_object* v_parentInst_x3f_1742_, lean_object* v_childInst_x3f_1743_, lean_object* v_toFieldName_1744_, lean_object* v_u_1745_, lean_object* v_type_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_, lean_object* v_a_1749_, lean_object* v_a_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_){
_start:
{
if (lean_obj_tag(v_leInst_x3f_1741_) == 1)
{
if (lean_obj_tag(v_parentInst_x3f_1742_) == 1)
{
if (lean_obj_tag(v_childInst_x3f_1743_) == 1)
{
lean_object* v_val_1757_; lean_object* v_val_1758_; lean_object* v_val_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v_toField_1763_; lean_object* v___x_1764_; 
v_val_1757_ = lean_ctor_get(v_leInst_x3f_1741_, 0);
lean_inc(v_val_1757_);
lean_dec_ref(v_leInst_x3f_1741_);
v_val_1758_ = lean_ctor_get(v_parentInst_x3f_1742_, 0);
lean_inc_n(v_val_1758_, 2);
lean_dec_ref(v_parentInst_x3f_1742_);
v_val_1759_ = lean_ctor_get(v_childInst_x3f_1743_, 0);
v___x_1760_ = lean_box(0);
v___x_1761_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1761_, 0, v_u_1745_);
lean_ctor_set(v___x_1761_, 1, v___x_1760_);
v___x_1762_ = l_Lean_mkConst(v_toFieldName_1744_, v___x_1761_);
lean_inc(v_val_1759_);
v_toField_1763_ = l_Lean_mkApp3(v___x_1762_, v_type_1746_, v_val_1757_, v_val_1759_);
lean_inc_ref(v_toField_1763_);
v___x_1764_ = l_Lean_Meta_isDefEqD(v_val_1758_, v_toField_1763_, v_a_1749_, v_a_1750_, v_a_1751_, v_a_1752_);
if (lean_obj_tag(v___x_1764_) == 0)
{
lean_object* v_a_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1795_; 
v_a_1765_ = lean_ctor_get(v___x_1764_, 0);
v_isSharedCheck_1795_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1795_ == 0)
{
v___x_1767_ = v___x_1764_;
v_isShared_1768_ = v_isSharedCheck_1795_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_a_1765_);
lean_dec(v___x_1764_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1795_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
uint8_t v___x_1769_; 
v___x_1769_ = lean_unbox(v_a_1765_);
lean_dec(v_a_1765_);
if (v___x_1769_ == 0)
{
lean_object* v___x_1770_; lean_object* v_a_1771_; lean_object* v___x_1772_; 
lean_del_object(v___x_1767_);
lean_dec_ref(v_childInst_x3f_1743_);
v___x_1770_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(v_val_1758_, v_toField_1763_);
v_a_1771_ = lean_ctor_get(v___x_1770_, 0);
lean_inc(v_a_1771_);
lean_dec_ref(v___x_1770_);
v___x_1772_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_1747_);
if (lean_obj_tag(v___x_1772_) == 0)
{
lean_object* v_a_1773_; uint8_t v___x_1774_; 
v_a_1773_ = lean_ctor_get(v___x_1772_, 0);
lean_inc(v_a_1773_);
lean_dec_ref(v___x_1772_);
v___x_1774_ = lean_unbox(v_a_1773_);
lean_dec(v_a_1773_);
if (v___x_1774_ == 0)
{
lean_dec(v_a_1771_);
goto v___jp_1754_;
}
else
{
lean_object* v___x_1775_; 
v___x_1775_ = l_Lean_Meta_Sym_reportIssue(v_a_1771_, v_a_1747_, v_a_1748_, v_a_1749_, v_a_1750_, v_a_1751_, v_a_1752_);
if (lean_obj_tag(v___x_1775_) == 0)
{
lean_dec_ref(v___x_1775_);
goto v___jp_1754_;
}
else
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1783_; 
v_a_1776_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1783_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1778_ = v___x_1775_;
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1775_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1781_; 
if (v_isShared_1779_ == 0)
{
v___x_1781_ = v___x_1778_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_a_1776_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
}
}
}
else
{
lean_object* v_a_1784_; lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1791_; 
lean_dec(v_a_1771_);
v_a_1784_ = lean_ctor_get(v___x_1772_, 0);
v_isSharedCheck_1791_ = !lean_is_exclusive(v___x_1772_);
if (v_isSharedCheck_1791_ == 0)
{
v___x_1786_ = v___x_1772_;
v_isShared_1787_ = v_isSharedCheck_1791_;
goto v_resetjp_1785_;
}
else
{
lean_inc(v_a_1784_);
lean_dec(v___x_1772_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1791_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v___x_1789_; 
if (v_isShared_1787_ == 0)
{
v___x_1789_ = v___x_1786_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1790_; 
v_reuseFailAlloc_1790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1790_, 0, v_a_1784_);
v___x_1789_ = v_reuseFailAlloc_1790_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
return v___x_1789_;
}
}
}
}
else
{
lean_object* v___x_1793_; 
lean_dec_ref(v_toField_1763_);
lean_dec(v_val_1758_);
if (v_isShared_1768_ == 0)
{
lean_ctor_set(v___x_1767_, 0, v_childInst_x3f_1743_);
v___x_1793_ = v___x_1767_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v_childInst_x3f_1743_);
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
else
{
lean_object* v_a_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1803_; 
lean_dec_ref(v_toField_1763_);
lean_dec(v_val_1758_);
lean_dec_ref(v_childInst_x3f_1743_);
v_a_1796_ = lean_ctor_get(v___x_1764_, 0);
v_isSharedCheck_1803_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1798_ = v___x_1764_;
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_a_1796_);
lean_dec(v___x_1764_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1801_; 
if (v_isShared_1799_ == 0)
{
v___x_1801_ = v___x_1798_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v_a_1796_);
v___x_1801_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
return v___x_1801_;
}
}
}
}
else
{
lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1811_; 
lean_dec_ref(v_leInst_x3f_1741_);
lean_dec_ref(v_type_1746_);
lean_dec(v_u_1745_);
lean_dec(v_toFieldName_1744_);
lean_dec(v_childInst_x3f_1743_);
v_isSharedCheck_1811_ = !lean_is_exclusive(v_parentInst_x3f_1742_);
if (v_isSharedCheck_1811_ == 0)
{
lean_object* v_unused_1812_; 
v_unused_1812_ = lean_ctor_get(v_parentInst_x3f_1742_, 0);
lean_dec(v_unused_1812_);
v___x_1805_ = v_parentInst_x3f_1742_;
v_isShared_1806_ = v_isSharedCheck_1811_;
goto v_resetjp_1804_;
}
else
{
lean_dec(v_parentInst_x3f_1742_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1811_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
lean_object* v___x_1807_; lean_object* v___x_1809_; 
v___x_1807_ = lean_box(0);
if (v_isShared_1806_ == 0)
{
lean_ctor_set_tag(v___x_1805_, 0);
lean_ctor_set(v___x_1805_, 0, v___x_1807_);
v___x_1809_ = v___x_1805_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v___x_1807_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
return v___x_1809_;
}
}
}
}
else
{
lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1820_; 
lean_dec_ref(v_type_1746_);
lean_dec(v_u_1745_);
lean_dec(v_toFieldName_1744_);
lean_dec(v_childInst_x3f_1743_);
lean_dec(v_parentInst_x3f_1742_);
v_isSharedCheck_1820_ = !lean_is_exclusive(v_leInst_x3f_1741_);
if (v_isSharedCheck_1820_ == 0)
{
lean_object* v_unused_1821_; 
v_unused_1821_ = lean_ctor_get(v_leInst_x3f_1741_, 0);
lean_dec(v_unused_1821_);
v___x_1814_ = v_leInst_x3f_1741_;
v_isShared_1815_ = v_isSharedCheck_1820_;
goto v_resetjp_1813_;
}
else
{
lean_dec(v_leInst_x3f_1741_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1820_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1816_; lean_object* v___x_1818_; 
v___x_1816_ = lean_box(0);
if (v_isShared_1815_ == 0)
{
lean_ctor_set_tag(v___x_1814_, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1816_);
v___x_1818_ = v___x_1814_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v___x_1816_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
}
}
else
{
lean_object* v___x_1822_; lean_object* v___x_1823_; 
lean_dec_ref(v_type_1746_);
lean_dec(v_u_1745_);
lean_dec(v_toFieldName_1744_);
lean_dec(v_childInst_x3f_1743_);
lean_dec(v_parentInst_x3f_1742_);
lean_dec(v_leInst_x3f_1741_);
v___x_1822_ = lean_box(0);
v___x_1823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1823_, 0, v___x_1822_);
return v___x_1823_;
}
v___jp_1754_:
{
lean_object* v___x_1755_; lean_object* v___x_1756_; 
v___x_1755_ = lean_box(0);
v___x_1756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1755_);
return v___x_1756_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg___boxed(lean_object* v_leInst_x3f_1824_, lean_object* v_parentInst_x3f_1825_, lean_object* v_childInst_x3f_1826_, lean_object* v_toFieldName_1827_, lean_object* v_u_1828_, lean_object* v_type_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_){
_start:
{
lean_object* v_res_1837_; 
v_res_1837_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(v_leInst_x3f_1824_, v_parentInst_x3f_1825_, v_childInst_x3f_1826_, v_toFieldName_1827_, v_u_1828_, v_type_1829_, v_a_1830_, v_a_1831_, v_a_1832_, v_a_1833_, v_a_1834_, v_a_1835_);
lean_dec(v_a_1835_);
lean_dec_ref(v_a_1834_);
lean_dec(v_a_1833_);
lean_dec_ref(v_a_1832_);
lean_dec(v_a_1831_);
lean_dec_ref(v_a_1830_);
return v_res_1837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f(lean_object* v_leInst_x3f_1838_, lean_object* v_parentInst_x3f_1839_, lean_object* v_childInst_x3f_1840_, lean_object* v_toFieldName_1841_, lean_object* v_u_1842_, lean_object* v_type_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_, lean_object* v_a_1848_, lean_object* v_a_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_){
_start:
{
lean_object* v___x_1855_; 
v___x_1855_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(v_leInst_x3f_1838_, v_parentInst_x3f_1839_, v_childInst_x3f_1840_, v_toFieldName_1841_, v_u_1842_, v_type_1843_, v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_);
return v___x_1855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___boxed(lean_object** _args){
lean_object* v_leInst_x3f_1856_ = _args[0];
lean_object* v_parentInst_x3f_1857_ = _args[1];
lean_object* v_childInst_x3f_1858_ = _args[2];
lean_object* v_toFieldName_1859_ = _args[3];
lean_object* v_u_1860_ = _args[4];
lean_object* v_type_1861_ = _args[5];
lean_object* v_a_1862_ = _args[6];
lean_object* v_a_1863_ = _args[7];
lean_object* v_a_1864_ = _args[8];
lean_object* v_a_1865_ = _args[9];
lean_object* v_a_1866_ = _args[10];
lean_object* v_a_1867_ = _args[11];
lean_object* v_a_1868_ = _args[12];
lean_object* v_a_1869_ = _args[13];
lean_object* v_a_1870_ = _args[14];
lean_object* v_a_1871_ = _args[15];
lean_object* v_a_1872_ = _args[16];
_start:
{
lean_object* v_res_1873_; 
v_res_1873_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f(v_leInst_x3f_1856_, v_parentInst_x3f_1857_, v_childInst_x3f_1858_, v_toFieldName_1859_, v_u_1860_, v_type_1861_, v_a_1862_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_, v_a_1868_, v_a_1869_, v_a_1870_, v_a_1871_);
lean_dec(v_a_1871_);
lean_dec_ref(v_a_1870_);
lean_dec(v_a_1869_);
lean_dec_ref(v_a_1868_);
lean_dec(v_a_1867_);
lean_dec_ref(v_a_1866_);
lean_dec(v_a_1865_);
lean_dec_ref(v_a_1864_);
lean_dec(v_a_1863_);
lean_dec(v_a_1862_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(lean_object* v_parentInst_1874_, lean_object* v_inst_1875_, lean_object* v_toFieldName_1876_, lean_object* v_u_1877_, lean_object* v_type_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_){
_start:
{
lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v_toField_1887_; lean_object* v___x_1888_; 
v___x_1884_ = lean_box(0);
v___x_1885_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1885_, 0, v_u_1877_);
lean_ctor_set(v___x_1885_, 1, v___x_1884_);
v___x_1886_ = l_Lean_mkConst(v_toFieldName_1876_, v___x_1885_);
v_toField_1887_ = l_Lean_mkAppB(v___x_1886_, v_type_1878_, v_inst_1875_);
v___x_1888_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(v_parentInst_1874_, v_toField_1887_, v_a_1879_, v_a_1880_, v_a_1881_, v_a_1882_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg___boxed(lean_object* v_parentInst_1889_, lean_object* v_inst_1890_, lean_object* v_toFieldName_1891_, lean_object* v_u_1892_, lean_object* v_type_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_){
_start:
{
lean_object* v_res_1899_; 
v_res_1899_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(v_parentInst_1889_, v_inst_1890_, v_toFieldName_1891_, v_u_1892_, v_type_1893_, v_a_1894_, v_a_1895_, v_a_1896_, v_a_1897_);
lean_dec(v_a_1897_);
lean_dec_ref(v_a_1896_);
lean_dec(v_a_1895_);
lean_dec_ref(v_a_1894_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq(lean_object* v_parentInst_1900_, lean_object* v_inst_1901_, lean_object* v_toFieldName_1902_, lean_object* v_u_1903_, lean_object* v_type_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_, lean_object* v_a_1914_){
_start:
{
lean_object* v___x_1916_; 
v___x_1916_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(v_parentInst_1900_, v_inst_1901_, v_toFieldName_1902_, v_u_1903_, v_type_1904_, v_a_1911_, v_a_1912_, v_a_1913_, v_a_1914_);
return v___x_1916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___boxed(lean_object* v_parentInst_1917_, lean_object* v_inst_1918_, lean_object* v_toFieldName_1919_, lean_object* v_u_1920_, lean_object* v_type_1921_, lean_object* v_a_1922_, lean_object* v_a_1923_, lean_object* v_a_1924_, lean_object* v_a_1925_, lean_object* v_a_1926_, lean_object* v_a_1927_, lean_object* v_a_1928_, lean_object* v_a_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_, lean_object* v_a_1932_){
_start:
{
lean_object* v_res_1933_; 
v_res_1933_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq(v_parentInst_1917_, v_inst_1918_, v_toFieldName_1919_, v_u_1920_, v_type_1921_, v_a_1922_, v_a_1923_, v_a_1924_, v_a_1925_, v_a_1926_, v_a_1927_, v_a_1928_, v_a_1929_, v_a_1930_, v_a_1931_);
lean_dec(v_a_1931_);
lean_dec_ref(v_a_1930_);
lean_dec(v_a_1929_);
lean_dec_ref(v_a_1928_);
lean_dec(v_a_1927_);
lean_dec_ref(v_a_1926_);
lean_dec(v_a_1925_);
lean_dec_ref(v_a_1924_);
lean_dec(v_a_1923_);
lean_dec(v_a_1922_);
return v_res_1933_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(lean_object* v_parentInst_1934_, lean_object* v_inst_1935_, lean_object* v_toFieldName_1936_, lean_object* v_toHeteroName_1937_, lean_object* v_u_1938_, lean_object* v_type_1939_, lean_object* v_extraType_x3f_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_){
_start:
{
lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v_toField_1949_; 
v___x_1946_ = lean_box(0);
v___x_1947_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1947_, 0, v_u_1938_);
lean_ctor_set(v___x_1947_, 1, v___x_1946_);
lean_inc_ref(v___x_1947_);
v___x_1948_ = l_Lean_mkConst(v_toFieldName_1936_, v___x_1947_);
lean_inc_ref(v_type_1939_);
v_toField_1949_ = l_Lean_mkAppB(v___x_1948_, v_type_1939_, v_inst_1935_);
if (lean_obj_tag(v_extraType_x3f_1940_) == 0)
{
lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; 
v___x_1950_ = l_Lean_mkConst(v_toHeteroName_1937_, v___x_1947_);
v___x_1951_ = l_Lean_mkAppB(v___x_1950_, v_type_1939_, v_toField_1949_);
v___x_1952_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(v_parentInst_1934_, v___x_1951_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_);
return v___x_1952_;
}
else
{
lean_object* v_val_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; 
v_val_1953_ = lean_ctor_get(v_extraType_x3f_1940_, 0);
lean_inc(v_val_1953_);
lean_dec_ref(v_extraType_x3f_1940_);
v___x_1954_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2);
v___x_1955_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1955_, 0, v___x_1954_);
lean_ctor_set(v___x_1955_, 1, v___x_1947_);
v___x_1956_ = l_Lean_mkConst(v_toHeteroName_1937_, v___x_1955_);
v___x_1957_ = l_Lean_mkApp3(v___x_1956_, v_val_1953_, v_type_1939_, v_toField_1949_);
v___x_1958_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(v_parentInst_1934_, v___x_1957_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_);
return v___x_1958_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg___boxed(lean_object* v_parentInst_1959_, lean_object* v_inst_1960_, lean_object* v_toFieldName_1961_, lean_object* v_toHeteroName_1962_, lean_object* v_u_1963_, lean_object* v_type_1964_, lean_object* v_extraType_x3f_1965_, lean_object* v_a_1966_, lean_object* v_a_1967_, lean_object* v_a_1968_, lean_object* v_a_1969_, lean_object* v_a_1970_){
_start:
{
lean_object* v_res_1971_; 
v_res_1971_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v_parentInst_1959_, v_inst_1960_, v_toFieldName_1961_, v_toHeteroName_1962_, v_u_1963_, v_type_1964_, v_extraType_x3f_1965_, v_a_1966_, v_a_1967_, v_a_1968_, v_a_1969_);
lean_dec(v_a_1969_);
lean_dec_ref(v_a_1968_);
lean_dec(v_a_1967_);
lean_dec_ref(v_a_1966_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq(lean_object* v_parentInst_1972_, lean_object* v_inst_1973_, lean_object* v_toFieldName_1974_, lean_object* v_toHeteroName_1975_, lean_object* v_u_1976_, lean_object* v_type_1977_, lean_object* v_extraType_x3f_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_, lean_object* v_a_1981_, lean_object* v_a_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_, lean_object* v_a_1985_, lean_object* v_a_1986_, lean_object* v_a_1987_, lean_object* v_a_1988_){
_start:
{
lean_object* v___x_1990_; 
v___x_1990_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v_parentInst_1972_, v_inst_1973_, v_toFieldName_1974_, v_toHeteroName_1975_, v_u_1976_, v_type_1977_, v_extraType_x3f_1978_, v_a_1985_, v_a_1986_, v_a_1987_, v_a_1988_);
return v___x_1990_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___boxed(lean_object** _args){
lean_object* v_parentInst_1991_ = _args[0];
lean_object* v_inst_1992_ = _args[1];
lean_object* v_toFieldName_1993_ = _args[2];
lean_object* v_toHeteroName_1994_ = _args[3];
lean_object* v_u_1995_ = _args[4];
lean_object* v_type_1996_ = _args[5];
lean_object* v_extraType_x3f_1997_ = _args[6];
lean_object* v_a_1998_ = _args[7];
lean_object* v_a_1999_ = _args[8];
lean_object* v_a_2000_ = _args[9];
lean_object* v_a_2001_ = _args[10];
lean_object* v_a_2002_ = _args[11];
lean_object* v_a_2003_ = _args[12];
lean_object* v_a_2004_ = _args[13];
lean_object* v_a_2005_ = _args[14];
lean_object* v_a_2006_ = _args[15];
lean_object* v_a_2007_ = _args[16];
lean_object* v_a_2008_ = _args[17];
_start:
{
lean_object* v_res_2009_; 
v_res_2009_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq(v_parentInst_1991_, v_inst_1992_, v_toFieldName_1993_, v_toHeteroName_1994_, v_u_1995_, v_type_1996_, v_extraType_x3f_1997_, v_a_1998_, v_a_1999_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_);
lean_dec(v_a_2007_);
lean_dec_ref(v_a_2006_);
lean_dec(v_a_2005_);
lean_dec_ref(v_a_2004_);
lean_dec(v_a_2003_);
lean_dec_ref(v_a_2002_);
lean_dec(v_a_2001_);
lean_dec_ref(v_a_2000_);
lean_dec(v_a_1999_);
lean_dec(v_a_1998_);
return v_res_2009_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_2010_; 
v___x_2010_ = lean_mk_string_unchecked("hSMul", 5, 5);
return v___x_2010_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2011_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__0);
v___x_2012_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__0);
v___x_2013_ = l_Lean_Name_mkStr2(v___x_2012_, v___x_2011_);
return v___x_2013_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg(lean_object* v_u_2014_, lean_object* v_type_2015_, lean_object* v_a_2016_, lean_object* v_a_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_){
_start:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v_smulType_2031_; lean_object* v___x_2032_; 
v___x_2023_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1);
v___x_2024_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2);
v___x_2025_ = lean_box(0);
lean_inc(v_u_2014_);
v___x_2026_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2026_, 0, v_u_2014_);
lean_ctor_set(v___x_2026_, 1, v___x_2025_);
v___x_2027_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2027_, 0, v_u_2014_);
lean_ctor_set(v___x_2027_, 1, v___x_2026_);
v___x_2028_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2028_, 0, v___x_2024_);
lean_ctor_set(v___x_2028_, 1, v___x_2027_);
lean_inc_ref(v___x_2028_);
v___x_2029_ = l_Lean_mkConst(v___x_2023_, v___x_2028_);
v___x_2030_ = l_Lean_Int_mkType;
lean_inc_ref_n(v_type_2015_, 2);
v_smulType_2031_ = l_Lean_mkApp3(v___x_2029_, v___x_2030_, v_type_2015_, v_type_2015_);
v___x_2032_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v_smulType_2031_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
if (lean_obj_tag(v___x_2032_) == 0)
{
lean_object* v_a_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2069_; 
v_a_2033_ = lean_ctor_get(v___x_2032_, 0);
v_isSharedCheck_2069_ = !lean_is_exclusive(v___x_2032_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2035_ = v___x_2032_;
v_isShared_2036_ = v_isSharedCheck_2069_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_a_2033_);
lean_dec(v___x_2032_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2069_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
if (lean_obj_tag(v_a_2033_) == 1)
{
lean_object* v_val_2037_; lean_object* v___x_2039_; uint8_t v_isShared_2040_; uint8_t v_isSharedCheck_2064_; 
lean_del_object(v___x_2035_);
v_val_2037_ = lean_ctor_get(v_a_2033_, 0);
v_isSharedCheck_2064_ = !lean_is_exclusive(v_a_2033_);
if (v_isSharedCheck_2064_ == 0)
{
v___x_2039_ = v_a_2033_;
v_isShared_2040_ = v_isSharedCheck_2064_;
goto v_resetjp_2038_;
}
else
{
lean_inc(v_val_2037_);
lean_dec(v_a_2033_);
v___x_2039_ = lean_box(0);
v_isShared_2040_ = v_isSharedCheck_2064_;
goto v_resetjp_2038_;
}
v_resetjp_2038_:
{
lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; 
v___x_2041_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1);
v___x_2042_ = l_Lean_mkConst(v___x_2041_, v___x_2028_);
lean_inc_ref(v_type_2015_);
v___x_2043_ = l_Lean_mkApp4(v___x_2042_, v___x_2030_, v_type_2015_, v_type_2015_, v_val_2037_);
v___x_2044_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2043_, v_a_2016_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
if (lean_obj_tag(v___x_2044_) == 0)
{
lean_object* v_a_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2055_; 
v_a_2045_ = lean_ctor_get(v___x_2044_, 0);
v_isSharedCheck_2055_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2055_ == 0)
{
v___x_2047_ = v___x_2044_;
v_isShared_2048_ = v_isSharedCheck_2055_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_a_2045_);
lean_dec(v___x_2044_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2055_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v___x_2050_; 
if (v_isShared_2040_ == 0)
{
lean_ctor_set(v___x_2039_, 0, v_a_2045_);
v___x_2050_ = v___x_2039_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v_a_2045_);
v___x_2050_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
lean_object* v___x_2052_; 
if (v_isShared_2048_ == 0)
{
lean_ctor_set(v___x_2047_, 0, v___x_2050_);
v___x_2052_ = v___x_2047_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v___x_2050_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
}
else
{
lean_object* v_a_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2063_; 
lean_del_object(v___x_2039_);
v_a_2056_ = lean_ctor_get(v___x_2044_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2058_ = v___x_2044_;
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_a_2056_);
lean_dec(v___x_2044_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2061_; 
if (v_isShared_2059_ == 0)
{
v___x_2061_ = v___x_2058_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v_a_2056_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
}
else
{
lean_object* v___x_2065_; lean_object* v___x_2067_; 
lean_dec(v_a_2033_);
lean_dec_ref(v___x_2028_);
lean_dec_ref(v_type_2015_);
v___x_2065_ = lean_box(0);
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 0, v___x_2065_);
v___x_2067_ = v___x_2035_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v___x_2065_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
return v___x_2067_;
}
}
}
}
else
{
lean_dec_ref(v___x_2028_);
lean_dec_ref(v_type_2015_);
return v___x_2032_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___boxed(lean_object* v_u_2070_, lean_object* v_type_2071_, lean_object* v_a_2072_, lean_object* v_a_2073_, lean_object* v_a_2074_, lean_object* v_a_2075_, lean_object* v_a_2076_, lean_object* v_a_2077_, lean_object* v_a_2078_){
_start:
{
lean_object* v_res_2079_; 
v_res_2079_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg(v_u_2070_, v_type_2071_, v_a_2072_, v_a_2073_, v_a_2074_, v_a_2075_, v_a_2076_, v_a_2077_);
lean_dec(v_a_2077_);
lean_dec_ref(v_a_2076_);
lean_dec(v_a_2075_);
lean_dec_ref(v_a_2074_);
lean_dec(v_a_2073_);
lean_dec_ref(v_a_2072_);
return v_res_2079_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f(lean_object* v_u_2080_, lean_object* v_type_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_){
_start:
{
lean_object* v___x_2093_; 
v___x_2093_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg(v_u_2080_, v_type_2081_, v_a_2086_, v_a_2087_, v_a_2088_, v_a_2089_, v_a_2090_, v_a_2091_);
return v___x_2093_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___boxed(lean_object* v_u_2094_, lean_object* v_type_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_, lean_object* v_a_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_, lean_object* v_a_2106_){
_start:
{
lean_object* v_res_2107_; 
v_res_2107_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f(v_u_2094_, v_type_2095_, v_a_2096_, v_a_2097_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_, v_a_2103_, v_a_2104_, v_a_2105_);
lean_dec(v_a_2105_);
lean_dec_ref(v_a_2104_);
lean_dec(v_a_2103_);
lean_dec_ref(v_a_2102_);
lean_dec(v_a_2101_);
lean_dec_ref(v_a_2100_);
lean_dec(v_a_2099_);
lean_dec_ref(v_a_2098_);
lean_dec(v_a_2097_);
lean_dec(v_a_2096_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___redArg(lean_object* v_u_2108_, lean_object* v_type_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_){
_start:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v_smulType_2125_; lean_object* v___x_2126_; 
v___x_2117_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1);
v___x_2118_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2);
v___x_2119_ = lean_box(0);
lean_inc(v_u_2108_);
v___x_2120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2120_, 0, v_u_2108_);
lean_ctor_set(v___x_2120_, 1, v___x_2119_);
v___x_2121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2121_, 0, v_u_2108_);
lean_ctor_set(v___x_2121_, 1, v___x_2120_);
v___x_2122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2118_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
lean_inc_ref(v___x_2122_);
v___x_2123_ = l_Lean_mkConst(v___x_2117_, v___x_2122_);
v___x_2124_ = l_Lean_Nat_mkType;
lean_inc_ref_n(v_type_2109_, 2);
v_smulType_2125_ = l_Lean_mkApp3(v___x_2123_, v___x_2124_, v_type_2109_, v_type_2109_);
v___x_2126_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v_smulType_2125_, v_a_2112_, v_a_2113_, v_a_2114_, v_a_2115_);
if (lean_obj_tag(v___x_2126_) == 0)
{
lean_object* v_a_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2163_; 
v_a_2127_ = lean_ctor_get(v___x_2126_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2129_ = v___x_2126_;
v_isShared_2130_ = v_isSharedCheck_2163_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_a_2127_);
lean_dec(v___x_2126_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2163_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
if (lean_obj_tag(v_a_2127_) == 1)
{
lean_object* v_val_2131_; lean_object* v___x_2133_; uint8_t v_isShared_2134_; uint8_t v_isSharedCheck_2158_; 
lean_del_object(v___x_2129_);
v_val_2131_ = lean_ctor_get(v_a_2127_, 0);
v_isSharedCheck_2158_ = !lean_is_exclusive(v_a_2127_);
if (v_isSharedCheck_2158_ == 0)
{
v___x_2133_ = v_a_2127_;
v_isShared_2134_ = v_isSharedCheck_2158_;
goto v_resetjp_2132_;
}
else
{
lean_inc(v_val_2131_);
lean_dec(v_a_2127_);
v___x_2133_ = lean_box(0);
v_isShared_2134_ = v_isSharedCheck_2158_;
goto v_resetjp_2132_;
}
v_resetjp_2132_:
{
lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; 
v___x_2135_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1);
v___x_2136_ = l_Lean_mkConst(v___x_2135_, v___x_2122_);
lean_inc_ref(v_type_2109_);
v___x_2137_ = l_Lean_mkApp4(v___x_2136_, v___x_2124_, v_type_2109_, v_type_2109_, v_val_2131_);
v___x_2138_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2137_, v_a_2110_, v_a_2111_, v_a_2112_, v_a_2113_, v_a_2114_, v_a_2115_);
if (lean_obj_tag(v___x_2138_) == 0)
{
lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2149_; 
v_a_2139_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2149_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2149_ == 0)
{
v___x_2141_ = v___x_2138_;
v_isShared_2142_ = v_isSharedCheck_2149_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v___x_2138_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2149_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2144_; 
if (v_isShared_2134_ == 0)
{
lean_ctor_set(v___x_2133_, 0, v_a_2139_);
v___x_2144_ = v___x_2133_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v_a_2139_);
v___x_2144_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
lean_object* v___x_2146_; 
if (v_isShared_2142_ == 0)
{
lean_ctor_set(v___x_2141_, 0, v___x_2144_);
v___x_2146_ = v___x_2141_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v___x_2144_);
v___x_2146_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
return v___x_2146_;
}
}
}
}
else
{
lean_object* v_a_2150_; lean_object* v___x_2152_; uint8_t v_isShared_2153_; uint8_t v_isSharedCheck_2157_; 
lean_del_object(v___x_2133_);
v_a_2150_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2157_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2157_ == 0)
{
v___x_2152_ = v___x_2138_;
v_isShared_2153_ = v_isSharedCheck_2157_;
goto v_resetjp_2151_;
}
else
{
lean_inc(v_a_2150_);
lean_dec(v___x_2138_);
v___x_2152_ = lean_box(0);
v_isShared_2153_ = v_isSharedCheck_2157_;
goto v_resetjp_2151_;
}
v_resetjp_2151_:
{
lean_object* v___x_2155_; 
if (v_isShared_2153_ == 0)
{
v___x_2155_ = v___x_2152_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2156_; 
v_reuseFailAlloc_2156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2156_, 0, v_a_2150_);
v___x_2155_ = v_reuseFailAlloc_2156_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
return v___x_2155_;
}
}
}
}
}
else
{
lean_object* v___x_2159_; lean_object* v___x_2161_; 
lean_dec(v_a_2127_);
lean_dec_ref(v___x_2122_);
lean_dec_ref(v_type_2109_);
v___x_2159_ = lean_box(0);
if (v_isShared_2130_ == 0)
{
lean_ctor_set(v___x_2129_, 0, v___x_2159_);
v___x_2161_ = v___x_2129_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v___x_2159_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
else
{
lean_dec_ref(v___x_2122_);
lean_dec_ref(v_type_2109_);
return v___x_2126_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___redArg___boxed(lean_object* v_u_2164_, lean_object* v_type_2165_, lean_object* v_a_2166_, lean_object* v_a_2167_, lean_object* v_a_2168_, lean_object* v_a_2169_, lean_object* v_a_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_){
_start:
{
lean_object* v_res_2173_; 
v_res_2173_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___redArg(v_u_2164_, v_type_2165_, v_a_2166_, v_a_2167_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_);
lean_dec(v_a_2171_);
lean_dec_ref(v_a_2170_);
lean_dec(v_a_2169_);
lean_dec_ref(v_a_2168_);
lean_dec(v_a_2167_);
lean_dec_ref(v_a_2166_);
return v_res_2173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f(lean_object* v_u_2174_, lean_object* v_type_2175_, lean_object* v_a_2176_, lean_object* v_a_2177_, lean_object* v_a_2178_, lean_object* v_a_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_){
_start:
{
lean_object* v___x_2187_; 
v___x_2187_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___redArg(v_u_2174_, v_type_2175_, v_a_2180_, v_a_2181_, v_a_2182_, v_a_2183_, v_a_2184_, v_a_2185_);
return v___x_2187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___boxed(lean_object* v_u_2188_, lean_object* v_type_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_, lean_object* v_a_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_){
_start:
{
lean_object* v_res_2201_; 
v_res_2201_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f(v_u_2188_, v_type_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_);
lean_dec(v_a_2199_);
lean_dec_ref(v_a_2198_);
lean_dec(v_a_2197_);
lean_dec_ref(v_a_2196_);
lean_dec(v_a_2195_);
lean_dec_ref(v_a_2194_);
lean_dec(v_a_2193_);
lean_dec_ref(v_a_2192_);
lean_dec(v_a_2191_);
lean_dec(v_a_2190_);
return v_res_2201_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_2202_, lean_object* v_x_2203_, lean_object* v_x_2204_, lean_object* v_x_2205_){
_start:
{
lean_object* v_ks_2206_; lean_object* v_vs_2207_; lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2231_; 
v_ks_2206_ = lean_ctor_get(v_x_2202_, 0);
v_vs_2207_ = lean_ctor_get(v_x_2202_, 1);
v_isSharedCheck_2231_ = !lean_is_exclusive(v_x_2202_);
if (v_isSharedCheck_2231_ == 0)
{
v___x_2209_ = v_x_2202_;
v_isShared_2210_ = v_isSharedCheck_2231_;
goto v_resetjp_2208_;
}
else
{
lean_inc(v_vs_2207_);
lean_inc(v_ks_2206_);
lean_dec(v_x_2202_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2231_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
lean_object* v___x_2211_; uint8_t v___x_2212_; 
v___x_2211_ = lean_array_get_size(v_ks_2206_);
v___x_2212_ = lean_nat_dec_lt(v_x_2203_, v___x_2211_);
if (v___x_2212_ == 0)
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2216_; 
lean_dec(v_x_2203_);
v___x_2213_ = lean_array_push(v_ks_2206_, v_x_2204_);
v___x_2214_ = lean_array_push(v_vs_2207_, v_x_2205_);
if (v_isShared_2210_ == 0)
{
lean_ctor_set(v___x_2209_, 1, v___x_2214_);
lean_ctor_set(v___x_2209_, 0, v___x_2213_);
v___x_2216_ = v___x_2209_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v___x_2213_);
lean_ctor_set(v_reuseFailAlloc_2217_, 1, v___x_2214_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
else
{
lean_object* v_k_x27_2218_; uint8_t v___x_2219_; 
v_k_x27_2218_ = lean_array_fget_borrowed(v_ks_2206_, v_x_2203_);
v___x_2219_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_2204_, v_k_x27_2218_);
if (v___x_2219_ == 0)
{
lean_object* v___x_2221_; 
if (v_isShared_2210_ == 0)
{
v___x_2221_ = v___x_2209_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_ks_2206_);
lean_ctor_set(v_reuseFailAlloc_2225_, 1, v_vs_2207_);
v___x_2221_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2222_ = lean_unsigned_to_nat(1u);
v___x_2223_ = lean_nat_add(v_x_2203_, v___x_2222_);
lean_dec(v_x_2203_);
v_x_2202_ = v___x_2221_;
v_x_2203_ = v___x_2223_;
goto _start;
}
}
else
{
lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2229_; 
v___x_2226_ = lean_array_fset(v_ks_2206_, v_x_2203_, v_x_2204_);
v___x_2227_ = lean_array_fset(v_vs_2207_, v_x_2203_, v_x_2205_);
lean_dec(v_x_2203_);
if (v_isShared_2210_ == 0)
{
lean_ctor_set(v___x_2209_, 1, v___x_2227_);
lean_ctor_set(v___x_2209_, 0, v___x_2226_);
v___x_2229_ = v___x_2209_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v___x_2226_);
lean_ctor_set(v_reuseFailAlloc_2230_, 1, v___x_2227_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_n_2232_, lean_object* v_k_2233_, lean_object* v_v_2234_){
_start:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2235_ = lean_unsigned_to_nat(0u);
v___x_2236_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1_spec__2___redArg(v_n_2232_, v___x_2235_, v_k_2233_, v_v_2234_);
return v___x_2236_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_2237_; size_t v___x_2238_; size_t v___x_2239_; 
v___x_2237_ = ((size_t)5ULL);
v___x_2238_ = ((size_t)1ULL);
v___x_2239_ = lean_usize_shift_left(v___x_2238_, v___x_2237_);
return v___x_2239_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_2240_; size_t v___x_2241_; size_t v___x_2242_; 
v___x_2240_ = ((size_t)1ULL);
v___x_2241_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__0);
v___x_2242_ = lean_usize_sub(v___x_2241_, v___x_2240_);
return v___x_2242_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_2243_; 
v___x_2243_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_2243_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg(lean_object* v_x_2244_, size_t v_x_2245_, size_t v_x_2246_, lean_object* v_x_2247_, lean_object* v_x_2248_){
_start:
{
if (lean_obj_tag(v_x_2244_) == 0)
{
lean_object* v_es_2249_; size_t v___x_2250_; size_t v___x_2251_; size_t v___x_2252_; size_t v___x_2253_; lean_object* v_j_2254_; lean_object* v___x_2255_; uint8_t v___x_2256_; 
v_es_2249_ = lean_ctor_get(v_x_2244_, 0);
v___x_2250_ = ((size_t)5ULL);
v___x_2251_ = ((size_t)1ULL);
v___x_2252_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1);
v___x_2253_ = lean_usize_land(v_x_2245_, v___x_2252_);
v_j_2254_ = lean_usize_to_nat(v___x_2253_);
v___x_2255_ = lean_array_get_size(v_es_2249_);
v___x_2256_ = lean_nat_dec_lt(v_j_2254_, v___x_2255_);
if (v___x_2256_ == 0)
{
lean_dec(v_j_2254_);
lean_dec(v_x_2248_);
lean_dec_ref(v_x_2247_);
return v_x_2244_;
}
else
{
lean_object* v___x_2258_; uint8_t v_isShared_2259_; uint8_t v_isSharedCheck_2293_; 
lean_inc_ref(v_es_2249_);
v_isSharedCheck_2293_ = !lean_is_exclusive(v_x_2244_);
if (v_isSharedCheck_2293_ == 0)
{
lean_object* v_unused_2294_; 
v_unused_2294_ = lean_ctor_get(v_x_2244_, 0);
lean_dec(v_unused_2294_);
v___x_2258_ = v_x_2244_;
v_isShared_2259_ = v_isSharedCheck_2293_;
goto v_resetjp_2257_;
}
else
{
lean_dec(v_x_2244_);
v___x_2258_ = lean_box(0);
v_isShared_2259_ = v_isSharedCheck_2293_;
goto v_resetjp_2257_;
}
v_resetjp_2257_:
{
lean_object* v_v_2260_; lean_object* v___x_2261_; lean_object* v_xs_x27_2262_; lean_object* v___y_2264_; 
v_v_2260_ = lean_array_fget(v_es_2249_, v_j_2254_);
v___x_2261_ = lean_box(0);
v_xs_x27_2262_ = lean_array_fset(v_es_2249_, v_j_2254_, v___x_2261_);
switch(lean_obj_tag(v_v_2260_))
{
case 0:
{
lean_object* v_key_2269_; lean_object* v_val_2270_; lean_object* v___x_2272_; uint8_t v_isShared_2273_; uint8_t v_isSharedCheck_2280_; 
v_key_2269_ = lean_ctor_get(v_v_2260_, 0);
v_val_2270_ = lean_ctor_get(v_v_2260_, 1);
v_isSharedCheck_2280_ = !lean_is_exclusive(v_v_2260_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2272_ = v_v_2260_;
v_isShared_2273_ = v_isSharedCheck_2280_;
goto v_resetjp_2271_;
}
else
{
lean_inc(v_val_2270_);
lean_inc(v_key_2269_);
lean_dec(v_v_2260_);
v___x_2272_ = lean_box(0);
v_isShared_2273_ = v_isSharedCheck_2280_;
goto v_resetjp_2271_;
}
v_resetjp_2271_:
{
uint8_t v___x_2274_; 
v___x_2274_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_2247_, v_key_2269_);
if (v___x_2274_ == 0)
{
lean_object* v___x_2275_; lean_object* v___x_2276_; 
lean_del_object(v___x_2272_);
v___x_2275_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2269_, v_val_2270_, v_x_2247_, v_x_2248_);
v___x_2276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2275_);
v___y_2264_ = v___x_2276_;
goto v___jp_2263_;
}
else
{
lean_object* v___x_2278_; 
lean_dec(v_val_2270_);
lean_dec(v_key_2269_);
if (v_isShared_2273_ == 0)
{
lean_ctor_set(v___x_2272_, 1, v_x_2248_);
lean_ctor_set(v___x_2272_, 0, v_x_2247_);
v___x_2278_ = v___x_2272_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v_x_2247_);
lean_ctor_set(v_reuseFailAlloc_2279_, 1, v_x_2248_);
v___x_2278_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
v___y_2264_ = v___x_2278_;
goto v___jp_2263_;
}
}
}
}
case 1:
{
lean_object* v_node_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2291_; 
v_node_2281_ = lean_ctor_get(v_v_2260_, 0);
v_isSharedCheck_2291_ = !lean_is_exclusive(v_v_2260_);
if (v_isSharedCheck_2291_ == 0)
{
v___x_2283_ = v_v_2260_;
v_isShared_2284_ = v_isSharedCheck_2291_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_node_2281_);
lean_dec(v_v_2260_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2291_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
size_t v___x_2285_; size_t v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2289_; 
v___x_2285_ = lean_usize_shift_right(v_x_2245_, v___x_2250_);
v___x_2286_ = lean_usize_add(v_x_2246_, v___x_2251_);
v___x_2287_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg(v_node_2281_, v___x_2285_, v___x_2286_, v_x_2247_, v_x_2248_);
if (v_isShared_2284_ == 0)
{
lean_ctor_set(v___x_2283_, 0, v___x_2287_);
v___x_2289_ = v___x_2283_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2290_; 
v_reuseFailAlloc_2290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2290_, 0, v___x_2287_);
v___x_2289_ = v_reuseFailAlloc_2290_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
v___y_2264_ = v___x_2289_;
goto v___jp_2263_;
}
}
}
default: 
{
lean_object* v___x_2292_; 
v___x_2292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2292_, 0, v_x_2247_);
lean_ctor_set(v___x_2292_, 1, v_x_2248_);
v___y_2264_ = v___x_2292_;
goto v___jp_2263_;
}
}
v___jp_2263_:
{
lean_object* v___x_2265_; lean_object* v___x_2267_; 
v___x_2265_ = lean_array_fset(v_xs_x27_2262_, v_j_2254_, v___y_2264_);
lean_dec(v_j_2254_);
if (v_isShared_2259_ == 0)
{
lean_ctor_set(v___x_2258_, 0, v___x_2265_);
v___x_2267_ = v___x_2258_;
goto v_reusejp_2266_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v___x_2265_);
v___x_2267_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2266_;
}
v_reusejp_2266_:
{
return v___x_2267_;
}
}
}
}
}
else
{
lean_object* v_ks_2295_; lean_object* v_vs_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2316_; 
v_ks_2295_ = lean_ctor_get(v_x_2244_, 0);
v_vs_2296_ = lean_ctor_get(v_x_2244_, 1);
v_isSharedCheck_2316_ = !lean_is_exclusive(v_x_2244_);
if (v_isSharedCheck_2316_ == 0)
{
v___x_2298_ = v_x_2244_;
v_isShared_2299_ = v_isSharedCheck_2316_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_vs_2296_);
lean_inc(v_ks_2295_);
lean_dec(v_x_2244_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2316_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___x_2301_; 
if (v_isShared_2299_ == 0)
{
v___x_2301_ = v___x_2298_;
goto v_reusejp_2300_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_ks_2295_);
lean_ctor_set(v_reuseFailAlloc_2315_, 1, v_vs_2296_);
v___x_2301_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2300_;
}
v_reusejp_2300_:
{
lean_object* v_newNode_2302_; uint8_t v___y_2304_; size_t v___x_2310_; uint8_t v___x_2311_; 
v_newNode_2302_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1___redArg(v___x_2301_, v_x_2247_, v_x_2248_);
v___x_2310_ = ((size_t)7ULL);
v___x_2311_ = lean_usize_dec_le(v___x_2310_, v_x_2246_);
if (v___x_2311_ == 0)
{
lean_object* v___x_2312_; lean_object* v___x_2313_; uint8_t v___x_2314_; 
v___x_2312_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2302_);
v___x_2313_ = lean_unsigned_to_nat(4u);
v___x_2314_ = lean_nat_dec_lt(v___x_2312_, v___x_2313_);
lean_dec(v___x_2312_);
v___y_2304_ = v___x_2314_;
goto v___jp_2303_;
}
else
{
v___y_2304_ = v___x_2311_;
goto v___jp_2303_;
}
v___jp_2303_:
{
if (v___y_2304_ == 0)
{
lean_object* v_ks_2305_; lean_object* v_vs_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; 
v_ks_2305_ = lean_ctor_get(v_newNode_2302_, 0);
lean_inc_ref(v_ks_2305_);
v_vs_2306_ = lean_ctor_get(v_newNode_2302_, 1);
lean_inc_ref(v_vs_2306_);
lean_dec_ref(v_newNode_2302_);
v___x_2307_ = lean_unsigned_to_nat(0u);
v___x_2308_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__2);
v___x_2309_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___redArg(v_x_2246_, v_ks_2305_, v_vs_2306_, v___x_2307_, v___x_2308_);
lean_dec_ref(v_vs_2306_);
lean_dec_ref(v_ks_2305_);
return v___x_2309_;
}
else
{
return v_newNode_2302_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___redArg(size_t v_depth_2317_, lean_object* v_keys_2318_, lean_object* v_vals_2319_, lean_object* v_i_2320_, lean_object* v_entries_2321_){
_start:
{
lean_object* v___x_2322_; uint8_t v___x_2323_; 
v___x_2322_ = lean_array_get_size(v_keys_2318_);
v___x_2323_ = lean_nat_dec_lt(v_i_2320_, v___x_2322_);
if (v___x_2323_ == 0)
{
lean_dec(v_i_2320_);
return v_entries_2321_;
}
else
{
lean_object* v_k_2324_; lean_object* v_v_2325_; uint64_t v___x_2326_; size_t v_h_2327_; size_t v___x_2328_; lean_object* v___x_2329_; size_t v___x_2330_; size_t v___x_2331_; size_t v___x_2332_; size_t v_h_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; 
v_k_2324_ = lean_array_fget_borrowed(v_keys_2318_, v_i_2320_);
v_v_2325_ = lean_array_fget_borrowed(v_vals_2319_, v_i_2320_);
v___x_2326_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_k_2324_);
v_h_2327_ = lean_uint64_to_usize(v___x_2326_);
v___x_2328_ = ((size_t)5ULL);
v___x_2329_ = lean_unsigned_to_nat(1u);
v___x_2330_ = ((size_t)1ULL);
v___x_2331_ = lean_usize_sub(v_depth_2317_, v___x_2330_);
v___x_2332_ = lean_usize_mul(v___x_2328_, v___x_2331_);
v_h_2333_ = lean_usize_shift_right(v_h_2327_, v___x_2332_);
v___x_2334_ = lean_nat_add(v_i_2320_, v___x_2329_);
lean_dec(v_i_2320_);
lean_inc(v_v_2325_);
lean_inc(v_k_2324_);
v___x_2335_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg(v_entries_2321_, v_h_2333_, v_depth_2317_, v_k_2324_, v_v_2325_);
v_i_2320_ = v___x_2334_;
v_entries_2321_ = v___x_2335_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_2337_, lean_object* v_keys_2338_, lean_object* v_vals_2339_, lean_object* v_i_2340_, lean_object* v_entries_2341_){
_start:
{
size_t v_depth_boxed_2342_; lean_object* v_res_2343_; 
v_depth_boxed_2342_ = lean_unbox_usize(v_depth_2337_);
lean_dec(v_depth_2337_);
v_res_2343_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___redArg(v_depth_boxed_2342_, v_keys_2338_, v_vals_2339_, v_i_2340_, v_entries_2341_);
lean_dec_ref(v_vals_2339_);
lean_dec_ref(v_keys_2338_);
return v_res_2343_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_2344_, lean_object* v_x_2345_, lean_object* v_x_2346_, lean_object* v_x_2347_, lean_object* v_x_2348_){
_start:
{
size_t v_x_575187__boxed_2349_; size_t v_x_575188__boxed_2350_; lean_object* v_res_2351_; 
v_x_575187__boxed_2349_ = lean_unbox_usize(v_x_2345_);
lean_dec(v_x_2345_);
v_x_575188__boxed_2350_ = lean_unbox_usize(v_x_2346_);
lean_dec(v_x_2346_);
v_res_2351_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg(v_x_2344_, v_x_575187__boxed_2349_, v_x_575188__boxed_2350_, v_x_2347_, v_x_2348_);
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0___redArg(lean_object* v_x_2352_, lean_object* v_x_2353_, lean_object* v_x_2354_){
_start:
{
uint64_t v___x_2355_; size_t v___x_2356_; size_t v___x_2357_; lean_object* v___x_2358_; 
v___x_2355_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_2353_);
v___x_2356_ = lean_uint64_to_usize(v___x_2355_);
v___x_2357_ = ((size_t)1ULL);
v___x_2358_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg(v_x_2352_, v___x_2356_, v___x_2357_, v_x_2353_, v_x_2354_);
return v___x_2358_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__0(lean_object* v_type_2359_, lean_object* v_s_2360_){
_start:
{
lean_object* v_structs_2361_; lean_object* v_typeIdOf_2362_; lean_object* v_exprToStructId_2363_; lean_object* v_exprToStructIdEntries_2364_; lean_object* v_forbiddenNatModules_2365_; lean_object* v_natStructs_2366_; lean_object* v_natTypeIdOf_2367_; lean_object* v_exprToNatStructId_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2377_; 
v_structs_2361_ = lean_ctor_get(v_s_2360_, 0);
v_typeIdOf_2362_ = lean_ctor_get(v_s_2360_, 1);
v_exprToStructId_2363_ = lean_ctor_get(v_s_2360_, 2);
v_exprToStructIdEntries_2364_ = lean_ctor_get(v_s_2360_, 3);
v_forbiddenNatModules_2365_ = lean_ctor_get(v_s_2360_, 4);
v_natStructs_2366_ = lean_ctor_get(v_s_2360_, 5);
v_natTypeIdOf_2367_ = lean_ctor_get(v_s_2360_, 6);
v_exprToNatStructId_2368_ = lean_ctor_get(v_s_2360_, 7);
v_isSharedCheck_2377_ = !lean_is_exclusive(v_s_2360_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2370_ = v_s_2360_;
v_isShared_2371_ = v_isSharedCheck_2377_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_exprToNatStructId_2368_);
lean_inc(v_natTypeIdOf_2367_);
lean_inc(v_natStructs_2366_);
lean_inc(v_forbiddenNatModules_2365_);
lean_inc(v_exprToStructIdEntries_2364_);
lean_inc(v_exprToStructId_2363_);
lean_inc(v_typeIdOf_2362_);
lean_inc(v_structs_2361_);
lean_dec(v_s_2360_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2377_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2375_; 
v___x_2372_ = lean_box(0);
v___x_2373_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0___redArg(v_forbiddenNatModules_2365_, v_type_2359_, v___x_2372_);
if (v_isShared_2371_ == 0)
{
lean_ctor_set(v___x_2370_, 4, v___x_2373_);
v___x_2375_ = v___x_2370_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_structs_2361_);
lean_ctor_set(v_reuseFailAlloc_2376_, 1, v_typeIdOf_2362_);
lean_ctor_set(v_reuseFailAlloc_2376_, 2, v_exprToStructId_2363_);
lean_ctor_set(v_reuseFailAlloc_2376_, 3, v_exprToStructIdEntries_2364_);
lean_ctor_set(v_reuseFailAlloc_2376_, 4, v___x_2373_);
lean_ctor_set(v_reuseFailAlloc_2376_, 5, v_natStructs_2366_);
lean_ctor_set(v_reuseFailAlloc_2376_, 6, v_natTypeIdOf_2367_);
lean_ctor_set(v_reuseFailAlloc_2376_, 7, v_exprToNatStructId_2368_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__1(lean_object* v_a_2378_, lean_object* v_00___2379_){
_start:
{
if (lean_obj_tag(v_a_2378_) == 0)
{
uint8_t v___x_2380_; 
v___x_2380_ = 0;
return v___x_2380_;
}
else
{
uint8_t v___x_2381_; 
v___x_2381_ = 1;
return v___x_2381_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__1___boxed(lean_object* v_a_2382_, lean_object* v_00___2383_){
_start:
{
uint8_t v_res_2384_; lean_object* v_r_2385_; 
v_res_2384_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__1(v_a_2382_, v_00___2383_);
lean_dec(v_a_2382_);
v_r_2385_ = lean_box(v_res_2384_);
return v_r_2385_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__2(lean_object* v___x_2386_, lean_object* v_s_2387_){
_start:
{
lean_object* v_structs_2388_; lean_object* v_typeIdOf_2389_; lean_object* v_exprToStructId_2390_; lean_object* v_exprToStructIdEntries_2391_; lean_object* v_forbiddenNatModules_2392_; lean_object* v_natStructs_2393_; lean_object* v_natTypeIdOf_2394_; lean_object* v_exprToNatStructId_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2403_; 
v_structs_2388_ = lean_ctor_get(v_s_2387_, 0);
v_typeIdOf_2389_ = lean_ctor_get(v_s_2387_, 1);
v_exprToStructId_2390_ = lean_ctor_get(v_s_2387_, 2);
v_exprToStructIdEntries_2391_ = lean_ctor_get(v_s_2387_, 3);
v_forbiddenNatModules_2392_ = lean_ctor_get(v_s_2387_, 4);
v_natStructs_2393_ = lean_ctor_get(v_s_2387_, 5);
v_natTypeIdOf_2394_ = lean_ctor_get(v_s_2387_, 6);
v_exprToNatStructId_2395_ = lean_ctor_get(v_s_2387_, 7);
v_isSharedCheck_2403_ = !lean_is_exclusive(v_s_2387_);
if (v_isSharedCheck_2403_ == 0)
{
v___x_2397_ = v_s_2387_;
v_isShared_2398_ = v_isSharedCheck_2403_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_exprToNatStructId_2395_);
lean_inc(v_natTypeIdOf_2394_);
lean_inc(v_natStructs_2393_);
lean_inc(v_forbiddenNatModules_2392_);
lean_inc(v_exprToStructIdEntries_2391_);
lean_inc(v_exprToStructId_2390_);
lean_inc(v_typeIdOf_2389_);
lean_inc(v_structs_2388_);
lean_dec(v_s_2387_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2403_;
goto v_resetjp_2396_;
}
v_resetjp_2396_:
{
lean_object* v___x_2399_; lean_object* v___x_2401_; 
v___x_2399_ = lean_array_push(v_structs_2388_, v___x_2386_);
if (v_isShared_2398_ == 0)
{
lean_ctor_set(v___x_2397_, 0, v___x_2399_);
v___x_2401_ = v___x_2397_;
goto v_reusejp_2400_;
}
else
{
lean_object* v_reuseFailAlloc_2402_; 
v_reuseFailAlloc_2402_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2402_, 0, v___x_2399_);
lean_ctor_set(v_reuseFailAlloc_2402_, 1, v_typeIdOf_2389_);
lean_ctor_set(v_reuseFailAlloc_2402_, 2, v_exprToStructId_2390_);
lean_ctor_set(v_reuseFailAlloc_2402_, 3, v_exprToStructIdEntries_2391_);
lean_ctor_set(v_reuseFailAlloc_2402_, 4, v_forbiddenNatModules_2392_);
lean_ctor_set(v_reuseFailAlloc_2402_, 5, v_natStructs_2393_);
lean_ctor_set(v_reuseFailAlloc_2402_, 6, v_natTypeIdOf_2394_);
lean_ctor_set(v_reuseFailAlloc_2402_, 7, v_exprToNatStructId_2395_);
v___x_2401_ = v_reuseFailAlloc_2402_;
goto v_reusejp_2400_;
}
v_reusejp_2400_:
{
return v___x_2401_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0(void){
_start:
{
lean_object* v___x_2404_; 
v___x_2404_ = lean_mk_string_unchecked("LE", 2, 2);
return v___x_2404_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1(void){
_start:
{
lean_object* v___x_2405_; lean_object* v___x_2406_; 
v___x_2405_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0);
v___x_2406_ = l_Lean_Name_mkStr1(v___x_2405_);
return v___x_2406_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__2(void){
_start:
{
lean_object* v___x_2407_; 
v___x_2407_ = lean_mk_string_unchecked("LT", 2, 2);
return v___x_2407_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__3(void){
_start:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; 
v___x_2408_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__2);
v___x_2409_ = l_Lean_Name_mkStr1(v___x_2408_);
return v___x_2409_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__4(void){
_start:
{
lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2410_ = lean_unsigned_to_nat(32u);
v___x_2411_ = lean_mk_empty_array_with_capacity(v___x_2410_);
v___x_2412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2412_, 0, v___x_2411_);
return v___x_2412_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__5(void){
_start:
{
lean_object* v___x_2413_; 
v___x_2413_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2413_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__6(void){
_start:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; 
v___x_2414_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__5, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__5);
v___x_2415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2415_, 0, v___x_2414_);
return v___x_2415_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__7(void){
_start:
{
lean_object* v___x_2416_; 
v___x_2416_ = lean_mk_string_unchecked("HMul", 4, 4);
return v___x_2416_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__8(void){
_start:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2417_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__7, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__7);
v___x_2418_ = l_Lean_Name_mkStr1(v___x_2417_);
return v___x_2418_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__9(void){
_start:
{
lean_object* v___x_2419_; 
v___x_2419_ = lean_mk_string_unchecked("hMul", 4, 4);
return v___x_2419_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__10(void){
_start:
{
lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; 
v___x_2420_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__9, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__9);
v___x_2421_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__7, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__7);
v___x_2422_ = l_Lean_Name_mkStr2(v___x_2421_, v___x_2420_);
return v___x_2422_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__11(void){
_start:
{
lean_object* v___x_2423_; 
v___x_2423_ = lean_mk_string_unchecked("lt", 2, 2);
return v___x_2423_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__12(void){
_start:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2424_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__11, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__11_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__11);
v___x_2425_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__2);
v___x_2426_ = l_Lean_Name_mkStr2(v___x_2425_, v___x_2424_);
return v___x_2426_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__13(void){
_start:
{
lean_object* v___x_2427_; 
v___x_2427_ = lean_mk_string_unchecked("Zero", 4, 4);
return v___x_2427_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__14(void){
_start:
{
lean_object* v___x_2428_; lean_object* v___x_2429_; 
v___x_2428_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__13, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__13);
v___x_2429_ = l_Lean_Name_mkStr1(v___x_2428_);
return v___x_2429_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__15(void){
_start:
{
lean_object* v___x_2430_; 
v___x_2430_ = lean_mk_string_unchecked("zero", 4, 4);
return v___x_2430_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__16(void){
_start:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; 
v___x_2431_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__15, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__15_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__15);
v___x_2432_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__13, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__13);
v___x_2433_ = l_Lean_Name_mkStr2(v___x_2432_, v___x_2431_);
return v___x_2433_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__17(void){
_start:
{
lean_object* v___x_2434_; 
v___x_2434_ = lean_mk_string_unchecked("OfNat", 5, 5);
return v___x_2434_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__18(void){
_start:
{
lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2435_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__17, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__17_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__17);
v___x_2436_ = l_Lean_Name_mkStr1(v___x_2435_);
return v___x_2436_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__19(void){
_start:
{
lean_object* v___x_2437_; lean_object* v___x_2438_; 
v___x_2437_ = lean_unsigned_to_nat(0u);
v___x_2438_ = l_Lean_mkRawNatLit(v___x_2437_);
return v___x_2438_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__20(void){
_start:
{
lean_object* v___x_2439_; 
v___x_2439_ = lean_mk_string_unchecked("ofNat", 5, 5);
return v___x_2439_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__21(void){
_start:
{
lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; 
v___x_2440_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__20, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__20_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__20);
v___x_2441_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__17, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__17_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__17);
v___x_2442_ = l_Lean_Name_mkStr2(v___x_2441_, v___x_2440_);
return v___x_2442_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__22(void){
_start:
{
lean_object* v___x_2443_; 
v___x_2443_ = lean_mk_string_unchecked("HSub", 4, 4);
return v___x_2443_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__23(void){
_start:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2444_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__22, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__22_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__22);
v___x_2445_ = l_Lean_Name_mkStr1(v___x_2444_);
return v___x_2445_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__24(void){
_start:
{
lean_object* v___x_2446_; 
v___x_2446_ = lean_mk_string_unchecked("hSub", 4, 4);
return v___x_2446_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__25(void){
_start:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2447_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__24, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__24_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__24);
v___x_2448_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__22, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__22_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__22);
v___x_2449_ = l_Lean_Name_mkStr2(v___x_2448_, v___x_2447_);
return v___x_2449_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__26(void){
_start:
{
lean_object* v___x_2450_; 
v___x_2450_ = lean_mk_string_unchecked("Neg", 3, 3);
return v___x_2450_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__27(void){
_start:
{
lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2451_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__26, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__26_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__26);
v___x_2452_ = l_Lean_Name_mkStr1(v___x_2451_);
return v___x_2452_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__28(void){
_start:
{
lean_object* v___x_2453_; 
v___x_2453_ = lean_mk_string_unchecked("neg", 3, 3);
return v___x_2453_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__29(void){
_start:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
v___x_2454_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__28, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__28_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__28);
v___x_2455_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__26, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__26_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__26);
v___x_2456_ = l_Lean_Name_mkStr2(v___x_2455_, v___x_2454_);
return v___x_2456_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__30(void){
_start:
{
lean_object* v___x_2457_; 
v___x_2457_ = lean_mk_string_unchecked("AddCommMonoid", 13, 13);
return v___x_2457_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__31(void){
_start:
{
lean_object* v___x_2458_; 
v___x_2458_ = lean_mk_string_unchecked("toZero", 6, 6);
return v___x_2458_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__32(void){
_start:
{
lean_object* v___x_2459_; 
v___x_2459_ = lean_mk_string_unchecked("toAdd", 5, 5);
return v___x_2459_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__33(void){
_start:
{
lean_object* v___x_2460_; 
v___x_2460_ = lean_mk_string_unchecked("instHAdd", 8, 8);
return v___x_2460_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__34(void){
_start:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2461_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__33, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__33_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__33);
v___x_2462_ = l_Lean_Name_mkStr1(v___x_2461_);
return v___x_2462_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__35(void){
_start:
{
lean_object* v___x_2463_; 
v___x_2463_ = lean_mk_string_unchecked("toSub", 5, 5);
return v___x_2463_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__36(void){
_start:
{
lean_object* v___x_2464_; 
v___x_2464_ = lean_mk_string_unchecked("instHSub", 8, 8);
return v___x_2464_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__37(void){
_start:
{
lean_object* v___x_2465_; lean_object* v___x_2466_; 
v___x_2465_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__36, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__36_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__36);
v___x_2466_ = l_Lean_Name_mkStr1(v___x_2465_);
return v___x_2466_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__38(void){
_start:
{
lean_object* v___x_2467_; 
v___x_2467_ = lean_mk_string_unchecked("toNeg", 5, 5);
return v___x_2467_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__39(void){
_start:
{
lean_object* v___x_2468_; 
v___x_2468_ = lean_mk_string_unchecked("zsmul", 5, 5);
return v___x_2468_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__40(void){
_start:
{
lean_object* v___x_2469_; 
v___x_2469_ = lean_mk_string_unchecked("instHSMul", 9, 9);
return v___x_2469_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__41(void){
_start:
{
lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2470_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__40, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__40_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__40);
v___x_2471_ = l_Lean_Name_mkStr1(v___x_2470_);
return v___x_2471_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__42(void){
_start:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2472_ = l_Lean_Int_mkType;
v___x_2473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2473_, 0, v___x_2472_);
return v___x_2473_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__43(void){
_start:
{
lean_object* v___x_2474_; 
v___x_2474_ = lean_mk_string_unchecked("nsmul", 5, 5);
return v___x_2474_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__44(void){
_start:
{
lean_object* v___x_2475_; lean_object* v___x_2476_; 
v___x_2475_ = l_Lean_Nat_mkType;
v___x_2476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2476_, 0, v___x_2475_);
return v___x_2476_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__45(void){
_start:
{
lean_object* v___x_2477_; 
v___x_2477_ = lean_mk_string_unchecked("le", 2, 2);
return v___x_2477_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__46(void){
_start:
{
lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; 
v___x_2478_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__45, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__45_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__45);
v___x_2479_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0);
v___x_2480_ = l_Lean_Name_mkStr2(v___x_2479_, v___x_2478_);
return v___x_2480_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__47(void){
_start:
{
lean_object* v___x_2481_; 
v___x_2481_ = lean_mk_string_unchecked("Std", 3, 3);
return v___x_2481_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__48(void){
_start:
{
lean_object* v___x_2482_; 
v___x_2482_ = lean_mk_string_unchecked("IsPartialOrder", 14, 14);
return v___x_2482_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__49(void){
_start:
{
lean_object* v___x_2483_; 
v___x_2483_ = lean_mk_string_unchecked("toIsPreorder", 12, 12);
return v___x_2483_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__50(void){
_start:
{
lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
v___x_2484_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__49, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__49_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__49);
v___x_2485_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__48, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__48_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__48);
v___x_2486_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__47, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__47_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__47);
v___x_2487_ = l_Lean_Name_mkStr3(v___x_2486_, v___x_2485_, v___x_2484_);
return v___x_2487_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__51(void){
_start:
{
lean_object* v___x_2488_; 
v___x_2488_ = lean_mk_string_unchecked("IsLinearOrder", 13, 13);
return v___x_2488_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__52(void){
_start:
{
lean_object* v___x_2489_; 
v___x_2489_ = lean_mk_string_unchecked("toIsPartialOrder", 16, 16);
return v___x_2489_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__53(void){
_start:
{
lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2490_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__52, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__52_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__52);
v___x_2491_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__51, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__51_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__51);
v___x_2492_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__47, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__47_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__47);
v___x_2493_ = l_Lean_Name_mkStr3(v___x_2492_, v___x_2491_, v___x_2490_);
return v___x_2493_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__54(void){
_start:
{
lean_object* v___x_2494_; 
v___x_2494_ = lean_mk_string_unchecked("toAddCommGroup", 14, 14);
return v___x_2494_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__55(void){
_start:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2495_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__54, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__54_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__54);
v___x_2496_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2);
v___x_2497_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1);
v___x_2498_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0);
v___x_2499_ = l_Lean_Name_mkStr4(v___x_2498_, v___x_2497_, v___x_2496_, v___x_2495_);
return v___x_2499_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__56(void){
_start:
{
lean_object* v___x_2500_; 
v___x_2500_ = lean_mk_string_unchecked("AddCommGroup", 12, 12);
return v___x_2500_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__57(void){
_start:
{
lean_object* v___x_2501_; 
v___x_2501_ = lean_mk_string_unchecked("toAddCommMonoid", 15, 15);
return v___x_2501_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__58(void){
_start:
{
lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; 
v___x_2502_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__57, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__57_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__57);
v___x_2503_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__56, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__56_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__56);
v___x_2504_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1);
v___x_2505_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0);
v___x_2506_ = l_Lean_Name_mkStr4(v___x_2505_, v___x_2504_, v___x_2503_, v___x_2502_);
return v___x_2506_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__59(void){
_start:
{
lean_object* v___x_2507_; 
v___x_2507_ = lean_mk_string_unchecked("Field", 5, 5);
return v___x_2507_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__60(void){
_start:
{
lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2508_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__59, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__59_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__59);
v___x_2509_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1);
v___x_2510_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0);
v___x_2511_ = l_Lean_Name_mkStr3(v___x_2510_, v___x_2509_, v___x_2508_);
return v___x_2511_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__61(void){
_start:
{
lean_object* v___x_2512_; 
v___x_2512_ = lean_mk_string_unchecked("HAdd", 4, 4);
return v___x_2512_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__62(void){
_start:
{
lean_object* v___x_2513_; lean_object* v___x_2514_; 
v___x_2513_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__61, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__61_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__61);
v___x_2514_ = l_Lean_Name_mkStr1(v___x_2513_);
return v___x_2514_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__63(void){
_start:
{
lean_object* v___x_2515_; 
v___x_2515_ = lean_mk_string_unchecked("hAdd", 4, 4);
return v___x_2515_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__64(void){
_start:
{
lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; 
v___x_2516_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__63, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__63_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__63);
v___x_2517_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__61, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__61_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__61);
v___x_2518_ = l_Lean_Name_mkStr2(v___x_2517_, v___x_2516_);
return v___x_2518_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__65(void){
_start:
{
lean_object* v___x_2519_; 
v___x_2519_ = lean_mk_string_unchecked("OrderedAdd", 10, 10);
return v___x_2519_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66(void){
_start:
{
lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; 
v___x_2520_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__65, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__65_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__65);
v___x_2521_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1);
v___x_2522_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0);
v___x_2523_ = l_Lean_Name_mkStr3(v___x_2522_, v___x_2521_, v___x_2520_);
return v___x_2523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f(lean_object* v_type_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_, lean_object* v_a_2531_, lean_object* v_a_2532_, lean_object* v_a_2533_, lean_object* v_a_2534_){
_start:
{
lean_object* v___y_2537_; lean_object* v___y_2541_; lean_object* v___y_2542_; lean_object* v___y_2552_; lean_object* v___y_2553_; uint8_t v___y_2554_; lean_object* v___y_2555_; lean_object* v___y_2556_; lean_object* v___y_2557_; lean_object* v___y_2558_; lean_object* v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2561_; lean_object* v___y_2562_; lean_object* v___y_2563_; lean_object* v___y_2564_; lean_object* v___y_2577_; lean_object* v___y_2578_; uint8_t v___y_2579_; lean_object* v___y_2580_; lean_object* v___y_2581_; lean_object* v___y_2582_; lean_object* v___y_2583_; lean_object* v___y_2584_; lean_object* v___y_2585_; lean_object* v___y_2586_; lean_object* v___y_2587_; lean_object* v___y_2588_; lean_object* v___y_2589_; lean_object* v___x_2602_; 
lean_inc_ref(v_type_2524_);
v___x_2602_ = l_Lean_Meta_getDecLevel_x3f(v_type_2524_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_);
if (lean_obj_tag(v___x_2602_) == 0)
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_3520_; 
v_a_2603_ = lean_ctor_get(v___x_2602_, 0);
v_isSharedCheck_3520_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_3520_ == 0)
{
v___x_2605_ = v___x_2602_;
v_isShared_2606_ = v_isSharedCheck_3520_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2602_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_3520_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
if (lean_obj_tag(v_a_2603_) == 1)
{
lean_object* v_val_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_3515_; 
lean_del_object(v___x_2605_);
v_val_2607_ = lean_ctor_get(v_a_2603_, 0);
v_isSharedCheck_3515_ = !lean_is_exclusive(v_a_2603_);
if (v_isSharedCheck_3515_ == 0)
{
v___x_2609_ = v_a_2603_;
v_isShared_2610_ = v_isSharedCheck_3515_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_val_2607_);
lean_dec(v_a_2603_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_3515_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2611_; 
lean_inc_ref(v_type_2524_);
v___x_2611_ = l_Lean_Meta_Grind_Arith_CommRing_getCommRingId_x3f(v_type_2524_, v_a_2525_, v_a_2526_, v_a_2527_, v_a_2528_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_);
if (lean_obj_tag(v___x_2611_) == 0)
{
lean_object* v_a_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_3514_; 
v_a_2612_ = lean_ctor_get(v___x_2611_, 0);
v_isSharedCheck_3514_ = !lean_is_exclusive(v___x_2611_);
if (v_isSharedCheck_3514_ == 0)
{
v___x_2614_ = v___x_2611_;
v_isShared_2615_ = v_isSharedCheck_3514_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_a_2612_);
lean_dec(v___x_2611_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_3514_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2616_; lean_object* v___x_2617_; 
v___x_2616_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_2617_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v___x_2616_, v_val_2607_, v_type_2524_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_);
if (lean_obj_tag(v___x_2617_) == 0)
{
lean_object* v_a_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; 
v_a_2618_ = lean_ctor_get(v___x_2617_, 0);
lean_inc(v_a_2618_);
lean_dec_ref(v___x_2617_);
v___x_2619_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__3);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_2620_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v___x_2619_, v_val_2607_, v_type_2524_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_);
if (lean_obj_tag(v___x_2620_) == 0)
{
lean_object* v_a_2621_; lean_object* v___x_2622_; 
v_a_2621_ = lean_ctor_get(v___x_2620_, 0);
lean_inc_n(v_a_2621_, 2);
lean_dec_ref(v___x_2620_);
lean_inc(v_a_2618_);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_2622_ = l_Lean_Meta_Grind_mkLawfulOrderLTInst_x3f___redArg(v_val_2607_, v_type_2524_, v_a_2621_, v_a_2618_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_);
if (lean_obj_tag(v___x_2622_) == 0)
{
lean_object* v_a_2623_; lean_object* v___y_2625_; lean_object* v___y_2626_; lean_object* v___y_2627_; lean_object* v___y_2628_; lean_object* v___y_2629_; uint8_t v___y_2630_; lean_object* v___y_2631_; lean_object* v___y_2632_; lean_object* v___y_2633_; lean_object* v___y_2634_; lean_object* v___y_2635_; lean_object* v___y_2636_; lean_object* v___y_2637_; lean_object* v___y_2638_; lean_object* v___y_2639_; lean_object* v___y_2640_; lean_object* v___y_2641_; lean_object* v___y_2642_; lean_object* v___y_2643_; lean_object* v___y_2644_; lean_object* v___y_2645_; lean_object* v___y_2646_; lean_object* v___y_2647_; lean_object* v___y_2648_; lean_object* v_homomulFn_x3f_2649_; lean_object* v___y_2650_; lean_object* v___y_2651_; lean_object* v___y_2652_; lean_object* v___y_2653_; lean_object* v___y_2654_; lean_object* v___y_2655_; lean_object* v___y_2656_; lean_object* v___y_2657_; lean_object* v___y_2658_; lean_object* v___y_2659_; lean_object* v___y_2698_; lean_object* v___y_2699_; lean_object* v___y_2700_; lean_object* v___y_2701_; lean_object* v___y_2702_; uint8_t v___y_2703_; lean_object* v___y_2704_; lean_object* v___y_2705_; lean_object* v___y_2706_; lean_object* v___y_2707_; lean_object* v___y_2708_; lean_object* v___y_2709_; lean_object* v___y_2710_; lean_object* v___y_2711_; lean_object* v___y_2712_; lean_object* v___y_2713_; lean_object* v___y_2714_; lean_object* v___y_2715_; lean_object* v___y_2716_; lean_object* v___y_2717_; lean_object* v___y_2718_; lean_object* v___y_2719_; lean_object* v___y_2720_; lean_object* v_ltFn_x3f_2721_; lean_object* v___y_2722_; lean_object* v___y_2723_; lean_object* v___y_2724_; lean_object* v___y_2725_; lean_object* v___y_2726_; lean_object* v___y_2727_; lean_object* v___y_2728_; lean_object* v___y_2729_; lean_object* v___y_2730_; lean_object* v___y_2731_; lean_object* v___y_2781_; lean_object* v___y_2782_; lean_object* v___y_2783_; lean_object* v___y_2784_; lean_object* v___y_2785_; uint8_t v___y_2786_; lean_object* v___y_2787_; lean_object* v___y_2788_; lean_object* v___y_2789_; lean_object* v___y_2790_; lean_object* v___y_2791_; lean_object* v___y_2792_; lean_object* v___y_2793_; lean_object* v___y_2794_; lean_object* v___y_2795_; lean_object* v___y_2796_; lean_object* v___y_2797_; lean_object* v___y_2798_; lean_object* v___y_2799_; lean_object* v___y_2800_; lean_object* v___y_2801_; lean_object* v___y_2802_; lean_object* v___y_2803_; lean_object* v_leFn_x3f_2804_; lean_object* v___y_2805_; lean_object* v___y_2806_; lean_object* v___y_2807_; lean_object* v___y_2808_; lean_object* v___y_2809_; lean_object* v___y_2810_; lean_object* v___y_2811_; lean_object* v___y_2812_; lean_object* v___y_2813_; lean_object* v___y_2814_; lean_object* v___y_2833_; lean_object* v___y_2834_; lean_object* v___y_2835_; lean_object* v___y_2836_; lean_object* v___y_2837_; lean_object* v___y_2838_; lean_object* v___y_2839_; uint8_t v___y_2840_; lean_object* v___y_2841_; lean_object* v___y_2842_; lean_object* v___y_2843_; lean_object* v___y_2844_; lean_object* v___y_2845_; lean_object* v___y_2846_; lean_object* v___y_2847_; lean_object* v___y_2848_; lean_object* v___y_2849_; lean_object* v___y_2850_; lean_object* v___y_2851_; lean_object* v___y_2852_; lean_object* v___y_2853_; lean_object* v_charInst_x3f_2854_; lean_object* v___y_2855_; lean_object* v___y_2856_; lean_object* v___y_2857_; lean_object* v___y_2858_; lean_object* v___y_2859_; lean_object* v___y_2860_; lean_object* v___y_2861_; lean_object* v___y_2862_; lean_object* v___y_2863_; lean_object* v___y_2864_; lean_object* v___x_3135_; 
v_a_2623_ = lean_ctor_get(v___x_2622_, 0);
lean_inc(v_a_2623_);
lean_dec_ref(v___x_2622_);
lean_inc(v_a_2618_);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_3135_ = l_Lean_Meta_Grind_mkIsPreorderInst_x3f___redArg(v_val_2607_, v_type_2524_, v_a_2618_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_);
if (lean_obj_tag(v___x_3135_) == 0)
{
lean_object* v_a_3136_; lean_object* v___x_3137_; 
v_a_3136_ = lean_ctor_get(v___x_3135_, 0);
lean_inc(v_a_3136_);
lean_dec_ref(v___x_3135_);
lean_inc(v_a_2618_);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_3137_ = l_Lean_Meta_Grind_mkIsPartialOrderInst_x3f___redArg(v_val_2607_, v_type_2524_, v_a_2618_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_);
if (lean_obj_tag(v___x_3137_) == 0)
{
lean_object* v_a_3138_; lean_object* v___x_3139_; 
v_a_3138_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_a_3138_);
lean_dec_ref(v___x_3137_);
lean_inc(v_a_2618_);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_3139_ = l_Lean_Meta_Grind_mkIsLinearOrderInst_x3f___redArg(v_val_2607_, v_type_2524_, v_a_2618_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_);
if (lean_obj_tag(v___x_3139_) == 0)
{
lean_object* v_a_3140_; lean_object* v___y_3142_; lean_object* v___y_3143_; lean_object* v___y_3144_; lean_object* v___y_3145_; lean_object* v___y_3146_; lean_object* v___y_3147_; lean_object* v___y_3148_; lean_object* v___y_3149_; lean_object* v___y_3150_; lean_object* v___y_3151_; lean_object* v___y_3152_; lean_object* v___y_3153_; lean_object* v___y_3154_; lean_object* v___y_3155_; lean_object* v___y_3156_; lean_object* v___y_3157_; lean_object* v___y_3158_; lean_object* v___y_3159_; lean_object* v___y_3160_; lean_object* v___y_3161_; uint8_t v___y_3162_; lean_object* v___x_3249_; 
v_a_3140_ = lean_ctor_get(v___x_3139_, 0);
lean_inc(v_a_3140_);
lean_dec_ref(v___x_3139_);
v___x_3249_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_2527_);
if (lean_obj_tag(v___x_3249_) == 0)
{
lean_object* v_a_3250_; uint8_t v_ring_3251_; lean_object* v___f_3252_; uint8_t v___y_3254_; lean_object* v___y_3255_; lean_object* v___y_3256_; lean_object* v___y_3257_; lean_object* v___y_3258_; lean_object* v___y_3259_; lean_object* v___y_3260_; lean_object* v___y_3261_; lean_object* v___y_3262_; lean_object* v___y_3263_; lean_object* v___y_3264_; lean_object* v___y_3265_; lean_object* v___y_3266_; lean_object* v___y_3267_; lean_object* v___y_3268_; lean_object* v___y_3269_; lean_object* v___y_3270_; lean_object* v___y_3271_; lean_object* v___y_3272_; lean_object* v___y_3273_; lean_object* v___y_3274_; uint8_t v___y_3308_; lean_object* v___y_3309_; lean_object* v___y_3310_; lean_object* v___y_3311_; lean_object* v___y_3312_; lean_object* v___y_3313_; lean_object* v___y_3314_; lean_object* v___y_3315_; lean_object* v___y_3316_; lean_object* v___y_3317_; lean_object* v___y_3318_; lean_object* v___y_3319_; lean_object* v___y_3320_; lean_object* v___y_3321_; lean_object* v___y_3322_; lean_object* v___y_3323_; lean_object* v___y_3324_; lean_object* v___y_3325_; lean_object* v___y_3326_; lean_object* v___y_3327_; uint8_t v___y_3330_; lean_object* v___y_3331_; lean_object* v___y_3332_; lean_object* v___y_3333_; lean_object* v___y_3334_; lean_object* v___y_3335_; lean_object* v___y_3336_; lean_object* v___y_3337_; lean_object* v___y_3338_; lean_object* v___y_3339_; lean_object* v___y_3340_; lean_object* v___y_3341_; lean_object* v___y_3342_; lean_object* v___y_3343_; lean_object* v___y_3344_; lean_object* v___y_3345_; lean_object* v___y_3346_; lean_object* v___y_3347_; lean_object* v___y_3348_; uint8_t v___y_3351_; 
v_a_3250_ = lean_ctor_get(v___x_3249_, 0);
lean_inc(v_a_3250_);
lean_dec_ref(v___x_3249_);
v_ring_3251_ = lean_ctor_get_uint8(v_a_3250_, sizeof(void*)*11 + 21);
lean_dec(v_a_3250_);
lean_inc_ref(v_type_2524_);
v___f_3252_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__0), 2, 1);
lean_closure_set(v___f_3252_, 0, v_type_2524_);
if (v_ring_3251_ == 0)
{
v___y_3351_ = v_ring_3251_;
goto v___jp_3350_;
}
else
{
lean_object* v___x_3436_; uint8_t v___x_3437_; 
v___x_3436_ = lean_box(0);
v___x_3437_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__1(v_a_2612_, v___x_3436_);
if (v___x_3437_ == 0)
{
v___y_3351_ = v___x_3437_;
goto v___jp_3350_;
}
else
{
if (lean_obj_tag(v_a_3136_) == 0)
{
lean_object* v___x_3438_; lean_object* v___x_3439_; 
lean_dec(v_a_3140_);
lean_dec(v_a_3138_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v___x_3438_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_3439_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3438_, v___f_3252_, v_a_2525_, v_a_2534_);
if (lean_obj_tag(v___x_3439_) == 0)
{
lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3447_; 
v_isSharedCheck_3447_ = !lean_is_exclusive(v___x_3439_);
if (v_isSharedCheck_3447_ == 0)
{
lean_object* v_unused_3448_; 
v_unused_3448_ = lean_ctor_get(v___x_3439_, 0);
lean_dec(v_unused_3448_);
v___x_3441_ = v___x_3439_;
v_isShared_3442_ = v_isSharedCheck_3447_;
goto v_resetjp_3440_;
}
else
{
lean_dec(v___x_3439_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3447_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3443_; lean_object* v___x_3445_; 
v___x_3443_ = lean_box(0);
if (v_isShared_3442_ == 0)
{
lean_ctor_set(v___x_3441_, 0, v___x_3443_);
v___x_3445_ = v___x_3441_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3446_; 
v_reuseFailAlloc_3446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3446_, 0, v___x_3443_);
v___x_3445_ = v_reuseFailAlloc_3446_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
return v___x_3445_;
}
}
}
else
{
lean_object* v_a_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3456_; 
v_a_3449_ = lean_ctor_get(v___x_3439_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v___x_3439_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3451_ = v___x_3439_;
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_a_3449_);
lean_dec(v___x_3439_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___x_3454_; 
if (v_isShared_3452_ == 0)
{
v___x_3454_ = v___x_3451_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_a_3449_);
v___x_3454_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
return v___x_3454_;
}
}
}
}
else
{
uint8_t v___x_3457_; 
v___x_3457_ = 0;
v___y_3351_ = v___x_3457_;
goto v___jp_3350_;
}
}
}
v___jp_3253_:
{
lean_object* v___x_3275_; 
v___x_3275_ = l_Lean_Meta_Grind_getConfig___redArg(v___y_3264_);
if (lean_obj_tag(v___x_3275_) == 0)
{
lean_object* v_a_3276_; uint8_t v_ring_3277_; 
v_a_3276_ = lean_ctor_get(v___x_3275_, 0);
lean_inc(v_a_3276_);
lean_dec_ref(v___x_3275_);
v_ring_3277_ = lean_ctor_get_uint8(v_a_3276_, sizeof(void*)*11 + 21);
lean_dec(v_a_3276_);
if (v_ring_3277_ == 0)
{
lean_dec_ref(v___f_3252_);
v___y_3142_ = v___y_3255_;
v___y_3143_ = v___y_3256_;
v___y_3144_ = v___y_3257_;
v___y_3145_ = v___y_3258_;
v___y_3146_ = v___y_3259_;
v___y_3147_ = v___y_3260_;
v___y_3148_ = v___y_3261_;
v___y_3149_ = v___y_3262_;
v___y_3150_ = v___y_3263_;
v___y_3151_ = v___y_3264_;
v___y_3152_ = v___y_3265_;
v___y_3153_ = v___y_3274_;
v___y_3154_ = v___y_3266_;
v___y_3155_ = v___y_3267_;
v___y_3156_ = v___y_3269_;
v___y_3157_ = v___y_3268_;
v___y_3158_ = v___y_3270_;
v___y_3159_ = v___y_3272_;
v___y_3160_ = v___y_3271_;
v___y_3161_ = v___y_3273_;
v___y_3162_ = v_ring_3277_;
goto v___jp_3141_;
}
else
{
lean_object* v___x_3278_; uint8_t v___x_3279_; 
v___x_3278_ = lean_box(0);
v___x_3279_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__1(v_a_2612_, v___x_3278_);
if (v___x_3279_ == 0)
{
lean_dec_ref(v___f_3252_);
v___y_3142_ = v___y_3255_;
v___y_3143_ = v___y_3256_;
v___y_3144_ = v___y_3257_;
v___y_3145_ = v___y_3258_;
v___y_3146_ = v___y_3259_;
v___y_3147_ = v___y_3260_;
v___y_3148_ = v___y_3261_;
v___y_3149_ = v___y_3262_;
v___y_3150_ = v___y_3263_;
v___y_3151_ = v___y_3264_;
v___y_3152_ = v___y_3265_;
v___y_3153_ = v___y_3274_;
v___y_3154_ = v___y_3266_;
v___y_3155_ = v___y_3267_;
v___y_3156_ = v___y_3269_;
v___y_3157_ = v___y_3268_;
v___y_3158_ = v___y_3270_;
v___y_3159_ = v___y_3272_;
v___y_3160_ = v___y_3271_;
v___y_3161_ = v___y_3273_;
v___y_3162_ = v___x_3279_;
goto v___jp_3141_;
}
else
{
if (lean_obj_tag(v___y_3274_) == 0)
{
lean_object* v___x_3280_; lean_object* v___x_3281_; 
lean_dec(v___y_3272_);
lean_dec_ref(v___y_3270_);
lean_dec(v___y_3268_);
lean_dec_ref(v___y_3267_);
lean_dec(v___y_3265_);
lean_dec_ref(v___y_3263_);
lean_dec(v___y_3259_);
lean_dec(v___y_3258_);
lean_dec(v___y_3255_);
lean_dec(v_a_3140_);
lean_dec(v_a_3138_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v___x_3280_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_3281_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3280_, v___f_3252_, v___y_3262_, v___y_3257_);
if (lean_obj_tag(v___x_3281_) == 0)
{
lean_object* v___x_3283_; uint8_t v_isShared_3284_; uint8_t v_isSharedCheck_3289_; 
v_isSharedCheck_3289_ = !lean_is_exclusive(v___x_3281_);
if (v_isSharedCheck_3289_ == 0)
{
lean_object* v_unused_3290_; 
v_unused_3290_ = lean_ctor_get(v___x_3281_, 0);
lean_dec(v_unused_3290_);
v___x_3283_ = v___x_3281_;
v_isShared_3284_ = v_isSharedCheck_3289_;
goto v_resetjp_3282_;
}
else
{
lean_dec(v___x_3281_);
v___x_3283_ = lean_box(0);
v_isShared_3284_ = v_isSharedCheck_3289_;
goto v_resetjp_3282_;
}
v_resetjp_3282_:
{
lean_object* v___x_3285_; lean_object* v___x_3287_; 
v___x_3285_ = lean_box(0);
if (v_isShared_3284_ == 0)
{
lean_ctor_set(v___x_3283_, 0, v___x_3285_);
v___x_3287_ = v___x_3283_;
goto v_reusejp_3286_;
}
else
{
lean_object* v_reuseFailAlloc_3288_; 
v_reuseFailAlloc_3288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3288_, 0, v___x_3285_);
v___x_3287_ = v_reuseFailAlloc_3288_;
goto v_reusejp_3286_;
}
v_reusejp_3286_:
{
return v___x_3287_;
}
}
}
else
{
lean_object* v_a_3291_; lean_object* v___x_3293_; uint8_t v_isShared_3294_; uint8_t v_isSharedCheck_3298_; 
v_a_3291_ = lean_ctor_get(v___x_3281_, 0);
v_isSharedCheck_3298_ = !lean_is_exclusive(v___x_3281_);
if (v_isSharedCheck_3298_ == 0)
{
v___x_3293_ = v___x_3281_;
v_isShared_3294_ = v_isSharedCheck_3298_;
goto v_resetjp_3292_;
}
else
{
lean_inc(v_a_3291_);
lean_dec(v___x_3281_);
v___x_3293_ = lean_box(0);
v_isShared_3294_ = v_isSharedCheck_3298_;
goto v_resetjp_3292_;
}
v_resetjp_3292_:
{
lean_object* v___x_3296_; 
if (v_isShared_3294_ == 0)
{
v___x_3296_ = v___x_3293_;
goto v_reusejp_3295_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v_a_3291_);
v___x_3296_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3295_;
}
v_reusejp_3295_:
{
return v___x_3296_;
}
}
}
}
else
{
lean_dec_ref(v___f_3252_);
v___y_3142_ = v___y_3255_;
v___y_3143_ = v___y_3256_;
v___y_3144_ = v___y_3257_;
v___y_3145_ = v___y_3258_;
v___y_3146_ = v___y_3259_;
v___y_3147_ = v___y_3260_;
v___y_3148_ = v___y_3261_;
v___y_3149_ = v___y_3262_;
v___y_3150_ = v___y_3263_;
v___y_3151_ = v___y_3264_;
v___y_3152_ = v___y_3265_;
v___y_3153_ = v___y_3274_;
v___y_3154_ = v___y_3266_;
v___y_3155_ = v___y_3267_;
v___y_3156_ = v___y_3269_;
v___y_3157_ = v___y_3268_;
v___y_3158_ = v___y_3270_;
v___y_3159_ = v___y_3272_;
v___y_3160_ = v___y_3271_;
v___y_3161_ = v___y_3273_;
v___y_3162_ = v___y_3254_;
goto v___jp_3141_;
}
}
}
}
else
{
lean_object* v_a_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3306_; 
lean_dec(v___y_3274_);
lean_dec(v___y_3272_);
lean_dec_ref(v___y_3270_);
lean_dec(v___y_3268_);
lean_dec_ref(v___y_3267_);
lean_dec(v___y_3265_);
lean_dec_ref(v___y_3263_);
lean_dec(v___y_3259_);
lean_dec(v___y_3258_);
lean_dec(v___y_3255_);
lean_dec_ref(v___f_3252_);
lean_dec(v_a_3140_);
lean_dec(v_a_3138_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3299_ = lean_ctor_get(v___x_3275_, 0);
v_isSharedCheck_3306_ = !lean_is_exclusive(v___x_3275_);
if (v_isSharedCheck_3306_ == 0)
{
v___x_3301_ = v___x_3275_;
v_isShared_3302_ = v_isSharedCheck_3306_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_a_3299_);
lean_dec(v___x_3275_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3306_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
lean_object* v___x_3304_; 
if (v_isShared_3302_ == 0)
{
v___x_3304_ = v___x_3301_;
goto v_reusejp_3303_;
}
else
{
lean_object* v_reuseFailAlloc_3305_; 
v_reuseFailAlloc_3305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3305_, 0, v_a_3299_);
v___x_3304_ = v_reuseFailAlloc_3305_;
goto v_reusejp_3303_;
}
v_reusejp_3303_:
{
return v___x_3304_;
}
}
}
}
v___jp_3307_:
{
lean_object* v___x_3328_; 
v___x_3328_ = lean_box(0);
v___y_3254_ = v___y_3308_;
v___y_3255_ = v___y_3309_;
v___y_3256_ = v___y_3310_;
v___y_3257_ = v___y_3311_;
v___y_3258_ = v___y_3312_;
v___y_3259_ = v___y_3313_;
v___y_3260_ = v___y_3314_;
v___y_3261_ = v___y_3315_;
v___y_3262_ = v___y_3316_;
v___y_3263_ = v___y_3317_;
v___y_3264_ = v___y_3318_;
v___y_3265_ = v___y_3319_;
v___y_3266_ = v___y_3320_;
v___y_3267_ = v___y_3321_;
v___y_3268_ = v___y_3323_;
v___y_3269_ = v___y_3322_;
v___y_3270_ = v___y_3324_;
v___y_3271_ = v___y_3326_;
v___y_3272_ = v___y_3325_;
v___y_3273_ = v___y_3327_;
v___y_3274_ = v___x_3328_;
goto v___jp_3253_;
}
v___jp_3329_:
{
lean_object* v___x_3349_; 
v___x_3349_ = lean_box(0);
v___y_3308_ = v___y_3330_;
v___y_3309_ = v___y_3331_;
v___y_3310_ = v___y_3340_;
v___y_3311_ = v___y_3348_;
v___y_3312_ = v___y_3335_;
v___y_3313_ = v___y_3336_;
v___y_3314_ = v___y_3345_;
v___y_3315_ = v___y_3347_;
v___y_3316_ = v___y_3339_;
v___y_3317_ = v___y_3332_;
v___y_3318_ = v___y_3341_;
v___y_3319_ = v___x_3349_;
v___y_3320_ = v___y_3342_;
v___y_3321_ = v___y_3333_;
v___y_3322_ = v___y_3343_;
v___y_3323_ = v___y_3334_;
v___y_3324_ = v___y_3337_;
v___y_3325_ = v___y_3338_;
v___y_3326_ = v___y_3346_;
v___y_3327_ = v___y_3344_;
goto v___jp_3307_;
}
v___jp_3350_:
{
lean_object* v___x_3352_; 
lean_inc(v_a_2612_);
v___x_3352_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f(v_a_2612_, v_a_2525_, v_a_2526_, v_a_2527_, v_a_2528_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_);
if (lean_obj_tag(v___x_3352_) == 0)
{
lean_object* v_a_3353_; lean_object* v___x_3354_; 
v_a_3353_ = lean_ctor_get(v___x_3352_, 0);
lean_inc_n(v_a_3353_, 2);
lean_dec_ref(v___x_3352_);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_3354_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg(v_val_2607_, v_type_2524_, v_a_3353_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_);
if (lean_obj_tag(v___x_3354_) == 0)
{
lean_object* v_a_3355_; lean_object* v___x_3356_; 
v_a_3355_ = lean_ctor_get(v___x_3354_, 0);
lean_inc_n(v_a_3355_, 2);
lean_dec_ref(v___x_3354_);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_3356_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg(v_val_2607_, v_type_2524_, v_a_3355_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_);
if (lean_obj_tag(v___x_3356_) == 0)
{
lean_object* v_a_3357_; lean_object* v___x_3359_; uint8_t v_isShared_3360_; uint8_t v_isSharedCheck_3411_; 
v_a_3357_ = lean_ctor_get(v___x_3356_, 0);
v_isSharedCheck_3411_ = !lean_is_exclusive(v___x_3356_);
if (v_isSharedCheck_3411_ == 0)
{
v___x_3359_ = v___x_3356_;
v_isShared_3360_ = v_isSharedCheck_3411_;
goto v_resetjp_3358_;
}
else
{
lean_inc(v_a_3357_);
lean_dec(v___x_3356_);
v___x_3359_ = lean_box(0);
v_isShared_3360_ = v_isSharedCheck_3411_;
goto v_resetjp_3358_;
}
v_resetjp_3358_:
{
if (lean_obj_tag(v_a_3357_) == 1)
{
lean_object* v_val_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; 
lean_del_object(v___x_3359_);
v_val_3361_ = lean_ctor_get(v_a_3357_, 0);
lean_inc(v_val_3361_);
lean_dec_ref(v_a_3357_);
v___x_3362_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__62, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__62_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__62);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_3363_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg(v___x_3362_, v_val_2607_, v_type_2524_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_);
if (lean_obj_tag(v___x_3363_) == 0)
{
lean_object* v_a_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; 
v_a_3364_ = lean_ctor_get(v___x_3363_, 0);
lean_inc_n(v_a_3364_, 2);
lean_dec_ref(v___x_3363_);
v___x_3365_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__64, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__64_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__64);
v___x_3366_ = lean_box(0);
lean_inc_n(v_val_2607_, 3);
v___x_3367_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3367_, 0, v_val_2607_);
lean_ctor_set(v___x_3367_, 1, v___x_3366_);
lean_inc_ref(v___x_3367_);
v___x_3368_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3368_, 0, v_val_2607_);
lean_ctor_set(v___x_3368_, 1, v___x_3367_);
lean_inc_ref(v___x_3368_);
v___x_3369_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3369_, 0, v_val_2607_);
lean_ctor_set(v___x_3369_, 1, v___x_3368_);
lean_inc_ref(v___x_3369_);
v___x_3370_ = l_Lean_mkConst(v___x_3365_, v___x_3369_);
lean_inc_ref_n(v_type_2524_, 3);
v___x_3371_ = l_Lean_mkApp4(v___x_3370_, v_type_2524_, v_type_2524_, v_type_2524_, v_a_3364_);
v___x_3372_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_3371_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_);
if (lean_obj_tag(v___x_3372_) == 0)
{
if (lean_obj_tag(v_a_2618_) == 1)
{
if (lean_obj_tag(v_a_3136_) == 1)
{
lean_object* v_a_3373_; lean_object* v_val_3374_; lean_object* v_val_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; 
v_a_3373_ = lean_ctor_get(v___x_3372_, 0);
lean_inc(v_a_3373_);
lean_dec_ref(v___x_3372_);
v_val_3374_ = lean_ctor_get(v_a_2618_, 0);
v_val_3375_ = lean_ctor_get(v_a_3136_, 0);
v___x_3376_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66);
lean_inc_ref(v___x_3367_);
v___x_3377_ = l_Lean_mkConst(v___x_3376_, v___x_3367_);
lean_inc(v_val_3375_);
lean_inc(v_val_3374_);
lean_inc(v_a_3364_);
lean_inc_ref(v_type_2524_);
v___x_3378_ = l_Lean_mkApp4(v___x_3377_, v_type_2524_, v_a_3364_, v_val_3374_, v_val_3375_);
v___x_3379_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_3378_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_);
if (lean_obj_tag(v___x_3379_) == 0)
{
lean_object* v_a_3380_; 
v_a_3380_ = lean_ctor_get(v___x_3379_, 0);
lean_inc(v_a_3380_);
lean_dec_ref(v___x_3379_);
if (lean_obj_tag(v_a_3380_) == 0)
{
lean_dec_ref(v_a_3136_);
v___y_3308_ = v___y_3351_;
v___y_3309_ = v___x_3368_;
v___y_3310_ = v_a_2526_;
v___y_3311_ = v_a_2534_;
v___y_3312_ = v___x_3369_;
v___y_3313_ = v_a_3355_;
v___y_3314_ = v_a_2531_;
v___y_3315_ = v_a_2533_;
v___y_3316_ = v_a_2525_;
v___y_3317_ = v_a_3364_;
v___y_3318_ = v_a_2527_;
v___y_3319_ = v_a_3380_;
v___y_3320_ = v_a_2528_;
v___y_3321_ = v_val_3361_;
v___y_3322_ = v_a_2529_;
v___y_3323_ = v___x_3367_;
v___y_3324_ = v_a_3373_;
v___y_3325_ = v_a_3353_;
v___y_3326_ = v_a_2532_;
v___y_3327_ = v_a_2530_;
goto v___jp_3307_;
}
else
{
if (v___y_3351_ == 0)
{
v___y_3254_ = v___y_3351_;
v___y_3255_ = v___x_3368_;
v___y_3256_ = v_a_2526_;
v___y_3257_ = v_a_2534_;
v___y_3258_ = v___x_3369_;
v___y_3259_ = v_a_3355_;
v___y_3260_ = v_a_2531_;
v___y_3261_ = v_a_2533_;
v___y_3262_ = v_a_2525_;
v___y_3263_ = v_a_3364_;
v___y_3264_ = v_a_2527_;
v___y_3265_ = v_a_3380_;
v___y_3266_ = v_a_2528_;
v___y_3267_ = v_val_3361_;
v___y_3268_ = v___x_3367_;
v___y_3269_ = v_a_2529_;
v___y_3270_ = v_a_3373_;
v___y_3271_ = v_a_2532_;
v___y_3272_ = v_a_3353_;
v___y_3273_ = v_a_2530_;
v___y_3274_ = v_a_3136_;
goto v___jp_3253_;
}
else
{
lean_dec_ref(v_a_3136_);
v___y_3308_ = v___y_3351_;
v___y_3309_ = v___x_3368_;
v___y_3310_ = v_a_2526_;
v___y_3311_ = v_a_2534_;
v___y_3312_ = v___x_3369_;
v___y_3313_ = v_a_3355_;
v___y_3314_ = v_a_2531_;
v___y_3315_ = v_a_2533_;
v___y_3316_ = v_a_2525_;
v___y_3317_ = v_a_3364_;
v___y_3318_ = v_a_2527_;
v___y_3319_ = v_a_3380_;
v___y_3320_ = v_a_2528_;
v___y_3321_ = v_val_3361_;
v___y_3322_ = v_a_2529_;
v___y_3323_ = v___x_3367_;
v___y_3324_ = v_a_3373_;
v___y_3325_ = v_a_3353_;
v___y_3326_ = v_a_2532_;
v___y_3327_ = v_a_2530_;
goto v___jp_3307_;
}
}
}
else
{
lean_object* v_a_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3388_; 
lean_dec_ref(v_a_3136_);
lean_dec(v_a_3373_);
lean_dec_ref(v_a_2618_);
lean_dec_ref(v___x_3369_);
lean_dec_ref(v___x_3368_);
lean_dec_ref(v___x_3367_);
lean_dec(v_a_3364_);
lean_dec(v_val_3361_);
lean_dec(v_a_3355_);
lean_dec(v_a_3353_);
lean_dec_ref(v___f_3252_);
lean_dec(v_a_3140_);
lean_dec(v_a_3138_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3381_ = lean_ctor_get(v___x_3379_, 0);
v_isSharedCheck_3388_ = !lean_is_exclusive(v___x_3379_);
if (v_isSharedCheck_3388_ == 0)
{
v___x_3383_ = v___x_3379_;
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_a_3381_);
lean_dec(v___x_3379_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3386_; 
if (v_isShared_3384_ == 0)
{
v___x_3386_ = v___x_3383_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v_a_3381_);
v___x_3386_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
return v___x_3386_;
}
}
}
}
else
{
lean_object* v_a_3389_; 
lean_dec(v_a_3136_);
v_a_3389_ = lean_ctor_get(v___x_3372_, 0);
lean_inc(v_a_3389_);
lean_dec_ref(v___x_3372_);
v___y_3330_ = v___y_3351_;
v___y_3331_ = v___x_3368_;
v___y_3332_ = v_a_3364_;
v___y_3333_ = v_val_3361_;
v___y_3334_ = v___x_3367_;
v___y_3335_ = v___x_3369_;
v___y_3336_ = v_a_3355_;
v___y_3337_ = v_a_3389_;
v___y_3338_ = v_a_3353_;
v___y_3339_ = v_a_2525_;
v___y_3340_ = v_a_2526_;
v___y_3341_ = v_a_2527_;
v___y_3342_ = v_a_2528_;
v___y_3343_ = v_a_2529_;
v___y_3344_ = v_a_2530_;
v___y_3345_ = v_a_2531_;
v___y_3346_ = v_a_2532_;
v___y_3347_ = v_a_2533_;
v___y_3348_ = v_a_2534_;
goto v___jp_3329_;
}
}
else
{
lean_object* v_a_3390_; 
lean_dec(v_a_3136_);
v_a_3390_ = lean_ctor_get(v___x_3372_, 0);
lean_inc(v_a_3390_);
lean_dec_ref(v___x_3372_);
v___y_3330_ = v___y_3351_;
v___y_3331_ = v___x_3368_;
v___y_3332_ = v_a_3364_;
v___y_3333_ = v_val_3361_;
v___y_3334_ = v___x_3367_;
v___y_3335_ = v___x_3369_;
v___y_3336_ = v_a_3355_;
v___y_3337_ = v_a_3390_;
v___y_3338_ = v_a_3353_;
v___y_3339_ = v_a_2525_;
v___y_3340_ = v_a_2526_;
v___y_3341_ = v_a_2527_;
v___y_3342_ = v_a_2528_;
v___y_3343_ = v_a_2529_;
v___y_3344_ = v_a_2530_;
v___y_3345_ = v_a_2531_;
v___y_3346_ = v_a_2532_;
v___y_3347_ = v_a_2533_;
v___y_3348_ = v_a_2534_;
goto v___jp_3329_;
}
}
else
{
lean_object* v_a_3391_; lean_object* v___x_3393_; uint8_t v_isShared_3394_; uint8_t v_isSharedCheck_3398_; 
lean_dec_ref(v___x_3369_);
lean_dec_ref(v___x_3368_);
lean_dec_ref(v___x_3367_);
lean_dec(v_a_3364_);
lean_dec(v_val_3361_);
lean_dec(v_a_3355_);
lean_dec(v_a_3353_);
lean_dec_ref(v___f_3252_);
lean_dec(v_a_3140_);
lean_dec(v_a_3138_);
lean_dec(v_a_3136_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3391_ = lean_ctor_get(v___x_3372_, 0);
v_isSharedCheck_3398_ = !lean_is_exclusive(v___x_3372_);
if (v_isSharedCheck_3398_ == 0)
{
v___x_3393_ = v___x_3372_;
v_isShared_3394_ = v_isSharedCheck_3398_;
goto v_resetjp_3392_;
}
else
{
lean_inc(v_a_3391_);
lean_dec(v___x_3372_);
v___x_3393_ = lean_box(0);
v_isShared_3394_ = v_isSharedCheck_3398_;
goto v_resetjp_3392_;
}
v_resetjp_3392_:
{
lean_object* v___x_3396_; 
if (v_isShared_3394_ == 0)
{
v___x_3396_ = v___x_3393_;
goto v_reusejp_3395_;
}
else
{
lean_object* v_reuseFailAlloc_3397_; 
v_reuseFailAlloc_3397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3397_, 0, v_a_3391_);
v___x_3396_ = v_reuseFailAlloc_3397_;
goto v_reusejp_3395_;
}
v_reusejp_3395_:
{
return v___x_3396_;
}
}
}
}
else
{
lean_object* v_a_3399_; lean_object* v___x_3401_; uint8_t v_isShared_3402_; uint8_t v_isSharedCheck_3406_; 
lean_dec(v_val_3361_);
lean_dec(v_a_3355_);
lean_dec(v_a_3353_);
lean_dec_ref(v___f_3252_);
lean_dec(v_a_3140_);
lean_dec(v_a_3138_);
lean_dec(v_a_3136_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3399_ = lean_ctor_get(v___x_3363_, 0);
v_isSharedCheck_3406_ = !lean_is_exclusive(v___x_3363_);
if (v_isSharedCheck_3406_ == 0)
{
v___x_3401_ = v___x_3363_;
v_isShared_3402_ = v_isSharedCheck_3406_;
goto v_resetjp_3400_;
}
else
{
lean_inc(v_a_3399_);
lean_dec(v___x_3363_);
v___x_3401_ = lean_box(0);
v_isShared_3402_ = v_isSharedCheck_3406_;
goto v_resetjp_3400_;
}
v_resetjp_3400_:
{
lean_object* v___x_3404_; 
if (v_isShared_3402_ == 0)
{
v___x_3404_ = v___x_3401_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v_a_3399_);
v___x_3404_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
return v___x_3404_;
}
}
}
}
else
{
lean_object* v___x_3407_; lean_object* v___x_3409_; 
lean_dec(v_a_3357_);
lean_dec(v_a_3355_);
lean_dec(v_a_3353_);
lean_dec_ref(v___f_3252_);
lean_dec(v_a_3140_);
lean_dec(v_a_3138_);
lean_dec(v_a_3136_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v___x_3407_ = lean_box(0);
if (v_isShared_3360_ == 0)
{
lean_ctor_set(v___x_3359_, 0, v___x_3407_);
v___x_3409_ = v___x_3359_;
goto v_reusejp_3408_;
}
else
{
lean_object* v_reuseFailAlloc_3410_; 
v_reuseFailAlloc_3410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3410_, 0, v___x_3407_);
v___x_3409_ = v_reuseFailAlloc_3410_;
goto v_reusejp_3408_;
}
v_reusejp_3408_:
{
return v___x_3409_;
}
}
}
}
else
{
lean_object* v_a_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3419_; 
lean_dec(v_a_3355_);
lean_dec(v_a_3353_);
lean_dec_ref(v___f_3252_);
lean_dec(v_a_3140_);
lean_dec(v_a_3138_);
lean_dec(v_a_3136_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3412_ = lean_ctor_get(v___x_3356_, 0);
v_isSharedCheck_3419_ = !lean_is_exclusive(v___x_3356_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3414_ = v___x_3356_;
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_a_3412_);
lean_dec(v___x_3356_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v___x_3417_; 
if (v_isShared_3415_ == 0)
{
v___x_3417_ = v___x_3414_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v_a_3412_);
v___x_3417_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
return v___x_3417_;
}
}
}
}
else
{
lean_object* v_a_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3427_; 
lean_dec(v_a_3353_);
lean_dec_ref(v___f_3252_);
lean_dec(v_a_3140_);
lean_dec(v_a_3138_);
lean_dec(v_a_3136_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3420_ = lean_ctor_get(v___x_3354_, 0);
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3354_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3422_ = v___x_3354_;
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_a_3420_);
lean_dec(v___x_3354_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v___x_3425_; 
if (v_isShared_3423_ == 0)
{
v___x_3425_ = v___x_3422_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v_a_3420_);
v___x_3425_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
return v___x_3425_;
}
}
}
}
else
{
lean_object* v_a_3428_; lean_object* v___x_3430_; uint8_t v_isShared_3431_; uint8_t v_isSharedCheck_3435_; 
lean_dec_ref(v___f_3252_);
lean_dec(v_a_3140_);
lean_dec(v_a_3138_);
lean_dec(v_a_3136_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3428_ = lean_ctor_get(v___x_3352_, 0);
v_isSharedCheck_3435_ = !lean_is_exclusive(v___x_3352_);
if (v_isSharedCheck_3435_ == 0)
{
v___x_3430_ = v___x_3352_;
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
else
{
lean_inc(v_a_3428_);
lean_dec(v___x_3352_);
v___x_3430_ = lean_box(0);
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
v_resetjp_3429_:
{
lean_object* v___x_3433_; 
if (v_isShared_3431_ == 0)
{
v___x_3433_ = v___x_3430_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v_a_3428_);
v___x_3433_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
return v___x_3433_;
}
}
}
}
}
else
{
lean_object* v_a_3458_; lean_object* v___x_3460_; uint8_t v_isShared_3461_; uint8_t v_isSharedCheck_3465_; 
lean_dec(v_a_3140_);
lean_dec(v_a_3138_);
lean_dec(v_a_3136_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3458_ = lean_ctor_get(v___x_3249_, 0);
v_isSharedCheck_3465_ = !lean_is_exclusive(v___x_3249_);
if (v_isSharedCheck_3465_ == 0)
{
v___x_3460_ = v___x_3249_;
v_isShared_3461_ = v_isSharedCheck_3465_;
goto v_resetjp_3459_;
}
else
{
lean_inc(v_a_3458_);
lean_dec(v___x_3249_);
v___x_3460_ = lean_box(0);
v_isShared_3461_ = v_isSharedCheck_3465_;
goto v_resetjp_3459_;
}
v_resetjp_3459_:
{
lean_object* v___x_3463_; 
if (v_isShared_3461_ == 0)
{
v___x_3463_ = v___x_3460_;
goto v_reusejp_3462_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v_a_3458_);
v___x_3463_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3462_;
}
v_reusejp_3462_:
{
return v___x_3463_;
}
}
}
v___jp_3141_:
{
lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3163_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__50, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__50_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__50);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
lean_inc(v___y_3153_);
lean_inc(v_a_2618_);
v___x_3164_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(v_a_2618_, v___y_3153_, v_a_3138_, v___x_3163_, v_val_2607_, v_type_2524_, v___y_3156_, v___y_3161_, v___y_3147_, v___y_3160_, v___y_3148_, v___y_3144_);
if (lean_obj_tag(v___x_3164_) == 0)
{
lean_object* v_a_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; 
v_a_3165_ = lean_ctor_get(v___x_3164_, 0);
lean_inc(v_a_3165_);
lean_dec_ref(v___x_3164_);
v___x_3166_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__53, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__53_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__53);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
lean_inc(v_a_2618_);
v___x_3167_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(v_a_2618_, v_a_3165_, v_a_3140_, v___x_3166_, v_val_2607_, v_type_2524_, v___y_3156_, v___y_3161_, v___y_3147_, v___y_3160_, v___y_3148_, v___y_3144_);
if (lean_obj_tag(v___x_3167_) == 0)
{
lean_object* v_a_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; 
v_a_3168_ = lean_ctor_get(v___x_3167_, 0);
lean_inc(v_a_3168_);
lean_dec_ref(v___x_3167_);
v___x_3169_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0);
v___x_3170_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1);
v___x_3171_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2);
v___x_3172_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__55, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__55_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__55);
lean_inc_n(v___y_3157_, 2);
v___x_3173_ = l_Lean_mkConst(v___x_3172_, v___y_3157_);
lean_inc_ref(v___y_3155_);
lean_inc_ref_n(v_type_2524_, 3);
v___x_3174_ = l_Lean_mkAppB(v___x_3173_, v_type_2524_, v___y_3155_);
v___x_3175_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__56, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__56_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__56);
v___x_3176_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__58, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__58_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__58);
v___x_3177_ = l_Lean_mkConst(v___x_3176_, v___y_3157_);
lean_inc_ref(v___x_3174_);
v___x_3178_ = l_Lean_mkAppB(v___x_3177_, v_type_2524_, v___x_3174_);
lean_inc(v___y_3146_);
lean_inc(v_val_2607_);
v___x_3179_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg(v_val_2607_, v_type_2524_, v___y_3146_, v___y_3147_, v___y_3160_, v___y_3148_, v___y_3144_);
if (lean_obj_tag(v___x_3179_) == 0)
{
lean_object* v_a_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; 
v_a_3180_ = lean_ctor_get(v___x_3179_, 0);
lean_inc(v_a_3180_);
lean_dec_ref(v___x_3179_);
v___x_3181_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__60, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__60_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__60);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_3182_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v___x_3181_, v_val_2607_, v_type_2524_, v___y_3147_, v___y_3160_, v___y_3148_, v___y_3144_);
if (lean_obj_tag(v___x_3182_) == 0)
{
lean_object* v_a_3183_; lean_object* v___x_3184_; 
v_a_3183_ = lean_ctor_get(v___x_3182_, 0);
lean_inc(v_a_3183_);
lean_dec_ref(v___x_3182_);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_3184_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f(v_val_2607_, v_type_2524_, v___y_3149_, v___y_3143_, v___y_3151_, v___y_3154_, v___y_3156_, v___y_3161_, v___y_3147_, v___y_3160_, v___y_3148_, v___y_3144_);
if (lean_obj_tag(v___x_3184_) == 0)
{
lean_object* v_a_3185_; lean_object* v___x_3186_; 
v_a_3185_ = lean_ctor_get(v___x_3184_, 0);
lean_inc(v_a_3185_);
lean_dec_ref(v___x_3184_);
lean_inc(v___y_3153_);
lean_inc(v_a_2621_);
lean_inc(v_a_2618_);
lean_inc(v_a_3180_);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_3186_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg(v_val_2607_, v_type_2524_, v_a_3180_, v_a_2618_, v_a_2621_, v___y_3153_, v___y_3156_, v___y_3161_, v___y_3147_, v___y_3160_, v___y_3148_, v___y_3144_);
if (lean_obj_tag(v___x_3186_) == 0)
{
if (lean_obj_tag(v_a_3180_) == 1)
{
lean_object* v_a_3187_; lean_object* v_val_3188_; lean_object* v___x_3189_; 
v_a_3187_ = lean_ctor_get(v___x_3186_, 0);
lean_inc(v_a_3187_);
lean_dec_ref(v___x_3186_);
v_val_3188_ = lean_ctor_get(v_a_3180_, 0);
lean_inc(v_val_3188_);
lean_dec_ref(v_a_3180_);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_3189_ = l_Lean_Meta_Grind_Arith_getIsCharInst_x3f(v_val_2607_, v_type_2524_, v_val_3188_, v___y_3149_, v___y_3143_, v___y_3151_, v___y_3154_, v___y_3156_, v___y_3161_, v___y_3147_, v___y_3160_, v___y_3148_, v___y_3144_);
if (lean_obj_tag(v___x_3189_) == 0)
{
lean_object* v_a_3190_; 
v_a_3190_ = lean_ctor_get(v___x_3189_, 0);
lean_inc(v_a_3190_);
lean_dec_ref(v___x_3189_);
v___y_2833_ = v___y_3142_;
v___y_2834_ = v___x_3174_;
v___y_2835_ = v_a_3187_;
v___y_2836_ = v___x_3169_;
v___y_2837_ = v_a_3168_;
v___y_2838_ = v_a_3185_;
v___y_2839_ = v___x_3175_;
v___y_2840_ = v___y_3162_;
v___y_2841_ = v___y_3145_;
v___y_2842_ = v___x_3178_;
v___y_2843_ = v___y_3146_;
v___y_2844_ = v___x_3171_;
v___y_2845_ = v___y_3150_;
v___y_2846_ = v___x_3170_;
v___y_2847_ = v___y_3152_;
v___y_2848_ = v___y_3153_;
v___y_2849_ = v_a_3183_;
v___y_2850_ = v___y_3155_;
v___y_2851_ = v___y_3157_;
v___y_2852_ = v___y_3158_;
v___y_2853_ = v___y_3159_;
v_charInst_x3f_2854_ = v_a_3190_;
v___y_2855_ = v___y_3149_;
v___y_2856_ = v___y_3143_;
v___y_2857_ = v___y_3151_;
v___y_2858_ = v___y_3154_;
v___y_2859_ = v___y_3156_;
v___y_2860_ = v___y_3161_;
v___y_2861_ = v___y_3147_;
v___y_2862_ = v___y_3160_;
v___y_2863_ = v___y_3148_;
v___y_2864_ = v___y_3144_;
goto v___jp_2832_;
}
else
{
lean_object* v_a_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3198_; 
lean_dec(v_a_3187_);
lean_dec(v_a_3185_);
lean_dec(v_a_3183_);
lean_dec_ref(v___x_3178_);
lean_dec_ref(v___x_3174_);
lean_dec(v_a_3168_);
lean_dec(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3155_);
lean_dec(v___y_3153_);
lean_dec(v___y_3152_);
lean_dec_ref(v___y_3150_);
lean_dec(v___y_3146_);
lean_dec(v___y_3145_);
lean_dec(v___y_3142_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3191_ = lean_ctor_get(v___x_3189_, 0);
v_isSharedCheck_3198_ = !lean_is_exclusive(v___x_3189_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3193_ = v___x_3189_;
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_a_3191_);
lean_dec(v___x_3189_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3196_; 
if (v_isShared_3194_ == 0)
{
v___x_3196_ = v___x_3193_;
goto v_reusejp_3195_;
}
else
{
lean_object* v_reuseFailAlloc_3197_; 
v_reuseFailAlloc_3197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3197_, 0, v_a_3191_);
v___x_3196_ = v_reuseFailAlloc_3197_;
goto v_reusejp_3195_;
}
v_reusejp_3195_:
{
return v___x_3196_;
}
}
}
}
else
{
lean_object* v_a_3199_; lean_object* v___x_3200_; 
lean_dec(v_a_3180_);
v_a_3199_ = lean_ctor_get(v___x_3186_, 0);
lean_inc(v_a_3199_);
lean_dec_ref(v___x_3186_);
v___x_3200_ = lean_box(0);
v___y_2833_ = v___y_3142_;
v___y_2834_ = v___x_3174_;
v___y_2835_ = v_a_3199_;
v___y_2836_ = v___x_3169_;
v___y_2837_ = v_a_3168_;
v___y_2838_ = v_a_3185_;
v___y_2839_ = v___x_3175_;
v___y_2840_ = v___y_3162_;
v___y_2841_ = v___y_3145_;
v___y_2842_ = v___x_3178_;
v___y_2843_ = v___y_3146_;
v___y_2844_ = v___x_3171_;
v___y_2845_ = v___y_3150_;
v___y_2846_ = v___x_3170_;
v___y_2847_ = v___y_3152_;
v___y_2848_ = v___y_3153_;
v___y_2849_ = v_a_3183_;
v___y_2850_ = v___y_3155_;
v___y_2851_ = v___y_3157_;
v___y_2852_ = v___y_3158_;
v___y_2853_ = v___y_3159_;
v_charInst_x3f_2854_ = v___x_3200_;
v___y_2855_ = v___y_3149_;
v___y_2856_ = v___y_3143_;
v___y_2857_ = v___y_3151_;
v___y_2858_ = v___y_3154_;
v___y_2859_ = v___y_3156_;
v___y_2860_ = v___y_3161_;
v___y_2861_ = v___y_3147_;
v___y_2862_ = v___y_3160_;
v___y_2863_ = v___y_3148_;
v___y_2864_ = v___y_3144_;
goto v___jp_2832_;
}
}
else
{
lean_object* v_a_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3208_; 
lean_dec(v_a_3185_);
lean_dec(v_a_3183_);
lean_dec(v_a_3180_);
lean_dec_ref(v___x_3178_);
lean_dec_ref(v___x_3174_);
lean_dec(v_a_3168_);
lean_dec(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3155_);
lean_dec(v___y_3153_);
lean_dec(v___y_3152_);
lean_dec_ref(v___y_3150_);
lean_dec(v___y_3146_);
lean_dec(v___y_3145_);
lean_dec(v___y_3142_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3201_ = lean_ctor_get(v___x_3186_, 0);
v_isSharedCheck_3208_ = !lean_is_exclusive(v___x_3186_);
if (v_isSharedCheck_3208_ == 0)
{
v___x_3203_ = v___x_3186_;
v_isShared_3204_ = v_isSharedCheck_3208_;
goto v_resetjp_3202_;
}
else
{
lean_inc(v_a_3201_);
lean_dec(v___x_3186_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3208_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
lean_object* v___x_3206_; 
if (v_isShared_3204_ == 0)
{
v___x_3206_ = v___x_3203_;
goto v_reusejp_3205_;
}
else
{
lean_object* v_reuseFailAlloc_3207_; 
v_reuseFailAlloc_3207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3207_, 0, v_a_3201_);
v___x_3206_ = v_reuseFailAlloc_3207_;
goto v_reusejp_3205_;
}
v_reusejp_3205_:
{
return v___x_3206_;
}
}
}
}
else
{
lean_object* v_a_3209_; lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3216_; 
lean_dec(v_a_3183_);
lean_dec(v_a_3180_);
lean_dec_ref(v___x_3178_);
lean_dec_ref(v___x_3174_);
lean_dec(v_a_3168_);
lean_dec(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3155_);
lean_dec(v___y_3153_);
lean_dec(v___y_3152_);
lean_dec_ref(v___y_3150_);
lean_dec(v___y_3146_);
lean_dec(v___y_3145_);
lean_dec(v___y_3142_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3209_ = lean_ctor_get(v___x_3184_, 0);
v_isSharedCheck_3216_ = !lean_is_exclusive(v___x_3184_);
if (v_isSharedCheck_3216_ == 0)
{
v___x_3211_ = v___x_3184_;
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
else
{
lean_inc(v_a_3209_);
lean_dec(v___x_3184_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v___x_3214_; 
if (v_isShared_3212_ == 0)
{
v___x_3214_ = v___x_3211_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v_a_3209_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
return v___x_3214_;
}
}
}
}
else
{
lean_object* v_a_3217_; lean_object* v___x_3219_; uint8_t v_isShared_3220_; uint8_t v_isSharedCheck_3224_; 
lean_dec(v_a_3180_);
lean_dec_ref(v___x_3178_);
lean_dec_ref(v___x_3174_);
lean_dec(v_a_3168_);
lean_dec(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3155_);
lean_dec(v___y_3153_);
lean_dec(v___y_3152_);
lean_dec_ref(v___y_3150_);
lean_dec(v___y_3146_);
lean_dec(v___y_3145_);
lean_dec(v___y_3142_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3217_ = lean_ctor_get(v___x_3182_, 0);
v_isSharedCheck_3224_ = !lean_is_exclusive(v___x_3182_);
if (v_isSharedCheck_3224_ == 0)
{
v___x_3219_ = v___x_3182_;
v_isShared_3220_ = v_isSharedCheck_3224_;
goto v_resetjp_3218_;
}
else
{
lean_inc(v_a_3217_);
lean_dec(v___x_3182_);
v___x_3219_ = lean_box(0);
v_isShared_3220_ = v_isSharedCheck_3224_;
goto v_resetjp_3218_;
}
v_resetjp_3218_:
{
lean_object* v___x_3222_; 
if (v_isShared_3220_ == 0)
{
v___x_3222_ = v___x_3219_;
goto v_reusejp_3221_;
}
else
{
lean_object* v_reuseFailAlloc_3223_; 
v_reuseFailAlloc_3223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3223_, 0, v_a_3217_);
v___x_3222_ = v_reuseFailAlloc_3223_;
goto v_reusejp_3221_;
}
v_reusejp_3221_:
{
return v___x_3222_;
}
}
}
}
else
{
lean_object* v_a_3225_; lean_object* v___x_3227_; uint8_t v_isShared_3228_; uint8_t v_isSharedCheck_3232_; 
lean_dec_ref(v___x_3178_);
lean_dec_ref(v___x_3174_);
lean_dec(v_a_3168_);
lean_dec(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3155_);
lean_dec(v___y_3153_);
lean_dec(v___y_3152_);
lean_dec_ref(v___y_3150_);
lean_dec(v___y_3146_);
lean_dec(v___y_3145_);
lean_dec(v___y_3142_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3225_ = lean_ctor_get(v___x_3179_, 0);
v_isSharedCheck_3232_ = !lean_is_exclusive(v___x_3179_);
if (v_isSharedCheck_3232_ == 0)
{
v___x_3227_ = v___x_3179_;
v_isShared_3228_ = v_isSharedCheck_3232_;
goto v_resetjp_3226_;
}
else
{
lean_inc(v_a_3225_);
lean_dec(v___x_3179_);
v___x_3227_ = lean_box(0);
v_isShared_3228_ = v_isSharedCheck_3232_;
goto v_resetjp_3226_;
}
v_resetjp_3226_:
{
lean_object* v___x_3230_; 
if (v_isShared_3228_ == 0)
{
v___x_3230_ = v___x_3227_;
goto v_reusejp_3229_;
}
else
{
lean_object* v_reuseFailAlloc_3231_; 
v_reuseFailAlloc_3231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3231_, 0, v_a_3225_);
v___x_3230_ = v_reuseFailAlloc_3231_;
goto v_reusejp_3229_;
}
v_reusejp_3229_:
{
return v___x_3230_;
}
}
}
}
else
{
lean_object* v_a_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3240_; 
lean_dec(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3155_);
lean_dec(v___y_3153_);
lean_dec(v___y_3152_);
lean_dec_ref(v___y_3150_);
lean_dec(v___y_3146_);
lean_dec(v___y_3145_);
lean_dec(v___y_3142_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3233_ = lean_ctor_get(v___x_3167_, 0);
v_isSharedCheck_3240_ = !lean_is_exclusive(v___x_3167_);
if (v_isSharedCheck_3240_ == 0)
{
v___x_3235_ = v___x_3167_;
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_a_3233_);
lean_dec(v___x_3167_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3238_; 
if (v_isShared_3236_ == 0)
{
v___x_3238_ = v___x_3235_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v_a_3233_);
v___x_3238_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
return v___x_3238_;
}
}
}
}
else
{
lean_object* v_a_3241_; lean_object* v___x_3243_; uint8_t v_isShared_3244_; uint8_t v_isSharedCheck_3248_; 
lean_dec(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3155_);
lean_dec(v___y_3153_);
lean_dec(v___y_3152_);
lean_dec_ref(v___y_3150_);
lean_dec(v___y_3146_);
lean_dec(v___y_3145_);
lean_dec(v___y_3142_);
lean_dec(v_a_3140_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3241_ = lean_ctor_get(v___x_3164_, 0);
v_isSharedCheck_3248_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3248_ == 0)
{
v___x_3243_ = v___x_3164_;
v_isShared_3244_ = v_isSharedCheck_3248_;
goto v_resetjp_3242_;
}
else
{
lean_inc(v_a_3241_);
lean_dec(v___x_3164_);
v___x_3243_ = lean_box(0);
v_isShared_3244_ = v_isSharedCheck_3248_;
goto v_resetjp_3242_;
}
v_resetjp_3242_:
{
lean_object* v___x_3246_; 
if (v_isShared_3244_ == 0)
{
v___x_3246_ = v___x_3243_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v_a_3241_);
v___x_3246_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
return v___x_3246_;
}
}
}
}
}
else
{
lean_object* v_a_3466_; lean_object* v___x_3468_; uint8_t v_isShared_3469_; uint8_t v_isSharedCheck_3473_; 
lean_dec(v_a_3138_);
lean_dec(v_a_3136_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3466_ = lean_ctor_get(v___x_3139_, 0);
v_isSharedCheck_3473_ = !lean_is_exclusive(v___x_3139_);
if (v_isSharedCheck_3473_ == 0)
{
v___x_3468_ = v___x_3139_;
v_isShared_3469_ = v_isSharedCheck_3473_;
goto v_resetjp_3467_;
}
else
{
lean_inc(v_a_3466_);
lean_dec(v___x_3139_);
v___x_3468_ = lean_box(0);
v_isShared_3469_ = v_isSharedCheck_3473_;
goto v_resetjp_3467_;
}
v_resetjp_3467_:
{
lean_object* v___x_3471_; 
if (v_isShared_3469_ == 0)
{
v___x_3471_ = v___x_3468_;
goto v_reusejp_3470_;
}
else
{
lean_object* v_reuseFailAlloc_3472_; 
v_reuseFailAlloc_3472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3472_, 0, v_a_3466_);
v___x_3471_ = v_reuseFailAlloc_3472_;
goto v_reusejp_3470_;
}
v_reusejp_3470_:
{
return v___x_3471_;
}
}
}
}
else
{
lean_object* v_a_3474_; lean_object* v___x_3476_; uint8_t v_isShared_3477_; uint8_t v_isSharedCheck_3481_; 
lean_dec(v_a_3136_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3474_ = lean_ctor_get(v___x_3137_, 0);
v_isSharedCheck_3481_ = !lean_is_exclusive(v___x_3137_);
if (v_isSharedCheck_3481_ == 0)
{
v___x_3476_ = v___x_3137_;
v_isShared_3477_ = v_isSharedCheck_3481_;
goto v_resetjp_3475_;
}
else
{
lean_inc(v_a_3474_);
lean_dec(v___x_3137_);
v___x_3476_ = lean_box(0);
v_isShared_3477_ = v_isSharedCheck_3481_;
goto v_resetjp_3475_;
}
v_resetjp_3475_:
{
lean_object* v___x_3479_; 
if (v_isShared_3477_ == 0)
{
v___x_3479_ = v___x_3476_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3480_; 
v_reuseFailAlloc_3480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3480_, 0, v_a_3474_);
v___x_3479_ = v_reuseFailAlloc_3480_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
return v___x_3479_;
}
}
}
}
else
{
lean_object* v_a_3482_; lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3489_; 
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3482_ = lean_ctor_get(v___x_3135_, 0);
v_isSharedCheck_3489_ = !lean_is_exclusive(v___x_3135_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3484_ = v___x_3135_;
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
else
{
lean_inc(v_a_3482_);
lean_dec(v___x_3135_);
v___x_3484_ = lean_box(0);
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
v_resetjp_3483_:
{
lean_object* v___x_3487_; 
if (v_isShared_3485_ == 0)
{
v___x_3487_ = v___x_3484_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v_a_3482_);
v___x_3487_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
return v___x_3487_;
}
}
}
v___jp_2624_:
{
lean_object* v___x_2660_; 
v___x_2660_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v___y_2650_, v___y_2658_, v___y_2659_);
if (lean_obj_tag(v___x_2660_) == 0)
{
lean_object* v_a_2661_; lean_object* v_structs_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; size_t v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___f_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; 
v_a_2661_ = lean_ctor_get(v___x_2660_, 0);
lean_inc(v_a_2661_);
lean_dec_ref(v___x_2660_);
v_structs_2662_ = lean_ctor_get(v_a_2661_, 0);
lean_inc_ref(v_structs_2662_);
lean_dec(v_a_2661_);
v___x_2663_ = lean_array_get_size(v_structs_2662_);
lean_dec_ref(v_structs_2662_);
v___x_2664_ = lean_unsigned_to_nat(32u);
v___x_2665_ = lean_mk_empty_array_with_capacity(v___x_2664_);
v___x_2666_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__4, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__4);
v___x_2667_ = ((size_t)5ULL);
lean_inc(v___y_2626_);
v___x_2668_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2668_, 0, v___x_2666_);
lean_ctor_set(v___x_2668_, 1, v___x_2665_);
lean_ctor_set(v___x_2668_, 2, v___y_2626_);
lean_ctor_set(v___x_2668_, 3, v___y_2626_);
lean_ctor_set_usize(v___x_2668_, 4, v___x_2667_);
v___x_2669_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__6, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__6);
v___x_2670_ = lean_box(0);
v___x_2671_ = lean_box(0);
lean_inc_ref_n(v___x_2668_, 7);
lean_inc(v___y_2629_);
lean_inc(v___y_2636_);
lean_inc(v___y_2642_);
lean_inc(v___y_2625_);
lean_inc(v___y_2632_);
v___x_2672_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v___x_2672_, 0, v___x_2663_);
lean_ctor_set(v___x_2672_, 1, v_a_2612_);
lean_ctor_set(v___x_2672_, 2, v_type_2524_);
lean_ctor_set(v___x_2672_, 3, v_val_2607_);
lean_ctor_set(v___x_2672_, 4, v___y_2643_);
lean_ctor_set(v___x_2672_, 5, v_a_2618_);
lean_ctor_set(v___x_2672_, 6, v_a_2621_);
lean_ctor_set(v___x_2672_, 7, v_a_2623_);
lean_ctor_set(v___x_2672_, 8, v___y_2641_);
lean_ctor_set(v___x_2672_, 9, v___y_2640_);
lean_ctor_set(v___x_2672_, 10, v___y_2628_);
lean_ctor_set(v___x_2672_, 11, v___y_2645_);
lean_ctor_set(v___x_2672_, 12, v___y_2632_);
lean_ctor_set(v___x_2672_, 13, v___y_2647_);
lean_ctor_set(v___x_2672_, 14, v___y_2625_);
lean_ctor_set(v___x_2672_, 15, v___y_2642_);
lean_ctor_set(v___x_2672_, 16, v___y_2636_);
lean_ctor_set(v___x_2672_, 17, v___y_2634_);
lean_ctor_set(v___x_2672_, 18, v___y_2633_);
lean_ctor_set(v___x_2672_, 19, v___y_2629_);
lean_ctor_set(v___x_2672_, 20, v___y_2648_);
lean_ctor_set(v___x_2672_, 21, v___y_2635_);
lean_ctor_set(v___x_2672_, 22, v___y_2646_);
lean_ctor_set(v___x_2672_, 23, v___y_2638_);
lean_ctor_set(v___x_2672_, 24, v___y_2639_);
lean_ctor_set(v___x_2672_, 25, v___y_2637_);
lean_ctor_set(v___x_2672_, 26, v___y_2644_);
lean_ctor_set(v___x_2672_, 27, v_homomulFn_x3f_2649_);
lean_ctor_set(v___x_2672_, 28, v___y_2631_);
lean_ctor_set(v___x_2672_, 29, v___y_2627_);
lean_ctor_set(v___x_2672_, 30, v___x_2668_);
lean_ctor_set(v___x_2672_, 31, v___x_2669_);
lean_ctor_set(v___x_2672_, 32, v___x_2668_);
lean_ctor_set(v___x_2672_, 33, v___x_2668_);
lean_ctor_set(v___x_2672_, 34, v___x_2668_);
lean_ctor_set(v___x_2672_, 35, v___x_2668_);
lean_ctor_set(v___x_2672_, 36, v___x_2670_);
lean_ctor_set(v___x_2672_, 37, v___x_2669_);
lean_ctor_set(v___x_2672_, 38, v___x_2668_);
lean_ctor_set(v___x_2672_, 39, v___x_2671_);
lean_ctor_set(v___x_2672_, 40, v___x_2668_);
lean_ctor_set(v___x_2672_, 41, v___x_2668_);
lean_ctor_set_uint8(v___x_2672_, sizeof(void*)*42, v___y_2630_);
v___f_2673_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__2), 2, 1);
lean_closure_set(v___f_2673_, 0, v___x_2672_);
v___x_2674_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_2675_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2674_, v___f_2673_, v___y_2650_, v___y_2659_);
if (lean_obj_tag(v___x_2675_) == 0)
{
lean_dec_ref(v___x_2675_);
if (lean_obj_tag(v___y_2629_) == 1)
{
if (lean_obj_tag(v___y_2632_) == 0)
{
lean_dec_ref(v___y_2629_);
lean_dec(v___y_2642_);
lean_dec(v___y_2636_);
lean_dec(v___y_2625_);
v___y_2537_ = v___x_2663_;
goto v___jp_2536_;
}
else
{
lean_dec_ref(v___y_2632_);
if (lean_obj_tag(v___y_2625_) == 0)
{
if (v___y_2630_ == 0)
{
if (lean_obj_tag(v___y_2642_) == 0)
{
lean_object* v_val_2676_; uint8_t v___x_2677_; 
v_val_2676_ = lean_ctor_get(v___y_2629_, 0);
lean_inc(v_val_2676_);
lean_dec_ref(v___y_2629_);
v___x_2677_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst(v___y_2636_);
lean_dec(v___y_2636_);
if (v___x_2677_ == 0)
{
lean_dec(v_val_2676_);
v___y_2537_ = v___x_2663_;
goto v___jp_2536_;
}
else
{
v___y_2552_ = v___y_2652_;
v___y_2553_ = v___y_2650_;
v___y_2554_ = v___y_2630_;
v___y_2555_ = v___y_2658_;
v___y_2556_ = v___y_2659_;
v___y_2557_ = v___y_2654_;
v___y_2558_ = v___x_2663_;
v___y_2559_ = v___y_2651_;
v___y_2560_ = v___y_2656_;
v___y_2561_ = v___y_2657_;
v___y_2562_ = v_val_2676_;
v___y_2563_ = v___y_2655_;
v___y_2564_ = v___y_2653_;
goto v___jp_2551_;
}
}
else
{
lean_object* v_val_2678_; 
lean_dec_ref(v___y_2642_);
lean_dec(v___y_2636_);
v_val_2678_ = lean_ctor_get(v___y_2629_, 0);
lean_inc(v_val_2678_);
lean_dec_ref(v___y_2629_);
v___y_2552_ = v___y_2652_;
v___y_2553_ = v___y_2650_;
v___y_2554_ = v___y_2630_;
v___y_2555_ = v___y_2658_;
v___y_2556_ = v___y_2659_;
v___y_2557_ = v___y_2654_;
v___y_2558_ = v___x_2663_;
v___y_2559_ = v___y_2651_;
v___y_2560_ = v___y_2656_;
v___y_2561_ = v___y_2657_;
v___y_2562_ = v_val_2678_;
v___y_2563_ = v___y_2655_;
v___y_2564_ = v___y_2653_;
goto v___jp_2551_;
}
}
else
{
lean_object* v_val_2679_; 
lean_dec(v___y_2642_);
lean_dec(v___y_2636_);
v_val_2679_ = lean_ctor_get(v___y_2629_, 0);
lean_inc(v_val_2679_);
lean_dec_ref(v___y_2629_);
v___y_2577_ = v___y_2652_;
v___y_2578_ = v___y_2650_;
v___y_2579_ = v___y_2630_;
v___y_2580_ = v___y_2658_;
v___y_2581_ = v___y_2659_;
v___y_2582_ = v___y_2654_;
v___y_2583_ = v___x_2663_;
v___y_2584_ = v___y_2651_;
v___y_2585_ = v___y_2656_;
v___y_2586_ = v___y_2657_;
v___y_2587_ = v_val_2679_;
v___y_2588_ = v___y_2655_;
v___y_2589_ = v___y_2653_;
goto v___jp_2576_;
}
}
else
{
lean_object* v_val_2680_; 
lean_dec_ref(v___y_2625_);
lean_dec(v___y_2642_);
lean_dec(v___y_2636_);
v_val_2680_ = lean_ctor_get(v___y_2629_, 0);
lean_inc(v_val_2680_);
lean_dec_ref(v___y_2629_);
v___y_2577_ = v___y_2652_;
v___y_2578_ = v___y_2650_;
v___y_2579_ = v___y_2630_;
v___y_2580_ = v___y_2658_;
v___y_2581_ = v___y_2659_;
v___y_2582_ = v___y_2654_;
v___y_2583_ = v___x_2663_;
v___y_2584_ = v___y_2651_;
v___y_2585_ = v___y_2656_;
v___y_2586_ = v___y_2657_;
v___y_2587_ = v_val_2680_;
v___y_2588_ = v___y_2655_;
v___y_2589_ = v___y_2653_;
goto v___jp_2576_;
}
}
}
else
{
lean_dec(v___y_2642_);
lean_dec(v___y_2636_);
lean_dec(v___y_2632_);
lean_dec(v___y_2629_);
lean_dec(v___y_2625_);
v___y_2537_ = v___x_2663_;
goto v___jp_2536_;
}
}
else
{
lean_object* v_a_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2688_; 
lean_dec(v___y_2642_);
lean_dec(v___y_2636_);
lean_dec(v___y_2632_);
lean_dec(v___y_2629_);
lean_dec(v___y_2625_);
v_a_2681_ = lean_ctor_get(v___x_2675_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2675_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2683_ = v___x_2675_;
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_a_2681_);
lean_dec(v___x_2675_);
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
else
{
lean_object* v_a_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2696_; 
lean_dec(v_homomulFn_x3f_2649_);
lean_dec(v___y_2648_);
lean_dec(v___y_2647_);
lean_dec_ref(v___y_2646_);
lean_dec(v___y_2645_);
lean_dec(v___y_2644_);
lean_dec_ref(v___y_2643_);
lean_dec(v___y_2642_);
lean_dec(v___y_2641_);
lean_dec(v___y_2640_);
lean_dec_ref(v___y_2639_);
lean_dec_ref(v___y_2638_);
lean_dec(v___y_2637_);
lean_dec(v___y_2636_);
lean_dec(v___y_2635_);
lean_dec_ref(v___y_2634_);
lean_dec_ref(v___y_2633_);
lean_dec(v___y_2632_);
lean_dec_ref(v___y_2631_);
lean_dec(v___y_2629_);
lean_dec(v___y_2628_);
lean_dec_ref(v___y_2627_);
lean_dec(v___y_2626_);
lean_dec(v___y_2625_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_dec(v_a_2612_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_2689_ = lean_ctor_get(v___x_2660_, 0);
v_isSharedCheck_2696_ = !lean_is_exclusive(v___x_2660_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2691_ = v___x_2660_;
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_a_2689_);
lean_dec(v___x_2660_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v___x_2694_; 
if (v_isShared_2692_ == 0)
{
v___x_2694_ = v___x_2691_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v_a_2689_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
return v___x_2694_;
}
}
}
}
v___jp_2697_:
{
lean_object* v___x_2732_; 
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_2732_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg(v_val_2607_, v_type_2524_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_, v___y_2730_, v___y_2731_);
if (lean_obj_tag(v___x_2732_) == 0)
{
lean_object* v_a_2733_; lean_object* v___x_2734_; 
v_a_2733_ = lean_ctor_get(v___x_2732_, 0);
lean_inc(v_a_2733_);
lean_dec_ref(v___x_2732_);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_2734_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___redArg(v_val_2607_, v_type_2524_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_, v___y_2730_, v___y_2731_);
if (lean_obj_tag(v___x_2734_) == 0)
{
if (lean_obj_tag(v___y_2719_) == 0)
{
lean_object* v_a_2735_; 
lean_dec(v___y_2705_);
lean_del_object(v___x_2609_);
v_a_2735_ = lean_ctor_get(v___x_2734_, 0);
lean_inc(v_a_2735_);
lean_dec_ref(v___x_2734_);
v___y_2625_ = v___y_2698_;
v___y_2626_ = v___y_2699_;
v___y_2627_ = v___y_2700_;
v___y_2628_ = v___y_2701_;
v___y_2629_ = v___y_2702_;
v___y_2630_ = v___y_2703_;
v___y_2631_ = v___y_2704_;
v___y_2632_ = v___y_2706_;
v___y_2633_ = v___y_2707_;
v___y_2634_ = v___y_2708_;
v___y_2635_ = v_ltFn_x3f_2721_;
v___y_2636_ = v___y_2709_;
v___y_2637_ = v_a_2733_;
v___y_2638_ = v___y_2710_;
v___y_2639_ = v___y_2711_;
v___y_2640_ = v___y_2712_;
v___y_2641_ = v___y_2713_;
v___y_2642_ = v___y_2714_;
v___y_2643_ = v___y_2716_;
v___y_2644_ = v_a_2735_;
v___y_2645_ = v___y_2717_;
v___y_2646_ = v___y_2718_;
v___y_2647_ = v___y_2719_;
v___y_2648_ = v___y_2720_;
v_homomulFn_x3f_2649_ = v___y_2715_;
v___y_2650_ = v___y_2722_;
v___y_2651_ = v___y_2723_;
v___y_2652_ = v___y_2724_;
v___y_2653_ = v___y_2725_;
v___y_2654_ = v___y_2726_;
v___y_2655_ = v___y_2727_;
v___y_2656_ = v___y_2728_;
v___y_2657_ = v___y_2729_;
v___y_2658_ = v___y_2730_;
v___y_2659_ = v___y_2731_;
goto v___jp_2624_;
}
else
{
lean_object* v_a_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; 
lean_dec(v___y_2715_);
v_a_2736_ = lean_ctor_get(v___x_2734_, 0);
lean_inc(v_a_2736_);
lean_dec_ref(v___x_2734_);
v___x_2737_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__8, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__8);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_2738_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg(v___x_2737_, v_val_2607_, v_type_2524_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_, v___y_2730_, v___y_2731_);
if (lean_obj_tag(v___x_2738_) == 0)
{
lean_object* v_a_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; 
v_a_2739_ = lean_ctor_get(v___x_2738_, 0);
lean_inc(v_a_2739_);
lean_dec_ref(v___x_2738_);
v___x_2740_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__10, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__10);
v___x_2741_ = l_Lean_mkConst(v___x_2740_, v___y_2705_);
lean_inc_ref_n(v_type_2524_, 3);
v___x_2742_ = l_Lean_mkApp4(v___x_2741_, v_type_2524_, v_type_2524_, v_type_2524_, v_a_2739_);
v___x_2743_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2742_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_, v___y_2730_, v___y_2731_);
if (lean_obj_tag(v___x_2743_) == 0)
{
lean_object* v_a_2744_; lean_object* v___x_2746_; 
v_a_2744_ = lean_ctor_get(v___x_2743_, 0);
lean_inc(v_a_2744_);
lean_dec_ref(v___x_2743_);
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 0, v_a_2744_);
v___x_2746_ = v___x_2609_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2747_; 
v_reuseFailAlloc_2747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2747_, 0, v_a_2744_);
v___x_2746_ = v_reuseFailAlloc_2747_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
v___y_2625_ = v___y_2698_;
v___y_2626_ = v___y_2699_;
v___y_2627_ = v___y_2700_;
v___y_2628_ = v___y_2701_;
v___y_2629_ = v___y_2702_;
v___y_2630_ = v___y_2703_;
v___y_2631_ = v___y_2704_;
v___y_2632_ = v___y_2706_;
v___y_2633_ = v___y_2707_;
v___y_2634_ = v___y_2708_;
v___y_2635_ = v_ltFn_x3f_2721_;
v___y_2636_ = v___y_2709_;
v___y_2637_ = v_a_2733_;
v___y_2638_ = v___y_2710_;
v___y_2639_ = v___y_2711_;
v___y_2640_ = v___y_2712_;
v___y_2641_ = v___y_2713_;
v___y_2642_ = v___y_2714_;
v___y_2643_ = v___y_2716_;
v___y_2644_ = v_a_2736_;
v___y_2645_ = v___y_2717_;
v___y_2646_ = v___y_2718_;
v___y_2647_ = v___y_2719_;
v___y_2648_ = v___y_2720_;
v_homomulFn_x3f_2649_ = v___x_2746_;
v___y_2650_ = v___y_2722_;
v___y_2651_ = v___y_2723_;
v___y_2652_ = v___y_2724_;
v___y_2653_ = v___y_2725_;
v___y_2654_ = v___y_2726_;
v___y_2655_ = v___y_2727_;
v___y_2656_ = v___y_2728_;
v___y_2657_ = v___y_2729_;
v___y_2658_ = v___y_2730_;
v___y_2659_ = v___y_2731_;
goto v___jp_2624_;
}
}
else
{
lean_object* v_a_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2755_; 
lean_dec_ref(v___y_2719_);
lean_dec(v_a_2736_);
lean_dec(v_a_2733_);
lean_dec(v_ltFn_x3f_2721_);
lean_dec(v___y_2720_);
lean_dec_ref(v___y_2718_);
lean_dec(v___y_2717_);
lean_dec_ref(v___y_2716_);
lean_dec(v___y_2714_);
lean_dec(v___y_2713_);
lean_dec(v___y_2712_);
lean_dec_ref(v___y_2711_);
lean_dec_ref(v___y_2710_);
lean_dec(v___y_2709_);
lean_dec_ref(v___y_2708_);
lean_dec_ref(v___y_2707_);
lean_dec(v___y_2706_);
lean_dec_ref(v___y_2704_);
lean_dec(v___y_2702_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
lean_dec(v___y_2699_);
lean_dec(v___y_2698_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_2748_ = lean_ctor_get(v___x_2743_, 0);
v_isSharedCheck_2755_ = !lean_is_exclusive(v___x_2743_);
if (v_isSharedCheck_2755_ == 0)
{
v___x_2750_ = v___x_2743_;
v_isShared_2751_ = v_isSharedCheck_2755_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_a_2748_);
lean_dec(v___x_2743_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2755_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
lean_object* v___x_2753_; 
if (v_isShared_2751_ == 0)
{
v___x_2753_ = v___x_2750_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v_a_2748_);
v___x_2753_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
return v___x_2753_;
}
}
}
}
else
{
lean_object* v_a_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2763_; 
lean_dec(v_a_2736_);
lean_dec_ref(v___y_2719_);
lean_dec(v_a_2733_);
lean_dec(v_ltFn_x3f_2721_);
lean_dec(v___y_2720_);
lean_dec_ref(v___y_2718_);
lean_dec(v___y_2717_);
lean_dec_ref(v___y_2716_);
lean_dec(v___y_2714_);
lean_dec(v___y_2713_);
lean_dec(v___y_2712_);
lean_dec_ref(v___y_2711_);
lean_dec_ref(v___y_2710_);
lean_dec(v___y_2709_);
lean_dec_ref(v___y_2708_);
lean_dec_ref(v___y_2707_);
lean_dec(v___y_2706_);
lean_dec(v___y_2705_);
lean_dec_ref(v___y_2704_);
lean_dec(v___y_2702_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
lean_dec(v___y_2699_);
lean_dec(v___y_2698_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_2756_ = lean_ctor_get(v___x_2738_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___x_2738_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2758_ = v___x_2738_;
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
else
{
lean_inc(v_a_2756_);
lean_dec(v___x_2738_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
lean_object* v___x_2761_; 
if (v_isShared_2759_ == 0)
{
v___x_2761_ = v___x_2758_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_a_2756_);
v___x_2761_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
return v___x_2761_;
}
}
}
}
}
else
{
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2771_; 
lean_dec(v_a_2733_);
lean_dec(v_ltFn_x3f_2721_);
lean_dec(v___y_2720_);
lean_dec(v___y_2719_);
lean_dec_ref(v___y_2718_);
lean_dec(v___y_2717_);
lean_dec_ref(v___y_2716_);
lean_dec(v___y_2715_);
lean_dec(v___y_2714_);
lean_dec(v___y_2713_);
lean_dec(v___y_2712_);
lean_dec_ref(v___y_2711_);
lean_dec_ref(v___y_2710_);
lean_dec(v___y_2709_);
lean_dec_ref(v___y_2708_);
lean_dec_ref(v___y_2707_);
lean_dec(v___y_2706_);
lean_dec(v___y_2705_);
lean_dec_ref(v___y_2704_);
lean_dec(v___y_2702_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
lean_dec(v___y_2699_);
lean_dec(v___y_2698_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_2764_ = lean_ctor_get(v___x_2734_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___x_2734_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2766_ = v___x_2734_;
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_a_2764_);
lean_dec(v___x_2734_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v___x_2769_; 
if (v_isShared_2767_ == 0)
{
v___x_2769_ = v___x_2766_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v_a_2764_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
return v___x_2769_;
}
}
}
}
else
{
lean_object* v_a_2772_; lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2779_; 
lean_dec(v_ltFn_x3f_2721_);
lean_dec(v___y_2720_);
lean_dec(v___y_2719_);
lean_dec_ref(v___y_2718_);
lean_dec(v___y_2717_);
lean_dec_ref(v___y_2716_);
lean_dec(v___y_2715_);
lean_dec(v___y_2714_);
lean_dec(v___y_2713_);
lean_dec(v___y_2712_);
lean_dec_ref(v___y_2711_);
lean_dec_ref(v___y_2710_);
lean_dec(v___y_2709_);
lean_dec_ref(v___y_2708_);
lean_dec_ref(v___y_2707_);
lean_dec(v___y_2706_);
lean_dec(v___y_2705_);
lean_dec_ref(v___y_2704_);
lean_dec(v___y_2702_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
lean_dec(v___y_2699_);
lean_dec(v___y_2698_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_2772_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2779_ == 0)
{
v___x_2774_ = v___x_2732_;
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
else
{
lean_inc(v_a_2772_);
lean_dec(v___x_2732_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v___x_2777_; 
if (v_isShared_2775_ == 0)
{
v___x_2777_ = v___x_2774_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_a_2772_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
}
}
v___jp_2780_:
{
if (lean_obj_tag(v_a_2621_) == 1)
{
lean_object* v_val_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; 
v_val_2815_ = lean_ctor_get(v_a_2621_, 0);
v___x_2816_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__12, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__12_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__12);
v___x_2817_ = l_Lean_mkConst(v___x_2816_, v___y_2800_);
lean_inc(v_val_2815_);
lean_inc_ref(v_type_2524_);
v___x_2818_ = l_Lean_mkAppB(v___x_2817_, v_type_2524_, v_val_2815_);
v___x_2819_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2818_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_);
if (lean_obj_tag(v___x_2819_) == 0)
{
lean_object* v_a_2820_; lean_object* v___x_2822_; 
v_a_2820_ = lean_ctor_get(v___x_2819_, 0);
lean_inc(v_a_2820_);
lean_dec_ref(v___x_2819_);
if (v_isShared_2615_ == 0)
{
lean_ctor_set_tag(v___x_2614_, 1);
lean_ctor_set(v___x_2614_, 0, v_a_2820_);
v___x_2822_ = v___x_2614_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v_a_2820_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
v___y_2698_ = v___y_2781_;
v___y_2699_ = v___y_2782_;
v___y_2700_ = v___y_2783_;
v___y_2701_ = v___y_2784_;
v___y_2702_ = v___y_2785_;
v___y_2703_ = v___y_2786_;
v___y_2704_ = v___y_2787_;
v___y_2705_ = v___y_2788_;
v___y_2706_ = v___y_2789_;
v___y_2707_ = v___y_2790_;
v___y_2708_ = v___y_2791_;
v___y_2709_ = v___y_2792_;
v___y_2710_ = v___y_2793_;
v___y_2711_ = v___y_2794_;
v___y_2712_ = v___y_2795_;
v___y_2713_ = v___y_2796_;
v___y_2714_ = v___y_2797_;
v___y_2715_ = v___y_2799_;
v___y_2716_ = v___y_2798_;
v___y_2717_ = v___y_2801_;
v___y_2718_ = v___y_2802_;
v___y_2719_ = v___y_2803_;
v___y_2720_ = v_leFn_x3f_2804_;
v_ltFn_x3f_2721_ = v___x_2822_;
v___y_2722_ = v___y_2805_;
v___y_2723_ = v___y_2806_;
v___y_2724_ = v___y_2807_;
v___y_2725_ = v___y_2808_;
v___y_2726_ = v___y_2809_;
v___y_2727_ = v___y_2810_;
v___y_2728_ = v___y_2811_;
v___y_2729_ = v___y_2812_;
v___y_2730_ = v___y_2813_;
v___y_2731_ = v___y_2814_;
goto v___jp_2697_;
}
}
else
{
lean_object* v_a_2824_; lean_object* v___x_2826_; uint8_t v_isShared_2827_; uint8_t v_isSharedCheck_2831_; 
lean_dec_ref(v_a_2621_);
lean_dec(v_leFn_x3f_2804_);
lean_dec(v___y_2803_);
lean_dec_ref(v___y_2802_);
lean_dec(v___y_2801_);
lean_dec(v___y_2799_);
lean_dec_ref(v___y_2798_);
lean_dec(v___y_2797_);
lean_dec(v___y_2796_);
lean_dec(v___y_2795_);
lean_dec_ref(v___y_2794_);
lean_dec_ref(v___y_2793_);
lean_dec(v___y_2792_);
lean_dec_ref(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec(v___y_2789_);
lean_dec(v___y_2788_);
lean_dec_ref(v___y_2787_);
lean_dec(v___y_2785_);
lean_dec(v___y_2784_);
lean_dec_ref(v___y_2783_);
lean_dec(v___y_2782_);
lean_dec(v___y_2781_);
lean_dec(v_a_2623_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_2824_ = lean_ctor_get(v___x_2819_, 0);
v_isSharedCheck_2831_ = !lean_is_exclusive(v___x_2819_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2826_ = v___x_2819_;
v_isShared_2827_ = v_isSharedCheck_2831_;
goto v_resetjp_2825_;
}
else
{
lean_inc(v_a_2824_);
lean_dec(v___x_2819_);
v___x_2826_ = lean_box(0);
v_isShared_2827_ = v_isSharedCheck_2831_;
goto v_resetjp_2825_;
}
v_resetjp_2825_:
{
lean_object* v___x_2829_; 
if (v_isShared_2827_ == 0)
{
v___x_2829_ = v___x_2826_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2830_; 
v_reuseFailAlloc_2830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2830_, 0, v_a_2824_);
v___x_2829_ = v_reuseFailAlloc_2830_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
return v___x_2829_;
}
}
}
}
else
{
lean_dec(v___y_2800_);
lean_del_object(v___x_2614_);
lean_inc(v___y_2799_);
v___y_2698_ = v___y_2781_;
v___y_2699_ = v___y_2782_;
v___y_2700_ = v___y_2783_;
v___y_2701_ = v___y_2784_;
v___y_2702_ = v___y_2785_;
v___y_2703_ = v___y_2786_;
v___y_2704_ = v___y_2787_;
v___y_2705_ = v___y_2788_;
v___y_2706_ = v___y_2789_;
v___y_2707_ = v___y_2790_;
v___y_2708_ = v___y_2791_;
v___y_2709_ = v___y_2792_;
v___y_2710_ = v___y_2793_;
v___y_2711_ = v___y_2794_;
v___y_2712_ = v___y_2795_;
v___y_2713_ = v___y_2796_;
v___y_2714_ = v___y_2797_;
v___y_2715_ = v___y_2799_;
v___y_2716_ = v___y_2798_;
v___y_2717_ = v___y_2801_;
v___y_2718_ = v___y_2802_;
v___y_2719_ = v___y_2803_;
v___y_2720_ = v_leFn_x3f_2804_;
v_ltFn_x3f_2721_ = v___y_2799_;
v___y_2722_ = v___y_2805_;
v___y_2723_ = v___y_2806_;
v___y_2724_ = v___y_2807_;
v___y_2725_ = v___y_2808_;
v___y_2726_ = v___y_2809_;
v___y_2727_ = v___y_2810_;
v___y_2728_ = v___y_2811_;
v___y_2729_ = v___y_2812_;
v___y_2730_ = v___y_2813_;
v___y_2731_ = v___y_2814_;
goto v___jp_2697_;
}
}
v___jp_2832_:
{
lean_object* v___x_2865_; 
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_2865_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg(v_val_2607_, v_type_2524_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2865_) == 0)
{
lean_object* v_a_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; 
v_a_2866_ = lean_ctor_get(v___x_2865_, 0);
lean_inc(v_a_2866_);
lean_dec_ref(v___x_2865_);
v___x_2867_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__14, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__14_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__14);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_2868_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg(v___x_2867_, v_val_2607_, v_type_2524_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2868_) == 0)
{
lean_object* v_a_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; 
v_a_2869_ = lean_ctor_get(v___x_2868_, 0);
lean_inc_n(v_a_2869_, 2);
lean_dec_ref(v___x_2868_);
v___x_2870_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__16, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__16_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__16);
lean_inc(v___y_2851_);
v___x_2871_ = l_Lean_mkConst(v___x_2870_, v___y_2851_);
lean_inc_ref(v_type_2524_);
v___x_2872_ = l_Lean_mkAppB(v___x_2871_, v_type_2524_, v_a_2869_);
v___x_2873_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(v___x_2872_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2873_) == 0)
{
lean_object* v_a_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v_a_2874_ = lean_ctor_get(v___x_2873_, 0);
lean_inc(v_a_2874_);
lean_dec_ref(v___x_2873_);
v___x_2875_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__18, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__18_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__18);
lean_inc(v___y_2851_);
v___x_2876_ = l_Lean_mkConst(v___x_2875_, v___y_2851_);
v___x_2877_ = lean_unsigned_to_nat(0u);
v___x_2878_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__19, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__19_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__19);
lean_inc_ref(v_type_2524_);
v___x_2879_ = l_Lean_mkAppB(v___x_2876_, v_type_2524_, v___x_2878_);
v___x_2880_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_2879_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2880_) == 0)
{
lean_object* v_a_2881_; lean_object* v___x_2883_; uint8_t v_isShared_2884_; uint8_t v_isSharedCheck_3102_; 
v_a_2881_ = lean_ctor_get(v___x_2880_, 0);
v_isSharedCheck_3102_ = !lean_is_exclusive(v___x_2880_);
if (v_isSharedCheck_3102_ == 0)
{
v___x_2883_ = v___x_2880_;
v_isShared_2884_ = v_isSharedCheck_3102_;
goto v_resetjp_2882_;
}
else
{
lean_inc(v_a_2881_);
lean_dec(v___x_2880_);
v___x_2883_ = lean_box(0);
v_isShared_2884_ = v_isSharedCheck_3102_;
goto v_resetjp_2882_;
}
v_resetjp_2882_:
{
if (lean_obj_tag(v_a_2881_) == 1)
{
lean_object* v_val_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_3097_; 
lean_del_object(v___x_2883_);
v_val_2885_ = lean_ctor_get(v_a_2881_, 0);
v_isSharedCheck_3097_ = !lean_is_exclusive(v_a_2881_);
if (v_isSharedCheck_3097_ == 0)
{
v___x_2887_ = v_a_2881_;
v_isShared_2888_ = v_isSharedCheck_3097_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_val_2885_);
lean_dec(v_a_2881_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_3097_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; 
v___x_2889_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__21, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__21_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__21);
lean_inc(v___y_2851_);
v___x_2890_ = l_Lean_mkConst(v___x_2889_, v___y_2851_);
lean_inc_ref(v_type_2524_);
v___x_2891_ = l_Lean_mkApp3(v___x_2890_, v_type_2524_, v___x_2878_, v_val_2885_);
v___x_2892_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2891_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2892_) == 0)
{
lean_object* v_a_2893_; lean_object* v___x_2894_; 
v_a_2893_ = lean_ctor_get(v___x_2892_, 0);
lean_inc_n(v_a_2893_, 2);
lean_dec_ref(v___x_2892_);
lean_inc(v_a_2874_);
v___x_2894_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(v_a_2874_, v_a_2893_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2894_) == 0)
{
lean_object* v___x_2895_; lean_object* v___x_2896_; 
lean_dec_ref(v___x_2894_);
v___x_2895_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__23, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__23_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__23);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_2896_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg(v___x_2895_, v_val_2607_, v_type_2524_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2896_) == 0)
{
lean_object* v_a_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; 
v_a_2897_ = lean_ctor_get(v___x_2896_, 0);
lean_inc_n(v_a_2897_, 2);
lean_dec_ref(v___x_2896_);
v___x_2898_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__25, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__25_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__25);
lean_inc(v___y_2841_);
v___x_2899_ = l_Lean_mkConst(v___x_2898_, v___y_2841_);
lean_inc_ref_n(v_type_2524_, 3);
v___x_2900_ = l_Lean_mkApp4(v___x_2899_, v_type_2524_, v_type_2524_, v_type_2524_, v_a_2897_);
v___x_2901_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2900_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2901_) == 0)
{
lean_object* v_a_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; 
v_a_2902_ = lean_ctor_get(v___x_2901_, 0);
lean_inc(v_a_2902_);
lean_dec_ref(v___x_2901_);
v___x_2903_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__27, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__27_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__27);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_2904_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg(v___x_2903_, v_val_2607_, v_type_2524_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2904_) == 0)
{
lean_object* v_a_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; 
v_a_2905_ = lean_ctor_get(v___x_2904_, 0);
lean_inc_n(v_a_2905_, 2);
lean_dec_ref(v___x_2904_);
v___x_2906_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__29, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__29_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__29);
lean_inc(v___y_2851_);
v___x_2907_ = l_Lean_mkConst(v___x_2906_, v___y_2851_);
lean_inc_ref(v_type_2524_);
v___x_2908_ = l_Lean_mkAppB(v___x_2907_, v_type_2524_, v_a_2905_);
v___x_2909_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2908_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2909_) == 0)
{
lean_object* v_a_2910_; lean_object* v___x_2911_; 
v_a_2910_ = lean_ctor_get(v___x_2909_, 0);
lean_inc(v_a_2910_);
lean_dec_ref(v___x_2909_);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_2911_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg(v_val_2607_, v_type_2524_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2911_) == 0)
{
lean_object* v_a_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; 
v_a_2912_ = lean_ctor_get(v___x_2911_, 0);
lean_inc_n(v_a_2912_, 2);
lean_dec_ref(v___x_2911_);
v___x_2913_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1);
v___x_2914_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2);
v___x_2915_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2915_, 0, v___x_2914_);
lean_ctor_set(v___x_2915_, 1, v___y_2833_);
v___x_2916_ = l_Lean_mkConst(v___x_2913_, v___x_2915_);
v___x_2917_ = l_Lean_Int_mkType;
lean_inc_ref_n(v_type_2524_, 2);
lean_inc_ref(v___x_2916_);
v___x_2918_ = l_Lean_mkApp4(v___x_2916_, v___x_2917_, v_type_2524_, v_type_2524_, v_a_2912_);
v___x_2919_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2918_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2919_) == 0)
{
lean_object* v_a_2920_; lean_object* v___x_2921_; 
v_a_2920_ = lean_ctor_get(v___x_2919_, 0);
lean_inc(v_a_2920_);
lean_dec_ref(v___x_2919_);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_2921_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___redArg(v_val_2607_, v_type_2524_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2921_) == 0)
{
lean_object* v_a_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; 
v_a_2922_ = lean_ctor_get(v___x_2921_, 0);
lean_inc_n(v_a_2922_, 2);
lean_dec_ref(v___x_2921_);
v___x_2923_ = l_Lean_Nat_mkType;
lean_inc_ref_n(v_type_2524_, 2);
v___x_2924_ = l_Lean_mkApp4(v___x_2916_, v___x_2923_, v_type_2524_, v_type_2524_, v_a_2922_);
v___x_2925_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2924_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2925_) == 0)
{
lean_object* v_a_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; 
v_a_2926_ = lean_ctor_get(v___x_2925_, 0);
lean_inc(v_a_2926_);
lean_dec_ref(v___x_2925_);
v___x_2927_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__30, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__30_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__30);
v___x_2928_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__31, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__31_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__31);
lean_inc_ref(v___y_2846_);
lean_inc_ref(v___y_2836_);
v___x_2929_ = l_Lean_Name_mkStr4(v___y_2836_, v___y_2846_, v___x_2927_, v___x_2928_);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
lean_inc_ref(v___y_2842_);
v___x_2930_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(v_a_2869_, v___y_2842_, v___x_2929_, v_val_2607_, v_type_2524_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2930_) == 0)
{
lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; 
lean_dec_ref(v___x_2930_);
v___x_2931_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__32, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__32_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__32);
lean_inc_ref(v___y_2846_);
lean_inc_ref(v___y_2836_);
v___x_2932_ = l_Lean_Name_mkStr4(v___y_2836_, v___y_2846_, v___x_2927_, v___x_2931_);
v___x_2933_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__34, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__34_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__34);
v___x_2934_ = lean_box(0);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_2935_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v___y_2845_, v___y_2842_, v___x_2932_, v___x_2933_, v_val_2607_, v_type_2524_, v___x_2934_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2935_) == 0)
{
lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; 
lean_dec_ref(v___x_2935_);
v___x_2936_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__35, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__35_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__35);
lean_inc_ref(v___y_2839_);
lean_inc_ref(v___y_2846_);
lean_inc_ref(v___y_2836_);
v___x_2937_ = l_Lean_Name_mkStr4(v___y_2836_, v___y_2846_, v___y_2839_, v___x_2936_);
v___x_2938_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__37, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__37_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__37);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
lean_inc_ref(v___y_2834_);
v___x_2939_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v_a_2897_, v___y_2834_, v___x_2937_, v___x_2938_, v_val_2607_, v_type_2524_, v___x_2934_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2939_) == 0)
{
lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; 
lean_dec_ref(v___x_2939_);
v___x_2940_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__38, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__38_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__38);
lean_inc_ref(v___y_2839_);
lean_inc_ref(v___y_2846_);
lean_inc_ref(v___y_2836_);
v___x_2941_ = l_Lean_Name_mkStr4(v___y_2836_, v___y_2846_, v___y_2839_, v___x_2940_);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
v___x_2942_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(v_a_2905_, v___y_2834_, v___x_2941_, v_val_2607_, v_type_2524_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2942_) == 0)
{
lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; 
lean_dec_ref(v___x_2942_);
v___x_2943_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__39, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__39_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__39);
lean_inc_ref(v___y_2844_);
lean_inc_ref(v___y_2846_);
lean_inc_ref(v___y_2836_);
v___x_2944_ = l_Lean_Name_mkStr4(v___y_2836_, v___y_2846_, v___y_2844_, v___x_2943_);
v___x_2945_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__41, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__41_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__41);
v___x_2946_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__42, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__42_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__42);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
lean_inc_ref(v___y_2850_);
v___x_2947_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v_a_2912_, v___y_2850_, v___x_2944_, v___x_2945_, v_val_2607_, v_type_2524_, v___x_2946_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2947_) == 0)
{
lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; 
lean_dec_ref(v___x_2947_);
v___x_2948_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__43, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__43_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__43);
lean_inc_ref(v___y_2844_);
lean_inc_ref(v___y_2846_);
lean_inc_ref(v___y_2836_);
v___x_2949_ = l_Lean_Name_mkStr4(v___y_2836_, v___y_2846_, v___y_2844_, v___x_2948_);
v___x_2950_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__44, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__44_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__44);
lean_inc_ref(v_type_2524_);
lean_inc(v_val_2607_);
lean_inc_ref(v___y_2850_);
v___x_2951_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v_a_2922_, v___y_2850_, v___x_2949_, v___x_2945_, v_val_2607_, v_type_2524_, v___x_2950_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2951_) == 0)
{
lean_dec_ref(v___x_2951_);
if (lean_obj_tag(v_a_2618_) == 1)
{
lean_object* v_val_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; 
v_val_2952_ = lean_ctor_get(v_a_2618_, 0);
v___x_2953_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__46, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__46_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__46);
lean_inc(v___y_2851_);
v___x_2954_ = l_Lean_mkConst(v___x_2953_, v___y_2851_);
lean_inc(v_val_2952_);
lean_inc_ref(v_type_2524_);
v___x_2955_ = l_Lean_mkAppB(v___x_2954_, v_type_2524_, v_val_2952_);
v___x_2956_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2955_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2956_) == 0)
{
lean_object* v_a_2957_; lean_object* v___x_2959_; 
v_a_2957_ = lean_ctor_get(v___x_2956_, 0);
lean_inc(v_a_2957_);
lean_dec_ref(v___x_2956_);
if (v_isShared_2888_ == 0)
{
lean_ctor_set(v___x_2887_, 0, v_a_2957_);
v___x_2959_ = v___x_2887_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_a_2957_);
v___x_2959_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
v___y_2781_ = v___y_2835_;
v___y_2782_ = v___x_2877_;
v___y_2783_ = v_a_2910_;
v___y_2784_ = v___y_2837_;
v___y_2785_ = v___y_2838_;
v___y_2786_ = v___y_2840_;
v___y_2787_ = v_a_2902_;
v___y_2788_ = v___y_2841_;
v___y_2789_ = v___y_2843_;
v___y_2790_ = v_a_2893_;
v___y_2791_ = v_a_2874_;
v___y_2792_ = v_charInst_x3f_2854_;
v___y_2793_ = v_a_2920_;
v___y_2794_ = v_a_2926_;
v___y_2795_ = v___y_2847_;
v___y_2796_ = v___y_2848_;
v___y_2797_ = v___y_2849_;
v___y_2798_ = v___y_2850_;
v___y_2799_ = v___x_2934_;
v___y_2800_ = v___y_2851_;
v___y_2801_ = v_a_2866_;
v___y_2802_ = v___y_2852_;
v___y_2803_ = v___y_2853_;
v_leFn_x3f_2804_ = v___x_2959_;
v___y_2805_ = v___y_2855_;
v___y_2806_ = v___y_2856_;
v___y_2807_ = v___y_2857_;
v___y_2808_ = v___y_2858_;
v___y_2809_ = v___y_2859_;
v___y_2810_ = v___y_2860_;
v___y_2811_ = v___y_2861_;
v___y_2812_ = v___y_2862_;
v___y_2813_ = v___y_2863_;
v___y_2814_ = v___y_2864_;
goto v___jp_2780_;
}
}
else
{
lean_object* v_a_2961_; lean_object* v___x_2963_; uint8_t v_isShared_2964_; uint8_t v_isSharedCheck_2968_; 
lean_dec_ref(v_a_2618_);
lean_dec(v_a_2926_);
lean_dec(v_a_2920_);
lean_dec(v_a_2910_);
lean_dec(v_a_2902_);
lean_dec(v_a_2893_);
lean_del_object(v___x_2887_);
lean_dec(v_a_2874_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec(v___y_2843_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_2961_ = lean_ctor_get(v___x_2956_, 0);
v_isSharedCheck_2968_ = !lean_is_exclusive(v___x_2956_);
if (v_isSharedCheck_2968_ == 0)
{
v___x_2963_ = v___x_2956_;
v_isShared_2964_ = v_isSharedCheck_2968_;
goto v_resetjp_2962_;
}
else
{
lean_inc(v_a_2961_);
lean_dec(v___x_2956_);
v___x_2963_ = lean_box(0);
v_isShared_2964_ = v_isSharedCheck_2968_;
goto v_resetjp_2962_;
}
v_resetjp_2962_:
{
lean_object* v___x_2966_; 
if (v_isShared_2964_ == 0)
{
v___x_2966_ = v___x_2963_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v_a_2961_);
v___x_2966_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
return v___x_2966_;
}
}
}
}
else
{
lean_del_object(v___x_2887_);
v___y_2781_ = v___y_2835_;
v___y_2782_ = v___x_2877_;
v___y_2783_ = v_a_2910_;
v___y_2784_ = v___y_2837_;
v___y_2785_ = v___y_2838_;
v___y_2786_ = v___y_2840_;
v___y_2787_ = v_a_2902_;
v___y_2788_ = v___y_2841_;
v___y_2789_ = v___y_2843_;
v___y_2790_ = v_a_2893_;
v___y_2791_ = v_a_2874_;
v___y_2792_ = v_charInst_x3f_2854_;
v___y_2793_ = v_a_2920_;
v___y_2794_ = v_a_2926_;
v___y_2795_ = v___y_2847_;
v___y_2796_ = v___y_2848_;
v___y_2797_ = v___y_2849_;
v___y_2798_ = v___y_2850_;
v___y_2799_ = v___x_2934_;
v___y_2800_ = v___y_2851_;
v___y_2801_ = v_a_2866_;
v___y_2802_ = v___y_2852_;
v___y_2803_ = v___y_2853_;
v_leFn_x3f_2804_ = v___x_2934_;
v___y_2805_ = v___y_2855_;
v___y_2806_ = v___y_2856_;
v___y_2807_ = v___y_2857_;
v___y_2808_ = v___y_2858_;
v___y_2809_ = v___y_2859_;
v___y_2810_ = v___y_2860_;
v___y_2811_ = v___y_2861_;
v___y_2812_ = v___y_2862_;
v___y_2813_ = v___y_2863_;
v___y_2814_ = v___y_2864_;
goto v___jp_2780_;
}
}
else
{
lean_object* v_a_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2976_; 
lean_dec(v_a_2926_);
lean_dec(v_a_2920_);
lean_dec(v_a_2910_);
lean_dec(v_a_2902_);
lean_dec(v_a_2893_);
lean_del_object(v___x_2887_);
lean_dec(v_a_2874_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec(v___y_2843_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_2969_ = lean_ctor_get(v___x_2951_, 0);
v_isSharedCheck_2976_ = !lean_is_exclusive(v___x_2951_);
if (v_isSharedCheck_2976_ == 0)
{
v___x_2971_ = v___x_2951_;
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_a_2969_);
lean_dec(v___x_2951_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___x_2974_; 
if (v_isShared_2972_ == 0)
{
v___x_2974_ = v___x_2971_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2975_; 
v_reuseFailAlloc_2975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2975_, 0, v_a_2969_);
v___x_2974_ = v_reuseFailAlloc_2975_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
return v___x_2974_;
}
}
}
}
else
{
lean_object* v_a_2977_; lean_object* v___x_2979_; uint8_t v_isShared_2980_; uint8_t v_isSharedCheck_2984_; 
lean_dec(v_a_2926_);
lean_dec(v_a_2922_);
lean_dec(v_a_2920_);
lean_dec(v_a_2910_);
lean_dec(v_a_2902_);
lean_dec(v_a_2893_);
lean_del_object(v___x_2887_);
lean_dec(v_a_2874_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec(v___y_2843_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_2977_ = lean_ctor_get(v___x_2947_, 0);
v_isSharedCheck_2984_ = !lean_is_exclusive(v___x_2947_);
if (v_isSharedCheck_2984_ == 0)
{
v___x_2979_ = v___x_2947_;
v_isShared_2980_ = v_isSharedCheck_2984_;
goto v_resetjp_2978_;
}
else
{
lean_inc(v_a_2977_);
lean_dec(v___x_2947_);
v___x_2979_ = lean_box(0);
v_isShared_2980_ = v_isSharedCheck_2984_;
goto v_resetjp_2978_;
}
v_resetjp_2978_:
{
lean_object* v___x_2982_; 
if (v_isShared_2980_ == 0)
{
v___x_2982_ = v___x_2979_;
goto v_reusejp_2981_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v_a_2977_);
v___x_2982_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2981_;
}
v_reusejp_2981_:
{
return v___x_2982_;
}
}
}
}
else
{
lean_object* v_a_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_2992_; 
lean_dec(v_a_2926_);
lean_dec(v_a_2922_);
lean_dec(v_a_2920_);
lean_dec(v_a_2912_);
lean_dec(v_a_2910_);
lean_dec(v_a_2902_);
lean_dec(v_a_2893_);
lean_del_object(v___x_2887_);
lean_dec(v_a_2874_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec(v___y_2843_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_2985_ = lean_ctor_get(v___x_2942_, 0);
v_isSharedCheck_2992_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_2992_ == 0)
{
v___x_2987_ = v___x_2942_;
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_a_2985_);
lean_dec(v___x_2942_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2990_; 
if (v_isShared_2988_ == 0)
{
v___x_2990_ = v___x_2987_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v_a_2985_);
v___x_2990_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
return v___x_2990_;
}
}
}
}
else
{
lean_object* v_a_2993_; lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3000_; 
lean_dec(v_a_2926_);
lean_dec(v_a_2922_);
lean_dec(v_a_2920_);
lean_dec(v_a_2912_);
lean_dec(v_a_2910_);
lean_dec(v_a_2905_);
lean_dec(v_a_2902_);
lean_dec(v_a_2893_);
lean_del_object(v___x_2887_);
lean_dec(v_a_2874_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec(v___y_2843_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_2993_ = lean_ctor_get(v___x_2939_, 0);
v_isSharedCheck_3000_ = !lean_is_exclusive(v___x_2939_);
if (v_isSharedCheck_3000_ == 0)
{
v___x_2995_ = v___x_2939_;
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
else
{
lean_inc(v_a_2993_);
lean_dec(v___x_2939_);
v___x_2995_ = lean_box(0);
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
v_resetjp_2994_:
{
lean_object* v___x_2998_; 
if (v_isShared_2996_ == 0)
{
v___x_2998_ = v___x_2995_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v_a_2993_);
v___x_2998_ = v_reuseFailAlloc_2999_;
goto v_reusejp_2997_;
}
v_reusejp_2997_:
{
return v___x_2998_;
}
}
}
}
else
{
lean_object* v_a_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3008_; 
lean_dec(v_a_2926_);
lean_dec(v_a_2922_);
lean_dec(v_a_2920_);
lean_dec(v_a_2912_);
lean_dec(v_a_2910_);
lean_dec(v_a_2905_);
lean_dec(v_a_2902_);
lean_dec(v_a_2897_);
lean_dec(v_a_2893_);
lean_del_object(v___x_2887_);
lean_dec(v_a_2874_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec(v___y_2843_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3001_ = lean_ctor_get(v___x_2935_, 0);
v_isSharedCheck_3008_ = !lean_is_exclusive(v___x_2935_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_3003_ = v___x_2935_;
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_a_3001_);
lean_dec(v___x_2935_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v___x_3006_; 
if (v_isShared_3004_ == 0)
{
v___x_3006_ = v___x_3003_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_a_3001_);
v___x_3006_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
return v___x_3006_;
}
}
}
}
else
{
lean_object* v_a_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3016_; 
lean_dec(v_a_2926_);
lean_dec(v_a_2922_);
lean_dec(v_a_2920_);
lean_dec(v_a_2912_);
lean_dec(v_a_2910_);
lean_dec(v_a_2905_);
lean_dec(v_a_2902_);
lean_dec(v_a_2897_);
lean_dec(v_a_2893_);
lean_del_object(v___x_2887_);
lean_dec(v_a_2874_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2845_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3009_ = lean_ctor_get(v___x_2930_, 0);
v_isSharedCheck_3016_ = !lean_is_exclusive(v___x_2930_);
if (v_isSharedCheck_3016_ == 0)
{
v___x_3011_ = v___x_2930_;
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_a_3009_);
lean_dec(v___x_2930_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3016_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v___x_3014_; 
if (v_isShared_3012_ == 0)
{
v___x_3014_ = v___x_3011_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v_a_3009_);
v___x_3014_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
return v___x_3014_;
}
}
}
}
else
{
lean_object* v_a_3017_; lean_object* v___x_3019_; uint8_t v_isShared_3020_; uint8_t v_isSharedCheck_3024_; 
lean_dec(v_a_2922_);
lean_dec(v_a_2920_);
lean_dec(v_a_2912_);
lean_dec(v_a_2910_);
lean_dec(v_a_2905_);
lean_dec(v_a_2902_);
lean_dec(v_a_2897_);
lean_dec(v_a_2893_);
lean_del_object(v___x_2887_);
lean_dec(v_a_2874_);
lean_dec(v_a_2869_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2845_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3017_ = lean_ctor_get(v___x_2925_, 0);
v_isSharedCheck_3024_ = !lean_is_exclusive(v___x_2925_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_3019_ = v___x_2925_;
v_isShared_3020_ = v_isSharedCheck_3024_;
goto v_resetjp_3018_;
}
else
{
lean_inc(v_a_3017_);
lean_dec(v___x_2925_);
v___x_3019_ = lean_box(0);
v_isShared_3020_ = v_isSharedCheck_3024_;
goto v_resetjp_3018_;
}
v_resetjp_3018_:
{
lean_object* v___x_3022_; 
if (v_isShared_3020_ == 0)
{
v___x_3022_ = v___x_3019_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v_a_3017_);
v___x_3022_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
return v___x_3022_;
}
}
}
}
else
{
lean_object* v_a_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3032_; 
lean_dec(v_a_2920_);
lean_dec_ref(v___x_2916_);
lean_dec(v_a_2912_);
lean_dec(v_a_2910_);
lean_dec(v_a_2905_);
lean_dec(v_a_2902_);
lean_dec(v_a_2897_);
lean_dec(v_a_2893_);
lean_del_object(v___x_2887_);
lean_dec(v_a_2874_);
lean_dec(v_a_2869_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2845_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3025_ = lean_ctor_get(v___x_2921_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_2921_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3027_ = v___x_2921_;
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_a_3025_);
lean_dec(v___x_2921_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___x_3030_; 
if (v_isShared_3028_ == 0)
{
v___x_3030_ = v___x_3027_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_a_3025_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
}
}
}
}
else
{
lean_object* v_a_3033_; lean_object* v___x_3035_; uint8_t v_isShared_3036_; uint8_t v_isSharedCheck_3040_; 
lean_dec_ref(v___x_2916_);
lean_dec(v_a_2912_);
lean_dec(v_a_2910_);
lean_dec(v_a_2905_);
lean_dec(v_a_2902_);
lean_dec(v_a_2897_);
lean_dec(v_a_2893_);
lean_del_object(v___x_2887_);
lean_dec(v_a_2874_);
lean_dec(v_a_2869_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2845_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3033_ = lean_ctor_get(v___x_2919_, 0);
v_isSharedCheck_3040_ = !lean_is_exclusive(v___x_2919_);
if (v_isSharedCheck_3040_ == 0)
{
v___x_3035_ = v___x_2919_;
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
else
{
lean_inc(v_a_3033_);
lean_dec(v___x_2919_);
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
else
{
lean_object* v_a_3041_; lean_object* v___x_3043_; uint8_t v_isShared_3044_; uint8_t v_isSharedCheck_3048_; 
lean_dec(v_a_2910_);
lean_dec(v_a_2905_);
lean_dec(v_a_2902_);
lean_dec(v_a_2897_);
lean_dec(v_a_2893_);
lean_del_object(v___x_2887_);
lean_dec(v_a_2874_);
lean_dec(v_a_2869_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2845_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3041_ = lean_ctor_get(v___x_2911_, 0);
v_isSharedCheck_3048_ = !lean_is_exclusive(v___x_2911_);
if (v_isSharedCheck_3048_ == 0)
{
v___x_3043_ = v___x_2911_;
v_isShared_3044_ = v_isSharedCheck_3048_;
goto v_resetjp_3042_;
}
else
{
lean_inc(v_a_3041_);
lean_dec(v___x_2911_);
v___x_3043_ = lean_box(0);
v_isShared_3044_ = v_isSharedCheck_3048_;
goto v_resetjp_3042_;
}
v_resetjp_3042_:
{
lean_object* v___x_3046_; 
if (v_isShared_3044_ == 0)
{
v___x_3046_ = v___x_3043_;
goto v_reusejp_3045_;
}
else
{
lean_object* v_reuseFailAlloc_3047_; 
v_reuseFailAlloc_3047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3047_, 0, v_a_3041_);
v___x_3046_ = v_reuseFailAlloc_3047_;
goto v_reusejp_3045_;
}
v_reusejp_3045_:
{
return v___x_3046_;
}
}
}
}
else
{
lean_object* v_a_3049_; lean_object* v___x_3051_; uint8_t v_isShared_3052_; uint8_t v_isSharedCheck_3056_; 
lean_dec(v_a_2905_);
lean_dec(v_a_2902_);
lean_dec(v_a_2897_);
lean_dec(v_a_2893_);
lean_del_object(v___x_2887_);
lean_dec(v_a_2874_);
lean_dec(v_a_2869_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2845_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3049_ = lean_ctor_get(v___x_2909_, 0);
v_isSharedCheck_3056_ = !lean_is_exclusive(v___x_2909_);
if (v_isSharedCheck_3056_ == 0)
{
v___x_3051_ = v___x_2909_;
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
else
{
lean_inc(v_a_3049_);
lean_dec(v___x_2909_);
v___x_3051_ = lean_box(0);
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
v_resetjp_3050_:
{
lean_object* v___x_3054_; 
if (v_isShared_3052_ == 0)
{
v___x_3054_ = v___x_3051_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3055_; 
v_reuseFailAlloc_3055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3055_, 0, v_a_3049_);
v___x_3054_ = v_reuseFailAlloc_3055_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
return v___x_3054_;
}
}
}
}
else
{
lean_object* v_a_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3064_; 
lean_dec(v_a_2902_);
lean_dec(v_a_2897_);
lean_dec(v_a_2893_);
lean_del_object(v___x_2887_);
lean_dec(v_a_2874_);
lean_dec(v_a_2869_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2845_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3057_ = lean_ctor_get(v___x_2904_, 0);
v_isSharedCheck_3064_ = !lean_is_exclusive(v___x_2904_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3059_ = v___x_2904_;
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_a_3057_);
lean_dec(v___x_2904_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v___x_3062_; 
if (v_isShared_3060_ == 0)
{
v___x_3062_ = v___x_3059_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v_a_3057_);
v___x_3062_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
return v___x_3062_;
}
}
}
}
else
{
lean_object* v_a_3065_; lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3072_; 
lean_dec(v_a_2897_);
lean_dec(v_a_2893_);
lean_del_object(v___x_2887_);
lean_dec(v_a_2874_);
lean_dec(v_a_2869_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2845_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3065_ = lean_ctor_get(v___x_2901_, 0);
v_isSharedCheck_3072_ = !lean_is_exclusive(v___x_2901_);
if (v_isSharedCheck_3072_ == 0)
{
v___x_3067_ = v___x_2901_;
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
else
{
lean_inc(v_a_3065_);
lean_dec(v___x_2901_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
lean_object* v___x_3070_; 
if (v_isShared_3068_ == 0)
{
v___x_3070_ = v___x_3067_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v_a_3065_);
v___x_3070_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
return v___x_3070_;
}
}
}
}
else
{
lean_object* v_a_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3080_; 
lean_dec(v_a_2893_);
lean_del_object(v___x_2887_);
lean_dec(v_a_2874_);
lean_dec(v_a_2869_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2845_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3073_ = lean_ctor_get(v___x_2896_, 0);
v_isSharedCheck_3080_ = !lean_is_exclusive(v___x_2896_);
if (v_isSharedCheck_3080_ == 0)
{
v___x_3075_ = v___x_2896_;
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_a_3073_);
lean_dec(v___x_2896_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3078_; 
if (v_isShared_3076_ == 0)
{
v___x_3078_ = v___x_3075_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_a_3073_);
v___x_3078_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
return v___x_3078_;
}
}
}
}
else
{
lean_object* v_a_3081_; lean_object* v___x_3083_; uint8_t v_isShared_3084_; uint8_t v_isSharedCheck_3088_; 
lean_dec(v_a_2893_);
lean_del_object(v___x_2887_);
lean_dec(v_a_2874_);
lean_dec(v_a_2869_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2845_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3081_ = lean_ctor_get(v___x_2894_, 0);
v_isSharedCheck_3088_ = !lean_is_exclusive(v___x_2894_);
if (v_isSharedCheck_3088_ == 0)
{
v___x_3083_ = v___x_2894_;
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
else
{
lean_inc(v_a_3081_);
lean_dec(v___x_2894_);
v___x_3083_ = lean_box(0);
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
v_resetjp_3082_:
{
lean_object* v___x_3086_; 
if (v_isShared_3084_ == 0)
{
v___x_3086_ = v___x_3083_;
goto v_reusejp_3085_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v_a_3081_);
v___x_3086_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3085_;
}
v_reusejp_3085_:
{
return v___x_3086_;
}
}
}
}
else
{
lean_object* v_a_3089_; lean_object* v___x_3091_; uint8_t v_isShared_3092_; uint8_t v_isSharedCheck_3096_; 
lean_del_object(v___x_2887_);
lean_dec(v_a_2874_);
lean_dec(v_a_2869_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2845_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3089_ = lean_ctor_get(v___x_2892_, 0);
v_isSharedCheck_3096_ = !lean_is_exclusive(v___x_2892_);
if (v_isSharedCheck_3096_ == 0)
{
v___x_3091_ = v___x_2892_;
v_isShared_3092_ = v_isSharedCheck_3096_;
goto v_resetjp_3090_;
}
else
{
lean_inc(v_a_3089_);
lean_dec(v___x_2892_);
v___x_3091_ = lean_box(0);
v_isShared_3092_ = v_isSharedCheck_3096_;
goto v_resetjp_3090_;
}
v_resetjp_3090_:
{
lean_object* v___x_3094_; 
if (v_isShared_3092_ == 0)
{
v___x_3094_ = v___x_3091_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v_a_3089_);
v___x_3094_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
return v___x_3094_;
}
}
}
}
}
else
{
lean_object* v___x_3098_; lean_object* v___x_3100_; 
lean_dec(v_a_2881_);
lean_dec(v_a_2874_);
lean_dec(v_a_2869_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2845_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v___x_3098_ = lean_box(0);
if (v_isShared_2884_ == 0)
{
lean_ctor_set(v___x_2883_, 0, v___x_3098_);
v___x_3100_ = v___x_2883_;
goto v_reusejp_3099_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v___x_3098_);
v___x_3100_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3099_;
}
v_reusejp_3099_:
{
return v___x_3100_;
}
}
}
}
else
{
lean_object* v_a_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3110_; 
lean_dec(v_a_2874_);
lean_dec(v_a_2869_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2845_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3103_ = lean_ctor_get(v___x_2880_, 0);
v_isSharedCheck_3110_ = !lean_is_exclusive(v___x_2880_);
if (v_isSharedCheck_3110_ == 0)
{
v___x_3105_ = v___x_2880_;
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_a_3103_);
lean_dec(v___x_2880_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v___x_3108_; 
if (v_isShared_3106_ == 0)
{
v___x_3108_ = v___x_3105_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v_a_3103_);
v___x_3108_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
return v___x_3108_;
}
}
}
}
else
{
lean_object* v_a_3111_; lean_object* v___x_3113_; uint8_t v_isShared_3114_; uint8_t v_isSharedCheck_3118_; 
lean_dec(v_a_2869_);
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2845_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3111_ = lean_ctor_get(v___x_2873_, 0);
v_isSharedCheck_3118_ = !lean_is_exclusive(v___x_2873_);
if (v_isSharedCheck_3118_ == 0)
{
v___x_3113_ = v___x_2873_;
v_isShared_3114_ = v_isSharedCheck_3118_;
goto v_resetjp_3112_;
}
else
{
lean_inc(v_a_3111_);
lean_dec(v___x_2873_);
v___x_3113_ = lean_box(0);
v_isShared_3114_ = v_isSharedCheck_3118_;
goto v_resetjp_3112_;
}
v_resetjp_3112_:
{
lean_object* v___x_3116_; 
if (v_isShared_3114_ == 0)
{
v___x_3116_ = v___x_3113_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3117_; 
v_reuseFailAlloc_3117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3117_, 0, v_a_3111_);
v___x_3116_ = v_reuseFailAlloc_3117_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
return v___x_3116_;
}
}
}
}
else
{
lean_object* v_a_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3126_; 
lean_dec(v_a_2866_);
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2845_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3119_ = lean_ctor_get(v___x_2868_, 0);
v_isSharedCheck_3126_ = !lean_is_exclusive(v___x_2868_);
if (v_isSharedCheck_3126_ == 0)
{
v___x_3121_ = v___x_2868_;
v_isShared_3122_ = v_isSharedCheck_3126_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_a_3119_);
lean_dec(v___x_2868_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3126_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3124_; 
if (v_isShared_3122_ == 0)
{
v___x_3124_ = v___x_3121_;
goto v_reusejp_3123_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v_a_3119_);
v___x_3124_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3123_;
}
v_reusejp_3123_:
{
return v___x_3124_;
}
}
}
}
else
{
lean_object* v_a_3127_; lean_object* v___x_3129_; uint8_t v_isShared_3130_; uint8_t v_isSharedCheck_3134_; 
lean_dec(v_charInst_x3f_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2845_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec(v_a_2623_);
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3127_ = lean_ctor_get(v___x_2865_, 0);
v_isSharedCheck_3134_ = !lean_is_exclusive(v___x_2865_);
if (v_isSharedCheck_3134_ == 0)
{
v___x_3129_ = v___x_2865_;
v_isShared_3130_ = v_isSharedCheck_3134_;
goto v_resetjp_3128_;
}
else
{
lean_inc(v_a_3127_);
lean_dec(v___x_2865_);
v___x_3129_ = lean_box(0);
v_isShared_3130_ = v_isSharedCheck_3134_;
goto v_resetjp_3128_;
}
v_resetjp_3128_:
{
lean_object* v___x_3132_; 
if (v_isShared_3130_ == 0)
{
v___x_3132_ = v___x_3129_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v_a_3127_);
v___x_3132_ = v_reuseFailAlloc_3133_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
return v___x_3132_;
}
}
}
}
}
else
{
lean_object* v_a_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3497_; 
lean_dec(v_a_2621_);
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3490_ = lean_ctor_get(v___x_2622_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v___x_2622_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3492_ = v___x_2622_;
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_a_3490_);
lean_dec(v___x_2622_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v___x_3495_; 
if (v_isShared_3493_ == 0)
{
v___x_3495_ = v___x_3492_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v_a_3490_);
v___x_3495_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
return v___x_3495_;
}
}
}
}
else
{
lean_object* v_a_3498_; lean_object* v___x_3500_; uint8_t v_isShared_3501_; uint8_t v_isSharedCheck_3505_; 
lean_dec(v_a_2618_);
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3498_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_3505_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_3505_ == 0)
{
v___x_3500_ = v___x_2620_;
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
else
{
lean_inc(v_a_3498_);
lean_dec(v___x_2620_);
v___x_3500_ = lean_box(0);
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
v_resetjp_3499_:
{
lean_object* v___x_3503_; 
if (v_isShared_3501_ == 0)
{
v___x_3503_ = v___x_3500_;
goto v_reusejp_3502_;
}
else
{
lean_object* v_reuseFailAlloc_3504_; 
v_reuseFailAlloc_3504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3504_, 0, v_a_3498_);
v___x_3503_ = v_reuseFailAlloc_3504_;
goto v_reusejp_3502_;
}
v_reusejp_3502_:
{
return v___x_3503_;
}
}
}
}
else
{
lean_object* v_a_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3513_; 
lean_del_object(v___x_2614_);
lean_dec(v_a_2612_);
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
v_a_3506_ = lean_ctor_get(v___x_2617_, 0);
v_isSharedCheck_3513_ = !lean_is_exclusive(v___x_2617_);
if (v_isSharedCheck_3513_ == 0)
{
v___x_3508_ = v___x_2617_;
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
else
{
lean_inc(v_a_3506_);
lean_dec(v___x_2617_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v___x_3511_; 
if (v_isShared_3509_ == 0)
{
v___x_3511_ = v___x_3508_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v_a_3506_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
return v___x_3511_;
}
}
}
}
}
else
{
lean_del_object(v___x_2609_);
lean_dec(v_val_2607_);
lean_dec_ref(v_type_2524_);
return v___x_2611_;
}
}
}
else
{
lean_object* v___x_3516_; lean_object* v___x_3518_; 
lean_dec(v_a_2603_);
lean_dec_ref(v_type_2524_);
v___x_3516_ = lean_box(0);
if (v_isShared_2606_ == 0)
{
lean_ctor_set(v___x_2605_, 0, v___x_3516_);
v___x_3518_ = v___x_2605_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v___x_3516_);
v___x_3518_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
return v___x_3518_;
}
}
}
}
else
{
lean_object* v_a_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3528_; 
lean_dec_ref(v_type_2524_);
v_a_3521_ = lean_ctor_get(v___x_2602_, 0);
v_isSharedCheck_3528_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_3528_ == 0)
{
v___x_3523_ = v___x_2602_;
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_a_3521_);
lean_dec(v___x_2602_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
lean_object* v___x_3526_; 
if (v_isShared_3524_ == 0)
{
v___x_3526_ = v___x_3523_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v_a_3521_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
return v___x_3526_;
}
}
}
v___jp_2536_:
{
lean_object* v___x_2538_; lean_object* v___x_2539_; 
v___x_2538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2538_, 0, v___y_2537_);
v___x_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2539_, 0, v___x_2538_);
return v___x_2539_;
}
v___jp_2540_:
{
if (lean_obj_tag(v___y_2542_) == 0)
{
lean_dec_ref(v___y_2542_);
v___y_2537_ = v___y_2541_;
goto v___jp_2536_;
}
else
{
lean_object* v_a_2543_; lean_object* v___x_2545_; uint8_t v_isShared_2546_; uint8_t v_isSharedCheck_2550_; 
lean_dec(v___y_2541_);
v_a_2543_ = lean_ctor_get(v___y_2542_, 0);
v_isSharedCheck_2550_ = !lean_is_exclusive(v___y_2542_);
if (v_isSharedCheck_2550_ == 0)
{
v___x_2545_ = v___y_2542_;
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
else
{
lean_inc(v_a_2543_);
lean_dec(v___y_2542_);
v___x_2545_ = lean_box(0);
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
v_resetjp_2544_:
{
lean_object* v___x_2548_; 
if (v_isShared_2546_ == 0)
{
v___x_2548_ = v___x_2545_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v_a_2543_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
}
}
v___jp_2551_:
{
lean_object* v___x_2565_; 
v___x_2565_ = l_Lean_Meta_Grind_Arith_Linear_mkVar(v___y_2562_, v___y_2554_, v___y_2558_, v___y_2553_, v___y_2559_, v___y_2552_, v___y_2564_, v___y_2557_, v___y_2563_, v___y_2560_, v___y_2561_, v___y_2555_, v___y_2556_);
if (lean_obj_tag(v___x_2565_) == 0)
{
lean_object* v_a_2566_; lean_object* v___x_2567_; 
v_a_2566_ = lean_ctor_get(v___x_2565_, 0);
lean_inc(v_a_2566_);
lean_dec_ref(v___x_2565_);
v___x_2567_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(v_a_2566_, v___y_2558_, v___y_2553_, v___y_2556_);
v___y_2541_ = v___y_2558_;
v___y_2542_ = v___x_2567_;
goto v___jp_2540_;
}
else
{
lean_object* v_a_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2575_; 
lean_dec(v___y_2558_);
v_a_2568_ = lean_ctor_get(v___x_2565_, 0);
v_isSharedCheck_2575_ = !lean_is_exclusive(v___x_2565_);
if (v_isSharedCheck_2575_ == 0)
{
v___x_2570_ = v___x_2565_;
v_isShared_2571_ = v_isSharedCheck_2575_;
goto v_resetjp_2569_;
}
else
{
lean_inc(v_a_2568_);
lean_dec(v___x_2565_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2575_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v___x_2573_; 
if (v_isShared_2571_ == 0)
{
v___x_2573_ = v___x_2570_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v_a_2568_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
return v___x_2573_;
}
}
}
}
v___jp_2576_:
{
lean_object* v___x_2590_; 
v___x_2590_ = l_Lean_Meta_Grind_Arith_Linear_mkVar(v___y_2587_, v___y_2579_, v___y_2583_, v___y_2578_, v___y_2584_, v___y_2577_, v___y_2589_, v___y_2582_, v___y_2588_, v___y_2585_, v___y_2586_, v___y_2580_, v___y_2581_);
if (lean_obj_tag(v___x_2590_) == 0)
{
lean_object* v_a_2591_; lean_object* v___x_2592_; 
v_a_2591_ = lean_ctor_get(v___x_2590_, 0);
lean_inc_n(v_a_2591_, 2);
lean_dec_ref(v___x_2590_);
v___x_2592_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg(v_a_2591_, v___y_2583_, v___y_2578_, v___y_2581_);
if (lean_obj_tag(v___x_2592_) == 0)
{
lean_object* v___x_2593_; 
lean_dec_ref(v___x_2592_);
v___x_2593_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(v_a_2591_, v___y_2583_, v___y_2578_, v___y_2581_);
v___y_2541_ = v___y_2583_;
v___y_2542_ = v___x_2593_;
goto v___jp_2540_;
}
else
{
lean_dec(v_a_2591_);
v___y_2541_ = v___y_2583_;
v___y_2542_ = v___x_2592_;
goto v___jp_2540_;
}
}
else
{
lean_object* v_a_2594_; lean_object* v___x_2596_; uint8_t v_isShared_2597_; uint8_t v_isSharedCheck_2601_; 
lean_dec(v___y_2583_);
v_a_2594_ = lean_ctor_get(v___x_2590_, 0);
v_isSharedCheck_2601_ = !lean_is_exclusive(v___x_2590_);
if (v_isSharedCheck_2601_ == 0)
{
v___x_2596_ = v___x_2590_;
v_isShared_2597_ = v_isSharedCheck_2601_;
goto v_resetjp_2595_;
}
else
{
lean_inc(v_a_2594_);
lean_dec(v___x_2590_);
v___x_2596_ = lean_box(0);
v_isShared_2597_ = v_isSharedCheck_2601_;
goto v_resetjp_2595_;
}
v_resetjp_2595_:
{
lean_object* v___x_2599_; 
if (v_isShared_2597_ == 0)
{
v___x_2599_ = v___x_2596_;
goto v_reusejp_2598_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v_a_2594_);
v___x_2599_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2598_;
}
v_reusejp_2598_:
{
return v___x_2599_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___boxed(lean_object* v_type_3529_, lean_object* v_a_3530_, lean_object* v_a_3531_, lean_object* v_a_3532_, lean_object* v_a_3533_, lean_object* v_a_3534_, lean_object* v_a_3535_, lean_object* v_a_3536_, lean_object* v_a_3537_, lean_object* v_a_3538_, lean_object* v_a_3539_, lean_object* v_a_3540_){
_start:
{
lean_object* v_res_3541_; 
v_res_3541_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f(v_type_3529_, v_a_3530_, v_a_3531_, v_a_3532_, v_a_3533_, v_a_3534_, v_a_3535_, v_a_3536_, v_a_3537_, v_a_3538_, v_a_3539_);
lean_dec(v_a_3539_);
lean_dec_ref(v_a_3538_);
lean_dec(v_a_3537_);
lean_dec_ref(v_a_3536_);
lean_dec(v_a_3535_);
lean_dec_ref(v_a_3534_);
lean_dec(v_a_3533_);
lean_dec_ref(v_a_3532_);
lean_dec(v_a_3531_);
lean_dec(v_a_3530_);
return v_res_3541_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0(lean_object* v_00_u03b2_3542_, lean_object* v_x_3543_, lean_object* v_x_3544_, lean_object* v_x_3545_){
_start:
{
lean_object* v___x_3546_; 
v___x_3546_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0___redArg(v_x_3543_, v_x_3544_, v_x_3545_);
return v___x_3546_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0(lean_object* v_00_u03b2_3547_, lean_object* v_x_3548_, size_t v_x_3549_, size_t v_x_3550_, lean_object* v_x_3551_, lean_object* v_x_3552_){
_start:
{
lean_object* v___x_3553_; 
v___x_3553_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg(v_x_3548_, v_x_3549_, v_x_3550_, v_x_3551_, v_x_3552_);
return v___x_3553_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3554_, lean_object* v_x_3555_, lean_object* v_x_3556_, lean_object* v_x_3557_, lean_object* v_x_3558_, lean_object* v_x_3559_){
_start:
{
size_t v_x_577779__boxed_3560_; size_t v_x_577780__boxed_3561_; lean_object* v_res_3562_; 
v_x_577779__boxed_3560_ = lean_unbox_usize(v_x_3556_);
lean_dec(v_x_3556_);
v_x_577780__boxed_3561_ = lean_unbox_usize(v_x_3557_);
lean_dec(v_x_3557_);
v_res_3562_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0(v_00_u03b2_3554_, v_x_3555_, v_x_577779__boxed_3560_, v_x_577780__boxed_3561_, v_x_3558_, v_x_3559_);
return v_res_3562_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3563_, lean_object* v_n_3564_, lean_object* v_k_3565_, lean_object* v_v_3566_){
_start:
{
lean_object* v___x_3567_; 
v___x_3567_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1___redArg(v_n_3564_, v_k_3565_, v_v_3566_);
return v___x_3567_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_3568_, size_t v_depth_3569_, lean_object* v_keys_3570_, lean_object* v_vals_3571_, lean_object* v_heq_3572_, lean_object* v_i_3573_, lean_object* v_entries_3574_){
_start:
{
lean_object* v___x_3575_; 
v___x_3575_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___redArg(v_depth_3569_, v_keys_3570_, v_vals_3571_, v_i_3573_, v_entries_3574_);
return v___x_3575_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_3576_, lean_object* v_depth_3577_, lean_object* v_keys_3578_, lean_object* v_vals_3579_, lean_object* v_heq_3580_, lean_object* v_i_3581_, lean_object* v_entries_3582_){
_start:
{
size_t v_depth_boxed_3583_; lean_object* v_res_3584_; 
v_depth_boxed_3583_ = lean_unbox_usize(v_depth_3577_);
lean_dec(v_depth_3577_);
v_res_3584_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2(v_00_u03b2_3576_, v_depth_boxed_3583_, v_keys_3578_, v_vals_3579_, v_heq_3580_, v_i_3581_, v_entries_3582_);
lean_dec_ref(v_vals_3579_);
lean_dec_ref(v_keys_3578_);
return v_res_3584_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_3585_, lean_object* v_x_3586_, lean_object* v_x_3587_, lean_object* v_x_3588_, lean_object* v_x_3589_){
_start:
{
lean_object* v___x_3590_; 
v___x_3590_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1_spec__2___redArg(v_x_3586_, v_x_3587_, v_x_3588_, v_x_3589_);
return v___x_3590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f___lam__0(lean_object* v_type_3591_, lean_object* v_a_3592_, lean_object* v_s_3593_){
_start:
{
lean_object* v_structs_3594_; lean_object* v_typeIdOf_3595_; lean_object* v_exprToStructId_3596_; lean_object* v_exprToStructIdEntries_3597_; lean_object* v_forbiddenNatModules_3598_; lean_object* v_natStructs_3599_; lean_object* v_natTypeIdOf_3600_; lean_object* v_exprToNatStructId_3601_; lean_object* v___x_3603_; uint8_t v_isShared_3604_; uint8_t v_isSharedCheck_3609_; 
v_structs_3594_ = lean_ctor_get(v_s_3593_, 0);
v_typeIdOf_3595_ = lean_ctor_get(v_s_3593_, 1);
v_exprToStructId_3596_ = lean_ctor_get(v_s_3593_, 2);
v_exprToStructIdEntries_3597_ = lean_ctor_get(v_s_3593_, 3);
v_forbiddenNatModules_3598_ = lean_ctor_get(v_s_3593_, 4);
v_natStructs_3599_ = lean_ctor_get(v_s_3593_, 5);
v_natTypeIdOf_3600_ = lean_ctor_get(v_s_3593_, 6);
v_exprToNatStructId_3601_ = lean_ctor_get(v_s_3593_, 7);
v_isSharedCheck_3609_ = !lean_is_exclusive(v_s_3593_);
if (v_isSharedCheck_3609_ == 0)
{
v___x_3603_ = v_s_3593_;
v_isShared_3604_ = v_isSharedCheck_3609_;
goto v_resetjp_3602_;
}
else
{
lean_inc(v_exprToNatStructId_3601_);
lean_inc(v_natTypeIdOf_3600_);
lean_inc(v_natStructs_3599_);
lean_inc(v_forbiddenNatModules_3598_);
lean_inc(v_exprToStructIdEntries_3597_);
lean_inc(v_exprToStructId_3596_);
lean_inc(v_typeIdOf_3595_);
lean_inc(v_structs_3594_);
lean_dec(v_s_3593_);
v___x_3603_ = lean_box(0);
v_isShared_3604_ = v_isSharedCheck_3609_;
goto v_resetjp_3602_;
}
v_resetjp_3602_:
{
lean_object* v___x_3605_; lean_object* v___x_3607_; 
v___x_3605_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0___redArg(v_typeIdOf_3595_, v_type_3591_, v_a_3592_);
if (v_isShared_3604_ == 0)
{
lean_ctor_set(v___x_3603_, 1, v___x_3605_);
v___x_3607_ = v___x_3603_;
goto v_reusejp_3606_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v_structs_3594_);
lean_ctor_set(v_reuseFailAlloc_3608_, 1, v___x_3605_);
lean_ctor_set(v_reuseFailAlloc_3608_, 2, v_exprToStructId_3596_);
lean_ctor_set(v_reuseFailAlloc_3608_, 3, v_exprToStructIdEntries_3597_);
lean_ctor_set(v_reuseFailAlloc_3608_, 4, v_forbiddenNatModules_3598_);
lean_ctor_set(v_reuseFailAlloc_3608_, 5, v_natStructs_3599_);
lean_ctor_set(v_reuseFailAlloc_3608_, 6, v_natTypeIdOf_3600_);
lean_ctor_set(v_reuseFailAlloc_3608_, 7, v_exprToNatStructId_3601_);
v___x_3607_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3606_;
}
v_reusejp_3606_:
{
return v___x_3607_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_3610_, lean_object* v_vals_3611_, lean_object* v_i_3612_, lean_object* v_k_3613_){
_start:
{
lean_object* v___x_3614_; uint8_t v___x_3615_; 
v___x_3614_ = lean_array_get_size(v_keys_3610_);
v___x_3615_ = lean_nat_dec_lt(v_i_3612_, v___x_3614_);
if (v___x_3615_ == 0)
{
lean_object* v___x_3616_; 
lean_dec(v_i_3612_);
v___x_3616_ = lean_box(0);
return v___x_3616_;
}
else
{
lean_object* v_k_x27_3617_; uint8_t v___x_3618_; 
v_k_x27_3617_ = lean_array_fget_borrowed(v_keys_3610_, v_i_3612_);
v___x_3618_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_k_3613_, v_k_x27_3617_);
if (v___x_3618_ == 0)
{
lean_object* v___x_3619_; lean_object* v___x_3620_; 
v___x_3619_ = lean_unsigned_to_nat(1u);
v___x_3620_ = lean_nat_add(v_i_3612_, v___x_3619_);
lean_dec(v_i_3612_);
v_i_3612_ = v___x_3620_;
goto _start;
}
else
{
lean_object* v___x_3622_; lean_object* v___x_3623_; 
v___x_3622_ = lean_array_fget_borrowed(v_vals_3611_, v_i_3612_);
lean_dec(v_i_3612_);
lean_inc(v___x_3622_);
v___x_3623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3623_, 0, v___x_3622_);
return v___x_3623_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_3624_, lean_object* v_vals_3625_, lean_object* v_i_3626_, lean_object* v_k_3627_){
_start:
{
lean_object* v_res_3628_; 
v_res_3628_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_3624_, v_vals_3625_, v_i_3626_, v_k_3627_);
lean_dec_ref(v_k_3627_);
lean_dec_ref(v_vals_3625_);
lean_dec_ref(v_keys_3624_);
return v_res_3628_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg(lean_object* v_x_3629_, size_t v_x_3630_, lean_object* v_x_3631_){
_start:
{
if (lean_obj_tag(v_x_3629_) == 0)
{
lean_object* v_es_3632_; lean_object* v___x_3633_; size_t v___x_3634_; size_t v___x_3635_; size_t v___x_3636_; lean_object* v_j_3637_; lean_object* v___x_3638_; 
v_es_3632_ = lean_ctor_get(v_x_3629_, 0);
v___x_3633_ = lean_box(2);
v___x_3634_ = ((size_t)5ULL);
v___x_3635_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1);
v___x_3636_ = lean_usize_land(v_x_3630_, v___x_3635_);
v_j_3637_ = lean_usize_to_nat(v___x_3636_);
v___x_3638_ = lean_array_get_borrowed(v___x_3633_, v_es_3632_, v_j_3637_);
lean_dec(v_j_3637_);
switch(lean_obj_tag(v___x_3638_))
{
case 0:
{
lean_object* v_key_3639_; lean_object* v_val_3640_; uint8_t v___x_3641_; 
v_key_3639_ = lean_ctor_get(v___x_3638_, 0);
v_val_3640_ = lean_ctor_get(v___x_3638_, 1);
v___x_3641_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_3631_, v_key_3639_);
if (v___x_3641_ == 0)
{
lean_object* v___x_3642_; 
v___x_3642_ = lean_box(0);
return v___x_3642_;
}
else
{
lean_object* v___x_3643_; 
lean_inc(v_val_3640_);
v___x_3643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3643_, 0, v_val_3640_);
return v___x_3643_;
}
}
case 1:
{
lean_object* v_node_3644_; size_t v___x_3645_; 
v_node_3644_ = lean_ctor_get(v___x_3638_, 0);
v___x_3645_ = lean_usize_shift_right(v_x_3630_, v___x_3634_);
v_x_3629_ = v_node_3644_;
v_x_3630_ = v___x_3645_;
goto _start;
}
default: 
{
lean_object* v___x_3647_; 
v___x_3647_ = lean_box(0);
return v___x_3647_;
}
}
}
else
{
lean_object* v_ks_3648_; lean_object* v_vs_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; 
v_ks_3648_ = lean_ctor_get(v_x_3629_, 0);
v_vs_3649_ = lean_ctor_get(v_x_3629_, 1);
v___x_3650_ = lean_unsigned_to_nat(0u);
v___x_3651_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg(v_ks_3648_, v_vs_3649_, v___x_3650_, v_x_3631_);
return v___x_3651_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_3652_, lean_object* v_x_3653_, lean_object* v_x_3654_){
_start:
{
size_t v_x_7996__boxed_3655_; lean_object* v_res_3656_; 
v_x_7996__boxed_3655_ = lean_unbox_usize(v_x_3653_);
lean_dec(v_x_3653_);
v_res_3656_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg(v_x_3652_, v_x_7996__boxed_3655_, v_x_3654_);
lean_dec_ref(v_x_3654_);
lean_dec_ref(v_x_3652_);
return v_res_3656_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(lean_object* v_x_3657_, lean_object* v_x_3658_){
_start:
{
uint64_t v___x_3659_; size_t v___x_3660_; lean_object* v___x_3661_; 
v___x_3659_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_3658_);
v___x_3660_ = lean_uint64_to_usize(v___x_3659_);
v___x_3661_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg(v_x_3657_, v___x_3660_, v_x_3658_);
return v___x_3661_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg___boxed(lean_object* v_x_3662_, lean_object* v_x_3663_){
_start:
{
lean_object* v_res_3664_; 
v_res_3664_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(v_x_3662_, v_x_3663_);
lean_dec_ref(v_x_3663_);
lean_dec_ref(v_x_3662_);
return v_res_3664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(lean_object* v_type_3665_, lean_object* v_a_3666_, lean_object* v_a_3667_, lean_object* v_a_3668_, lean_object* v_a_3669_, lean_object* v_a_3670_, lean_object* v_a_3671_, lean_object* v_a_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_, lean_object* v_a_3675_){
_start:
{
lean_object* v___x_3677_; 
v___x_3677_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_3668_);
if (lean_obj_tag(v___x_3677_) == 0)
{
lean_object* v_a_3678_; lean_object* v___x_3680_; uint8_t v_isShared_3681_; uint8_t v_isSharedCheck_3747_; 
v_a_3678_ = lean_ctor_get(v___x_3677_, 0);
v_isSharedCheck_3747_ = !lean_is_exclusive(v___x_3677_);
if (v_isSharedCheck_3747_ == 0)
{
v___x_3680_ = v___x_3677_;
v_isShared_3681_ = v_isSharedCheck_3747_;
goto v_resetjp_3679_;
}
else
{
lean_inc(v_a_3678_);
lean_dec(v___x_3677_);
v___x_3680_ = lean_box(0);
v_isShared_3681_ = v_isSharedCheck_3747_;
goto v_resetjp_3679_;
}
v_resetjp_3679_:
{
uint8_t v_linarith_3682_; 
v_linarith_3682_ = lean_ctor_get_uint8(v_a_3678_, sizeof(void*)*11 + 22);
lean_dec(v_a_3678_);
if (v_linarith_3682_ == 0)
{
lean_object* v___x_3683_; lean_object* v___x_3685_; 
lean_dec_ref(v_type_3665_);
v___x_3683_ = lean_box(0);
if (v_isShared_3681_ == 0)
{
lean_ctor_set(v___x_3680_, 0, v___x_3683_);
v___x_3685_ = v___x_3680_;
goto v_reusejp_3684_;
}
else
{
lean_object* v_reuseFailAlloc_3686_; 
v_reuseFailAlloc_3686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3686_, 0, v___x_3683_);
v___x_3685_ = v_reuseFailAlloc_3686_;
goto v_reusejp_3684_;
}
v_reusejp_3684_:
{
return v___x_3685_;
}
}
else
{
lean_object* v___x_3687_; 
lean_del_object(v___x_3680_);
lean_inc_ref(v_type_3665_);
v___x_3687_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isCutsatType(v_type_3665_, v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_);
if (lean_obj_tag(v___x_3687_) == 0)
{
lean_object* v_a_3688_; lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3738_; 
v_a_3688_ = lean_ctor_get(v___x_3687_, 0);
v_isSharedCheck_3738_ = !lean_is_exclusive(v___x_3687_);
if (v_isSharedCheck_3738_ == 0)
{
v___x_3690_ = v___x_3687_;
v_isShared_3691_ = v_isSharedCheck_3738_;
goto v_resetjp_3689_;
}
else
{
lean_inc(v_a_3688_);
lean_dec(v___x_3687_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3738_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
uint8_t v___x_3692_; 
v___x_3692_ = lean_unbox(v_a_3688_);
lean_dec(v_a_3688_);
if (v___x_3692_ == 0)
{
lean_object* v___x_3693_; 
lean_del_object(v___x_3690_);
v___x_3693_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v_a_3666_, v_a_3674_, v_a_3675_);
if (lean_obj_tag(v___x_3693_) == 0)
{
lean_object* v_a_3694_; lean_object* v___x_3696_; uint8_t v_isShared_3697_; uint8_t v_isSharedCheck_3725_; 
v_a_3694_ = lean_ctor_get(v___x_3693_, 0);
v_isSharedCheck_3725_ = !lean_is_exclusive(v___x_3693_);
if (v_isSharedCheck_3725_ == 0)
{
v___x_3696_ = v___x_3693_;
v_isShared_3697_ = v_isSharedCheck_3725_;
goto v_resetjp_3695_;
}
else
{
lean_inc(v_a_3694_);
lean_dec(v___x_3693_);
v___x_3696_ = lean_box(0);
v_isShared_3697_ = v_isSharedCheck_3725_;
goto v_resetjp_3695_;
}
v_resetjp_3695_:
{
lean_object* v_typeIdOf_3698_; lean_object* v___x_3699_; 
v_typeIdOf_3698_ = lean_ctor_get(v_a_3694_, 1);
lean_inc_ref(v_typeIdOf_3698_);
lean_dec(v_a_3694_);
v___x_3699_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(v_typeIdOf_3698_, v_type_3665_);
lean_dec_ref(v_typeIdOf_3698_);
if (lean_obj_tag(v___x_3699_) == 1)
{
lean_object* v_val_3700_; lean_object* v___x_3702_; 
lean_dec_ref(v_type_3665_);
v_val_3700_ = lean_ctor_get(v___x_3699_, 0);
lean_inc(v_val_3700_);
lean_dec_ref(v___x_3699_);
if (v_isShared_3697_ == 0)
{
lean_ctor_set(v___x_3696_, 0, v_val_3700_);
v___x_3702_ = v___x_3696_;
goto v_reusejp_3701_;
}
else
{
lean_object* v_reuseFailAlloc_3703_; 
v_reuseFailAlloc_3703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3703_, 0, v_val_3700_);
v___x_3702_ = v_reuseFailAlloc_3703_;
goto v_reusejp_3701_;
}
v_reusejp_3701_:
{
return v___x_3702_;
}
}
else
{
lean_object* v___x_3704_; 
lean_dec(v___x_3699_);
lean_del_object(v___x_3696_);
lean_inc_ref(v_type_3665_);
v___x_3704_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f(v_type_3665_, v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_);
if (lean_obj_tag(v___x_3704_) == 0)
{
lean_object* v_a_3705_; lean_object* v___f_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; 
v_a_3705_ = lean_ctor_get(v___x_3704_, 0);
lean_inc_n(v_a_3705_, 2);
lean_dec_ref(v___x_3704_);
v___f_3706_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f___lam__0), 3, 2);
lean_closure_set(v___f_3706_, 0, v_type_3665_);
lean_closure_set(v___f_3706_, 1, v_a_3705_);
v___x_3707_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_3708_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3707_, v___f_3706_, v_a_3666_, v_a_3675_);
if (lean_obj_tag(v___x_3708_) == 0)
{
lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3715_; 
v_isSharedCheck_3715_ = !lean_is_exclusive(v___x_3708_);
if (v_isSharedCheck_3715_ == 0)
{
lean_object* v_unused_3716_; 
v_unused_3716_ = lean_ctor_get(v___x_3708_, 0);
lean_dec(v_unused_3716_);
v___x_3710_ = v___x_3708_;
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
else
{
lean_dec(v___x_3708_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
lean_object* v___x_3713_; 
if (v_isShared_3711_ == 0)
{
lean_ctor_set(v___x_3710_, 0, v_a_3705_);
v___x_3713_ = v___x_3710_;
goto v_reusejp_3712_;
}
else
{
lean_object* v_reuseFailAlloc_3714_; 
v_reuseFailAlloc_3714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3714_, 0, v_a_3705_);
v___x_3713_ = v_reuseFailAlloc_3714_;
goto v_reusejp_3712_;
}
v_reusejp_3712_:
{
return v___x_3713_;
}
}
}
else
{
lean_object* v_a_3717_; lean_object* v___x_3719_; uint8_t v_isShared_3720_; uint8_t v_isSharedCheck_3724_; 
lean_dec(v_a_3705_);
v_a_3717_ = lean_ctor_get(v___x_3708_, 0);
v_isSharedCheck_3724_ = !lean_is_exclusive(v___x_3708_);
if (v_isSharedCheck_3724_ == 0)
{
v___x_3719_ = v___x_3708_;
v_isShared_3720_ = v_isSharedCheck_3724_;
goto v_resetjp_3718_;
}
else
{
lean_inc(v_a_3717_);
lean_dec(v___x_3708_);
v___x_3719_ = lean_box(0);
v_isShared_3720_ = v_isSharedCheck_3724_;
goto v_resetjp_3718_;
}
v_resetjp_3718_:
{
lean_object* v___x_3722_; 
if (v_isShared_3720_ == 0)
{
v___x_3722_ = v___x_3719_;
goto v_reusejp_3721_;
}
else
{
lean_object* v_reuseFailAlloc_3723_; 
v_reuseFailAlloc_3723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3723_, 0, v_a_3717_);
v___x_3722_ = v_reuseFailAlloc_3723_;
goto v_reusejp_3721_;
}
v_reusejp_3721_:
{
return v___x_3722_;
}
}
}
}
else
{
lean_dec_ref(v_type_3665_);
return v___x_3704_;
}
}
}
}
else
{
lean_object* v_a_3726_; lean_object* v___x_3728_; uint8_t v_isShared_3729_; uint8_t v_isSharedCheck_3733_; 
lean_dec_ref(v_type_3665_);
v_a_3726_ = lean_ctor_get(v___x_3693_, 0);
v_isSharedCheck_3733_ = !lean_is_exclusive(v___x_3693_);
if (v_isSharedCheck_3733_ == 0)
{
v___x_3728_ = v___x_3693_;
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
else
{
lean_inc(v_a_3726_);
lean_dec(v___x_3693_);
v___x_3728_ = lean_box(0);
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
v_resetjp_3727_:
{
lean_object* v___x_3731_; 
if (v_isShared_3729_ == 0)
{
v___x_3731_ = v___x_3728_;
goto v_reusejp_3730_;
}
else
{
lean_object* v_reuseFailAlloc_3732_; 
v_reuseFailAlloc_3732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3732_, 0, v_a_3726_);
v___x_3731_ = v_reuseFailAlloc_3732_;
goto v_reusejp_3730_;
}
v_reusejp_3730_:
{
return v___x_3731_;
}
}
}
}
else
{
lean_object* v___x_3734_; lean_object* v___x_3736_; 
lean_dec_ref(v_type_3665_);
v___x_3734_ = lean_box(0);
if (v_isShared_3691_ == 0)
{
lean_ctor_set(v___x_3690_, 0, v___x_3734_);
v___x_3736_ = v___x_3690_;
goto v_reusejp_3735_;
}
else
{
lean_object* v_reuseFailAlloc_3737_; 
v_reuseFailAlloc_3737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3737_, 0, v___x_3734_);
v___x_3736_ = v_reuseFailAlloc_3737_;
goto v_reusejp_3735_;
}
v_reusejp_3735_:
{
return v___x_3736_;
}
}
}
}
else
{
lean_object* v_a_3739_; lean_object* v___x_3741_; uint8_t v_isShared_3742_; uint8_t v_isSharedCheck_3746_; 
lean_dec_ref(v_type_3665_);
v_a_3739_ = lean_ctor_get(v___x_3687_, 0);
v_isSharedCheck_3746_ = !lean_is_exclusive(v___x_3687_);
if (v_isSharedCheck_3746_ == 0)
{
v___x_3741_ = v___x_3687_;
v_isShared_3742_ = v_isSharedCheck_3746_;
goto v_resetjp_3740_;
}
else
{
lean_inc(v_a_3739_);
lean_dec(v___x_3687_);
v___x_3741_ = lean_box(0);
v_isShared_3742_ = v_isSharedCheck_3746_;
goto v_resetjp_3740_;
}
v_resetjp_3740_:
{
lean_object* v___x_3744_; 
if (v_isShared_3742_ == 0)
{
v___x_3744_ = v___x_3741_;
goto v_reusejp_3743_;
}
else
{
lean_object* v_reuseFailAlloc_3745_; 
v_reuseFailAlloc_3745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3745_, 0, v_a_3739_);
v___x_3744_ = v_reuseFailAlloc_3745_;
goto v_reusejp_3743_;
}
v_reusejp_3743_:
{
return v___x_3744_;
}
}
}
}
}
}
else
{
lean_object* v_a_3748_; lean_object* v___x_3750_; uint8_t v_isShared_3751_; uint8_t v_isSharedCheck_3755_; 
lean_dec_ref(v_type_3665_);
v_a_3748_ = lean_ctor_get(v___x_3677_, 0);
v_isSharedCheck_3755_ = !lean_is_exclusive(v___x_3677_);
if (v_isSharedCheck_3755_ == 0)
{
v___x_3750_ = v___x_3677_;
v_isShared_3751_ = v_isSharedCheck_3755_;
goto v_resetjp_3749_;
}
else
{
lean_inc(v_a_3748_);
lean_dec(v___x_3677_);
v___x_3750_ = lean_box(0);
v_isShared_3751_ = v_isSharedCheck_3755_;
goto v_resetjp_3749_;
}
v_resetjp_3749_:
{
lean_object* v___x_3753_; 
if (v_isShared_3751_ == 0)
{
v___x_3753_ = v___x_3750_;
goto v_reusejp_3752_;
}
else
{
lean_object* v_reuseFailAlloc_3754_; 
v_reuseFailAlloc_3754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3754_, 0, v_a_3748_);
v___x_3753_ = v_reuseFailAlloc_3754_;
goto v_reusejp_3752_;
}
v_reusejp_3752_:
{
return v___x_3753_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f___boxed(lean_object* v_type_3756_, lean_object* v_a_3757_, lean_object* v_a_3758_, lean_object* v_a_3759_, lean_object* v_a_3760_, lean_object* v_a_3761_, lean_object* v_a_3762_, lean_object* v_a_3763_, lean_object* v_a_3764_, lean_object* v_a_3765_, lean_object* v_a_3766_, lean_object* v_a_3767_){
_start:
{
lean_object* v_res_3768_; 
v_res_3768_ = l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(v_type_3756_, v_a_3757_, v_a_3758_, v_a_3759_, v_a_3760_, v_a_3761_, v_a_3762_, v_a_3763_, v_a_3764_, v_a_3765_, v_a_3766_);
lean_dec(v_a_3766_);
lean_dec_ref(v_a_3765_);
lean_dec(v_a_3764_);
lean_dec_ref(v_a_3763_);
lean_dec(v_a_3762_);
lean_dec_ref(v_a_3761_);
lean_dec(v_a_3760_);
lean_dec_ref(v_a_3759_);
lean_dec(v_a_3758_);
lean_dec(v_a_3757_);
return v_res_3768_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0(lean_object* v_00_u03b2_3769_, lean_object* v_x_3770_, lean_object* v_x_3771_){
_start:
{
lean_object* v___x_3772_; 
v___x_3772_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(v_x_3770_, v_x_3771_);
return v___x_3772_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___boxed(lean_object* v_00_u03b2_3773_, lean_object* v_x_3774_, lean_object* v_x_3775_){
_start:
{
lean_object* v_res_3776_; 
v_res_3776_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0(v_00_u03b2_3773_, v_x_3774_, v_x_3775_);
lean_dec_ref(v_x_3775_);
lean_dec_ref(v_x_3774_);
return v_res_3776_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0(lean_object* v_00_u03b2_3777_, lean_object* v_x_3778_, size_t v_x_3779_, lean_object* v_x_3780_){
_start:
{
lean_object* v___x_3781_; 
v___x_3781_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg(v_x_3778_, v_x_3779_, v_x_3780_);
return v___x_3781_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3782_, lean_object* v_x_3783_, lean_object* v_x_3784_, lean_object* v_x_3785_){
_start:
{
size_t v_x_8224__boxed_3786_; lean_object* v_res_3787_; 
v_x_8224__boxed_3786_ = lean_unbox_usize(v_x_3784_);
lean_dec(v_x_3784_);
v_res_3787_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0(v_00_u03b2_3782_, v_x_3783_, v_x_8224__boxed_3786_, v_x_3785_);
lean_dec_ref(v_x_3785_);
lean_dec_ref(v_x_3783_);
return v_res_3787_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3788_, lean_object* v_keys_3789_, lean_object* v_vals_3790_, lean_object* v_heq_3791_, lean_object* v_i_3792_, lean_object* v_k_3793_){
_start:
{
lean_object* v___x_3794_; 
v___x_3794_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_3789_, v_vals_3790_, v_i_3792_, v_k_3793_);
return v___x_3794_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_3795_, lean_object* v_keys_3796_, lean_object* v_vals_3797_, lean_object* v_heq_3798_, lean_object* v_i_3799_, lean_object* v_k_3800_){
_start:
{
lean_object* v_res_3801_; 
v_res_3801_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1(v_00_u03b2_3795_, v_keys_3796_, v_vals_3797_, v_heq_3798_, v_i_3799_, v_k_3800_);
lean_dec_ref(v_k_3800_);
lean_dec_ref(v_vals_3797_);
lean_dec_ref(v_keys_3796_);
return v_res_3801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg(lean_object* v_u_3802_, lean_object* v_type_3803_, lean_object* v_a_3804_, lean_object* v_a_3805_, lean_object* v_a_3806_, lean_object* v_a_3807_){
_start:
{
lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; 
v___x_3809_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1);
v___x_3810_ = lean_box(0);
v___x_3811_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3811_, 0, v_u_3802_);
lean_ctor_set(v___x_3811_, 1, v___x_3810_);
v___x_3812_ = l_Lean_mkConst(v___x_3809_, v___x_3811_);
v___x_3813_ = l_Lean_Expr_app___override(v___x_3812_, v_type_3803_);
v___x_3814_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_3813_, v_a_3804_, v_a_3805_, v_a_3806_, v_a_3807_);
return v___x_3814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg___boxed(lean_object* v_u_3815_, lean_object* v_type_3816_, lean_object* v_a_3817_, lean_object* v_a_3818_, lean_object* v_a_3819_, lean_object* v_a_3820_, lean_object* v_a_3821_){
_start:
{
lean_object* v_res_3822_; 
v_res_3822_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg(v_u_3815_, v_type_3816_, v_a_3817_, v_a_3818_, v_a_3819_, v_a_3820_);
lean_dec(v_a_3820_);
lean_dec_ref(v_a_3819_);
lean_dec(v_a_3818_);
lean_dec_ref(v_a_3817_);
return v_res_3822_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f(lean_object* v_u_3823_, lean_object* v_type_3824_, lean_object* v_a_3825_, lean_object* v_a_3826_, lean_object* v_a_3827_, lean_object* v_a_3828_, lean_object* v_a_3829_, lean_object* v_a_3830_, lean_object* v_a_3831_, lean_object* v_a_3832_, lean_object* v_a_3833_, lean_object* v_a_3834_){
_start:
{
lean_object* v___x_3836_; 
v___x_3836_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg(v_u_3823_, v_type_3824_, v_a_3831_, v_a_3832_, v_a_3833_, v_a_3834_);
return v___x_3836_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___boxed(lean_object* v_u_3837_, lean_object* v_type_3838_, lean_object* v_a_3839_, lean_object* v_a_3840_, lean_object* v_a_3841_, lean_object* v_a_3842_, lean_object* v_a_3843_, lean_object* v_a_3844_, lean_object* v_a_3845_, lean_object* v_a_3846_, lean_object* v_a_3847_, lean_object* v_a_3848_, lean_object* v_a_3849_){
_start:
{
lean_object* v_res_3850_; 
v_res_3850_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f(v_u_3837_, v_type_3838_, v_a_3839_, v_a_3840_, v_a_3841_, v_a_3842_, v_a_3843_, v_a_3844_, v_a_3845_, v_a_3846_, v_a_3847_, v_a_3848_);
lean_dec(v_a_3848_);
lean_dec_ref(v_a_3847_);
lean_dec(v_a_3846_);
lean_dec_ref(v_a_3845_);
lean_dec(v_a_3844_);
lean_dec_ref(v_a_3843_);
lean_dec(v_a_3842_);
lean_dec_ref(v_a_3841_);
lean_dec(v_a_3840_);
lean_dec(v_a_3839_);
return v_res_3850_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___lam__0(lean_object* v___x_3851_, lean_object* v_s_3852_){
_start:
{
lean_object* v_structs_3853_; lean_object* v_typeIdOf_3854_; lean_object* v_exprToStructId_3855_; lean_object* v_exprToStructIdEntries_3856_; lean_object* v_forbiddenNatModules_3857_; lean_object* v_natStructs_3858_; lean_object* v_natTypeIdOf_3859_; lean_object* v_exprToNatStructId_3860_; lean_object* v___x_3862_; uint8_t v_isShared_3863_; uint8_t v_isSharedCheck_3868_; 
v_structs_3853_ = lean_ctor_get(v_s_3852_, 0);
v_typeIdOf_3854_ = lean_ctor_get(v_s_3852_, 1);
v_exprToStructId_3855_ = lean_ctor_get(v_s_3852_, 2);
v_exprToStructIdEntries_3856_ = lean_ctor_get(v_s_3852_, 3);
v_forbiddenNatModules_3857_ = lean_ctor_get(v_s_3852_, 4);
v_natStructs_3858_ = lean_ctor_get(v_s_3852_, 5);
v_natTypeIdOf_3859_ = lean_ctor_get(v_s_3852_, 6);
v_exprToNatStructId_3860_ = lean_ctor_get(v_s_3852_, 7);
v_isSharedCheck_3868_ = !lean_is_exclusive(v_s_3852_);
if (v_isSharedCheck_3868_ == 0)
{
v___x_3862_ = v_s_3852_;
v_isShared_3863_ = v_isSharedCheck_3868_;
goto v_resetjp_3861_;
}
else
{
lean_inc(v_exprToNatStructId_3860_);
lean_inc(v_natTypeIdOf_3859_);
lean_inc(v_natStructs_3858_);
lean_inc(v_forbiddenNatModules_3857_);
lean_inc(v_exprToStructIdEntries_3856_);
lean_inc(v_exprToStructId_3855_);
lean_inc(v_typeIdOf_3854_);
lean_inc(v_structs_3853_);
lean_dec(v_s_3852_);
v___x_3862_ = lean_box(0);
v_isShared_3863_ = v_isSharedCheck_3868_;
goto v_resetjp_3861_;
}
v_resetjp_3861_:
{
lean_object* v___x_3864_; lean_object* v___x_3866_; 
v___x_3864_ = lean_array_push(v_natStructs_3858_, v___x_3851_);
if (v_isShared_3863_ == 0)
{
lean_ctor_set(v___x_3862_, 5, v___x_3864_);
v___x_3866_ = v___x_3862_;
goto v_reusejp_3865_;
}
else
{
lean_object* v_reuseFailAlloc_3867_; 
v_reuseFailAlloc_3867_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3867_, 0, v_structs_3853_);
lean_ctor_set(v_reuseFailAlloc_3867_, 1, v_typeIdOf_3854_);
lean_ctor_set(v_reuseFailAlloc_3867_, 2, v_exprToStructId_3855_);
lean_ctor_set(v_reuseFailAlloc_3867_, 3, v_exprToStructIdEntries_3856_);
lean_ctor_set(v_reuseFailAlloc_3867_, 4, v_forbiddenNatModules_3857_);
lean_ctor_set(v_reuseFailAlloc_3867_, 5, v___x_3864_);
lean_ctor_set(v_reuseFailAlloc_3867_, 6, v_natTypeIdOf_3859_);
lean_ctor_set(v_reuseFailAlloc_3867_, 7, v_exprToNatStructId_3860_);
v___x_3866_ = v_reuseFailAlloc_3867_;
goto v_reusejp_3865_;
}
v_reusejp_3865_:
{
return v___x_3866_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg(lean_object* v_msg_3869_, lean_object* v___y_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_){
_start:
{
lean_object* v_ref_3875_; lean_object* v___x_3876_; lean_object* v_a_3877_; lean_object* v___x_3879_; uint8_t v_isShared_3880_; uint8_t v_isSharedCheck_3885_; 
v_ref_3875_ = lean_ctor_get(v___y_3872_, 5);
v___x_3876_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0(v_msg_3869_, v___y_3870_, v___y_3871_, v___y_3872_, v___y_3873_);
v_a_3877_ = lean_ctor_get(v___x_3876_, 0);
v_isSharedCheck_3885_ = !lean_is_exclusive(v___x_3876_);
if (v_isSharedCheck_3885_ == 0)
{
v___x_3879_ = v___x_3876_;
v_isShared_3880_ = v_isSharedCheck_3885_;
goto v_resetjp_3878_;
}
else
{
lean_inc(v_a_3877_);
lean_dec(v___x_3876_);
v___x_3879_ = lean_box(0);
v_isShared_3880_ = v_isSharedCheck_3885_;
goto v_resetjp_3878_;
}
v_resetjp_3878_:
{
lean_object* v___x_3881_; lean_object* v___x_3883_; 
lean_inc(v_ref_3875_);
v___x_3881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3881_, 0, v_ref_3875_);
lean_ctor_set(v___x_3881_, 1, v_a_3877_);
if (v_isShared_3880_ == 0)
{
lean_ctor_set_tag(v___x_3879_, 1);
lean_ctor_set(v___x_3879_, 0, v___x_3881_);
v___x_3883_ = v___x_3879_;
goto v_reusejp_3882_;
}
else
{
lean_object* v_reuseFailAlloc_3884_; 
v_reuseFailAlloc_3884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3884_, 0, v___x_3881_);
v___x_3883_ = v_reuseFailAlloc_3884_;
goto v_reusejp_3882_;
}
v_reusejp_3882_:
{
return v___x_3883_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg___boxed(lean_object* v_msg_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_){
_start:
{
lean_object* v_res_3892_; 
v_res_3892_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg(v_msg_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_);
lean_dec(v___y_3890_);
lean_dec_ref(v___y_3889_);
lean_dec(v___y_3888_);
lean_dec_ref(v___y_3887_);
return v_res_3892_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0(void){
_start:
{
lean_object* v___x_3893_; 
v___x_3893_ = lean_mk_string_unchecked("OfNatModule", 11, 11);
return v___x_3893_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1(void){
_start:
{
lean_object* v___x_3894_; 
v___x_3894_ = lean_mk_string_unchecked("Q", 1, 1);
return v___x_3894_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2(void){
_start:
{
lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; 
v___x_3895_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1);
v___x_3896_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0);
v___x_3897_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2);
v___x_3898_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1);
v___x_3899_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0);
v___x_3900_ = l_Lean_Name_mkStr5(v___x_3899_, v___x_3898_, v___x_3897_, v___x_3896_, v___x_3895_);
return v___x_3900_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__3(void){
_start:
{
lean_object* v___x_3901_; 
v___x_3901_ = lean_mk_string_unchecked("Add", 3, 3);
return v___x_3901_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__4(void){
_start:
{
lean_object* v___x_3902_; lean_object* v___x_3903_; 
v___x_3902_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__3);
v___x_3903_ = l_Lean_Name_mkStr1(v___x_3902_);
return v___x_3903_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__5(void){
_start:
{
lean_object* v___x_3904_; 
v___x_3904_ = lean_mk_string_unchecked("AddRightCancel", 14, 14);
return v___x_3904_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6(void){
_start:
{
lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; 
v___x_3905_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__5, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__5);
v___x_3906_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1);
v___x_3907_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0);
v___x_3908_ = l_Lean_Name_mkStr3(v___x_3907_, v___x_3906_, v___x_3905_);
return v___x_3908_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__7(void){
_start:
{
lean_object* v___x_3909_; 
v___x_3909_ = lean_mk_string_unchecked("toQ", 3, 3);
return v___x_3909_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8(void){
_start:
{
lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
v___x_3910_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__7, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__7);
v___x_3911_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0);
v___x_3912_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2);
v___x_3913_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1);
v___x_3914_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0);
v___x_3915_ = l_Lean_Name_mkStr5(v___x_3914_, v___x_3913_, v___x_3912_, v___x_3911_, v___x_3910_);
return v___x_3915_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__9(void){
_start:
{
lean_object* v___x_3916_; 
v___x_3916_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_3916_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__10(void){
_start:
{
lean_object* v___x_3917_; 
v___x_3917_ = lean_mk_string_unchecked("refl", 4, 4);
return v___x_3917_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__11(void){
_start:
{
lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; 
v___x_3918_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__10, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__10);
v___x_3919_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__9, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__9);
v___x_3920_ = l_Lean_Name_mkStr2(v___x_3919_, v___x_3918_);
return v___x_3920_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__12(void){
_start:
{
lean_object* v___x_3921_; 
v___x_3921_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_3921_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__13(void){
_start:
{
lean_object* v___x_3922_; lean_object* v___x_3923_; 
v___x_3922_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__12, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__12_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__12);
v___x_3923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3923_, 0, v___x_3922_);
return v___x_3923_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__14(void){
_start:
{
lean_object* v___x_3924_; 
v___x_3924_ = lean_mk_string_unchecked("`grind` unexpected failure, failure to initialize auxiliary `IntModule`", 71, 71);
return v___x_3924_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__15(void){
_start:
{
lean_object* v___x_3925_; lean_object* v___x_3926_; 
v___x_3925_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__14, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__14_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__14);
v___x_3926_ = l_Lean_stringToMessageData(v___x_3925_);
return v___x_3926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f(lean_object* v_type_3927_, lean_object* v_a_3928_, lean_object* v_a_3929_, lean_object* v_a_3930_, lean_object* v_a_3931_, lean_object* v_a_3932_, lean_object* v_a_3933_, lean_object* v_a_3934_, lean_object* v_a_3935_, lean_object* v_a_3936_, lean_object* v_a_3937_){
_start:
{
lean_object* v___x_3939_; 
lean_inc_ref(v_type_3927_);
v___x_3939_ = l_Lean_Meta_getDecLevel(v_type_3927_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_);
if (lean_obj_tag(v___x_3939_) == 0)
{
lean_object* v_a_3940_; lean_object* v___x_3941_; 
v_a_3940_ = lean_ctor_get(v___x_3939_, 0);
lean_inc_n(v_a_3940_, 2);
lean_dec_ref(v___x_3939_);
lean_inc_ref(v_type_3927_);
v___x_3941_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg(v_a_3940_, v_type_3927_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_);
if (lean_obj_tag(v___x_3941_) == 0)
{
lean_object* v_a_3942_; lean_object* v___x_3944_; uint8_t v_isShared_3945_; uint8_t v_isSharedCheck_4234_; 
v_a_3942_ = lean_ctor_get(v___x_3941_, 0);
v_isSharedCheck_4234_ = !lean_is_exclusive(v___x_3941_);
if (v_isSharedCheck_4234_ == 0)
{
v___x_3944_ = v___x_3941_;
v_isShared_3945_ = v_isSharedCheck_4234_;
goto v_resetjp_3943_;
}
else
{
lean_inc(v_a_3942_);
lean_dec(v___x_3941_);
v___x_3944_ = lean_box(0);
v_isShared_3945_ = v_isSharedCheck_4234_;
goto v_resetjp_3943_;
}
v_resetjp_3943_:
{
if (lean_obj_tag(v_a_3942_) == 1)
{
lean_object* v_val_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; 
lean_del_object(v___x_3944_);
v_val_3946_ = lean_ctor_get(v_a_3942_, 0);
lean_inc_n(v_val_3946_, 2);
lean_dec_ref(v_a_3942_);
v___x_3947_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2);
v___x_3948_ = lean_box(0);
lean_inc(v_a_3940_);
v___x_3949_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3949_, 0, v_a_3940_);
lean_ctor_set(v___x_3949_, 1, v___x_3948_);
lean_inc_ref(v___x_3949_);
v___x_3950_ = l_Lean_mkConst(v___x_3947_, v___x_3949_);
lean_inc_ref(v_type_3927_);
v___x_3951_ = l_Lean_mkAppB(v___x_3950_, v_type_3927_, v_val_3946_);
v___x_3952_ = l_Lean_Meta_Sym_canon(v___x_3951_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_);
if (lean_obj_tag(v___x_3952_) == 0)
{
lean_object* v_a_3953_; lean_object* v___x_3954_; 
v_a_3953_ = lean_ctor_get(v___x_3952_, 0);
lean_inc(v_a_3953_);
lean_dec_ref(v___x_3952_);
v___x_3954_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_3953_, v_a_3933_, v_a_3937_);
if (lean_obj_tag(v___x_3954_) == 0)
{
lean_object* v_a_3955_; lean_object* v___x_3956_; 
v_a_3955_ = lean_ctor_get(v___x_3954_, 0);
lean_inc_n(v_a_3955_, 2);
lean_dec_ref(v___x_3954_);
v___x_3956_ = l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(v_a_3955_, v_a_3928_, v_a_3929_, v_a_3930_, v_a_3931_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_);
if (lean_obj_tag(v___x_3956_) == 0)
{
lean_object* v_a_3957_; 
v_a_3957_ = lean_ctor_get(v___x_3956_, 0);
lean_inc(v_a_3957_);
lean_dec_ref(v___x_3956_);
if (lean_obj_tag(v_a_3957_) == 1)
{
lean_object* v_val_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_4209_; 
v_val_3958_ = lean_ctor_get(v_a_3957_, 0);
v_isSharedCheck_4209_ = !lean_is_exclusive(v_a_3957_);
if (v_isSharedCheck_4209_ == 0)
{
v___x_3960_ = v_a_3957_;
v_isShared_3961_ = v_isSharedCheck_4209_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_val_3958_);
lean_dec(v_a_3957_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_4209_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v___x_3962_; lean_object* v___x_3963_; 
v___x_3962_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1);
lean_inc_ref(v_type_3927_);
lean_inc(v_a_3940_);
v___x_3963_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v___x_3962_, v_a_3940_, v_type_3927_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_);
if (lean_obj_tag(v___x_3963_) == 0)
{
lean_object* v_a_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; 
v_a_3964_ = lean_ctor_get(v___x_3963_, 0);
lean_inc(v_a_3964_);
lean_dec_ref(v___x_3963_);
v___x_3965_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__3);
lean_inc_ref(v_type_3927_);
lean_inc(v_a_3940_);
v___x_3966_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v___x_3965_, v_a_3940_, v_type_3927_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_);
if (lean_obj_tag(v___x_3966_) == 0)
{
lean_object* v_a_3967_; lean_object* v___x_3968_; 
v_a_3967_ = lean_ctor_get(v___x_3966_, 0);
lean_inc(v_a_3967_);
lean_dec_ref(v___x_3966_);
lean_inc(v_a_3964_);
lean_inc_ref(v_type_3927_);
lean_inc(v_a_3940_);
v___x_3968_ = l_Lean_Meta_Grind_mkIsPreorderInst_x3f___redArg(v_a_3940_, v_type_3927_, v_a_3964_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_);
if (lean_obj_tag(v___x_3968_) == 0)
{
lean_object* v_a_3969_; lean_object* v___x_3970_; 
v_a_3969_ = lean_ctor_get(v___x_3968_, 0);
lean_inc(v_a_3969_);
lean_dec_ref(v___x_3968_);
lean_inc(v_a_3964_);
lean_inc(v_a_3967_);
lean_inc_ref(v_type_3927_);
lean_inc(v_a_3940_);
v___x_3970_ = l_Lean_Meta_Grind_mkLawfulOrderLTInst_x3f___redArg(v_a_3940_, v_type_3927_, v_a_3967_, v_a_3964_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_);
if (lean_obj_tag(v___x_3970_) == 0)
{
lean_object* v_a_3971_; lean_object* v___x_3972_; 
v_a_3971_ = lean_ctor_get(v___x_3970_, 0);
lean_inc(v_a_3971_);
lean_dec_ref(v___x_3970_);
lean_inc(v_a_3964_);
lean_inc_ref(v_type_3927_);
lean_inc(v_a_3940_);
v___x_3972_ = l_Lean_Meta_Grind_mkIsLinearOrderInst_x3f___redArg(v_a_3940_, v_type_3927_, v_a_3964_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_);
if (lean_obj_tag(v___x_3972_) == 0)
{
lean_object* v_a_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; 
v_a_3973_ = lean_ctor_get(v___x_3972_, 0);
lean_inc(v_a_3973_);
lean_dec_ref(v___x_3972_);
v___x_3974_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__62, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__62_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__62);
lean_inc_ref(v_type_3927_);
lean_inc(v_a_3940_);
v___x_3975_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg(v___x_3974_, v_a_3940_, v_type_3927_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_);
if (lean_obj_tag(v___x_3975_) == 0)
{
lean_object* v_a_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; 
v_a_3976_ = lean_ctor_get(v___x_3975_, 0);
lean_inc_n(v_a_3976_, 2);
lean_dec_ref(v___x_3975_);
v___x_3977_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__64, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__64_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__64);
lean_inc_ref(v___x_3949_);
lean_inc_n(v_a_3940_, 2);
v___x_3978_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3978_, 0, v_a_3940_);
lean_ctor_set(v___x_3978_, 1, v___x_3949_);
lean_inc_ref(v___x_3978_);
v___x_3979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3979_, 0, v_a_3940_);
lean_ctor_set(v___x_3979_, 1, v___x_3978_);
v___x_3980_ = l_Lean_mkConst(v___x_3977_, v___x_3979_);
lean_inc_ref_n(v_type_3927_, 3);
v___x_3981_ = l_Lean_mkApp4(v___x_3980_, v_type_3927_, v_type_3927_, v_type_3927_, v_a_3976_);
v___x_3982_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_3981_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_);
if (lean_obj_tag(v___x_3982_) == 0)
{
lean_object* v_a_3983_; lean_object* v_orderedAddInst_x3f_3985_; lean_object* v___y_3986_; lean_object* v___y_3987_; lean_object* v___y_3988_; lean_object* v___y_3989_; lean_object* v___y_3990_; lean_object* v___y_3991_; lean_object* v___y_3992_; lean_object* v___y_3993_; lean_object* v___y_3994_; lean_object* v___y_3995_; lean_object* v___y_4127_; lean_object* v___y_4128_; lean_object* v___y_4129_; lean_object* v___y_4130_; lean_object* v___y_4131_; lean_object* v___y_4132_; lean_object* v___y_4133_; lean_object* v___y_4134_; lean_object* v___y_4135_; lean_object* v___y_4136_; 
v_a_3983_ = lean_ctor_get(v___x_3982_, 0);
lean_inc(v_a_3983_);
lean_dec_ref(v___x_3982_);
if (lean_obj_tag(v_a_3964_) == 1)
{
if (lean_obj_tag(v_a_3969_) == 1)
{
lean_object* v_val_4138_; lean_object* v_val_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; 
v_val_4138_ = lean_ctor_get(v_a_3964_, 0);
v_val_4139_ = lean_ctor_get(v_a_3969_, 0);
v___x_4140_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66);
lean_inc_ref(v___x_3949_);
v___x_4141_ = l_Lean_mkConst(v___x_4140_, v___x_3949_);
lean_inc(v_val_4139_);
lean_inc(v_val_4138_);
lean_inc_ref(v_type_3927_);
v___x_4142_ = l_Lean_mkApp4(v___x_4141_, v_type_3927_, v_a_3976_, v_val_4138_, v_val_4139_);
v___x_4143_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_4142_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_);
if (lean_obj_tag(v___x_4143_) == 0)
{
lean_object* v_a_4144_; 
v_a_4144_ = lean_ctor_get(v___x_4143_, 0);
lean_inc(v_a_4144_);
lean_dec_ref(v___x_4143_);
v_orderedAddInst_x3f_3985_ = v_a_4144_;
v___y_3986_ = v_a_3928_;
v___y_3987_ = v_a_3929_;
v___y_3988_ = v_a_3930_;
v___y_3989_ = v_a_3931_;
v___y_3990_ = v_a_3932_;
v___y_3991_ = v_a_3933_;
v___y_3992_ = v_a_3934_;
v___y_3993_ = v_a_3935_;
v___y_3994_ = v_a_3936_;
v___y_3995_ = v_a_3937_;
goto v___jp_3984_;
}
else
{
lean_object* v_a_4145_; lean_object* v___x_4147_; uint8_t v_isShared_4148_; uint8_t v_isSharedCheck_4152_; 
lean_dec_ref(v_a_3969_);
lean_dec_ref(v_a_3964_);
lean_dec(v_a_3983_);
lean_dec_ref(v___x_3978_);
lean_dec(v_a_3973_);
lean_dec(v_a_3971_);
lean_dec(v_a_3967_);
lean_del_object(v___x_3960_);
lean_dec(v_val_3958_);
lean_dec(v_a_3955_);
lean_dec_ref(v___x_3949_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4145_ = lean_ctor_get(v___x_4143_, 0);
v_isSharedCheck_4152_ = !lean_is_exclusive(v___x_4143_);
if (v_isSharedCheck_4152_ == 0)
{
v___x_4147_ = v___x_4143_;
v_isShared_4148_ = v_isSharedCheck_4152_;
goto v_resetjp_4146_;
}
else
{
lean_inc(v_a_4145_);
lean_dec(v___x_4143_);
v___x_4147_ = lean_box(0);
v_isShared_4148_ = v_isSharedCheck_4152_;
goto v_resetjp_4146_;
}
v_resetjp_4146_:
{
lean_object* v___x_4150_; 
if (v_isShared_4148_ == 0)
{
v___x_4150_ = v___x_4147_;
goto v_reusejp_4149_;
}
else
{
lean_object* v_reuseFailAlloc_4151_; 
v_reuseFailAlloc_4151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4151_, 0, v_a_4145_);
v___x_4150_ = v_reuseFailAlloc_4151_;
goto v_reusejp_4149_;
}
v_reusejp_4149_:
{
return v___x_4150_;
}
}
}
}
else
{
lean_dec(v_a_3976_);
v___y_4127_ = v_a_3928_;
v___y_4128_ = v_a_3929_;
v___y_4129_ = v_a_3930_;
v___y_4130_ = v_a_3931_;
v___y_4131_ = v_a_3932_;
v___y_4132_ = v_a_3933_;
v___y_4133_ = v_a_3934_;
v___y_4134_ = v_a_3935_;
v___y_4135_ = v_a_3936_;
v___y_4136_ = v_a_3937_;
goto v___jp_4126_;
}
}
else
{
lean_dec(v_a_3976_);
v___y_4127_ = v_a_3928_;
v___y_4128_ = v_a_3929_;
v___y_4129_ = v_a_3930_;
v___y_4130_ = v_a_3931_;
v___y_4131_ = v_a_3932_;
v___y_4132_ = v_a_3933_;
v___y_4133_ = v_a_3934_;
v___y_4134_ = v_a_3935_;
v___y_4135_ = v_a_3936_;
v___y_4136_ = v_a_3937_;
goto v___jp_4126_;
}
v___jp_3984_:
{
lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; 
v___x_3996_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__4, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__4);
lean_inc_ref(v___x_3949_);
v___x_3997_ = l_Lean_mkConst(v___x_3996_, v___x_3949_);
lean_inc_ref(v_type_3927_);
v___x_3998_ = l_Lean_Expr_app___override(v___x_3997_, v_type_3927_);
v___x_3999_ = l_Lean_Meta_Sym_synthInstance(v___x_3998_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_);
if (lean_obj_tag(v___x_3999_) == 0)
{
lean_object* v_a_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; 
v_a_4000_ = lean_ctor_get(v___x_3999_, 0);
lean_inc(v_a_4000_);
lean_dec_ref(v___x_3999_);
v___x_4001_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6);
lean_inc_ref(v___x_3949_);
v___x_4002_ = l_Lean_mkConst(v___x_4001_, v___x_3949_);
lean_inc_ref(v_type_3927_);
v___x_4003_ = l_Lean_mkAppB(v___x_4002_, v_type_3927_, v_a_4000_);
v___x_4004_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_4003_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_);
if (lean_obj_tag(v___x_4004_) == 0)
{
lean_object* v_a_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; 
v_a_4005_ = lean_ctor_get(v___x_4004_, 0);
lean_inc(v_a_4005_);
lean_dec_ref(v___x_4004_);
v___x_4006_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8);
lean_inc_ref(v___x_3949_);
v___x_4007_ = l_Lean_mkConst(v___x_4006_, v___x_3949_);
lean_inc(v_val_3946_);
lean_inc_ref(v_type_3927_);
v___x_4008_ = l_Lean_mkAppB(v___x_4007_, v_type_3927_, v_val_3946_);
v___x_4009_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_4008_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_);
if (lean_obj_tag(v___x_4009_) == 0)
{
lean_object* v_a_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; 
v_a_4010_ = lean_ctor_get(v___x_4009_, 0);
lean_inc(v_a_4010_);
lean_dec_ref(v___x_4009_);
v___x_4011_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__14, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__14_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__14);
lean_inc_ref(v_type_3927_);
lean_inc(v_a_3940_);
v___x_4012_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg(v___x_4011_, v_a_3940_, v_type_3927_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_);
if (lean_obj_tag(v___x_4012_) == 0)
{
lean_object* v_a_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; 
v_a_4013_ = lean_ctor_get(v___x_4012_, 0);
lean_inc(v_a_4013_);
lean_dec_ref(v___x_4012_);
v___x_4014_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__16, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__16_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__16);
v___x_4015_ = l_Lean_mkConst(v___x_4014_, v___x_3949_);
lean_inc_ref(v_type_3927_);
v___x_4016_ = l_Lean_mkAppB(v___x_4015_, v_type_3927_, v_a_4013_);
v___x_4017_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(v___x_4016_, v___y_3986_, v___y_3987_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_);
if (lean_obj_tag(v___x_4017_) == 0)
{
lean_object* v_a_4018_; lean_object* v___x_4019_; 
v_a_4018_ = lean_ctor_get(v___x_4017_, 0);
lean_inc(v_a_4018_);
lean_dec_ref(v___x_4017_);
lean_inc_ref(v_type_3927_);
lean_inc(v_a_3940_);
v___x_4019_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___redArg(v_a_3940_, v_type_3927_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_);
if (lean_obj_tag(v___x_4019_) == 0)
{
lean_object* v_a_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; 
v_a_4020_ = lean_ctor_get(v___x_4019_, 0);
lean_inc(v_a_4020_);
lean_dec_ref(v___x_4019_);
v___x_4021_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1);
v___x_4022_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2);
v___x_4023_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4023_, 0, v___x_4022_);
lean_ctor_set(v___x_4023_, 1, v___x_3978_);
v___x_4024_ = l_Lean_mkConst(v___x_4021_, v___x_4023_);
v___x_4025_ = l_Lean_Nat_mkType;
lean_inc_ref_n(v_type_3927_, 2);
v___x_4026_ = l_Lean_mkApp4(v___x_4024_, v___x_4025_, v_type_3927_, v_type_3927_, v_a_4020_);
v___x_4027_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_4026_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_);
if (lean_obj_tag(v___x_4027_) == 0)
{
lean_object* v_a_4028_; lean_object* v___x_4029_; 
v_a_4028_ = lean_ctor_get(v___x_4027_, 0);
lean_inc(v_a_4028_);
lean_dec_ref(v___x_4027_);
v___x_4029_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v___y_3986_, v___y_3994_, v___y_3995_);
if (lean_obj_tag(v___x_4029_) == 0)
{
lean_object* v_a_4030_; lean_object* v_natStructs_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___f_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; 
v_a_4030_ = lean_ctor_get(v___x_4029_, 0);
lean_inc(v_a_4030_);
lean_dec_ref(v___x_4029_);
v_natStructs_4031_ = lean_ctor_get(v_a_4030_, 5);
lean_inc_ref(v_natStructs_4031_);
lean_dec(v_a_4030_);
v___x_4032_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__11, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__11_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__11);
lean_inc(v_a_3940_);
v___x_4033_ = l_Lean_Level_succ___override(v_a_3940_);
v___x_4034_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4034_, 0, v___x_4033_);
lean_ctor_set(v___x_4034_, 1, v___x_3948_);
v___x_4035_ = l_Lean_mkConst(v___x_4032_, v___x_4034_);
v___x_4036_ = l_Lean_Expr_app___override(v___x_4035_, v_a_3955_);
v___x_4037_ = lean_array_get_size(v_natStructs_4031_);
lean_dec_ref(v_natStructs_4031_);
v___x_4038_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__13, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__13);
v___x_4039_ = lean_alloc_ctor(0, 18, 0);
lean_ctor_set(v___x_4039_, 0, v___x_4037_);
lean_ctor_set(v___x_4039_, 1, v_val_3958_);
lean_ctor_set(v___x_4039_, 2, v_type_3927_);
lean_ctor_set(v___x_4039_, 3, v_a_3940_);
lean_ctor_set(v___x_4039_, 4, v_val_3946_);
lean_ctor_set(v___x_4039_, 5, v_a_3964_);
lean_ctor_set(v___x_4039_, 6, v_a_3967_);
lean_ctor_set(v___x_4039_, 7, v_a_3971_);
lean_ctor_set(v___x_4039_, 8, v_a_3969_);
lean_ctor_set(v___x_4039_, 9, v_orderedAddInst_x3f_3985_);
lean_ctor_set(v___x_4039_, 10, v_a_3973_);
lean_ctor_set(v___x_4039_, 11, v_a_4005_);
lean_ctor_set(v___x_4039_, 12, v___x_4036_);
lean_ctor_set(v___x_4039_, 13, v_a_4018_);
lean_ctor_set(v___x_4039_, 14, v_a_4010_);
lean_ctor_set(v___x_4039_, 15, v_a_3983_);
lean_ctor_set(v___x_4039_, 16, v_a_4028_);
lean_ctor_set(v___x_4039_, 17, v___x_4038_);
v___f_4040_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___lam__0), 2, 1);
lean_closure_set(v___f_4040_, 0, v___x_4039_);
v___x_4041_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_4042_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_4041_, v___f_4040_, v___y_3986_, v___y_3995_);
if (lean_obj_tag(v___x_4042_) == 0)
{
lean_object* v___x_4044_; uint8_t v_isShared_4045_; uint8_t v_isSharedCheck_4052_; 
v_isSharedCheck_4052_ = !lean_is_exclusive(v___x_4042_);
if (v_isSharedCheck_4052_ == 0)
{
lean_object* v_unused_4053_; 
v_unused_4053_ = lean_ctor_get(v___x_4042_, 0);
lean_dec(v_unused_4053_);
v___x_4044_ = v___x_4042_;
v_isShared_4045_ = v_isSharedCheck_4052_;
goto v_resetjp_4043_;
}
else
{
lean_dec(v___x_4042_);
v___x_4044_ = lean_box(0);
v_isShared_4045_ = v_isSharedCheck_4052_;
goto v_resetjp_4043_;
}
v_resetjp_4043_:
{
lean_object* v___x_4047_; 
if (v_isShared_3961_ == 0)
{
lean_ctor_set(v___x_3960_, 0, v___x_4037_);
v___x_4047_ = v___x_3960_;
goto v_reusejp_4046_;
}
else
{
lean_object* v_reuseFailAlloc_4051_; 
v_reuseFailAlloc_4051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4051_, 0, v___x_4037_);
v___x_4047_ = v_reuseFailAlloc_4051_;
goto v_reusejp_4046_;
}
v_reusejp_4046_:
{
lean_object* v___x_4049_; 
if (v_isShared_4045_ == 0)
{
lean_ctor_set(v___x_4044_, 0, v___x_4047_);
v___x_4049_ = v___x_4044_;
goto v_reusejp_4048_;
}
else
{
lean_object* v_reuseFailAlloc_4050_; 
v_reuseFailAlloc_4050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4050_, 0, v___x_4047_);
v___x_4049_ = v_reuseFailAlloc_4050_;
goto v_reusejp_4048_;
}
v_reusejp_4048_:
{
return v___x_4049_;
}
}
}
}
else
{
lean_object* v_a_4054_; lean_object* v___x_4056_; uint8_t v_isShared_4057_; uint8_t v_isSharedCheck_4061_; 
lean_del_object(v___x_3960_);
v_a_4054_ = lean_ctor_get(v___x_4042_, 0);
v_isSharedCheck_4061_ = !lean_is_exclusive(v___x_4042_);
if (v_isSharedCheck_4061_ == 0)
{
v___x_4056_ = v___x_4042_;
v_isShared_4057_ = v_isSharedCheck_4061_;
goto v_resetjp_4055_;
}
else
{
lean_inc(v_a_4054_);
lean_dec(v___x_4042_);
v___x_4056_ = lean_box(0);
v_isShared_4057_ = v_isSharedCheck_4061_;
goto v_resetjp_4055_;
}
v_resetjp_4055_:
{
lean_object* v___x_4059_; 
if (v_isShared_4057_ == 0)
{
v___x_4059_ = v___x_4056_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4060_; 
v_reuseFailAlloc_4060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4060_, 0, v_a_4054_);
v___x_4059_ = v_reuseFailAlloc_4060_;
goto v_reusejp_4058_;
}
v_reusejp_4058_:
{
return v___x_4059_;
}
}
}
}
else
{
lean_object* v_a_4062_; lean_object* v___x_4064_; uint8_t v_isShared_4065_; uint8_t v_isSharedCheck_4069_; 
lean_dec(v_a_4028_);
lean_dec(v_a_4018_);
lean_dec(v_a_4010_);
lean_dec(v_a_4005_);
lean_dec(v_orderedAddInst_x3f_3985_);
lean_dec(v_a_3983_);
lean_dec(v_a_3973_);
lean_dec(v_a_3971_);
lean_dec(v_a_3969_);
lean_dec(v_a_3967_);
lean_dec(v_a_3964_);
lean_del_object(v___x_3960_);
lean_dec(v_val_3958_);
lean_dec(v_a_3955_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4062_ = lean_ctor_get(v___x_4029_, 0);
v_isSharedCheck_4069_ = !lean_is_exclusive(v___x_4029_);
if (v_isSharedCheck_4069_ == 0)
{
v___x_4064_ = v___x_4029_;
v_isShared_4065_ = v_isSharedCheck_4069_;
goto v_resetjp_4063_;
}
else
{
lean_inc(v_a_4062_);
lean_dec(v___x_4029_);
v___x_4064_ = lean_box(0);
v_isShared_4065_ = v_isSharedCheck_4069_;
goto v_resetjp_4063_;
}
v_resetjp_4063_:
{
lean_object* v___x_4067_; 
if (v_isShared_4065_ == 0)
{
v___x_4067_ = v___x_4064_;
goto v_reusejp_4066_;
}
else
{
lean_object* v_reuseFailAlloc_4068_; 
v_reuseFailAlloc_4068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4068_, 0, v_a_4062_);
v___x_4067_ = v_reuseFailAlloc_4068_;
goto v_reusejp_4066_;
}
v_reusejp_4066_:
{
return v___x_4067_;
}
}
}
}
else
{
lean_object* v_a_4070_; lean_object* v___x_4072_; uint8_t v_isShared_4073_; uint8_t v_isSharedCheck_4077_; 
lean_dec(v_a_4018_);
lean_dec(v_a_4010_);
lean_dec(v_a_4005_);
lean_dec(v_orderedAddInst_x3f_3985_);
lean_dec(v_a_3983_);
lean_dec(v_a_3973_);
lean_dec(v_a_3971_);
lean_dec(v_a_3969_);
lean_dec(v_a_3967_);
lean_dec(v_a_3964_);
lean_del_object(v___x_3960_);
lean_dec(v_val_3958_);
lean_dec(v_a_3955_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4070_ = lean_ctor_get(v___x_4027_, 0);
v_isSharedCheck_4077_ = !lean_is_exclusive(v___x_4027_);
if (v_isSharedCheck_4077_ == 0)
{
v___x_4072_ = v___x_4027_;
v_isShared_4073_ = v_isSharedCheck_4077_;
goto v_resetjp_4071_;
}
else
{
lean_inc(v_a_4070_);
lean_dec(v___x_4027_);
v___x_4072_ = lean_box(0);
v_isShared_4073_ = v_isSharedCheck_4077_;
goto v_resetjp_4071_;
}
v_resetjp_4071_:
{
lean_object* v___x_4075_; 
if (v_isShared_4073_ == 0)
{
v___x_4075_ = v___x_4072_;
goto v_reusejp_4074_;
}
else
{
lean_object* v_reuseFailAlloc_4076_; 
v_reuseFailAlloc_4076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4076_, 0, v_a_4070_);
v___x_4075_ = v_reuseFailAlloc_4076_;
goto v_reusejp_4074_;
}
v_reusejp_4074_:
{
return v___x_4075_;
}
}
}
}
else
{
lean_object* v_a_4078_; lean_object* v___x_4080_; uint8_t v_isShared_4081_; uint8_t v_isSharedCheck_4085_; 
lean_dec(v_a_4018_);
lean_dec(v_a_4010_);
lean_dec(v_a_4005_);
lean_dec(v_orderedAddInst_x3f_3985_);
lean_dec(v_a_3983_);
lean_dec_ref(v___x_3978_);
lean_dec(v_a_3973_);
lean_dec(v_a_3971_);
lean_dec(v_a_3969_);
lean_dec(v_a_3967_);
lean_dec(v_a_3964_);
lean_del_object(v___x_3960_);
lean_dec(v_val_3958_);
lean_dec(v_a_3955_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4078_ = lean_ctor_get(v___x_4019_, 0);
v_isSharedCheck_4085_ = !lean_is_exclusive(v___x_4019_);
if (v_isSharedCheck_4085_ == 0)
{
v___x_4080_ = v___x_4019_;
v_isShared_4081_ = v_isSharedCheck_4085_;
goto v_resetjp_4079_;
}
else
{
lean_inc(v_a_4078_);
lean_dec(v___x_4019_);
v___x_4080_ = lean_box(0);
v_isShared_4081_ = v_isSharedCheck_4085_;
goto v_resetjp_4079_;
}
v_resetjp_4079_:
{
lean_object* v___x_4083_; 
if (v_isShared_4081_ == 0)
{
v___x_4083_ = v___x_4080_;
goto v_reusejp_4082_;
}
else
{
lean_object* v_reuseFailAlloc_4084_; 
v_reuseFailAlloc_4084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4084_, 0, v_a_4078_);
v___x_4083_ = v_reuseFailAlloc_4084_;
goto v_reusejp_4082_;
}
v_reusejp_4082_:
{
return v___x_4083_;
}
}
}
}
else
{
lean_object* v_a_4086_; lean_object* v___x_4088_; uint8_t v_isShared_4089_; uint8_t v_isSharedCheck_4093_; 
lean_dec(v_a_4010_);
lean_dec(v_a_4005_);
lean_dec(v_orderedAddInst_x3f_3985_);
lean_dec(v_a_3983_);
lean_dec_ref(v___x_3978_);
lean_dec(v_a_3973_);
lean_dec(v_a_3971_);
lean_dec(v_a_3969_);
lean_dec(v_a_3967_);
lean_dec(v_a_3964_);
lean_del_object(v___x_3960_);
lean_dec(v_val_3958_);
lean_dec(v_a_3955_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4086_ = lean_ctor_get(v___x_4017_, 0);
v_isSharedCheck_4093_ = !lean_is_exclusive(v___x_4017_);
if (v_isSharedCheck_4093_ == 0)
{
v___x_4088_ = v___x_4017_;
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
else
{
lean_inc(v_a_4086_);
lean_dec(v___x_4017_);
v___x_4088_ = lean_box(0);
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
v_resetjp_4087_:
{
lean_object* v___x_4091_; 
if (v_isShared_4089_ == 0)
{
v___x_4091_ = v___x_4088_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v_a_4086_);
v___x_4091_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
return v___x_4091_;
}
}
}
}
else
{
lean_object* v_a_4094_; lean_object* v___x_4096_; uint8_t v_isShared_4097_; uint8_t v_isSharedCheck_4101_; 
lean_dec(v_a_4010_);
lean_dec(v_a_4005_);
lean_dec(v_orderedAddInst_x3f_3985_);
lean_dec(v_a_3983_);
lean_dec_ref(v___x_3978_);
lean_dec(v_a_3973_);
lean_dec(v_a_3971_);
lean_dec(v_a_3969_);
lean_dec(v_a_3967_);
lean_dec(v_a_3964_);
lean_del_object(v___x_3960_);
lean_dec(v_val_3958_);
lean_dec(v_a_3955_);
lean_dec_ref(v___x_3949_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4094_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4101_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4101_ == 0)
{
v___x_4096_ = v___x_4012_;
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
else
{
lean_inc(v_a_4094_);
lean_dec(v___x_4012_);
v___x_4096_ = lean_box(0);
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
v_resetjp_4095_:
{
lean_object* v___x_4099_; 
if (v_isShared_4097_ == 0)
{
v___x_4099_ = v___x_4096_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v_a_4094_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
return v___x_4099_;
}
}
}
}
else
{
lean_object* v_a_4102_; lean_object* v___x_4104_; uint8_t v_isShared_4105_; uint8_t v_isSharedCheck_4109_; 
lean_dec(v_a_4005_);
lean_dec(v_orderedAddInst_x3f_3985_);
lean_dec(v_a_3983_);
lean_dec_ref(v___x_3978_);
lean_dec(v_a_3973_);
lean_dec(v_a_3971_);
lean_dec(v_a_3969_);
lean_dec(v_a_3967_);
lean_dec(v_a_3964_);
lean_del_object(v___x_3960_);
lean_dec(v_val_3958_);
lean_dec(v_a_3955_);
lean_dec_ref(v___x_3949_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4102_ = lean_ctor_get(v___x_4009_, 0);
v_isSharedCheck_4109_ = !lean_is_exclusive(v___x_4009_);
if (v_isSharedCheck_4109_ == 0)
{
v___x_4104_ = v___x_4009_;
v_isShared_4105_ = v_isSharedCheck_4109_;
goto v_resetjp_4103_;
}
else
{
lean_inc(v_a_4102_);
lean_dec(v___x_4009_);
v___x_4104_ = lean_box(0);
v_isShared_4105_ = v_isSharedCheck_4109_;
goto v_resetjp_4103_;
}
v_resetjp_4103_:
{
lean_object* v___x_4107_; 
if (v_isShared_4105_ == 0)
{
v___x_4107_ = v___x_4104_;
goto v_reusejp_4106_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v_a_4102_);
v___x_4107_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4106_;
}
v_reusejp_4106_:
{
return v___x_4107_;
}
}
}
}
else
{
lean_object* v_a_4110_; lean_object* v___x_4112_; uint8_t v_isShared_4113_; uint8_t v_isSharedCheck_4117_; 
lean_dec(v_orderedAddInst_x3f_3985_);
lean_dec(v_a_3983_);
lean_dec_ref(v___x_3978_);
lean_dec(v_a_3973_);
lean_dec(v_a_3971_);
lean_dec(v_a_3969_);
lean_dec(v_a_3967_);
lean_dec(v_a_3964_);
lean_del_object(v___x_3960_);
lean_dec(v_val_3958_);
lean_dec(v_a_3955_);
lean_dec_ref(v___x_3949_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4110_ = lean_ctor_get(v___x_4004_, 0);
v_isSharedCheck_4117_ = !lean_is_exclusive(v___x_4004_);
if (v_isSharedCheck_4117_ == 0)
{
v___x_4112_ = v___x_4004_;
v_isShared_4113_ = v_isSharedCheck_4117_;
goto v_resetjp_4111_;
}
else
{
lean_inc(v_a_4110_);
lean_dec(v___x_4004_);
v___x_4112_ = lean_box(0);
v_isShared_4113_ = v_isSharedCheck_4117_;
goto v_resetjp_4111_;
}
v_resetjp_4111_:
{
lean_object* v___x_4115_; 
if (v_isShared_4113_ == 0)
{
v___x_4115_ = v___x_4112_;
goto v_reusejp_4114_;
}
else
{
lean_object* v_reuseFailAlloc_4116_; 
v_reuseFailAlloc_4116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4116_, 0, v_a_4110_);
v___x_4115_ = v_reuseFailAlloc_4116_;
goto v_reusejp_4114_;
}
v_reusejp_4114_:
{
return v___x_4115_;
}
}
}
}
else
{
lean_object* v_a_4118_; lean_object* v___x_4120_; uint8_t v_isShared_4121_; uint8_t v_isSharedCheck_4125_; 
lean_dec(v_orderedAddInst_x3f_3985_);
lean_dec(v_a_3983_);
lean_dec_ref(v___x_3978_);
lean_dec(v_a_3973_);
lean_dec(v_a_3971_);
lean_dec(v_a_3969_);
lean_dec(v_a_3967_);
lean_dec(v_a_3964_);
lean_del_object(v___x_3960_);
lean_dec(v_val_3958_);
lean_dec(v_a_3955_);
lean_dec_ref(v___x_3949_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4118_ = lean_ctor_get(v___x_3999_, 0);
v_isSharedCheck_4125_ = !lean_is_exclusive(v___x_3999_);
if (v_isSharedCheck_4125_ == 0)
{
v___x_4120_ = v___x_3999_;
v_isShared_4121_ = v_isSharedCheck_4125_;
goto v_resetjp_4119_;
}
else
{
lean_inc(v_a_4118_);
lean_dec(v___x_3999_);
v___x_4120_ = lean_box(0);
v_isShared_4121_ = v_isSharedCheck_4125_;
goto v_resetjp_4119_;
}
v_resetjp_4119_:
{
lean_object* v___x_4123_; 
if (v_isShared_4121_ == 0)
{
v___x_4123_ = v___x_4120_;
goto v_reusejp_4122_;
}
else
{
lean_object* v_reuseFailAlloc_4124_; 
v_reuseFailAlloc_4124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4124_, 0, v_a_4118_);
v___x_4123_ = v_reuseFailAlloc_4124_;
goto v_reusejp_4122_;
}
v_reusejp_4122_:
{
return v___x_4123_;
}
}
}
}
v___jp_4126_:
{
lean_object* v___x_4137_; 
v___x_4137_ = lean_box(0);
v_orderedAddInst_x3f_3985_ = v___x_4137_;
v___y_3986_ = v___y_4127_;
v___y_3987_ = v___y_4128_;
v___y_3988_ = v___y_4129_;
v___y_3989_ = v___y_4130_;
v___y_3990_ = v___y_4131_;
v___y_3991_ = v___y_4132_;
v___y_3992_ = v___y_4133_;
v___y_3993_ = v___y_4134_;
v___y_3994_ = v___y_4135_;
v___y_3995_ = v___y_4136_;
goto v___jp_3984_;
}
}
else
{
lean_object* v_a_4153_; lean_object* v___x_4155_; uint8_t v_isShared_4156_; uint8_t v_isSharedCheck_4160_; 
lean_dec_ref(v___x_3978_);
lean_dec(v_a_3976_);
lean_dec(v_a_3973_);
lean_dec(v_a_3971_);
lean_dec(v_a_3969_);
lean_dec(v_a_3967_);
lean_dec(v_a_3964_);
lean_del_object(v___x_3960_);
lean_dec(v_val_3958_);
lean_dec(v_a_3955_);
lean_dec_ref(v___x_3949_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4153_ = lean_ctor_get(v___x_3982_, 0);
v_isSharedCheck_4160_ = !lean_is_exclusive(v___x_3982_);
if (v_isSharedCheck_4160_ == 0)
{
v___x_4155_ = v___x_3982_;
v_isShared_4156_ = v_isSharedCheck_4160_;
goto v_resetjp_4154_;
}
else
{
lean_inc(v_a_4153_);
lean_dec(v___x_3982_);
v___x_4155_ = lean_box(0);
v_isShared_4156_ = v_isSharedCheck_4160_;
goto v_resetjp_4154_;
}
v_resetjp_4154_:
{
lean_object* v___x_4158_; 
if (v_isShared_4156_ == 0)
{
v___x_4158_ = v___x_4155_;
goto v_reusejp_4157_;
}
else
{
lean_object* v_reuseFailAlloc_4159_; 
v_reuseFailAlloc_4159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4159_, 0, v_a_4153_);
v___x_4158_ = v_reuseFailAlloc_4159_;
goto v_reusejp_4157_;
}
v_reusejp_4157_:
{
return v___x_4158_;
}
}
}
}
else
{
lean_object* v_a_4161_; lean_object* v___x_4163_; uint8_t v_isShared_4164_; uint8_t v_isSharedCheck_4168_; 
lean_dec(v_a_3973_);
lean_dec(v_a_3971_);
lean_dec(v_a_3969_);
lean_dec(v_a_3967_);
lean_dec(v_a_3964_);
lean_del_object(v___x_3960_);
lean_dec(v_val_3958_);
lean_dec(v_a_3955_);
lean_dec_ref(v___x_3949_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4161_ = lean_ctor_get(v___x_3975_, 0);
v_isSharedCheck_4168_ = !lean_is_exclusive(v___x_3975_);
if (v_isSharedCheck_4168_ == 0)
{
v___x_4163_ = v___x_3975_;
v_isShared_4164_ = v_isSharedCheck_4168_;
goto v_resetjp_4162_;
}
else
{
lean_inc(v_a_4161_);
lean_dec(v___x_3975_);
v___x_4163_ = lean_box(0);
v_isShared_4164_ = v_isSharedCheck_4168_;
goto v_resetjp_4162_;
}
v_resetjp_4162_:
{
lean_object* v___x_4166_; 
if (v_isShared_4164_ == 0)
{
v___x_4166_ = v___x_4163_;
goto v_reusejp_4165_;
}
else
{
lean_object* v_reuseFailAlloc_4167_; 
v_reuseFailAlloc_4167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4167_, 0, v_a_4161_);
v___x_4166_ = v_reuseFailAlloc_4167_;
goto v_reusejp_4165_;
}
v_reusejp_4165_:
{
return v___x_4166_;
}
}
}
}
else
{
lean_object* v_a_4169_; lean_object* v___x_4171_; uint8_t v_isShared_4172_; uint8_t v_isSharedCheck_4176_; 
lean_dec(v_a_3971_);
lean_dec(v_a_3969_);
lean_dec(v_a_3967_);
lean_dec(v_a_3964_);
lean_del_object(v___x_3960_);
lean_dec(v_val_3958_);
lean_dec(v_a_3955_);
lean_dec_ref(v___x_3949_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4169_ = lean_ctor_get(v___x_3972_, 0);
v_isSharedCheck_4176_ = !lean_is_exclusive(v___x_3972_);
if (v_isSharedCheck_4176_ == 0)
{
v___x_4171_ = v___x_3972_;
v_isShared_4172_ = v_isSharedCheck_4176_;
goto v_resetjp_4170_;
}
else
{
lean_inc(v_a_4169_);
lean_dec(v___x_3972_);
v___x_4171_ = lean_box(0);
v_isShared_4172_ = v_isSharedCheck_4176_;
goto v_resetjp_4170_;
}
v_resetjp_4170_:
{
lean_object* v___x_4174_; 
if (v_isShared_4172_ == 0)
{
v___x_4174_ = v___x_4171_;
goto v_reusejp_4173_;
}
else
{
lean_object* v_reuseFailAlloc_4175_; 
v_reuseFailAlloc_4175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4175_, 0, v_a_4169_);
v___x_4174_ = v_reuseFailAlloc_4175_;
goto v_reusejp_4173_;
}
v_reusejp_4173_:
{
return v___x_4174_;
}
}
}
}
else
{
lean_object* v_a_4177_; lean_object* v___x_4179_; uint8_t v_isShared_4180_; uint8_t v_isSharedCheck_4184_; 
lean_dec(v_a_3969_);
lean_dec(v_a_3967_);
lean_dec(v_a_3964_);
lean_del_object(v___x_3960_);
lean_dec(v_val_3958_);
lean_dec(v_a_3955_);
lean_dec_ref(v___x_3949_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4177_ = lean_ctor_get(v___x_3970_, 0);
v_isSharedCheck_4184_ = !lean_is_exclusive(v___x_3970_);
if (v_isSharedCheck_4184_ == 0)
{
v___x_4179_ = v___x_3970_;
v_isShared_4180_ = v_isSharedCheck_4184_;
goto v_resetjp_4178_;
}
else
{
lean_inc(v_a_4177_);
lean_dec(v___x_3970_);
v___x_4179_ = lean_box(0);
v_isShared_4180_ = v_isSharedCheck_4184_;
goto v_resetjp_4178_;
}
v_resetjp_4178_:
{
lean_object* v___x_4182_; 
if (v_isShared_4180_ == 0)
{
v___x_4182_ = v___x_4179_;
goto v_reusejp_4181_;
}
else
{
lean_object* v_reuseFailAlloc_4183_; 
v_reuseFailAlloc_4183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4183_, 0, v_a_4177_);
v___x_4182_ = v_reuseFailAlloc_4183_;
goto v_reusejp_4181_;
}
v_reusejp_4181_:
{
return v___x_4182_;
}
}
}
}
else
{
lean_object* v_a_4185_; lean_object* v___x_4187_; uint8_t v_isShared_4188_; uint8_t v_isSharedCheck_4192_; 
lean_dec(v_a_3967_);
lean_dec(v_a_3964_);
lean_del_object(v___x_3960_);
lean_dec(v_val_3958_);
lean_dec(v_a_3955_);
lean_dec_ref(v___x_3949_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4185_ = lean_ctor_get(v___x_3968_, 0);
v_isSharedCheck_4192_ = !lean_is_exclusive(v___x_3968_);
if (v_isSharedCheck_4192_ == 0)
{
v___x_4187_ = v___x_3968_;
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
else
{
lean_inc(v_a_4185_);
lean_dec(v___x_3968_);
v___x_4187_ = lean_box(0);
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
v_resetjp_4186_:
{
lean_object* v___x_4190_; 
if (v_isShared_4188_ == 0)
{
v___x_4190_ = v___x_4187_;
goto v_reusejp_4189_;
}
else
{
lean_object* v_reuseFailAlloc_4191_; 
v_reuseFailAlloc_4191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4191_, 0, v_a_4185_);
v___x_4190_ = v_reuseFailAlloc_4191_;
goto v_reusejp_4189_;
}
v_reusejp_4189_:
{
return v___x_4190_;
}
}
}
}
else
{
lean_object* v_a_4193_; lean_object* v___x_4195_; uint8_t v_isShared_4196_; uint8_t v_isSharedCheck_4200_; 
lean_dec(v_a_3964_);
lean_del_object(v___x_3960_);
lean_dec(v_val_3958_);
lean_dec(v_a_3955_);
lean_dec_ref(v___x_3949_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4193_ = lean_ctor_get(v___x_3966_, 0);
v_isSharedCheck_4200_ = !lean_is_exclusive(v___x_3966_);
if (v_isSharedCheck_4200_ == 0)
{
v___x_4195_ = v___x_3966_;
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
else
{
lean_inc(v_a_4193_);
lean_dec(v___x_3966_);
v___x_4195_ = lean_box(0);
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
v_resetjp_4194_:
{
lean_object* v___x_4198_; 
if (v_isShared_4196_ == 0)
{
v___x_4198_ = v___x_4195_;
goto v_reusejp_4197_;
}
else
{
lean_object* v_reuseFailAlloc_4199_; 
v_reuseFailAlloc_4199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4199_, 0, v_a_4193_);
v___x_4198_ = v_reuseFailAlloc_4199_;
goto v_reusejp_4197_;
}
v_reusejp_4197_:
{
return v___x_4198_;
}
}
}
}
else
{
lean_object* v_a_4201_; lean_object* v___x_4203_; uint8_t v_isShared_4204_; uint8_t v_isSharedCheck_4208_; 
lean_del_object(v___x_3960_);
lean_dec(v_val_3958_);
lean_dec(v_a_3955_);
lean_dec_ref(v___x_3949_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4201_ = lean_ctor_get(v___x_3963_, 0);
v_isSharedCheck_4208_ = !lean_is_exclusive(v___x_3963_);
if (v_isSharedCheck_4208_ == 0)
{
v___x_4203_ = v___x_3963_;
v_isShared_4204_ = v_isSharedCheck_4208_;
goto v_resetjp_4202_;
}
else
{
lean_inc(v_a_4201_);
lean_dec(v___x_3963_);
v___x_4203_ = lean_box(0);
v_isShared_4204_ = v_isSharedCheck_4208_;
goto v_resetjp_4202_;
}
v_resetjp_4202_:
{
lean_object* v___x_4206_; 
if (v_isShared_4204_ == 0)
{
v___x_4206_ = v___x_4203_;
goto v_reusejp_4205_;
}
else
{
lean_object* v_reuseFailAlloc_4207_; 
v_reuseFailAlloc_4207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4207_, 0, v_a_4201_);
v___x_4206_ = v_reuseFailAlloc_4207_;
goto v_reusejp_4205_;
}
v_reusejp_4205_:
{
return v___x_4206_;
}
}
}
}
}
else
{
lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; 
lean_dec(v_a_3957_);
lean_dec_ref(v___x_3949_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v___x_4210_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__15, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__15_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__15);
v___x_4211_ = l_Lean_indentExpr(v_a_3955_);
v___x_4212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4212_, 0, v___x_4210_);
lean_ctor_set(v___x_4212_, 1, v___x_4211_);
v___x_4213_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg(v___x_4212_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_);
return v___x_4213_;
}
}
else
{
lean_dec(v_a_3955_);
lean_dec_ref(v___x_3949_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
return v___x_3956_;
}
}
else
{
lean_object* v_a_4214_; lean_object* v___x_4216_; uint8_t v_isShared_4217_; uint8_t v_isSharedCheck_4221_; 
lean_dec_ref(v___x_3949_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4214_ = lean_ctor_get(v___x_3954_, 0);
v_isSharedCheck_4221_ = !lean_is_exclusive(v___x_3954_);
if (v_isSharedCheck_4221_ == 0)
{
v___x_4216_ = v___x_3954_;
v_isShared_4217_ = v_isSharedCheck_4221_;
goto v_resetjp_4215_;
}
else
{
lean_inc(v_a_4214_);
lean_dec(v___x_3954_);
v___x_4216_ = lean_box(0);
v_isShared_4217_ = v_isSharedCheck_4221_;
goto v_resetjp_4215_;
}
v_resetjp_4215_:
{
lean_object* v___x_4219_; 
if (v_isShared_4217_ == 0)
{
v___x_4219_ = v___x_4216_;
goto v_reusejp_4218_;
}
else
{
lean_object* v_reuseFailAlloc_4220_; 
v_reuseFailAlloc_4220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4220_, 0, v_a_4214_);
v___x_4219_ = v_reuseFailAlloc_4220_;
goto v_reusejp_4218_;
}
v_reusejp_4218_:
{
return v___x_4219_;
}
}
}
}
else
{
lean_object* v_a_4222_; lean_object* v___x_4224_; uint8_t v_isShared_4225_; uint8_t v_isSharedCheck_4229_; 
lean_dec_ref(v___x_3949_);
lean_dec(v_val_3946_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4222_ = lean_ctor_get(v___x_3952_, 0);
v_isSharedCheck_4229_ = !lean_is_exclusive(v___x_3952_);
if (v_isSharedCheck_4229_ == 0)
{
v___x_4224_ = v___x_3952_;
v_isShared_4225_ = v_isSharedCheck_4229_;
goto v_resetjp_4223_;
}
else
{
lean_inc(v_a_4222_);
lean_dec(v___x_3952_);
v___x_4224_ = lean_box(0);
v_isShared_4225_ = v_isSharedCheck_4229_;
goto v_resetjp_4223_;
}
v_resetjp_4223_:
{
lean_object* v___x_4227_; 
if (v_isShared_4225_ == 0)
{
v___x_4227_ = v___x_4224_;
goto v_reusejp_4226_;
}
else
{
lean_object* v_reuseFailAlloc_4228_; 
v_reuseFailAlloc_4228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4228_, 0, v_a_4222_);
v___x_4227_ = v_reuseFailAlloc_4228_;
goto v_reusejp_4226_;
}
v_reusejp_4226_:
{
return v___x_4227_;
}
}
}
}
else
{
lean_object* v___x_4230_; lean_object* v___x_4232_; 
lean_dec(v_a_3942_);
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v___x_4230_ = lean_box(0);
if (v_isShared_3945_ == 0)
{
lean_ctor_set(v___x_3944_, 0, v___x_4230_);
v___x_4232_ = v___x_3944_;
goto v_reusejp_4231_;
}
else
{
lean_object* v_reuseFailAlloc_4233_; 
v_reuseFailAlloc_4233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4233_, 0, v___x_4230_);
v___x_4232_ = v_reuseFailAlloc_4233_;
goto v_reusejp_4231_;
}
v_reusejp_4231_:
{
return v___x_4232_;
}
}
}
}
else
{
lean_object* v_a_4235_; lean_object* v___x_4237_; uint8_t v_isShared_4238_; uint8_t v_isSharedCheck_4242_; 
lean_dec(v_a_3940_);
lean_dec_ref(v_type_3927_);
v_a_4235_ = lean_ctor_get(v___x_3941_, 0);
v_isSharedCheck_4242_ = !lean_is_exclusive(v___x_3941_);
if (v_isSharedCheck_4242_ == 0)
{
v___x_4237_ = v___x_3941_;
v_isShared_4238_ = v_isSharedCheck_4242_;
goto v_resetjp_4236_;
}
else
{
lean_inc(v_a_4235_);
lean_dec(v___x_3941_);
v___x_4237_ = lean_box(0);
v_isShared_4238_ = v_isSharedCheck_4242_;
goto v_resetjp_4236_;
}
v_resetjp_4236_:
{
lean_object* v___x_4240_; 
if (v_isShared_4238_ == 0)
{
v___x_4240_ = v___x_4237_;
goto v_reusejp_4239_;
}
else
{
lean_object* v_reuseFailAlloc_4241_; 
v_reuseFailAlloc_4241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4241_, 0, v_a_4235_);
v___x_4240_ = v_reuseFailAlloc_4241_;
goto v_reusejp_4239_;
}
v_reusejp_4239_:
{
return v___x_4240_;
}
}
}
}
else
{
lean_object* v_a_4243_; lean_object* v___x_4245_; uint8_t v_isShared_4246_; uint8_t v_isSharedCheck_4250_; 
lean_dec_ref(v_type_3927_);
v_a_4243_ = lean_ctor_get(v___x_3939_, 0);
v_isSharedCheck_4250_ = !lean_is_exclusive(v___x_3939_);
if (v_isSharedCheck_4250_ == 0)
{
v___x_4245_ = v___x_3939_;
v_isShared_4246_ = v_isSharedCheck_4250_;
goto v_resetjp_4244_;
}
else
{
lean_inc(v_a_4243_);
lean_dec(v___x_3939_);
v___x_4245_ = lean_box(0);
v_isShared_4246_ = v_isSharedCheck_4250_;
goto v_resetjp_4244_;
}
v_resetjp_4244_:
{
lean_object* v___x_4248_; 
if (v_isShared_4246_ == 0)
{
v___x_4248_ = v___x_4245_;
goto v_reusejp_4247_;
}
else
{
lean_object* v_reuseFailAlloc_4249_; 
v_reuseFailAlloc_4249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4249_, 0, v_a_4243_);
v___x_4248_ = v_reuseFailAlloc_4249_;
goto v_reusejp_4247_;
}
v_reusejp_4247_:
{
return v___x_4248_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___boxed(lean_object* v_type_4251_, lean_object* v_a_4252_, lean_object* v_a_4253_, lean_object* v_a_4254_, lean_object* v_a_4255_, lean_object* v_a_4256_, lean_object* v_a_4257_, lean_object* v_a_4258_, lean_object* v_a_4259_, lean_object* v_a_4260_, lean_object* v_a_4261_, lean_object* v_a_4262_){
_start:
{
lean_object* v_res_4263_; 
v_res_4263_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f(v_type_4251_, v_a_4252_, v_a_4253_, v_a_4254_, v_a_4255_, v_a_4256_, v_a_4257_, v_a_4258_, v_a_4259_, v_a_4260_, v_a_4261_);
lean_dec(v_a_4261_);
lean_dec_ref(v_a_4260_);
lean_dec(v_a_4259_);
lean_dec_ref(v_a_4258_);
lean_dec(v_a_4257_);
lean_dec_ref(v_a_4256_);
lean_dec(v_a_4255_);
lean_dec_ref(v_a_4254_);
lean_dec(v_a_4253_);
lean_dec(v_a_4252_);
return v_res_4263_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0(lean_object* v_00_u03b1_4264_, lean_object* v_msg_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_){
_start:
{
lean_object* v___x_4277_; 
v___x_4277_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg(v_msg_4265_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_);
return v___x_4277_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___boxed(lean_object* v_00_u03b1_4278_, lean_object* v_msg_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_){
_start:
{
lean_object* v_res_4291_; 
v_res_4291_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0(v_00_u03b1_4278_, v_msg_4279_, v___y_4280_, v___y_4281_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_, v___y_4286_, v___y_4287_, v___y_4288_, v___y_4289_);
lean_dec(v___y_4289_);
lean_dec_ref(v___y_4288_);
lean_dec(v___y_4287_);
lean_dec_ref(v___y_4286_);
lean_dec(v___y_4285_);
lean_dec_ref(v___y_4284_);
lean_dec(v___y_4283_);
lean_dec_ref(v___y_4282_);
lean_dec(v___y_4281_);
lean_dec(v___y_4280_);
return v_res_4291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f___lam__0(lean_object* v_type_4292_, lean_object* v_a_4293_, lean_object* v_s_4294_){
_start:
{
lean_object* v_structs_4295_; lean_object* v_typeIdOf_4296_; lean_object* v_exprToStructId_4297_; lean_object* v_exprToStructIdEntries_4298_; lean_object* v_forbiddenNatModules_4299_; lean_object* v_natStructs_4300_; lean_object* v_natTypeIdOf_4301_; lean_object* v_exprToNatStructId_4302_; lean_object* v___x_4304_; uint8_t v_isShared_4305_; uint8_t v_isSharedCheck_4310_; 
v_structs_4295_ = lean_ctor_get(v_s_4294_, 0);
v_typeIdOf_4296_ = lean_ctor_get(v_s_4294_, 1);
v_exprToStructId_4297_ = lean_ctor_get(v_s_4294_, 2);
v_exprToStructIdEntries_4298_ = lean_ctor_get(v_s_4294_, 3);
v_forbiddenNatModules_4299_ = lean_ctor_get(v_s_4294_, 4);
v_natStructs_4300_ = lean_ctor_get(v_s_4294_, 5);
v_natTypeIdOf_4301_ = lean_ctor_get(v_s_4294_, 6);
v_exprToNatStructId_4302_ = lean_ctor_get(v_s_4294_, 7);
v_isSharedCheck_4310_ = !lean_is_exclusive(v_s_4294_);
if (v_isSharedCheck_4310_ == 0)
{
v___x_4304_ = v_s_4294_;
v_isShared_4305_ = v_isSharedCheck_4310_;
goto v_resetjp_4303_;
}
else
{
lean_inc(v_exprToNatStructId_4302_);
lean_inc(v_natTypeIdOf_4301_);
lean_inc(v_natStructs_4300_);
lean_inc(v_forbiddenNatModules_4299_);
lean_inc(v_exprToStructIdEntries_4298_);
lean_inc(v_exprToStructId_4297_);
lean_inc(v_typeIdOf_4296_);
lean_inc(v_structs_4295_);
lean_dec(v_s_4294_);
v___x_4304_ = lean_box(0);
v_isShared_4305_ = v_isSharedCheck_4310_;
goto v_resetjp_4303_;
}
v_resetjp_4303_:
{
lean_object* v___x_4306_; lean_object* v___x_4308_; 
v___x_4306_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0___redArg(v_natTypeIdOf_4301_, v_type_4292_, v_a_4293_);
if (v_isShared_4305_ == 0)
{
lean_ctor_set(v___x_4304_, 6, v___x_4306_);
v___x_4308_ = v___x_4304_;
goto v_reusejp_4307_;
}
else
{
lean_object* v_reuseFailAlloc_4309_; 
v_reuseFailAlloc_4309_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_4309_, 0, v_structs_4295_);
lean_ctor_set(v_reuseFailAlloc_4309_, 1, v_typeIdOf_4296_);
lean_ctor_set(v_reuseFailAlloc_4309_, 2, v_exprToStructId_4297_);
lean_ctor_set(v_reuseFailAlloc_4309_, 3, v_exprToStructIdEntries_4298_);
lean_ctor_set(v_reuseFailAlloc_4309_, 4, v_forbiddenNatModules_4299_);
lean_ctor_set(v_reuseFailAlloc_4309_, 5, v_natStructs_4300_);
lean_ctor_set(v_reuseFailAlloc_4309_, 6, v___x_4306_);
lean_ctor_set(v_reuseFailAlloc_4309_, 7, v_exprToNatStructId_4302_);
v___x_4308_ = v_reuseFailAlloc_4309_;
goto v_reusejp_4307_;
}
v_reusejp_4307_:
{
return v___x_4308_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_4311_, lean_object* v_i_4312_, lean_object* v_k_4313_){
_start:
{
lean_object* v___x_4314_; uint8_t v___x_4315_; 
v___x_4314_ = lean_array_get_size(v_keys_4311_);
v___x_4315_ = lean_nat_dec_lt(v_i_4312_, v___x_4314_);
if (v___x_4315_ == 0)
{
lean_dec(v_i_4312_);
return v___x_4315_;
}
else
{
lean_object* v_k_x27_4316_; uint8_t v___x_4317_; 
v_k_x27_4316_ = lean_array_fget_borrowed(v_keys_4311_, v_i_4312_);
v___x_4317_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_k_4313_, v_k_x27_4316_);
if (v___x_4317_ == 0)
{
lean_object* v___x_4318_; lean_object* v___x_4319_; 
v___x_4318_ = lean_unsigned_to_nat(1u);
v___x_4319_ = lean_nat_add(v_i_4312_, v___x_4318_);
lean_dec(v_i_4312_);
v_i_4312_ = v___x_4319_;
goto _start;
}
else
{
lean_dec(v_i_4312_);
return v___x_4317_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_4321_, lean_object* v_i_4322_, lean_object* v_k_4323_){
_start:
{
uint8_t v_res_4324_; lean_object* v_r_4325_; 
v_res_4324_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_4321_, v_i_4322_, v_k_4323_);
lean_dec_ref(v_k_4323_);
lean_dec_ref(v_keys_4321_);
v_r_4325_ = lean_box(v_res_4324_);
return v_r_4325_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg(lean_object* v_x_4326_, size_t v_x_4327_, lean_object* v_x_4328_){
_start:
{
if (lean_obj_tag(v_x_4326_) == 0)
{
lean_object* v_es_4329_; lean_object* v___x_4330_; size_t v___x_4331_; size_t v___x_4332_; size_t v___x_4333_; lean_object* v_j_4334_; lean_object* v___x_4335_; 
v_es_4329_ = lean_ctor_get(v_x_4326_, 0);
v___x_4330_ = lean_box(2);
v___x_4331_ = ((size_t)5ULL);
v___x_4332_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1);
v___x_4333_ = lean_usize_land(v_x_4327_, v___x_4332_);
v_j_4334_ = lean_usize_to_nat(v___x_4333_);
v___x_4335_ = lean_array_get_borrowed(v___x_4330_, v_es_4329_, v_j_4334_);
lean_dec(v_j_4334_);
switch(lean_obj_tag(v___x_4335_))
{
case 0:
{
lean_object* v_key_4336_; uint8_t v___x_4337_; 
v_key_4336_ = lean_ctor_get(v___x_4335_, 0);
v___x_4337_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_4328_, v_key_4336_);
return v___x_4337_;
}
case 1:
{
lean_object* v_node_4338_; size_t v___x_4339_; 
v_node_4338_ = lean_ctor_get(v___x_4335_, 0);
v___x_4339_ = lean_usize_shift_right(v_x_4327_, v___x_4331_);
v_x_4326_ = v_node_4338_;
v_x_4327_ = v___x_4339_;
goto _start;
}
default: 
{
uint8_t v___x_4341_; 
v___x_4341_ = 0;
return v___x_4341_;
}
}
}
else
{
lean_object* v_ks_4342_; lean_object* v___x_4343_; uint8_t v___x_4344_; 
v_ks_4342_ = lean_ctor_get(v_x_4326_, 0);
v___x_4343_ = lean_unsigned_to_nat(0u);
v___x_4344_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg(v_ks_4342_, v___x_4343_, v_x_4328_);
return v___x_4344_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_4345_, lean_object* v_x_4346_, lean_object* v_x_4347_){
_start:
{
size_t v_x_10574__boxed_4348_; uint8_t v_res_4349_; lean_object* v_r_4350_; 
v_x_10574__boxed_4348_ = lean_unbox_usize(v_x_4346_);
lean_dec(v_x_4346_);
v_res_4349_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg(v_x_4345_, v_x_10574__boxed_4348_, v_x_4347_);
lean_dec_ref(v_x_4347_);
lean_dec_ref(v_x_4345_);
v_r_4350_ = lean_box(v_res_4349_);
return v_r_4350_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg(lean_object* v_x_4351_, lean_object* v_x_4352_){
_start:
{
uint64_t v___x_4353_; size_t v___x_4354_; uint8_t v___x_4355_; 
v___x_4353_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_4352_);
v___x_4354_ = lean_uint64_to_usize(v___x_4353_);
v___x_4355_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg(v_x_4351_, v___x_4354_, v_x_4352_);
return v___x_4355_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg___boxed(lean_object* v_x_4356_, lean_object* v_x_4357_){
_start:
{
uint8_t v_res_4358_; lean_object* v_r_4359_; 
v_res_4358_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg(v_x_4356_, v_x_4357_);
lean_dec_ref(v_x_4357_);
lean_dec_ref(v_x_4356_);
v_r_4359_ = lean_box(v_res_4358_);
return v_r_4359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f(lean_object* v_type_4360_, lean_object* v_a_4361_, lean_object* v_a_4362_, lean_object* v_a_4363_, lean_object* v_a_4364_, lean_object* v_a_4365_, lean_object* v_a_4366_, lean_object* v_a_4367_, lean_object* v_a_4368_, lean_object* v_a_4369_, lean_object* v_a_4370_){
_start:
{
lean_object* v___x_4372_; 
v___x_4372_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_4363_);
if (lean_obj_tag(v___x_4372_) == 0)
{
lean_object* v_a_4373_; lean_object* v___x_4375_; uint8_t v_isShared_4376_; uint8_t v_isSharedCheck_4462_; 
v_a_4373_ = lean_ctor_get(v___x_4372_, 0);
v_isSharedCheck_4462_ = !lean_is_exclusive(v___x_4372_);
if (v_isSharedCheck_4462_ == 0)
{
v___x_4375_ = v___x_4372_;
v_isShared_4376_ = v_isSharedCheck_4462_;
goto v_resetjp_4374_;
}
else
{
lean_inc(v_a_4373_);
lean_dec(v___x_4372_);
v___x_4375_ = lean_box(0);
v_isShared_4376_ = v_isSharedCheck_4462_;
goto v_resetjp_4374_;
}
v_resetjp_4374_:
{
uint8_t v_linarith_4377_; 
v_linarith_4377_ = lean_ctor_get_uint8(v_a_4373_, sizeof(void*)*11 + 22);
lean_dec(v_a_4373_);
if (v_linarith_4377_ == 0)
{
lean_object* v___x_4378_; lean_object* v___x_4380_; 
lean_dec_ref(v_type_4360_);
v___x_4378_ = lean_box(0);
if (v_isShared_4376_ == 0)
{
lean_ctor_set(v___x_4375_, 0, v___x_4378_);
v___x_4380_ = v___x_4375_;
goto v_reusejp_4379_;
}
else
{
lean_object* v_reuseFailAlloc_4381_; 
v_reuseFailAlloc_4381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4381_, 0, v___x_4378_);
v___x_4380_ = v_reuseFailAlloc_4381_;
goto v_reusejp_4379_;
}
v_reusejp_4379_:
{
return v___x_4380_;
}
}
else
{
lean_object* v___x_4382_; 
lean_del_object(v___x_4375_);
v___x_4382_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v_a_4361_, v_a_4369_, v_a_4370_);
if (lean_obj_tag(v___x_4382_) == 0)
{
lean_object* v_a_4383_; lean_object* v___x_4385_; uint8_t v_isShared_4386_; uint8_t v_isSharedCheck_4453_; 
v_a_4383_ = lean_ctor_get(v___x_4382_, 0);
v_isSharedCheck_4453_ = !lean_is_exclusive(v___x_4382_);
if (v_isSharedCheck_4453_ == 0)
{
v___x_4385_ = v___x_4382_;
v_isShared_4386_ = v_isSharedCheck_4453_;
goto v_resetjp_4384_;
}
else
{
lean_inc(v_a_4383_);
lean_dec(v___x_4382_);
v___x_4385_ = lean_box(0);
v_isShared_4386_ = v_isSharedCheck_4453_;
goto v_resetjp_4384_;
}
v_resetjp_4384_:
{
lean_object* v_forbiddenNatModules_4387_; uint8_t v___x_4388_; 
v_forbiddenNatModules_4387_ = lean_ctor_get(v_a_4383_, 4);
lean_inc_ref(v_forbiddenNatModules_4387_);
lean_dec(v_a_4383_);
v___x_4388_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg(v_forbiddenNatModules_4387_, v_type_4360_);
lean_dec_ref(v_forbiddenNatModules_4387_);
if (v___x_4388_ == 0)
{
lean_object* v___x_4389_; 
lean_del_object(v___x_4385_);
lean_inc_ref(v_type_4360_);
v___x_4389_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isCutsatType(v_type_4360_, v_a_4361_, v_a_4362_, v_a_4363_, v_a_4364_, v_a_4365_, v_a_4366_, v_a_4367_, v_a_4368_, v_a_4369_, v_a_4370_);
if (lean_obj_tag(v___x_4389_) == 0)
{
lean_object* v_a_4390_; lean_object* v___x_4392_; uint8_t v_isShared_4393_; uint8_t v_isSharedCheck_4440_; 
v_a_4390_ = lean_ctor_get(v___x_4389_, 0);
v_isSharedCheck_4440_ = !lean_is_exclusive(v___x_4389_);
if (v_isSharedCheck_4440_ == 0)
{
v___x_4392_ = v___x_4389_;
v_isShared_4393_ = v_isSharedCheck_4440_;
goto v_resetjp_4391_;
}
else
{
lean_inc(v_a_4390_);
lean_dec(v___x_4389_);
v___x_4392_ = lean_box(0);
v_isShared_4393_ = v_isSharedCheck_4440_;
goto v_resetjp_4391_;
}
v_resetjp_4391_:
{
uint8_t v___x_4394_; 
v___x_4394_ = lean_unbox(v_a_4390_);
lean_dec(v_a_4390_);
if (v___x_4394_ == 0)
{
lean_object* v___x_4395_; 
lean_del_object(v___x_4392_);
v___x_4395_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v_a_4361_, v_a_4369_, v_a_4370_);
if (lean_obj_tag(v___x_4395_) == 0)
{
lean_object* v_a_4396_; lean_object* v___x_4398_; uint8_t v_isShared_4399_; uint8_t v_isSharedCheck_4427_; 
v_a_4396_ = lean_ctor_get(v___x_4395_, 0);
v_isSharedCheck_4427_ = !lean_is_exclusive(v___x_4395_);
if (v_isSharedCheck_4427_ == 0)
{
v___x_4398_ = v___x_4395_;
v_isShared_4399_ = v_isSharedCheck_4427_;
goto v_resetjp_4397_;
}
else
{
lean_inc(v_a_4396_);
lean_dec(v___x_4395_);
v___x_4398_ = lean_box(0);
v_isShared_4399_ = v_isSharedCheck_4427_;
goto v_resetjp_4397_;
}
v_resetjp_4397_:
{
lean_object* v_natTypeIdOf_4400_; lean_object* v___x_4401_; 
v_natTypeIdOf_4400_ = lean_ctor_get(v_a_4396_, 6);
lean_inc_ref(v_natTypeIdOf_4400_);
lean_dec(v_a_4396_);
v___x_4401_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(v_natTypeIdOf_4400_, v_type_4360_);
lean_dec_ref(v_natTypeIdOf_4400_);
if (lean_obj_tag(v___x_4401_) == 1)
{
lean_object* v_val_4402_; lean_object* v___x_4404_; 
lean_dec_ref(v_type_4360_);
v_val_4402_ = lean_ctor_get(v___x_4401_, 0);
lean_inc(v_val_4402_);
lean_dec_ref(v___x_4401_);
if (v_isShared_4399_ == 0)
{
lean_ctor_set(v___x_4398_, 0, v_val_4402_);
v___x_4404_ = v___x_4398_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4405_; 
v_reuseFailAlloc_4405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4405_, 0, v_val_4402_);
v___x_4404_ = v_reuseFailAlloc_4405_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
return v___x_4404_;
}
}
else
{
lean_object* v___x_4406_; 
lean_dec(v___x_4401_);
lean_del_object(v___x_4398_);
lean_inc_ref(v_type_4360_);
v___x_4406_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f(v_type_4360_, v_a_4361_, v_a_4362_, v_a_4363_, v_a_4364_, v_a_4365_, v_a_4366_, v_a_4367_, v_a_4368_, v_a_4369_, v_a_4370_);
if (lean_obj_tag(v___x_4406_) == 0)
{
lean_object* v_a_4407_; lean_object* v___f_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; 
v_a_4407_ = lean_ctor_get(v___x_4406_, 0);
lean_inc_n(v_a_4407_, 2);
lean_dec_ref(v___x_4406_);
v___f_4408_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f___lam__0), 3, 2);
lean_closure_set(v___f_4408_, 0, v_type_4360_);
lean_closure_set(v___f_4408_, 1, v_a_4407_);
v___x_4409_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_4410_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_4409_, v___f_4408_, v_a_4361_, v_a_4370_);
if (lean_obj_tag(v___x_4410_) == 0)
{
lean_object* v___x_4412_; uint8_t v_isShared_4413_; uint8_t v_isSharedCheck_4417_; 
v_isSharedCheck_4417_ = !lean_is_exclusive(v___x_4410_);
if (v_isSharedCheck_4417_ == 0)
{
lean_object* v_unused_4418_; 
v_unused_4418_ = lean_ctor_get(v___x_4410_, 0);
lean_dec(v_unused_4418_);
v___x_4412_ = v___x_4410_;
v_isShared_4413_ = v_isSharedCheck_4417_;
goto v_resetjp_4411_;
}
else
{
lean_dec(v___x_4410_);
v___x_4412_ = lean_box(0);
v_isShared_4413_ = v_isSharedCheck_4417_;
goto v_resetjp_4411_;
}
v_resetjp_4411_:
{
lean_object* v___x_4415_; 
if (v_isShared_4413_ == 0)
{
lean_ctor_set(v___x_4412_, 0, v_a_4407_);
v___x_4415_ = v___x_4412_;
goto v_reusejp_4414_;
}
else
{
lean_object* v_reuseFailAlloc_4416_; 
v_reuseFailAlloc_4416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4416_, 0, v_a_4407_);
v___x_4415_ = v_reuseFailAlloc_4416_;
goto v_reusejp_4414_;
}
v_reusejp_4414_:
{
return v___x_4415_;
}
}
}
else
{
lean_object* v_a_4419_; lean_object* v___x_4421_; uint8_t v_isShared_4422_; uint8_t v_isSharedCheck_4426_; 
lean_dec(v_a_4407_);
v_a_4419_ = lean_ctor_get(v___x_4410_, 0);
v_isSharedCheck_4426_ = !lean_is_exclusive(v___x_4410_);
if (v_isSharedCheck_4426_ == 0)
{
v___x_4421_ = v___x_4410_;
v_isShared_4422_ = v_isSharedCheck_4426_;
goto v_resetjp_4420_;
}
else
{
lean_inc(v_a_4419_);
lean_dec(v___x_4410_);
v___x_4421_ = lean_box(0);
v_isShared_4422_ = v_isSharedCheck_4426_;
goto v_resetjp_4420_;
}
v_resetjp_4420_:
{
lean_object* v___x_4424_; 
if (v_isShared_4422_ == 0)
{
v___x_4424_ = v___x_4421_;
goto v_reusejp_4423_;
}
else
{
lean_object* v_reuseFailAlloc_4425_; 
v_reuseFailAlloc_4425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4425_, 0, v_a_4419_);
v___x_4424_ = v_reuseFailAlloc_4425_;
goto v_reusejp_4423_;
}
v_reusejp_4423_:
{
return v___x_4424_;
}
}
}
}
else
{
lean_dec_ref(v_type_4360_);
return v___x_4406_;
}
}
}
}
else
{
lean_object* v_a_4428_; lean_object* v___x_4430_; uint8_t v_isShared_4431_; uint8_t v_isSharedCheck_4435_; 
lean_dec_ref(v_type_4360_);
v_a_4428_ = lean_ctor_get(v___x_4395_, 0);
v_isSharedCheck_4435_ = !lean_is_exclusive(v___x_4395_);
if (v_isSharedCheck_4435_ == 0)
{
v___x_4430_ = v___x_4395_;
v_isShared_4431_ = v_isSharedCheck_4435_;
goto v_resetjp_4429_;
}
else
{
lean_inc(v_a_4428_);
lean_dec(v___x_4395_);
v___x_4430_ = lean_box(0);
v_isShared_4431_ = v_isSharedCheck_4435_;
goto v_resetjp_4429_;
}
v_resetjp_4429_:
{
lean_object* v___x_4433_; 
if (v_isShared_4431_ == 0)
{
v___x_4433_ = v___x_4430_;
goto v_reusejp_4432_;
}
else
{
lean_object* v_reuseFailAlloc_4434_; 
v_reuseFailAlloc_4434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4434_, 0, v_a_4428_);
v___x_4433_ = v_reuseFailAlloc_4434_;
goto v_reusejp_4432_;
}
v_reusejp_4432_:
{
return v___x_4433_;
}
}
}
}
else
{
lean_object* v___x_4436_; lean_object* v___x_4438_; 
lean_dec_ref(v_type_4360_);
v___x_4436_ = lean_box(0);
if (v_isShared_4393_ == 0)
{
lean_ctor_set(v___x_4392_, 0, v___x_4436_);
v___x_4438_ = v___x_4392_;
goto v_reusejp_4437_;
}
else
{
lean_object* v_reuseFailAlloc_4439_; 
v_reuseFailAlloc_4439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4439_, 0, v___x_4436_);
v___x_4438_ = v_reuseFailAlloc_4439_;
goto v_reusejp_4437_;
}
v_reusejp_4437_:
{
return v___x_4438_;
}
}
}
}
else
{
lean_object* v_a_4441_; lean_object* v___x_4443_; uint8_t v_isShared_4444_; uint8_t v_isSharedCheck_4448_; 
lean_dec_ref(v_type_4360_);
v_a_4441_ = lean_ctor_get(v___x_4389_, 0);
v_isSharedCheck_4448_ = !lean_is_exclusive(v___x_4389_);
if (v_isSharedCheck_4448_ == 0)
{
v___x_4443_ = v___x_4389_;
v_isShared_4444_ = v_isSharedCheck_4448_;
goto v_resetjp_4442_;
}
else
{
lean_inc(v_a_4441_);
lean_dec(v___x_4389_);
v___x_4443_ = lean_box(0);
v_isShared_4444_ = v_isSharedCheck_4448_;
goto v_resetjp_4442_;
}
v_resetjp_4442_:
{
lean_object* v___x_4446_; 
if (v_isShared_4444_ == 0)
{
v___x_4446_ = v___x_4443_;
goto v_reusejp_4445_;
}
else
{
lean_object* v_reuseFailAlloc_4447_; 
v_reuseFailAlloc_4447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4447_, 0, v_a_4441_);
v___x_4446_ = v_reuseFailAlloc_4447_;
goto v_reusejp_4445_;
}
v_reusejp_4445_:
{
return v___x_4446_;
}
}
}
}
else
{
lean_object* v___x_4449_; lean_object* v___x_4451_; 
lean_dec_ref(v_type_4360_);
v___x_4449_ = lean_box(0);
if (v_isShared_4386_ == 0)
{
lean_ctor_set(v___x_4385_, 0, v___x_4449_);
v___x_4451_ = v___x_4385_;
goto v_reusejp_4450_;
}
else
{
lean_object* v_reuseFailAlloc_4452_; 
v_reuseFailAlloc_4452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4452_, 0, v___x_4449_);
v___x_4451_ = v_reuseFailAlloc_4452_;
goto v_reusejp_4450_;
}
v_reusejp_4450_:
{
return v___x_4451_;
}
}
}
}
else
{
lean_object* v_a_4454_; lean_object* v___x_4456_; uint8_t v_isShared_4457_; uint8_t v_isSharedCheck_4461_; 
lean_dec_ref(v_type_4360_);
v_a_4454_ = lean_ctor_get(v___x_4382_, 0);
v_isSharedCheck_4461_ = !lean_is_exclusive(v___x_4382_);
if (v_isSharedCheck_4461_ == 0)
{
v___x_4456_ = v___x_4382_;
v_isShared_4457_ = v_isSharedCheck_4461_;
goto v_resetjp_4455_;
}
else
{
lean_inc(v_a_4454_);
lean_dec(v___x_4382_);
v___x_4456_ = lean_box(0);
v_isShared_4457_ = v_isSharedCheck_4461_;
goto v_resetjp_4455_;
}
v_resetjp_4455_:
{
lean_object* v___x_4459_; 
if (v_isShared_4457_ == 0)
{
v___x_4459_ = v___x_4456_;
goto v_reusejp_4458_;
}
else
{
lean_object* v_reuseFailAlloc_4460_; 
v_reuseFailAlloc_4460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4460_, 0, v_a_4454_);
v___x_4459_ = v_reuseFailAlloc_4460_;
goto v_reusejp_4458_;
}
v_reusejp_4458_:
{
return v___x_4459_;
}
}
}
}
}
}
else
{
lean_object* v_a_4463_; lean_object* v___x_4465_; uint8_t v_isShared_4466_; uint8_t v_isSharedCheck_4470_; 
lean_dec_ref(v_type_4360_);
v_a_4463_ = lean_ctor_get(v___x_4372_, 0);
v_isSharedCheck_4470_ = !lean_is_exclusive(v___x_4372_);
if (v_isSharedCheck_4470_ == 0)
{
v___x_4465_ = v___x_4372_;
v_isShared_4466_ = v_isSharedCheck_4470_;
goto v_resetjp_4464_;
}
else
{
lean_inc(v_a_4463_);
lean_dec(v___x_4372_);
v___x_4465_ = lean_box(0);
v_isShared_4466_ = v_isSharedCheck_4470_;
goto v_resetjp_4464_;
}
v_resetjp_4464_:
{
lean_object* v___x_4468_; 
if (v_isShared_4466_ == 0)
{
v___x_4468_ = v___x_4465_;
goto v_reusejp_4467_;
}
else
{
lean_object* v_reuseFailAlloc_4469_; 
v_reuseFailAlloc_4469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4469_, 0, v_a_4463_);
v___x_4468_ = v_reuseFailAlloc_4469_;
goto v_reusejp_4467_;
}
v_reusejp_4467_:
{
return v___x_4468_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f___boxed(lean_object* v_type_4471_, lean_object* v_a_4472_, lean_object* v_a_4473_, lean_object* v_a_4474_, lean_object* v_a_4475_, lean_object* v_a_4476_, lean_object* v_a_4477_, lean_object* v_a_4478_, lean_object* v_a_4479_, lean_object* v_a_4480_, lean_object* v_a_4481_, lean_object* v_a_4482_){
_start:
{
lean_object* v_res_4483_; 
v_res_4483_ = l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f(v_type_4471_, v_a_4472_, v_a_4473_, v_a_4474_, v_a_4475_, v_a_4476_, v_a_4477_, v_a_4478_, v_a_4479_, v_a_4480_, v_a_4481_);
lean_dec(v_a_4481_);
lean_dec_ref(v_a_4480_);
lean_dec(v_a_4479_);
lean_dec_ref(v_a_4478_);
lean_dec(v_a_4477_);
lean_dec_ref(v_a_4476_);
lean_dec(v_a_4475_);
lean_dec_ref(v_a_4474_);
lean_dec(v_a_4473_);
lean_dec(v_a_4472_);
return v_res_4483_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0(lean_object* v_00_u03b2_4484_, lean_object* v_x_4485_, lean_object* v_x_4486_){
_start:
{
uint8_t v___x_4487_; 
v___x_4487_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg(v_x_4485_, v_x_4486_);
return v___x_4487_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___boxed(lean_object* v_00_u03b2_4488_, lean_object* v_x_4489_, lean_object* v_x_4490_){
_start:
{
uint8_t v_res_4491_; lean_object* v_r_4492_; 
v_res_4491_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0(v_00_u03b2_4488_, v_x_4489_, v_x_4490_);
lean_dec_ref(v_x_4490_);
lean_dec_ref(v_x_4489_);
v_r_4492_ = lean_box(v_res_4491_);
return v_r_4492_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0(lean_object* v_00_u03b2_4493_, lean_object* v_x_4494_, size_t v_x_4495_, lean_object* v_x_4496_){
_start:
{
uint8_t v___x_4497_; 
v___x_4497_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg(v_x_4494_, v_x_4495_, v_x_4496_);
return v___x_4497_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4498_, lean_object* v_x_4499_, lean_object* v_x_4500_, lean_object* v_x_4501_){
_start:
{
size_t v_x_10834__boxed_4502_; uint8_t v_res_4503_; lean_object* v_r_4504_; 
v_x_10834__boxed_4502_ = lean_unbox_usize(v_x_4500_);
lean_dec(v_x_4500_);
v_res_4503_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0(v_00_u03b2_4498_, v_x_4499_, v_x_10834__boxed_4502_, v_x_4501_);
lean_dec_ref(v_x_4501_);
lean_dec_ref(v_x_4499_);
v_r_4504_ = lean_box(v_res_4503_);
return v_r_4504_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_4505_, lean_object* v_keys_4506_, lean_object* v_vals_4507_, lean_object* v_heq_4508_, lean_object* v_i_4509_, lean_object* v_k_4510_){
_start:
{
uint8_t v___x_4511_; 
v___x_4511_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_4506_, v_i_4509_, v_k_4510_);
return v___x_4511_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_4512_, lean_object* v_keys_4513_, lean_object* v_vals_4514_, lean_object* v_heq_4515_, lean_object* v_i_4516_, lean_object* v_k_4517_){
_start:
{
uint8_t v_res_4518_; lean_object* v_r_4519_; 
v_res_4518_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1(v_00_u03b2_4512_, v_keys_4513_, v_vals_4514_, v_heq_4515_, v_i_4516_, v_k_4517_);
lean_dec_ref(v_k_4517_);
lean_dec_ref(v_vals_4514_);
lean_dec_ref(v_keys_4513_);
v_r_4519_ = lean_box(v_res_4518_);
return v_r_4519_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_OrderInsts(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToInt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Var(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Insts(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Module_Envelope(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_OrderInsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Var(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Insts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Module_Envelope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_OrderInsts(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToInt(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Var(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Insts(uint8_t builtin);
lean_object* initialize_Init_Grind_Module_Envelope(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_OrderInsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Var(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Insts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Module_Envelope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(builtin);
}
#ifdef __cplusplus
}
#endif
