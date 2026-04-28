// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Cutsat.Util
// Imports: public import Lean.Meta.Tactic.Grind.Arith.Cutsat.Types import Lean.Meta.Tactic.Simp.Arith.Int.Simp
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
lean_object* l_Lean_Meta_Grind_Arith_shrink(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SolverExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_quoteIfArithTerm(lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* l_Rat_add(lean_object*, lean_object*);
extern lean_object* l_instInhabitedRat;
lean_object* l_Rat_mul(lean_object*, lean_object*);
uint8_t l_instDecidableEqRat_decEq(lean_object*, lean_object*);
uint8_t l_Bool_toLBool(uint8_t);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Int_Linear_Poly_denoteExpr___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkIntLit(lean_object*);
lean_object* l_Lean_mkIntEq(lean_object*, lean_object*);
uint8_t l_Int_Linear_Poly_isUnsatDvd(lean_object*, lean_object*);
uint64_t l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isInconsistent___redArg(lean_object*, lean_object*);
uint8_t l_Rat_instDecidableLe(lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
uint8_t l_Int_Linear_Poly_isUnsatLe(lean_object*);
uint8_t l_Int_decidableDvd(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Int_Linear_Poly_getConst(lean_object*);
lean_object* l_Int_Linear_Poly_gcdCoeffs_x27(lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_mkIntDvd(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_instToExprInt_mkNat(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Linear_Poly_leadCoeff(lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Int_gcd(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_Int_lcm(lean_object*, lean_object*);
lean_object* l_Lean_mkIntLE(lean_object*, lean_object*);
static lean_once_cell_t l_Int_Linear_Poly_isZero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_Linear_Poly_isZero___closed__0;
LEAN_EXPORT uint8_t l_Int_Linear_Poly_isZero(lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_isZero___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_isSorted_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_isSorted_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Int_Linear_Poly_isSorted(lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_isSorted___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_cutsat_mk_var(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_mkVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_cutsat_assert_eq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_assert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_pp___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_pp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isTrivial(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isTrivial___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__9;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__10;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial_spec__0(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_cutsat_assert_le(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_isTrivial(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_isTrivial___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_updateOccs_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_updateOccs_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_updateOccs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_updateOccs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Int_Linear_Poly_updateOccs___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_Linear_Poly_updateOccs___redArg___closed__0;
static lean_once_cell_t l_Int_Linear_Poly_updateOccs___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_Linear_Poly_updateOccs___redArg___closed__1;
LEAN_EXPORT lean_object* l_Int_Linear_Poly_updateOccs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_updateOccs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_updateOccs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_updateOccs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_eval_x3f_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_eval_x3f_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_eval_x3f_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Int_Linear_Poly_eval_x3f_spec__0(lean_object*);
static lean_once_cell_t l_Int_Linear_Poly_eval_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_Linear_Poly_eval_x3f___redArg___closed__0;
LEAN_EXPORT lean_object* l_Int_Linear_Poly_eval_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_eval_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_eval_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_eval_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isUnsat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isUnsat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isUnsat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isUnsat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_satisfiedLe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_satisfiedLe___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_satisfiedLe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_satisfiedLe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_findVarToSubst___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_findVarToSubst___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_findVarToSubst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_findVarToSubst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_numCases(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_numCases___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Int_Linear_Poly_isZero___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT uint8_t l_Int_Linear_Poly_isZero(lean_object* v_x_3_){
_start:
{
if (lean_obj_tag(v_x_3_) == 0)
{
lean_object* v_k_4_; lean_object* v___x_5_; uint8_t v___x_6_; 
v_k_4_ = lean_ctor_get(v_x_3_, 0);
v___x_5_ = lean_obj_once(&l_Int_Linear_Poly_isZero___closed__0, &l_Int_Linear_Poly_isZero___closed__0_once, _init_l_Int_Linear_Poly_isZero___closed__0);
v___x_6_ = lean_int_dec_eq(v_k_4_, v___x_5_);
return v___x_6_;
}
else
{
uint8_t v___x_7_; 
v___x_7_ = 0;
return v___x_7_;
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_isZero___boxed(lean_object* v_x_8_){
_start:
{
uint8_t v_res_9_; lean_object* v_r_10_; 
v_res_9_ = l_Int_Linear_Poly_isZero(v_x_8_);
lean_dec_ref(v_x_8_);
v_r_10_ = lean_box(v_res_9_);
return v_r_10_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_isSorted_go(lean_object* v_a_11_, lean_object* v_a_12_){
_start:
{
if (lean_obj_tag(v_a_12_) == 0)
{
uint8_t v___x_13_; 
lean_dec(v_a_11_);
v___x_13_ = 1;
return v___x_13_;
}
else
{
if (lean_obj_tag(v_a_11_) == 0)
{
lean_object* v_v_14_; lean_object* v_p_15_; lean_object* v___x_16_; 
v_v_14_ = lean_ctor_get(v_a_12_, 1);
v_p_15_ = lean_ctor_get(v_a_12_, 2);
lean_inc(v_v_14_);
v___x_16_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_16_, 0, v_v_14_);
v_a_11_ = v___x_16_;
v_a_12_ = v_p_15_;
goto _start;
}
else
{
lean_object* v_v_18_; lean_object* v_p_19_; lean_object* v_val_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_29_; 
v_v_18_ = lean_ctor_get(v_a_12_, 1);
v_p_19_ = lean_ctor_get(v_a_12_, 2);
v_val_20_ = lean_ctor_get(v_a_11_, 0);
v_isSharedCheck_29_ = !lean_is_exclusive(v_a_11_);
if (v_isSharedCheck_29_ == 0)
{
v___x_22_ = v_a_11_;
v_isShared_23_ = v_isSharedCheck_29_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_val_20_);
lean_dec(v_a_11_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_29_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
uint8_t v___x_24_; 
v___x_24_ = lean_nat_dec_lt(v_v_18_, v_val_20_);
lean_dec(v_val_20_);
if (v___x_24_ == 0)
{
lean_del_object(v___x_22_);
return v___x_24_;
}
else
{
lean_object* v___x_26_; 
lean_inc(v_v_18_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 0, v_v_18_);
v___x_26_ = v___x_22_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_28_; 
v_reuseFailAlloc_28_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_28_, 0, v_v_18_);
v___x_26_ = v_reuseFailAlloc_28_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
v_a_11_ = v___x_26_;
v_a_12_ = v_p_19_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_isSorted_go___boxed(lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
uint8_t v_res_32_; lean_object* v_r_33_; 
v_res_32_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_isSorted_go(v_a_30_, v_a_31_);
lean_dec_ref(v_a_31_);
v_r_33_ = lean_box(v_res_32_);
return v_r_33_;
}
}
LEAN_EXPORT uint8_t l_Int_Linear_Poly_isSorted(lean_object* v_p_34_){
_start:
{
lean_object* v___x_35_; uint8_t v___x_36_; 
v___x_35_ = lean_box(0);
v___x_36_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_isSorted_go(v___x_35_, v_p_34_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_isSorted___boxed(lean_object* v_p_37_){
_start:
{
uint8_t v_res_38_; lean_object* v_r_39_; 
v_res_38_ = l_Int_Linear_Poly_isSorted(v_p_37_);
lean_dec_ref(v_p_37_);
v_r_39_ = lean_box(v_res_38_);
return v_r_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_45_ = l_Lean_Meta_Grind_SolverExtension_getState___redArg(v___x_44_, v_a_40_, v_a_41_, v_a_42_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg___boxed(lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_46_, v_a_47_, v_a_48_);
lean_dec(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec(v_a_46_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27(lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_51_, v_a_59_, v_a_60_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___boxed(lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27(v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_, v_a_72_);
lean_dec(v_a_72_);
lean_dec_ref(v_a_71_);
lean_dec(v_a_70_);
lean_dec_ref(v_a_69_);
lean_dec(v_a_68_);
lean_dec_ref(v_a_67_);
lean_dec(v_a_66_);
lean_dec_ref(v_a_65_);
lean_dec(v_a_64_);
lean_dec(v_a_63_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27___redArg(lean_object* v_f_75_, lean_object* v_a_76_, lean_object* v_a_77_){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_79_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_80_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_79_, v_f_75_, v_a_76_, v_a_77_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27___redArg___boxed(lean_object* v_f_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Meta_Grind_Arith_Cutsat_modify_x27___redArg(v_f_81_, v_a_82_, v_a_83_);
lean_dec(v_a_83_);
lean_dec(v_a_82_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27(lean_object* v_f_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_98_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_99_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_98_, v_f_86_, v_a_87_, v_a_96_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27___boxed(lean_object* v_f_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_Lean_Meta_Grind_Arith_Cutsat_modify_x27(v_f_100_, v_a_101_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
lean_dec(v_a_108_);
lean_dec_ref(v_a_107_);
lean_dec(v_a_106_);
lean_dec_ref(v_a_105_);
lean_dec(v_a_104_);
lean_dec_ref(v_a_103_);
lean_dec(v_a_102_);
lean_dec(v_a_101_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg(lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l_Lean_Meta_Grind_isInconsistent___redArg(v_a_113_, v_a_115_);
if (lean_obj_tag(v___x_117_) == 0)
{
lean_object* v_a_118_; uint8_t v___x_119_; 
v_a_118_ = lean_ctor_get(v___x_117_, 0);
lean_inc(v_a_118_);
v___x_119_ = lean_unbox(v_a_118_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; 
lean_dec_ref(v___x_117_);
v___x_120_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_113_, v_a_114_, v_a_115_);
if (lean_obj_tag(v___x_120_) == 0)
{
lean_object* v_a_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_134_; 
v_a_121_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_134_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_134_ == 0)
{
v___x_123_ = v___x_120_;
v_isShared_124_ = v_isSharedCheck_134_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_a_121_);
lean_dec(v___x_120_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_134_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v_conflict_x3f_125_; 
v_conflict_x3f_125_ = lean_ctor_get(v_a_121_, 15);
lean_inc(v_conflict_x3f_125_);
lean_dec(v_a_121_);
if (lean_obj_tag(v_conflict_x3f_125_) == 0)
{
lean_object* v___x_127_; 
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 0, v_a_118_);
v___x_127_ = v___x_123_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_a_118_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
else
{
uint8_t v___x_129_; lean_object* v___x_130_; lean_object* v___x_132_; 
lean_dec_ref(v_conflict_x3f_125_);
lean_dec(v_a_118_);
v___x_129_ = 1;
v___x_130_ = lean_box(v___x_129_);
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 0, v___x_130_);
v___x_132_ = v___x_123_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_130_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
}
}
else
{
lean_object* v_a_135_; lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_142_; 
lean_dec(v_a_118_);
v_a_135_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_142_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_142_ == 0)
{
v___x_137_ = v___x_120_;
v_isShared_138_ = v_isSharedCheck_142_;
goto v_resetjp_136_;
}
else
{
lean_inc(v_a_135_);
lean_dec(v___x_120_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_142_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v___x_140_; 
if (v_isShared_138_ == 0)
{
v___x_140_ = v___x_137_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v_a_135_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
}
else
{
lean_dec(v_a_118_);
return v___x_117_;
}
}
else
{
return v___x_117_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg___boxed(lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg(v_a_143_, v_a_144_, v_a_145_);
lean_dec(v_a_145_);
lean_dec_ref(v_a_144_);
lean_dec(v_a_143_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent(lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg(v_a_148_, v_a_156_, v_a_157_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___boxed(lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lean_Meta_Grind_Arith_Cutsat_inconsistent(v_a_160_, v_a_161_, v_a_162_, v_a_163_, v_a_164_, v_a_165_, v_a_166_, v_a_167_, v_a_168_, v_a_169_);
lean_dec(v_a_169_);
lean_dec_ref(v_a_168_);
lean_dec(v_a_167_);
lean_dec_ref(v_a_166_);
lean_dec(v_a_165_);
lean_dec_ref(v_a_164_);
lean_dec(v_a_163_);
lean_dec_ref(v_a_162_);
lean_dec(v_a_161_);
lean_dec(v_a_160_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_mkVar___boxed(lean_object* v_e_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_00___x40___internal___hyg_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = lean_grind_cutsat_mk_var(v_e_184_, v_a_185_, v_a_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_, v_a_194_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars___redArg(lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_197_, v_a_198_, v_a_199_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v_a_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_210_; 
v_a_202_ = lean_ctor_get(v___x_201_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_210_ == 0)
{
v___x_204_ = v___x_201_;
v_isShared_205_ = v_isSharedCheck_210_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_a_202_);
lean_dec(v___x_201_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_210_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v_vars_206_; lean_object* v___x_208_; 
v_vars_206_ = lean_ctor_get(v_a_202_, 0);
lean_inc_ref(v_vars_206_);
lean_dec(v_a_202_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v_vars_206_);
v___x_208_ = v___x_204_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_vars_206_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
else
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_218_; 
v_a_211_ = lean_ctor_get(v___x_201_, 0);
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_218_ == 0)
{
v___x_213_ = v___x_201_;
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_201_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_216_; 
if (v_isShared_214_ == 0)
{
v___x_216_ = v___x_213_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v_a_211_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars___redArg___boxed(lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Lean_Meta_Grind_Arith_Cutsat_getVars___redArg(v_a_219_, v_a_220_, v_a_221_);
lean_dec(v_a_221_);
lean_dec_ref(v_a_220_);
lean_dec(v_a_219_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars(lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = l_Lean_Meta_Grind_Arith_Cutsat_getVars___redArg(v_a_224_, v_a_232_, v_a_233_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars___boxed(lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lean_Meta_Grind_Arith_Cutsat_getVars(v_a_236_, v_a_237_, v_a_238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_);
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
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(lean_object* v_x_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_249_, v_a_250_, v_a_251_);
if (lean_obj_tag(v___x_253_) == 0)
{
lean_object* v_a_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_270_; 
v_a_254_ = lean_ctor_get(v___x_253_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_253_);
if (v_isSharedCheck_270_ == 0)
{
v___x_256_ = v___x_253_;
v_isShared_257_ = v_isSharedCheck_270_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_a_254_);
lean_dec(v___x_253_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_270_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v_vars_258_; lean_object* v_size_259_; lean_object* v___x_260_; uint8_t v___x_261_; 
v_vars_258_ = lean_ctor_get(v_a_254_, 0);
lean_inc_ref(v_vars_258_);
lean_dec(v_a_254_);
v_size_259_ = lean_ctor_get(v_vars_258_, 2);
v___x_260_ = l_Lean_instInhabitedExpr;
v___x_261_ = lean_nat_dec_lt(v_x_248_, v_size_259_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; lean_object* v___x_264_; 
lean_dec_ref(v_vars_258_);
v___x_262_ = l_outOfBounds___redArg(v___x_260_);
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 0, v___x_262_);
v___x_264_ = v___x_256_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_262_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
else
{
lean_object* v___x_266_; lean_object* v___x_268_; 
v___x_266_ = l_Lean_PersistentArray_get_x21___redArg(v___x_260_, v_vars_258_, v_x_248_);
lean_dec_ref(v_vars_258_);
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 0, v___x_266_);
v___x_268_ = v___x_256_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v___x_266_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
}
else
{
lean_object* v_a_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_278_; 
v_a_271_ = lean_ctor_get(v___x_253_, 0);
v_isSharedCheck_278_ = !lean_is_exclusive(v___x_253_);
if (v_isSharedCheck_278_ == 0)
{
v___x_273_ = v___x_253_;
v_isShared_274_ = v_isSharedCheck_278_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_a_271_);
lean_dec(v___x_253_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_278_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___x_276_; 
if (v_isShared_274_ == 0)
{
v___x_276_ = v___x_273_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v_a_271_);
v___x_276_ = v_reuseFailAlloc_277_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
return v___x_276_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg___boxed(lean_object* v_x_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_x_279_, v_a_280_, v_a_281_, v_a_282_);
lean_dec(v_a_282_);
lean_dec_ref(v_a_281_);
lean_dec(v_a_280_);
lean_dec(v_x_279_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar(lean_object* v_x_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_){
_start:
{
lean_object* v___x_297_; 
v___x_297_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_x_285_, v_a_286_, v_a_294_, v_a_295_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___boxed(lean_object* v_x_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar(v_x_298_, v_a_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_, v_a_305_, v_a_306_, v_a_307_, v_a_308_);
lean_dec(v_a_308_);
lean_dec_ref(v_a_307_);
lean_dec(v_a_306_);
lean_dec_ref(v_a_305_);
lean_dec(v_a_304_);
lean_dec_ref(v_a_303_);
lean_dec(v_a_302_);
lean_dec_ref(v_a_301_);
lean_dec(v_a_300_);
lean_dec(v_a_299_);
lean_dec(v_x_298_);
return v_res_310_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_311_, lean_object* v_i_312_, lean_object* v_k_313_){
_start:
{
lean_object* v___x_314_; uint8_t v___x_315_; 
v___x_314_ = lean_array_get_size(v_keys_311_);
v___x_315_ = lean_nat_dec_lt(v_i_312_, v___x_314_);
if (v___x_315_ == 0)
{
lean_dec(v_i_312_);
return v___x_315_;
}
else
{
lean_object* v_k_x27_316_; uint8_t v___x_317_; 
v_k_x27_316_ = lean_array_fget_borrowed(v_keys_311_, v_i_312_);
v___x_317_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_k_313_, v_k_x27_316_);
if (v___x_317_ == 0)
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = lean_unsigned_to_nat(1u);
v___x_319_ = lean_nat_add(v_i_312_, v___x_318_);
lean_dec(v_i_312_);
v_i_312_ = v___x_319_;
goto _start;
}
else
{
lean_dec(v_i_312_);
return v___x_317_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_321_, lean_object* v_i_322_, lean_object* v_k_323_){
_start:
{
uint8_t v_res_324_; lean_object* v_r_325_; 
v_res_324_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___redArg(v_keys_321_, v_i_322_, v_k_323_);
lean_dec_ref(v_k_323_);
lean_dec_ref(v_keys_321_);
v_r_325_ = lean_box(v_res_324_);
return v_r_325_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_326_; size_t v___x_327_; size_t v___x_328_; 
v___x_326_ = ((size_t)5ULL);
v___x_327_ = ((size_t)1ULL);
v___x_328_ = lean_usize_shift_left(v___x_327_, v___x_326_);
return v___x_328_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_329_; size_t v___x_330_; size_t v___x_331_; 
v___x_329_ = ((size_t)1ULL);
v___x_330_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg___closed__0);
v___x_331_ = lean_usize_sub(v___x_330_, v___x_329_);
return v___x_331_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg(lean_object* v_x_332_, size_t v_x_333_, lean_object* v_x_334_){
_start:
{
if (lean_obj_tag(v_x_332_) == 0)
{
lean_object* v_es_335_; lean_object* v___x_336_; size_t v___x_337_; size_t v___x_338_; size_t v___x_339_; lean_object* v_j_340_; lean_object* v___x_341_; 
v_es_335_ = lean_ctor_get(v_x_332_, 0);
v___x_336_ = lean_box(2);
v___x_337_ = ((size_t)5ULL);
v___x_338_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg___closed__1);
v___x_339_ = lean_usize_land(v_x_333_, v___x_338_);
v_j_340_ = lean_usize_to_nat(v___x_339_);
v___x_341_ = lean_array_get_borrowed(v___x_336_, v_es_335_, v_j_340_);
lean_dec(v_j_340_);
switch(lean_obj_tag(v___x_341_))
{
case 0:
{
lean_object* v_key_342_; uint8_t v___x_343_; 
v_key_342_ = lean_ctor_get(v___x_341_, 0);
v___x_343_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_334_, v_key_342_);
return v___x_343_;
}
case 1:
{
lean_object* v_node_344_; size_t v___x_345_; 
v_node_344_ = lean_ctor_get(v___x_341_, 0);
v___x_345_ = lean_usize_shift_right(v_x_333_, v___x_337_);
v_x_332_ = v_node_344_;
v_x_333_ = v___x_345_;
goto _start;
}
default: 
{
uint8_t v___x_347_; 
v___x_347_ = 0;
return v___x_347_;
}
}
}
else
{
lean_object* v_ks_348_; lean_object* v___x_349_; uint8_t v___x_350_; 
v_ks_348_ = lean_ctor_get(v_x_332_, 0);
v___x_349_ = lean_unsigned_to_nat(0u);
v___x_350_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___redArg(v_ks_348_, v___x_349_, v_x_334_);
return v___x_350_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg___boxed(lean_object* v_x_351_, lean_object* v_x_352_, lean_object* v_x_353_){
_start:
{
size_t v_x_853__boxed_354_; uint8_t v_res_355_; lean_object* v_r_356_; 
v_x_853__boxed_354_ = lean_unbox_usize(v_x_352_);
lean_dec(v_x_352_);
v_res_355_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg(v_x_351_, v_x_853__boxed_354_, v_x_353_);
lean_dec_ref(v_x_353_);
lean_dec_ref(v_x_351_);
v_r_356_ = lean_box(v_res_355_);
return v_r_356_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___redArg(lean_object* v_x_357_, lean_object* v_x_358_){
_start:
{
uint64_t v___x_359_; size_t v___x_360_; uint8_t v___x_361_; 
v___x_359_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_358_);
v___x_360_ = lean_uint64_to_usize(v___x_359_);
v___x_361_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg(v_x_357_, v___x_360_, v_x_358_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___redArg___boxed(lean_object* v_x_362_, lean_object* v_x_363_){
_start:
{
uint8_t v_res_364_; lean_object* v_r_365_; 
v_res_364_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___redArg(v_x_362_, v_x_363_);
lean_dec_ref(v_x_363_);
lean_dec_ref(v_x_362_);
v_r_365_ = lean_box(v_res_364_);
return v_r_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar___redArg(lean_object* v_e_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_367_, v_a_368_, v_a_369_);
if (lean_obj_tag(v___x_371_) == 0)
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_382_; 
v_a_372_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_382_ == 0)
{
v___x_374_ = v___x_371_;
v_isShared_375_ = v_isSharedCheck_382_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_371_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_382_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v_varMap_376_; uint8_t v___x_377_; lean_object* v___x_378_; lean_object* v___x_380_; 
v_varMap_376_ = lean_ctor_get(v_a_372_, 1);
lean_inc_ref(v_varMap_376_);
lean_dec(v_a_372_);
v___x_377_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___redArg(v_varMap_376_, v_e_366_);
lean_dec_ref(v_varMap_376_);
v___x_378_ = lean_box(v___x_377_);
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 0, v___x_378_);
v___x_380_ = v___x_374_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v___x_378_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
else
{
lean_object* v_a_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_390_; 
v_a_383_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_390_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_390_ == 0)
{
v___x_385_ = v___x_371_;
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_a_383_);
lean_dec(v___x_371_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_388_; 
if (v_isShared_386_ == 0)
{
v___x_388_ = v___x_385_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_a_383_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar___redArg___boxed(lean_object* v_e_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Lean_Meta_Grind_Arith_Cutsat_hasVar___redArg(v_e_391_, v_a_392_, v_a_393_, v_a_394_);
lean_dec(v_a_394_);
lean_dec_ref(v_a_393_);
lean_dec(v_a_392_);
lean_dec_ref(v_e_391_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar(lean_object* v_e_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = l_Lean_Meta_Grind_Arith_Cutsat_hasVar___redArg(v_e_397_, v_a_398_, v_a_406_, v_a_407_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar___boxed(lean_object* v_e_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_Lean_Meta_Grind_Arith_Cutsat_hasVar(v_e_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_, v_a_420_);
lean_dec(v_a_420_);
lean_dec_ref(v_a_419_);
lean_dec(v_a_418_);
lean_dec_ref(v_a_417_);
lean_dec(v_a_416_);
lean_dec_ref(v_a_415_);
lean_dec(v_a_414_);
lean_dec_ref(v_a_413_);
lean_dec(v_a_412_);
lean_dec(v_a_411_);
lean_dec_ref(v_e_410_);
return v_res_422_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0(lean_object* v_00_u03b2_423_, lean_object* v_x_424_, lean_object* v_x_425_){
_start:
{
uint8_t v___x_426_; 
v___x_426_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___redArg(v_x_424_, v_x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___boxed(lean_object* v_00_u03b2_427_, lean_object* v_x_428_, lean_object* v_x_429_){
_start:
{
uint8_t v_res_430_; lean_object* v_r_431_; 
v_res_430_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0(v_00_u03b2_427_, v_x_428_, v_x_429_);
lean_dec_ref(v_x_429_);
lean_dec_ref(v_x_428_);
v_r_431_ = lean_box(v_res_430_);
return v_r_431_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0(lean_object* v_00_u03b2_432_, lean_object* v_x_433_, size_t v_x_434_, lean_object* v_x_435_){
_start:
{
uint8_t v___x_436_; 
v___x_436_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg(v_x_433_, v_x_434_, v_x_435_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___boxed(lean_object* v_00_u03b2_437_, lean_object* v_x_438_, lean_object* v_x_439_, lean_object* v_x_440_){
_start:
{
size_t v_x_966__boxed_441_; uint8_t v_res_442_; lean_object* v_r_443_; 
v_x_966__boxed_441_ = lean_unbox_usize(v_x_439_);
lean_dec(v_x_439_);
v_res_442_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0(v_00_u03b2_437_, v_x_438_, v_x_966__boxed_441_, v_x_440_);
lean_dec_ref(v_x_440_);
lean_dec_ref(v_x_438_);
v_r_443_ = lean_box(v_res_442_);
return v_r_443_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_444_, lean_object* v_keys_445_, lean_object* v_vals_446_, lean_object* v_heq_447_, lean_object* v_i_448_, lean_object* v_k_449_){
_start:
{
uint8_t v___x_450_; 
v___x_450_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___redArg(v_keys_445_, v_i_448_, v_k_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_451_, lean_object* v_keys_452_, lean_object* v_vals_453_, lean_object* v_heq_454_, lean_object* v_i_455_, lean_object* v_k_456_){
_start:
{
uint8_t v_res_457_; lean_object* v_r_458_; 
v_res_457_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1(v_00_u03b2_451_, v_keys_452_, v_vals_453_, v_heq_454_, v_i_455_, v_k_456_);
lean_dec_ref(v_k_456_);
lean_dec_ref(v_vals_453_);
lean_dec_ref(v_keys_452_);
v_r_458_ = lean_box(v_res_457_);
return v_r_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm___redArg(lean_object* v_e_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = l_Lean_Meta_Grind_Arith_Cutsat_hasVar___redArg(v_e_459_, v_a_460_, v_a_461_, v_a_462_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm___redArg___boxed(lean_object* v_e_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm___redArg(v_e_465_, v_a_466_, v_a_467_, v_a_468_);
lean_dec(v_a_468_);
lean_dec_ref(v_a_467_);
lean_dec(v_a_466_);
lean_dec_ref(v_e_465_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm(lean_object* v_e_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_Lean_Meta_Grind_Arith_Cutsat_hasVar___redArg(v_e_471_, v_a_472_, v_a_480_, v_a_481_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm___boxed(lean_object* v_e_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm(v_e_484_, v_a_485_, v_a_486_, v_a_487_, v_a_488_, v_a_489_, v_a_490_, v_a_491_, v_a_492_, v_a_493_, v_a_494_);
lean_dec(v_a_494_);
lean_dec_ref(v_a_493_);
lean_dec(v_a_492_);
lean_dec_ref(v_a_491_);
lean_dec(v_a_490_);
lean_dec_ref(v_a_489_);
lean_dec(v_a_488_);
lean_dec_ref(v_a_487_);
lean_dec(v_a_486_);
lean_dec(v_a_485_);
lean_dec_ref(v_e_484_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated___redArg(lean_object* v_x_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_498_, v_a_499_, v_a_500_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_525_; 
v_a_503_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_525_ == 0)
{
v___x_505_ = v___x_502_;
v_isShared_506_ = v_isSharedCheck_525_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_dec(v___x_502_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_525_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___y_508_; lean_object* v_elimEqs_519_; lean_object* v_size_520_; lean_object* v___x_521_; uint8_t v___x_522_; 
v_elimEqs_519_ = lean_ctor_get(v_a_503_, 10);
lean_inc_ref(v_elimEqs_519_);
lean_dec(v_a_503_);
v_size_520_ = lean_ctor_get(v_elimEqs_519_, 2);
v___x_521_ = lean_box(0);
v___x_522_ = lean_nat_dec_lt(v_x_497_, v_size_520_);
if (v___x_522_ == 0)
{
lean_object* v___x_523_; 
lean_dec_ref(v_elimEqs_519_);
v___x_523_ = l_outOfBounds___redArg(v___x_521_);
v___y_508_ = v___x_523_;
goto v___jp_507_;
}
else
{
lean_object* v___x_524_; 
v___x_524_ = l_Lean_PersistentArray_get_x21___redArg(v___x_521_, v_elimEqs_519_, v_x_497_);
lean_dec_ref(v_elimEqs_519_);
v___y_508_ = v___x_524_;
goto v___jp_507_;
}
v___jp_507_:
{
if (lean_obj_tag(v___y_508_) == 0)
{
uint8_t v___x_509_; lean_object* v___x_510_; lean_object* v___x_512_; 
v___x_509_ = 0;
v___x_510_ = lean_box(v___x_509_);
if (v_isShared_506_ == 0)
{
lean_ctor_set(v___x_505_, 0, v___x_510_);
v___x_512_ = v___x_505_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_510_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
else
{
uint8_t v___x_514_; lean_object* v___x_515_; lean_object* v___x_517_; 
lean_dec_ref(v___y_508_);
v___x_514_ = 1;
v___x_515_ = lean_box(v___x_514_);
if (v_isShared_506_ == 0)
{
lean_ctor_set(v___x_505_, 0, v___x_515_);
v___x_517_ = v___x_505_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v___x_515_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
v_a_526_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_502_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_502_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated___redArg___boxed(lean_object* v_x_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Lean_Meta_Grind_Arith_Cutsat_eliminated___redArg(v_x_534_, v_a_535_, v_a_536_, v_a_537_);
lean_dec(v_a_537_);
lean_dec_ref(v_a_536_);
lean_dec(v_a_535_);
lean_dec(v_x_534_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated(lean_object* v_x_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = l_Lean_Meta_Grind_Arith_Cutsat_eliminated___redArg(v_x_540_, v_a_541_, v_a_549_, v_a_550_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated___boxed(lean_object* v_x_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_Lean_Meta_Grind_Arith_Cutsat_eliminated(v_x_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_, v_a_560_, v_a_561_, v_a_562_, v_a_563_);
lean_dec(v_a_563_);
lean_dec_ref(v_a_562_);
lean_dec(v_a_561_);
lean_dec_ref(v_a_560_);
lean_dec(v_a_559_);
lean_dec_ref(v_a_558_);
lean_dec(v_a_557_);
lean_dec_ref(v_a_556_);
lean_dec(v_a_555_);
lean_dec(v_a_554_);
lean_dec(v_x_553_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_assert___boxed(lean_object* v_c_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_00___x40___internal___hyg_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = lean_grind_cutsat_assert_eq(v_c_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_, v_a_586_, v_a_587_, v_a_588_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg___lam__0(lean_object* v_x_591_, lean_object* v_s_592_){
_start:
{
lean_object* v_vars_593_; lean_object* v_varMap_594_; lean_object* v_vars_x27_595_; lean_object* v_varMap_x27_596_; lean_object* v_natToIntMap_597_; lean_object* v_natDef_598_; lean_object* v_dvds_599_; lean_object* v_lowers_600_; lean_object* v_uppers_601_; lean_object* v_diseqs_602_; lean_object* v_elimEqs_603_; lean_object* v_elimStack_604_; lean_object* v_occurs_605_; lean_object* v_assignment_606_; lean_object* v_nextCnstrId_607_; uint8_t v_caseSplits_608_; lean_object* v_conflict_x3f_609_; lean_object* v_diseqSplits_610_; lean_object* v_divMod_611_; lean_object* v_toIntIds_612_; lean_object* v_toIntInfos_613_; lean_object* v_toIntTermMap_614_; lean_object* v_toIntVarMap_615_; uint8_t v_usedCommRing_616_; lean_object* v_nonlinearOccs_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_625_; 
v_vars_593_ = lean_ctor_get(v_s_592_, 0);
v_varMap_594_ = lean_ctor_get(v_s_592_, 1);
v_vars_x27_595_ = lean_ctor_get(v_s_592_, 2);
v_varMap_x27_596_ = lean_ctor_get(v_s_592_, 3);
v_natToIntMap_597_ = lean_ctor_get(v_s_592_, 4);
v_natDef_598_ = lean_ctor_get(v_s_592_, 5);
v_dvds_599_ = lean_ctor_get(v_s_592_, 6);
v_lowers_600_ = lean_ctor_get(v_s_592_, 7);
v_uppers_601_ = lean_ctor_get(v_s_592_, 8);
v_diseqs_602_ = lean_ctor_get(v_s_592_, 9);
v_elimEqs_603_ = lean_ctor_get(v_s_592_, 10);
v_elimStack_604_ = lean_ctor_get(v_s_592_, 11);
v_occurs_605_ = lean_ctor_get(v_s_592_, 12);
v_assignment_606_ = lean_ctor_get(v_s_592_, 13);
v_nextCnstrId_607_ = lean_ctor_get(v_s_592_, 14);
v_caseSplits_608_ = lean_ctor_get_uint8(v_s_592_, sizeof(void*)*23);
v_conflict_x3f_609_ = lean_ctor_get(v_s_592_, 15);
v_diseqSplits_610_ = lean_ctor_get(v_s_592_, 16);
v_divMod_611_ = lean_ctor_get(v_s_592_, 17);
v_toIntIds_612_ = lean_ctor_get(v_s_592_, 18);
v_toIntInfos_613_ = lean_ctor_get(v_s_592_, 19);
v_toIntTermMap_614_ = lean_ctor_get(v_s_592_, 20);
v_toIntVarMap_615_ = lean_ctor_get(v_s_592_, 21);
v_usedCommRing_616_ = lean_ctor_get_uint8(v_s_592_, sizeof(void*)*23 + 1);
v_nonlinearOccs_617_ = lean_ctor_get(v_s_592_, 22);
v_isSharedCheck_625_ = !lean_is_exclusive(v_s_592_);
if (v_isSharedCheck_625_ == 0)
{
v___x_619_ = v_s_592_;
v_isShared_620_ = v_isSharedCheck_625_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_nonlinearOccs_617_);
lean_inc(v_toIntVarMap_615_);
lean_inc(v_toIntTermMap_614_);
lean_inc(v_toIntInfos_613_);
lean_inc(v_toIntIds_612_);
lean_inc(v_divMod_611_);
lean_inc(v_diseqSplits_610_);
lean_inc(v_conflict_x3f_609_);
lean_inc(v_nextCnstrId_607_);
lean_inc(v_assignment_606_);
lean_inc(v_occurs_605_);
lean_inc(v_elimStack_604_);
lean_inc(v_elimEqs_603_);
lean_inc(v_diseqs_602_);
lean_inc(v_uppers_601_);
lean_inc(v_lowers_600_);
lean_inc(v_dvds_599_);
lean_inc(v_natDef_598_);
lean_inc(v_natToIntMap_597_);
lean_inc(v_varMap_x27_596_);
lean_inc(v_vars_x27_595_);
lean_inc(v_varMap_594_);
lean_inc(v_vars_593_);
lean_dec(v_s_592_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_625_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_621_; lean_object* v___x_623_; 
v___x_621_ = l_Lean_Meta_Grind_Arith_shrink(v_assignment_606_, v_x_591_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 13, v___x_621_);
v___x_623_ = v___x_619_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 23, 2);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_vars_593_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v_varMap_594_);
lean_ctor_set(v_reuseFailAlloc_624_, 2, v_vars_x27_595_);
lean_ctor_set(v_reuseFailAlloc_624_, 3, v_varMap_x27_596_);
lean_ctor_set(v_reuseFailAlloc_624_, 4, v_natToIntMap_597_);
lean_ctor_set(v_reuseFailAlloc_624_, 5, v_natDef_598_);
lean_ctor_set(v_reuseFailAlloc_624_, 6, v_dvds_599_);
lean_ctor_set(v_reuseFailAlloc_624_, 7, v_lowers_600_);
lean_ctor_set(v_reuseFailAlloc_624_, 8, v_uppers_601_);
lean_ctor_set(v_reuseFailAlloc_624_, 9, v_diseqs_602_);
lean_ctor_set(v_reuseFailAlloc_624_, 10, v_elimEqs_603_);
lean_ctor_set(v_reuseFailAlloc_624_, 11, v_elimStack_604_);
lean_ctor_set(v_reuseFailAlloc_624_, 12, v_occurs_605_);
lean_ctor_set(v_reuseFailAlloc_624_, 13, v___x_621_);
lean_ctor_set(v_reuseFailAlloc_624_, 14, v_nextCnstrId_607_);
lean_ctor_set(v_reuseFailAlloc_624_, 15, v_conflict_x3f_609_);
lean_ctor_set(v_reuseFailAlloc_624_, 16, v_diseqSplits_610_);
lean_ctor_set(v_reuseFailAlloc_624_, 17, v_divMod_611_);
lean_ctor_set(v_reuseFailAlloc_624_, 18, v_toIntIds_612_);
lean_ctor_set(v_reuseFailAlloc_624_, 19, v_toIntInfos_613_);
lean_ctor_set(v_reuseFailAlloc_624_, 20, v_toIntTermMap_614_);
lean_ctor_set(v_reuseFailAlloc_624_, 21, v_toIntVarMap_615_);
lean_ctor_set(v_reuseFailAlloc_624_, 22, v_nonlinearOccs_617_);
lean_ctor_set_uint8(v_reuseFailAlloc_624_, sizeof(void*)*23, v_caseSplits_608_);
lean_ctor_set_uint8(v_reuseFailAlloc_624_, sizeof(void*)*23 + 1, v_usedCommRing_616_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg___lam__0___boxed(lean_object* v_x_626_, lean_object* v_s_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg___lam__0(v_x_626_, v_s_627_);
lean_dec(v_x_626_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg(lean_object* v_x_629_, lean_object* v_a_630_, lean_object* v_a_631_){
_start:
{
lean_object* v___f_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___f_633_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_633_, 0, v_x_629_);
v___x_634_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_635_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_634_, v___f_633_, v_a_630_, v_a_631_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg___boxed(lean_object* v_x_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg(v_x_636_, v_a_637_, v_a_638_);
lean_dec(v_a_638_);
lean_dec(v_a_637_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom(lean_object* v_x_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_){
_start:
{
lean_object* v___x_653_; 
v___x_653_ = l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg(v_x_641_, v_a_642_, v_a_651_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___boxed(lean_object* v_x_654_, lean_object* v_a_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom(v_x_654_, v_a_655_, v_a_656_, v_a_657_, v_a_658_, v_a_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_);
lean_dec(v_a_664_);
lean_dec_ref(v_a_663_);
lean_dec(v_a_662_);
lean_dec_ref(v_a_661_);
lean_dec(v_a_660_);
lean_dec_ref(v_a_659_);
lean_dec(v_a_658_);
lean_dec_ref(v_a_657_);
lean_dec(v_a_656_);
lean_dec(v_a_655_);
return v_res_666_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__0(void){
_start:
{
lean_object* v___x_667_; 
v___x_667_ = lean_mk_string_unchecked(" + ", 3, 3);
return v___x_667_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__1(void){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__0);
v___x_669_ = l_Lean_stringToMessageData(v___x_668_);
return v___x_669_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_670_ = lean_unsigned_to_nat(1u);
v___x_671_ = lean_nat_to_int(v___x_670_);
return v___x_671_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__3(void){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = lean_mk_string_unchecked("*", 1, 1);
return v___x_672_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__4(void){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_673_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__3);
v___x_674_ = l_Lean_stringToMessageData(v___x_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg(lean_object* v_r_675_, lean_object* v_p_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_){
_start:
{
if (lean_obj_tag(v_p_676_) == 0)
{
lean_object* v_k_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_699_; 
v_k_681_ = lean_ctor_get(v_p_676_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v_p_676_);
if (v_isSharedCheck_699_ == 0)
{
v___x_683_ = v_p_676_;
v_isShared_684_ = v_isSharedCheck_699_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_k_681_);
lean_dec(v_p_676_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_699_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_685_; uint8_t v___x_686_; 
v___x_685_ = lean_obj_once(&l_Int_Linear_Poly_isZero___closed__0, &l_Int_Linear_Poly_isZero___closed__0_once, _init_l_Int_Linear_Poly_isZero___closed__0);
v___x_686_ = lean_int_dec_eq(v_k_681_, v___x_685_);
if (v___x_686_ == 0)
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_687_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__1);
v___x_688_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_688_, 0, v_r_675_);
lean_ctor_set(v___x_688_, 1, v___x_687_);
v___x_689_ = l_Int_repr(v_k_681_);
lean_dec(v_k_681_);
if (v_isShared_684_ == 0)
{
lean_ctor_set_tag(v___x_683_, 3);
lean_ctor_set(v___x_683_, 0, v___x_689_);
v___x_691_ = v___x_683_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v___x_689_);
v___x_691_ = v_reuseFailAlloc_695_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_692_ = l_Lean_MessageData_ofFormat(v___x_691_);
v___x_693_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_693_, 0, v___x_688_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
v___x_694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
return v___x_694_;
}
}
else
{
lean_object* v___x_697_; 
lean_dec(v_k_681_);
if (v_isShared_684_ == 0)
{
lean_ctor_set(v___x_683_, 0, v_r_675_);
v___x_697_ = v___x_683_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_r_675_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
else
{
lean_object* v_k_700_; lean_object* v_v_701_; lean_object* v_p_702_; lean_object* v___x_703_; uint8_t v___x_704_; 
v_k_700_ = lean_ctor_get(v_p_676_, 0);
lean_inc(v_k_700_);
v_v_701_ = lean_ctor_get(v_p_676_, 1);
lean_inc(v_v_701_);
v_p_702_ = lean_ctor_get(v_p_676_, 2);
lean_inc_ref(v_p_702_);
lean_dec_ref(v_p_676_);
v___x_703_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__2);
v___x_704_ = lean_int_dec_eq(v_k_700_, v___x_703_);
if (v___x_704_ == 0)
{
lean_object* v___x_705_; 
v___x_705_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_v_701_, v_a_677_, v_a_678_, v_a_679_);
lean_dec(v_v_701_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v_a_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v_a_706_ = lean_ctor_get(v___x_705_, 0);
lean_inc(v_a_706_);
lean_dec_ref(v___x_705_);
v___x_707_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__1);
v___x_708_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_708_, 0, v_r_675_);
lean_ctor_set(v___x_708_, 1, v___x_707_);
v___x_709_ = l_Int_repr(v_k_700_);
lean_dec(v_k_700_);
v___x_710_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_710_, 0, v___x_709_);
v___x_711_ = l_Lean_MessageData_ofFormat(v___x_710_);
v___x_712_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_712_, 0, v___x_708_);
lean_ctor_set(v___x_712_, 1, v___x_711_);
v___x_713_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__4, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__4);
v___x_714_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_714_, 0, v___x_712_);
lean_ctor_set(v___x_714_, 1, v___x_713_);
v___x_715_ = l_Lean_Meta_Grind_Arith_quoteIfArithTerm(v_a_706_);
v___x_716_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_716_, 0, v___x_714_);
lean_ctor_set(v___x_716_, 1, v___x_715_);
v_r_675_ = v___x_716_;
v_p_676_ = v_p_702_;
goto _start;
}
else
{
lean_object* v_a_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_725_; 
lean_dec_ref(v_p_702_);
lean_dec(v_k_700_);
lean_dec_ref(v_r_675_);
v_a_718_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_725_ == 0)
{
v___x_720_ = v___x_705_;
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_a_718_);
lean_dec(v___x_705_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_723_; 
if (v_isShared_721_ == 0)
{
v___x_723_ = v___x_720_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_a_718_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
}
else
{
lean_object* v___x_726_; 
lean_dec(v_k_700_);
v___x_726_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_v_701_, v_a_677_, v_a_678_, v_a_679_);
lean_dec(v_v_701_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_727_);
lean_dec_ref(v___x_726_);
v___x_728_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__1);
v___x_729_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_729_, 0, v_r_675_);
lean_ctor_set(v___x_729_, 1, v___x_728_);
v___x_730_ = l_Lean_Meta_Grind_Arith_quoteIfArithTerm(v_a_727_);
v___x_731_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_731_, 0, v___x_729_);
lean_ctor_set(v___x_731_, 1, v___x_730_);
v_r_675_ = v___x_731_;
v_p_676_ = v_p_702_;
goto _start;
}
else
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
lean_dec_ref(v_p_702_);
lean_dec_ref(v_r_675_);
v_a_733_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_740_ == 0)
{
v___x_735_ = v___x_726_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___x_726_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_736_ == 0)
{
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_733_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___boxed(lean_object* v_r_741_, lean_object* v_p_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_){
_start:
{
lean_object* v_res_747_; 
v_res_747_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg(v_r_741_, v_p_742_, v_a_743_, v_a_744_, v_a_745_);
lean_dec(v_a_745_);
lean_dec_ref(v_a_744_);
lean_dec(v_a_743_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go(lean_object* v_r_748_, lean_object* v_p_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg(v_r_748_, v_p_749_, v_a_750_, v_a_758_, v_a_759_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___boxed(lean_object* v_r_762_, lean_object* v_p_763_, lean_object* v_a_764_, lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go(v_r_762_, v_p_763_, v_a_764_, v_a_765_, v_a_766_, v_a_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_, v_a_772_, v_a_773_);
lean_dec(v_a_773_);
lean_dec_ref(v_a_772_);
lean_dec(v_a_771_);
lean_dec_ref(v_a_770_);
lean_dec(v_a_769_);
lean_dec_ref(v_a_768_);
lean_dec(v_a_767_);
lean_dec_ref(v_a_766_);
lean_dec(v_a_765_);
lean_dec(v_a_764_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_pp___redArg(lean_object* v_p_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_){
_start:
{
if (lean_obj_tag(v_p_776_) == 0)
{
lean_object* v_k_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_791_; 
v_k_781_ = lean_ctor_get(v_p_776_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v_p_776_);
if (v_isSharedCheck_791_ == 0)
{
v___x_783_ = v_p_776_;
v_isShared_784_ = v_isSharedCheck_791_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_k_781_);
lean_dec(v_p_776_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_791_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_785_; lean_object* v___x_787_; 
v___x_785_ = l_Int_repr(v_k_781_);
lean_dec(v_k_781_);
if (v_isShared_784_ == 0)
{
lean_ctor_set_tag(v___x_783_, 3);
lean_ctor_set(v___x_783_, 0, v___x_785_);
v___x_787_ = v___x_783_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v___x_785_);
v___x_787_ = v_reuseFailAlloc_790_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_788_ = l_Lean_MessageData_ofFormat(v___x_787_);
v___x_789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_789_, 0, v___x_788_);
return v___x_789_;
}
}
}
else
{
lean_object* v_k_792_; lean_object* v_v_793_; lean_object* v_p_794_; lean_object* v___x_795_; uint8_t v___x_796_; 
v_k_792_ = lean_ctor_get(v_p_776_, 0);
lean_inc(v_k_792_);
v_v_793_ = lean_ctor_get(v_p_776_, 1);
lean_inc(v_v_793_);
v_p_794_ = lean_ctor_get(v_p_776_, 2);
lean_inc_ref(v_p_794_);
lean_dec_ref(v_p_776_);
v___x_795_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__2);
v___x_796_ = lean_int_dec_eq(v_k_792_, v___x_795_);
if (v___x_796_ == 0)
{
lean_object* v___x_797_; 
v___x_797_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_v_793_, v_a_777_, v_a_778_, v_a_779_);
lean_dec(v_v_793_);
if (lean_obj_tag(v___x_797_) == 0)
{
lean_object* v_a_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v_a_798_ = lean_ctor_get(v___x_797_, 0);
lean_inc(v_a_798_);
lean_dec_ref(v___x_797_);
v___x_799_ = l_Int_repr(v_k_792_);
lean_dec(v_k_792_);
v___x_800_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_800_, 0, v___x_799_);
v___x_801_ = l_Lean_MessageData_ofFormat(v___x_800_);
v___x_802_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__4, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__4);
v___x_803_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_803_, 0, v___x_801_);
lean_ctor_set(v___x_803_, 1, v___x_802_);
v___x_804_ = l_Lean_Meta_Grind_Arith_quoteIfArithTerm(v_a_798_);
v___x_805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_805_, 0, v___x_803_);
lean_ctor_set(v___x_805_, 1, v___x_804_);
v___x_806_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg(v___x_805_, v_p_794_, v_a_777_, v_a_778_, v_a_779_);
return v___x_806_;
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec_ref(v_p_794_);
lean_dec(v_k_792_);
v_a_807_ = lean_ctor_get(v___x_797_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_797_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_797_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
else
{
lean_object* v___x_815_; 
lean_dec(v_k_792_);
v___x_815_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_v_793_, v_a_777_, v_a_778_, v_a_779_);
lean_dec(v_v_793_);
if (lean_obj_tag(v___x_815_) == 0)
{
lean_object* v_a_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v_a_816_ = lean_ctor_get(v___x_815_, 0);
lean_inc(v_a_816_);
lean_dec_ref(v___x_815_);
v___x_817_ = l_Lean_Meta_Grind_Arith_quoteIfArithTerm(v_a_816_);
v___x_818_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg(v___x_817_, v_p_794_, v_a_777_, v_a_778_, v_a_779_);
return v___x_818_;
}
else
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_826_; 
lean_dec_ref(v_p_794_);
v_a_819_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_826_ == 0)
{
v___x_821_ = v___x_815_;
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_815_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_824_; 
if (v_isShared_822_ == 0)
{
v___x_824_ = v___x_821_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_a_819_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_pp___redArg___boxed(lean_object* v_p_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l_Int_Linear_Poly_pp___redArg(v_p_827_, v_a_828_, v_a_829_, v_a_830_);
lean_dec(v_a_830_);
lean_dec_ref(v_a_829_);
lean_dec(v_a_828_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_pp(lean_object* v_p_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = l_Int_Linear_Poly_pp___redArg(v_p_833_, v_a_834_, v_a_842_, v_a_843_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_pp___boxed(lean_object* v_p_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_Int_Linear_Poly_pp(v_p_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_, v_a_851_, v_a_852_, v_a_853_, v_a_854_, v_a_855_, v_a_856_);
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
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27___redArg___lam__0(lean_object* v_a_859_, lean_object* v___x_860_, lean_object* v_x_861_){
_start:
{
lean_object* v_size_862_; uint8_t v___x_863_; 
v_size_862_ = lean_ctor_get(v_a_859_, 2);
v___x_863_ = lean_nat_dec_lt(v_x_861_, v_size_862_);
if (v___x_863_ == 0)
{
lean_object* v___x_864_; 
v___x_864_ = l_outOfBounds___redArg(v___x_860_);
return v___x_864_;
}
else
{
lean_object* v___x_865_; 
v___x_865_ = l_Lean_PersistentArray_get_x21___redArg(v___x_860_, v_a_859_, v_x_861_);
return v___x_865_;
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27___redArg___lam__0___boxed(lean_object* v_a_866_, lean_object* v___x_867_, lean_object* v_x_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_Int_Linear_Poly_denoteExpr_x27___redArg___lam__0(v_a_866_, v___x_867_, v_x_868_);
lean_dec(v_x_868_);
lean_dec_ref(v___x_867_);
lean_dec_ref(v_a_866_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27___redArg(lean_object* v_p_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_){
_start:
{
lean_object* v___x_875_; 
v___x_875_ = l_Lean_Meta_Grind_Arith_Cutsat_getVars___redArg(v_a_871_, v_a_872_, v_a_873_);
if (lean_obj_tag(v___x_875_) == 0)
{
lean_object* v_a_876_; lean_object* v___x_877_; lean_object* v___f_878_; lean_object* v___x_879_; 
v_a_876_ = lean_ctor_get(v___x_875_, 0);
lean_inc(v_a_876_);
lean_dec_ref(v___x_875_);
v___x_877_ = l_Lean_instInhabitedExpr;
v___f_878_ = lean_alloc_closure((void*)(l_Int_Linear_Poly_denoteExpr_x27___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_878_, 0, v_a_876_);
lean_closure_set(v___f_878_, 1, v___x_877_);
v___x_879_ = l_Int_Linear_Poly_denoteExpr___redArg(v___f_878_, v_p_870_);
return v___x_879_;
}
else
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_887_; 
lean_dec_ref(v_p_870_);
v_a_880_ = lean_ctor_get(v___x_875_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_887_ == 0)
{
v___x_882_ = v___x_875_;
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_875_);
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
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27___redArg___boxed(lean_object* v_p_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_){
_start:
{
lean_object* v_res_893_; 
v_res_893_ = l_Int_Linear_Poly_denoteExpr_x27___redArg(v_p_888_, v_a_889_, v_a_890_, v_a_891_);
lean_dec(v_a_891_);
lean_dec_ref(v_a_890_);
lean_dec(v_a_889_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27(lean_object* v_p_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_){
_start:
{
lean_object* v___x_906_; 
v___x_906_ = l_Int_Linear_Poly_denoteExpr_x27___redArg(v_p_894_, v_a_895_, v_a_903_, v_a_904_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_denoteExpr_x27___boxed(lean_object* v_p_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_){
_start:
{
lean_object* v_res_919_; 
v_res_919_ = l_Int_Linear_Poly_denoteExpr_x27(v_p_907_, v_a_908_, v_a_909_, v_a_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_, v_a_916_, v_a_917_);
lean_dec(v_a_917_);
lean_dec_ref(v_a_916_);
lean_dec(v_a_915_);
lean_dec_ref(v_a_914_);
lean_dec(v_a_913_);
lean_dec_ref(v_a_912_);
lean_dec(v_a_911_);
lean_dec_ref(v_a_910_);
lean_dec(v_a_909_);
lean_dec(v_a_908_);
return v_res_919_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isTrivial(lean_object* v_c_920_){
_start:
{
lean_object* v_p_921_; 
v_p_921_ = lean_ctor_get(v_c_920_, 1);
if (lean_obj_tag(v_p_921_) == 0)
{
lean_object* v_d_922_; lean_object* v_k_923_; lean_object* v___x_924_; lean_object* v___x_925_; uint8_t v___x_926_; 
v_d_922_ = lean_ctor_get(v_c_920_, 0);
v_k_923_ = lean_ctor_get(v_p_921_, 0);
v___x_924_ = lean_int_emod(v_k_923_, v_d_922_);
v___x_925_ = lean_obj_once(&l_Int_Linear_Poly_isZero___closed__0, &l_Int_Linear_Poly_isZero___closed__0_once, _init_l_Int_Linear_Poly_isZero___closed__0);
v___x_926_ = lean_int_dec_eq(v___x_924_, v___x_925_);
lean_dec(v___x_924_);
return v___x_926_;
}
else
{
lean_object* v_d_927_; lean_object* v___x_928_; uint8_t v___x_929_; 
v_d_927_ = lean_ctor_get(v_c_920_, 0);
v___x_928_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_pp_go___redArg___closed__2);
v___x_929_ = lean_int_dec_eq(v_d_927_, v___x_928_);
return v___x_929_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isTrivial___boxed(lean_object* v_c_930_){
_start:
{
uint8_t v_res_931_; lean_object* v_r_932_; 
v_res_931_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isTrivial(v_c_930_);
lean_dec_ref(v_c_930_);
v_r_932_ = lean_box(v_res_931_);
return v_r_932_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__0(void){
_start:
{
lean_object* v___x_933_; 
v___x_933_ = lean_mk_string_unchecked(" ∣ ", 5, 3);
return v___x_933_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__1(void){
_start:
{
lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_934_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__0);
v___x_935_ = l_Lean_stringToMessageData(v___x_934_);
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(lean_object* v_c_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_){
_start:
{
lean_object* v_d_941_; lean_object* v_p_942_; lean_object* v___x_943_; 
v_d_941_ = lean_ctor_get(v_c_936_, 0);
lean_inc(v_d_941_);
v_p_942_ = lean_ctor_get(v_c_936_, 1);
lean_inc_ref(v_p_942_);
lean_dec_ref(v_c_936_);
v___x_943_ = l_Int_Linear_Poly_pp___redArg(v_p_942_, v_a_937_, v_a_938_, v_a_939_);
if (lean_obj_tag(v___x_943_) == 0)
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_957_; 
v_a_944_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_957_ == 0)
{
v___x_946_ = v___x_943_;
v_isShared_947_ = v_isSharedCheck_957_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_943_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_957_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_955_; 
v___x_948_ = l_Int_repr(v_d_941_);
lean_dec(v_d_941_);
v___x_949_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
v___x_950_ = l_Lean_MessageData_ofFormat(v___x_949_);
v___x_951_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__1);
v___x_952_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_952_, 0, v___x_950_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
v___x_953_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
lean_ctor_set(v___x_953_, 1, v_a_944_);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 0, v___x_953_);
v___x_955_ = v___x_946_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v___x_953_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
else
{
lean_dec(v_d_941_);
return v___x_943_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___boxed(lean_object* v_c_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(v_c_958_, v_a_959_, v_a_960_, v_a_961_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp(lean_object* v_c_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_){
_start:
{
lean_object* v___x_976_; 
v___x_976_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(v_c_964_, v_a_965_, v_a_973_, v_a_974_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___boxed(lean_object* v_c_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp(v_c_977_, v_a_978_, v_a_979_, v_a_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_, v_a_986_, v_a_987_);
lean_dec(v_a_987_);
lean_dec_ref(v_a_986_);
lean_dec(v_a_985_);
lean_dec_ref(v_a_984_);
lean_dec(v_a_983_);
lean_dec_ref(v_a_982_);
lean_dec(v_a_981_);
lean_dec_ref(v_a_980_);
lean_dec(v_a_979_);
lean_dec(v_a_978_);
return v_res_989_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__0(void){
_start:
{
lean_object* v___x_990_; 
v___x_990_ = lean_mk_string_unchecked("Neg", 3, 3);
return v___x_990_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__1(void){
_start:
{
lean_object* v___x_991_; 
v___x_991_ = lean_mk_string_unchecked("neg", 3, 3);
return v___x_991_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__2(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_992_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__1);
v___x_993_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__0);
v___x_994_ = l_Lean_Name_mkStr2(v___x_993_, v___x_992_);
return v___x_994_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__3(void){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = lean_unsigned_to_nat(0u);
v___x_996_ = l_Lean_Level_ofNat(v___x_995_);
return v___x_996_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__4(void){
_start:
{
lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_997_ = lean_box(0);
v___x_998_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__3, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__3);
v___x_999_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_998_);
lean_ctor_set(v___x_999_, 1, v___x_997_);
return v___x_999_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__5(void){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_1000_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__4, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__4_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__4);
v___x_1001_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__2, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__2);
v___x_1002_ = l_Lean_Expr_const___override(v___x_1001_, v___x_1000_);
return v___x_1002_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__6(void){
_start:
{
lean_object* v___x_1003_; 
v___x_1003_ = lean_mk_string_unchecked("Int", 3, 3);
return v___x_1003_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__6, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__6_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__6);
v___x_1005_ = l_Lean_Name_mkStr1(v___x_1004_);
return v___x_1005_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__8(void){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1006_ = lean_box(0);
v___x_1007_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__7, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__7_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__7);
v___x_1008_ = l_Lean_Expr_const___override(v___x_1007_, v___x_1006_);
return v___x_1008_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__9(void){
_start:
{
lean_object* v___x_1009_; 
v___x_1009_ = lean_mk_string_unchecked("instNegInt", 10, 10);
return v___x_1009_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__10(void){
_start:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1010_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__9, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__9);
v___x_1011_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__6, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__6_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__6);
v___x_1012_ = l_Lean_Name_mkStr2(v___x_1011_, v___x_1010_);
return v___x_1012_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__11(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1013_ = lean_box(0);
v___x_1014_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__10, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__10_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__10);
v___x_1015_ = l_Lean_Expr_const___override(v___x_1014_, v___x_1013_);
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg(lean_object* v_c_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_){
_start:
{
lean_object* v_d_1021_; lean_object* v_p_1022_; lean_object* v___x_1023_; 
v_d_1021_ = lean_ctor_get(v_c_1016_, 0);
lean_inc(v_d_1021_);
v_p_1022_ = lean_ctor_get(v_c_1016_, 1);
lean_inc_ref(v_p_1022_);
lean_dec_ref(v_c_1016_);
v___x_1023_ = l_Int_Linear_Poly_denoteExpr_x27___redArg(v_p_1022_, v_a_1017_, v_a_1018_, v_a_1019_);
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1045_; 
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1026_ = v___x_1023_;
v_isShared_1027_ = v_isSharedCheck_1045_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1023_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1045_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___y_1029_; lean_object* v___x_1034_; uint8_t v___x_1035_; 
v___x_1034_ = lean_obj_once(&l_Int_Linear_Poly_isZero___closed__0, &l_Int_Linear_Poly_isZero___closed__0_once, _init_l_Int_Linear_Poly_isZero___closed__0);
v___x_1035_ = lean_int_dec_le(v___x_1034_, v_d_1021_);
if (v___x_1035_ == 0)
{
lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1036_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__5, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__5_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__5);
v___x_1037_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__8, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__8_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__8);
v___x_1038_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__11, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__11_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__11);
v___x_1039_ = lean_int_neg(v_d_1021_);
lean_dec(v_d_1021_);
v___x_1040_ = l_Int_toNat(v___x_1039_);
lean_dec(v___x_1039_);
v___x_1041_ = l_Lean_instToExprInt_mkNat(v___x_1040_);
v___x_1042_ = l_Lean_mkApp3(v___x_1036_, v___x_1037_, v___x_1038_, v___x_1041_);
v___y_1029_ = v___x_1042_;
goto v___jp_1028_;
}
else
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = l_Int_toNat(v_d_1021_);
lean_dec(v_d_1021_);
v___x_1044_ = l_Lean_instToExprInt_mkNat(v___x_1043_);
v___y_1029_ = v___x_1044_;
goto v___jp_1028_;
}
v___jp_1028_:
{
lean_object* v___x_1030_; lean_object* v___x_1032_; 
v___x_1030_ = l_Lean_mkIntDvd(v___y_1029_, v_a_1024_);
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 0, v___x_1030_);
v___x_1032_ = v___x_1026_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v___x_1030_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
else
{
lean_dec(v_d_1021_);
return v___x_1023_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___boxed(lean_object* v_c_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_){
_start:
{
lean_object* v_res_1051_; 
v_res_1051_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg(v_c_1046_, v_a_1047_, v_a_1048_, v_a_1049_);
lean_dec(v_a_1049_);
lean_dec_ref(v_a_1048_);
lean_dec(v_a_1047_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr(lean_object* v_c_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_){
_start:
{
lean_object* v___x_1064_; 
v___x_1064_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg(v_c_1052_, v_a_1053_, v_a_1061_, v_a_1062_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___boxed(lean_object* v_c_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr(v_c_1065_, v_a_1066_, v_a_1067_, v_a_1068_, v_a_1069_, v_a_1070_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_);
lean_dec(v_a_1075_);
lean_dec_ref(v_a_1074_);
lean_dec(v_a_1073_);
lean_dec_ref(v_a_1072_);
lean_dec(v_a_1071_);
lean_dec_ref(v_a_1070_);
lean_dec(v_a_1069_);
lean_dec_ref(v_a_1068_);
lean_dec(v_a_1067_);
lean_dec(v_a_1066_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0_spec__0(lean_object* v_msgData_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
lean_object* v___x_1084_; lean_object* v_env_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v_mctx_1088_; lean_object* v_lctx_1089_; lean_object* v_options_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1084_ = lean_st_ref_get(v___y_1082_);
v_env_1085_ = lean_ctor_get(v___x_1084_, 0);
lean_inc_ref(v_env_1085_);
lean_dec(v___x_1084_);
v___x_1086_ = lean_st_ref_get(v___y_1082_);
lean_dec(v___x_1086_);
v___x_1087_ = lean_st_ref_get(v___y_1080_);
v_mctx_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc_ref(v_mctx_1088_);
lean_dec(v___x_1087_);
v_lctx_1089_ = lean_ctor_get(v___y_1079_, 2);
v_options_1090_ = lean_ctor_get(v___y_1081_, 2);
lean_inc_ref(v_options_1090_);
lean_inc_ref(v_lctx_1089_);
v___x_1091_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1091_, 0, v_env_1085_);
lean_ctor_set(v___x_1091_, 1, v_mctx_1088_);
lean_ctor_set(v___x_1091_, 2, v_lctx_1089_);
lean_ctor_set(v___x_1091_, 3, v_options_1090_);
v___x_1092_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1091_);
lean_ctor_set(v___x_1092_, 1, v_msgData_1078_);
v___x_1093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1092_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0_spec__0___boxed(lean_object* v_msgData_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_){
_start:
{
lean_object* v_res_1100_; 
v_res_1100_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0_spec__0(v_msgData_1094_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(lean_object* v_msg_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_){
_start:
{
lean_object* v_ref_1107_; lean_object* v___x_1108_; lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1117_; 
v_ref_1107_ = lean_ctor_get(v___y_1104_, 5);
v___x_1108_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0_spec__0(v_msg_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_);
v_a_1109_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1111_ = v___x_1108_;
v_isShared_1112_ = v_isSharedCheck_1117_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v___x_1108_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1117_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1113_; lean_object* v___x_1115_; 
lean_inc(v_ref_1107_);
v___x_1113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1113_, 0, v_ref_1107_);
lean_ctor_set(v___x_1113_, 1, v_a_1109_);
if (v_isShared_1112_ == 0)
{
lean_ctor_set_tag(v___x_1111_, 1);
lean_ctor_set(v___x_1111_, 0, v___x_1113_);
v___x_1115_ = v___x_1111_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1113_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg___boxed(lean_object* v_msg_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_){
_start:
{
lean_object* v_res_1124_; 
v_res_1124_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(v_msg_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec(v___y_1120_);
lean_dec_ref(v___y_1119_);
return v_res_1124_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__0(void){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = lean_mk_string_unchecked("`grind` internal error, unexpected", 34, 34);
return v___x_1125_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1(void){
_start:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1126_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__0);
v___x_1127_ = l_Lean_stringToMessageData(v___x_1126_);
return v___x_1127_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__2(void){
_start:
{
lean_object* v___x_1128_; 
v___x_1128_ = lean_mk_string_unchecked(" ", 1, 1);
return v___x_1128_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__3(void){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1129_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__2, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__2);
v___x_1130_ = l_Lean_stringToMessageData(v___x_1129_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg(lean_object* v_c_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(v_c_1131_, v_a_1132_, v_a_1140_, v_a_1141_);
if (lean_obj_tag(v___x_1143_) == 0)
{
lean_object* v_a_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v_a_1144_ = lean_ctor_get(v___x_1143_, 0);
lean_inc(v_a_1144_);
lean_dec_ref(v___x_1143_);
v___x_1145_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1);
v___x_1146_ = l_Lean_indentD(v_a_1144_);
v___x_1147_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1145_);
lean_ctor_set(v___x_1147_, 1, v___x_1146_);
v___x_1148_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__3, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__3);
v___x_1149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1147_);
lean_ctor_set(v___x_1149_, 1, v___x_1148_);
v___x_1150_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(v___x_1149_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_);
return v___x_1150_;
}
else
{
lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1158_; 
v_a_1151_ = lean_ctor_get(v___x_1143_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1143_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1153_ = v___x_1143_;
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1143_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1156_; 
if (v_isShared_1154_ == 0)
{
v___x_1156_ = v___x_1153_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_a_1151_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___boxed(lean_object* v_c_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_, lean_object* v_a_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg(v_c_1159_, v_a_1160_, v_a_1161_, v_a_1162_, v_a_1163_, v_a_1164_, v_a_1165_, v_a_1166_, v_a_1167_, v_a_1168_, v_a_1169_);
lean_dec(v_a_1169_);
lean_dec_ref(v_a_1168_);
lean_dec(v_a_1167_);
lean_dec_ref(v_a_1166_);
lean_dec(v_a_1165_);
lean_dec_ref(v_a_1164_);
lean_dec(v_a_1163_);
lean_dec_ref(v_a_1162_);
lean_dec(v_a_1161_);
lean_dec(v_a_1160_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected(lean_object* v_00_u03b1_1172_, lean_object* v_c_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_){
_start:
{
lean_object* v___x_1185_; 
v___x_1185_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg(v_c_1173_, v_a_1174_, v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_, v_a_1180_, v_a_1181_, v_a_1182_, v_a_1183_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___boxed(lean_object* v_00_u03b1_1186_, lean_object* v_c_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_, lean_object* v_a_1190_, lean_object* v_a_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected(v_00_u03b1_1186_, v_c_1187_, v_a_1188_, v_a_1189_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_, v_a_1195_, v_a_1196_, v_a_1197_);
lean_dec(v_a_1197_);
lean_dec_ref(v_a_1196_);
lean_dec(v_a_1195_);
lean_dec_ref(v_a_1194_);
lean_dec(v_a_1193_);
lean_dec_ref(v_a_1192_);
lean_dec(v_a_1191_);
lean_dec_ref(v_a_1190_);
lean_dec(v_a_1189_);
lean_dec(v_a_1188_);
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0(lean_object* v_00_u03b1_1200_, lean_object* v_msg_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(v_msg_1201_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___boxed(lean_object* v_00_u03b1_1214_, lean_object* v_msg_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0(v_00_u03b1_1214_, v_msg_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_);
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
lean_dec(v___y_1223_);
lean_dec_ref(v___y_1222_);
lean_dec(v___y_1221_);
lean_dec_ref(v___y_1220_);
lean_dec(v___y_1219_);
lean_dec_ref(v___y_1218_);
lean_dec(v___y_1217_);
lean_dec(v___y_1216_);
return v_res_1227_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial_spec__0(lean_object* v_a_1228_){
_start:
{
lean_object* v___x_1229_; 
v___x_1229_ = lean_nat_to_int(v_a_1228_);
return v___x_1229_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial(lean_object* v_c_1230_){
_start:
{
lean_object* v_p_1231_; 
v_p_1231_ = lean_ctor_get(v_c_1230_, 0);
if (lean_obj_tag(v_p_1231_) == 0)
{
lean_object* v_k_1232_; lean_object* v___x_1233_; uint8_t v___x_1234_; 
v_k_1232_ = lean_ctor_get(v_p_1231_, 0);
v___x_1233_ = lean_obj_once(&l_Int_Linear_Poly_isZero___closed__0, &l_Int_Linear_Poly_isZero___closed__0_once, _init_l_Int_Linear_Poly_isZero___closed__0);
v___x_1234_ = lean_int_dec_eq(v_k_1232_, v___x_1233_);
if (v___x_1234_ == 0)
{
uint8_t v___x_1235_; 
v___x_1235_ = 1;
return v___x_1235_;
}
else
{
uint8_t v___x_1236_; 
v___x_1236_ = 0;
return v___x_1236_;
}
}
else
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; uint8_t v___x_1242_; 
v___x_1237_ = l_Int_Linear_Poly_getConst(v_p_1231_);
v___x_1238_ = l_Int_Linear_Poly_gcdCoeffs_x27(v_p_1231_);
v___x_1239_ = lean_nat_to_int(v___x_1238_);
v___x_1240_ = lean_int_emod(v___x_1237_, v___x_1239_);
lean_dec(v___x_1239_);
lean_dec(v___x_1237_);
v___x_1241_ = lean_obj_once(&l_Int_Linear_Poly_isZero___closed__0, &l_Int_Linear_Poly_isZero___closed__0_once, _init_l_Int_Linear_Poly_isZero___closed__0);
v___x_1242_ = lean_int_dec_eq(v___x_1240_, v___x_1241_);
lean_dec(v___x_1240_);
if (v___x_1242_ == 0)
{
uint8_t v___x_1243_; 
v___x_1243_ = 1;
return v___x_1243_;
}
else
{
uint8_t v___x_1244_; 
v___x_1244_ = 0;
return v___x_1244_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial___boxed(lean_object* v_c_1245_){
_start:
{
uint8_t v_res_1246_; lean_object* v_r_1247_; 
v_res_1246_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial(v_c_1245_);
lean_dec_ref(v_c_1245_);
v_r_1247_ = lean_box(v_res_1246_);
return v_r_1247_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__0(void){
_start:
{
lean_object* v___x_1248_; 
v___x_1248_ = lean_mk_string_unchecked(" ≠ 0", 6, 4);
return v___x_1248_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__1(void){
_start:
{
lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1249_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__0);
v___x_1250_ = l_Lean_stringToMessageData(v___x_1249_);
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg(lean_object* v_c_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_){
_start:
{
lean_object* v_p_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1273_; 
v_p_1256_ = lean_ctor_get(v_c_1251_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v_c_1251_);
if (v_isSharedCheck_1273_ == 0)
{
lean_object* v_unused_1274_; 
v_unused_1274_ = lean_ctor_get(v_c_1251_, 1);
lean_dec(v_unused_1274_);
v___x_1258_ = v_c_1251_;
v_isShared_1259_ = v_isSharedCheck_1273_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_p_1256_);
lean_dec(v_c_1251_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1273_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1260_; 
v___x_1260_ = l_Int_Linear_Poly_pp___redArg(v_p_1256_, v_a_1252_, v_a_1253_, v_a_1254_);
if (lean_obj_tag(v___x_1260_) == 0)
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1272_; 
v_a_1261_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1263_ = v___x_1260_;
v_isShared_1264_ = v_isSharedCheck_1272_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v___x_1260_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1272_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1265_; lean_object* v___x_1267_; 
v___x_1265_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__1);
if (v_isShared_1259_ == 0)
{
lean_ctor_set_tag(v___x_1258_, 7);
lean_ctor_set(v___x_1258_, 1, v___x_1265_);
lean_ctor_set(v___x_1258_, 0, v_a_1261_);
v___x_1267_ = v___x_1258_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v_a_1261_);
lean_ctor_set(v_reuseFailAlloc_1271_, 1, v___x_1265_);
v___x_1267_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
lean_object* v___x_1269_; 
if (v_isShared_1264_ == 0)
{
lean_ctor_set(v___x_1263_, 0, v___x_1267_);
v___x_1269_ = v___x_1263_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v___x_1267_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
else
{
lean_del_object(v___x_1258_);
return v___x_1260_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___boxed(lean_object* v_c_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg(v_c_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
return v_res_1280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp(lean_object* v_c_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_, lean_object* v_a_1291_){
_start:
{
lean_object* v___x_1293_; 
v___x_1293_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg(v_c_1281_, v_a_1282_, v_a_1290_, v_a_1291_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___boxed(lean_object* v_c_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp(v_c_1294_, v_a_1295_, v_a_1296_, v_a_1297_, v_a_1298_, v_a_1299_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_);
lean_dec(v_a_1304_);
lean_dec_ref(v_a_1303_);
lean_dec(v_a_1302_);
lean_dec_ref(v_a_1301_);
lean_dec(v_a_1300_);
lean_dec_ref(v_a_1299_);
lean_dec(v_a_1298_);
lean_dec_ref(v_a_1297_);
lean_dec(v_a_1296_);
lean_dec(v_a_1295_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___redArg(lean_object* v_c_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_, lean_object* v_a_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_){
_start:
{
lean_object* v___x_1314_; 
v___x_1314_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg(v_c_1307_, v_a_1308_, v_a_1311_, v_a_1312_);
if (lean_obj_tag(v___x_1314_) == 0)
{
lean_object* v_a_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v_a_1315_ = lean_ctor_get(v___x_1314_, 0);
lean_inc(v_a_1315_);
lean_dec_ref(v___x_1314_);
v___x_1316_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1);
v___x_1317_ = l_Lean_indentD(v_a_1315_);
v___x_1318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1316_);
lean_ctor_set(v___x_1318_, 1, v___x_1317_);
v___x_1319_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(v___x_1318_, v_a_1309_, v_a_1310_, v_a_1311_, v_a_1312_);
return v___x_1319_;
}
else
{
lean_object* v_a_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1327_; 
v_a_1320_ = lean_ctor_get(v___x_1314_, 0);
v_isSharedCheck_1327_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1327_ == 0)
{
v___x_1322_ = v___x_1314_;
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_a_1320_);
lean_dec(v___x_1314_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1325_; 
if (v_isShared_1323_ == 0)
{
v___x_1325_ = v___x_1322_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v_a_1320_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
return v___x_1325_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___redArg___boxed(lean_object* v_c_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___redArg(v_c_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_);
lean_dec(v_a_1333_);
lean_dec_ref(v_a_1332_);
lean_dec(v_a_1331_);
lean_dec_ref(v_a_1330_);
lean_dec(v_a_1329_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected(lean_object* v_00_u03b1_1336_, lean_object* v_c_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_, lean_object* v_a_1344_, lean_object* v_a_1345_, lean_object* v_a_1346_, lean_object* v_a_1347_){
_start:
{
lean_object* v___x_1349_; 
v___x_1349_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___redArg(v_c_1337_, v_a_1338_, v_a_1344_, v_a_1345_, v_a_1346_, v_a_1347_);
return v___x_1349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___boxed(lean_object* v_00_u03b1_1350_, lean_object* v_c_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_, lean_object* v_a_1358_, lean_object* v_a_1359_, lean_object* v_a_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_){
_start:
{
lean_object* v_res_1363_; 
v_res_1363_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected(v_00_u03b1_1350_, v_c_1351_, v_a_1352_, v_a_1353_, v_a_1354_, v_a_1355_, v_a_1356_, v_a_1357_, v_a_1358_, v_a_1359_, v_a_1360_, v_a_1361_);
lean_dec(v_a_1361_);
lean_dec_ref(v_a_1360_);
lean_dec(v_a_1359_);
lean_dec_ref(v_a_1358_);
lean_dec(v_a_1357_);
lean_dec_ref(v_a_1356_);
lean_dec(v_a_1355_);
lean_dec_ref(v_a_1354_);
lean_dec(v_a_1353_);
lean_dec(v_a_1352_);
return v_res_1363_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0(void){
_start:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1364_ = lean_obj_once(&l_Int_Linear_Poly_isZero___closed__0, &l_Int_Linear_Poly_isZero___closed__0_once, _init_l_Int_Linear_Poly_isZero___closed__0);
v___x_1365_ = l_Lean_mkIntLit(v___x_1364_);
return v___x_1365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg(lean_object* v_c_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_){
_start:
{
lean_object* v_p_1371_; lean_object* v___x_1372_; 
v_p_1371_ = lean_ctor_get(v_c_1366_, 0);
lean_inc_ref(v_p_1371_);
lean_dec_ref(v_c_1366_);
v___x_1372_ = l_Int_Linear_Poly_denoteExpr_x27___redArg(v_p_1371_, v_a_1367_, v_a_1368_, v_a_1369_);
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1383_; 
v_a_1373_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1375_ = v___x_1372_;
v_isShared_1376_ = v_isSharedCheck_1383_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1372_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1383_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1381_; 
v___x_1377_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0);
v___x_1378_ = l_Lean_mkIntEq(v_a_1373_, v___x_1377_);
v___x_1379_ = l_Lean_mkNot(v___x_1378_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v___x_1379_);
v___x_1381_ = v___x_1375_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v___x_1379_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
}
}
}
else
{
return v___x_1372_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___boxed(lean_object* v_c_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_){
_start:
{
lean_object* v_res_1389_; 
v_res_1389_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg(v_c_1384_, v_a_1385_, v_a_1386_, v_a_1387_);
lean_dec(v_a_1387_);
lean_dec_ref(v_a_1386_);
lean_dec(v_a_1385_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr(lean_object* v_c_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_, lean_object* v_a_1398_, lean_object* v_a_1399_, lean_object* v_a_1400_){
_start:
{
lean_object* v___x_1402_; 
v___x_1402_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg(v_c_1390_, v_a_1391_, v_a_1399_, v_a_1400_);
return v___x_1402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___boxed(lean_object* v_c_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_, lean_object* v_a_1414_){
_start:
{
lean_object* v_res_1415_; 
v_res_1415_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr(v_c_1403_, v_a_1404_, v_a_1405_, v_a_1406_, v_a_1407_, v_a_1408_, v_a_1409_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_);
lean_dec(v_a_1413_);
lean_dec_ref(v_a_1412_);
lean_dec(v_a_1411_);
lean_dec_ref(v_a_1410_);
lean_dec(v_a_1409_);
lean_dec_ref(v_a_1408_);
lean_dec(v_a_1407_);
lean_dec_ref(v_a_1406_);
lean_dec(v_a_1405_);
lean_dec(v_a_1404_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assert___boxed(lean_object* v_c_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_, lean_object* v_a_1433_, lean_object* v_a_1434_, lean_object* v_a_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_, lean_object* v_a_00___x40___internal___hyg_1439_){
_start:
{
lean_object* v_res_1440_; 
v_res_1440_ = lean_grind_cutsat_assert_le(v_c_1428_, v_a_1429_, v_a_1430_, v_a_1431_, v_a_1432_, v_a_1433_, v_a_1434_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_);
return v_res_1440_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial(lean_object* v_c_1441_){
_start:
{
lean_object* v_p_1442_; 
v_p_1442_ = lean_ctor_get(v_c_1441_, 0);
if (lean_obj_tag(v_p_1442_) == 0)
{
lean_object* v_k_1443_; lean_object* v___x_1444_; uint8_t v___x_1445_; 
v_k_1443_ = lean_ctor_get(v_p_1442_, 0);
v___x_1444_ = lean_obj_once(&l_Int_Linear_Poly_isZero___closed__0, &l_Int_Linear_Poly_isZero___closed__0_once, _init_l_Int_Linear_Poly_isZero___closed__0);
v___x_1445_ = lean_int_dec_le(v_k_1443_, v___x_1444_);
return v___x_1445_;
}
else
{
uint8_t v___x_1446_; 
v___x_1446_ = 0;
return v___x_1446_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial___boxed(lean_object* v_c_1447_){
_start:
{
uint8_t v_res_1448_; lean_object* v_r_1449_; 
v_res_1448_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial(v_c_1447_);
lean_dec_ref(v_c_1447_);
v_r_1449_ = lean_box(v_res_1448_);
return v_r_1449_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__0(void){
_start:
{
lean_object* v___x_1450_; 
v___x_1450_ = lean_mk_string_unchecked(" ≤ 0", 6, 4);
return v___x_1450_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__1(void){
_start:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1451_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__0);
v___x_1452_ = l_Lean_stringToMessageData(v___x_1451_);
return v___x_1452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(lean_object* v_c_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_){
_start:
{
lean_object* v_p_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1475_; 
v_p_1458_ = lean_ctor_get(v_c_1453_, 0);
v_isSharedCheck_1475_ = !lean_is_exclusive(v_c_1453_);
if (v_isSharedCheck_1475_ == 0)
{
lean_object* v_unused_1476_; 
v_unused_1476_ = lean_ctor_get(v_c_1453_, 1);
lean_dec(v_unused_1476_);
v___x_1460_ = v_c_1453_;
v_isShared_1461_ = v_isSharedCheck_1475_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_p_1458_);
lean_dec(v_c_1453_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1475_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1462_; 
v___x_1462_ = l_Int_Linear_Poly_pp___redArg(v_p_1458_, v_a_1454_, v_a_1455_, v_a_1456_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_object* v_a_1463_; lean_object* v___x_1465_; uint8_t v_isShared_1466_; uint8_t v_isSharedCheck_1474_; 
v_a_1463_ = lean_ctor_get(v___x_1462_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1465_ = v___x_1462_;
v_isShared_1466_ = v_isSharedCheck_1474_;
goto v_resetjp_1464_;
}
else
{
lean_inc(v_a_1463_);
lean_dec(v___x_1462_);
v___x_1465_ = lean_box(0);
v_isShared_1466_ = v_isSharedCheck_1474_;
goto v_resetjp_1464_;
}
v_resetjp_1464_:
{
lean_object* v___x_1467_; lean_object* v___x_1469_; 
v___x_1467_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__1);
if (v_isShared_1461_ == 0)
{
lean_ctor_set_tag(v___x_1460_, 7);
lean_ctor_set(v___x_1460_, 1, v___x_1467_);
lean_ctor_set(v___x_1460_, 0, v_a_1463_);
v___x_1469_ = v___x_1460_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v_a_1463_);
lean_ctor_set(v_reuseFailAlloc_1473_, 1, v___x_1467_);
v___x_1469_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
lean_object* v___x_1471_; 
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
}
else
{
lean_del_object(v___x_1460_);
return v___x_1462_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___boxed(lean_object* v_c_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_){
_start:
{
lean_object* v_res_1482_; 
v_res_1482_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_1477_, v_a_1478_, v_a_1479_, v_a_1480_);
lean_dec(v_a_1480_);
lean_dec_ref(v_a_1479_);
lean_dec(v_a_1478_);
return v_res_1482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp(lean_object* v_c_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_){
_start:
{
lean_object* v___x_1495_; 
v___x_1495_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_1483_, v_a_1484_, v_a_1492_, v_a_1493_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___boxed(lean_object* v_c_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_, lean_object* v_a_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_){
_start:
{
lean_object* v_res_1508_; 
v_res_1508_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp(v_c_1496_, v_a_1497_, v_a_1498_, v_a_1499_, v_a_1500_, v_a_1501_, v_a_1502_, v_a_1503_, v_a_1504_, v_a_1505_, v_a_1506_);
lean_dec(v_a_1506_);
lean_dec_ref(v_a_1505_);
lean_dec(v_a_1504_);
lean_dec_ref(v_a_1503_);
lean_dec(v_a_1502_);
lean_dec_ref(v_a_1501_);
lean_dec(v_a_1500_);
lean_dec_ref(v_a_1499_);
lean_dec(v_a_1498_);
lean_dec(v_a_1497_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___redArg(lean_object* v_c_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_){
_start:
{
lean_object* v_p_1514_; lean_object* v___x_1515_; 
v_p_1514_ = lean_ctor_get(v_c_1509_, 0);
lean_inc_ref(v_p_1514_);
lean_dec_ref(v_c_1509_);
v___x_1515_ = l_Int_Linear_Poly_denoteExpr_x27___redArg(v_p_1514_, v_a_1510_, v_a_1511_, v_a_1512_);
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_object* v_a_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1525_; 
v_a_1516_ = lean_ctor_get(v___x_1515_, 0);
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1518_ = v___x_1515_;
v_isShared_1519_ = v_isSharedCheck_1525_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_a_1516_);
lean_dec(v___x_1515_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1525_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1523_; 
v___x_1520_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0);
v___x_1521_ = l_Lean_mkIntLE(v_a_1516_, v___x_1520_);
if (v_isShared_1519_ == 0)
{
lean_ctor_set(v___x_1518_, 0, v___x_1521_);
v___x_1523_ = v___x_1518_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v___x_1521_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
}
else
{
return v___x_1515_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___redArg___boxed(lean_object* v_c_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___redArg(v_c_1526_, v_a_1527_, v_a_1528_, v_a_1529_);
lean_dec(v_a_1529_);
lean_dec_ref(v_a_1528_);
lean_dec(v_a_1527_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr(lean_object* v_c_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_){
_start:
{
lean_object* v___x_1544_; 
v___x_1544_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___redArg(v_c_1532_, v_a_1533_, v_a_1541_, v_a_1542_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___boxed(lean_object* v_c_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_){
_start:
{
lean_object* v_res_1557_; 
v_res_1557_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr(v_c_1545_, v_a_1546_, v_a_1547_, v_a_1548_, v_a_1549_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_);
lean_dec(v_a_1555_);
lean_dec_ref(v_a_1554_);
lean_dec(v_a_1553_);
lean_dec_ref(v_a_1552_);
lean_dec(v_a_1551_);
lean_dec_ref(v_a_1550_);
lean_dec(v_a_1549_);
lean_dec_ref(v_a_1548_);
lean_dec(v_a_1547_);
lean_dec(v_a_1546_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(lean_object* v_c_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_){
_start:
{
lean_object* v___x_1565_; 
v___x_1565_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_1558_, v_a_1559_, v_a_1562_, v_a_1563_);
if (lean_obj_tag(v___x_1565_) == 0)
{
lean_object* v_a_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
v_a_1566_ = lean_ctor_get(v___x_1565_, 0);
lean_inc(v_a_1566_);
lean_dec_ref(v___x_1565_);
v___x_1567_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1);
v___x_1568_ = l_Lean_indentD(v_a_1566_);
v___x_1569_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1567_);
lean_ctor_set(v___x_1569_, 1, v___x_1568_);
v___x_1570_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(v___x_1569_, v_a_1560_, v_a_1561_, v_a_1562_, v_a_1563_);
return v___x_1570_;
}
else
{
lean_object* v_a_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1578_; 
v_a_1571_ = lean_ctor_get(v___x_1565_, 0);
v_isSharedCheck_1578_ = !lean_is_exclusive(v___x_1565_);
if (v_isSharedCheck_1578_ == 0)
{
v___x_1573_ = v___x_1565_;
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_a_1571_);
lean_dec(v___x_1565_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v___x_1576_; 
if (v_isShared_1574_ == 0)
{
v___x_1576_ = v___x_1573_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v_a_1571_);
v___x_1576_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
return v___x_1576_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg___boxed(lean_object* v_c_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_){
_start:
{
lean_object* v_res_1586_; 
v_res_1586_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(v_c_1579_, v_a_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
lean_dec(v_a_1584_);
lean_dec_ref(v_a_1583_);
lean_dec(v_a_1582_);
lean_dec_ref(v_a_1581_);
lean_dec(v_a_1580_);
return v_res_1586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected(lean_object* v_00_u03b1_1587_, lean_object* v_c_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_){
_start:
{
lean_object* v___x_1600_; 
v___x_1600_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(v_c_1588_, v_a_1589_, v_a_1595_, v_a_1596_, v_a_1597_, v_a_1598_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___boxed(lean_object* v_00_u03b1_1601_, lean_object* v_c_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_, lean_object* v_a_1608_, lean_object* v_a_1609_, lean_object* v_a_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_){
_start:
{
lean_object* v_res_1614_; 
v_res_1614_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected(v_00_u03b1_1601_, v_c_1602_, v_a_1603_, v_a_1604_, v_a_1605_, v_a_1606_, v_a_1607_, v_a_1608_, v_a_1609_, v_a_1610_, v_a_1611_, v_a_1612_);
lean_dec(v_a_1612_);
lean_dec_ref(v_a_1611_);
lean_dec(v_a_1610_);
lean_dec_ref(v_a_1609_);
lean_dec(v_a_1608_);
lean_dec_ref(v_a_1607_);
lean_dec(v_a_1606_);
lean_dec_ref(v_a_1605_);
lean_dec(v_a_1604_);
lean_dec(v_a_1603_);
return v_res_1614_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_isTrivial(lean_object* v_c_1615_){
_start:
{
lean_object* v_p_1616_; 
v_p_1616_ = lean_ctor_get(v_c_1615_, 0);
if (lean_obj_tag(v_p_1616_) == 0)
{
lean_object* v_k_1617_; lean_object* v___x_1618_; uint8_t v___x_1619_; 
v_k_1617_ = lean_ctor_get(v_p_1616_, 0);
v___x_1618_ = lean_obj_once(&l_Int_Linear_Poly_isZero___closed__0, &l_Int_Linear_Poly_isZero___closed__0_once, _init_l_Int_Linear_Poly_isZero___closed__0);
v___x_1619_ = lean_int_dec_eq(v_k_1617_, v___x_1618_);
return v___x_1619_;
}
else
{
uint8_t v___x_1620_; 
v___x_1620_ = 0;
return v___x_1620_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_isTrivial___boxed(lean_object* v_c_1621_){
_start:
{
uint8_t v_res_1622_; lean_object* v_r_1623_; 
v_res_1622_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_isTrivial(v_c_1621_);
lean_dec_ref(v_c_1621_);
v_r_1623_ = lean_box(v_res_1622_);
return v_r_1623_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__0(void){
_start:
{
lean_object* v___x_1624_; 
v___x_1624_ = lean_mk_string_unchecked(" = 0", 4, 4);
return v___x_1624_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__1(void){
_start:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1625_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__0);
v___x_1626_ = l_Lean_stringToMessageData(v___x_1625_);
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(lean_object* v_c_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_){
_start:
{
lean_object* v_p_1632_; lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1649_; 
v_p_1632_ = lean_ctor_get(v_c_1627_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v_c_1627_);
if (v_isSharedCheck_1649_ == 0)
{
lean_object* v_unused_1650_; 
v_unused_1650_ = lean_ctor_get(v_c_1627_, 1);
lean_dec(v_unused_1650_);
v___x_1634_ = v_c_1627_;
v_isShared_1635_ = v_isSharedCheck_1649_;
goto v_resetjp_1633_;
}
else
{
lean_inc(v_p_1632_);
lean_dec(v_c_1627_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1649_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v___x_1636_; 
v___x_1636_ = l_Int_Linear_Poly_pp___redArg(v_p_1632_, v_a_1628_, v_a_1629_, v_a_1630_);
if (lean_obj_tag(v___x_1636_) == 0)
{
lean_object* v_a_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1648_; 
v_a_1637_ = lean_ctor_get(v___x_1636_, 0);
v_isSharedCheck_1648_ = !lean_is_exclusive(v___x_1636_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1639_ = v___x_1636_;
v_isShared_1640_ = v_isSharedCheck_1648_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_a_1637_);
lean_dec(v___x_1636_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1648_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v___x_1641_; lean_object* v___x_1643_; 
v___x_1641_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__1);
if (v_isShared_1635_ == 0)
{
lean_ctor_set_tag(v___x_1634_, 7);
lean_ctor_set(v___x_1634_, 1, v___x_1641_);
lean_ctor_set(v___x_1634_, 0, v_a_1637_);
v___x_1643_ = v___x_1634_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_a_1637_);
lean_ctor_set(v_reuseFailAlloc_1647_, 1, v___x_1641_);
v___x_1643_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
lean_object* v___x_1645_; 
if (v_isShared_1640_ == 0)
{
lean_ctor_set(v___x_1639_, 0, v___x_1643_);
v___x_1645_ = v___x_1639_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v___x_1643_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
}
else
{
lean_del_object(v___x_1634_);
return v___x_1636_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___boxed(lean_object* v_c_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_){
_start:
{
lean_object* v_res_1656_; 
v_res_1656_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v_c_1651_, v_a_1652_, v_a_1653_, v_a_1654_);
lean_dec(v_a_1654_);
lean_dec_ref(v_a_1653_);
lean_dec(v_a_1652_);
return v_res_1656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp(lean_object* v_c_1657_, lean_object* v_a_1658_, lean_object* v_a_1659_, lean_object* v_a_1660_, lean_object* v_a_1661_, lean_object* v_a_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_){
_start:
{
lean_object* v___x_1669_; 
v___x_1669_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v_c_1657_, v_a_1658_, v_a_1666_, v_a_1667_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___boxed(lean_object* v_c_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_){
_start:
{
lean_object* v_res_1682_; 
v_res_1682_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp(v_c_1670_, v_a_1671_, v_a_1672_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_, v_a_1680_);
lean_dec(v_a_1680_);
lean_dec_ref(v_a_1679_);
lean_dec(v_a_1678_);
lean_dec_ref(v_a_1677_);
lean_dec(v_a_1676_);
lean_dec_ref(v_a_1675_);
lean_dec(v_a_1674_);
lean_dec_ref(v_a_1673_);
lean_dec(v_a_1672_);
lean_dec(v_a_1671_);
return v_res_1682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___redArg(lean_object* v_c_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_){
_start:
{
lean_object* v_p_1688_; lean_object* v___x_1689_; 
v_p_1688_ = lean_ctor_get(v_c_1683_, 0);
lean_inc_ref(v_p_1688_);
lean_dec_ref(v_c_1683_);
v___x_1689_ = l_Int_Linear_Poly_denoteExpr_x27___redArg(v_p_1688_, v_a_1684_, v_a_1685_, v_a_1686_);
if (lean_obj_tag(v___x_1689_) == 0)
{
lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1699_; 
v_a_1690_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1692_ = v___x_1689_;
v_isShared_1693_ = v_isSharedCheck_1699_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_a_1690_);
lean_dec(v___x_1689_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1699_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1697_; 
v___x_1694_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0);
v___x_1695_ = l_Lean_mkIntEq(v_a_1690_, v___x_1694_);
if (v_isShared_1693_ == 0)
{
lean_ctor_set(v___x_1692_, 0, v___x_1695_);
v___x_1697_ = v___x_1692_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v___x_1695_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
}
else
{
return v___x_1689_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___redArg___boxed(lean_object* v_c_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_){
_start:
{
lean_object* v_res_1705_; 
v_res_1705_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___redArg(v_c_1700_, v_a_1701_, v_a_1702_, v_a_1703_);
lean_dec(v_a_1703_);
lean_dec_ref(v_a_1702_);
lean_dec(v_a_1701_);
return v_res_1705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr(lean_object* v_c_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_){
_start:
{
lean_object* v___x_1718_; 
v___x_1718_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___redArg(v_c_1706_, v_a_1707_, v_a_1715_, v_a_1716_);
return v___x_1718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___boxed(lean_object* v_c_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_){
_start:
{
lean_object* v_res_1731_; 
v_res_1731_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr(v_c_1719_, v_a_1720_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_, v_a_1729_);
lean_dec(v_a_1729_);
lean_dec_ref(v_a_1728_);
lean_dec(v_a_1727_);
lean_dec_ref(v_a_1726_);
lean_dec(v_a_1725_);
lean_dec_ref(v_a_1724_);
lean_dec(v_a_1723_);
lean_dec_ref(v_a_1722_);
lean_dec(v_a_1721_);
lean_dec(v_a_1720_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___redArg(lean_object* v_c_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_){
_start:
{
lean_object* v___x_1739_; 
v___x_1739_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v_c_1732_, v_a_1733_, v_a_1736_, v_a_1737_);
if (lean_obj_tag(v___x_1739_) == 0)
{
lean_object* v_a_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
v_a_1740_ = lean_ctor_get(v___x_1739_, 0);
lean_inc(v_a_1740_);
lean_dec_ref(v___x_1739_);
v___x_1741_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1);
v___x_1742_ = l_Lean_indentD(v_a_1740_);
v___x_1743_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1743_, 0, v___x_1741_);
lean_ctor_set(v___x_1743_, 1, v___x_1742_);
v___x_1744_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(v___x_1743_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_);
return v___x_1744_;
}
else
{
lean_object* v_a_1745_; lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1752_; 
v_a_1745_ = lean_ctor_get(v___x_1739_, 0);
v_isSharedCheck_1752_ = !lean_is_exclusive(v___x_1739_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1747_ = v___x_1739_;
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
else
{
lean_inc(v_a_1745_);
lean_dec(v___x_1739_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
lean_object* v___x_1750_; 
if (v_isShared_1748_ == 0)
{
v___x_1750_ = v___x_1747_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v_a_1745_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___redArg___boxed(lean_object* v_c_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___redArg(v_c_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_, v_a_1758_);
lean_dec(v_a_1758_);
lean_dec_ref(v_a_1757_);
lean_dec(v_a_1756_);
lean_dec_ref(v_a_1755_);
lean_dec(v_a_1754_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected(lean_object* v_00_u03b1_1761_, lean_object* v_c_1762_, lean_object* v_a_1763_, lean_object* v_a_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_, lean_object* v_a_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_){
_start:
{
lean_object* v___x_1774_; 
v___x_1774_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___redArg(v_c_1762_, v_a_1763_, v_a_1769_, v_a_1770_, v_a_1771_, v_a_1772_);
return v___x_1774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___boxed(lean_object* v_00_u03b1_1775_, lean_object* v_c_1776_, lean_object* v_a_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected(v_00_u03b1_1775_, v_c_1776_, v_a_1777_, v_a_1778_, v_a_1779_, v_a_1780_, v_a_1781_, v_a_1782_, v_a_1783_, v_a_1784_, v_a_1785_, v_a_1786_);
lean_dec(v_a_1786_);
lean_dec_ref(v_a_1785_);
lean_dec(v_a_1784_);
lean_dec_ref(v_a_1783_);
lean_dec(v_a_1782_);
lean_dec_ref(v_a_1781_);
lean_dec(v_a_1780_);
lean_dec_ref(v_a_1779_);
lean_dec(v_a_1778_);
lean_dec(v_a_1777_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___redArg(lean_object* v_x_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_){
_start:
{
lean_object* v___x_1794_; 
v___x_1794_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_1790_, v_a_1791_, v_a_1792_);
if (lean_obj_tag(v___x_1794_) == 0)
{
lean_object* v_a_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1811_; 
v_a_1795_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1797_ = v___x_1794_;
v_isShared_1798_ = v_isSharedCheck_1811_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_a_1795_);
lean_dec(v___x_1794_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1811_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v_occurs_1799_; lean_object* v_size_1800_; lean_object* v___x_1801_; uint8_t v___x_1802_; 
v_occurs_1799_ = lean_ctor_get(v_a_1795_, 12);
lean_inc_ref(v_occurs_1799_);
lean_dec(v_a_1795_);
v_size_1800_ = lean_ctor_get(v_occurs_1799_, 2);
v___x_1801_ = lean_box(1);
v___x_1802_ = lean_nat_dec_lt(v_x_1789_, v_size_1800_);
if (v___x_1802_ == 0)
{
lean_object* v___x_1803_; lean_object* v___x_1805_; 
lean_dec_ref(v_occurs_1799_);
v___x_1803_ = l_outOfBounds___redArg(v___x_1801_);
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 0, v___x_1803_);
v___x_1805_ = v___x_1797_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v___x_1803_);
v___x_1805_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
return v___x_1805_;
}
}
else
{
lean_object* v___x_1807_; lean_object* v___x_1809_; 
v___x_1807_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1801_, v_occurs_1799_, v_x_1789_);
lean_dec_ref(v_occurs_1799_);
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 0, v___x_1807_);
v___x_1809_ = v___x_1797_;
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
lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1819_; 
v_a_1812_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_1819_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1814_ = v___x_1794_;
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v___x_1794_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1817_; 
if (v_isShared_1815_ == 0)
{
v___x_1817_ = v___x_1814_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_a_1812_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___redArg___boxed(lean_object* v_x_1820_, lean_object* v_a_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_){
_start:
{
lean_object* v_res_1825_; 
v_res_1825_ = l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___redArg(v_x_1820_, v_a_1821_, v_a_1822_, v_a_1823_);
lean_dec(v_a_1823_);
lean_dec_ref(v_a_1822_);
lean_dec(v_a_1821_);
lean_dec(v_x_1820_);
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf(lean_object* v_x_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_){
_start:
{
lean_object* v___x_1838_; 
v___x_1838_ = l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___redArg(v_x_1826_, v_a_1827_, v_a_1835_, v_a_1836_);
return v___x_1838_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___boxed(lean_object* v_x_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_, lean_object* v_a_1848_, lean_object* v_a_1849_, lean_object* v_a_1850_){
_start:
{
lean_object* v_res_1851_; 
v_res_1851_ = l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf(v_x_1839_, v_a_1840_, v_a_1841_, v_a_1842_, v_a_1843_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_, v_a_1848_, v_a_1849_);
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
lean_dec(v_x_1839_);
return v_res_1851_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1___redArg(lean_object* v_k_1852_, lean_object* v_v_1853_, lean_object* v_t_1854_){
_start:
{
if (lean_obj_tag(v_t_1854_) == 0)
{
lean_object* v_size_1855_; lean_object* v_k_1856_; lean_object* v_v_1857_; lean_object* v_l_1858_; lean_object* v_r_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_2140_; 
v_size_1855_ = lean_ctor_get(v_t_1854_, 0);
v_k_1856_ = lean_ctor_get(v_t_1854_, 1);
v_v_1857_ = lean_ctor_get(v_t_1854_, 2);
v_l_1858_ = lean_ctor_get(v_t_1854_, 3);
v_r_1859_ = lean_ctor_get(v_t_1854_, 4);
v_isSharedCheck_2140_ = !lean_is_exclusive(v_t_1854_);
if (v_isSharedCheck_2140_ == 0)
{
v___x_1861_ = v_t_1854_;
v_isShared_1862_ = v_isSharedCheck_2140_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_r_1859_);
lean_inc(v_l_1858_);
lean_inc(v_v_1857_);
lean_inc(v_k_1856_);
lean_inc(v_size_1855_);
lean_dec(v_t_1854_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_2140_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
uint8_t v___x_1863_; 
v___x_1863_ = lean_nat_dec_lt(v_k_1852_, v_k_1856_);
if (v___x_1863_ == 0)
{
uint8_t v___x_1864_; 
v___x_1864_ = lean_nat_dec_eq(v_k_1852_, v_k_1856_);
if (v___x_1864_ == 0)
{
lean_object* v_impl_1865_; lean_object* v___x_1866_; 
lean_dec(v_size_1855_);
v_impl_1865_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1___redArg(v_k_1852_, v_v_1853_, v_r_1859_);
v___x_1866_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_1858_) == 0)
{
lean_object* v_size_1867_; lean_object* v_size_1868_; lean_object* v_k_1869_; lean_object* v_v_1870_; lean_object* v_l_1871_; lean_object* v_r_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; uint8_t v___x_1875_; 
v_size_1867_ = lean_ctor_get(v_l_1858_, 0);
v_size_1868_ = lean_ctor_get(v_impl_1865_, 0);
lean_inc(v_size_1868_);
v_k_1869_ = lean_ctor_get(v_impl_1865_, 1);
lean_inc(v_k_1869_);
v_v_1870_ = lean_ctor_get(v_impl_1865_, 2);
lean_inc(v_v_1870_);
v_l_1871_ = lean_ctor_get(v_impl_1865_, 3);
lean_inc(v_l_1871_);
v_r_1872_ = lean_ctor_get(v_impl_1865_, 4);
lean_inc(v_r_1872_);
v___x_1873_ = lean_unsigned_to_nat(3u);
v___x_1874_ = lean_nat_mul(v___x_1873_, v_size_1867_);
v___x_1875_ = lean_nat_dec_lt(v___x_1874_, v_size_1868_);
lean_dec(v___x_1874_);
if (v___x_1875_ == 0)
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1879_; 
lean_dec(v_r_1872_);
lean_dec(v_l_1871_);
lean_dec(v_v_1870_);
lean_dec(v_k_1869_);
v___x_1876_ = lean_nat_add(v___x_1866_, v_size_1867_);
v___x_1877_ = lean_nat_add(v___x_1876_, v_size_1868_);
lean_dec(v_size_1868_);
lean_dec(v___x_1876_);
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 4, v_impl_1865_);
lean_ctor_set(v___x_1861_, 0, v___x_1877_);
v___x_1879_ = v___x_1861_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v___x_1877_);
lean_ctor_set(v_reuseFailAlloc_1880_, 1, v_k_1856_);
lean_ctor_set(v_reuseFailAlloc_1880_, 2, v_v_1857_);
lean_ctor_set(v_reuseFailAlloc_1880_, 3, v_l_1858_);
lean_ctor_set(v_reuseFailAlloc_1880_, 4, v_impl_1865_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
else
{
lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1944_; 
v_isSharedCheck_1944_ = !lean_is_exclusive(v_impl_1865_);
if (v_isSharedCheck_1944_ == 0)
{
lean_object* v_unused_1945_; lean_object* v_unused_1946_; lean_object* v_unused_1947_; lean_object* v_unused_1948_; lean_object* v_unused_1949_; 
v_unused_1945_ = lean_ctor_get(v_impl_1865_, 4);
lean_dec(v_unused_1945_);
v_unused_1946_ = lean_ctor_get(v_impl_1865_, 3);
lean_dec(v_unused_1946_);
v_unused_1947_ = lean_ctor_get(v_impl_1865_, 2);
lean_dec(v_unused_1947_);
v_unused_1948_ = lean_ctor_get(v_impl_1865_, 1);
lean_dec(v_unused_1948_);
v_unused_1949_ = lean_ctor_get(v_impl_1865_, 0);
lean_dec(v_unused_1949_);
v___x_1882_ = v_impl_1865_;
v_isShared_1883_ = v_isSharedCheck_1944_;
goto v_resetjp_1881_;
}
else
{
lean_dec(v_impl_1865_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1944_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v_size_1884_; lean_object* v_k_1885_; lean_object* v_v_1886_; lean_object* v_l_1887_; lean_object* v_r_1888_; lean_object* v_size_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; uint8_t v___x_1892_; 
v_size_1884_ = lean_ctor_get(v_l_1871_, 0);
v_k_1885_ = lean_ctor_get(v_l_1871_, 1);
v_v_1886_ = lean_ctor_get(v_l_1871_, 2);
v_l_1887_ = lean_ctor_get(v_l_1871_, 3);
v_r_1888_ = lean_ctor_get(v_l_1871_, 4);
v_size_1889_ = lean_ctor_get(v_r_1872_, 0);
v___x_1890_ = lean_unsigned_to_nat(2u);
v___x_1891_ = lean_nat_mul(v___x_1890_, v_size_1889_);
v___x_1892_ = lean_nat_dec_lt(v_size_1884_, v___x_1891_);
lean_dec(v___x_1891_);
if (v___x_1892_ == 0)
{
lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1920_; 
lean_inc(v_r_1888_);
lean_inc(v_l_1887_);
lean_inc(v_v_1886_);
lean_inc(v_k_1885_);
v_isSharedCheck_1920_ = !lean_is_exclusive(v_l_1871_);
if (v_isSharedCheck_1920_ == 0)
{
lean_object* v_unused_1921_; lean_object* v_unused_1922_; lean_object* v_unused_1923_; lean_object* v_unused_1924_; lean_object* v_unused_1925_; 
v_unused_1921_ = lean_ctor_get(v_l_1871_, 4);
lean_dec(v_unused_1921_);
v_unused_1922_ = lean_ctor_get(v_l_1871_, 3);
lean_dec(v_unused_1922_);
v_unused_1923_ = lean_ctor_get(v_l_1871_, 2);
lean_dec(v_unused_1923_);
v_unused_1924_ = lean_ctor_get(v_l_1871_, 1);
lean_dec(v_unused_1924_);
v_unused_1925_ = lean_ctor_get(v_l_1871_, 0);
lean_dec(v_unused_1925_);
v___x_1894_ = v_l_1871_;
v_isShared_1895_ = v_isSharedCheck_1920_;
goto v_resetjp_1893_;
}
else
{
lean_dec(v_l_1871_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1920_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___y_1899_; lean_object* v___y_1900_; lean_object* v___y_1901_; lean_object* v___y_1910_; 
v___x_1896_ = lean_nat_add(v___x_1866_, v_size_1867_);
v___x_1897_ = lean_nat_add(v___x_1896_, v_size_1868_);
lean_dec(v_size_1868_);
if (lean_obj_tag(v_l_1887_) == 0)
{
lean_object* v_size_1918_; 
v_size_1918_ = lean_ctor_get(v_l_1887_, 0);
lean_inc(v_size_1918_);
v___y_1910_ = v_size_1918_;
goto v___jp_1909_;
}
else
{
lean_object* v___x_1919_; 
v___x_1919_ = lean_unsigned_to_nat(0u);
v___y_1910_ = v___x_1919_;
goto v___jp_1909_;
}
v___jp_1898_:
{
lean_object* v___x_1902_; lean_object* v___x_1904_; 
v___x_1902_ = lean_nat_add(v___y_1899_, v___y_1901_);
lean_dec(v___y_1901_);
lean_dec(v___y_1899_);
if (v_isShared_1895_ == 0)
{
lean_ctor_set(v___x_1894_, 4, v_r_1872_);
lean_ctor_set(v___x_1894_, 3, v_r_1888_);
lean_ctor_set(v___x_1894_, 2, v_v_1870_);
lean_ctor_set(v___x_1894_, 1, v_k_1869_);
lean_ctor_set(v___x_1894_, 0, v___x_1902_);
v___x_1904_ = v___x_1894_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v___x_1902_);
lean_ctor_set(v_reuseFailAlloc_1908_, 1, v_k_1869_);
lean_ctor_set(v_reuseFailAlloc_1908_, 2, v_v_1870_);
lean_ctor_set(v_reuseFailAlloc_1908_, 3, v_r_1888_);
lean_ctor_set(v_reuseFailAlloc_1908_, 4, v_r_1872_);
v___x_1904_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
lean_object* v___x_1906_; 
if (v_isShared_1883_ == 0)
{
lean_ctor_set(v___x_1882_, 4, v___x_1904_);
lean_ctor_set(v___x_1882_, 3, v___y_1900_);
lean_ctor_set(v___x_1882_, 2, v_v_1886_);
lean_ctor_set(v___x_1882_, 1, v_k_1885_);
lean_ctor_set(v___x_1882_, 0, v___x_1897_);
v___x_1906_ = v___x_1882_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v___x_1897_);
lean_ctor_set(v_reuseFailAlloc_1907_, 1, v_k_1885_);
lean_ctor_set(v_reuseFailAlloc_1907_, 2, v_v_1886_);
lean_ctor_set(v_reuseFailAlloc_1907_, 3, v___y_1900_);
lean_ctor_set(v_reuseFailAlloc_1907_, 4, v___x_1904_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
}
v___jp_1909_:
{
lean_object* v___x_1911_; lean_object* v___x_1913_; 
v___x_1911_ = lean_nat_add(v___x_1896_, v___y_1910_);
lean_dec(v___y_1910_);
lean_dec(v___x_1896_);
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 4, v_l_1887_);
lean_ctor_set(v___x_1861_, 0, v___x_1911_);
v___x_1913_ = v___x_1861_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v___x_1911_);
lean_ctor_set(v_reuseFailAlloc_1917_, 1, v_k_1856_);
lean_ctor_set(v_reuseFailAlloc_1917_, 2, v_v_1857_);
lean_ctor_set(v_reuseFailAlloc_1917_, 3, v_l_1858_);
lean_ctor_set(v_reuseFailAlloc_1917_, 4, v_l_1887_);
v___x_1913_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
lean_object* v___x_1914_; 
v___x_1914_ = lean_nat_add(v___x_1866_, v_size_1889_);
if (lean_obj_tag(v_r_1888_) == 0)
{
lean_object* v_size_1915_; 
v_size_1915_ = lean_ctor_get(v_r_1888_, 0);
lean_inc(v_size_1915_);
v___y_1899_ = v___x_1914_;
v___y_1900_ = v___x_1913_;
v___y_1901_ = v_size_1915_;
goto v___jp_1898_;
}
else
{
lean_object* v___x_1916_; 
v___x_1916_ = lean_unsigned_to_nat(0u);
v___y_1899_ = v___x_1914_;
v___y_1900_ = v___x_1913_;
v___y_1901_ = v___x_1916_;
goto v___jp_1898_;
}
}
}
}
}
else
{
lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1930_; 
lean_del_object(v___x_1861_);
v___x_1926_ = lean_nat_add(v___x_1866_, v_size_1867_);
v___x_1927_ = lean_nat_add(v___x_1926_, v_size_1868_);
lean_dec(v_size_1868_);
v___x_1928_ = lean_nat_add(v___x_1926_, v_size_1884_);
lean_dec(v___x_1926_);
lean_inc_ref(v_l_1858_);
if (v_isShared_1883_ == 0)
{
lean_ctor_set(v___x_1882_, 4, v_l_1871_);
lean_ctor_set(v___x_1882_, 3, v_l_1858_);
lean_ctor_set(v___x_1882_, 2, v_v_1857_);
lean_ctor_set(v___x_1882_, 1, v_k_1856_);
lean_ctor_set(v___x_1882_, 0, v___x_1928_);
v___x_1930_ = v___x_1882_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v___x_1928_);
lean_ctor_set(v_reuseFailAlloc_1943_, 1, v_k_1856_);
lean_ctor_set(v_reuseFailAlloc_1943_, 2, v_v_1857_);
lean_ctor_set(v_reuseFailAlloc_1943_, 3, v_l_1858_);
lean_ctor_set(v_reuseFailAlloc_1943_, 4, v_l_1871_);
v___x_1930_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1937_; 
v_isSharedCheck_1937_ = !lean_is_exclusive(v_l_1858_);
if (v_isSharedCheck_1937_ == 0)
{
lean_object* v_unused_1938_; lean_object* v_unused_1939_; lean_object* v_unused_1940_; lean_object* v_unused_1941_; lean_object* v_unused_1942_; 
v_unused_1938_ = lean_ctor_get(v_l_1858_, 4);
lean_dec(v_unused_1938_);
v_unused_1939_ = lean_ctor_get(v_l_1858_, 3);
lean_dec(v_unused_1939_);
v_unused_1940_ = lean_ctor_get(v_l_1858_, 2);
lean_dec(v_unused_1940_);
v_unused_1941_ = lean_ctor_get(v_l_1858_, 1);
lean_dec(v_unused_1941_);
v_unused_1942_ = lean_ctor_get(v_l_1858_, 0);
lean_dec(v_unused_1942_);
v___x_1932_ = v_l_1858_;
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
else
{
lean_dec(v_l_1858_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v___x_1935_; 
if (v_isShared_1933_ == 0)
{
lean_ctor_set(v___x_1932_, 4, v_r_1872_);
lean_ctor_set(v___x_1932_, 3, v___x_1930_);
lean_ctor_set(v___x_1932_, 2, v_v_1870_);
lean_ctor_set(v___x_1932_, 1, v_k_1869_);
lean_ctor_set(v___x_1932_, 0, v___x_1927_);
v___x_1935_ = v___x_1932_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v___x_1927_);
lean_ctor_set(v_reuseFailAlloc_1936_, 1, v_k_1869_);
lean_ctor_set(v_reuseFailAlloc_1936_, 2, v_v_1870_);
lean_ctor_set(v_reuseFailAlloc_1936_, 3, v___x_1930_);
lean_ctor_set(v_reuseFailAlloc_1936_, 4, v_r_1872_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1950_; 
v_l_1950_ = lean_ctor_get(v_impl_1865_, 3);
lean_inc(v_l_1950_);
if (lean_obj_tag(v_l_1950_) == 0)
{
lean_object* v_r_1951_; lean_object* v_k_1952_; lean_object* v_v_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1976_; 
v_r_1951_ = lean_ctor_get(v_impl_1865_, 4);
v_k_1952_ = lean_ctor_get(v_impl_1865_, 1);
v_v_1953_ = lean_ctor_get(v_impl_1865_, 2);
v_isSharedCheck_1976_ = !lean_is_exclusive(v_impl_1865_);
if (v_isSharedCheck_1976_ == 0)
{
lean_object* v_unused_1977_; lean_object* v_unused_1978_; 
v_unused_1977_ = lean_ctor_get(v_impl_1865_, 3);
lean_dec(v_unused_1977_);
v_unused_1978_ = lean_ctor_get(v_impl_1865_, 0);
lean_dec(v_unused_1978_);
v___x_1955_ = v_impl_1865_;
v_isShared_1956_ = v_isSharedCheck_1976_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_r_1951_);
lean_inc(v_v_1953_);
lean_inc(v_k_1952_);
lean_dec(v_impl_1865_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1976_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v_k_1957_; lean_object* v_v_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1972_; 
v_k_1957_ = lean_ctor_get(v_l_1950_, 1);
v_v_1958_ = lean_ctor_get(v_l_1950_, 2);
v_isSharedCheck_1972_ = !lean_is_exclusive(v_l_1950_);
if (v_isSharedCheck_1972_ == 0)
{
lean_object* v_unused_1973_; lean_object* v_unused_1974_; lean_object* v_unused_1975_; 
v_unused_1973_ = lean_ctor_get(v_l_1950_, 4);
lean_dec(v_unused_1973_);
v_unused_1974_ = lean_ctor_get(v_l_1950_, 3);
lean_dec(v_unused_1974_);
v_unused_1975_ = lean_ctor_get(v_l_1950_, 0);
lean_dec(v_unused_1975_);
v___x_1960_ = v_l_1950_;
v_isShared_1961_ = v_isSharedCheck_1972_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_v_1958_);
lean_inc(v_k_1957_);
lean_dec(v_l_1950_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1972_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1962_; lean_object* v___x_1964_; 
v___x_1962_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1951_, 2);
if (v_isShared_1961_ == 0)
{
lean_ctor_set(v___x_1960_, 4, v_r_1951_);
lean_ctor_set(v___x_1960_, 3, v_r_1951_);
lean_ctor_set(v___x_1960_, 2, v_v_1857_);
lean_ctor_set(v___x_1960_, 1, v_k_1856_);
lean_ctor_set(v___x_1960_, 0, v___x_1866_);
v___x_1964_ = v___x_1960_;
goto v_reusejp_1963_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v___x_1866_);
lean_ctor_set(v_reuseFailAlloc_1971_, 1, v_k_1856_);
lean_ctor_set(v_reuseFailAlloc_1971_, 2, v_v_1857_);
lean_ctor_set(v_reuseFailAlloc_1971_, 3, v_r_1951_);
lean_ctor_set(v_reuseFailAlloc_1971_, 4, v_r_1951_);
v___x_1964_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1963_;
}
v_reusejp_1963_:
{
lean_object* v___x_1966_; 
lean_inc(v_r_1951_);
if (v_isShared_1956_ == 0)
{
lean_ctor_set(v___x_1955_, 3, v_r_1951_);
lean_ctor_set(v___x_1955_, 0, v___x_1866_);
v___x_1966_ = v___x_1955_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v___x_1866_);
lean_ctor_set(v_reuseFailAlloc_1970_, 1, v_k_1952_);
lean_ctor_set(v_reuseFailAlloc_1970_, 2, v_v_1953_);
lean_ctor_set(v_reuseFailAlloc_1970_, 3, v_r_1951_);
lean_ctor_set(v_reuseFailAlloc_1970_, 4, v_r_1951_);
v___x_1966_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
lean_object* v___x_1968_; 
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 4, v___x_1966_);
lean_ctor_set(v___x_1861_, 3, v___x_1964_);
lean_ctor_set(v___x_1861_, 2, v_v_1958_);
lean_ctor_set(v___x_1861_, 1, v_k_1957_);
lean_ctor_set(v___x_1861_, 0, v___x_1962_);
v___x_1968_ = v___x_1861_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v___x_1962_);
lean_ctor_set(v_reuseFailAlloc_1969_, 1, v_k_1957_);
lean_ctor_set(v_reuseFailAlloc_1969_, 2, v_v_1958_);
lean_ctor_set(v_reuseFailAlloc_1969_, 3, v___x_1964_);
lean_ctor_set(v_reuseFailAlloc_1969_, 4, v___x_1966_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
return v___x_1968_;
}
}
}
}
}
}
else
{
lean_object* v_r_1979_; 
v_r_1979_ = lean_ctor_get(v_impl_1865_, 4);
lean_inc(v_r_1979_);
if (lean_obj_tag(v_r_1979_) == 0)
{
lean_object* v_k_1980_; lean_object* v_v_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_1992_; 
v_k_1980_ = lean_ctor_get(v_impl_1865_, 1);
v_v_1981_ = lean_ctor_get(v_impl_1865_, 2);
v_isSharedCheck_1992_ = !lean_is_exclusive(v_impl_1865_);
if (v_isSharedCheck_1992_ == 0)
{
lean_object* v_unused_1993_; lean_object* v_unused_1994_; lean_object* v_unused_1995_; 
v_unused_1993_ = lean_ctor_get(v_impl_1865_, 4);
lean_dec(v_unused_1993_);
v_unused_1994_ = lean_ctor_get(v_impl_1865_, 3);
lean_dec(v_unused_1994_);
v_unused_1995_ = lean_ctor_get(v_impl_1865_, 0);
lean_dec(v_unused_1995_);
v___x_1983_ = v_impl_1865_;
v_isShared_1984_ = v_isSharedCheck_1992_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_v_1981_);
lean_inc(v_k_1980_);
lean_dec(v_impl_1865_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_1992_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v___x_1985_; lean_object* v___x_1987_; 
v___x_1985_ = lean_unsigned_to_nat(3u);
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 4, v_l_1950_);
lean_ctor_set(v___x_1983_, 2, v_v_1857_);
lean_ctor_set(v___x_1983_, 1, v_k_1856_);
lean_ctor_set(v___x_1983_, 0, v___x_1866_);
v___x_1987_ = v___x_1983_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v___x_1866_);
lean_ctor_set(v_reuseFailAlloc_1991_, 1, v_k_1856_);
lean_ctor_set(v_reuseFailAlloc_1991_, 2, v_v_1857_);
lean_ctor_set(v_reuseFailAlloc_1991_, 3, v_l_1950_);
lean_ctor_set(v_reuseFailAlloc_1991_, 4, v_l_1950_);
v___x_1987_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
lean_object* v___x_1989_; 
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 4, v_r_1979_);
lean_ctor_set(v___x_1861_, 3, v___x_1987_);
lean_ctor_set(v___x_1861_, 2, v_v_1981_);
lean_ctor_set(v___x_1861_, 1, v_k_1980_);
lean_ctor_set(v___x_1861_, 0, v___x_1985_);
v___x_1989_ = v___x_1861_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v___x_1985_);
lean_ctor_set(v_reuseFailAlloc_1990_, 1, v_k_1980_);
lean_ctor_set(v_reuseFailAlloc_1990_, 2, v_v_1981_);
lean_ctor_set(v_reuseFailAlloc_1990_, 3, v___x_1987_);
lean_ctor_set(v_reuseFailAlloc_1990_, 4, v_r_1979_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
}
}
else
{
lean_object* v___x_1996_; lean_object* v___x_1998_; 
v___x_1996_ = lean_unsigned_to_nat(2u);
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 4, v_impl_1865_);
lean_ctor_set(v___x_1861_, 3, v_r_1979_);
lean_ctor_set(v___x_1861_, 0, v___x_1996_);
v___x_1998_ = v___x_1861_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v___x_1996_);
lean_ctor_set(v_reuseFailAlloc_1999_, 1, v_k_1856_);
lean_ctor_set(v_reuseFailAlloc_1999_, 2, v_v_1857_);
lean_ctor_set(v_reuseFailAlloc_1999_, 3, v_r_1979_);
lean_ctor_set(v_reuseFailAlloc_1999_, 4, v_impl_1865_);
v___x_1998_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
return v___x_1998_;
}
}
}
}
}
else
{
lean_object* v___x_2001_; 
lean_dec(v_v_1857_);
lean_dec(v_k_1856_);
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 2, v_v_1853_);
lean_ctor_set(v___x_1861_, 1, v_k_1852_);
v___x_2001_ = v___x_1861_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v_size_1855_);
lean_ctor_set(v_reuseFailAlloc_2002_, 1, v_k_1852_);
lean_ctor_set(v_reuseFailAlloc_2002_, 2, v_v_1853_);
lean_ctor_set(v_reuseFailAlloc_2002_, 3, v_l_1858_);
lean_ctor_set(v_reuseFailAlloc_2002_, 4, v_r_1859_);
v___x_2001_ = v_reuseFailAlloc_2002_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
return v___x_2001_;
}
}
}
else
{
lean_object* v_impl_2003_; lean_object* v___x_2004_; 
lean_dec(v_size_1855_);
v_impl_2003_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1___redArg(v_k_1852_, v_v_1853_, v_l_1858_);
v___x_2004_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_1859_) == 0)
{
lean_object* v_size_2005_; lean_object* v_size_2006_; lean_object* v_k_2007_; lean_object* v_v_2008_; lean_object* v_l_2009_; lean_object* v_r_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; uint8_t v___x_2013_; 
v_size_2005_ = lean_ctor_get(v_r_1859_, 0);
v_size_2006_ = lean_ctor_get(v_impl_2003_, 0);
lean_inc(v_size_2006_);
v_k_2007_ = lean_ctor_get(v_impl_2003_, 1);
lean_inc(v_k_2007_);
v_v_2008_ = lean_ctor_get(v_impl_2003_, 2);
lean_inc(v_v_2008_);
v_l_2009_ = lean_ctor_get(v_impl_2003_, 3);
lean_inc(v_l_2009_);
v_r_2010_ = lean_ctor_get(v_impl_2003_, 4);
lean_inc(v_r_2010_);
v___x_2011_ = lean_unsigned_to_nat(3u);
v___x_2012_ = lean_nat_mul(v___x_2011_, v_size_2005_);
v___x_2013_ = lean_nat_dec_lt(v___x_2012_, v_size_2006_);
lean_dec(v___x_2012_);
if (v___x_2013_ == 0)
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2017_; 
lean_dec(v_r_2010_);
lean_dec(v_l_2009_);
lean_dec(v_v_2008_);
lean_dec(v_k_2007_);
v___x_2014_ = lean_nat_add(v___x_2004_, v_size_2006_);
lean_dec(v_size_2006_);
v___x_2015_ = lean_nat_add(v___x_2014_, v_size_2005_);
lean_dec(v___x_2014_);
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 3, v_impl_2003_);
lean_ctor_set(v___x_1861_, 0, v___x_2015_);
v___x_2017_ = v___x_1861_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v___x_2015_);
lean_ctor_set(v_reuseFailAlloc_2018_, 1, v_k_1856_);
lean_ctor_set(v_reuseFailAlloc_2018_, 2, v_v_1857_);
lean_ctor_set(v_reuseFailAlloc_2018_, 3, v_impl_2003_);
lean_ctor_set(v_reuseFailAlloc_2018_, 4, v_r_1859_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
else
{
lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2084_; 
v_isSharedCheck_2084_ = !lean_is_exclusive(v_impl_2003_);
if (v_isSharedCheck_2084_ == 0)
{
lean_object* v_unused_2085_; lean_object* v_unused_2086_; lean_object* v_unused_2087_; lean_object* v_unused_2088_; lean_object* v_unused_2089_; 
v_unused_2085_ = lean_ctor_get(v_impl_2003_, 4);
lean_dec(v_unused_2085_);
v_unused_2086_ = lean_ctor_get(v_impl_2003_, 3);
lean_dec(v_unused_2086_);
v_unused_2087_ = lean_ctor_get(v_impl_2003_, 2);
lean_dec(v_unused_2087_);
v_unused_2088_ = lean_ctor_get(v_impl_2003_, 1);
lean_dec(v_unused_2088_);
v_unused_2089_ = lean_ctor_get(v_impl_2003_, 0);
lean_dec(v_unused_2089_);
v___x_2020_ = v_impl_2003_;
v_isShared_2021_ = v_isSharedCheck_2084_;
goto v_resetjp_2019_;
}
else
{
lean_dec(v_impl_2003_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2084_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v_size_2022_; lean_object* v_size_2023_; lean_object* v_k_2024_; lean_object* v_v_2025_; lean_object* v_l_2026_; lean_object* v_r_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; uint8_t v___x_2030_; 
v_size_2022_ = lean_ctor_get(v_l_2009_, 0);
v_size_2023_ = lean_ctor_get(v_r_2010_, 0);
v_k_2024_ = lean_ctor_get(v_r_2010_, 1);
v_v_2025_ = lean_ctor_get(v_r_2010_, 2);
v_l_2026_ = lean_ctor_get(v_r_2010_, 3);
v_r_2027_ = lean_ctor_get(v_r_2010_, 4);
v___x_2028_ = lean_unsigned_to_nat(2u);
v___x_2029_ = lean_nat_mul(v___x_2028_, v_size_2022_);
v___x_2030_ = lean_nat_dec_lt(v_size_2023_, v___x_2029_);
lean_dec(v___x_2029_);
if (v___x_2030_ == 0)
{
lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2059_; 
lean_inc(v_r_2027_);
lean_inc(v_l_2026_);
lean_inc(v_v_2025_);
lean_inc(v_k_2024_);
v_isSharedCheck_2059_ = !lean_is_exclusive(v_r_2010_);
if (v_isSharedCheck_2059_ == 0)
{
lean_object* v_unused_2060_; lean_object* v_unused_2061_; lean_object* v_unused_2062_; lean_object* v_unused_2063_; lean_object* v_unused_2064_; 
v_unused_2060_ = lean_ctor_get(v_r_2010_, 4);
lean_dec(v_unused_2060_);
v_unused_2061_ = lean_ctor_get(v_r_2010_, 3);
lean_dec(v_unused_2061_);
v_unused_2062_ = lean_ctor_get(v_r_2010_, 2);
lean_dec(v_unused_2062_);
v_unused_2063_ = lean_ctor_get(v_r_2010_, 1);
lean_dec(v_unused_2063_);
v_unused_2064_ = lean_ctor_get(v_r_2010_, 0);
lean_dec(v_unused_2064_);
v___x_2032_ = v_r_2010_;
v_isShared_2033_ = v_isSharedCheck_2059_;
goto v_resetjp_2031_;
}
else
{
lean_dec(v_r_2010_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2059_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___y_2037_; lean_object* v___y_2038_; lean_object* v___y_2039_; lean_object* v___x_2047_; lean_object* v___y_2049_; 
v___x_2034_ = lean_nat_add(v___x_2004_, v_size_2006_);
lean_dec(v_size_2006_);
v___x_2035_ = lean_nat_add(v___x_2034_, v_size_2005_);
lean_dec(v___x_2034_);
v___x_2047_ = lean_nat_add(v___x_2004_, v_size_2022_);
if (lean_obj_tag(v_l_2026_) == 0)
{
lean_object* v_size_2057_; 
v_size_2057_ = lean_ctor_get(v_l_2026_, 0);
lean_inc(v_size_2057_);
v___y_2049_ = v_size_2057_;
goto v___jp_2048_;
}
else
{
lean_object* v___x_2058_; 
v___x_2058_ = lean_unsigned_to_nat(0u);
v___y_2049_ = v___x_2058_;
goto v___jp_2048_;
}
v___jp_2036_:
{
lean_object* v___x_2040_; lean_object* v___x_2042_; 
v___x_2040_ = lean_nat_add(v___y_2037_, v___y_2039_);
lean_dec(v___y_2039_);
lean_dec(v___y_2037_);
if (v_isShared_2033_ == 0)
{
lean_ctor_set(v___x_2032_, 4, v_r_1859_);
lean_ctor_set(v___x_2032_, 3, v_r_2027_);
lean_ctor_set(v___x_2032_, 2, v_v_1857_);
lean_ctor_set(v___x_2032_, 1, v_k_1856_);
lean_ctor_set(v___x_2032_, 0, v___x_2040_);
v___x_2042_ = v___x_2032_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2040_);
lean_ctor_set(v_reuseFailAlloc_2046_, 1, v_k_1856_);
lean_ctor_set(v_reuseFailAlloc_2046_, 2, v_v_1857_);
lean_ctor_set(v_reuseFailAlloc_2046_, 3, v_r_2027_);
lean_ctor_set(v_reuseFailAlloc_2046_, 4, v_r_1859_);
v___x_2042_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
lean_object* v___x_2044_; 
if (v_isShared_2021_ == 0)
{
lean_ctor_set(v___x_2020_, 4, v___x_2042_);
lean_ctor_set(v___x_2020_, 3, v___y_2038_);
lean_ctor_set(v___x_2020_, 2, v_v_2025_);
lean_ctor_set(v___x_2020_, 1, v_k_2024_);
lean_ctor_set(v___x_2020_, 0, v___x_2035_);
v___x_2044_ = v___x_2020_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v___x_2035_);
lean_ctor_set(v_reuseFailAlloc_2045_, 1, v_k_2024_);
lean_ctor_set(v_reuseFailAlloc_2045_, 2, v_v_2025_);
lean_ctor_set(v_reuseFailAlloc_2045_, 3, v___y_2038_);
lean_ctor_set(v_reuseFailAlloc_2045_, 4, v___x_2042_);
v___x_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
return v___x_2044_;
}
}
}
v___jp_2048_:
{
lean_object* v___x_2050_; lean_object* v___x_2052_; 
v___x_2050_ = lean_nat_add(v___x_2047_, v___y_2049_);
lean_dec(v___y_2049_);
lean_dec(v___x_2047_);
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 4, v_l_2026_);
lean_ctor_set(v___x_1861_, 3, v_l_2009_);
lean_ctor_set(v___x_1861_, 2, v_v_2008_);
lean_ctor_set(v___x_1861_, 1, v_k_2007_);
lean_ctor_set(v___x_1861_, 0, v___x_2050_);
v___x_2052_ = v___x_1861_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v___x_2050_);
lean_ctor_set(v_reuseFailAlloc_2056_, 1, v_k_2007_);
lean_ctor_set(v_reuseFailAlloc_2056_, 2, v_v_2008_);
lean_ctor_set(v_reuseFailAlloc_2056_, 3, v_l_2009_);
lean_ctor_set(v_reuseFailAlloc_2056_, 4, v_l_2026_);
v___x_2052_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
lean_object* v___x_2053_; 
v___x_2053_ = lean_nat_add(v___x_2004_, v_size_2005_);
if (lean_obj_tag(v_r_2027_) == 0)
{
lean_object* v_size_2054_; 
v_size_2054_ = lean_ctor_get(v_r_2027_, 0);
lean_inc(v_size_2054_);
v___y_2037_ = v___x_2053_;
v___y_2038_ = v___x_2052_;
v___y_2039_ = v_size_2054_;
goto v___jp_2036_;
}
else
{
lean_object* v___x_2055_; 
v___x_2055_ = lean_unsigned_to_nat(0u);
v___y_2037_ = v___x_2053_;
v___y_2038_ = v___x_2052_;
v___y_2039_ = v___x_2055_;
goto v___jp_2036_;
}
}
}
}
}
else
{
lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2070_; 
lean_del_object(v___x_1861_);
v___x_2065_ = lean_nat_add(v___x_2004_, v_size_2006_);
lean_dec(v_size_2006_);
v___x_2066_ = lean_nat_add(v___x_2065_, v_size_2005_);
lean_dec(v___x_2065_);
v___x_2067_ = lean_nat_add(v___x_2004_, v_size_2005_);
v___x_2068_ = lean_nat_add(v___x_2067_, v_size_2023_);
lean_dec(v___x_2067_);
lean_inc_ref(v_r_1859_);
if (v_isShared_2021_ == 0)
{
lean_ctor_set(v___x_2020_, 4, v_r_1859_);
lean_ctor_set(v___x_2020_, 3, v_r_2010_);
lean_ctor_set(v___x_2020_, 2, v_v_1857_);
lean_ctor_set(v___x_2020_, 1, v_k_1856_);
lean_ctor_set(v___x_2020_, 0, v___x_2068_);
v___x_2070_ = v___x_2020_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v___x_2068_);
lean_ctor_set(v_reuseFailAlloc_2083_, 1, v_k_1856_);
lean_ctor_set(v_reuseFailAlloc_2083_, 2, v_v_1857_);
lean_ctor_set(v_reuseFailAlloc_2083_, 3, v_r_2010_);
lean_ctor_set(v_reuseFailAlloc_2083_, 4, v_r_1859_);
v___x_2070_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2077_; 
v_isSharedCheck_2077_ = !lean_is_exclusive(v_r_1859_);
if (v_isSharedCheck_2077_ == 0)
{
lean_object* v_unused_2078_; lean_object* v_unused_2079_; lean_object* v_unused_2080_; lean_object* v_unused_2081_; lean_object* v_unused_2082_; 
v_unused_2078_ = lean_ctor_get(v_r_1859_, 4);
lean_dec(v_unused_2078_);
v_unused_2079_ = lean_ctor_get(v_r_1859_, 3);
lean_dec(v_unused_2079_);
v_unused_2080_ = lean_ctor_get(v_r_1859_, 2);
lean_dec(v_unused_2080_);
v_unused_2081_ = lean_ctor_get(v_r_1859_, 1);
lean_dec(v_unused_2081_);
v_unused_2082_ = lean_ctor_get(v_r_1859_, 0);
lean_dec(v_unused_2082_);
v___x_2072_ = v_r_1859_;
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
else
{
lean_dec(v_r_1859_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2075_; 
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 4, v___x_2070_);
lean_ctor_set(v___x_2072_, 3, v_l_2009_);
lean_ctor_set(v___x_2072_, 2, v_v_2008_);
lean_ctor_set(v___x_2072_, 1, v_k_2007_);
lean_ctor_set(v___x_2072_, 0, v___x_2066_);
v___x_2075_ = v___x_2072_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v___x_2066_);
lean_ctor_set(v_reuseFailAlloc_2076_, 1, v_k_2007_);
lean_ctor_set(v_reuseFailAlloc_2076_, 2, v_v_2008_);
lean_ctor_set(v_reuseFailAlloc_2076_, 3, v_l_2009_);
lean_ctor_set(v_reuseFailAlloc_2076_, 4, v___x_2070_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
return v___x_2075_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2090_; 
v_l_2090_ = lean_ctor_get(v_impl_2003_, 3);
lean_inc(v_l_2090_);
if (lean_obj_tag(v_l_2090_) == 0)
{
lean_object* v_r_2091_; lean_object* v_k_2092_; lean_object* v_v_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2104_; 
v_r_2091_ = lean_ctor_get(v_impl_2003_, 4);
v_k_2092_ = lean_ctor_get(v_impl_2003_, 1);
v_v_2093_ = lean_ctor_get(v_impl_2003_, 2);
v_isSharedCheck_2104_ = !lean_is_exclusive(v_impl_2003_);
if (v_isSharedCheck_2104_ == 0)
{
lean_object* v_unused_2105_; lean_object* v_unused_2106_; 
v_unused_2105_ = lean_ctor_get(v_impl_2003_, 3);
lean_dec(v_unused_2105_);
v_unused_2106_ = lean_ctor_get(v_impl_2003_, 0);
lean_dec(v_unused_2106_);
v___x_2095_ = v_impl_2003_;
v_isShared_2096_ = v_isSharedCheck_2104_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_r_2091_);
lean_inc(v_v_2093_);
lean_inc(v_k_2092_);
lean_dec(v_impl_2003_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2104_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2097_; lean_object* v___x_2099_; 
v___x_2097_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_2091_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 3, v_r_2091_);
lean_ctor_set(v___x_2095_, 2, v_v_1857_);
lean_ctor_set(v___x_2095_, 1, v_k_1856_);
lean_ctor_set(v___x_2095_, 0, v___x_2004_);
v___x_2099_ = v___x_2095_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v___x_2004_);
lean_ctor_set(v_reuseFailAlloc_2103_, 1, v_k_1856_);
lean_ctor_set(v_reuseFailAlloc_2103_, 2, v_v_1857_);
lean_ctor_set(v_reuseFailAlloc_2103_, 3, v_r_2091_);
lean_ctor_set(v_reuseFailAlloc_2103_, 4, v_r_2091_);
v___x_2099_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
lean_object* v___x_2101_; 
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 4, v___x_2099_);
lean_ctor_set(v___x_1861_, 3, v_l_2090_);
lean_ctor_set(v___x_1861_, 2, v_v_2093_);
lean_ctor_set(v___x_1861_, 1, v_k_2092_);
lean_ctor_set(v___x_1861_, 0, v___x_2097_);
v___x_2101_ = v___x_1861_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v___x_2097_);
lean_ctor_set(v_reuseFailAlloc_2102_, 1, v_k_2092_);
lean_ctor_set(v_reuseFailAlloc_2102_, 2, v_v_2093_);
lean_ctor_set(v_reuseFailAlloc_2102_, 3, v_l_2090_);
lean_ctor_set(v_reuseFailAlloc_2102_, 4, v___x_2099_);
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
lean_object* v_r_2107_; 
v_r_2107_ = lean_ctor_get(v_impl_2003_, 4);
lean_inc(v_r_2107_);
if (lean_obj_tag(v_r_2107_) == 0)
{
lean_object* v_k_2108_; lean_object* v_v_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2132_; 
v_k_2108_ = lean_ctor_get(v_impl_2003_, 1);
v_v_2109_ = lean_ctor_get(v_impl_2003_, 2);
v_isSharedCheck_2132_ = !lean_is_exclusive(v_impl_2003_);
if (v_isSharedCheck_2132_ == 0)
{
lean_object* v_unused_2133_; lean_object* v_unused_2134_; lean_object* v_unused_2135_; 
v_unused_2133_ = lean_ctor_get(v_impl_2003_, 4);
lean_dec(v_unused_2133_);
v_unused_2134_ = lean_ctor_get(v_impl_2003_, 3);
lean_dec(v_unused_2134_);
v_unused_2135_ = lean_ctor_get(v_impl_2003_, 0);
lean_dec(v_unused_2135_);
v___x_2111_ = v_impl_2003_;
v_isShared_2112_ = v_isSharedCheck_2132_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_v_2109_);
lean_inc(v_k_2108_);
lean_dec(v_impl_2003_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2132_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v_k_2113_; lean_object* v_v_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2128_; 
v_k_2113_ = lean_ctor_get(v_r_2107_, 1);
v_v_2114_ = lean_ctor_get(v_r_2107_, 2);
v_isSharedCheck_2128_ = !lean_is_exclusive(v_r_2107_);
if (v_isSharedCheck_2128_ == 0)
{
lean_object* v_unused_2129_; lean_object* v_unused_2130_; lean_object* v_unused_2131_; 
v_unused_2129_ = lean_ctor_get(v_r_2107_, 4);
lean_dec(v_unused_2129_);
v_unused_2130_ = lean_ctor_get(v_r_2107_, 3);
lean_dec(v_unused_2130_);
v_unused_2131_ = lean_ctor_get(v_r_2107_, 0);
lean_dec(v_unused_2131_);
v___x_2116_ = v_r_2107_;
v_isShared_2117_ = v_isSharedCheck_2128_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_v_2114_);
lean_inc(v_k_2113_);
lean_dec(v_r_2107_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2128_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v___x_2118_; lean_object* v___x_2120_; 
v___x_2118_ = lean_unsigned_to_nat(3u);
if (v_isShared_2117_ == 0)
{
lean_ctor_set(v___x_2116_, 4, v_l_2090_);
lean_ctor_set(v___x_2116_, 3, v_l_2090_);
lean_ctor_set(v___x_2116_, 2, v_v_2109_);
lean_ctor_set(v___x_2116_, 1, v_k_2108_);
lean_ctor_set(v___x_2116_, 0, v___x_2004_);
v___x_2120_ = v___x_2116_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v___x_2004_);
lean_ctor_set(v_reuseFailAlloc_2127_, 1, v_k_2108_);
lean_ctor_set(v_reuseFailAlloc_2127_, 2, v_v_2109_);
lean_ctor_set(v_reuseFailAlloc_2127_, 3, v_l_2090_);
lean_ctor_set(v_reuseFailAlloc_2127_, 4, v_l_2090_);
v___x_2120_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
lean_object* v___x_2122_; 
if (v_isShared_2112_ == 0)
{
lean_ctor_set(v___x_2111_, 4, v_l_2090_);
lean_ctor_set(v___x_2111_, 2, v_v_1857_);
lean_ctor_set(v___x_2111_, 1, v_k_1856_);
lean_ctor_set(v___x_2111_, 0, v___x_2004_);
v___x_2122_ = v___x_2111_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v___x_2004_);
lean_ctor_set(v_reuseFailAlloc_2126_, 1, v_k_1856_);
lean_ctor_set(v_reuseFailAlloc_2126_, 2, v_v_1857_);
lean_ctor_set(v_reuseFailAlloc_2126_, 3, v_l_2090_);
lean_ctor_set(v_reuseFailAlloc_2126_, 4, v_l_2090_);
v___x_2122_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
lean_object* v___x_2124_; 
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 4, v___x_2122_);
lean_ctor_set(v___x_1861_, 3, v___x_2120_);
lean_ctor_set(v___x_1861_, 2, v_v_2114_);
lean_ctor_set(v___x_1861_, 1, v_k_2113_);
lean_ctor_set(v___x_1861_, 0, v___x_2118_);
v___x_2124_ = v___x_1861_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v___x_2118_);
lean_ctor_set(v_reuseFailAlloc_2125_, 1, v_k_2113_);
lean_ctor_set(v_reuseFailAlloc_2125_, 2, v_v_2114_);
lean_ctor_set(v_reuseFailAlloc_2125_, 3, v___x_2120_);
lean_ctor_set(v_reuseFailAlloc_2125_, 4, v___x_2122_);
v___x_2124_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
return v___x_2124_;
}
}
}
}
}
}
else
{
lean_object* v___x_2136_; lean_object* v___x_2138_; 
v___x_2136_ = lean_unsigned_to_nat(2u);
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 4, v_r_2107_);
lean_ctor_set(v___x_1861_, 3, v_impl_2003_);
lean_ctor_set(v___x_1861_, 0, v___x_2136_);
v___x_2138_ = v___x_1861_;
goto v_reusejp_2137_;
}
else
{
lean_object* v_reuseFailAlloc_2139_; 
v_reuseFailAlloc_2139_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2139_, 0, v___x_2136_);
lean_ctor_set(v_reuseFailAlloc_2139_, 1, v_k_1856_);
lean_ctor_set(v_reuseFailAlloc_2139_, 2, v_v_1857_);
lean_ctor_set(v_reuseFailAlloc_2139_, 3, v_impl_2003_);
lean_ctor_set(v_reuseFailAlloc_2139_, 4, v_r_2107_);
v___x_2138_ = v_reuseFailAlloc_2139_;
goto v_reusejp_2137_;
}
v_reusejp_2137_:
{
return v___x_2138_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2141_; lean_object* v___x_2142_; 
v___x_2141_ = lean_unsigned_to_nat(1u);
v___x_2142_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2141_);
lean_ctor_set(v___x_2142_, 1, v_k_1852_);
lean_ctor_set(v___x_2142_, 2, v_v_1853_);
lean_ctor_set(v___x_2142_, 3, v_t_1854_);
lean_ctor_set(v___x_2142_, 4, v_t_1854_);
return v___x_2142_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg(lean_object* v_k_2143_, lean_object* v_t_2144_){
_start:
{
if (lean_obj_tag(v_t_2144_) == 0)
{
lean_object* v_k_2145_; lean_object* v_l_2146_; lean_object* v_r_2147_; uint8_t v___x_2148_; 
v_k_2145_ = lean_ctor_get(v_t_2144_, 1);
v_l_2146_ = lean_ctor_get(v_t_2144_, 3);
v_r_2147_ = lean_ctor_get(v_t_2144_, 4);
v___x_2148_ = lean_nat_dec_lt(v_k_2143_, v_k_2145_);
if (v___x_2148_ == 0)
{
uint8_t v___x_2149_; 
v___x_2149_ = lean_nat_dec_eq(v_k_2143_, v_k_2145_);
if (v___x_2149_ == 0)
{
v_t_2144_ = v_r_2147_;
goto _start;
}
else
{
return v___x_2149_;
}
}
else
{
v_t_2144_ = v_l_2146_;
goto _start;
}
}
else
{
uint8_t v___x_2152_; 
v___x_2152_ = 0;
return v___x_2152_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg___boxed(lean_object* v_k_2153_, lean_object* v_t_2154_){
_start:
{
uint8_t v_res_2155_; lean_object* v_r_2156_; 
v_res_2155_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg(v_k_2153_, v_t_2154_);
lean_dec(v_t_2154_);
lean_dec(v_k_2153_);
v_r_2156_ = lean_box(v_res_2155_);
return v_r_2156_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2_spec__2(lean_object* v_y_2157_, lean_object* v_x_2158_, size_t v_x_2159_, size_t v_x_2160_){
_start:
{
if (lean_obj_tag(v_x_2158_) == 0)
{
lean_object* v_cs_2161_; size_t v_j_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; uint8_t v___x_2165_; 
v_cs_2161_ = lean_ctor_get(v_x_2158_, 0);
v_j_2162_ = lean_usize_shift_right(v_x_2159_, v_x_2160_);
v___x_2163_ = lean_usize_to_nat(v_j_2162_);
v___x_2164_ = lean_array_get_size(v_cs_2161_);
v___x_2165_ = lean_nat_dec_lt(v___x_2163_, v___x_2164_);
if (v___x_2165_ == 0)
{
lean_dec(v___x_2163_);
lean_dec(v_y_2157_);
return v_x_2158_;
}
else
{
lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2183_; 
lean_inc_ref(v_cs_2161_);
v_isSharedCheck_2183_ = !lean_is_exclusive(v_x_2158_);
if (v_isSharedCheck_2183_ == 0)
{
lean_object* v_unused_2184_; 
v_unused_2184_ = lean_ctor_get(v_x_2158_, 0);
lean_dec(v_unused_2184_);
v___x_2167_ = v_x_2158_;
v_isShared_2168_ = v_isSharedCheck_2183_;
goto v_resetjp_2166_;
}
else
{
lean_dec(v_x_2158_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2183_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
size_t v___x_2169_; size_t v___x_2170_; size_t v___x_2171_; size_t v_i_2172_; size_t v___x_2173_; size_t v_shift_2174_; lean_object* v_v_2175_; lean_object* v___x_2176_; lean_object* v_xs_x27_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2181_; 
v___x_2169_ = ((size_t)1ULL);
v___x_2170_ = lean_usize_shift_left(v___x_2169_, v_x_2160_);
v___x_2171_ = lean_usize_sub(v___x_2170_, v___x_2169_);
v_i_2172_ = lean_usize_land(v_x_2159_, v___x_2171_);
v___x_2173_ = ((size_t)5ULL);
v_shift_2174_ = lean_usize_sub(v_x_2160_, v___x_2173_);
v_v_2175_ = lean_array_fget(v_cs_2161_, v___x_2163_);
v___x_2176_ = lean_box(0);
v_xs_x27_2177_ = lean_array_fset(v_cs_2161_, v___x_2163_, v___x_2176_);
v___x_2178_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2_spec__2(v_y_2157_, v_v_2175_, v_i_2172_, v_shift_2174_);
v___x_2179_ = lean_array_fset(v_xs_x27_2177_, v___x_2163_, v___x_2178_);
lean_dec(v___x_2163_);
if (v_isShared_2168_ == 0)
{
lean_ctor_set(v___x_2167_, 0, v___x_2179_);
v___x_2181_ = v___x_2167_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v___x_2179_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
}
else
{
lean_object* v_vs_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; uint8_t v___x_2188_; 
v_vs_2185_ = lean_ctor_get(v_x_2158_, 0);
v___x_2186_ = lean_usize_to_nat(v_x_2159_);
v___x_2187_ = lean_array_get_size(v_vs_2185_);
v___x_2188_ = lean_nat_dec_lt(v___x_2186_, v___x_2187_);
if (v___x_2188_ == 0)
{
lean_dec(v___x_2186_);
lean_dec(v_y_2157_);
return v_x_2158_;
}
else
{
lean_object* v___x_2190_; uint8_t v_isShared_2191_; uint8_t v_isSharedCheck_2203_; 
lean_inc_ref(v_vs_2185_);
v_isSharedCheck_2203_ = !lean_is_exclusive(v_x_2158_);
if (v_isSharedCheck_2203_ == 0)
{
lean_object* v_unused_2204_; 
v_unused_2204_ = lean_ctor_get(v_x_2158_, 0);
lean_dec(v_unused_2204_);
v___x_2190_ = v_x_2158_;
v_isShared_2191_ = v_isSharedCheck_2203_;
goto v_resetjp_2189_;
}
else
{
lean_dec(v_x_2158_);
v___x_2190_ = lean_box(0);
v_isShared_2191_ = v_isSharedCheck_2203_;
goto v_resetjp_2189_;
}
v_resetjp_2189_:
{
lean_object* v_v_2192_; lean_object* v___x_2193_; lean_object* v_xs_x27_2194_; lean_object* v___y_2196_; uint8_t v___x_2201_; 
v_v_2192_ = lean_array_fget(v_vs_2185_, v___x_2186_);
v___x_2193_ = lean_box(0);
v_xs_x27_2194_ = lean_array_fset(v_vs_2185_, v___x_2186_, v___x_2193_);
v___x_2201_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg(v_y_2157_, v_v_2192_);
if (v___x_2201_ == 0)
{
lean_object* v___x_2202_; 
v___x_2202_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1___redArg(v_y_2157_, v___x_2193_, v_v_2192_);
v___y_2196_ = v___x_2202_;
goto v___jp_2195_;
}
else
{
lean_dec(v_y_2157_);
v___y_2196_ = v_v_2192_;
goto v___jp_2195_;
}
v___jp_2195_:
{
lean_object* v___x_2197_; lean_object* v___x_2199_; 
v___x_2197_ = lean_array_fset(v_xs_x27_2194_, v___x_2186_, v___y_2196_);
lean_dec(v___x_2186_);
if (v_isShared_2191_ == 0)
{
lean_ctor_set(v___x_2190_, 0, v___x_2197_);
v___x_2199_ = v___x_2190_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v___x_2197_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
return v___x_2199_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2_spec__2___boxed(lean_object* v_y_2205_, lean_object* v_x_2206_, lean_object* v_x_2207_, lean_object* v_x_2208_){
_start:
{
size_t v_x_4518__boxed_2209_; size_t v_x_4519__boxed_2210_; lean_object* v_res_2211_; 
v_x_4518__boxed_2209_ = lean_unbox_usize(v_x_2207_);
lean_dec(v_x_2207_);
v_x_4519__boxed_2210_ = lean_unbox_usize(v_x_2208_);
lean_dec(v_x_2208_);
v_res_2211_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2_spec__2(v_y_2205_, v_x_2206_, v_x_4518__boxed_2209_, v_x_4519__boxed_2210_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2(lean_object* v_y_2212_, lean_object* v_t_2213_, lean_object* v_i_2214_){
_start:
{
lean_object* v_root_2215_; lean_object* v_tail_2216_; lean_object* v_size_2217_; size_t v_shift_2218_; lean_object* v_tailOff_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2246_; 
v_root_2215_ = lean_ctor_get(v_t_2213_, 0);
v_tail_2216_ = lean_ctor_get(v_t_2213_, 1);
v_size_2217_ = lean_ctor_get(v_t_2213_, 2);
v_shift_2218_ = lean_ctor_get_usize(v_t_2213_, 4);
v_tailOff_2219_ = lean_ctor_get(v_t_2213_, 3);
v_isSharedCheck_2246_ = !lean_is_exclusive(v_t_2213_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2221_ = v_t_2213_;
v_isShared_2222_ = v_isSharedCheck_2246_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_tailOff_2219_);
lean_inc(v_size_2217_);
lean_inc(v_tail_2216_);
lean_inc(v_root_2215_);
lean_dec(v_t_2213_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2246_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
uint8_t v___x_2223_; 
v___x_2223_ = lean_nat_dec_le(v_tailOff_2219_, v_i_2214_);
if (v___x_2223_ == 0)
{
size_t v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2227_; 
v___x_2224_ = lean_usize_of_nat(v_i_2214_);
v___x_2225_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2_spec__2(v_y_2212_, v_root_2215_, v___x_2224_, v_shift_2218_);
if (v_isShared_2222_ == 0)
{
lean_ctor_set(v___x_2221_, 0, v___x_2225_);
v___x_2227_ = v___x_2221_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v___x_2225_);
lean_ctor_set(v_reuseFailAlloc_2228_, 1, v_tail_2216_);
lean_ctor_set(v_reuseFailAlloc_2228_, 2, v_size_2217_);
lean_ctor_set(v_reuseFailAlloc_2228_, 3, v_tailOff_2219_);
lean_ctor_set_usize(v_reuseFailAlloc_2228_, 4, v_shift_2218_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
else
{
lean_object* v___x_2229_; lean_object* v___x_2230_; uint8_t v___x_2231_; 
v___x_2229_ = lean_nat_sub(v_i_2214_, v_tailOff_2219_);
v___x_2230_ = lean_array_get_size(v_tail_2216_);
v___x_2231_ = lean_nat_dec_lt(v___x_2229_, v___x_2230_);
if (v___x_2231_ == 0)
{
lean_object* v___x_2233_; 
lean_dec(v___x_2229_);
lean_dec(v_y_2212_);
if (v_isShared_2222_ == 0)
{
v___x_2233_ = v___x_2221_;
goto v_reusejp_2232_;
}
else
{
lean_object* v_reuseFailAlloc_2234_; 
v_reuseFailAlloc_2234_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2234_, 0, v_root_2215_);
lean_ctor_set(v_reuseFailAlloc_2234_, 1, v_tail_2216_);
lean_ctor_set(v_reuseFailAlloc_2234_, 2, v_size_2217_);
lean_ctor_set(v_reuseFailAlloc_2234_, 3, v_tailOff_2219_);
lean_ctor_set_usize(v_reuseFailAlloc_2234_, 4, v_shift_2218_);
v___x_2233_ = v_reuseFailAlloc_2234_;
goto v_reusejp_2232_;
}
v_reusejp_2232_:
{
return v___x_2233_;
}
}
else
{
lean_object* v_v_2235_; lean_object* v___x_2236_; lean_object* v_xs_x27_2237_; lean_object* v___y_2239_; uint8_t v___x_2244_; 
v_v_2235_ = lean_array_fget(v_tail_2216_, v___x_2229_);
v___x_2236_ = lean_box(0);
v_xs_x27_2237_ = lean_array_fset(v_tail_2216_, v___x_2229_, v___x_2236_);
v___x_2244_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg(v_y_2212_, v_v_2235_);
if (v___x_2244_ == 0)
{
lean_object* v___x_2245_; 
v___x_2245_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1___redArg(v_y_2212_, v___x_2236_, v_v_2235_);
v___y_2239_ = v___x_2245_;
goto v___jp_2238_;
}
else
{
lean_dec(v_y_2212_);
v___y_2239_ = v_v_2235_;
goto v___jp_2238_;
}
v___jp_2238_:
{
lean_object* v___x_2240_; lean_object* v___x_2242_; 
v___x_2240_ = lean_array_fset(v_xs_x27_2237_, v___x_2229_, v___y_2239_);
lean_dec(v___x_2229_);
if (v_isShared_2222_ == 0)
{
lean_ctor_set(v___x_2221_, 1, v___x_2240_);
v___x_2242_ = v___x_2221_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v_root_2215_);
lean_ctor_set(v_reuseFailAlloc_2243_, 1, v___x_2240_);
lean_ctor_set(v_reuseFailAlloc_2243_, 2, v_size_2217_);
lean_ctor_set(v_reuseFailAlloc_2243_, 3, v_tailOff_2219_);
lean_ctor_set_usize(v_reuseFailAlloc_2243_, 4, v_shift_2218_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2___boxed(lean_object* v_y_2247_, lean_object* v_t_2248_, lean_object* v_i_2249_){
_start:
{
lean_object* v_res_2250_; 
v_res_2250_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2(v_y_2247_, v_t_2248_, v_i_2249_);
lean_dec(v_i_2249_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg___lam__0(lean_object* v_y_2251_, lean_object* v_x_2252_, lean_object* v_s_2253_){
_start:
{
lean_object* v_vars_2254_; lean_object* v_varMap_2255_; lean_object* v_vars_x27_2256_; lean_object* v_varMap_x27_2257_; lean_object* v_natToIntMap_2258_; lean_object* v_natDef_2259_; lean_object* v_dvds_2260_; lean_object* v_lowers_2261_; lean_object* v_uppers_2262_; lean_object* v_diseqs_2263_; lean_object* v_elimEqs_2264_; lean_object* v_elimStack_2265_; lean_object* v_occurs_2266_; lean_object* v_assignment_2267_; lean_object* v_nextCnstrId_2268_; uint8_t v_caseSplits_2269_; lean_object* v_conflict_x3f_2270_; lean_object* v_diseqSplits_2271_; lean_object* v_divMod_2272_; lean_object* v_toIntIds_2273_; lean_object* v_toIntInfos_2274_; lean_object* v_toIntTermMap_2275_; lean_object* v_toIntVarMap_2276_; uint8_t v_usedCommRing_2277_; lean_object* v_nonlinearOccs_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2286_; 
v_vars_2254_ = lean_ctor_get(v_s_2253_, 0);
v_varMap_2255_ = lean_ctor_get(v_s_2253_, 1);
v_vars_x27_2256_ = lean_ctor_get(v_s_2253_, 2);
v_varMap_x27_2257_ = lean_ctor_get(v_s_2253_, 3);
v_natToIntMap_2258_ = lean_ctor_get(v_s_2253_, 4);
v_natDef_2259_ = lean_ctor_get(v_s_2253_, 5);
v_dvds_2260_ = lean_ctor_get(v_s_2253_, 6);
v_lowers_2261_ = lean_ctor_get(v_s_2253_, 7);
v_uppers_2262_ = lean_ctor_get(v_s_2253_, 8);
v_diseqs_2263_ = lean_ctor_get(v_s_2253_, 9);
v_elimEqs_2264_ = lean_ctor_get(v_s_2253_, 10);
v_elimStack_2265_ = lean_ctor_get(v_s_2253_, 11);
v_occurs_2266_ = lean_ctor_get(v_s_2253_, 12);
v_assignment_2267_ = lean_ctor_get(v_s_2253_, 13);
v_nextCnstrId_2268_ = lean_ctor_get(v_s_2253_, 14);
v_caseSplits_2269_ = lean_ctor_get_uint8(v_s_2253_, sizeof(void*)*23);
v_conflict_x3f_2270_ = lean_ctor_get(v_s_2253_, 15);
v_diseqSplits_2271_ = lean_ctor_get(v_s_2253_, 16);
v_divMod_2272_ = lean_ctor_get(v_s_2253_, 17);
v_toIntIds_2273_ = lean_ctor_get(v_s_2253_, 18);
v_toIntInfos_2274_ = lean_ctor_get(v_s_2253_, 19);
v_toIntTermMap_2275_ = lean_ctor_get(v_s_2253_, 20);
v_toIntVarMap_2276_ = lean_ctor_get(v_s_2253_, 21);
v_usedCommRing_2277_ = lean_ctor_get_uint8(v_s_2253_, sizeof(void*)*23 + 1);
v_nonlinearOccs_2278_ = lean_ctor_get(v_s_2253_, 22);
v_isSharedCheck_2286_ = !lean_is_exclusive(v_s_2253_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2280_ = v_s_2253_;
v_isShared_2281_ = v_isSharedCheck_2286_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_nonlinearOccs_2278_);
lean_inc(v_toIntVarMap_2276_);
lean_inc(v_toIntTermMap_2275_);
lean_inc(v_toIntInfos_2274_);
lean_inc(v_toIntIds_2273_);
lean_inc(v_divMod_2272_);
lean_inc(v_diseqSplits_2271_);
lean_inc(v_conflict_x3f_2270_);
lean_inc(v_nextCnstrId_2268_);
lean_inc(v_assignment_2267_);
lean_inc(v_occurs_2266_);
lean_inc(v_elimStack_2265_);
lean_inc(v_elimEqs_2264_);
lean_inc(v_diseqs_2263_);
lean_inc(v_uppers_2262_);
lean_inc(v_lowers_2261_);
lean_inc(v_dvds_2260_);
lean_inc(v_natDef_2259_);
lean_inc(v_natToIntMap_2258_);
lean_inc(v_varMap_x27_2257_);
lean_inc(v_vars_x27_2256_);
lean_inc(v_varMap_2255_);
lean_inc(v_vars_2254_);
lean_dec(v_s_2253_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2286_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
lean_object* v___x_2282_; lean_object* v___x_2284_; 
v___x_2282_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2(v_y_2251_, v_occurs_2266_, v_x_2252_);
if (v_isShared_2281_ == 0)
{
lean_ctor_set(v___x_2280_, 12, v___x_2282_);
v___x_2284_ = v___x_2280_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(0, 23, 2);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v_vars_2254_);
lean_ctor_set(v_reuseFailAlloc_2285_, 1, v_varMap_2255_);
lean_ctor_set(v_reuseFailAlloc_2285_, 2, v_vars_x27_2256_);
lean_ctor_set(v_reuseFailAlloc_2285_, 3, v_varMap_x27_2257_);
lean_ctor_set(v_reuseFailAlloc_2285_, 4, v_natToIntMap_2258_);
lean_ctor_set(v_reuseFailAlloc_2285_, 5, v_natDef_2259_);
lean_ctor_set(v_reuseFailAlloc_2285_, 6, v_dvds_2260_);
lean_ctor_set(v_reuseFailAlloc_2285_, 7, v_lowers_2261_);
lean_ctor_set(v_reuseFailAlloc_2285_, 8, v_uppers_2262_);
lean_ctor_set(v_reuseFailAlloc_2285_, 9, v_diseqs_2263_);
lean_ctor_set(v_reuseFailAlloc_2285_, 10, v_elimEqs_2264_);
lean_ctor_set(v_reuseFailAlloc_2285_, 11, v_elimStack_2265_);
lean_ctor_set(v_reuseFailAlloc_2285_, 12, v___x_2282_);
lean_ctor_set(v_reuseFailAlloc_2285_, 13, v_assignment_2267_);
lean_ctor_set(v_reuseFailAlloc_2285_, 14, v_nextCnstrId_2268_);
lean_ctor_set(v_reuseFailAlloc_2285_, 15, v_conflict_x3f_2270_);
lean_ctor_set(v_reuseFailAlloc_2285_, 16, v_diseqSplits_2271_);
lean_ctor_set(v_reuseFailAlloc_2285_, 17, v_divMod_2272_);
lean_ctor_set(v_reuseFailAlloc_2285_, 18, v_toIntIds_2273_);
lean_ctor_set(v_reuseFailAlloc_2285_, 19, v_toIntInfos_2274_);
lean_ctor_set(v_reuseFailAlloc_2285_, 20, v_toIntTermMap_2275_);
lean_ctor_set(v_reuseFailAlloc_2285_, 21, v_toIntVarMap_2276_);
lean_ctor_set(v_reuseFailAlloc_2285_, 22, v_nonlinearOccs_2278_);
lean_ctor_set_uint8(v_reuseFailAlloc_2285_, sizeof(void*)*23, v_caseSplits_2269_);
lean_ctor_set_uint8(v_reuseFailAlloc_2285_, sizeof(void*)*23 + 1, v_usedCommRing_2277_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
return v___x_2284_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg___lam__0___boxed(lean_object* v_y_2287_, lean_object* v_x_2288_, lean_object* v_s_2289_){
_start:
{
lean_object* v_res_2290_; 
v_res_2290_ = l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg___lam__0(v_y_2287_, v_x_2288_, v_s_2289_);
lean_dec(v_x_2288_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg(lean_object* v_x_2291_, lean_object* v_y_2292_, lean_object* v_a_2293_, lean_object* v_a_2294_, lean_object* v_a_2295_){
_start:
{
lean_object* v___x_2297_; 
v___x_2297_ = l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___redArg(v_x_2291_, v_a_2293_, v_a_2294_, v_a_2295_);
if (lean_obj_tag(v___x_2297_) == 0)
{
lean_object* v_a_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2310_; 
v_a_2298_ = lean_ctor_get(v___x_2297_, 0);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2297_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2300_ = v___x_2297_;
v_isShared_2301_ = v_isSharedCheck_2310_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_a_2298_);
lean_dec(v___x_2297_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2310_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
uint8_t v___x_2302_; 
v___x_2302_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg(v_y_2292_, v_a_2298_);
lean_dec(v_a_2298_);
if (v___x_2302_ == 0)
{
lean_object* v___f_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
lean_del_object(v___x_2300_);
v___f_2303_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2303_, 0, v_y_2292_);
lean_closure_set(v___f_2303_, 1, v_x_2291_);
v___x_2304_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_2305_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2304_, v___f_2303_, v_a_2293_, v_a_2295_);
return v___x_2305_;
}
else
{
lean_object* v___x_2306_; lean_object* v___x_2308_; 
lean_dec(v_y_2292_);
lean_dec(v_x_2291_);
v___x_2306_ = lean_box(0);
if (v_isShared_2301_ == 0)
{
lean_ctor_set(v___x_2300_, 0, v___x_2306_);
v___x_2308_ = v___x_2300_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v___x_2306_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
}
else
{
lean_object* v_a_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2318_; 
lean_dec(v_y_2292_);
lean_dec(v_x_2291_);
v_a_2311_ = lean_ctor_get(v___x_2297_, 0);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2297_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2313_ = v___x_2297_;
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_a_2311_);
lean_dec(v___x_2297_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
lean_object* v___x_2316_; 
if (v_isShared_2314_ == 0)
{
v___x_2316_ = v___x_2313_;
goto v_reusejp_2315_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_a_2311_);
v___x_2316_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2315_;
}
v_reusejp_2315_:
{
return v___x_2316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg___boxed(lean_object* v_x_2319_, lean_object* v_y_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_){
_start:
{
lean_object* v_res_2325_; 
v_res_2325_ = l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg(v_x_2319_, v_y_2320_, v_a_2321_, v_a_2322_, v_a_2323_);
lean_dec(v_a_2323_);
lean_dec_ref(v_a_2322_);
lean_dec(v_a_2321_);
return v_res_2325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc(lean_object* v_x_2326_, lean_object* v_y_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_, lean_object* v_a_2330_, lean_object* v_a_2331_, lean_object* v_a_2332_, lean_object* v_a_2333_, lean_object* v_a_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_){
_start:
{
lean_object* v___x_2339_; 
v___x_2339_ = l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg(v_x_2326_, v_y_2327_, v_a_2328_, v_a_2336_, v_a_2337_);
return v___x_2339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___boxed(lean_object* v_x_2340_, lean_object* v_y_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_, lean_object* v_a_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_){
_start:
{
lean_object* v_res_2353_; 
v_res_2353_ = l_Lean_Meta_Grind_Arith_Cutsat_addOcc(v_x_2340_, v_y_2341_, v_a_2342_, v_a_2343_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_, v_a_2350_, v_a_2351_);
lean_dec(v_a_2351_);
lean_dec_ref(v_a_2350_);
lean_dec(v_a_2349_);
lean_dec_ref(v_a_2348_);
lean_dec(v_a_2347_);
lean_dec_ref(v_a_2346_);
lean_dec(v_a_2345_);
lean_dec_ref(v_a_2344_);
lean_dec(v_a_2343_);
lean_dec(v_a_2342_);
return v_res_2353_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0(lean_object* v_00_u03b2_2354_, lean_object* v_k_2355_, lean_object* v_t_2356_){
_start:
{
uint8_t v___x_2357_; 
v___x_2357_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg(v_k_2355_, v_t_2356_);
return v___x_2357_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___boxed(lean_object* v_00_u03b2_2358_, lean_object* v_k_2359_, lean_object* v_t_2360_){
_start:
{
uint8_t v_res_2361_; lean_object* v_r_2362_; 
v_res_2361_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0(v_00_u03b2_2358_, v_k_2359_, v_t_2360_);
lean_dec(v_t_2360_);
lean_dec(v_k_2359_);
v_r_2362_ = lean_box(v_res_2361_);
return v_r_2362_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1(lean_object* v_00_u03b2_2363_, lean_object* v_k_2364_, lean_object* v_v_2365_, lean_object* v_t_2366_, lean_object* v_hl_2367_){
_start:
{
lean_object* v___x_2368_; 
v___x_2368_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1___redArg(v_k_2364_, v_v_2365_, v_t_2366_);
return v___x_2368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_updateOccs_go___redArg(lean_object* v_y_2369_, lean_object* v_p_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_){
_start:
{
if (lean_obj_tag(v_p_2370_) == 1)
{
lean_object* v_v_2375_; lean_object* v_p_2376_; lean_object* v___x_2377_; 
v_v_2375_ = lean_ctor_get(v_p_2370_, 1);
lean_inc(v_v_2375_);
v_p_2376_ = lean_ctor_get(v_p_2370_, 2);
lean_inc_ref(v_p_2376_);
lean_dec_ref(v_p_2370_);
lean_inc(v_y_2369_);
v___x_2377_ = l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg(v_v_2375_, v_y_2369_, v_a_2371_, v_a_2372_, v_a_2373_);
if (lean_obj_tag(v___x_2377_) == 0)
{
lean_dec_ref(v___x_2377_);
v_p_2370_ = v_p_2376_;
goto _start;
}
else
{
lean_dec_ref(v_p_2376_);
lean_dec(v_y_2369_);
return v___x_2377_;
}
}
else
{
lean_object* v___x_2379_; lean_object* v___x_2380_; 
lean_dec_ref(v_p_2370_);
lean_dec(v_y_2369_);
v___x_2379_ = lean_box(0);
v___x_2380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2379_);
return v___x_2380_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_updateOccs_go___redArg___boxed(lean_object* v_y_2381_, lean_object* v_p_2382_, lean_object* v_a_2383_, lean_object* v_a_2384_, lean_object* v_a_2385_, lean_object* v_a_2386_){
_start:
{
lean_object* v_res_2387_; 
v_res_2387_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_updateOccs_go___redArg(v_y_2381_, v_p_2382_, v_a_2383_, v_a_2384_, v_a_2385_);
lean_dec(v_a_2385_);
lean_dec_ref(v_a_2384_);
lean_dec(v_a_2383_);
return v_res_2387_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_updateOccs_go(lean_object* v_y_2388_, lean_object* v_p_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_){
_start:
{
lean_object* v___x_2401_; 
v___x_2401_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_updateOccs_go___redArg(v_y_2388_, v_p_2389_, v_a_2390_, v_a_2398_, v_a_2399_);
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_updateOccs_go___boxed(lean_object* v_y_2402_, lean_object* v_p_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_){
_start:
{
lean_object* v_res_2415_; 
v_res_2415_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_updateOccs_go(v_y_2402_, v_p_2403_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_, v_a_2408_, v_a_2409_, v_a_2410_, v_a_2411_, v_a_2412_, v_a_2413_);
lean_dec(v_a_2413_);
lean_dec_ref(v_a_2412_);
lean_dec(v_a_2411_);
lean_dec_ref(v_a_2410_);
lean_dec(v_a_2409_);
lean_dec_ref(v_a_2408_);
lean_dec(v_a_2407_);
lean_dec_ref(v_a_2406_);
lean_dec(v_a_2405_);
lean_dec(v_a_2404_);
return v_res_2415_;
}
}
static lean_object* _init_l_Int_Linear_Poly_updateOccs___redArg___closed__0(void){
_start:
{
lean_object* v___x_2416_; 
v___x_2416_ = lean_mk_string_unchecked("`grind` internal error, unexpected constant polynomial", 54, 54);
return v___x_2416_;
}
}
static lean_object* _init_l_Int_Linear_Poly_updateOccs___redArg___closed__1(void){
_start:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2417_ = lean_obj_once(&l_Int_Linear_Poly_updateOccs___redArg___closed__0, &l_Int_Linear_Poly_updateOccs___redArg___closed__0_once, _init_l_Int_Linear_Poly_updateOccs___redArg___closed__0);
v___x_2418_ = l_Lean_stringToMessageData(v___x_2417_);
return v___x_2418_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_updateOccs___redArg(lean_object* v_p_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_, lean_object* v_a_2423_, lean_object* v_a_2424_){
_start:
{
if (lean_obj_tag(v_p_2419_) == 1)
{
lean_object* v_v_2426_; lean_object* v_p_2427_; lean_object* v___x_2428_; 
v_v_2426_ = lean_ctor_get(v_p_2419_, 1);
lean_inc(v_v_2426_);
v_p_2427_ = lean_ctor_get(v_p_2419_, 2);
lean_inc_ref(v_p_2427_);
lean_dec_ref(v_p_2419_);
v___x_2428_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_updateOccs_go___redArg(v_v_2426_, v_p_2427_, v_a_2420_, v_a_2423_, v_a_2424_);
return v___x_2428_;
}
else
{
lean_object* v___x_2429_; lean_object* v___x_2430_; 
lean_dec_ref(v_p_2419_);
v___x_2429_ = lean_obj_once(&l_Int_Linear_Poly_updateOccs___redArg___closed__1, &l_Int_Linear_Poly_updateOccs___redArg___closed__1_once, _init_l_Int_Linear_Poly_updateOccs___redArg___closed__1);
v___x_2430_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(v___x_2429_, v_a_2421_, v_a_2422_, v_a_2423_, v_a_2424_);
return v___x_2430_;
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_updateOccs___redArg___boxed(lean_object* v_p_2431_, lean_object* v_a_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_){
_start:
{
lean_object* v_res_2438_; 
v_res_2438_ = l_Int_Linear_Poly_updateOccs___redArg(v_p_2431_, v_a_2432_, v_a_2433_, v_a_2434_, v_a_2435_, v_a_2436_);
lean_dec(v_a_2436_);
lean_dec_ref(v_a_2435_);
lean_dec(v_a_2434_);
lean_dec_ref(v_a_2433_);
lean_dec(v_a_2432_);
return v_res_2438_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_updateOccs(lean_object* v_p_2439_, lean_object* v_a_2440_, lean_object* v_a_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_, lean_object* v_a_2444_, lean_object* v_a_2445_, lean_object* v_a_2446_, lean_object* v_a_2447_, lean_object* v_a_2448_, lean_object* v_a_2449_){
_start:
{
lean_object* v___x_2451_; 
v___x_2451_ = l_Int_Linear_Poly_updateOccs___redArg(v_p_2439_, v_a_2440_, v_a_2446_, v_a_2447_, v_a_2448_, v_a_2449_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_updateOccs___boxed(lean_object* v_p_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_){
_start:
{
lean_object* v_res_2464_; 
v_res_2464_ = l_Int_Linear_Poly_updateOccs(v_p_2452_, v_a_2453_, v_a_2454_, v_a_2455_, v_a_2456_, v_a_2457_, v_a_2458_, v_a_2459_, v_a_2460_, v_a_2461_, v_a_2462_);
lean_dec(v_a_2462_);
lean_dec_ref(v_a_2461_);
lean_dec(v_a_2460_);
lean_dec_ref(v_a_2459_);
lean_dec(v_a_2458_);
lean_dec_ref(v_a_2457_);
lean_dec(v_a_2456_);
lean_dec_ref(v_a_2455_);
lean_dec(v_a_2454_);
lean_dec(v_a_2453_);
return v_res_2464_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_eval_x3f_go_spec__0(lean_object* v_a_2465_){
_start:
{
lean_object* v___x_2466_; 
v___x_2466_ = l_Rat_ofInt(v_a_2465_);
return v___x_2466_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_eval_x3f_go(lean_object* v_a_2467_, lean_object* v_v_2468_, lean_object* v_a_2469_){
_start:
{
if (lean_obj_tag(v_a_2469_) == 0)
{
lean_object* v_k_2470_; lean_object* v___x_2472_; uint8_t v_isShared_2473_; uint8_t v_isSharedCheck_2479_; 
v_k_2470_ = lean_ctor_get(v_a_2469_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v_a_2469_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2472_ = v_a_2469_;
v_isShared_2473_ = v_isSharedCheck_2479_;
goto v_resetjp_2471_;
}
else
{
lean_inc(v_k_2470_);
lean_dec(v_a_2469_);
v___x_2472_ = lean_box(0);
v_isShared_2473_ = v_isSharedCheck_2479_;
goto v_resetjp_2471_;
}
v_resetjp_2471_:
{
lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2477_; 
v___x_2474_ = l_Rat_ofInt(v_k_2470_);
v___x_2475_ = l_Rat_add(v_v_2468_, v___x_2474_);
if (v_isShared_2473_ == 0)
{
lean_ctor_set_tag(v___x_2472_, 1);
lean_ctor_set(v___x_2472_, 0, v___x_2475_);
v___x_2477_ = v___x_2472_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(1, 1, 0);
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
else
{
lean_object* v_k_2480_; lean_object* v_v_2481_; lean_object* v_p_2482_; lean_object* v_size_2483_; uint8_t v___x_2484_; 
v_k_2480_ = lean_ctor_get(v_a_2469_, 0);
lean_inc(v_k_2480_);
v_v_2481_ = lean_ctor_get(v_a_2469_, 1);
lean_inc(v_v_2481_);
v_p_2482_ = lean_ctor_get(v_a_2469_, 2);
lean_inc_ref(v_p_2482_);
lean_dec_ref(v_a_2469_);
v_size_2483_ = lean_ctor_get(v_a_2467_, 2);
v___x_2484_ = lean_nat_dec_lt(v_v_2481_, v_size_2483_);
if (v___x_2484_ == 0)
{
lean_object* v___x_2485_; 
lean_dec_ref(v_p_2482_);
lean_dec(v_v_2481_);
lean_dec(v_k_2480_);
lean_dec_ref(v_v_2468_);
v___x_2485_ = lean_box(0);
return v___x_2485_;
}
else
{
lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2486_ = l_Rat_ofInt(v_k_2480_);
v___x_2487_ = l_instInhabitedRat;
v___x_2488_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2487_, v_a_2467_, v_v_2481_);
lean_dec(v_v_2481_);
v___x_2489_ = l_Rat_mul(v___x_2486_, v___x_2488_);
lean_dec_ref(v___x_2486_);
v___x_2490_ = l_Rat_add(v_v_2468_, v___x_2489_);
v_v_2468_ = v___x_2490_;
v_a_2469_ = v_p_2482_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_eval_x3f_go___boxed(lean_object* v_a_2492_, lean_object* v_v_2493_, lean_object* v_a_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_eval_x3f_go(v_a_2492_, v_v_2493_, v_a_2494_);
lean_dec_ref(v_a_2492_);
return v_res_2495_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Int_Linear_Poly_eval_x3f_spec__0(lean_object* v_a_2496_){
_start:
{
lean_object* v___x_2497_; lean_object* v___x_2498_; 
v___x_2497_ = lean_nat_to_int(v_a_2496_);
v___x_2498_ = l_Rat_ofInt(v___x_2497_);
return v___x_2498_;
}
}
static lean_object* _init_l_Int_Linear_Poly_eval_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_2499_; lean_object* v___x_2500_; 
v___x_2499_ = lean_unsigned_to_nat(0u);
v___x_2500_ = l_Nat_cast___at___00Int_Linear_Poly_eval_x3f_spec__0(v___x_2499_);
return v___x_2500_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_eval_x3f___redArg(lean_object* v_p_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_, lean_object* v_a_2504_){
_start:
{
lean_object* v___x_2506_; 
v___x_2506_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_2502_, v_a_2503_, v_a_2504_);
if (lean_obj_tag(v___x_2506_) == 0)
{
lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2517_; 
v_a_2507_ = lean_ctor_get(v___x_2506_, 0);
v_isSharedCheck_2517_ = !lean_is_exclusive(v___x_2506_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2509_ = v___x_2506_;
v_isShared_2510_ = v_isSharedCheck_2517_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_dec(v___x_2506_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2517_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v_assignment_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2515_; 
v_assignment_2511_ = lean_ctor_get(v_a_2507_, 13);
lean_inc_ref(v_assignment_2511_);
lean_dec(v_a_2507_);
v___x_2512_ = lean_obj_once(&l_Int_Linear_Poly_eval_x3f___redArg___closed__0, &l_Int_Linear_Poly_eval_x3f___redArg___closed__0_once, _init_l_Int_Linear_Poly_eval_x3f___redArg___closed__0);
v___x_2513_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Linear_Poly_eval_x3f_go(v_assignment_2511_, v___x_2512_, v_p_2501_);
lean_dec_ref(v_assignment_2511_);
if (v_isShared_2510_ == 0)
{
lean_ctor_set(v___x_2509_, 0, v___x_2513_);
v___x_2515_ = v___x_2509_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2516_; 
v_reuseFailAlloc_2516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2516_, 0, v___x_2513_);
v___x_2515_ = v_reuseFailAlloc_2516_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
return v___x_2515_;
}
}
}
else
{
lean_object* v_a_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2525_; 
lean_dec_ref(v_p_2501_);
v_a_2518_ = lean_ctor_get(v___x_2506_, 0);
v_isSharedCheck_2525_ = !lean_is_exclusive(v___x_2506_);
if (v_isSharedCheck_2525_ == 0)
{
v___x_2520_ = v___x_2506_;
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_a_2518_);
lean_dec(v___x_2506_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v___x_2523_; 
if (v_isShared_2521_ == 0)
{
v___x_2523_ = v___x_2520_;
goto v_reusejp_2522_;
}
else
{
lean_object* v_reuseFailAlloc_2524_; 
v_reuseFailAlloc_2524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2524_, 0, v_a_2518_);
v___x_2523_ = v_reuseFailAlloc_2524_;
goto v_reusejp_2522_;
}
v_reusejp_2522_:
{
return v___x_2523_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_eval_x3f___redArg___boxed(lean_object* v_p_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_){
_start:
{
lean_object* v_res_2531_; 
v_res_2531_ = l_Int_Linear_Poly_eval_x3f___redArg(v_p_2526_, v_a_2527_, v_a_2528_, v_a_2529_);
lean_dec(v_a_2529_);
lean_dec_ref(v_a_2528_);
lean_dec(v_a_2527_);
return v_res_2531_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_eval_x3f(lean_object* v_p_2532_, lean_object* v_a_2533_, lean_object* v_a_2534_, lean_object* v_a_2535_, lean_object* v_a_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_, lean_object* v_a_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_, lean_object* v_a_2542_){
_start:
{
lean_object* v___x_2544_; 
v___x_2544_ = l_Int_Linear_Poly_eval_x3f___redArg(v_p_2532_, v_a_2533_, v_a_2541_, v_a_2542_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_eval_x3f___boxed(lean_object* v_p_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_, lean_object* v_a_2550_, lean_object* v_a_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_){
_start:
{
lean_object* v_res_2557_; 
v_res_2557_ = l_Int_Linear_Poly_eval_x3f(v_p_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_, v_a_2551_, v_a_2552_, v_a_2553_, v_a_2554_, v_a_2555_);
lean_dec(v_a_2555_);
lean_dec_ref(v_a_2554_);
lean_dec(v_a_2553_);
lean_dec_ref(v_a_2552_);
lean_dec(v_a_2551_);
lean_dec_ref(v_a_2550_);
lean_dec(v_a_2549_);
lean_dec_ref(v_a_2548_);
lean_dec(v_a_2547_);
lean_dec(v_a_2546_);
return v_res_2557_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isUnsat(lean_object* v_c_2558_){
_start:
{
lean_object* v_p_2559_; uint8_t v___x_2560_; 
v_p_2559_ = lean_ctor_get(v_c_2558_, 0);
v___x_2560_ = l_Int_Linear_Poly_isUnsatLe(v_p_2559_);
return v___x_2560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isUnsat___boxed(lean_object* v_c_2561_){
_start:
{
uint8_t v_res_2562_; lean_object* v_r_2563_; 
v_res_2562_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isUnsat(v_c_2561_);
lean_dec_ref(v_c_2561_);
v_r_2563_ = lean_box(v_res_2562_);
return v_r_2563_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isUnsat(lean_object* v_c_2564_){
_start:
{
lean_object* v_d_2565_; lean_object* v_p_2566_; uint8_t v___x_2567_; 
v_d_2565_ = lean_ctor_get(v_c_2564_, 0);
lean_inc(v_d_2565_);
v_p_2566_ = lean_ctor_get(v_c_2564_, 1);
lean_inc_ref(v_p_2566_);
lean_dec_ref(v_c_2564_);
v___x_2567_ = l_Int_Linear_Poly_isUnsatDvd(v_d_2565_, v_p_2566_);
lean_dec_ref(v_p_2566_);
return v___x_2567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isUnsat___boxed(lean_object* v_c_2568_){
_start:
{
uint8_t v_res_2569_; lean_object* v_r_2570_; 
v_res_2569_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isUnsat(v_c_2568_);
v_r_2570_ = lean_box(v_res_2569_);
return v_r_2570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___redArg(lean_object* v_c_2571_, lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_){
_start:
{
lean_object* v_d_2576_; lean_object* v_p_2577_; lean_object* v___x_2578_; 
v_d_2576_ = lean_ctor_get(v_c_2571_, 0);
lean_inc(v_d_2576_);
v_p_2577_ = lean_ctor_get(v_c_2571_, 1);
lean_inc_ref(v_p_2577_);
lean_dec_ref(v_c_2571_);
v___x_2578_ = l_Int_Linear_Poly_eval_x3f___redArg(v_p_2577_, v_a_2572_, v_a_2573_, v_a_2574_);
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v_a_2579_; lean_object* v___x_2581_; uint8_t v_isShared_2582_; uint8_t v_isSharedCheck_2604_; 
v_a_2579_ = lean_ctor_get(v___x_2578_, 0);
v_isSharedCheck_2604_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2604_ == 0)
{
v___x_2581_ = v___x_2578_;
v_isShared_2582_ = v_isSharedCheck_2604_;
goto v_resetjp_2580_;
}
else
{
lean_inc(v_a_2579_);
lean_dec(v___x_2578_);
v___x_2581_ = lean_box(0);
v_isShared_2582_ = v_isSharedCheck_2604_;
goto v_resetjp_2580_;
}
v_resetjp_2580_:
{
if (lean_obj_tag(v_a_2579_) == 1)
{
lean_object* v_val_2583_; lean_object* v_num_2584_; lean_object* v_den_2585_; lean_object* v___x_2586_; uint8_t v___x_2587_; 
v_val_2583_ = lean_ctor_get(v_a_2579_, 0);
lean_inc(v_val_2583_);
lean_dec_ref(v_a_2579_);
v_num_2584_ = lean_ctor_get(v_val_2583_, 0);
lean_inc(v_num_2584_);
v_den_2585_ = lean_ctor_get(v_val_2583_, 1);
lean_inc(v_den_2585_);
lean_dec(v_val_2583_);
v___x_2586_ = lean_unsigned_to_nat(1u);
v___x_2587_ = lean_nat_dec_eq(v_den_2585_, v___x_2586_);
lean_dec(v_den_2585_);
if (v___x_2587_ == 0)
{
uint8_t v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2591_; 
lean_dec(v_num_2584_);
lean_dec(v_d_2576_);
v___x_2588_ = 0;
v___x_2589_ = lean_box(v___x_2588_);
if (v_isShared_2582_ == 0)
{
lean_ctor_set(v___x_2581_, 0, v___x_2589_);
v___x_2591_ = v___x_2581_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v___x_2589_);
v___x_2591_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
return v___x_2591_;
}
}
else
{
uint8_t v___x_2593_; uint8_t v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2597_; 
v___x_2593_ = l_Int_decidableDvd(v_d_2576_, v_num_2584_);
lean_dec(v_num_2584_);
lean_dec(v_d_2576_);
v___x_2594_ = l_Bool_toLBool(v___x_2593_);
v___x_2595_ = lean_box(v___x_2594_);
if (v_isShared_2582_ == 0)
{
lean_ctor_set(v___x_2581_, 0, v___x_2595_);
v___x_2597_ = v___x_2581_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v___x_2595_);
v___x_2597_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
return v___x_2597_;
}
}
}
else
{
uint8_t v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2602_; 
lean_dec(v_a_2579_);
lean_dec(v_d_2576_);
v___x_2599_ = 2;
v___x_2600_ = lean_box(v___x_2599_);
if (v_isShared_2582_ == 0)
{
lean_ctor_set(v___x_2581_, 0, v___x_2600_);
v___x_2602_ = v___x_2581_;
goto v_reusejp_2601_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v___x_2600_);
v___x_2602_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2601_;
}
v_reusejp_2601_:
{
return v___x_2602_;
}
}
}
}
else
{
lean_object* v_a_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2612_; 
lean_dec(v_d_2576_);
v_a_2605_ = lean_ctor_get(v___x_2578_, 0);
v_isSharedCheck_2612_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2612_ == 0)
{
v___x_2607_ = v___x_2578_;
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_a_2605_);
lean_dec(v___x_2578_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v___x_2610_; 
if (v_isShared_2608_ == 0)
{
v___x_2610_ = v___x_2607_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v_a_2605_);
v___x_2610_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
return v___x_2610_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___redArg___boxed(lean_object* v_c_2613_, lean_object* v_a_2614_, lean_object* v_a_2615_, lean_object* v_a_2616_, lean_object* v_a_2617_){
_start:
{
lean_object* v_res_2618_; 
v_res_2618_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___redArg(v_c_2613_, v_a_2614_, v_a_2615_, v_a_2616_);
lean_dec(v_a_2616_);
lean_dec_ref(v_a_2615_);
lean_dec(v_a_2614_);
return v_res_2618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied(lean_object* v_c_2619_, lean_object* v_a_2620_, lean_object* v_a_2621_, lean_object* v_a_2622_, lean_object* v_a_2623_, lean_object* v_a_2624_, lean_object* v_a_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_){
_start:
{
lean_object* v___x_2631_; 
v___x_2631_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___redArg(v_c_2619_, v_a_2620_, v_a_2628_, v_a_2629_);
return v___x_2631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___boxed(lean_object* v_c_2632_, lean_object* v_a_2633_, lean_object* v_a_2634_, lean_object* v_a_2635_, lean_object* v_a_2636_, lean_object* v_a_2637_, lean_object* v_a_2638_, lean_object* v_a_2639_, lean_object* v_a_2640_, lean_object* v_a_2641_, lean_object* v_a_2642_, lean_object* v_a_2643_){
_start:
{
lean_object* v_res_2644_; 
v_res_2644_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied(v_c_2632_, v_a_2633_, v_a_2634_, v_a_2635_, v_a_2636_, v_a_2637_, v_a_2638_, v_a_2639_, v_a_2640_, v_a_2641_, v_a_2642_);
lean_dec(v_a_2642_);
lean_dec_ref(v_a_2641_);
lean_dec(v_a_2640_);
lean_dec_ref(v_a_2639_);
lean_dec(v_a_2638_);
lean_dec_ref(v_a_2637_);
lean_dec(v_a_2636_);
lean_dec_ref(v_a_2635_);
lean_dec(v_a_2634_);
lean_dec(v_a_2633_);
return v_res_2644_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_satisfiedLe___redArg(lean_object* v_p_2645_, lean_object* v_a_2646_, lean_object* v_a_2647_, lean_object* v_a_2648_){
_start:
{
lean_object* v___x_2650_; 
v___x_2650_ = l_Int_Linear_Poly_eval_x3f___redArg(v_p_2645_, v_a_2646_, v_a_2647_, v_a_2648_);
if (lean_obj_tag(v___x_2650_) == 0)
{
lean_object* v_a_2651_; lean_object* v___x_2653_; uint8_t v_isShared_2654_; uint8_t v_isSharedCheck_2668_; 
v_a_2651_ = lean_ctor_get(v___x_2650_, 0);
v_isSharedCheck_2668_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2668_ == 0)
{
v___x_2653_ = v___x_2650_;
v_isShared_2654_ = v_isSharedCheck_2668_;
goto v_resetjp_2652_;
}
else
{
lean_inc(v_a_2651_);
lean_dec(v___x_2650_);
v___x_2653_ = lean_box(0);
v_isShared_2654_ = v_isSharedCheck_2668_;
goto v_resetjp_2652_;
}
v_resetjp_2652_:
{
if (lean_obj_tag(v_a_2651_) == 1)
{
lean_object* v_val_2655_; lean_object* v___x_2656_; uint8_t v___x_2657_; uint8_t v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2661_; 
v_val_2655_ = lean_ctor_get(v_a_2651_, 0);
lean_inc(v_val_2655_);
lean_dec_ref(v_a_2651_);
v___x_2656_ = lean_obj_once(&l_Int_Linear_Poly_eval_x3f___redArg___closed__0, &l_Int_Linear_Poly_eval_x3f___redArg___closed__0_once, _init_l_Int_Linear_Poly_eval_x3f___redArg___closed__0);
v___x_2657_ = l_Rat_instDecidableLe(v_val_2655_, v___x_2656_);
v___x_2658_ = l_Bool_toLBool(v___x_2657_);
v___x_2659_ = lean_box(v___x_2658_);
if (v_isShared_2654_ == 0)
{
lean_ctor_set(v___x_2653_, 0, v___x_2659_);
v___x_2661_ = v___x_2653_;
goto v_reusejp_2660_;
}
else
{
lean_object* v_reuseFailAlloc_2662_; 
v_reuseFailAlloc_2662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2662_, 0, v___x_2659_);
v___x_2661_ = v_reuseFailAlloc_2662_;
goto v_reusejp_2660_;
}
v_reusejp_2660_:
{
return v___x_2661_;
}
}
else
{
uint8_t v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2666_; 
lean_dec(v_a_2651_);
v___x_2663_ = 2;
v___x_2664_ = lean_box(v___x_2663_);
if (v_isShared_2654_ == 0)
{
lean_ctor_set(v___x_2653_, 0, v___x_2664_);
v___x_2666_ = v___x_2653_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2667_; 
v_reuseFailAlloc_2667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2667_, 0, v___x_2664_);
v___x_2666_ = v_reuseFailAlloc_2667_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
return v___x_2666_;
}
}
}
}
else
{
lean_object* v_a_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2676_; 
v_a_2669_ = lean_ctor_get(v___x_2650_, 0);
v_isSharedCheck_2676_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2676_ == 0)
{
v___x_2671_ = v___x_2650_;
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
else
{
lean_inc(v_a_2669_);
lean_dec(v___x_2650_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v___x_2674_; 
if (v_isShared_2672_ == 0)
{
v___x_2674_ = v___x_2671_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v_a_2669_);
v___x_2674_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
return v___x_2674_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_satisfiedLe___redArg___boxed(lean_object* v_p_2677_, lean_object* v_a_2678_, lean_object* v_a_2679_, lean_object* v_a_2680_, lean_object* v_a_2681_){
_start:
{
lean_object* v_res_2682_; 
v_res_2682_ = l_Int_Linear_Poly_satisfiedLe___redArg(v_p_2677_, v_a_2678_, v_a_2679_, v_a_2680_);
lean_dec(v_a_2680_);
lean_dec_ref(v_a_2679_);
lean_dec(v_a_2678_);
return v_res_2682_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_satisfiedLe(lean_object* v_p_2683_, lean_object* v_a_2684_, lean_object* v_a_2685_, lean_object* v_a_2686_, lean_object* v_a_2687_, lean_object* v_a_2688_, lean_object* v_a_2689_, lean_object* v_a_2690_, lean_object* v_a_2691_, lean_object* v_a_2692_, lean_object* v_a_2693_){
_start:
{
lean_object* v___x_2695_; 
v___x_2695_ = l_Int_Linear_Poly_satisfiedLe___redArg(v_p_2683_, v_a_2684_, v_a_2692_, v_a_2693_);
return v___x_2695_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_satisfiedLe___boxed(lean_object* v_p_2696_, lean_object* v_a_2697_, lean_object* v_a_2698_, lean_object* v_a_2699_, lean_object* v_a_2700_, lean_object* v_a_2701_, lean_object* v_a_2702_, lean_object* v_a_2703_, lean_object* v_a_2704_, lean_object* v_a_2705_, lean_object* v_a_2706_, lean_object* v_a_2707_){
_start:
{
lean_object* v_res_2708_; 
v_res_2708_ = l_Int_Linear_Poly_satisfiedLe(v_p_2696_, v_a_2697_, v_a_2698_, v_a_2699_, v_a_2700_, v_a_2701_, v_a_2702_, v_a_2703_, v_a_2704_, v_a_2705_, v_a_2706_);
lean_dec(v_a_2706_);
lean_dec_ref(v_a_2705_);
lean_dec(v_a_2704_);
lean_dec_ref(v_a_2703_);
lean_dec(v_a_2702_);
lean_dec_ref(v_a_2701_);
lean_dec(v_a_2700_);
lean_dec_ref(v_a_2699_);
lean_dec(v_a_2698_);
lean_dec(v_a_2697_);
return v_res_2708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg(lean_object* v_c_2709_, lean_object* v_a_2710_, lean_object* v_a_2711_, lean_object* v_a_2712_){
_start:
{
lean_object* v_p_2714_; lean_object* v___x_2715_; 
v_p_2714_ = lean_ctor_get(v_c_2709_, 0);
lean_inc_ref(v_p_2714_);
lean_dec_ref(v_c_2709_);
v___x_2715_ = l_Int_Linear_Poly_satisfiedLe___redArg(v_p_2714_, v_a_2710_, v_a_2711_, v_a_2712_);
return v___x_2715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg___boxed(lean_object* v_c_2716_, lean_object* v_a_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_){
_start:
{
lean_object* v_res_2721_; 
v_res_2721_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg(v_c_2716_, v_a_2717_, v_a_2718_, v_a_2719_);
lean_dec(v_a_2719_);
lean_dec_ref(v_a_2718_);
lean_dec(v_a_2717_);
return v_res_2721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied(lean_object* v_c_2722_, lean_object* v_a_2723_, lean_object* v_a_2724_, lean_object* v_a_2725_, lean_object* v_a_2726_, lean_object* v_a_2727_, lean_object* v_a_2728_, lean_object* v_a_2729_, lean_object* v_a_2730_, lean_object* v_a_2731_, lean_object* v_a_2732_){
_start:
{
lean_object* v___x_2734_; 
v___x_2734_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg(v_c_2722_, v_a_2723_, v_a_2731_, v_a_2732_);
return v___x_2734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___boxed(lean_object* v_c_2735_, lean_object* v_a_2736_, lean_object* v_a_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_, lean_object* v_a_2740_, lean_object* v_a_2741_, lean_object* v_a_2742_, lean_object* v_a_2743_, lean_object* v_a_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_){
_start:
{
lean_object* v_res_2747_; 
v_res_2747_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied(v_c_2735_, v_a_2736_, v_a_2737_, v_a_2738_, v_a_2739_, v_a_2740_, v_a_2741_, v_a_2742_, v_a_2743_, v_a_2744_, v_a_2745_);
lean_dec(v_a_2745_);
lean_dec_ref(v_a_2744_);
lean_dec(v_a_2743_);
lean_dec_ref(v_a_2742_);
lean_dec(v_a_2741_);
lean_dec_ref(v_a_2740_);
lean_dec(v_a_2739_);
lean_dec_ref(v_a_2738_);
lean_dec(v_a_2737_);
lean_dec(v_a_2736_);
return v_res_2747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___redArg(lean_object* v_c_2748_, lean_object* v_a_2749_, lean_object* v_a_2750_, lean_object* v_a_2751_){
_start:
{
lean_object* v_p_2753_; lean_object* v___x_2754_; 
v_p_2753_ = lean_ctor_get(v_c_2748_, 0);
lean_inc_ref(v_p_2753_);
lean_dec_ref(v_c_2748_);
v___x_2754_ = l_Int_Linear_Poly_eval_x3f___redArg(v_p_2753_, v_a_2749_, v_a_2750_, v_a_2751_);
if (lean_obj_tag(v___x_2754_) == 0)
{
lean_object* v_a_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2774_; 
v_a_2755_ = lean_ctor_get(v___x_2754_, 0);
v_isSharedCheck_2774_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2774_ == 0)
{
v___x_2757_ = v___x_2754_;
v_isShared_2758_ = v_isSharedCheck_2774_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_a_2755_);
lean_dec(v___x_2754_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2774_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
uint8_t v___y_2760_; 
if (lean_obj_tag(v_a_2755_) == 1)
{
lean_object* v_val_2766_; lean_object* v___x_2767_; uint8_t v___x_2768_; 
v_val_2766_ = lean_ctor_get(v_a_2755_, 0);
lean_inc(v_val_2766_);
lean_dec_ref(v_a_2755_);
v___x_2767_ = lean_obj_once(&l_Int_Linear_Poly_eval_x3f___redArg___closed__0, &l_Int_Linear_Poly_eval_x3f___redArg___closed__0_once, _init_l_Int_Linear_Poly_eval_x3f___redArg___closed__0);
v___x_2768_ = l_instDecidableEqRat_decEq(v_val_2766_, v___x_2767_);
lean_dec(v_val_2766_);
if (v___x_2768_ == 0)
{
uint8_t v___x_2769_; 
v___x_2769_ = 1;
v___y_2760_ = v___x_2769_;
goto v___jp_2759_;
}
else
{
uint8_t v___x_2770_; 
v___x_2770_ = 0;
v___y_2760_ = v___x_2770_;
goto v___jp_2759_;
}
}
else
{
uint8_t v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; 
lean_del_object(v___x_2757_);
lean_dec(v_a_2755_);
v___x_2771_ = 2;
v___x_2772_ = lean_box(v___x_2771_);
v___x_2773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2773_, 0, v___x_2772_);
return v___x_2773_;
}
v___jp_2759_:
{
uint8_t v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2764_; 
v___x_2761_ = l_Bool_toLBool(v___y_2760_);
v___x_2762_ = lean_box(v___x_2761_);
if (v_isShared_2758_ == 0)
{
lean_ctor_set(v___x_2757_, 0, v___x_2762_);
v___x_2764_ = v___x_2757_;
goto v_reusejp_2763_;
}
else
{
lean_object* v_reuseFailAlloc_2765_; 
v_reuseFailAlloc_2765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2765_, 0, v___x_2762_);
v___x_2764_ = v_reuseFailAlloc_2765_;
goto v_reusejp_2763_;
}
v_reusejp_2763_:
{
return v___x_2764_;
}
}
}
}
else
{
lean_object* v_a_2775_; lean_object* v___x_2777_; uint8_t v_isShared_2778_; uint8_t v_isSharedCheck_2782_; 
v_a_2775_ = lean_ctor_get(v___x_2754_, 0);
v_isSharedCheck_2782_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2782_ == 0)
{
v___x_2777_ = v___x_2754_;
v_isShared_2778_ = v_isSharedCheck_2782_;
goto v_resetjp_2776_;
}
else
{
lean_inc(v_a_2775_);
lean_dec(v___x_2754_);
v___x_2777_ = lean_box(0);
v_isShared_2778_ = v_isSharedCheck_2782_;
goto v_resetjp_2776_;
}
v_resetjp_2776_:
{
lean_object* v___x_2780_; 
if (v_isShared_2778_ == 0)
{
v___x_2780_ = v___x_2777_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v_a_2775_);
v___x_2780_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
return v___x_2780_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___redArg___boxed(lean_object* v_c_2783_, lean_object* v_a_2784_, lean_object* v_a_2785_, lean_object* v_a_2786_, lean_object* v_a_2787_){
_start:
{
lean_object* v_res_2788_; 
v_res_2788_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___redArg(v_c_2783_, v_a_2784_, v_a_2785_, v_a_2786_);
lean_dec(v_a_2786_);
lean_dec_ref(v_a_2785_);
lean_dec(v_a_2784_);
return v_res_2788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied(lean_object* v_c_2789_, lean_object* v_a_2790_, lean_object* v_a_2791_, lean_object* v_a_2792_, lean_object* v_a_2793_, lean_object* v_a_2794_, lean_object* v_a_2795_, lean_object* v_a_2796_, lean_object* v_a_2797_, lean_object* v_a_2798_, lean_object* v_a_2799_){
_start:
{
lean_object* v___x_2801_; 
v___x_2801_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___redArg(v_c_2789_, v_a_2790_, v_a_2798_, v_a_2799_);
return v___x_2801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___boxed(lean_object* v_c_2802_, lean_object* v_a_2803_, lean_object* v_a_2804_, lean_object* v_a_2805_, lean_object* v_a_2806_, lean_object* v_a_2807_, lean_object* v_a_2808_, lean_object* v_a_2809_, lean_object* v_a_2810_, lean_object* v_a_2811_, lean_object* v_a_2812_, lean_object* v_a_2813_){
_start:
{
lean_object* v_res_2814_; 
v_res_2814_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied(v_c_2802_, v_a_2803_, v_a_2804_, v_a_2805_, v_a_2806_, v_a_2807_, v_a_2808_, v_a_2809_, v_a_2810_, v_a_2811_, v_a_2812_);
lean_dec(v_a_2812_);
lean_dec_ref(v_a_2811_);
lean_dec(v_a_2810_);
lean_dec_ref(v_a_2809_);
lean_dec(v_a_2808_);
lean_dec_ref(v_a_2807_);
lean_dec(v_a_2806_);
lean_dec_ref(v_a_2805_);
lean_dec(v_a_2804_);
lean_dec(v_a_2803_);
return v_res_2814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied___redArg(lean_object* v_c_2815_, lean_object* v_a_2816_, lean_object* v_a_2817_, lean_object* v_a_2818_){
_start:
{
lean_object* v_p_2820_; lean_object* v___x_2821_; 
v_p_2820_ = lean_ctor_get(v_c_2815_, 0);
lean_inc_ref(v_p_2820_);
lean_dec_ref(v_c_2815_);
v___x_2821_ = l_Int_Linear_Poly_eval_x3f___redArg(v_p_2820_, v_a_2816_, v_a_2817_, v_a_2818_);
if (lean_obj_tag(v___x_2821_) == 0)
{
lean_object* v_a_2822_; lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_2839_; 
v_a_2822_ = lean_ctor_get(v___x_2821_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2821_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2824_ = v___x_2821_;
v_isShared_2825_ = v_isSharedCheck_2839_;
goto v_resetjp_2823_;
}
else
{
lean_inc(v_a_2822_);
lean_dec(v___x_2821_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_2839_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
if (lean_obj_tag(v_a_2822_) == 1)
{
lean_object* v_val_2826_; lean_object* v___x_2827_; uint8_t v___x_2828_; uint8_t v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2832_; 
v_val_2826_ = lean_ctor_get(v_a_2822_, 0);
lean_inc(v_val_2826_);
lean_dec_ref(v_a_2822_);
v___x_2827_ = lean_obj_once(&l_Int_Linear_Poly_eval_x3f___redArg___closed__0, &l_Int_Linear_Poly_eval_x3f___redArg___closed__0_once, _init_l_Int_Linear_Poly_eval_x3f___redArg___closed__0);
v___x_2828_ = l_instDecidableEqRat_decEq(v_val_2826_, v___x_2827_);
lean_dec(v_val_2826_);
v___x_2829_ = l_Bool_toLBool(v___x_2828_);
v___x_2830_ = lean_box(v___x_2829_);
if (v_isShared_2825_ == 0)
{
lean_ctor_set(v___x_2824_, 0, v___x_2830_);
v___x_2832_ = v___x_2824_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v___x_2830_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
else
{
uint8_t v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2837_; 
lean_dec(v_a_2822_);
v___x_2834_ = 2;
v___x_2835_ = lean_box(v___x_2834_);
if (v_isShared_2825_ == 0)
{
lean_ctor_set(v___x_2824_, 0, v___x_2835_);
v___x_2837_ = v___x_2824_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v___x_2835_);
v___x_2837_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
return v___x_2837_;
}
}
}
}
else
{
lean_object* v_a_2840_; lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2847_; 
v_a_2840_ = lean_ctor_get(v___x_2821_, 0);
v_isSharedCheck_2847_ = !lean_is_exclusive(v___x_2821_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2842_ = v___x_2821_;
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
else
{
lean_inc(v_a_2840_);
lean_dec(v___x_2821_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v___x_2845_; 
if (v_isShared_2843_ == 0)
{
v___x_2845_ = v___x_2842_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v_a_2840_);
v___x_2845_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
return v___x_2845_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied___redArg___boxed(lean_object* v_c_2848_, lean_object* v_a_2849_, lean_object* v_a_2850_, lean_object* v_a_2851_, lean_object* v_a_2852_){
_start:
{
lean_object* v_res_2853_; 
v_res_2853_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied___redArg(v_c_2848_, v_a_2849_, v_a_2850_, v_a_2851_);
lean_dec(v_a_2851_);
lean_dec_ref(v_a_2850_);
lean_dec(v_a_2849_);
return v_res_2853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied(lean_object* v_c_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_, lean_object* v_a_2864_){
_start:
{
lean_object* v___x_2866_; 
v___x_2866_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied___redArg(v_c_2854_, v_a_2855_, v_a_2863_, v_a_2864_);
return v___x_2866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied___boxed(lean_object* v_c_2867_, lean_object* v_a_2868_, lean_object* v_a_2869_, lean_object* v_a_2870_, lean_object* v_a_2871_, lean_object* v_a_2872_, lean_object* v_a_2873_, lean_object* v_a_2874_, lean_object* v_a_2875_, lean_object* v_a_2876_, lean_object* v_a_2877_, lean_object* v_a_2878_){
_start:
{
lean_object* v_res_2879_; 
v_res_2879_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied(v_c_2867_, v_a_2868_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_, v_a_2873_, v_a_2874_, v_a_2875_, v_a_2876_, v_a_2877_);
lean_dec(v_a_2877_);
lean_dec_ref(v_a_2876_);
lean_dec(v_a_2875_);
lean_dec_ref(v_a_2874_);
lean_dec(v_a_2873_);
lean_dec_ref(v_a_2872_);
lean_dec(v_a_2871_);
lean_dec_ref(v_a_2870_);
lean_dec(v_a_2869_);
lean_dec(v_a_2868_);
return v_res_2879_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_findVarToSubst___redArg(lean_object* v_p_2880_, lean_object* v_a_2881_, lean_object* v_a_2882_, lean_object* v_a_2883_){
_start:
{
if (lean_obj_tag(v_p_2880_) == 0)
{
lean_object* v___x_2886_; uint8_t v_isShared_2887_; uint8_t v_isSharedCheck_2892_; 
v_isSharedCheck_2892_ = !lean_is_exclusive(v_p_2880_);
if (v_isSharedCheck_2892_ == 0)
{
lean_object* v_unused_2893_; 
v_unused_2893_ = lean_ctor_get(v_p_2880_, 0);
lean_dec(v_unused_2893_);
v___x_2886_ = v_p_2880_;
v_isShared_2887_ = v_isSharedCheck_2892_;
goto v_resetjp_2885_;
}
else
{
lean_dec(v_p_2880_);
v___x_2886_ = lean_box(0);
v_isShared_2887_ = v_isSharedCheck_2892_;
goto v_resetjp_2885_;
}
v_resetjp_2885_:
{
lean_object* v___x_2888_; lean_object* v___x_2890_; 
v___x_2888_ = lean_box(0);
if (v_isShared_2887_ == 0)
{
lean_ctor_set(v___x_2886_, 0, v___x_2888_);
v___x_2890_ = v___x_2886_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v___x_2888_);
v___x_2890_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
return v___x_2890_;
}
}
}
else
{
lean_object* v_k_2894_; lean_object* v_v_2895_; lean_object* v_p_2896_; lean_object* v___x_2897_; 
v_k_2894_ = lean_ctor_get(v_p_2880_, 0);
lean_inc(v_k_2894_);
v_v_2895_ = lean_ctor_get(v_p_2880_, 1);
lean_inc(v_v_2895_);
v_p_2896_ = lean_ctor_get(v_p_2880_, 2);
lean_inc_ref(v_p_2896_);
lean_dec_ref(v_p_2880_);
v___x_2897_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_2881_, v_a_2882_, v_a_2883_);
if (lean_obj_tag(v___x_2897_) == 0)
{
lean_object* v_a_2898_; lean_object* v___x_2900_; uint8_t v_isShared_2901_; uint8_t v_isSharedCheck_2924_; 
v_a_2898_ = lean_ctor_get(v___x_2897_, 0);
v_isSharedCheck_2924_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_2924_ == 0)
{
v___x_2900_ = v___x_2897_;
v_isShared_2901_ = v_isSharedCheck_2924_;
goto v_resetjp_2899_;
}
else
{
lean_inc(v_a_2898_);
lean_dec(v___x_2897_);
v___x_2900_ = lean_box(0);
v_isShared_2901_ = v_isSharedCheck_2924_;
goto v_resetjp_2899_;
}
v_resetjp_2899_:
{
lean_object* v___y_2903_; lean_object* v_elimEqs_2918_; lean_object* v_size_2919_; lean_object* v___x_2920_; uint8_t v___x_2921_; 
v_elimEqs_2918_ = lean_ctor_get(v_a_2898_, 10);
lean_inc_ref(v_elimEqs_2918_);
lean_dec(v_a_2898_);
v_size_2919_ = lean_ctor_get(v_elimEqs_2918_, 2);
v___x_2920_ = lean_box(0);
v___x_2921_ = lean_nat_dec_lt(v_v_2895_, v_size_2919_);
if (v___x_2921_ == 0)
{
lean_object* v___x_2922_; 
lean_dec_ref(v_elimEqs_2918_);
v___x_2922_ = l_outOfBounds___redArg(v___x_2920_);
v___y_2903_ = v___x_2922_;
goto v___jp_2902_;
}
else
{
lean_object* v___x_2923_; 
v___x_2923_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2920_, v_elimEqs_2918_, v_v_2895_);
lean_dec_ref(v_elimEqs_2918_);
v___y_2903_ = v___x_2923_;
goto v___jp_2902_;
}
v___jp_2902_:
{
if (lean_obj_tag(v___y_2903_) == 1)
{
lean_object* v_val_2904_; lean_object* v___x_2906_; uint8_t v_isShared_2907_; uint8_t v_isSharedCheck_2916_; 
lean_dec_ref(v_p_2896_);
v_val_2904_ = lean_ctor_get(v___y_2903_, 0);
v_isSharedCheck_2916_ = !lean_is_exclusive(v___y_2903_);
if (v_isSharedCheck_2916_ == 0)
{
v___x_2906_ = v___y_2903_;
v_isShared_2907_ = v_isSharedCheck_2916_;
goto v_resetjp_2905_;
}
else
{
lean_inc(v_val_2904_);
lean_dec(v___y_2903_);
v___x_2906_ = lean_box(0);
v_isShared_2907_ = v_isSharedCheck_2916_;
goto v_resetjp_2905_;
}
v_resetjp_2905_:
{
lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2911_; 
v___x_2908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2908_, 0, v_v_2895_);
lean_ctor_set(v___x_2908_, 1, v_val_2904_);
v___x_2909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2909_, 0, v_k_2894_);
lean_ctor_set(v___x_2909_, 1, v___x_2908_);
if (v_isShared_2907_ == 0)
{
lean_ctor_set(v___x_2906_, 0, v___x_2909_);
v___x_2911_ = v___x_2906_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v___x_2909_);
v___x_2911_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
lean_object* v___x_2913_; 
if (v_isShared_2901_ == 0)
{
lean_ctor_set(v___x_2900_, 0, v___x_2911_);
v___x_2913_ = v___x_2900_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v___x_2911_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
return v___x_2913_;
}
}
}
}
else
{
lean_dec(v___y_2903_);
lean_del_object(v___x_2900_);
lean_dec(v_v_2895_);
lean_dec(v_k_2894_);
v_p_2880_ = v_p_2896_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2932_; 
lean_dec_ref(v_p_2896_);
lean_dec(v_v_2895_);
lean_dec(v_k_2894_);
v_a_2925_ = lean_ctor_get(v___x_2897_, 0);
v_isSharedCheck_2932_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_2932_ == 0)
{
v___x_2927_ = v___x_2897_;
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_a_2925_);
lean_dec(v___x_2897_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v___x_2930_; 
if (v_isShared_2928_ == 0)
{
v___x_2930_ = v___x_2927_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v_a_2925_);
v___x_2930_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
return v___x_2930_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_findVarToSubst___redArg___boxed(lean_object* v_p_2933_, lean_object* v_a_2934_, lean_object* v_a_2935_, lean_object* v_a_2936_, lean_object* v_a_2937_){
_start:
{
lean_object* v_res_2938_; 
v_res_2938_ = l_Int_Linear_Poly_findVarToSubst___redArg(v_p_2933_, v_a_2934_, v_a_2935_, v_a_2936_);
lean_dec(v_a_2936_);
lean_dec_ref(v_a_2935_);
lean_dec(v_a_2934_);
return v_res_2938_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_findVarToSubst(lean_object* v_p_2939_, lean_object* v_a_2940_, lean_object* v_a_2941_, lean_object* v_a_2942_, lean_object* v_a_2943_, lean_object* v_a_2944_, lean_object* v_a_2945_, lean_object* v_a_2946_, lean_object* v_a_2947_, lean_object* v_a_2948_, lean_object* v_a_2949_){
_start:
{
lean_object* v___x_2951_; 
v___x_2951_ = l_Int_Linear_Poly_findVarToSubst___redArg(v_p_2939_, v_a_2940_, v_a_2948_, v_a_2949_);
return v___x_2951_;
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_findVarToSubst___boxed(lean_object* v_p_2952_, lean_object* v_a_2953_, lean_object* v_a_2954_, lean_object* v_a_2955_, lean_object* v_a_2956_, lean_object* v_a_2957_, lean_object* v_a_2958_, lean_object* v_a_2959_, lean_object* v_a_2960_, lean_object* v_a_2961_, lean_object* v_a_2962_, lean_object* v_a_2963_){
_start:
{
lean_object* v_res_2964_; 
v_res_2964_ = l_Int_Linear_Poly_findVarToSubst(v_p_2952_, v_a_2953_, v_a_2954_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_, v_a_2959_, v_a_2960_, v_a_2961_, v_a_2962_);
lean_dec(v_a_2962_);
lean_dec_ref(v_a_2961_);
lean_dec(v_a_2960_);
lean_dec_ref(v_a_2959_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
lean_dec(v_a_2954_);
lean_dec(v_a_2953_);
return v_res_2964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_numCases(lean_object* v_pred_2965_){
_start:
{
lean_object* v_c_u2081_2966_; lean_object* v_c_u2082_2967_; uint8_t v_left_2968_; lean_object* v_c_u2083_x3f_2969_; lean_object* v_p_2970_; lean_object* v_p_2971_; lean_object* v_a_2972_; lean_object* v_b_2973_; 
v_c_u2081_2966_ = lean_ctor_get(v_pred_2965_, 0);
v_c_u2082_2967_ = lean_ctor_get(v_pred_2965_, 1);
v_left_2968_ = lean_ctor_get_uint8(v_pred_2965_, sizeof(void*)*3);
v_c_u2083_x3f_2969_ = lean_ctor_get(v_pred_2965_, 2);
v_p_2970_ = lean_ctor_get(v_c_u2081_2966_, 0);
v_p_2971_ = lean_ctor_get(v_c_u2082_2967_, 0);
v_a_2972_ = l_Int_Linear_Poly_leadCoeff(v_p_2970_);
v_b_2973_ = l_Int_Linear_Poly_leadCoeff(v_p_2971_);
if (lean_obj_tag(v_c_u2083_x3f_2969_) == 0)
{
if (v_left_2968_ == 0)
{
lean_object* v___x_2974_; 
lean_dec(v_a_2972_);
v___x_2974_ = lean_nat_abs(v_b_2973_);
lean_dec(v_b_2973_);
return v___x_2974_;
}
else
{
lean_object* v___x_2975_; 
lean_dec(v_b_2973_);
v___x_2975_ = lean_nat_abs(v_a_2972_);
lean_dec(v_a_2972_);
return v___x_2975_;
}
}
else
{
lean_object* v_val_2976_; lean_object* v_d_2977_; lean_object* v_p_2978_; lean_object* v_c_2979_; 
v_val_2976_ = lean_ctor_get(v_c_u2083_x3f_2969_, 0);
v_d_2977_ = lean_ctor_get(v_val_2976_, 0);
v_p_2978_ = lean_ctor_get(v_val_2976_, 1);
v_c_2979_ = l_Int_Linear_Poly_leadCoeff(v_p_2978_);
if (v_left_2968_ == 0)
{
lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; 
lean_dec(v_a_2972_);
v___x_2980_ = lean_int_mul(v_b_2973_, v_d_2977_);
v___x_2981_ = l_Int_gcd(v___x_2980_, v_c_2979_);
lean_dec(v_c_2979_);
v___x_2982_ = lean_nat_to_int(v___x_2981_);
v___x_2983_ = lean_int_ediv(v___x_2980_, v___x_2982_);
lean_dec(v___x_2982_);
lean_dec(v___x_2980_);
v___x_2984_ = l_Int_lcm(v_b_2973_, v___x_2983_);
lean_dec(v___x_2983_);
lean_dec(v_b_2973_);
return v___x_2984_;
}
else
{
lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; 
lean_dec(v_b_2973_);
v___x_2985_ = lean_int_mul(v_a_2972_, v_d_2977_);
v___x_2986_ = l_Int_gcd(v___x_2985_, v_c_2979_);
lean_dec(v_c_2979_);
v___x_2987_ = lean_nat_to_int(v___x_2986_);
v___x_2988_ = lean_int_ediv(v___x_2985_, v___x_2987_);
lean_dec(v___x_2987_);
lean_dec(v___x_2985_);
v___x_2989_ = l_Int_lcm(v_a_2972_, v___x_2988_);
lean_dec(v___x_2988_);
lean_dec(v_a_2972_);
return v___x_2989_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_numCases___boxed(lean_object* v_pred_2990_){
_start:
{
lean_object* v_res_2991_; 
v_res_2991_ = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_numCases(v_pred_2990_);
lean_dec_ref(v_pred_2990_);
return v_res_2991_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__0(void){
_start:
{
lean_object* v___x_2992_; 
v___x_2992_ = lean_mk_string_unchecked(", ", 2, 2);
return v___x_2992_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1(void){
_start:
{
lean_object* v___x_2993_; lean_object* v___x_2994_; 
v___x_2993_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__0);
v___x_2994_ = l_Lean_stringToMessageData(v___x_2993_);
return v___x_2994_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__2(void){
_start:
{
lean_object* v___x_2995_; 
v___x_2995_ = lean_mk_string_unchecked("none", 4, 4);
return v___x_2995_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__3(void){
_start:
{
lean_object* v___x_2996_; lean_object* v___x_2997_; 
v___x_2996_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__2, &l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__2);
v___x_2997_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2997_, 0, v___x_2996_);
return v___x_2997_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__4(void){
_start:
{
lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2998_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__3, &l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__3);
v___x_2999_ = l_Lean_MessageData_ofFormat(v___x_2998_);
return v___x_2999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg(lean_object* v_pred_3000_, lean_object* v_a_3001_, lean_object* v_a_3002_, lean_object* v_a_3003_){
_start:
{
lean_object* v_c_u2081_3005_; lean_object* v_c_u2082_3006_; lean_object* v_c_u2083_x3f_3007_; lean_object* v___x_3008_; 
v_c_u2081_3005_ = lean_ctor_get(v_pred_3000_, 0);
lean_inc_ref(v_c_u2081_3005_);
v_c_u2082_3006_ = lean_ctor_get(v_pred_3000_, 1);
lean_inc_ref(v_c_u2082_3006_);
v_c_u2083_x3f_3007_ = lean_ctor_get(v_pred_3000_, 2);
lean_inc(v_c_u2083_x3f_3007_);
lean_dec_ref(v_pred_3000_);
v___x_3008_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_u2081_3005_, v_a_3001_, v_a_3002_, v_a_3003_);
if (lean_obj_tag(v___x_3008_) == 0)
{
lean_object* v_a_3009_; lean_object* v___x_3010_; 
v_a_3009_ = lean_ctor_get(v___x_3008_, 0);
lean_inc(v_a_3009_);
lean_dec_ref(v___x_3008_);
v___x_3010_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_u2082_3006_, v_a_3001_, v_a_3002_, v_a_3003_);
if (lean_obj_tag(v___x_3010_) == 0)
{
lean_object* v_a_3011_; lean_object* v___x_3013_; uint8_t v_isShared_3014_; uint8_t v_isSharedCheck_3029_; 
v_a_3011_ = lean_ctor_get(v___x_3010_, 0);
v_isSharedCheck_3029_ = !lean_is_exclusive(v___x_3010_);
if (v_isSharedCheck_3029_ == 0)
{
v___x_3013_ = v___x_3010_;
v_isShared_3014_ = v_isSharedCheck_3029_;
goto v_resetjp_3012_;
}
else
{
lean_inc(v_a_3011_);
lean_dec(v___x_3010_);
v___x_3013_ = lean_box(0);
v_isShared_3014_ = v_isSharedCheck_3029_;
goto v_resetjp_3012_;
}
v_resetjp_3012_:
{
lean_object* v_a_3016_; 
if (lean_obj_tag(v_c_u2083_x3f_3007_) == 1)
{
lean_object* v_val_3025_; lean_object* v___x_3026_; 
v_val_3025_ = lean_ctor_get(v_c_u2083_x3f_3007_, 0);
lean_inc(v_val_3025_);
lean_dec_ref(v_c_u2083_x3f_3007_);
v___x_3026_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(v_val_3025_, v_a_3001_, v_a_3002_, v_a_3003_);
if (lean_obj_tag(v___x_3026_) == 0)
{
lean_object* v_a_3027_; 
v_a_3027_ = lean_ctor_get(v___x_3026_, 0);
lean_inc(v_a_3027_);
lean_dec_ref(v___x_3026_);
v_a_3016_ = v_a_3027_;
goto v___jp_3015_;
}
else
{
lean_del_object(v___x_3013_);
lean_dec(v_a_3011_);
lean_dec(v_a_3009_);
return v___x_3026_;
}
}
else
{
lean_object* v___x_3028_; 
lean_dec(v_c_u2083_x3f_3007_);
v___x_3028_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__4, &l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__4_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__4);
v_a_3016_ = v___x_3028_;
goto v___jp_3015_;
}
v___jp_3015_:
{
lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3023_; 
v___x_3017_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1);
v___x_3018_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3018_, 0, v_a_3009_);
lean_ctor_set(v___x_3018_, 1, v___x_3017_);
v___x_3019_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3019_, 0, v___x_3018_);
lean_ctor_set(v___x_3019_, 1, v_a_3011_);
v___x_3020_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3019_);
lean_ctor_set(v___x_3020_, 1, v___x_3017_);
v___x_3021_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3021_, 0, v___x_3020_);
lean_ctor_set(v___x_3021_, 1, v_a_3016_);
if (v_isShared_3014_ == 0)
{
lean_ctor_set(v___x_3013_, 0, v___x_3021_);
v___x_3023_ = v___x_3013_;
goto v_reusejp_3022_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v___x_3021_);
v___x_3023_ = v_reuseFailAlloc_3024_;
goto v_reusejp_3022_;
}
v_reusejp_3022_:
{
return v___x_3023_;
}
}
}
}
else
{
lean_dec(v_a_3009_);
lean_dec(v_c_u2083_x3f_3007_);
return v___x_3010_;
}
}
else
{
lean_dec(v_c_u2083_x3f_3007_);
lean_dec_ref(v_c_u2082_3006_);
return v___x_3008_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___boxed(lean_object* v_pred_3030_, lean_object* v_a_3031_, lean_object* v_a_3032_, lean_object* v_a_3033_, lean_object* v_a_3034_){
_start:
{
lean_object* v_res_3035_; 
v_res_3035_ = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg(v_pred_3030_, v_a_3031_, v_a_3032_, v_a_3033_);
lean_dec(v_a_3033_);
lean_dec_ref(v_a_3032_);
lean_dec(v_a_3031_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp(lean_object* v_pred_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_, lean_object* v_a_3039_, lean_object* v_a_3040_, lean_object* v_a_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_, lean_object* v_a_3044_, lean_object* v_a_3045_, lean_object* v_a_3046_){
_start:
{
lean_object* v___x_3048_; 
v___x_3048_ = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg(v_pred_3036_, v_a_3037_, v_a_3045_, v_a_3046_);
return v___x_3048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___boxed(lean_object* v_pred_3049_, lean_object* v_a_3050_, lean_object* v_a_3051_, lean_object* v_a_3052_, lean_object* v_a_3053_, lean_object* v_a_3054_, lean_object* v_a_3055_, lean_object* v_a_3056_, lean_object* v_a_3057_, lean_object* v_a_3058_, lean_object* v_a_3059_, lean_object* v_a_3060_){
_start:
{
lean_object* v_res_3061_; 
v_res_3061_ = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp(v_pred_3049_, v_a_3050_, v_a_3051_, v_a_3052_, v_a_3053_, v_a_3054_, v_a_3055_, v_a_3056_, v_a_3057_, v_a_3058_, v_a_3059_);
lean_dec(v_a_3059_);
lean_dec_ref(v_a_3058_);
lean_dec(v_a_3057_);
lean_dec_ref(v_a_3056_);
lean_dec(v_a_3055_);
lean_dec_ref(v_a_3054_);
lean_dec(v_a_3053_);
lean_dec_ref(v_a_3052_);
lean_dec(v_a_3051_);
lean_dec(v_a_3050_);
return v_res_3061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___redArg(lean_object* v_h_3062_, lean_object* v_a_3063_, lean_object* v_a_3064_, lean_object* v_a_3065_){
_start:
{
switch(lean_obj_tag(v_h_3062_))
{
case 0:
{
lean_object* v_c_3067_; lean_object* v___x_3068_; 
v_c_3067_ = lean_ctor_get(v_h_3062_, 0);
lean_inc_ref(v_c_3067_);
lean_dec_ref(v_h_3062_);
v___x_3068_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(v_c_3067_, v_a_3063_, v_a_3064_, v_a_3065_);
return v___x_3068_;
}
case 1:
{
lean_object* v_c_3069_; lean_object* v___x_3070_; 
v_c_3069_ = lean_ctor_get(v_h_3062_, 0);
lean_inc_ref(v_c_3069_);
lean_dec_ref(v_h_3062_);
v___x_3070_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_3069_, v_a_3063_, v_a_3064_, v_a_3065_);
return v___x_3070_;
}
case 2:
{
lean_object* v_c_3071_; lean_object* v___x_3072_; 
v_c_3071_ = lean_ctor_get(v_h_3062_, 0);
lean_inc_ref(v_c_3071_);
lean_dec_ref(v_h_3062_);
v___x_3072_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v_c_3071_, v_a_3063_, v_a_3064_, v_a_3065_);
return v___x_3072_;
}
case 3:
{
lean_object* v_c_3073_; lean_object* v___x_3074_; 
v_c_3073_ = lean_ctor_get(v_h_3062_, 0);
lean_inc_ref(v_c_3073_);
lean_dec_ref(v_h_3062_);
v___x_3074_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg(v_c_3073_, v_a_3063_, v_a_3064_, v_a_3065_);
return v___x_3074_;
}
default: 
{
lean_object* v_c_u2081_3075_; lean_object* v_c_u2082_3076_; lean_object* v_c_u2083_3077_; lean_object* v___x_3078_; 
v_c_u2081_3075_ = lean_ctor_get(v_h_3062_, 0);
lean_inc_ref(v_c_u2081_3075_);
v_c_u2082_3076_ = lean_ctor_get(v_h_3062_, 1);
lean_inc_ref(v_c_u2082_3076_);
v_c_u2083_3077_ = lean_ctor_get(v_h_3062_, 2);
lean_inc_ref(v_c_u2083_3077_);
lean_dec_ref(v_h_3062_);
v___x_3078_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_u2081_3075_, v_a_3063_, v_a_3064_, v_a_3065_);
if (lean_obj_tag(v___x_3078_) == 0)
{
lean_object* v_a_3079_; lean_object* v___x_3080_; 
v_a_3079_ = lean_ctor_get(v___x_3078_, 0);
lean_inc(v_a_3079_);
lean_dec_ref(v___x_3078_);
v___x_3080_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_u2082_3076_, v_a_3063_, v_a_3064_, v_a_3065_);
if (lean_obj_tag(v___x_3080_) == 0)
{
lean_object* v_a_3081_; lean_object* v___x_3082_; 
v_a_3081_ = lean_ctor_get(v___x_3080_, 0);
lean_inc(v_a_3081_);
lean_dec_ref(v___x_3080_);
v___x_3082_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(v_c_u2083_3077_, v_a_3063_, v_a_3064_, v_a_3065_);
if (lean_obj_tag(v___x_3082_) == 0)
{
lean_object* v_a_3083_; lean_object* v___x_3085_; uint8_t v_isShared_3086_; uint8_t v_isSharedCheck_3095_; 
v_a_3083_ = lean_ctor_get(v___x_3082_, 0);
v_isSharedCheck_3095_ = !lean_is_exclusive(v___x_3082_);
if (v_isSharedCheck_3095_ == 0)
{
v___x_3085_ = v___x_3082_;
v_isShared_3086_ = v_isSharedCheck_3095_;
goto v_resetjp_3084_;
}
else
{
lean_inc(v_a_3083_);
lean_dec(v___x_3082_);
v___x_3085_ = lean_box(0);
v_isShared_3086_ = v_isSharedCheck_3095_;
goto v_resetjp_3084_;
}
v_resetjp_3084_:
{
lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3093_; 
v___x_3087_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1);
v___x_3088_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3088_, 0, v_a_3079_);
lean_ctor_set(v___x_3088_, 1, v___x_3087_);
v___x_3089_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3088_);
lean_ctor_set(v___x_3089_, 1, v_a_3081_);
v___x_3090_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3089_);
lean_ctor_set(v___x_3090_, 1, v___x_3087_);
v___x_3091_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3091_, 0, v___x_3090_);
lean_ctor_set(v___x_3091_, 1, v_a_3083_);
if (v_isShared_3086_ == 0)
{
lean_ctor_set(v___x_3085_, 0, v___x_3091_);
v___x_3093_ = v___x_3085_;
goto v_reusejp_3092_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v___x_3091_);
v___x_3093_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3092_;
}
v_reusejp_3092_:
{
return v___x_3093_;
}
}
}
else
{
lean_dec(v_a_3081_);
lean_dec(v_a_3079_);
return v___x_3082_;
}
}
else
{
lean_dec(v_a_3079_);
lean_dec_ref(v_c_u2083_3077_);
return v___x_3080_;
}
}
else
{
lean_dec_ref(v_c_u2083_3077_);
lean_dec_ref(v_c_u2082_3076_);
return v___x_3078_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___redArg___boxed(lean_object* v_h_3096_, lean_object* v_a_3097_, lean_object* v_a_3098_, lean_object* v_a_3099_, lean_object* v_a_3100_){
_start:
{
lean_object* v_res_3101_; 
v_res_3101_ = l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___redArg(v_h_3096_, v_a_3097_, v_a_3098_, v_a_3099_);
lean_dec(v_a_3099_);
lean_dec_ref(v_a_3098_);
lean_dec(v_a_3097_);
return v_res_3101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp(lean_object* v_h_3102_, lean_object* v_a_3103_, lean_object* v_a_3104_, lean_object* v_a_3105_, lean_object* v_a_3106_, lean_object* v_a_3107_, lean_object* v_a_3108_, lean_object* v_a_3109_, lean_object* v_a_3110_, lean_object* v_a_3111_, lean_object* v_a_3112_){
_start:
{
lean_object* v___x_3114_; 
v___x_3114_ = l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___redArg(v_h_3102_, v_a_3103_, v_a_3111_, v_a_3112_);
return v___x_3114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___boxed(lean_object* v_h_3115_, lean_object* v_a_3116_, lean_object* v_a_3117_, lean_object* v_a_3118_, lean_object* v_a_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_, lean_object* v_a_3126_){
_start:
{
lean_object* v_res_3127_; 
v_res_3127_ = l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp(v_h_3115_, v_a_3116_, v_a_3117_, v_a_3118_, v_a_3119_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_);
lean_dec(v_a_3125_);
lean_dec_ref(v_a_3124_);
lean_dec(v_a_3123_);
lean_dec_ref(v_a_3122_);
lean_dec(v_a_3121_);
lean_dec_ref(v_a_3120_);
lean_dec(v_a_3119_);
lean_dec_ref(v_a_3118_);
lean_dec(v_a_3117_);
lean_dec(v_a_3116_);
return v_res_3127_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Arith_Int_Simp(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Arith_Int_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Arith_Int_Simp(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Arith_Int_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
}
#ifdef __cplusplus
}
#endif
