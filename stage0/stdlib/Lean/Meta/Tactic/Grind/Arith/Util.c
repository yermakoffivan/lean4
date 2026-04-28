// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Util
// Imports: public import Init.Grind.Ring.Basic public import Lean.Meta.SynthInstance
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
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_aquote(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_pop___redArg(lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_forIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint64_t lean_usize_to_uint64(size_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isNatNum___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isNatNum___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isNatNum___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isNatNum___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isNatNum___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isNatNum___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isNatNum___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isNatNum___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isNatNum___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isNatNum___closed__4;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isNatNum(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isNatNum___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isNonnegIntNum___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isNonnegIntNum___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isNonnegIntNum___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isNonnegIntNum___closed__1;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isNonnegIntNum(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isNonnegIntNum___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isIntNum___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isIntNum___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isIntNum___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isIntNum___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isIntNum___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isIntNum___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isIntNum___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isIntNum___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isIntNum___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isIntNum___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isIntNum___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isIntNum___closed__5;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isIntNum(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isIntNum___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isNum(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isNum___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isNatType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isNatType___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isNatType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isNatType___closed__1;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isNatType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isNatType___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isIntType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isIntType___closed__0;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isIntType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isIntType___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isInstAddNat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isInstAddNat___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isInstAddNat___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isInstAddNat___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isInstAddNat___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isInstAddNat___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isInstAddNat___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isInstAddNat___closed__3;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isInstAddNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isInstAddNat___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isInstLENat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isInstLENat___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isInstLENat___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isInstLENat___closed__1;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isInstLENat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isInstLENat___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isNatAdd_x3f(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isNatAdd(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isNatAdd___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isNatNum_x3f(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__9;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__10;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__11;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__12;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__13;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__14;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__15;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__16;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__17;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__18;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__19;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__20;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__21;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__22;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_isArithTerm___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___closed__23;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isArithTerm(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_quoteIfArithTerm(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_Arith_gcdExt_spec__0(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_gcdExt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_gcdExt___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_gcdExt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_gcdExt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_shrink(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_shrink___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_resize_go_spec__0(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_resize_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_resize_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_resize_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_resize_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_resize(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_resize___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_unsafe__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_unsafe__1___redArg___boxed(lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_unsafe__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_unsafe__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0_spec__0___redArg(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1___redArg(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0___redArg(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0(lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0_spec__0(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_markAsFound___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_markAsFound(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_markAsFound___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_________intModuleMarker________;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__9;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__10;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__11;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__12;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__13;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__14;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__15;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__16;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__17;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__18;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__19;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__20;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__21;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isIntModuleVirtualParent(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isIntModuleVirtualParent___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___redArg___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___redArg___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___redArg___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___redArg___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___redArg___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___redArg___closed__9;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___redArg___closed__10;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___redArg___closed__11;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___redArg___closed__12;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Grind_Arith_isNatNum___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("OfNat", 5, 5);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isNatNum___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("ofNat", 5, 5);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isNatNum___closed__2(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNatNum___closed__1, &l_Lean_Meta_Grind_Arith_isNatNum___closed__1_once, _init_l_Lean_Meta_Grind_Arith_isNatNum___closed__1);
v___x_4_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNatNum___closed__0, &l_Lean_Meta_Grind_Arith_isNatNum___closed__0_once, _init_l_Lean_Meta_Grind_Arith_isNatNum___closed__0);
v___x_5_ = l_Lean_Name_mkStr2(v___x_4_, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isNatNum___closed__3(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_mk_string_unchecked("instOfNatNat", 12, 12);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isNatNum___closed__4(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNatNum___closed__3, &l_Lean_Meta_Grind_Arith_isNatNum___closed__3_once, _init_l_Lean_Meta_Grind_Arith_isNatNum___closed__3);
v___x_8_ = l_Lean_Name_mkStr1(v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isNatNum(lean_object* v_e_9_){
_start:
{
lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_10_ = l_Lean_Expr_cleanupAnnotations(v_e_9_);
v___x_11_ = l_Lean_Expr_isApp(v___x_10_);
if (v___x_11_ == 0)
{
lean_dec_ref(v___x_10_);
return v___x_11_;
}
else
{
lean_object* v_arg_12_; lean_object* v___x_13_; uint8_t v___x_14_; 
v_arg_12_ = lean_ctor_get(v___x_10_, 1);
lean_inc_ref(v_arg_12_);
v___x_13_ = l_Lean_Expr_appFnCleanup___redArg(v___x_10_);
v___x_14_ = l_Lean_Expr_isApp(v___x_13_);
if (v___x_14_ == 0)
{
lean_dec_ref(v___x_13_);
lean_dec_ref(v_arg_12_);
return v___x_14_;
}
else
{
lean_object* v___x_15_; uint8_t v___x_16_; 
v___x_15_ = l_Lean_Expr_appFnCleanup___redArg(v___x_13_);
v___x_16_ = l_Lean_Expr_isApp(v___x_15_);
if (v___x_16_ == 0)
{
lean_dec_ref(v___x_15_);
lean_dec_ref(v_arg_12_);
return v___x_16_;
}
else
{
lean_object* v___x_17_; lean_object* v___x_18_; uint8_t v___x_19_; 
v___x_17_ = l_Lean_Expr_appFnCleanup___redArg(v___x_15_);
v___x_18_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNatNum___closed__2, &l_Lean_Meta_Grind_Arith_isNatNum___closed__2_once, _init_l_Lean_Meta_Grind_Arith_isNatNum___closed__2);
v___x_19_ = l_Lean_Expr_isConstOf(v___x_17_, v___x_18_);
lean_dec_ref(v___x_17_);
if (v___x_19_ == 0)
{
lean_dec_ref(v_arg_12_);
return v___x_19_;
}
else
{
lean_object* v___x_20_; uint8_t v___x_21_; 
v___x_20_ = l_Lean_Expr_cleanupAnnotations(v_arg_12_);
v___x_21_ = l_Lean_Expr_isApp(v___x_20_);
if (v___x_21_ == 0)
{
lean_dec_ref(v___x_20_);
return v___x_21_;
}
else
{
lean_object* v___x_22_; lean_object* v___x_23_; uint8_t v___x_24_; 
v___x_22_ = l_Lean_Expr_appFnCleanup___redArg(v___x_20_);
v___x_23_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNatNum___closed__4, &l_Lean_Meta_Grind_Arith_isNatNum___closed__4_once, _init_l_Lean_Meta_Grind_Arith_isNatNum___closed__4);
v___x_24_ = l_Lean_Expr_isConstOf(v___x_22_, v___x_23_);
lean_dec_ref(v___x_22_);
return v___x_24_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isNatNum___boxed(lean_object* v_e_25_){
_start:
{
uint8_t v_res_26_; lean_object* v_r_27_; 
v_res_26_ = l_Lean_Meta_Grind_Arith_isNatNum(v_e_25_);
v_r_27_ = lean_box(v_res_26_);
return v_r_27_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isNonnegIntNum___closed__0(void){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lean_mk_string_unchecked("instOfNat", 9, 9);
return v___x_28_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isNonnegIntNum___closed__1(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_29_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNonnegIntNum___closed__0, &l_Lean_Meta_Grind_Arith_isNonnegIntNum___closed__0_once, _init_l_Lean_Meta_Grind_Arith_isNonnegIntNum___closed__0);
v___x_30_ = l_Lean_Name_mkStr1(v___x_29_);
return v___x_30_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isNonnegIntNum(lean_object* v_e_31_){
_start:
{
lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_32_ = l_Lean_Expr_cleanupAnnotations(v_e_31_);
v___x_33_ = l_Lean_Expr_isApp(v___x_32_);
if (v___x_33_ == 0)
{
lean_dec_ref(v___x_32_);
return v___x_33_;
}
else
{
lean_object* v_arg_34_; lean_object* v___x_35_; uint8_t v___x_36_; 
v_arg_34_ = lean_ctor_get(v___x_32_, 1);
lean_inc_ref(v_arg_34_);
v___x_35_ = l_Lean_Expr_appFnCleanup___redArg(v___x_32_);
v___x_36_ = l_Lean_Expr_isApp(v___x_35_);
if (v___x_36_ == 0)
{
lean_dec_ref(v___x_35_);
lean_dec_ref(v_arg_34_);
return v___x_36_;
}
else
{
lean_object* v___x_37_; uint8_t v___x_38_; 
v___x_37_ = l_Lean_Expr_appFnCleanup___redArg(v___x_35_);
v___x_38_ = l_Lean_Expr_isApp(v___x_37_);
if (v___x_38_ == 0)
{
lean_dec_ref(v___x_37_);
lean_dec_ref(v_arg_34_);
return v___x_38_;
}
else
{
lean_object* v___x_39_; lean_object* v___x_40_; uint8_t v___x_41_; 
v___x_39_ = l_Lean_Expr_appFnCleanup___redArg(v___x_37_);
v___x_40_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNatNum___closed__2, &l_Lean_Meta_Grind_Arith_isNatNum___closed__2_once, _init_l_Lean_Meta_Grind_Arith_isNatNum___closed__2);
v___x_41_ = l_Lean_Expr_isConstOf(v___x_39_, v___x_40_);
lean_dec_ref(v___x_39_);
if (v___x_41_ == 0)
{
lean_dec_ref(v_arg_34_);
return v___x_41_;
}
else
{
lean_object* v___x_42_; uint8_t v___x_43_; 
v___x_42_ = l_Lean_Expr_cleanupAnnotations(v_arg_34_);
v___x_43_ = l_Lean_Expr_isApp(v___x_42_);
if (v___x_43_ == 0)
{
lean_dec_ref(v___x_42_);
return v___x_43_;
}
else
{
lean_object* v___x_44_; lean_object* v___x_45_; uint8_t v___x_46_; 
v___x_44_ = l_Lean_Expr_appFnCleanup___redArg(v___x_42_);
v___x_45_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNonnegIntNum___closed__1, &l_Lean_Meta_Grind_Arith_isNonnegIntNum___closed__1_once, _init_l_Lean_Meta_Grind_Arith_isNonnegIntNum___closed__1);
v___x_46_ = l_Lean_Expr_isConstOf(v___x_44_, v___x_45_);
lean_dec_ref(v___x_44_);
return v___x_46_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isNonnegIntNum___boxed(lean_object* v_e_47_){
_start:
{
uint8_t v_res_48_; lean_object* v_r_49_; 
v_res_48_ = l_Lean_Meta_Grind_Arith_isNonnegIntNum(v_e_47_);
v_r_49_ = lean_box(v_res_48_);
return v_r_49_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isIntNum___closed__0(void){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_mk_string_unchecked("Neg", 3, 3);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isIntNum___closed__1(void){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = lean_mk_string_unchecked("neg", 3, 3);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isIntNum___closed__2(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isIntNum___closed__1, &l_Lean_Meta_Grind_Arith_isIntNum___closed__1_once, _init_l_Lean_Meta_Grind_Arith_isIntNum___closed__1);
v___x_53_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isIntNum___closed__0, &l_Lean_Meta_Grind_Arith_isIntNum___closed__0_once, _init_l_Lean_Meta_Grind_Arith_isIntNum___closed__0);
v___x_54_ = l_Lean_Name_mkStr2(v___x_53_, v___x_52_);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isIntNum___closed__3(void){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_mk_string_unchecked("Int", 3, 3);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isIntNum___closed__4(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_mk_string_unchecked("instNegInt", 10, 10);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isIntNum___closed__5(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isIntNum___closed__4, &l_Lean_Meta_Grind_Arith_isIntNum___closed__4_once, _init_l_Lean_Meta_Grind_Arith_isIntNum___closed__4);
v___x_58_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isIntNum___closed__3, &l_Lean_Meta_Grind_Arith_isIntNum___closed__3_once, _init_l_Lean_Meta_Grind_Arith_isIntNum___closed__3);
v___x_59_ = l_Lean_Name_mkStr2(v___x_58_, v___x_57_);
return v___x_59_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isIntNum(lean_object* v_e_60_){
_start:
{
lean_object* v___x_61_; uint8_t v___x_62_; 
lean_inc_ref(v_e_60_);
v___x_61_ = l_Lean_Expr_cleanupAnnotations(v_e_60_);
v___x_62_ = l_Lean_Expr_isApp(v___x_61_);
if (v___x_62_ == 0)
{
uint8_t v___x_63_; 
lean_dec_ref(v___x_61_);
v___x_63_ = l_Lean_Meta_Grind_Arith_isNonnegIntNum(v_e_60_);
return v___x_63_;
}
else
{
lean_object* v_arg_64_; lean_object* v___x_65_; uint8_t v___x_66_; 
v_arg_64_ = lean_ctor_get(v___x_61_, 1);
lean_inc_ref(v_arg_64_);
v___x_65_ = l_Lean_Expr_appFnCleanup___redArg(v___x_61_);
v___x_66_ = l_Lean_Expr_isApp(v___x_65_);
if (v___x_66_ == 0)
{
uint8_t v___x_67_; 
lean_dec_ref(v___x_65_);
lean_dec_ref(v_arg_64_);
v___x_67_ = l_Lean_Meta_Grind_Arith_isNonnegIntNum(v_e_60_);
return v___x_67_;
}
else
{
lean_object* v_arg_68_; lean_object* v___x_69_; uint8_t v___x_70_; 
v_arg_68_ = lean_ctor_get(v___x_65_, 1);
lean_inc_ref(v_arg_68_);
v___x_69_ = l_Lean_Expr_appFnCleanup___redArg(v___x_65_);
v___x_70_ = l_Lean_Expr_isApp(v___x_69_);
if (v___x_70_ == 0)
{
uint8_t v___x_71_; 
lean_dec_ref(v___x_69_);
lean_dec_ref(v_arg_68_);
lean_dec_ref(v_arg_64_);
v___x_71_ = l_Lean_Meta_Grind_Arith_isNonnegIntNum(v_e_60_);
return v___x_71_;
}
else
{
lean_object* v___x_72_; lean_object* v___x_73_; uint8_t v___x_74_; 
v___x_72_ = l_Lean_Expr_appFnCleanup___redArg(v___x_69_);
v___x_73_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isIntNum___closed__2, &l_Lean_Meta_Grind_Arith_isIntNum___closed__2_once, _init_l_Lean_Meta_Grind_Arith_isIntNum___closed__2);
v___x_74_ = l_Lean_Expr_isConstOf(v___x_72_, v___x_73_);
lean_dec_ref(v___x_72_);
if (v___x_74_ == 0)
{
uint8_t v___x_75_; 
lean_dec_ref(v_arg_68_);
lean_dec_ref(v_arg_64_);
v___x_75_ = l_Lean_Meta_Grind_Arith_isNonnegIntNum(v_e_60_);
return v___x_75_;
}
else
{
lean_object* v___x_76_; lean_object* v___x_77_; uint8_t v___x_78_; 
lean_dec_ref(v_e_60_);
v___x_76_ = l_Lean_Expr_cleanupAnnotations(v_arg_68_);
v___x_77_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isIntNum___closed__5, &l_Lean_Meta_Grind_Arith_isIntNum___closed__5_once, _init_l_Lean_Meta_Grind_Arith_isIntNum___closed__5);
v___x_78_ = l_Lean_Expr_isConstOf(v___x_76_, v___x_77_);
lean_dec_ref(v___x_76_);
if (v___x_78_ == 0)
{
lean_dec_ref(v_arg_64_);
return v___x_78_;
}
else
{
uint8_t v___x_79_; 
v___x_79_ = l_Lean_Meta_Grind_Arith_isNonnegIntNum(v_arg_64_);
return v___x_79_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isIntNum___boxed(lean_object* v_e_80_){
_start:
{
uint8_t v_res_81_; lean_object* v_r_82_; 
v_res_81_ = l_Lean_Meta_Grind_Arith_isIntNum(v_e_80_);
v_r_82_ = lean_box(v_res_81_);
return v_r_82_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isNum(lean_object* v_e_83_){
_start:
{
uint8_t v___x_84_; 
lean_inc_ref(v_e_83_);
v___x_84_ = l_Lean_Meta_Grind_Arith_isNatNum(v_e_83_);
if (v___x_84_ == 0)
{
uint8_t v___x_85_; 
v___x_85_ = l_Lean_Meta_Grind_Arith_isIntNum(v_e_83_);
return v___x_85_;
}
else
{
lean_dec_ref(v_e_83_);
return v___x_84_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isNum___boxed(lean_object* v_e_86_){
_start:
{
uint8_t v_res_87_; lean_object* v_r_88_; 
v_res_87_ = l_Lean_Meta_Grind_Arith_isNum(v_e_86_);
v_r_88_ = lean_box(v_res_87_);
return v_r_88_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isNatType___closed__0(void){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lean_mk_string_unchecked("Nat", 3, 3);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isNatType___closed__1(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNatType___closed__0, &l_Lean_Meta_Grind_Arith_isNatType___closed__0_once, _init_l_Lean_Meta_Grind_Arith_isNatType___closed__0);
v___x_91_ = l_Lean_Name_mkStr1(v___x_90_);
return v___x_91_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isNatType(lean_object* v_e_92_){
_start:
{
lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_93_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNatType___closed__1, &l_Lean_Meta_Grind_Arith_isNatType___closed__1_once, _init_l_Lean_Meta_Grind_Arith_isNatType___closed__1);
v___x_94_ = l_Lean_Expr_isConstOf(v_e_92_, v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isNatType___boxed(lean_object* v_e_95_){
_start:
{
uint8_t v_res_96_; lean_object* v_r_97_; 
v_res_96_ = l_Lean_Meta_Grind_Arith_isNatType(v_e_95_);
lean_dec_ref(v_e_95_);
v_r_97_ = lean_box(v_res_96_);
return v_r_97_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isIntType___closed__0(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_98_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isIntNum___closed__3, &l_Lean_Meta_Grind_Arith_isIntNum___closed__3_once, _init_l_Lean_Meta_Grind_Arith_isIntNum___closed__3);
v___x_99_ = l_Lean_Name_mkStr1(v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isIntType(lean_object* v_e_100_){
_start:
{
lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_101_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isIntType___closed__0, &l_Lean_Meta_Grind_Arith_isIntType___closed__0_once, _init_l_Lean_Meta_Grind_Arith_isIntType___closed__0);
v___x_102_ = l_Lean_Expr_isConstOf(v_e_100_, v___x_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isIntType___boxed(lean_object* v_e_103_){
_start:
{
uint8_t v_res_104_; lean_object* v_r_105_; 
v_res_104_ = l_Lean_Meta_Grind_Arith_isIntType(v_e_103_);
lean_dec_ref(v_e_103_);
v_r_105_ = lean_box(v_res_104_);
return v_r_105_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isInstAddNat___closed__0(void){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = lean_mk_string_unchecked("instHAdd", 8, 8);
return v___x_106_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isInstAddNat___closed__1(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isInstAddNat___closed__0, &l_Lean_Meta_Grind_Arith_isInstAddNat___closed__0_once, _init_l_Lean_Meta_Grind_Arith_isInstAddNat___closed__0);
v___x_108_ = l_Lean_Name_mkStr1(v___x_107_);
return v___x_108_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isInstAddNat___closed__2(void){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = lean_mk_string_unchecked("instAddNat", 10, 10);
return v___x_109_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isInstAddNat___closed__3(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isInstAddNat___closed__2, &l_Lean_Meta_Grind_Arith_isInstAddNat___closed__2_once, _init_l_Lean_Meta_Grind_Arith_isInstAddNat___closed__2);
v___x_111_ = l_Lean_Name_mkStr1(v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isInstAddNat(lean_object* v_e_112_){
_start:
{
lean_object* v___x_113_; uint8_t v___x_114_; 
v___x_113_ = l_Lean_Expr_cleanupAnnotations(v_e_112_);
v___x_114_ = l_Lean_Expr_isApp(v___x_113_);
if (v___x_114_ == 0)
{
lean_dec_ref(v___x_113_);
return v___x_114_;
}
else
{
lean_object* v_arg_115_; lean_object* v___x_116_; uint8_t v___x_117_; 
v_arg_115_ = lean_ctor_get(v___x_113_, 1);
lean_inc_ref(v_arg_115_);
v___x_116_ = l_Lean_Expr_appFnCleanup___redArg(v___x_113_);
v___x_117_ = l_Lean_Expr_isApp(v___x_116_);
if (v___x_117_ == 0)
{
lean_dec_ref(v___x_116_);
lean_dec_ref(v_arg_115_);
return v___x_117_;
}
else
{
lean_object* v_arg_118_; lean_object* v___x_119_; lean_object* v___x_120_; uint8_t v___x_121_; 
v_arg_118_ = lean_ctor_get(v___x_116_, 1);
lean_inc_ref(v_arg_118_);
v___x_119_ = l_Lean_Expr_appFnCleanup___redArg(v___x_116_);
v___x_120_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isInstAddNat___closed__1, &l_Lean_Meta_Grind_Arith_isInstAddNat___closed__1_once, _init_l_Lean_Meta_Grind_Arith_isInstAddNat___closed__1);
v___x_121_ = l_Lean_Expr_isConstOf(v___x_119_, v___x_120_);
lean_dec_ref(v___x_119_);
if (v___x_121_ == 0)
{
lean_dec_ref(v_arg_118_);
lean_dec_ref(v_arg_115_);
return v___x_121_;
}
else
{
uint8_t v___x_122_; 
v___x_122_ = l_Lean_Meta_Grind_Arith_isNatType(v_arg_118_);
lean_dec_ref(v_arg_118_);
if (v___x_122_ == 0)
{
lean_dec_ref(v_arg_115_);
return v___x_122_;
}
else
{
lean_object* v___x_123_; uint8_t v___x_124_; 
v___x_123_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isInstAddNat___closed__3, &l_Lean_Meta_Grind_Arith_isInstAddNat___closed__3_once, _init_l_Lean_Meta_Grind_Arith_isInstAddNat___closed__3);
v___x_124_ = l_Lean_Expr_isConstOf(v_arg_115_, v___x_123_);
lean_dec_ref(v_arg_115_);
return v___x_124_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isInstAddNat___boxed(lean_object* v_e_125_){
_start:
{
uint8_t v_res_126_; lean_object* v_r_127_; 
v_res_126_ = l_Lean_Meta_Grind_Arith_isInstAddNat(v_e_125_);
v_r_127_ = lean_box(v_res_126_);
return v_r_127_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isInstLENat___closed__0(void){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = lean_mk_string_unchecked("instLENat", 9, 9);
return v___x_128_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isInstLENat___closed__1(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isInstLENat___closed__0, &l_Lean_Meta_Grind_Arith_isInstLENat___closed__0_once, _init_l_Lean_Meta_Grind_Arith_isInstLENat___closed__0);
v___x_130_ = l_Lean_Name_mkStr1(v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isInstLENat(lean_object* v_e_131_){
_start:
{
lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_132_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isInstLENat___closed__1, &l_Lean_Meta_Grind_Arith_isInstLENat___closed__1_once, _init_l_Lean_Meta_Grind_Arith_isInstLENat___closed__1);
v___x_133_ = l_Lean_Expr_isConstOf(v_e_131_, v___x_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isInstLENat___boxed(lean_object* v_e_134_){
_start:
{
uint8_t v_res_135_; lean_object* v_r_136_; 
v_res_135_ = l_Lean_Meta_Grind_Arith_isInstLENat(v_e_134_);
lean_dec_ref(v_e_134_);
v_r_136_ = lean_box(v_res_135_);
return v_r_136_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__0(void){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lean_mk_string_unchecked("HAdd", 4, 4);
return v___x_137_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__1(void){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lean_mk_string_unchecked("hAdd", 4, 4);
return v___x_138_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__2(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_139_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__1, &l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__1_once, _init_l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__1);
v___x_140_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__0, &l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__0_once, _init_l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__0);
v___x_141_ = l_Lean_Name_mkStr2(v___x_140_, v___x_139_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isNatAdd_x3f(lean_object* v_e_142_){
_start:
{
lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_143_ = l_Lean_Expr_cleanupAnnotations(v_e_142_);
v___x_144_ = l_Lean_Expr_isApp(v___x_143_);
if (v___x_144_ == 0)
{
lean_object* v___x_145_; 
lean_dec_ref(v___x_143_);
v___x_145_ = lean_box(0);
return v___x_145_;
}
else
{
lean_object* v_arg_146_; lean_object* v___x_147_; uint8_t v___x_148_; 
v_arg_146_ = lean_ctor_get(v___x_143_, 1);
lean_inc_ref(v_arg_146_);
v___x_147_ = l_Lean_Expr_appFnCleanup___redArg(v___x_143_);
v___x_148_ = l_Lean_Expr_isApp(v___x_147_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; 
lean_dec_ref(v___x_147_);
lean_dec_ref(v_arg_146_);
v___x_149_ = lean_box(0);
return v___x_149_;
}
else
{
lean_object* v_arg_150_; lean_object* v___x_151_; uint8_t v___x_152_; 
v_arg_150_ = lean_ctor_get(v___x_147_, 1);
lean_inc_ref(v_arg_150_);
v___x_151_ = l_Lean_Expr_appFnCleanup___redArg(v___x_147_);
v___x_152_ = l_Lean_Expr_isApp(v___x_151_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; 
lean_dec_ref(v___x_151_);
lean_dec_ref(v_arg_150_);
lean_dec_ref(v_arg_146_);
v___x_153_ = lean_box(0);
return v___x_153_;
}
else
{
lean_object* v_arg_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
v_arg_154_ = lean_ctor_get(v___x_151_, 1);
lean_inc_ref(v_arg_154_);
v___x_155_ = l_Lean_Expr_appFnCleanup___redArg(v___x_151_);
v___x_156_ = l_Lean_Expr_isApp(v___x_155_);
if (v___x_156_ == 0)
{
lean_object* v___x_157_; 
lean_dec_ref(v___x_155_);
lean_dec_ref(v_arg_154_);
lean_dec_ref(v_arg_150_);
lean_dec_ref(v_arg_146_);
v___x_157_ = lean_box(0);
return v___x_157_;
}
else
{
lean_object* v___x_158_; uint8_t v___x_159_; 
v___x_158_ = l_Lean_Expr_appFnCleanup___redArg(v___x_155_);
v___x_159_ = l_Lean_Expr_isApp(v___x_158_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; 
lean_dec_ref(v___x_158_);
lean_dec_ref(v_arg_154_);
lean_dec_ref(v_arg_150_);
lean_dec_ref(v_arg_146_);
v___x_160_ = lean_box(0);
return v___x_160_;
}
else
{
lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_161_ = l_Lean_Expr_appFnCleanup___redArg(v___x_158_);
v___x_162_ = l_Lean_Expr_isApp(v___x_161_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; 
lean_dec_ref(v___x_161_);
lean_dec_ref(v_arg_154_);
lean_dec_ref(v_arg_150_);
lean_dec_ref(v_arg_146_);
v___x_163_ = lean_box(0);
return v___x_163_;
}
else
{
lean_object* v___x_164_; lean_object* v___x_165_; uint8_t v___x_166_; 
v___x_164_ = l_Lean_Expr_appFnCleanup___redArg(v___x_161_);
v___x_165_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__2, &l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__2_once, _init_l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__2);
v___x_166_ = l_Lean_Expr_isConstOf(v___x_164_, v___x_165_);
lean_dec_ref(v___x_164_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; 
lean_dec_ref(v_arg_154_);
lean_dec_ref(v_arg_150_);
lean_dec_ref(v_arg_146_);
v___x_167_ = lean_box(0);
return v___x_167_;
}
else
{
uint8_t v___x_168_; 
v___x_168_ = l_Lean_Meta_Grind_Arith_isInstAddNat(v_arg_154_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; 
lean_dec_ref(v_arg_150_);
lean_dec_ref(v_arg_146_);
v___x_169_ = lean_box(0);
return v___x_169_;
}
else
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_170_, 0, v_arg_150_);
lean_ctor_set(v___x_170_, 1, v_arg_146_);
v___x_171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
return v___x_171_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isNatAdd(lean_object* v_e_172_){
_start:
{
lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_173_ = l_Lean_Expr_cleanupAnnotations(v_e_172_);
v___x_174_ = l_Lean_Expr_isApp(v___x_173_);
if (v___x_174_ == 0)
{
lean_dec_ref(v___x_173_);
return v___x_174_;
}
else
{
lean_object* v___x_175_; uint8_t v___x_176_; 
v___x_175_ = l_Lean_Expr_appFnCleanup___redArg(v___x_173_);
v___x_176_ = l_Lean_Expr_isApp(v___x_175_);
if (v___x_176_ == 0)
{
lean_dec_ref(v___x_175_);
return v___x_176_;
}
else
{
lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_177_ = l_Lean_Expr_appFnCleanup___redArg(v___x_175_);
v___x_178_ = l_Lean_Expr_isApp(v___x_177_);
if (v___x_178_ == 0)
{
lean_dec_ref(v___x_177_);
return v___x_178_;
}
else
{
lean_object* v_arg_179_; lean_object* v___x_180_; uint8_t v___x_181_; 
v_arg_179_ = lean_ctor_get(v___x_177_, 1);
lean_inc_ref(v_arg_179_);
v___x_180_ = l_Lean_Expr_appFnCleanup___redArg(v___x_177_);
v___x_181_ = l_Lean_Expr_isApp(v___x_180_);
if (v___x_181_ == 0)
{
lean_dec_ref(v___x_180_);
lean_dec_ref(v_arg_179_);
return v___x_181_;
}
else
{
lean_object* v___x_182_; uint8_t v___x_183_; 
v___x_182_ = l_Lean_Expr_appFnCleanup___redArg(v___x_180_);
v___x_183_ = l_Lean_Expr_isApp(v___x_182_);
if (v___x_183_ == 0)
{
lean_dec_ref(v___x_182_);
lean_dec_ref(v_arg_179_);
return v___x_183_;
}
else
{
lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_184_ = l_Lean_Expr_appFnCleanup___redArg(v___x_182_);
v___x_185_ = l_Lean_Expr_isApp(v___x_184_);
if (v___x_185_ == 0)
{
lean_dec_ref(v___x_184_);
lean_dec_ref(v_arg_179_);
return v___x_185_;
}
else
{
lean_object* v___x_186_; lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_186_ = l_Lean_Expr_appFnCleanup___redArg(v___x_184_);
v___x_187_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__2, &l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__2_once, _init_l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__2);
v___x_188_ = l_Lean_Expr_isConstOf(v___x_186_, v___x_187_);
lean_dec_ref(v___x_186_);
if (v___x_188_ == 0)
{
lean_dec_ref(v_arg_179_);
return v___x_188_;
}
else
{
uint8_t v___x_189_; 
v___x_189_ = l_Lean_Meta_Grind_Arith_isInstAddNat(v_arg_179_);
return v___x_189_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isNatAdd___boxed(lean_object* v_e_190_){
_start:
{
uint8_t v_res_191_; lean_object* v_r_192_; 
v_res_191_ = l_Lean_Meta_Grind_Arith_isNatAdd(v_e_190_);
v_r_192_ = lean_box(v_res_191_);
return v_r_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isNatNum_x3f(lean_object* v_e_193_){
_start:
{
lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_194_ = l_Lean_Expr_cleanupAnnotations(v_e_193_);
v___x_195_ = l_Lean_Expr_isApp(v___x_194_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; 
lean_dec_ref(v___x_194_);
v___x_196_ = lean_box(0);
return v___x_196_;
}
else
{
lean_object* v_arg_197_; lean_object* v___x_198_; uint8_t v___x_199_; 
v_arg_197_ = lean_ctor_get(v___x_194_, 1);
lean_inc_ref(v_arg_197_);
v___x_198_ = l_Lean_Expr_appFnCleanup___redArg(v___x_194_);
v___x_199_ = l_Lean_Expr_isApp(v___x_198_);
if (v___x_199_ == 0)
{
lean_object* v___x_200_; 
lean_dec_ref(v___x_198_);
lean_dec_ref(v_arg_197_);
v___x_200_ = lean_box(0);
return v___x_200_;
}
else
{
lean_object* v___x_201_; uint8_t v___x_202_; 
v___x_201_ = l_Lean_Expr_appFnCleanup___redArg(v___x_198_);
v___x_202_ = l_Lean_Expr_isApp(v___x_201_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; 
lean_dec_ref(v___x_201_);
lean_dec_ref(v_arg_197_);
v___x_203_ = lean_box(0);
return v___x_203_;
}
else
{
lean_object* v___x_204_; lean_object* v___x_205_; uint8_t v___x_206_; 
v___x_204_ = l_Lean_Expr_appFnCleanup___redArg(v___x_201_);
v___x_205_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNatNum___closed__2, &l_Lean_Meta_Grind_Arith_isNatNum___closed__2_once, _init_l_Lean_Meta_Grind_Arith_isNatNum___closed__2);
v___x_206_ = l_Lean_Expr_isConstOf(v___x_204_, v___x_205_);
lean_dec_ref(v___x_204_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; 
lean_dec_ref(v_arg_197_);
v___x_207_ = lean_box(0);
return v___x_207_;
}
else
{
lean_object* v___x_208_; uint8_t v___x_209_; 
v___x_208_ = l_Lean_Expr_cleanupAnnotations(v_arg_197_);
v___x_209_ = l_Lean_Expr_isApp(v___x_208_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; 
lean_dec_ref(v___x_208_);
v___x_210_ = lean_box(0);
return v___x_210_;
}
else
{
lean_object* v_arg_211_; lean_object* v___x_212_; lean_object* v___x_213_; uint8_t v___x_214_; 
v_arg_211_ = lean_ctor_get(v___x_208_, 1);
lean_inc_ref(v_arg_211_);
v___x_212_ = l_Lean_Expr_appFnCleanup___redArg(v___x_208_);
v___x_213_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNatNum___closed__4, &l_Lean_Meta_Grind_Arith_isNatNum___closed__4_once, _init_l_Lean_Meta_Grind_Arith_isNatNum___closed__4);
v___x_214_ = l_Lean_Expr_isConstOf(v___x_212_, v___x_213_);
lean_dec_ref(v___x_212_);
if (v___x_214_ == 0)
{
lean_object* v___x_215_; 
lean_dec_ref(v_arg_211_);
v___x_215_ = lean_box(0);
return v___x_215_;
}
else
{
if (lean_obj_tag(v_arg_211_) == 9)
{
lean_object* v_a_216_; 
v_a_216_ = lean_ctor_get(v_arg_211_, 0);
lean_inc_ref(v_a_216_);
lean_dec_ref(v_arg_211_);
if (lean_obj_tag(v_a_216_) == 0)
{
lean_object* v_val_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_224_; 
v_val_217_ = lean_ctor_get(v_a_216_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v_a_216_);
if (v_isSharedCheck_224_ == 0)
{
v___x_219_ = v_a_216_;
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_val_217_);
lean_dec(v_a_216_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_222_; 
if (v_isShared_220_ == 0)
{
lean_ctor_set_tag(v___x_219_, 1);
v___x_222_ = v___x_219_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_val_217_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
else
{
lean_object* v___x_225_; 
lean_dec_ref(v_a_216_);
v___x_225_ = lean_box(0);
return v___x_225_;
}
}
else
{
lean_object* v___x_226_; 
lean_dec_ref(v_arg_211_);
v___x_226_ = lean_box(0);
return v___x_226_;
}
}
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__0(void){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = lean_mk_string_unchecked("IntCast", 7, 7);
return v___x_227_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__1(void){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = lean_mk_string_unchecked("intCast", 7, 7);
return v___x_228_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__2(void){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_229_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__1, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__1_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__1);
v___x_230_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__0, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__0_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__0);
v___x_231_ = l_Lean_Name_mkStr2(v___x_230_, v___x_229_);
return v___x_231_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__3(void){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = lean_mk_string_unchecked("NatCast", 7, 7);
return v___x_232_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__4(void){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = lean_mk_string_unchecked("natCast", 7, 7);
return v___x_233_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__5(void){
_start:
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_234_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__4, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__4_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__4);
v___x_235_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__3, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__3_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__3);
v___x_236_ = l_Lean_Name_mkStr2(v___x_235_, v___x_234_);
return v___x_236_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__6(void){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = lean_mk_string_unchecked("HSMul", 5, 5);
return v___x_237_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__7(void){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = lean_mk_string_unchecked("hSMul", 5, 5);
return v___x_238_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__8(void){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_239_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__7, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__7_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__7);
v___x_240_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__6, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__6_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__6);
v___x_241_ = l_Lean_Name_mkStr2(v___x_240_, v___x_239_);
return v___x_241_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__9(void){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = lean_mk_string_unchecked("HPow", 4, 4);
return v___x_242_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__10(void){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = lean_mk_string_unchecked("hPow", 4, 4);
return v___x_243_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__11(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_244_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__10, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__10_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__10);
v___x_245_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__9, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__9_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__9);
v___x_246_ = l_Lean_Name_mkStr2(v___x_245_, v___x_244_);
return v___x_246_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__12(void){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = lean_mk_string_unchecked("HMod", 4, 4);
return v___x_247_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__13(void){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = lean_mk_string_unchecked("hMod", 4, 4);
return v___x_248_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__14(void){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_249_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__13, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__13_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__13);
v___x_250_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__12, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__12_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__12);
v___x_251_ = l_Lean_Name_mkStr2(v___x_250_, v___x_249_);
return v___x_251_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__15(void){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = lean_mk_string_unchecked("HDiv", 4, 4);
return v___x_252_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__16(void){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = lean_mk_string_unchecked("hDiv", 4, 4);
return v___x_253_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__17(void){
_start:
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_254_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__16, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__16_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__16);
v___x_255_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__15, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__15_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__15);
v___x_256_ = l_Lean_Name_mkStr2(v___x_255_, v___x_254_);
return v___x_256_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__18(void){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = lean_mk_string_unchecked("HMul", 4, 4);
return v___x_257_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__19(void){
_start:
{
lean_object* v___x_258_; 
v___x_258_ = lean_mk_string_unchecked("hMul", 4, 4);
return v___x_258_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__20(void){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_259_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__19, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__19_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__19);
v___x_260_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__18, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__18_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__18);
v___x_261_ = l_Lean_Name_mkStr2(v___x_260_, v___x_259_);
return v___x_261_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__21(void){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = lean_mk_string_unchecked("HSub", 4, 4);
return v___x_262_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__22(void){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = lean_mk_string_unchecked("hSub", 4, 4);
return v___x_263_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__23(void){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_264_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__22, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__22_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__22);
v___x_265_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__21, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__21_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__21);
v___x_266_ = l_Lean_Name_mkStr2(v___x_265_, v___x_264_);
return v___x_266_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isArithTerm(lean_object* v_e_267_){
_start:
{
lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_268_ = l_Lean_Expr_cleanupAnnotations(v_e_267_);
v___x_269_ = l_Lean_Expr_isApp(v___x_268_);
if (v___x_269_ == 0)
{
lean_dec_ref(v___x_268_);
return v___x_269_;
}
else
{
lean_object* v___x_270_; uint8_t v___x_271_; 
v___x_270_ = l_Lean_Expr_appFnCleanup___redArg(v___x_268_);
v___x_271_ = l_Lean_Expr_isApp(v___x_270_);
if (v___x_271_ == 0)
{
lean_dec_ref(v___x_270_);
return v___x_271_;
}
else
{
lean_object* v___x_272_; uint8_t v___x_273_; 
v___x_272_ = l_Lean_Expr_appFnCleanup___redArg(v___x_270_);
v___x_273_ = l_Lean_Expr_isApp(v___x_272_);
if (v___x_273_ == 0)
{
lean_dec_ref(v___x_272_);
return v___x_273_;
}
else
{
lean_object* v___x_274_; lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_274_ = l_Lean_Expr_appFnCleanup___redArg(v___x_272_);
v___x_275_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__2, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__2_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__2);
v___x_276_ = l_Lean_Expr_isConstOf(v___x_274_, v___x_275_);
if (v___x_276_ == 0)
{
lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_277_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__5, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__5_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__5);
v___x_278_ = l_Lean_Expr_isConstOf(v___x_274_, v___x_277_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_279_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNatNum___closed__2, &l_Lean_Meta_Grind_Arith_isNatNum___closed__2_once, _init_l_Lean_Meta_Grind_Arith_isNatNum___closed__2);
v___x_280_ = l_Lean_Expr_isConstOf(v___x_274_, v___x_279_);
if (v___x_280_ == 0)
{
lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_281_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isIntNum___closed__2, &l_Lean_Meta_Grind_Arith_isIntNum___closed__2_once, _init_l_Lean_Meta_Grind_Arith_isIntNum___closed__2);
v___x_282_ = l_Lean_Expr_isConstOf(v___x_274_, v___x_281_);
if (v___x_282_ == 0)
{
uint8_t v___x_283_; 
v___x_283_ = l_Lean_Expr_isApp(v___x_274_);
if (v___x_283_ == 0)
{
lean_dec_ref(v___x_274_);
return v___x_283_;
}
else
{
lean_object* v___x_284_; uint8_t v___x_285_; 
v___x_284_ = l_Lean_Expr_appFnCleanup___redArg(v___x_274_);
v___x_285_ = l_Lean_Expr_isApp(v___x_284_);
if (v___x_285_ == 0)
{
lean_dec_ref(v___x_284_);
return v___x_285_;
}
else
{
lean_object* v___x_286_; uint8_t v___x_287_; 
v___x_286_ = l_Lean_Expr_appFnCleanup___redArg(v___x_284_);
v___x_287_ = l_Lean_Expr_isApp(v___x_286_);
if (v___x_287_ == 0)
{
lean_dec_ref(v___x_286_);
return v___x_287_;
}
else
{
lean_object* v___x_288_; lean_object* v___x_289_; uint8_t v___x_290_; 
v___x_288_ = l_Lean_Expr_appFnCleanup___redArg(v___x_286_);
v___x_289_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__8, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__8_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__8);
v___x_290_ = l_Lean_Expr_isConstOf(v___x_288_, v___x_289_);
if (v___x_290_ == 0)
{
lean_object* v___x_291_; uint8_t v___x_292_; 
v___x_291_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__11, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__11_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__11);
v___x_292_ = l_Lean_Expr_isConstOf(v___x_288_, v___x_291_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; uint8_t v___x_294_; 
v___x_293_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__14, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__14_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__14);
v___x_294_ = l_Lean_Expr_isConstOf(v___x_288_, v___x_293_);
if (v___x_294_ == 0)
{
lean_object* v___x_295_; uint8_t v___x_296_; 
v___x_295_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__17, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__17_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__17);
v___x_296_ = l_Lean_Expr_isConstOf(v___x_288_, v___x_295_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; uint8_t v___x_298_; 
v___x_297_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__20, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__20_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__20);
v___x_298_ = l_Lean_Expr_isConstOf(v___x_288_, v___x_297_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_299_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isArithTerm___closed__23, &l_Lean_Meta_Grind_Arith_isArithTerm___closed__23_once, _init_l_Lean_Meta_Grind_Arith_isArithTerm___closed__23);
v___x_300_ = l_Lean_Expr_isConstOf(v___x_288_, v___x_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_301_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__2, &l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__2_once, _init_l_Lean_Meta_Grind_Arith_isNatAdd_x3f___closed__2);
v___x_302_ = l_Lean_Expr_isConstOf(v___x_288_, v___x_301_);
lean_dec_ref(v___x_288_);
return v___x_302_;
}
else
{
lean_dec_ref(v___x_288_);
return v___x_300_;
}
}
else
{
lean_dec_ref(v___x_288_);
return v___x_298_;
}
}
else
{
lean_dec_ref(v___x_288_);
return v___x_296_;
}
}
else
{
lean_dec_ref(v___x_288_);
return v___x_294_;
}
}
else
{
lean_dec_ref(v___x_288_);
return v___x_292_;
}
}
else
{
lean_dec_ref(v___x_288_);
return v___x_290_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_274_);
return v___x_282_;
}
}
else
{
lean_dec_ref(v___x_274_);
return v___x_280_;
}
}
else
{
lean_dec_ref(v___x_274_);
return v___x_278_;
}
}
else
{
lean_dec_ref(v___x_274_);
return v___x_276_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isArithTerm___boxed(lean_object* v_e_303_){
_start:
{
uint8_t v_res_304_; lean_object* v_r_305_; 
v_res_304_ = l_Lean_Meta_Grind_Arith_isArithTerm(v_e_303_);
v_r_305_ = lean_box(v_res_304_);
return v_r_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_quoteIfArithTerm(lean_object* v_e_306_){
_start:
{
uint8_t v___x_307_; 
lean_inc_ref(v_e_306_);
v___x_307_ = l_Lean_Meta_Grind_Arith_isArithTerm(v_e_306_);
if (v___x_307_ == 0)
{
lean_object* v___x_308_; 
v___x_308_ = l_Lean_MessageData_ofExpr(v_e_306_);
return v___x_308_;
}
else
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = l_Lean_MessageData_ofExpr(v_e_306_);
v___x_310_ = l_Lean_aquote(v___x_309_);
return v___x_310_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_Arith_gcdExt_spec__0(lean_object* v_a_311_){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = lean_nat_to_int(v_a_311_);
return v___x_312_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_gcdExt___closed__0(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = lean_unsigned_to_nat(0u);
v___x_314_ = lean_nat_to_int(v___x_313_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_gcdExt(lean_object* v_a_315_, lean_object* v_b_316_){
_start:
{
lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_317_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_gcdExt___closed__0, &l_Lean_Meta_Grind_Arith_gcdExt___closed__0_once, _init_l_Lean_Meta_Grind_Arith_gcdExt___closed__0);
v___x_318_ = lean_int_dec_eq(v_b_316_, v___x_317_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v_snd_321_; lean_object* v_fst_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_341_; 
v___x_319_ = lean_int_emod(v_a_315_, v_b_316_);
v___x_320_ = l_Lean_Meta_Grind_Arith_gcdExt(v_b_316_, v___x_319_);
lean_dec(v___x_319_);
v_snd_321_ = lean_ctor_get(v___x_320_, 1);
v_fst_322_ = lean_ctor_get(v___x_320_, 0);
v_isSharedCheck_341_ = !lean_is_exclusive(v___x_320_);
if (v_isSharedCheck_341_ == 0)
{
v___x_324_ = v___x_320_;
v_isShared_325_ = v_isSharedCheck_341_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_snd_321_);
lean_inc(v_fst_322_);
lean_dec(v___x_320_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_341_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v_fst_326_; lean_object* v_snd_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_340_; 
v_fst_326_ = lean_ctor_get(v_snd_321_, 0);
v_snd_327_ = lean_ctor_get(v_snd_321_, 1);
v_isSharedCheck_340_ = !lean_is_exclusive(v_snd_321_);
if (v_isSharedCheck_340_ == 0)
{
v___x_329_ = v_snd_321_;
v_isShared_330_ = v_isSharedCheck_340_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_snd_327_);
lean_inc(v_fst_326_);
lean_dec(v_snd_321_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_340_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_335_; 
v___x_331_ = lean_int_ediv(v_a_315_, v_b_316_);
v___x_332_ = lean_int_mul(v___x_331_, v_snd_327_);
lean_dec(v___x_331_);
v___x_333_ = lean_int_sub(v_fst_326_, v___x_332_);
lean_dec(v___x_332_);
lean_dec(v_fst_326_);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 1, v___x_333_);
lean_ctor_set(v___x_329_, 0, v_snd_327_);
v___x_335_ = v___x_329_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_snd_327_);
lean_ctor_set(v_reuseFailAlloc_339_, 1, v___x_333_);
v___x_335_ = v_reuseFailAlloc_339_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
lean_object* v___x_337_; 
if (v_isShared_325_ == 0)
{
lean_ctor_set(v___x_324_, 1, v___x_335_);
v___x_337_ = v___x_324_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_fst_322_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v___x_335_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
}
}
else
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___y_345_; uint8_t v___x_348_; 
v___x_342_ = lean_nat_abs(v_a_315_);
v___x_343_ = lean_nat_to_int(v___x_342_);
v___x_348_ = lean_int_dec_eq(v_a_315_, v___x_317_);
if (v___x_348_ == 0)
{
lean_object* v___x_349_; 
v___x_349_ = lean_int_ediv(v_a_315_, v___x_343_);
v___y_345_ = v___x_349_;
goto v___jp_344_;
}
else
{
v___y_345_ = v___x_317_;
goto v___jp_344_;
}
v___jp_344_:
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_346_, 0, v___y_345_);
lean_ctor_set(v___x_346_, 1, v___x_317_);
v___x_347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_347_, 0, v___x_343_);
lean_ctor_set(v___x_347_, 1, v___x_346_);
return v___x_347_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_gcdExt___boxed(lean_object* v_a_350_, lean_object* v_b_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Lean_Meta_Grind_Arith_gcdExt(v_a_350_, v_b_351_);
lean_dec(v_b_351_);
lean_dec(v_a_350_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_shrink(lean_object* v_a_353_, lean_object* v_sz_354_){
_start:
{
lean_object* v_size_355_; uint8_t v___x_356_; 
v_size_355_ = lean_ctor_get(v_a_353_, 2);
v___x_356_ = lean_nat_dec_lt(v_sz_354_, v_size_355_);
if (v___x_356_ == 0)
{
return v_a_353_;
}
else
{
lean_object* v___x_357_; 
v___x_357_ = l_Lean_PersistentArray_pop___redArg(v_a_353_);
v_a_353_ = v___x_357_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_shrink___boxed(lean_object* v_a_359_, lean_object* v_sz_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_Meta_Grind_Arith_shrink(v_a_359_, v_sz_360_);
lean_dec(v_sz_360_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_resize_go_spec__0(lean_object* v_a_362_){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_363_ = lean_nat_to_int(v_a_362_);
v___x_364_ = l_Rat_ofInt(v___x_363_);
return v___x_364_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_resize_go___closed__0(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = lean_unsigned_to_nat(0u);
v___x_366_ = l_Nat_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_resize_go_spec__0(v___x_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_resize_go(lean_object* v_sz_367_, lean_object* v_a_368_){
_start:
{
lean_object* v_size_369_; uint8_t v___x_370_; 
v_size_369_ = lean_ctor_get(v_a_368_, 2);
v___x_370_ = lean_nat_dec_lt(v_size_369_, v_sz_367_);
if (v___x_370_ == 0)
{
return v_a_368_;
}
else
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_resize_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_resize_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_resize_go___closed__0);
v___x_372_ = l_Lean_PersistentArray_push___redArg(v_a_368_, v___x_371_);
v_a_368_ = v___x_372_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_resize_go___boxed(lean_object* v_sz_374_, lean_object* v_a_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_resize_go(v_sz_374_, v_a_375_);
lean_dec(v_sz_374_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_resize(lean_object* v_a_377_, lean_object* v_sz_378_){
_start:
{
lean_object* v_size_379_; uint8_t v___x_380_; 
v_size_379_ = lean_ctor_get(v_a_377_, 2);
v___x_380_ = lean_nat_dec_lt(v_sz_378_, v_size_379_);
if (v___x_380_ == 0)
{
lean_object* v___x_381_; 
v___x_381_ = l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_resize_go(v_sz_378_, v_a_377_);
return v___x_381_;
}
else
{
lean_object* v___x_382_; 
v___x_382_ = l_Lean_Meta_Grind_Arith_shrink(v_a_377_, v_sz_378_);
return v___x_382_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_resize___boxed(lean_object* v_a_383_, lean_object* v_sz_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_Meta_Grind_Arith_resize(v_a_383_, v_sz_384_);
lean_dec(v_sz_384_);
return v_res_385_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_unsafe__1___redArg(lean_object* v_c_386_){
_start:
{
size_t v___x_387_; uint64_t v___x_388_; uint64_t v___x_389_; uint64_t v___x_390_; 
v___x_387_ = lean_ptr_addr(v_c_386_);
v___x_388_ = lean_usize_to_uint64(v___x_387_);
v___x_389_ = 2ULL;
v___x_390_ = lean_uint64_shift_right(v___x_388_, v___x_389_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_unsafe__1___redArg___boxed(lean_object* v_c_391_){
_start:
{
uint64_t v_res_392_; lean_object* v_r_393_; 
v_res_392_ = l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_unsafe__1___redArg(v_c_391_);
lean_dec(v_c_391_);
v_r_393_ = lean_box_uint64(v_res_392_);
return v_r_393_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_unsafe__1(lean_object* v_00_u03b1_394_, lean_object* v_c_395_){
_start:
{
uint64_t v___x_396_; 
v___x_396_ = l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_unsafe__1___redArg(v_c_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_unsafe__1___boxed(lean_object* v_00_u03b1_397_, lean_object* v_c_398_){
_start:
{
uint64_t v_res_399_; lean_object* v_r_400_; 
v_res_399_ = l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_unsafe__1(v_00_u03b1_397_, v_c_398_);
lean_dec(v_c_398_);
v_r_400_ = lean_box_uint64(v_res_399_);
return v_r_400_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0_spec__0___redArg(uint64_t v_a_401_, lean_object* v_x_402_){
_start:
{
if (lean_obj_tag(v_x_402_) == 0)
{
uint8_t v___x_403_; 
v___x_403_ = 0;
return v___x_403_;
}
else
{
lean_object* v_key_404_; lean_object* v_tail_405_; uint64_t v___x_406_; uint8_t v___x_407_; 
v_key_404_ = lean_ctor_get(v_x_402_, 0);
v_tail_405_ = lean_ctor_get(v_x_402_, 2);
v___x_406_ = lean_unbox_uint64(v_key_404_);
v___x_407_ = lean_uint64_dec_eq(v___x_406_, v_a_401_);
if (v___x_407_ == 0)
{
v_x_402_ = v_tail_405_;
goto _start;
}
else
{
return v___x_407_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0_spec__0___redArg___boxed(lean_object* v_a_409_, lean_object* v_x_410_){
_start:
{
uint64_t v_a_boxed_411_; uint8_t v_res_412_; lean_object* v_r_413_; 
v_a_boxed_411_ = lean_unbox_uint64(v_a_409_);
lean_dec_ref(v_a_409_);
v_res_412_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0_spec__0___redArg(v_a_boxed_411_, v_x_410_);
lean_dec(v_x_410_);
v_r_413_ = lean_box(v_res_412_);
return v_r_413_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_414_, lean_object* v_x_415_){
_start:
{
if (lean_obj_tag(v_x_415_) == 0)
{
return v_x_414_;
}
else
{
lean_object* v_key_416_; lean_object* v_value_417_; lean_object* v_tail_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_442_; 
v_key_416_ = lean_ctor_get(v_x_415_, 0);
v_value_417_ = lean_ctor_get(v_x_415_, 1);
v_tail_418_ = lean_ctor_get(v_x_415_, 2);
v_isSharedCheck_442_ = !lean_is_exclusive(v_x_415_);
if (v_isSharedCheck_442_ == 0)
{
v___x_420_ = v_x_415_;
v_isShared_421_ = v_isSharedCheck_442_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_tail_418_);
lean_inc(v_value_417_);
lean_inc(v_key_416_);
lean_dec(v_x_415_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_442_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_422_; uint64_t v___x_423_; uint64_t v___x_424_; uint64_t v___x_425_; uint64_t v___x_426_; uint64_t v_fold_427_; uint64_t v___x_428_; uint64_t v___x_429_; uint64_t v___x_430_; size_t v___x_431_; size_t v___x_432_; size_t v___x_433_; size_t v___x_434_; size_t v___x_435_; lean_object* v___x_436_; lean_object* v___x_438_; 
v___x_422_ = lean_array_get_size(v_x_414_);
v___x_423_ = 32ULL;
v___x_424_ = lean_unbox_uint64(v_key_416_);
v___x_425_ = lean_uint64_shift_right(v___x_424_, v___x_423_);
v___x_426_ = lean_unbox_uint64(v_key_416_);
v_fold_427_ = lean_uint64_xor(v___x_426_, v___x_425_);
v___x_428_ = 16ULL;
v___x_429_ = lean_uint64_shift_right(v_fold_427_, v___x_428_);
v___x_430_ = lean_uint64_xor(v_fold_427_, v___x_429_);
v___x_431_ = lean_uint64_to_usize(v___x_430_);
v___x_432_ = lean_usize_of_nat(v___x_422_);
v___x_433_ = ((size_t)1ULL);
v___x_434_ = lean_usize_sub(v___x_432_, v___x_433_);
v___x_435_ = lean_usize_land(v___x_431_, v___x_434_);
v___x_436_ = lean_array_uget_borrowed(v_x_414_, v___x_435_);
lean_inc(v___x_436_);
if (v_isShared_421_ == 0)
{
lean_ctor_set(v___x_420_, 2, v___x_436_);
v___x_438_ = v___x_420_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_key_416_);
lean_ctor_set(v_reuseFailAlloc_441_, 1, v_value_417_);
lean_ctor_set(v_reuseFailAlloc_441_, 2, v___x_436_);
v___x_438_ = v_reuseFailAlloc_441_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
lean_object* v___x_439_; 
v___x_439_ = lean_array_uset(v_x_414_, v___x_435_, v___x_438_);
v_x_414_ = v___x_439_;
v_x_415_ = v_tail_418_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2_spec__3___redArg(lean_object* v_i_443_, lean_object* v_source_444_, lean_object* v_target_445_){
_start:
{
lean_object* v___x_446_; uint8_t v___x_447_; 
v___x_446_ = lean_array_get_size(v_source_444_);
v___x_447_ = lean_nat_dec_lt(v_i_443_, v___x_446_);
if (v___x_447_ == 0)
{
lean_dec_ref(v_source_444_);
lean_dec(v_i_443_);
return v_target_445_;
}
else
{
lean_object* v_es_448_; lean_object* v___x_449_; lean_object* v_source_450_; lean_object* v_target_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v_es_448_ = lean_array_fget(v_source_444_, v_i_443_);
v___x_449_ = lean_box(0);
v_source_450_ = lean_array_fset(v_source_444_, v_i_443_, v___x_449_);
v_target_451_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2_spec__3_spec__4___redArg(v_target_445_, v_es_448_);
v___x_452_ = lean_unsigned_to_nat(1u);
v___x_453_ = lean_nat_add(v_i_443_, v___x_452_);
lean_dec(v_i_443_);
v_i_443_ = v___x_453_;
v_source_444_ = v_source_450_;
v_target_445_ = v_target_451_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2___redArg(lean_object* v_data_455_){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v_nbuckets_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_456_ = lean_array_get_size(v_data_455_);
v___x_457_ = lean_unsigned_to_nat(2u);
v_nbuckets_458_ = lean_nat_mul(v___x_456_, v___x_457_);
v___x_459_ = lean_unsigned_to_nat(0u);
v___x_460_ = lean_box(0);
v___x_461_ = lean_mk_array(v_nbuckets_458_, v___x_460_);
v___x_462_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2_spec__3___redArg(v___x_459_, v_data_455_, v___x_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1___redArg(lean_object* v_m_463_, uint64_t v_a_464_, lean_object* v_b_465_){
_start:
{
lean_object* v_size_466_; lean_object* v_buckets_467_; lean_object* v___x_468_; uint64_t v___x_469_; uint64_t v___x_470_; uint64_t v_fold_471_; uint64_t v___x_472_; uint64_t v___x_473_; uint64_t v___x_474_; size_t v___x_475_; size_t v___x_476_; size_t v___x_477_; size_t v___x_478_; size_t v___x_479_; lean_object* v_bkt_480_; uint8_t v___x_481_; 
v_size_466_ = lean_ctor_get(v_m_463_, 0);
v_buckets_467_ = lean_ctor_get(v_m_463_, 1);
v___x_468_ = lean_array_get_size(v_buckets_467_);
v___x_469_ = 32ULL;
v___x_470_ = lean_uint64_shift_right(v_a_464_, v___x_469_);
v_fold_471_ = lean_uint64_xor(v_a_464_, v___x_470_);
v___x_472_ = 16ULL;
v___x_473_ = lean_uint64_shift_right(v_fold_471_, v___x_472_);
v___x_474_ = lean_uint64_xor(v_fold_471_, v___x_473_);
v___x_475_ = lean_uint64_to_usize(v___x_474_);
v___x_476_ = lean_usize_of_nat(v___x_468_);
v___x_477_ = ((size_t)1ULL);
v___x_478_ = lean_usize_sub(v___x_476_, v___x_477_);
v___x_479_ = lean_usize_land(v___x_475_, v___x_478_);
v_bkt_480_ = lean_array_uget_borrowed(v_buckets_467_, v___x_479_);
v___x_481_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0_spec__0___redArg(v_a_464_, v_bkt_480_);
if (v___x_481_ == 0)
{
lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_503_; 
lean_inc_ref(v_buckets_467_);
lean_inc(v_size_466_);
v_isSharedCheck_503_ = !lean_is_exclusive(v_m_463_);
if (v_isSharedCheck_503_ == 0)
{
lean_object* v_unused_504_; lean_object* v_unused_505_; 
v_unused_504_ = lean_ctor_get(v_m_463_, 1);
lean_dec(v_unused_504_);
v_unused_505_ = lean_ctor_get(v_m_463_, 0);
lean_dec(v_unused_505_);
v___x_483_ = v_m_463_;
v_isShared_484_ = v_isSharedCheck_503_;
goto v_resetjp_482_;
}
else
{
lean_dec(v_m_463_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_503_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_485_; lean_object* v_size_x27_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v_buckets_x27_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; uint8_t v___x_495_; 
v___x_485_ = lean_unsigned_to_nat(1u);
v_size_x27_486_ = lean_nat_add(v_size_466_, v___x_485_);
lean_dec(v_size_466_);
v___x_487_ = lean_box_uint64(v_a_464_);
lean_inc(v_bkt_480_);
v___x_488_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_488_, 0, v___x_487_);
lean_ctor_set(v___x_488_, 1, v_b_465_);
lean_ctor_set(v___x_488_, 2, v_bkt_480_);
v_buckets_x27_489_ = lean_array_uset(v_buckets_467_, v___x_479_, v___x_488_);
v___x_490_ = lean_unsigned_to_nat(4u);
v___x_491_ = lean_nat_mul(v_size_x27_486_, v___x_490_);
v___x_492_ = lean_unsigned_to_nat(3u);
v___x_493_ = lean_nat_div(v___x_491_, v___x_492_);
lean_dec(v___x_491_);
v___x_494_ = lean_array_get_size(v_buckets_x27_489_);
v___x_495_ = lean_nat_dec_le(v___x_493_, v___x_494_);
lean_dec(v___x_493_);
if (v___x_495_ == 0)
{
lean_object* v_val_496_; lean_object* v___x_498_; 
v_val_496_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2___redArg(v_buckets_x27_489_);
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 1, v_val_496_);
lean_ctor_set(v___x_483_, 0, v_size_x27_486_);
v___x_498_ = v___x_483_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_size_x27_486_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v_val_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
else
{
lean_object* v___x_501_; 
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 1, v_buckets_x27_489_);
lean_ctor_set(v___x_483_, 0, v_size_x27_486_);
v___x_501_ = v___x_483_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_size_x27_486_);
lean_ctor_set(v_reuseFailAlloc_502_, 1, v_buckets_x27_489_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
}
else
{
lean_dec(v_b_465_);
return v_m_463_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1___redArg___boxed(lean_object* v_m_506_, lean_object* v_a_507_, lean_object* v_b_508_){
_start:
{
uint64_t v_a_boxed_509_; lean_object* v_res_510_; 
v_a_boxed_509_ = lean_unbox_uint64(v_a_507_);
lean_dec_ref(v_a_507_);
v_res_510_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1___redArg(v_m_506_, v_a_boxed_509_, v_b_508_);
return v_res_510_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0___redArg(lean_object* v_m_511_, uint64_t v_a_512_){
_start:
{
lean_object* v_buckets_513_; lean_object* v___x_514_; uint64_t v___x_515_; uint64_t v___x_516_; uint64_t v_fold_517_; uint64_t v___x_518_; uint64_t v___x_519_; uint64_t v___x_520_; size_t v___x_521_; size_t v___x_522_; size_t v___x_523_; size_t v___x_524_; size_t v___x_525_; lean_object* v___x_526_; uint8_t v___x_527_; 
v_buckets_513_ = lean_ctor_get(v_m_511_, 1);
v___x_514_ = lean_array_get_size(v_buckets_513_);
v___x_515_ = 32ULL;
v___x_516_ = lean_uint64_shift_right(v_a_512_, v___x_515_);
v_fold_517_ = lean_uint64_xor(v_a_512_, v___x_516_);
v___x_518_ = 16ULL;
v___x_519_ = lean_uint64_shift_right(v_fold_517_, v___x_518_);
v___x_520_ = lean_uint64_xor(v_fold_517_, v___x_519_);
v___x_521_ = lean_uint64_to_usize(v___x_520_);
v___x_522_ = lean_usize_of_nat(v___x_514_);
v___x_523_ = ((size_t)1ULL);
v___x_524_ = lean_usize_sub(v___x_522_, v___x_523_);
v___x_525_ = lean_usize_land(v___x_521_, v___x_524_);
v___x_526_ = lean_array_uget_borrowed(v_buckets_513_, v___x_525_);
v___x_527_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0_spec__0___redArg(v_a_512_, v___x_526_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0___redArg___boxed(lean_object* v_m_528_, lean_object* v_a_529_){
_start:
{
uint64_t v_a_boxed_530_; uint8_t v_res_531_; lean_object* v_r_532_; 
v_a_boxed_530_ = lean_unbox_uint64(v_a_529_);
lean_dec_ref(v_a_529_);
v_res_531_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0___redArg(v_m_528_, v_a_boxed_530_);
lean_dec_ref(v_m_528_);
v_r_532_ = lean_box(v_res_531_);
return v_r_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited___redArg(lean_object* v_c_533_, lean_object* v_a_534_){
_start:
{
lean_object* v_visited_535_; lean_object* v_found_536_; uint64_t v_addr_537_; uint8_t v___x_538_; 
v_visited_535_ = lean_ctor_get(v_a_534_, 0);
v_found_536_ = lean_ctor_get(v_a_534_, 1);
v_addr_537_ = l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_unsafe__1___redArg(v_c_533_);
v___x_538_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0___redArg(v_visited_535_, v_addr_537_);
if (v___x_538_ == 0)
{
lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_549_; 
lean_inc(v_found_536_);
lean_inc_ref(v_visited_535_);
v_isSharedCheck_549_ = !lean_is_exclusive(v_a_534_);
if (v_isSharedCheck_549_ == 0)
{
lean_object* v_unused_550_; lean_object* v_unused_551_; 
v_unused_550_ = lean_ctor_get(v_a_534_, 1);
lean_dec(v_unused_550_);
v_unused_551_ = lean_ctor_get(v_a_534_, 0);
lean_dec(v_unused_551_);
v___x_540_ = v_a_534_;
v_isShared_541_ = v_isSharedCheck_549_;
goto v_resetjp_539_;
}
else
{
lean_dec(v_a_534_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_549_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_545_; 
v___x_542_ = lean_box(0);
v___x_543_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1___redArg(v_visited_535_, v_addr_537_, v___x_542_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 0, v___x_543_);
v___x_545_ = v___x_540_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v___x_543_);
lean_ctor_set(v_reuseFailAlloc_548_, 1, v_found_536_);
v___x_545_ = v_reuseFailAlloc_548_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_546_ = lean_box(v___x_538_);
v___x_547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
lean_ctor_set(v___x_547_, 1, v___x_545_);
return v___x_547_;
}
}
}
else
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = lean_box(v___x_538_);
v___x_553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_553_, 0, v___x_552_);
lean_ctor_set(v___x_553_, 1, v_a_534_);
return v___x_553_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited___redArg___boxed(lean_object* v_c_554_, lean_object* v_a_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited___redArg(v_c_554_, v_a_555_);
lean_dec(v_c_554_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited(lean_object* v_00_u03b1_557_, lean_object* v_c_558_, lean_object* v_a_559_, lean_object* v_a_560_){
_start:
{
lean_object* v___x_561_; 
v___x_561_ = l_Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited___redArg(v_c_558_, v_a_560_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited___boxed(lean_object* v_00_u03b1_562_, lean_object* v_c_563_, lean_object* v_a_564_, lean_object* v_a_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited(v_00_u03b1_562_, v_c_563_, v_a_564_, v_a_565_);
lean_dec(v_a_564_);
lean_dec(v_c_563_);
return v_res_566_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0(lean_object* v_00_u03b2_567_, lean_object* v_m_568_, uint64_t v_a_569_){
_start:
{
uint8_t v___x_570_; 
v___x_570_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0___redArg(v_m_568_, v_a_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0___boxed(lean_object* v_00_u03b2_571_, lean_object* v_m_572_, lean_object* v_a_573_){
_start:
{
uint64_t v_a_boxed_574_; uint8_t v_res_575_; lean_object* v_r_576_; 
v_a_boxed_574_ = lean_unbox_uint64(v_a_573_);
lean_dec_ref(v_a_573_);
v_res_575_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0(v_00_u03b2_571_, v_m_572_, v_a_boxed_574_);
lean_dec_ref(v_m_572_);
v_r_576_ = lean_box(v_res_575_);
return v_r_576_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1(lean_object* v_00_u03b2_577_, lean_object* v_m_578_, uint64_t v_a_579_, lean_object* v_b_580_){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1___redArg(v_m_578_, v_a_579_, v_b_580_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1___boxed(lean_object* v_00_u03b2_582_, lean_object* v_m_583_, lean_object* v_a_584_, lean_object* v_b_585_){
_start:
{
uint64_t v_a_boxed_586_; lean_object* v_res_587_; 
v_a_boxed_586_ = lean_unbox_uint64(v_a_584_);
lean_dec_ref(v_a_584_);
v_res_587_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1(v_00_u03b2_582_, v_m_583_, v_a_boxed_586_, v_b_585_);
return v_res_587_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0_spec__0(lean_object* v_00_u03b2_588_, uint64_t v_a_589_, lean_object* v_x_590_){
_start:
{
uint8_t v___x_591_; 
v___x_591_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0_spec__0___redArg(v_a_589_, v_x_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0_spec__0___boxed(lean_object* v_00_u03b2_592_, lean_object* v_a_593_, lean_object* v_x_594_){
_start:
{
uint64_t v_a_boxed_595_; uint8_t v_res_596_; lean_object* v_r_597_; 
v_a_boxed_595_ = lean_unbox_uint64(v_a_593_);
lean_dec_ref(v_a_593_);
v_res_596_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__0_spec__0(v_00_u03b2_592_, v_a_boxed_595_, v_x_594_);
lean_dec(v_x_594_);
v_r_597_ = lean_box(v_res_596_);
return v_r_597_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2(lean_object* v_00_u03b2_598_, lean_object* v_data_599_){
_start:
{
lean_object* v___x_600_; 
v___x_600_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2___redArg(v_data_599_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_601_, lean_object* v_i_602_, lean_object* v_source_603_, lean_object* v_target_604_){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2_spec__3___redArg(v_i_602_, v_source_603_, v_target_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_606_, lean_object* v_x_607_, lean_object* v_x_608_){
_start:
{
lean_object* v___x_609_; 
v___x_609_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_Arith_CollectDecVars_alreadyVisited_spec__1_spec__2_spec__3_spec__4___redArg(v_x_607_, v_x_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_markAsFound___redArg(lean_object* v_fvarId_610_, lean_object* v_a_611_){
_start:
{
lean_object* v_visited_612_; lean_object* v_found_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_623_; 
v_visited_612_ = lean_ctor_get(v_a_611_, 0);
v_found_613_ = lean_ctor_get(v_a_611_, 1);
v_isSharedCheck_623_ = !lean_is_exclusive(v_a_611_);
if (v_isSharedCheck_623_ == 0)
{
v___x_615_ = v_a_611_;
v_isShared_616_ = v_isSharedCheck_623_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_found_613_);
lean_inc(v_visited_612_);
lean_dec(v_a_611_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_623_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_620_; 
v___x_617_ = lean_box(0);
v___x_618_ = l_Lean_FVarIdSet_insert(v_found_613_, v_fvarId_610_);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 1, v___x_618_);
v___x_620_ = v___x_615_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_visited_612_);
lean_ctor_set(v_reuseFailAlloc_622_, 1, v___x_618_);
v___x_620_ = v_reuseFailAlloc_622_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
lean_object* v___x_621_; 
v___x_621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_617_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
return v___x_621_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_markAsFound(lean_object* v_fvarId_624_, lean_object* v_a_625_, lean_object* v_a_626_){
_start:
{
lean_object* v___x_627_; 
v___x_627_ = l_Lean_Meta_Grind_Arith_CollectDecVars_markAsFound___redArg(v_fvarId_624_, v_a_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_markAsFound___boxed(lean_object* v_fvarId_628_, lean_object* v_a_629_, lean_object* v_a_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Lean_Meta_Grind_Arith_CollectDecVars_markAsFound(v_fvarId_628_, v_a_629_, v_a_630_);
lean_dec(v_a_629_);
return v_res_631_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__0(void){
_start:
{
lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_632_ = lean_box(0);
v___x_633_ = lean_unsigned_to_nat(16u);
v___x_634_ = lean_mk_array(v___x_633_, v___x_632_);
return v___x_634_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__1(void){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_635_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__0, &l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__0);
v___x_636_ = lean_unsigned_to_nat(0u);
v___x_637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
lean_ctor_set(v___x_637_, 1, v___x_635_);
return v___x_637_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__2(void){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_638_ = lean_box(1);
v___x_639_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__1, &l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__1);
v___x_640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
lean_ctor_set(v___x_640_, 1, v___x_638_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run(lean_object* v_x_641_, lean_object* v_decVars_642_){
_start:
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v_snd_645_; lean_object* v_found_646_; 
v___x_643_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__2, &l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CollectDecVars_CollectDecVarsM_run___closed__2);
v___x_644_ = lean_apply_2(v_x_641_, v_decVars_642_, v___x_643_);
v_snd_645_ = lean_ctor_get(v___x_644_, 1);
lean_inc(v_snd_645_);
lean_dec_ref(v___x_644_);
v_found_646_ = lean_ctor_get(v_snd_645_, 1);
lean_inc(v_found_646_);
lean_dec(v_snd_645_);
return v_found_646_;
}
}
static uint8_t _init_l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_________intModuleMarker________(void){
_start:
{
uint8_t v___x_647_; 
v___x_647_ = 1;
return v___x_647_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__0(void){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_648_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__1(void){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_649_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__0, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__0_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__0);
v___x_650_ = lean_box(0);
v___x_651_ = l_Lean_Name_str___override(v___x_650_, v___x_649_);
return v___x_651_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__2(void){
_start:
{
lean_object* v___x_652_; 
v___x_652_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_652_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__3(void){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_653_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__2, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__2_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__2);
v___x_654_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__1, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__1_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__1);
v___x_655_ = l_Lean_Name_str___override(v___x_654_, v___x_653_);
return v___x_655_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__4(void){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = lean_mk_string_unchecked("Meta", 4, 4);
return v___x_656_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__5(void){
_start:
{
lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_657_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__4, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__4_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__4);
v___x_658_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__3, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__3_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__3);
v___x_659_ = l_Lean_Name_str___override(v___x_658_, v___x_657_);
return v___x_659_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__6(void){
_start:
{
lean_object* v___x_660_; 
v___x_660_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_660_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__7(void){
_start:
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_661_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__6, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__6_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__6);
v___x_662_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__5, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__5_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__5);
v___x_663_ = l_Lean_Name_str___override(v___x_662_, v___x_661_);
return v___x_663_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__8(void){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_664_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__9(void){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_665_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__8, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__8_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__8);
v___x_666_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__7, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__7_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__7);
v___x_667_ = l_Lean_Name_str___override(v___x_666_, v___x_665_);
return v___x_667_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__10(void){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = lean_mk_string_unchecked("Arith", 5, 5);
return v___x_668_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__11(void){
_start:
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_669_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__10, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__10_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__10);
v___x_670_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__9, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__9_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__9);
v___x_671_ = l_Lean_Name_str___override(v___x_670_, v___x_669_);
return v___x_671_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__12(void){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = lean_mk_string_unchecked("Util", 4, 4);
return v___x_672_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__13(void){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_673_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__12, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__12_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__12);
v___x_674_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__11, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__11_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__11);
v___x_675_ = l_Lean_Name_str___override(v___x_674_, v___x_673_);
return v___x_675_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__14(void){
_start:
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_676_ = lean_unsigned_to_nat(0u);
v___x_677_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__13, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__13_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__13);
v___x_678_ = l_Lean_Name_num___override(v___x_677_, v___x_676_);
return v___x_678_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__15(void){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_679_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__2, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__2_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__2);
v___x_680_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__14, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__14_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__14);
v___x_681_ = l_Lean_Name_str___override(v___x_680_, v___x_679_);
return v___x_681_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__16(void){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_682_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__4, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__4_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__4);
v___x_683_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__15, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__15_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__15);
v___x_684_ = l_Lean_Name_str___override(v___x_683_, v___x_682_);
return v___x_684_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__17(void){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_685_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__8, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__8_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__8);
v___x_686_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__16, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__16_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__16);
v___x_687_ = l_Lean_Name_str___override(v___x_686_, v___x_685_);
return v___x_687_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__18(void){
_start:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_688_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__10, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__10_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__10);
v___x_689_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__17, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__17_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__17);
v___x_690_ = l_Lean_Name_str___override(v___x_689_, v___x_688_);
return v___x_690_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__19(void){
_start:
{
lean_object* v___x_691_; 
v___x_691_ = lean_mk_string_unchecked("____intModuleMarker____", 23, 23);
return v___x_691_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__20(void){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_692_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__19, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__19_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__19);
v___x_693_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__18, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__18_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__18);
v___x_694_ = l_Lean_Name_str___override(v___x_693_, v___x_692_);
return v___x_694_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__21(void){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_695_ = lean_box(0);
v___x_696_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__20, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__20_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__20);
v___x_697_ = l_Lean_mkConst(v___x_696_, v___x_695_);
return v___x_697_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent(void){
_start:
{
lean_object* v___x_698_; 
v___x_698_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__21, &l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__21_once, _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent___closed__21);
return v___x_698_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isIntModuleVirtualParent(lean_object* v_parent_x3f_699_){
_start:
{
if (lean_obj_tag(v_parent_x3f_699_) == 0)
{
uint8_t v___x_700_; 
v___x_700_ = 0;
return v___x_700_;
}
else
{
lean_object* v_val_701_; lean_object* v___x_702_; uint8_t v___x_703_; 
v_val_701_ = lean_ctor_get(v_parent_x3f_699_, 0);
v___x_702_ = l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent;
v___x_703_ = lean_expr_eqv(v_val_701_, v___x_702_);
return v___x_703_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isIntModuleVirtualParent___boxed(lean_object* v_parent_x3f_704_){
_start:
{
uint8_t v_res_705_; lean_object* v_r_706_; 
v_res_705_ = l_Lean_Meta_Grind_Arith_isIntModuleVirtualParent(v_parent_x3f_704_);
lean_dec(v_parent_x3f_704_);
v_r_706_ = lean_box(v_res_705_);
return v_r_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split___redArg___lam__0(lean_object* v_getCoeff_707_, lean_object* v___x_708_, lean_object* v_c_709_, lean_object* v_____s_710_){
_start:
{
lean_object* v_fst_711_; lean_object* v_snd_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_730_; 
v_fst_711_ = lean_ctor_get(v_____s_710_, 0);
v_snd_712_ = lean_ctor_get(v_____s_710_, 1);
v_isSharedCheck_730_ = !lean_is_exclusive(v_____s_710_);
if (v_isSharedCheck_730_ == 0)
{
v___x_714_ = v_____s_710_;
v_isShared_715_ = v_isSharedCheck_730_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_snd_712_);
lean_inc(v_fst_711_);
lean_dec(v_____s_710_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_730_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v_b_716_; lean_object* v___x_717_; uint8_t v___x_718_; 
lean_inc(v_c_709_);
v_b_716_ = lean_apply_1(v_getCoeff_707_, v_c_709_);
v___x_717_ = lean_nat_to_int(v___x_708_);
v___x_718_ = lean_int_dec_eq(v_b_716_, v___x_717_);
lean_dec(v___x_717_);
if (v___x_718_ == 0)
{
lean_object* v___x_720_; 
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 1, v_c_709_);
lean_ctor_set(v___x_714_, 0, v_b_716_);
v___x_720_ = v___x_714_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_b_716_);
lean_ctor_set(v_reuseFailAlloc_724_, 1, v_c_709_);
v___x_720_ = v_reuseFailAlloc_724_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
lean_object* v_todo_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v_todo_721_ = lean_array_push(v_snd_712_, v___x_720_);
v___x_722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_722_, 0, v_fst_711_);
lean_ctor_set(v___x_722_, 1, v_todo_721_);
v___x_723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
return v___x_723_;
}
}
else
{
lean_object* v_cs_x27_725_; lean_object* v___x_727_; 
lean_dec(v_b_716_);
v_cs_x27_725_ = l_Lean_PersistentArray_push___redArg(v_fst_711_, v_c_709_);
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 0, v_cs_x27_725_);
v___x_727_ = v___x_714_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_cs_x27_725_);
lean_ctor_set(v_reuseFailAlloc_729_, 1, v_snd_712_);
v___x_727_ = v_reuseFailAlloc_729_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
lean_object* v___x_728_; 
v___x_728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_728_, 0, v___x_727_);
return v___x_728_;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__0(void){
_start:
{
lean_object* v___f_731_; 
v___f_731_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_731_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__1(void){
_start:
{
lean_object* v___f_732_; 
v___f_732_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_732_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__2(void){
_start:
{
lean_object* v___f_733_; 
v___f_733_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_733_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__3(void){
_start:
{
lean_object* v___f_734_; 
v___f_734_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_734_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__4(void){
_start:
{
lean_object* v___f_735_; 
v___f_735_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_735_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__5(void){
_start:
{
lean_object* v___f_736_; 
v___f_736_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_736_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__6(void){
_start:
{
lean_object* v___f_737_; 
v___f_737_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_737_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__7(void){
_start:
{
lean_object* v___f_738_; lean_object* v___f_739_; lean_object* v___x_740_; 
v___f_738_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___redArg___closed__1, &l_Lean_Meta_Grind_Arith_split___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__1);
v___f_739_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___redArg___closed__0, &l_Lean_Meta_Grind_Arith_split___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__0);
v___x_740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_740_, 0, v___f_739_);
lean_ctor_set(v___x_740_, 1, v___f_738_);
return v___x_740_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__8(void){
_start:
{
lean_object* v___f_741_; lean_object* v___f_742_; lean_object* v___f_743_; lean_object* v___f_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v___f_741_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___redArg___closed__5, &l_Lean_Meta_Grind_Arith_split___redArg___closed__5_once, _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__5);
v___f_742_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___redArg___closed__4, &l_Lean_Meta_Grind_Arith_split___redArg___closed__4_once, _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__4);
v___f_743_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___redArg___closed__3, &l_Lean_Meta_Grind_Arith_split___redArg___closed__3_once, _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__3);
v___f_744_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___redArg___closed__2, &l_Lean_Meta_Grind_Arith_split___redArg___closed__2_once, _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__2);
v___x_745_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___redArg___closed__7, &l_Lean_Meta_Grind_Arith_split___redArg___closed__7_once, _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__7);
v___x_746_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
lean_ctor_set(v___x_746_, 1, v___f_744_);
lean_ctor_set(v___x_746_, 2, v___f_743_);
lean_ctor_set(v___x_746_, 3, v___f_742_);
lean_ctor_set(v___x_746_, 4, v___f_741_);
return v___x_746_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__9(void){
_start:
{
lean_object* v___f_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___f_747_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___redArg___closed__6, &l_Lean_Meta_Grind_Arith_split___redArg___closed__6_once, _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__6);
v___x_748_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___redArg___closed__8, &l_Lean_Meta_Grind_Arith_split___redArg___closed__8_once, _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__8);
v___x_749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
lean_ctor_set(v___x_749_, 1, v___f_747_);
return v___x_749_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__10(void){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_750_ = lean_unsigned_to_nat(32u);
v___x_751_ = lean_mk_empty_array_with_capacity(v___x_750_);
v___x_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_752_, 0, v___x_751_);
return v___x_752_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__11(void){
_start:
{
size_t v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v_cs_x27_758_; 
v___x_753_ = ((size_t)5ULL);
v___x_754_ = lean_unsigned_to_nat(0u);
v___x_755_ = lean_unsigned_to_nat(32u);
v___x_756_ = lean_mk_empty_array_with_capacity(v___x_755_);
v___x_757_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___redArg___closed__10, &l_Lean_Meta_Grind_Arith_split___redArg___closed__10_once, _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__10);
v_cs_x27_758_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_cs_x27_758_, 0, v___x_757_);
lean_ctor_set(v_cs_x27_758_, 1, v___x_756_);
lean_ctor_set(v_cs_x27_758_, 2, v___x_754_);
lean_ctor_set(v_cs_x27_758_, 3, v___x_754_);
lean_ctor_set_usize(v_cs_x27_758_, 4, v___x_753_);
return v_cs_x27_758_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__12(void){
_start:
{
lean_object* v___x_759_; lean_object* v_todo_760_; 
v___x_759_ = lean_unsigned_to_nat(0u);
v_todo_760_ = lean_mk_empty_array_with_capacity(v___x_759_);
return v_todo_760_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__13(void){
_start:
{
lean_object* v_todo_761_; lean_object* v_cs_x27_762_; lean_object* v___x_763_; 
v_todo_761_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___redArg___closed__12, &l_Lean_Meta_Grind_Arith_split___redArg___closed__12_once, _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__12);
v_cs_x27_762_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___redArg___closed__11, &l_Lean_Meta_Grind_Arith_split___redArg___closed__11_once, _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__11);
v___x_763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_763_, 0, v_cs_x27_762_);
lean_ctor_set(v___x_763_, 1, v_todo_761_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split___redArg(lean_object* v_cs_764_, lean_object* v_getCoeff_765_){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___f_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v_fst_771_; lean_object* v_snd_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_779_; 
v___x_766_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___redArg___closed__9, &l_Lean_Meta_Grind_Arith_split___redArg___closed__9_once, _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__9);
v___x_767_ = lean_unsigned_to_nat(0u);
v___f_768_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_split___redArg___lam__0), 4, 2);
lean_closure_set(v___f_768_, 0, v_getCoeff_765_);
lean_closure_set(v___f_768_, 1, v___x_767_);
v___x_769_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___redArg___closed__13, &l_Lean_Meta_Grind_Arith_split___redArg___closed__13_once, _init_l_Lean_Meta_Grind_Arith_split___redArg___closed__13);
v___x_770_ = l_Lean_PersistentArray_forIn___redArg(v___x_766_, v_cs_764_, v___x_769_, v___f_768_);
v_fst_771_ = lean_ctor_get(v___x_770_, 0);
v_snd_772_ = lean_ctor_get(v___x_770_, 1);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_779_ == 0)
{
v___x_774_ = v___x_770_;
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_snd_772_);
lean_inc(v_fst_771_);
lean_dec(v___x_770_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_777_; 
if (v_isShared_775_ == 0)
{
v___x_777_ = v___x_774_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_fst_771_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v_snd_772_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split___redArg___boxed(lean_object* v_cs_780_, lean_object* v_getCoeff_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l_Lean_Meta_Grind_Arith_split___redArg(v_cs_780_, v_getCoeff_781_);
lean_dec_ref(v_cs_780_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split(lean_object* v_00_u03b1_783_, lean_object* v_cs_784_, lean_object* v_getCoeff_785_){
_start:
{
lean_object* v___x_786_; 
v___x_786_ = l_Lean_Meta_Grind_Arith_split___redArg(v_cs_784_, v_getCoeff_785_);
return v___x_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split___boxed(lean_object* v_00_u03b1_787_, lean_object* v_cs_788_, lean_object* v_getCoeff_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_Lean_Meta_Grind_Arith_split(v_00_u03b1_787_, v_cs_788_, v_getCoeff_789_);
lean_dec_ref(v_cs_788_);
return v_res_790_;
}
}
lean_object* runtime_initialize_Init_Grind_Ring_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SynthInstance(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Grind_Ring_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_________intModuleMarker________ = _init_l___private_Lean_Meta_Tactic_Grind_Arith_Util_0__Lean_Meta_Grind_Arith_________intModuleMarker________();
l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent = _init_l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Ring_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_SynthInstance(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Ring_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
}
#ifdef __cplusplus
}
#endif
