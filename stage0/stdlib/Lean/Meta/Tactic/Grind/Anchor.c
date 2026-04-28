// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Anchor
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.MarkNestedSubsingletons import Init.Omega
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t lean_is_matcher(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_instDecidableEqUInt64___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instHashableUInt64___lam__0___boxed(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t lean_uint64_sub(uint64_t, uint64_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_Grind_anchorPrefixToString(lean_object*, uint64_t);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Lean_Name_isImplementationDetail(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
uint8_t l_Lean_Name_isInternal(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
uint8_t lean_is_inaccessible_user_name(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint64_t l_Lean_Literal_hash(lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isImplicit(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_isMarkedSubsingletonConst(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SplitInfo_getExpr(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName___closed__0;
LEAN_EXPORT uint64_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName___boxed(lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_getAnchor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_getAnchor___closed__0;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4___closed__0;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAnchor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAnchor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_AnchorRef_matches(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AnchorRef_matches___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__10;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__11;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__12;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__13;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Break_runK_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Break_runK_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instHasAnchorExprWithAnchor;
static lean_once_cell_t l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntax___redArg(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntax___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntax(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntax___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitInfo_getAnchor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitInfo_getAnchor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint64_t _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName___closed__0(void){
_start:
{
lean_object* v___x_1_; uint64_t v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(1723u);
v___x_2_ = lean_uint64_of_nat(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName(lean_object* v_n_3_){
_start:
{
uint8_t v___y_5_; uint8_t v___x_17_; 
v___x_17_ = l_Lean_Name_hasMacroScopes(v_n_3_);
if (v___x_17_ == 0)
{
uint8_t v___x_18_; 
lean_inc(v_n_3_);
v___x_18_ = lean_is_inaccessible_user_name(v_n_3_);
v___y_5_ = v___x_18_;
goto v___jp_4_;
}
else
{
v___y_5_ = v___x_17_;
goto v___jp_4_;
}
v___jp_4_:
{
if (v___y_5_ == 0)
{
uint8_t v___x_6_; 
v___x_6_ = l_Lean_Name_isImplementationDetail(v_n_3_);
if (v___x_6_ == 0)
{
uint8_t v___x_7_; 
v___x_7_ = l_Lean_isPrivateName(v_n_3_);
if (v___x_7_ == 0)
{
uint8_t v___x_8_; 
v___x_8_ = l_Lean_Name_isInternal(v_n_3_);
if (v___x_8_ == 0)
{
if (lean_obj_tag(v_n_3_) == 0)
{
uint64_t v___x_9_; 
v___x_9_ = lean_uint64_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName___closed__0, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName___closed__0);
return v___x_9_;
}
else
{
uint64_t v_hash_10_; 
v_hash_10_ = lean_ctor_get_uint64(v_n_3_, sizeof(void*)*2);
lean_dec(v_n_3_);
return v_hash_10_;
}
}
else
{
uint64_t v___x_11_; 
lean_dec(v_n_3_);
v___x_11_ = 0ULL;
return v___x_11_;
}
}
else
{
lean_object* v___x_12_; 
v___x_12_ = l_Lean_privateToUserName(v_n_3_);
if (lean_obj_tag(v___x_12_) == 0)
{
uint64_t v___x_13_; 
v___x_13_ = lean_uint64_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName___closed__0, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName___closed__0);
return v___x_13_;
}
else
{
uint64_t v_hash_14_; 
v_hash_14_ = lean_ctor_get_uint64(v___x_12_, sizeof(void*)*2);
lean_dec(v___x_12_);
return v_hash_14_;
}
}
}
else
{
uint64_t v___x_15_; 
lean_dec(v_n_3_);
v___x_15_ = 0ULL;
return v___x_15_;
}
}
else
{
uint64_t v___x_16_; 
lean_dec(v_n_3_);
v___x_16_ = 0ULL;
return v___x_16_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName___boxed(lean_object* v_n_19_){
_start:
{
uint64_t v_res_20_; lean_object* v_r_21_; 
v_res_20_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName(v_n_19_);
v_r_21_ = lean_box_uint64(v_res_20_);
return v_r_21_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(uint64_t v_a_22_, uint64_t v_b_23_){
_start:
{
uint64_t v___x_24_; uint8_t v___x_25_; 
v___x_24_ = 0ULL;
v___x_25_ = lean_uint64_dec_eq(v_a_22_, v___x_24_);
if (v___x_25_ == 0)
{
uint8_t v___x_26_; 
v___x_26_ = lean_uint64_dec_eq(v_b_23_, v___x_24_);
if (v___x_26_ == 0)
{
uint64_t v___x_27_; 
v___x_27_ = lean_uint64_mix_hash(v_a_22_, v_b_23_);
return v___x_27_;
}
else
{
return v_a_22_;
}
}
else
{
return v_b_23_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix___boxed(lean_object* v_a_28_, lean_object* v_b_29_){
_start:
{
uint64_t v_a_boxed_30_; uint64_t v_b_boxed_31_; uint64_t v_res_32_; lean_object* v_r_33_; 
v_a_boxed_30_ = lean_unbox_uint64(v_a_28_);
lean_dec_ref(v_a_28_);
v_b_boxed_31_ = lean_unbox_uint64(v_b_29_);
lean_dec_ref(v_b_29_);
v_res_32_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v_a_boxed_30_, v_b_boxed_31_);
v_r_33_ = lean_box_uint64(v_res_32_);
return v_r_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___redArg(lean_object* v_declName_34_, lean_object* v___y_35_){
_start:
{
lean_object* v___x_37_; lean_object* v_env_38_; uint8_t v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_37_ = lean_st_ref_get(v___y_35_);
v_env_38_ = lean_ctor_get(v___x_37_, 0);
lean_inc_ref(v_env_38_);
lean_dec(v___x_37_);
v___x_39_ = lean_is_matcher(v_env_38_, v_declName_34_);
v___x_40_ = lean_box(v___x_39_);
v___x_41_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___redArg___boxed(lean_object* v_declName_42_, lean_object* v___y_43_, lean_object* v___y_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___redArg(v_declName_42_, v___y_43_);
lean_dec(v___y_43_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3(lean_object* v_declName_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___redArg(v_declName_46_, v___y_55_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___boxed(lean_object* v_declName_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3(v_declName_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_);
lean_dec(v___y_67_);
lean_dec_ref(v___y_66_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
lean_dec(v___y_61_);
lean_dec_ref(v___y_60_);
lean_dec(v___y_59_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___redArg(lean_object* v_keys_70_, lean_object* v_vals_71_, lean_object* v_i_72_, lean_object* v_k_73_){
_start:
{
lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_74_ = lean_array_get_size(v_keys_70_);
v___x_75_ = lean_nat_dec_lt(v_i_72_, v___x_74_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; 
lean_dec(v_i_72_);
v___x_76_ = lean_box(0);
return v___x_76_;
}
else
{
lean_object* v_k_x27_77_; uint8_t v___x_78_; 
v_k_x27_77_ = lean_array_fget_borrowed(v_keys_70_, v_i_72_);
v___x_78_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_k_73_, v_k_x27_77_);
if (v___x_78_ == 0)
{
lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_79_ = lean_unsigned_to_nat(1u);
v___x_80_ = lean_nat_add(v_i_72_, v___x_79_);
lean_dec(v_i_72_);
v_i_72_ = v___x_80_;
goto _start;
}
else
{
lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_82_ = lean_array_fget_borrowed(v_vals_71_, v_i_72_);
lean_dec(v_i_72_);
lean_inc(v___x_82_);
v___x_83_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
return v___x_83_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___redArg___boxed(lean_object* v_keys_84_, lean_object* v_vals_85_, lean_object* v_i_86_, lean_object* v_k_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___redArg(v_keys_84_, v_vals_85_, v_i_86_, v_k_87_);
lean_dec_ref(v_k_87_);
lean_dec_ref(v_vals_85_);
lean_dec_ref(v_keys_84_);
return v_res_88_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___closed__0(void){
_start:
{
size_t v___x_89_; size_t v___x_90_; size_t v___x_91_; 
v___x_89_ = ((size_t)5ULL);
v___x_90_ = ((size_t)1ULL);
v___x_91_ = lean_usize_shift_left(v___x_90_, v___x_89_);
return v___x_91_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___closed__1(void){
_start:
{
size_t v___x_92_; size_t v___x_93_; size_t v___x_94_; 
v___x_92_ = ((size_t)1ULL);
v___x_93_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___closed__0);
v___x_94_ = lean_usize_sub(v___x_93_, v___x_92_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg(lean_object* v_x_95_, size_t v_x_96_, lean_object* v_x_97_){
_start:
{
if (lean_obj_tag(v_x_95_) == 0)
{
lean_object* v_es_98_; lean_object* v___x_99_; size_t v___x_100_; size_t v___x_101_; size_t v___x_102_; lean_object* v_j_103_; lean_object* v___x_104_; 
v_es_98_ = lean_ctor_get(v_x_95_, 0);
v___x_99_ = lean_box(2);
v___x_100_ = ((size_t)5ULL);
v___x_101_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___closed__1);
v___x_102_ = lean_usize_land(v_x_96_, v___x_101_);
v_j_103_ = lean_usize_to_nat(v___x_102_);
v___x_104_ = lean_array_get_borrowed(v___x_99_, v_es_98_, v_j_103_);
lean_dec(v_j_103_);
switch(lean_obj_tag(v___x_104_))
{
case 0:
{
lean_object* v_key_105_; lean_object* v_val_106_; uint8_t v___x_107_; 
v_key_105_ = lean_ctor_get(v___x_104_, 0);
v_val_106_ = lean_ctor_get(v___x_104_, 1);
v___x_107_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_97_, v_key_105_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; 
v___x_108_ = lean_box(0);
return v___x_108_;
}
else
{
lean_object* v___x_109_; 
lean_inc(v_val_106_);
v___x_109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_109_, 0, v_val_106_);
return v___x_109_;
}
}
case 1:
{
lean_object* v_node_110_; size_t v___x_111_; 
v_node_110_ = lean_ctor_get(v___x_104_, 0);
v___x_111_ = lean_usize_shift_right(v_x_96_, v___x_100_);
v_x_95_ = v_node_110_;
v_x_96_ = v___x_111_;
goto _start;
}
default: 
{
lean_object* v___x_113_; 
v___x_113_ = lean_box(0);
return v___x_113_;
}
}
}
else
{
lean_object* v_ks_114_; lean_object* v_vs_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v_ks_114_ = lean_ctor_get(v_x_95_, 0);
v_vs_115_ = lean_ctor_get(v_x_95_, 1);
v___x_116_ = lean_unsigned_to_nat(0u);
v___x_117_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___redArg(v_ks_114_, v_vs_115_, v___x_116_, v_x_97_);
return v___x_117_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___boxed(lean_object* v_x_118_, lean_object* v_x_119_, lean_object* v_x_120_){
_start:
{
size_t v_x_32768__boxed_121_; lean_object* v_res_122_; 
v_x_32768__boxed_121_ = lean_unbox_usize(v_x_119_);
lean_dec(v_x_119_);
v_res_122_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg(v_x_118_, v_x_32768__boxed_121_, v_x_120_);
lean_dec_ref(v_x_120_);
lean_dec_ref(v_x_118_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___redArg(lean_object* v_x_123_, lean_object* v_x_124_){
_start:
{
uint64_t v___x_125_; size_t v___x_126_; lean_object* v___x_127_; 
v___x_125_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_124_);
v___x_126_ = lean_uint64_to_usize(v___x_125_);
v___x_127_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg(v_x_123_, v___x_126_, v_x_124_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___redArg___boxed(lean_object* v_x_128_, lean_object* v_x_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___redArg(v_x_128_, v_x_129_);
lean_dec_ref(v_x_129_);
lean_dec_ref(v_x_128_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__3_spec__6___redArg(lean_object* v_x_131_, lean_object* v_x_132_, lean_object* v_x_133_, lean_object* v_x_134_){
_start:
{
lean_object* v_ks_135_; lean_object* v_vs_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_160_; 
v_ks_135_ = lean_ctor_get(v_x_131_, 0);
v_vs_136_ = lean_ctor_get(v_x_131_, 1);
v_isSharedCheck_160_ = !lean_is_exclusive(v_x_131_);
if (v_isSharedCheck_160_ == 0)
{
v___x_138_ = v_x_131_;
v_isShared_139_ = v_isSharedCheck_160_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_vs_136_);
lean_inc(v_ks_135_);
lean_dec(v_x_131_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_160_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_140_ = lean_array_get_size(v_ks_135_);
v___x_141_ = lean_nat_dec_lt(v_x_132_, v___x_140_);
if (v___x_141_ == 0)
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_145_; 
lean_dec(v_x_132_);
v___x_142_ = lean_array_push(v_ks_135_, v_x_133_);
v___x_143_ = lean_array_push(v_vs_136_, v_x_134_);
if (v_isShared_139_ == 0)
{
lean_ctor_set(v___x_138_, 1, v___x_143_);
lean_ctor_set(v___x_138_, 0, v___x_142_);
v___x_145_ = v___x_138_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v___x_142_);
lean_ctor_set(v_reuseFailAlloc_146_, 1, v___x_143_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
else
{
lean_object* v_k_x27_147_; uint8_t v___x_148_; 
v_k_x27_147_ = lean_array_fget_borrowed(v_ks_135_, v_x_132_);
v___x_148_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_133_, v_k_x27_147_);
if (v___x_148_ == 0)
{
lean_object* v___x_150_; 
if (v_isShared_139_ == 0)
{
v___x_150_ = v___x_138_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_ks_135_);
lean_ctor_set(v_reuseFailAlloc_154_, 1, v_vs_136_);
v___x_150_ = v_reuseFailAlloc_154_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = lean_unsigned_to_nat(1u);
v___x_152_ = lean_nat_add(v_x_132_, v___x_151_);
lean_dec(v_x_132_);
v_x_131_ = v___x_150_;
v_x_132_ = v___x_152_;
goto _start;
}
}
else
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_158_; 
v___x_155_ = lean_array_fset(v_ks_135_, v_x_132_, v_x_133_);
v___x_156_ = lean_array_fset(v_vs_136_, v_x_132_, v_x_134_);
lean_dec(v_x_132_);
if (v_isShared_139_ == 0)
{
lean_ctor_set(v___x_138_, 1, v___x_156_);
lean_ctor_set(v___x_138_, 0, v___x_155_);
v___x_158_ = v___x_138_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_155_);
lean_ctor_set(v_reuseFailAlloc_159_, 1, v___x_156_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__3___redArg(lean_object* v_n_161_, lean_object* v_k_162_, lean_object* v_v_163_){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = lean_unsigned_to_nat(0u);
v___x_165_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__3_spec__6___redArg(v_n_161_, v___x_164_, v_k_162_, v_v_163_);
return v___x_165_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1___redArg(lean_object* v_x_167_, size_t v_x_168_, size_t v_x_169_, lean_object* v_x_170_, lean_object* v_x_171_){
_start:
{
if (lean_obj_tag(v_x_167_) == 0)
{
lean_object* v_es_172_; size_t v___x_173_; size_t v___x_174_; size_t v___x_175_; size_t v___x_176_; lean_object* v_j_177_; lean_object* v___x_178_; uint8_t v___x_179_; 
v_es_172_ = lean_ctor_get(v_x_167_, 0);
v___x_173_ = ((size_t)5ULL);
v___x_174_ = ((size_t)1ULL);
v___x_175_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___closed__1);
v___x_176_ = lean_usize_land(v_x_168_, v___x_175_);
v_j_177_ = lean_usize_to_nat(v___x_176_);
v___x_178_ = lean_array_get_size(v_es_172_);
v___x_179_ = lean_nat_dec_lt(v_j_177_, v___x_178_);
if (v___x_179_ == 0)
{
lean_dec(v_j_177_);
lean_dec(v_x_171_);
lean_dec_ref(v_x_170_);
return v_x_167_;
}
else
{
lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_216_; 
lean_inc_ref(v_es_172_);
v_isSharedCheck_216_ = !lean_is_exclusive(v_x_167_);
if (v_isSharedCheck_216_ == 0)
{
lean_object* v_unused_217_; 
v_unused_217_ = lean_ctor_get(v_x_167_, 0);
lean_dec(v_unused_217_);
v___x_181_ = v_x_167_;
v_isShared_182_ = v_isSharedCheck_216_;
goto v_resetjp_180_;
}
else
{
lean_dec(v_x_167_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_216_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v_v_183_; lean_object* v___x_184_; lean_object* v_xs_x27_185_; lean_object* v___y_187_; 
v_v_183_ = lean_array_fget(v_es_172_, v_j_177_);
v___x_184_ = lean_box(0);
v_xs_x27_185_ = lean_array_fset(v_es_172_, v_j_177_, v___x_184_);
switch(lean_obj_tag(v_v_183_))
{
case 0:
{
lean_object* v_key_192_; lean_object* v_val_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_203_; 
v_key_192_ = lean_ctor_get(v_v_183_, 0);
v_val_193_ = lean_ctor_get(v_v_183_, 1);
v_isSharedCheck_203_ = !lean_is_exclusive(v_v_183_);
if (v_isSharedCheck_203_ == 0)
{
v___x_195_ = v_v_183_;
v_isShared_196_ = v_isSharedCheck_203_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_val_193_);
lean_inc(v_key_192_);
lean_dec(v_v_183_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_203_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
uint8_t v___x_197_; 
v___x_197_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_170_, v_key_192_);
if (v___x_197_ == 0)
{
lean_object* v___x_198_; lean_object* v___x_199_; 
lean_del_object(v___x_195_);
v___x_198_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_192_, v_val_193_, v_x_170_, v_x_171_);
v___x_199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_199_, 0, v___x_198_);
v___y_187_ = v___x_199_;
goto v___jp_186_;
}
else
{
lean_object* v___x_201_; 
lean_dec(v_val_193_);
lean_dec(v_key_192_);
if (v_isShared_196_ == 0)
{
lean_ctor_set(v___x_195_, 1, v_x_171_);
lean_ctor_set(v___x_195_, 0, v_x_170_);
v___x_201_ = v___x_195_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_x_170_);
lean_ctor_set(v_reuseFailAlloc_202_, 1, v_x_171_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
v___y_187_ = v___x_201_;
goto v___jp_186_;
}
}
}
}
case 1:
{
lean_object* v_node_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_214_; 
v_node_204_ = lean_ctor_get(v_v_183_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v_v_183_);
if (v_isSharedCheck_214_ == 0)
{
v___x_206_ = v_v_183_;
v_isShared_207_ = v_isSharedCheck_214_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_node_204_);
lean_dec(v_v_183_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_214_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
size_t v___x_208_; size_t v___x_209_; lean_object* v___x_210_; lean_object* v___x_212_; 
v___x_208_ = lean_usize_shift_right(v_x_168_, v___x_173_);
v___x_209_ = lean_usize_add(v_x_169_, v___x_174_);
v___x_210_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1___redArg(v_node_204_, v___x_208_, v___x_209_, v_x_170_, v_x_171_);
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 0, v___x_210_);
v___x_212_ = v___x_206_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v___x_210_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
v___y_187_ = v___x_212_;
goto v___jp_186_;
}
}
}
default: 
{
lean_object* v___x_215_; 
v___x_215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_215_, 0, v_x_170_);
lean_ctor_set(v___x_215_, 1, v_x_171_);
v___y_187_ = v___x_215_;
goto v___jp_186_;
}
}
v___jp_186_:
{
lean_object* v___x_188_; lean_object* v___x_190_; 
v___x_188_ = lean_array_fset(v_xs_x27_185_, v_j_177_, v___y_187_);
lean_dec(v_j_177_);
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 0, v___x_188_);
v___x_190_ = v___x_181_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v___x_188_);
v___x_190_ = v_reuseFailAlloc_191_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
return v___x_190_;
}
}
}
}
}
else
{
lean_object* v_ks_218_; lean_object* v_vs_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_239_; 
v_ks_218_ = lean_ctor_get(v_x_167_, 0);
v_vs_219_ = lean_ctor_get(v_x_167_, 1);
v_isSharedCheck_239_ = !lean_is_exclusive(v_x_167_);
if (v_isSharedCheck_239_ == 0)
{
v___x_221_ = v_x_167_;
v_isShared_222_ = v_isSharedCheck_239_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_vs_219_);
lean_inc(v_ks_218_);
lean_dec(v_x_167_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_239_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_224_; 
if (v_isShared_222_ == 0)
{
v___x_224_ = v___x_221_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_ks_218_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v_vs_219_);
v___x_224_ = v_reuseFailAlloc_238_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
lean_object* v_newNode_225_; uint8_t v___y_227_; size_t v___x_233_; uint8_t v___x_234_; 
v_newNode_225_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__3___redArg(v___x_224_, v_x_170_, v_x_171_);
v___x_233_ = ((size_t)7ULL);
v___x_234_ = lean_usize_dec_le(v___x_233_, v_x_169_);
if (v___x_234_ == 0)
{
lean_object* v___x_235_; lean_object* v___x_236_; uint8_t v___x_237_; 
v___x_235_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_225_);
v___x_236_ = lean_unsigned_to_nat(4u);
v___x_237_ = lean_nat_dec_lt(v___x_235_, v___x_236_);
lean_dec(v___x_235_);
v___y_227_ = v___x_237_;
goto v___jp_226_;
}
else
{
v___y_227_ = v___x_234_;
goto v___jp_226_;
}
v___jp_226_:
{
if (v___y_227_ == 0)
{
lean_object* v_ks_228_; lean_object* v_vs_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v_ks_228_ = lean_ctor_get(v_newNode_225_, 0);
lean_inc_ref(v_ks_228_);
v_vs_229_ = lean_ctor_get(v_newNode_225_, 1);
lean_inc_ref(v_vs_229_);
lean_dec_ref(v_newNode_225_);
v___x_230_ = lean_unsigned_to_nat(0u);
v___x_231_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1___redArg___closed__0);
v___x_232_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__4___redArg(v_x_169_, v_ks_228_, v_vs_229_, v___x_230_, v___x_231_);
lean_dec_ref(v_vs_229_);
lean_dec_ref(v_ks_228_);
return v___x_232_;
}
else
{
return v_newNode_225_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__4___redArg(size_t v_depth_240_, lean_object* v_keys_241_, lean_object* v_vals_242_, lean_object* v_i_243_, lean_object* v_entries_244_){
_start:
{
lean_object* v___x_245_; uint8_t v___x_246_; 
v___x_245_ = lean_array_get_size(v_keys_241_);
v___x_246_ = lean_nat_dec_lt(v_i_243_, v___x_245_);
if (v___x_246_ == 0)
{
lean_dec(v_i_243_);
return v_entries_244_;
}
else
{
lean_object* v_k_247_; lean_object* v_v_248_; uint64_t v___x_249_; size_t v_h_250_; size_t v___x_251_; lean_object* v___x_252_; size_t v___x_253_; size_t v___x_254_; size_t v___x_255_; size_t v_h_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v_k_247_ = lean_array_fget_borrowed(v_keys_241_, v_i_243_);
v_v_248_ = lean_array_fget_borrowed(v_vals_242_, v_i_243_);
v___x_249_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_k_247_);
v_h_250_ = lean_uint64_to_usize(v___x_249_);
v___x_251_ = ((size_t)5ULL);
v___x_252_ = lean_unsigned_to_nat(1u);
v___x_253_ = ((size_t)1ULL);
v___x_254_ = lean_usize_sub(v_depth_240_, v___x_253_);
v___x_255_ = lean_usize_mul(v___x_251_, v___x_254_);
v_h_256_ = lean_usize_shift_right(v_h_250_, v___x_255_);
v___x_257_ = lean_nat_add(v_i_243_, v___x_252_);
lean_dec(v_i_243_);
lean_inc(v_v_248_);
lean_inc(v_k_247_);
v___x_258_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1___redArg(v_entries_244_, v_h_256_, v_depth_240_, v_k_247_, v_v_248_);
v_i_243_ = v___x_257_;
v_entries_244_ = v___x_258_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_depth_260_, lean_object* v_keys_261_, lean_object* v_vals_262_, lean_object* v_i_263_, lean_object* v_entries_264_){
_start:
{
size_t v_depth_boxed_265_; lean_object* v_res_266_; 
v_depth_boxed_265_ = lean_unbox_usize(v_depth_260_);
lean_dec(v_depth_260_);
v_res_266_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__4___redArg(v_depth_boxed_265_, v_keys_261_, v_vals_262_, v_i_263_, v_entries_264_);
lean_dec_ref(v_vals_262_);
lean_dec_ref(v_keys_261_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1___redArg___boxed(lean_object* v_x_267_, lean_object* v_x_268_, lean_object* v_x_269_, lean_object* v_x_270_, lean_object* v_x_271_){
_start:
{
size_t v_x_32915__boxed_272_; size_t v_x_32916__boxed_273_; lean_object* v_res_274_; 
v_x_32915__boxed_272_ = lean_unbox_usize(v_x_268_);
lean_dec(v_x_268_);
v_x_32916__boxed_273_ = lean_unbox_usize(v_x_269_);
lean_dec(v_x_269_);
v_res_274_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1___redArg(v_x_267_, v_x_32915__boxed_272_, v_x_32916__boxed_273_, v_x_270_, v_x_271_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1___redArg(lean_object* v_x_275_, lean_object* v_x_276_, lean_object* v_x_277_){
_start:
{
uint64_t v___x_278_; size_t v___x_279_; size_t v___x_280_; lean_object* v___x_281_; 
v___x_278_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_276_);
v___x_279_ = lean_uint64_to_usize(v___x_278_);
v___x_280_ = ((size_t)1ULL);
v___x_281_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1___redArg(v_x_275_, v___x_279_, v___x_280_, v_x_276_, v_x_277_);
return v___x_281_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_getAnchor___closed__0(void){
_start:
{
lean_object* v___x_282_; lean_object* v_dummy_283_; 
v___x_282_ = lean_box(0);
v_dummy_283_ = l_Lean_Expr_sort___override(v___x_282_);
return v_dummy_283_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4___closed__0(void){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_284_ = lean_unsigned_to_nat(0u);
v___x_285_ = lean_mk_empty_array_with_capacity(v___x_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4(lean_object* v_x_286_, lean_object* v_x_287_, lean_object* v_x_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v_pinfos_300_; lean_object* v___y_301_; lean_object* v___y_302_; lean_object* v___y_303_; lean_object* v___y_304_; lean_object* v___y_305_; lean_object* v___y_306_; lean_object* v___y_307_; lean_object* v___y_308_; lean_object* v___y_309_; uint8_t v___y_317_; 
if (lean_obj_tag(v_x_286_) == 5)
{
lean_object* v_fn_336_; lean_object* v_arg_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_fn_336_ = lean_ctor_get(v_x_286_, 0);
lean_inc_ref(v_fn_336_);
v_arg_337_ = lean_ctor_get(v_x_286_, 1);
lean_inc_ref(v_arg_337_);
lean_dec_ref(v_x_286_);
v___x_338_ = lean_array_set(v_x_287_, v_x_288_, v_arg_337_);
v___x_339_ = lean_unsigned_to_nat(1u);
v___x_340_ = lean_nat_sub(v_x_288_, v___x_339_);
lean_dec(v_x_288_);
v_x_286_ = v_fn_336_;
v_x_287_ = v___x_338_;
v_x_288_ = v___x_340_;
goto _start;
}
else
{
uint8_t v___x_342_; 
lean_dec(v_x_288_);
v___x_342_ = l_Lean_Meta_Grind_isMarkedSubsingletonConst(v_x_286_);
if (v___x_342_ == 0)
{
v___y_317_ = v___x_342_;
goto v___jp_316_;
}
else
{
lean_object* v___x_343_; lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_343_ = lean_array_get_size(v_x_287_);
v___x_344_ = lean_unsigned_to_nat(2u);
v___x_345_ = lean_nat_dec_eq(v___x_343_, v___x_344_);
v___y_317_ = v___x_345_;
goto v___jp_316_;
}
}
v___jp_299_:
{
lean_object* v___x_310_; 
v___x_310_ = l_Lean_Meta_Grind_getAnchor(v_x_286_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_, v___y_309_);
if (lean_obj_tag(v___x_310_) == 0)
{
lean_object* v_a_311_; lean_object* v___x_312_; lean_object* v___x_313_; uint64_t v___x_314_; lean_object* v___x_315_; 
v_a_311_ = lean_ctor_get(v___x_310_, 0);
lean_inc(v_a_311_);
lean_dec_ref(v___x_310_);
v___x_312_ = lean_array_get_size(v_x_287_);
v___x_313_ = lean_unsigned_to_nat(0u);
v___x_314_ = lean_unbox_uint64(v_a_311_);
lean_dec(v_a_311_);
v___x_315_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__0___redArg(v___x_312_, v_x_287_, v_pinfos_300_, v___x_313_, v___x_314_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_, v___y_309_);
lean_dec_ref(v_pinfos_300_);
lean_dec_ref(v_x_287_);
return v___x_315_;
}
else
{
lean_dec_ref(v_pinfos_300_);
lean_dec_ref(v_x_287_);
return v___x_310_;
}
}
v___jp_316_:
{
if (v___y_317_ == 0)
{
uint8_t v___x_318_; 
v___x_318_ = l_Lean_Expr_hasLooseBVars(v_x_286_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_319_ = lean_box(0);
lean_inc_ref(v_x_286_);
v___x_320_ = l_Lean_Meta_getFunInfo(v_x_286_, v___x_319_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
if (lean_obj_tag(v___x_320_) == 0)
{
lean_object* v_a_321_; lean_object* v_paramInfo_322_; 
v_a_321_ = lean_ctor_get(v___x_320_, 0);
lean_inc(v_a_321_);
lean_dec_ref(v___x_320_);
v_paramInfo_322_ = lean_ctor_get(v_a_321_, 0);
lean_inc_ref(v_paramInfo_322_);
lean_dec(v_a_321_);
v_pinfos_300_ = v_paramInfo_322_;
v___y_301_ = v___y_289_;
v___y_302_ = v___y_290_;
v___y_303_ = v___y_291_;
v___y_304_ = v___y_292_;
v___y_305_ = v___y_293_;
v___y_306_ = v___y_294_;
v___y_307_ = v___y_295_;
v___y_308_ = v___y_296_;
v___y_309_ = v___y_297_;
goto v___jp_299_;
}
else
{
lean_object* v_a_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_330_; 
lean_dec_ref(v_x_287_);
lean_dec_ref(v_x_286_);
v_a_323_ = lean_ctor_get(v___x_320_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_320_);
if (v_isSharedCheck_330_ == 0)
{
v___x_325_ = v___x_320_;
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_a_323_);
lean_dec(v___x_320_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
if (v_isShared_326_ == 0)
{
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_a_323_);
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
else
{
lean_object* v___x_331_; 
v___x_331_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4___closed__0, &l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4___closed__0_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4___closed__0);
v_pinfos_300_ = v___x_331_;
v___y_301_ = v___y_289_;
v___y_302_ = v___y_290_;
v___y_303_ = v___y_291_;
v___y_304_ = v___y_292_;
v___y_305_ = v___y_293_;
v___y_306_ = v___y_294_;
v___y_307_ = v___y_295_;
v___y_308_ = v___y_296_;
v___y_309_ = v___y_297_;
goto v___jp_299_;
}
}
else
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
lean_dec_ref(v_x_286_);
v___x_332_ = l_Lean_instInhabitedExpr;
v___x_333_ = lean_unsigned_to_nat(0u);
v___x_334_ = lean_array_get(v___x_332_, v_x_287_, v___x_333_);
lean_dec_ref(v_x_287_);
v___x_335_ = l_Lean_Meta_Grind_getAnchor(v___x_334_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
return v___x_335_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAnchor(lean_object* v_e_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
uint64_t v_a_358_; lean_object* v___y_359_; lean_object* v___y_360_; lean_object* v_n_385_; lean_object* v_d_386_; lean_object* v_b_387_; lean_object* v___y_388_; lean_object* v___y_389_; lean_object* v___y_390_; lean_object* v___y_391_; lean_object* v___y_392_; lean_object* v___y_393_; lean_object* v___y_394_; lean_object* v___y_395_; lean_object* v___y_396_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v_anchors_408_; lean_object* v___x_409_; 
v___x_406_ = lean_st_ref_get(v_a_355_);
lean_dec(v___x_406_);
v___x_407_ = lean_st_ref_get(v_a_349_);
v_anchors_408_ = lean_ctor_get(v___x_407_, 7);
lean_inc_ref(v_anchors_408_);
lean_dec(v___x_407_);
v___x_409_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___redArg(v_anchors_408_, v_e_346_);
lean_dec_ref(v_anchors_408_);
if (lean_obj_tag(v___x_409_) == 1)
{
lean_object* v_val_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_417_; 
lean_dec_ref(v_e_346_);
v_val_410_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_417_ == 0)
{
v___x_412_ = v___x_409_;
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_val_410_);
lean_dec(v___x_409_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_415_; 
if (v_isShared_413_ == 0)
{
lean_ctor_set_tag(v___x_412_, 0);
v___x_415_ = v___x_412_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_val_410_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
}
else
{
lean_dec(v___x_409_);
switch(lean_obj_tag(v_e_346_))
{
case 0:
{
lean_object* v_deBruijnIndex_418_; uint64_t v___x_419_; 
v_deBruijnIndex_418_ = lean_ctor_get(v_e_346_, 0);
v___x_419_ = lean_uint64_of_nat(v_deBruijnIndex_418_);
v_a_358_ = v___x_419_;
v___y_359_ = v_a_349_;
v___y_360_ = v_a_355_;
goto v___jp_357_;
}
case 1:
{
lean_object* v_fvarId_420_; lean_object* v___x_421_; 
v_fvarId_420_ = lean_ctor_get(v_e_346_, 0);
lean_inc(v_fvarId_420_);
v___x_421_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_420_, v_a_352_, v_a_354_, v_a_355_);
if (lean_obj_tag(v___x_421_) == 0)
{
lean_object* v_a_422_; lean_object* v___x_423_; uint64_t v___x_424_; 
v_a_422_ = lean_ctor_get(v___x_421_, 0);
lean_inc(v_a_422_);
lean_dec_ref(v___x_421_);
v___x_423_ = l_Lean_LocalDecl_userName(v_a_422_);
lean_dec(v_a_422_);
v___x_424_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName(v___x_423_);
v_a_358_ = v___x_424_;
v___y_359_ = v_a_349_;
v___y_360_ = v_a_355_;
goto v___jp_357_;
}
else
{
lean_object* v_a_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_432_; 
lean_dec_ref(v_e_346_);
v_a_425_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_432_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_432_ == 0)
{
v___x_427_ = v___x_421_;
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_a_425_);
lean_dec(v___x_421_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v___x_430_; 
if (v_isShared_428_ == 0)
{
v___x_430_ = v___x_427_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_a_425_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
}
case 4:
{
lean_object* v_declName_433_; lean_object* v___x_434_; 
v_declName_433_ = lean_ctor_get(v_e_346_, 0);
lean_inc(v_declName_433_);
v___x_434_ = l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___redArg(v_declName_433_, v_a_355_);
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v_a_435_; uint8_t v___x_436_; 
v_a_435_ = lean_ctor_get(v___x_434_, 0);
lean_inc(v_a_435_);
lean_dec_ref(v___x_434_);
v___x_436_ = lean_unbox(v_a_435_);
lean_dec(v_a_435_);
if (v___x_436_ == 0)
{
uint64_t v___x_437_; 
lean_inc(v_declName_433_);
v___x_437_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName(v_declName_433_);
v_a_358_ = v___x_437_;
v___y_359_ = v_a_349_;
v___y_360_ = v_a_355_;
goto v___jp_357_;
}
else
{
uint64_t v___x_438_; 
v___x_438_ = 0ULL;
v_a_358_ = v___x_438_;
v___y_359_ = v_a_349_;
v___y_360_ = v_a_355_;
goto v___jp_357_;
}
}
else
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_446_; 
lean_dec_ref(v_e_346_);
v_a_439_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_446_ == 0)
{
v___x_441_ = v___x_434_;
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_434_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_444_; 
if (v_isShared_442_ == 0)
{
v___x_444_ = v___x_441_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_a_439_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
}
case 5:
{
lean_object* v_dummy_447_; lean_object* v_nargs_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v_dummy_447_ = lean_obj_once(&l_Lean_Meta_Grind_getAnchor___closed__0, &l_Lean_Meta_Grind_getAnchor___closed__0_once, _init_l_Lean_Meta_Grind_getAnchor___closed__0);
v_nargs_448_ = l_Lean_Expr_getAppNumArgs(v_e_346_);
lean_inc(v_nargs_448_);
v___x_449_ = lean_mk_array(v_nargs_448_, v_dummy_447_);
v___x_450_ = lean_unsigned_to_nat(1u);
v___x_451_ = lean_nat_sub(v_nargs_448_, v___x_450_);
lean_dec(v_nargs_448_);
lean_inc_ref(v_e_346_);
v___x_452_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4(v_e_346_, v___x_449_, v___x_451_, v_a_347_, v_a_348_, v_a_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v_a_453_; uint64_t v___x_454_; 
v_a_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_a_453_);
lean_dec_ref(v___x_452_);
v___x_454_ = lean_unbox_uint64(v_a_453_);
lean_dec(v_a_453_);
v_a_358_ = v___x_454_;
v___y_359_ = v_a_349_;
v___y_360_ = v_a_355_;
goto v___jp_357_;
}
else
{
lean_dec_ref(v_e_346_);
return v___x_452_;
}
}
case 6:
{
lean_object* v_binderName_455_; lean_object* v_binderType_456_; lean_object* v_body_457_; 
v_binderName_455_ = lean_ctor_get(v_e_346_, 0);
v_binderType_456_ = lean_ctor_get(v_e_346_, 1);
v_body_457_ = lean_ctor_get(v_e_346_, 2);
lean_inc_ref(v_body_457_);
lean_inc_ref(v_binderType_456_);
lean_inc(v_binderName_455_);
v_n_385_ = v_binderName_455_;
v_d_386_ = v_binderType_456_;
v_b_387_ = v_body_457_;
v___y_388_ = v_a_347_;
v___y_389_ = v_a_348_;
v___y_390_ = v_a_349_;
v___y_391_ = v_a_350_;
v___y_392_ = v_a_351_;
v___y_393_ = v_a_352_;
v___y_394_ = v_a_353_;
v___y_395_ = v_a_354_;
v___y_396_ = v_a_355_;
goto v___jp_384_;
}
case 7:
{
lean_object* v_binderName_458_; lean_object* v_binderType_459_; lean_object* v_body_460_; 
v_binderName_458_ = lean_ctor_get(v_e_346_, 0);
v_binderType_459_ = lean_ctor_get(v_e_346_, 1);
v_body_460_ = lean_ctor_get(v_e_346_, 2);
lean_inc_ref(v_body_460_);
lean_inc_ref(v_binderType_459_);
lean_inc(v_binderName_458_);
v_n_385_ = v_binderName_458_;
v_d_386_ = v_binderType_459_;
v_b_387_ = v_body_460_;
v___y_388_ = v_a_347_;
v___y_389_ = v_a_348_;
v___y_390_ = v_a_349_;
v___y_391_ = v_a_350_;
v___y_392_ = v_a_351_;
v___y_393_ = v_a_352_;
v___y_394_ = v_a_353_;
v___y_395_ = v_a_354_;
v___y_396_ = v_a_355_;
goto v___jp_384_;
}
case 8:
{
lean_object* v_declName_461_; lean_object* v_type_462_; lean_object* v_value_463_; lean_object* v_body_464_; lean_object* v___x_465_; 
v_declName_461_ = lean_ctor_get(v_e_346_, 0);
v_type_462_ = lean_ctor_get(v_e_346_, 1);
v_value_463_ = lean_ctor_get(v_e_346_, 2);
v_body_464_ = lean_ctor_get(v_e_346_, 3);
lean_inc_ref(v_value_463_);
v___x_465_ = l_Lean_Meta_Grind_getAnchor(v_value_463_, v_a_347_, v_a_348_, v_a_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_);
if (lean_obj_tag(v___x_465_) == 0)
{
lean_object* v_a_466_; lean_object* v___x_467_; 
v_a_466_ = lean_ctor_get(v___x_465_, 0);
lean_inc(v_a_466_);
lean_dec_ref(v___x_465_);
lean_inc_ref(v_type_462_);
v___x_467_ = l_Lean_Meta_Grind_getAnchor(v_type_462_, v_a_347_, v_a_348_, v_a_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_);
if (lean_obj_tag(v___x_467_) == 0)
{
lean_object* v_a_468_; lean_object* v___x_469_; 
v_a_468_ = lean_ctor_get(v___x_467_, 0);
lean_inc(v_a_468_);
lean_dec_ref(v___x_467_);
lean_inc_ref(v_body_464_);
v___x_469_ = l_Lean_Meta_Grind_getAnchor(v_body_464_, v_a_347_, v_a_348_, v_a_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v_a_470_; uint64_t v___x_471_; uint64_t v___x_472_; uint64_t v___x_473_; uint64_t v___x_474_; uint64_t v___x_475_; uint64_t v___x_476_; uint64_t v___x_477_; 
v_a_470_ = lean_ctor_get(v___x_469_, 0);
lean_inc(v_a_470_);
lean_dec_ref(v___x_469_);
lean_inc(v_declName_461_);
v___x_471_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName(v_declName_461_);
v___x_472_ = lean_unbox_uint64(v_a_468_);
lean_dec(v_a_468_);
v___x_473_ = lean_unbox_uint64(v_a_470_);
lean_dec(v_a_470_);
v___x_474_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v___x_472_, v___x_473_);
v___x_475_ = lean_unbox_uint64(v_a_466_);
lean_dec(v_a_466_);
v___x_476_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v___x_475_, v___x_474_);
v___x_477_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v___x_471_, v___x_476_);
v_a_358_ = v___x_477_;
v___y_359_ = v_a_349_;
v___y_360_ = v_a_355_;
goto v___jp_357_;
}
else
{
lean_dec(v_a_468_);
lean_dec(v_a_466_);
lean_dec_ref(v_e_346_);
return v___x_469_;
}
}
else
{
lean_dec(v_a_466_);
lean_dec_ref(v_e_346_);
return v___x_467_;
}
}
else
{
lean_dec_ref(v_e_346_);
return v___x_465_;
}
}
case 9:
{
lean_object* v_a_478_; uint64_t v___x_479_; 
v_a_478_ = lean_ctor_get(v_e_346_, 0);
v___x_479_ = l_Lean_Literal_hash(v_a_478_);
v_a_358_ = v___x_479_;
v___y_359_ = v_a_349_;
v___y_360_ = v_a_355_;
goto v___jp_357_;
}
case 10:
{
lean_object* v_expr_480_; lean_object* v___x_481_; 
v_expr_480_ = lean_ctor_get(v_e_346_, 1);
lean_inc_ref(v_expr_480_);
v___x_481_ = l_Lean_Meta_Grind_getAnchor(v_expr_480_, v_a_347_, v_a_348_, v_a_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v_a_482_; uint64_t v___x_483_; 
v_a_482_ = lean_ctor_get(v___x_481_, 0);
lean_inc(v_a_482_);
lean_dec_ref(v___x_481_);
v___x_483_ = lean_unbox_uint64(v_a_482_);
lean_dec(v_a_482_);
v_a_358_ = v___x_483_;
v___y_359_ = v_a_349_;
v___y_360_ = v_a_355_;
goto v___jp_357_;
}
else
{
lean_dec_ref(v_e_346_);
return v___x_481_;
}
}
case 11:
{
lean_object* v_idx_484_; lean_object* v_struct_485_; lean_object* v___x_486_; 
v_idx_484_ = lean_ctor_get(v_e_346_, 1);
v_struct_485_ = lean_ctor_get(v_e_346_, 2);
lean_inc_ref(v_struct_485_);
v___x_486_ = l_Lean_Meta_Grind_getAnchor(v_struct_485_, v_a_347_, v_a_348_, v_a_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; uint64_t v___x_488_; uint64_t v___x_489_; uint64_t v___x_490_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_a_487_);
lean_dec_ref(v___x_486_);
v___x_488_ = lean_uint64_of_nat(v_idx_484_);
v___x_489_ = lean_unbox_uint64(v_a_487_);
lean_dec(v_a_487_);
v___x_490_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v___x_488_, v___x_489_);
v_a_358_ = v___x_490_;
v___y_359_ = v_a_349_;
v___y_360_ = v_a_355_;
goto v___jp_357_;
}
else
{
lean_dec_ref(v_e_346_);
return v___x_486_;
}
}
default: 
{
uint64_t v___x_491_; 
v___x_491_ = 0ULL;
v_a_358_ = v___x_491_;
v___y_359_ = v_a_349_;
v___y_360_ = v_a_355_;
goto v___jp_357_;
}
}
}
v___jp_357_:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v_congrThms_363_; lean_object* v_simp_364_; lean_object* v_lastTag_365_; lean_object* v_counters_366_; lean_object* v_splitDiags_367_; lean_object* v_lawfulEqCmpMap_368_; lean_object* v_reflCmpMap_369_; lean_object* v_anchors_370_; lean_object* v_instanceMap_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_383_; 
v___x_361_ = lean_st_ref_get(v___y_360_);
lean_dec(v___x_361_);
v___x_362_ = lean_st_ref_take(v___y_359_);
v_congrThms_363_ = lean_ctor_get(v___x_362_, 0);
v_simp_364_ = lean_ctor_get(v___x_362_, 1);
v_lastTag_365_ = lean_ctor_get(v___x_362_, 2);
v_counters_366_ = lean_ctor_get(v___x_362_, 3);
v_splitDiags_367_ = lean_ctor_get(v___x_362_, 4);
v_lawfulEqCmpMap_368_ = lean_ctor_get(v___x_362_, 5);
v_reflCmpMap_369_ = lean_ctor_get(v___x_362_, 6);
v_anchors_370_ = lean_ctor_get(v___x_362_, 7);
v_instanceMap_371_ = lean_ctor_get(v___x_362_, 8);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_383_ == 0)
{
v___x_373_ = v___x_362_;
v_isShared_374_ = v_isSharedCheck_383_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_instanceMap_371_);
lean_inc(v_anchors_370_);
lean_inc(v_reflCmpMap_369_);
lean_inc(v_lawfulEqCmpMap_368_);
lean_inc(v_splitDiags_367_);
lean_inc(v_counters_366_);
lean_inc(v_lastTag_365_);
lean_inc(v_simp_364_);
lean_inc(v_congrThms_363_);
lean_dec(v___x_362_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_383_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_378_; 
v___x_375_ = lean_box_uint64(v_a_358_);
v___x_376_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1___redArg(v_anchors_370_, v_e_346_, v___x_375_);
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 7, v___x_376_);
v___x_378_ = v___x_373_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_congrThms_363_);
lean_ctor_set(v_reuseFailAlloc_382_, 1, v_simp_364_);
lean_ctor_set(v_reuseFailAlloc_382_, 2, v_lastTag_365_);
lean_ctor_set(v_reuseFailAlloc_382_, 3, v_counters_366_);
lean_ctor_set(v_reuseFailAlloc_382_, 4, v_splitDiags_367_);
lean_ctor_set(v_reuseFailAlloc_382_, 5, v_lawfulEqCmpMap_368_);
lean_ctor_set(v_reuseFailAlloc_382_, 6, v_reflCmpMap_369_);
lean_ctor_set(v_reuseFailAlloc_382_, 7, v___x_376_);
lean_ctor_set(v_reuseFailAlloc_382_, 8, v_instanceMap_371_);
v___x_378_ = v_reuseFailAlloc_382_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_379_ = lean_st_ref_set(v___y_359_, v___x_378_);
v___x_380_ = lean_box_uint64(v_a_358_);
v___x_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
return v___x_381_;
}
}
}
v___jp_384_:
{
lean_object* v___x_397_; 
v___x_397_ = l_Lean_Meta_Grind_getAnchor(v_d_386_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
if (lean_obj_tag(v___x_397_) == 0)
{
lean_object* v_a_398_; lean_object* v___x_399_; 
v_a_398_ = lean_ctor_get(v___x_397_, 0);
lean_inc(v_a_398_);
lean_dec_ref(v___x_397_);
v___x_399_ = l_Lean_Meta_Grind_getAnchor(v_b_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v_a_400_; uint64_t v___x_401_; uint64_t v___x_402_; uint64_t v___x_403_; uint64_t v___x_404_; uint64_t v___x_405_; 
v_a_400_ = lean_ctor_get(v___x_399_, 0);
lean_inc(v_a_400_);
lean_dec_ref(v___x_399_);
v___x_401_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName(v_n_385_);
v___x_402_ = lean_unbox_uint64(v_a_398_);
lean_dec(v_a_398_);
v___x_403_ = lean_unbox_uint64(v_a_400_);
lean_dec(v_a_400_);
v___x_404_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v___x_402_, v___x_403_);
v___x_405_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v___x_401_, v___x_404_);
v_a_358_ = v___x_405_;
v___y_359_ = v___y_390_;
v___y_360_ = v___y_396_;
goto v___jp_357_;
}
else
{
lean_dec(v_a_398_);
lean_dec(v_n_385_);
lean_dec_ref(v_e_346_);
return v___x_399_;
}
}
else
{
lean_dec_ref(v_b_387_);
lean_dec(v_n_385_);
lean_dec_ref(v_e_346_);
return v___x_397_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__0___redArg(lean_object* v_upperBound_492_, lean_object* v_args_493_, lean_object* v_pinfos_494_, lean_object* v_a_495_, uint64_t v_b_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_){
_start:
{
uint64_t v_a_508_; uint8_t v___x_512_; 
v___x_512_ = lean_nat_dec_lt(v_a_495_, v_upperBound_492_);
if (v___x_512_ == 0)
{
lean_object* v___x_513_; lean_object* v___x_514_; 
lean_dec(v_a_495_);
v___x_513_ = lean_box_uint64(v_b_496_);
v___x_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
return v___x_514_;
}
else
{
lean_object* v___x_515_; lean_object* v___x_516_; uint8_t v___x_517_; 
v___x_515_ = lean_array_fget_borrowed(v_args_493_, v_a_495_);
v___x_516_ = lean_array_get_size(v_pinfos_494_);
v___x_517_ = lean_nat_dec_lt(v_a_495_, v___x_516_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; 
lean_inc(v___x_515_);
v___x_518_ = l_Lean_Meta_Grind_getAnchor(v___x_515_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_);
if (lean_obj_tag(v___x_518_) == 0)
{
lean_object* v_a_519_; uint64_t v___x_520_; uint64_t v___x_521_; 
v_a_519_ = lean_ctor_get(v___x_518_, 0);
lean_inc(v_a_519_);
lean_dec_ref(v___x_518_);
v___x_520_ = lean_unbox_uint64(v_a_519_);
lean_dec(v_a_519_);
v___x_521_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v_b_496_, v___x_520_);
v_a_508_ = v___x_521_;
goto v___jp_507_;
}
else
{
lean_dec(v_a_495_);
return v___x_518_;
}
}
else
{
lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_522_ = lean_array_fget_borrowed(v_pinfos_494_, v_a_495_);
v___x_523_ = l_Lean_Meta_ParamInfo_isImplicit(v___x_522_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; 
lean_inc(v___x_515_);
v___x_524_ = l_Lean_Meta_Grind_getAnchor(v___x_515_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_);
if (lean_obj_tag(v___x_524_) == 0)
{
lean_object* v_a_525_; uint64_t v___x_526_; uint64_t v___x_527_; 
v_a_525_ = lean_ctor_get(v___x_524_, 0);
lean_inc(v_a_525_);
lean_dec_ref(v___x_524_);
v___x_526_ = lean_unbox_uint64(v_a_525_);
lean_dec(v_a_525_);
v___x_527_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v_b_496_, v___x_526_);
v_a_508_ = v___x_527_;
goto v___jp_507_;
}
else
{
lean_dec(v_a_495_);
return v___x_524_;
}
}
else
{
v_a_508_ = v_b_496_;
goto v___jp_507_;
}
}
}
v___jp_507_:
{
lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_509_ = lean_unsigned_to_nat(1u);
v___x_510_ = lean_nat_add(v_a_495_, v___x_509_);
lean_dec(v_a_495_);
v_a_495_ = v___x_510_;
v_b_496_ = v_a_508_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__0___redArg___boxed(lean_object* v_upperBound_528_, lean_object* v_args_529_, lean_object* v_pinfos_530_, lean_object* v_a_531_, lean_object* v_b_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_){
_start:
{
uint64_t v_b_boxed_543_; lean_object* v_res_544_; 
v_b_boxed_543_ = lean_unbox_uint64(v_b_532_);
lean_dec_ref(v_b_532_);
v_res_544_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__0___redArg(v_upperBound_528_, v_args_529_, v_pinfos_530_, v_a_531_, v_b_boxed_543_, v___y_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
lean_dec(v___y_539_);
lean_dec_ref(v___y_538_);
lean_dec(v___y_537_);
lean_dec_ref(v___y_536_);
lean_dec(v___y_535_);
lean_dec_ref(v___y_534_);
lean_dec(v___y_533_);
lean_dec_ref(v_pinfos_530_);
lean_dec_ref(v_args_529_);
lean_dec(v_upperBound_528_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4___boxed(lean_object* v_x_545_, lean_object* v_x_546_, lean_object* v_x_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4(v_x_545_, v_x_546_, v_x_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
lean_dec(v___y_552_);
lean_dec_ref(v___y_551_);
lean_dec(v___y_550_);
lean_dec_ref(v___y_549_);
lean_dec(v___y_548_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAnchor___boxed(lean_object* v_e_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Lean_Meta_Grind_getAnchor(v_e_559_, v_a_560_, v_a_561_, v_a_562_, v_a_563_, v_a_564_, v_a_565_, v_a_566_, v_a_567_, v_a_568_);
lean_dec(v_a_568_);
lean_dec_ref(v_a_567_);
lean_dec(v_a_566_);
lean_dec_ref(v_a_565_);
lean_dec(v_a_564_);
lean_dec_ref(v_a_563_);
lean_dec(v_a_562_);
lean_dec_ref(v_a_561_);
lean_dec(v_a_560_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__0(lean_object* v_upperBound_571_, lean_object* v_args_572_, lean_object* v_pinfos_573_, lean_object* v_inst_574_, lean_object* v_R_575_, lean_object* v_a_576_, uint64_t v_b_577_, lean_object* v_c_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__0___redArg(v_upperBound_571_, v_args_572_, v_pinfos_573_, v_a_576_, v_b_577_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__0___boxed(lean_object** _args){
lean_object* v_upperBound_590_ = _args[0];
lean_object* v_args_591_ = _args[1];
lean_object* v_pinfos_592_ = _args[2];
lean_object* v_inst_593_ = _args[3];
lean_object* v_R_594_ = _args[4];
lean_object* v_a_595_ = _args[5];
lean_object* v_b_596_ = _args[6];
lean_object* v_c_597_ = _args[7];
lean_object* v___y_598_ = _args[8];
lean_object* v___y_599_ = _args[9];
lean_object* v___y_600_ = _args[10];
lean_object* v___y_601_ = _args[11];
lean_object* v___y_602_ = _args[12];
lean_object* v___y_603_ = _args[13];
lean_object* v___y_604_ = _args[14];
lean_object* v___y_605_ = _args[15];
lean_object* v___y_606_ = _args[16];
lean_object* v___y_607_ = _args[17];
_start:
{
uint64_t v_b_boxed_608_; lean_object* v_res_609_; 
v_b_boxed_608_ = lean_unbox_uint64(v_b_596_);
lean_dec_ref(v_b_596_);
v_res_609_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__0(v_upperBound_590_, v_args_591_, v_pinfos_592_, v_inst_593_, v_R_594_, v_a_595_, v_b_boxed_608_, v_c_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_);
lean_dec(v___y_606_);
lean_dec_ref(v___y_605_);
lean_dec(v___y_604_);
lean_dec_ref(v___y_603_);
lean_dec(v___y_602_);
lean_dec_ref(v___y_601_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_599_);
lean_dec(v___y_598_);
lean_dec_ref(v_pinfos_592_);
lean_dec_ref(v_args_591_);
lean_dec(v_upperBound_590_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1(lean_object* v_00_u03b2_610_, lean_object* v_x_611_, lean_object* v_x_612_, lean_object* v_x_613_){
_start:
{
lean_object* v___x_614_; 
v___x_614_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1___redArg(v_x_611_, v_x_612_, v_x_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2(lean_object* v_00_u03b2_615_, lean_object* v_x_616_, lean_object* v_x_617_){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___redArg(v_x_616_, v_x_617_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___boxed(lean_object* v_00_u03b2_619_, lean_object* v_x_620_, lean_object* v_x_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2(v_00_u03b2_619_, v_x_620_, v_x_621_);
lean_dec_ref(v_x_621_);
lean_dec_ref(v_x_620_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1(lean_object* v_00_u03b2_623_, lean_object* v_x_624_, size_t v_x_625_, size_t v_x_626_, lean_object* v_x_627_, lean_object* v_x_628_){
_start:
{
lean_object* v___x_629_; 
v___x_629_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1___redArg(v_x_624_, v_x_625_, v_x_626_, v_x_627_, v_x_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1___boxed(lean_object* v_00_u03b2_630_, lean_object* v_x_631_, lean_object* v_x_632_, lean_object* v_x_633_, lean_object* v_x_634_, lean_object* v_x_635_){
_start:
{
size_t v_x_33612__boxed_636_; size_t v_x_33613__boxed_637_; lean_object* v_res_638_; 
v_x_33612__boxed_636_ = lean_unbox_usize(v_x_632_);
lean_dec(v_x_632_);
v_x_33613__boxed_637_ = lean_unbox_usize(v_x_633_);
lean_dec(v_x_633_);
v_res_638_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1(v_00_u03b2_630_, v_x_631_, v_x_33612__boxed_636_, v_x_33613__boxed_637_, v_x_634_, v_x_635_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3(lean_object* v_00_u03b2_639_, lean_object* v_x_640_, size_t v_x_641_, lean_object* v_x_642_){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg(v_x_640_, v_x_641_, v_x_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___boxed(lean_object* v_00_u03b2_644_, lean_object* v_x_645_, lean_object* v_x_646_, lean_object* v_x_647_){
_start:
{
size_t v_x_33629__boxed_648_; lean_object* v_res_649_; 
v_x_33629__boxed_648_ = lean_unbox_usize(v_x_646_);
lean_dec(v_x_646_);
v_res_649_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3(v_00_u03b2_644_, v_x_645_, v_x_33629__boxed_648_, v_x_647_);
lean_dec_ref(v_x_647_);
lean_dec_ref(v_x_645_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_650_, lean_object* v_n_651_, lean_object* v_k_652_, lean_object* v_v_653_){
_start:
{
lean_object* v___x_654_; 
v___x_654_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__3___redArg(v_n_651_, v_k_652_, v_v_653_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__4(lean_object* v_00_u03b2_655_, size_t v_depth_656_, lean_object* v_keys_657_, lean_object* v_vals_658_, lean_object* v_heq_659_, lean_object* v_i_660_, lean_object* v_entries_661_){
_start:
{
lean_object* v___x_662_; 
v___x_662_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__4___redArg(v_depth_656_, v_keys_657_, v_vals_658_, v_i_660_, v_entries_661_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__4___boxed(lean_object* v_00_u03b2_663_, lean_object* v_depth_664_, lean_object* v_keys_665_, lean_object* v_vals_666_, lean_object* v_heq_667_, lean_object* v_i_668_, lean_object* v_entries_669_){
_start:
{
size_t v_depth_boxed_670_; lean_object* v_res_671_; 
v_depth_boxed_670_ = lean_unbox_usize(v_depth_664_);
lean_dec(v_depth_664_);
v_res_671_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__4(v_00_u03b2_663_, v_depth_boxed_670_, v_keys_665_, v_vals_666_, v_heq_667_, v_i_668_, v_entries_669_);
lean_dec_ref(v_vals_666_);
lean_dec_ref(v_keys_665_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7(lean_object* v_00_u03b2_672_, lean_object* v_keys_673_, lean_object* v_vals_674_, lean_object* v_heq_675_, lean_object* v_i_676_, lean_object* v_k_677_){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___redArg(v_keys_673_, v_vals_674_, v_i_676_, v_k_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___boxed(lean_object* v_00_u03b2_679_, lean_object* v_keys_680_, lean_object* v_vals_681_, lean_object* v_heq_682_, lean_object* v_i_683_, lean_object* v_k_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7(v_00_u03b2_679_, v_keys_680_, v_vals_681_, v_heq_682_, v_i_683_, v_k_684_);
lean_dec_ref(v_k_684_);
lean_dec_ref(v_vals_681_);
lean_dec_ref(v_keys_680_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_686_, lean_object* v_x_687_, lean_object* v_x_688_, lean_object* v_x_689_, lean_object* v_x_690_){
_start:
{
lean_object* v___x_691_; 
v___x_691_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__1_spec__1_spec__3_spec__6___redArg(v_x_687_, v_x_688_, v_x_689_, v_x_690_);
return v___x_691_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_AnchorRef_matches(lean_object* v_anchorRef_692_, uint64_t v_anchor_693_){
_start:
{
lean_object* v_numDigits_694_; uint64_t v_anchorPrefix_695_; uint64_t v___x_696_; uint64_t v___x_697_; uint64_t v___x_698_; uint64_t v___x_699_; uint64_t v_shift_700_; uint64_t v___x_701_; uint8_t v___x_702_; 
v_numDigits_694_ = lean_ctor_get(v_anchorRef_692_, 0);
v_anchorPrefix_695_ = lean_ctor_get_uint64(v_anchorRef_692_, sizeof(void*)*1);
v___x_696_ = 64ULL;
v___x_697_ = lean_uint64_of_nat(v_numDigits_694_);
v___x_698_ = 2ULL;
v___x_699_ = lean_uint64_shift_left(v___x_697_, v___x_698_);
v_shift_700_ = lean_uint64_sub(v___x_696_, v___x_699_);
v___x_701_ = lean_uint64_shift_right(v_anchor_693_, v_shift_700_);
v___x_702_ = lean_uint64_dec_eq(v_anchorPrefix_695_, v___x_701_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AnchorRef_matches___boxed(lean_object* v_anchorRef_703_, lean_object* v_anchor_704_){
_start:
{
uint64_t v_anchor_boxed_705_; uint8_t v_res_706_; lean_object* v_r_707_; 
v_anchor_boxed_705_ = lean_unbox_uint64(v_anchor_704_);
lean_dec_ref(v_anchor_704_);
v_res_706_ = l_Lean_Meta_Grind_AnchorRef_matches(v_anchorRef_703_, v_anchor_boxed_705_);
lean_dec_ref(v_anchorRef_703_);
v_r_707_ = lean_box(v_res_706_);
return v_r_707_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__0(void){
_start:
{
lean_object* v___x_708_; lean_object* v___f_709_; 
v___x_708_ = lean_alloc_closure((void*)(l_instDecidableEqUInt64___boxed), 2, 0);
v___f_709_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_709_, 0, v___x_708_);
return v___f_709_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__1(void){
_start:
{
lean_object* v___f_710_; 
v___f_710_ = lean_alloc_closure((void*)(l_instHashableUInt64___lam__0___boxed), 1, 0);
return v___f_710_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__10(void){
_start:
{
lean_object* v___f_711_; 
v___f_711_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_711_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__9(void){
_start:
{
lean_object* v___f_712_; 
v___f_712_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_712_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__8(void){
_start:
{
lean_object* v___f_713_; 
v___f_713_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_713_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__7(void){
_start:
{
lean_object* v___f_714_; 
v___f_714_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_714_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__6(void){
_start:
{
lean_object* v___f_715_; 
v___f_715_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_715_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__5(void){
_start:
{
lean_object* v___f_716_; 
v___f_716_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_716_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__4(void){
_start:
{
lean_object* v___f_717_; 
v___f_717_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_717_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__11(void){
_start:
{
lean_object* v___f_718_; lean_object* v___f_719_; lean_object* v___x_720_; 
v___f_718_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__5, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__5);
v___f_719_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__4, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__4);
v___x_720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_720_, 0, v___f_719_);
lean_ctor_set(v___x_720_, 1, v___f_718_);
return v___x_720_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__12(void){
_start:
{
lean_object* v___f_721_; lean_object* v___f_722_; lean_object* v___f_723_; lean_object* v___f_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v___f_721_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__9, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__9);
v___f_722_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__8, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__8);
v___f_723_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__7, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__7);
v___f_724_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__6, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__6);
v___x_725_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__11, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__11_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__11);
v___x_726_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_726_, 0, v___x_725_);
lean_ctor_set(v___x_726_, 1, v___f_724_);
lean_ctor_set(v___x_726_, 2, v___f_723_);
lean_ctor_set(v___x_726_, 3, v___f_722_);
lean_ctor_set(v___x_726_, 4, v___f_721_);
return v___x_726_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__13(void){
_start:
{
lean_object* v___f_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v___f_727_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__10, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__10);
v___x_728_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__12, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__12_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__12);
v___x_729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_729_, 0, v___x_728_);
lean_ctor_set(v___x_729_, 1, v___f_727_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___lam__0___boxed(lean_object* v_inst_730_, lean_object* v_shift_731_, lean_object* v___f_732_, lean_object* v___f_733_, lean_object* v___x_734_, lean_object* v_numDigits_735_, lean_object* v_es_736_, lean_object* v_a_737_, lean_object* v_x_738_, lean_object* v___y_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___lam__0(v_inst_730_, v_shift_731_, v___f_732_, v___f_733_, v___x_734_, v_numDigits_735_, v_es_736_, v_a_737_, v_x_738_, v___y_739_);
lean_dec(v_numDigits_735_);
lean_dec(v_shift_731_);
return v_res_740_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_741_ = lean_box(0);
v___x_742_ = lean_unsigned_to_nat(16u);
v___x_743_ = lean_mk_array(v___x_742_, v___x_741_);
return v___x_743_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__3(void){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v_found_746_; 
v___x_744_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__2);
v___x_745_ = lean_unsigned_to_nat(0u);
v_found_746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_found_746_, 0, v___x_745_);
lean_ctor_set(v_found_746_, 1, v___x_744_);
return v_found_746_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__14(void){
_start:
{
lean_object* v_found_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v_found_747_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__3, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__3);
v___x_748_ = lean_box(0);
v___x_749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
lean_ctor_set(v___x_749_, 1, v_found_747_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg(lean_object* v_inst_750_, lean_object* v_es_751_, lean_object* v_numDigits_752_){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; uint8_t v___x_756_; 
v___x_753_ = lean_unsigned_to_nat(4u);
v___x_754_ = lean_nat_mul(v___x_753_, v_numDigits_752_);
v___x_755_ = lean_unsigned_to_nat(64u);
v___x_756_ = lean_nat_dec_lt(v___x_754_, v___x_755_);
if (v___x_756_ == 0)
{
lean_dec(v___x_754_);
lean_dec_ref(v_es_751_);
lean_dec_ref(v_inst_750_);
return v_numDigits_752_;
}
else
{
lean_object* v_shift_757_; lean_object* v___f_758_; lean_object* v___f_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___f_762_; lean_object* v___x_763_; size_t v_sz_764_; size_t v___x_765_; lean_object* v___x_766_; lean_object* v_fst_767_; 
v_shift_757_ = lean_nat_sub(v___x_755_, v___x_754_);
lean_dec(v___x_754_);
v___f_758_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__0);
v___f_759_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__1);
v___x_760_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__13, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__13);
v___x_761_ = lean_box(0);
lean_inc_ref(v_es_751_);
lean_inc(v_numDigits_752_);
v___f_762_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___lam__0___boxed), 10, 7);
lean_closure_set(v___f_762_, 0, v_inst_750_);
lean_closure_set(v___f_762_, 1, v_shift_757_);
lean_closure_set(v___f_762_, 2, v___f_758_);
lean_closure_set(v___f_762_, 3, v___f_759_);
lean_closure_set(v___f_762_, 4, v___x_761_);
lean_closure_set(v___f_762_, 5, v_numDigits_752_);
lean_closure_set(v___f_762_, 6, v_es_751_);
v___x_763_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__14, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__14_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__14);
v_sz_764_ = lean_array_size(v_es_751_);
v___x_765_ = ((size_t)0ULL);
v___x_766_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_760_, v_es_751_, v___f_762_, v_sz_764_, v___x_765_, v___x_763_);
v_fst_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_fst_767_);
lean_dec(v___x_766_);
if (lean_obj_tag(v_fst_767_) == 0)
{
return v_numDigits_752_;
}
else
{
lean_object* v_val_768_; 
lean_dec(v_numDigits_752_);
v_val_768_ = lean_ctor_get(v_fst_767_, 0);
lean_inc(v_val_768_);
lean_dec_ref(v_fst_767_);
return v_val_768_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___lam__0(lean_object* v_inst_769_, lean_object* v_shift_770_, lean_object* v___f_771_, lean_object* v___f_772_, lean_object* v___x_773_, lean_object* v_numDigits_774_, lean_object* v_es_775_, lean_object* v_a_776_, lean_object* v_x_777_, lean_object* v___y_778_){
_start:
{
lean_object* v_snd_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_804_; 
v_snd_779_ = lean_ctor_get(v___y_778_, 1);
v_isSharedCheck_804_ = !lean_is_exclusive(v___y_778_);
if (v_isSharedCheck_804_ == 0)
{
lean_object* v_unused_805_; 
v_unused_805_ = lean_ctor_get(v___y_778_, 0);
lean_dec(v_unused_805_);
v___x_781_ = v___y_778_;
v_isShared_782_ = v_isSharedCheck_804_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_snd_779_);
lean_dec(v___y_778_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_804_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_783_; uint64_t v___x_784_; uint64_t v___x_785_; uint64_t v___x_786_; lean_object* v___x_787_; uint8_t v___x_788_; 
lean_inc_ref(v_inst_769_);
v___x_783_ = lean_apply_1(v_inst_769_, v_a_776_);
v___x_784_ = lean_uint64_of_nat(v_shift_770_);
v___x_785_ = lean_unbox_uint64(v___x_783_);
lean_dec_ref(v___x_783_);
v___x_786_ = lean_uint64_shift_right(v___x_785_, v___x_784_);
v___x_787_ = lean_box_uint64(v___x_786_);
lean_inc_ref(v___f_772_);
lean_inc_ref(v___f_771_);
v___x_788_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_771_, v___f_772_, v_snd_779_, v___x_787_);
if (v___x_788_ == 0)
{
lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_793_; 
lean_dec_ref(v_es_775_);
lean_dec_ref(v_inst_769_);
v___x_789_ = lean_box(0);
v___x_790_ = lean_box_uint64(v___x_786_);
v___x_791_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___f_771_, v___f_772_, v_snd_779_, v___x_790_, v___x_789_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 1, v___x_791_);
lean_ctor_set(v___x_781_, 0, v___x_773_);
v___x_793_ = v___x_781_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_773_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v___x_791_);
v___x_793_ = v_reuseFailAlloc_795_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
lean_object* v___x_794_; 
v___x_794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_794_, 0, v___x_793_);
return v___x_794_;
}
}
else
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_801_; 
lean_dec(v___x_773_);
lean_dec_ref(v___f_772_);
lean_dec_ref(v___f_771_);
v___x_796_ = lean_unsigned_to_nat(1u);
v___x_797_ = lean_nat_add(v_numDigits_774_, v___x_796_);
v___x_798_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg(v_inst_769_, v_es_775_, v___x_797_);
v___x_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_799_, 0, v___x_798_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v___x_799_);
v___x_801_ = v___x_781_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v___x_799_);
lean_ctor_set(v_reuseFailAlloc_803_, 1, v_snd_779_);
v___x_801_ = v_reuseFailAlloc_803_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
lean_object* v___x_802_; 
v___x_802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
return v___x_802_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go(lean_object* v_00_u03b1_806_, lean_object* v_inst_807_, lean_object* v_es_808_, lean_object* v_numDigits_809_){
_start:
{
lean_object* v___x_810_; 
v___x_810_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg(v_inst_807_, v_es_808_, v_numDigits_809_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Break_runK_match__1_splitter___redArg(lean_object* v_x_811_, lean_object* v_h__1_812_, lean_object* v_h__2_813_){
_start:
{
if (lean_obj_tag(v_x_811_) == 0)
{
lean_object* v___x_814_; lean_object* v___x_815_; 
lean_dec(v_h__1_812_);
v___x_814_ = lean_box(0);
v___x_815_ = lean_apply_1(v_h__2_813_, v___x_814_);
return v___x_815_;
}
else
{
lean_object* v_val_816_; lean_object* v___x_817_; 
lean_dec(v_h__2_813_);
v_val_816_ = lean_ctor_get(v_x_811_, 0);
lean_inc(v_val_816_);
lean_dec_ref(v_x_811_);
v___x_817_ = lean_apply_1(v_h__1_812_, v_val_816_);
return v___x_817_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Break_runK_match__1_splitter(lean_object* v_00_u03b1_818_, lean_object* v_motive_819_, lean_object* v_x_820_, lean_object* v_h__1_821_, lean_object* v_h__2_822_){
_start:
{
if (lean_obj_tag(v_x_820_) == 0)
{
lean_object* v___x_823_; lean_object* v___x_824_; 
lean_dec(v_h__1_821_);
v___x_823_ = lean_box(0);
v___x_824_ = lean_apply_1(v_h__2_822_, v___x_823_);
return v___x_824_;
}
else
{
lean_object* v_val_825_; lean_object* v___x_826_; 
lean_dec(v_h__2_822_);
v_val_825_ = lean_ctor_get(v_x_820_, 0);
lean_inc(v_val_825_);
lean_dec_ref(v_x_820_);
v___x_826_ = lean_apply_1(v_h__1_821_, v_val_825_);
return v___x_826_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors___redArg(lean_object* v_inst_827_, lean_object* v_es_828_){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_829_ = lean_unsigned_to_nat(4u);
v___x_830_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg(v_inst_827_, v_es_828_, v___x_829_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors(lean_object* v_00_u03b1_831_, lean_object* v_inst_832_, lean_object* v_es_833_){
_start:
{
lean_object* v___x_834_; 
v___x_834_ = l_Lean_Meta_Grind_getNumDigitsForAnchors___redArg(v_inst_832_, v_es_833_);
return v___x_834_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___lam__0(lean_object* v_e_835_){
_start:
{
uint64_t v_anchor_836_; 
v_anchor_836_ = lean_ctor_get_uint64(v_e_835_, sizeof(void*)*1);
return v_anchor_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___lam__0___boxed(lean_object* v_e_837_){
_start:
{
uint64_t v_res_838_; lean_object* v_r_839_; 
v_res_838_ = l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___lam__0(v_e_837_);
lean_dec_ref(v_e_837_);
v_r_839_ = lean_box_uint64(v_res_838_);
return v_r_839_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___closed__0(void){
_start:
{
lean_object* v___f_840_; 
v___f_840_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___lam__0___boxed), 1, 0);
return v___f_840_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instHasAnchorExprWithAnchor(void){
_start:
{
lean_object* v___f_841_; 
v___f_841_ = lean_obj_once(&l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___closed__0, &l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___closed__0_once, _init_l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___closed__0);
return v___f_841_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__0(void){
_start:
{
lean_object* v___x_842_; 
v___x_842_ = lean_mk_string_unchecked("hexnum", 6, 6);
return v___x_842_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__1(void){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_843_ = lean_obj_once(&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__0, &l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__0_once, _init_l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__0);
v___x_844_ = l_Lean_Name_mkStr1(v___x_843_);
return v___x_844_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__2(void){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_845_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__3(void){
_start:
{
lean_object* v___x_846_; 
v___x_846_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_846_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__4(void){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_847_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__5(void){
_start:
{
lean_object* v___x_848_; 
v___x_848_ = lean_mk_string_unchecked("anchor", 6, 6);
return v___x_848_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__6(void){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_849_ = lean_obj_once(&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__5, &l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__5_once, _init_l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__5);
v___x_850_ = lean_obj_once(&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__4, &l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__4_once, _init_l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__4);
v___x_851_ = lean_obj_once(&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__3, &l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__3_once, _init_l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__3);
v___x_852_ = lean_obj_once(&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__2, &l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__2_once, _init_l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__2);
v___x_853_ = l_Lean_Name_mkStr4(v___x_852_, v___x_851_, v___x_850_, v___x_849_);
return v___x_853_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__7(void){
_start:
{
lean_object* v___x_854_; 
v___x_854_ = lean_mk_string_unchecked("#", 1, 1);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg(lean_object* v_numDigits_855_, uint64_t v_anchorPrefix_856_, lean_object* v_a_857_){
_start:
{
lean_object* v_ref_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; uint8_t v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
v_ref_859_ = lean_ctor_get(v_a_857_, 5);
v___x_860_ = lean_obj_once(&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__1, &l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__1_once, _init_l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__1);
v___x_861_ = l_Lean_Meta_Grind_anchorPrefixToString(v_numDigits_855_, v_anchorPrefix_856_);
v___x_862_ = l_Lean_mkAtom(v___x_861_);
v___x_863_ = lean_unsigned_to_nat(1u);
v___x_864_ = lean_mk_empty_array_with_capacity(v___x_863_);
v___x_865_ = lean_array_push(v___x_864_, v___x_862_);
v___x_866_ = lean_box(2);
v___x_867_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_867_, 0, v___x_866_);
lean_ctor_set(v___x_867_, 1, v___x_860_);
lean_ctor_set(v___x_867_, 2, v___x_865_);
v___x_868_ = 0;
v___x_869_ = l_Lean_SourceInfo_fromRef(v_ref_859_, v___x_868_);
v___x_870_ = lean_obj_once(&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__6, &l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__6_once, _init_l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__6);
v___x_871_ = lean_obj_once(&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__7, &l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__7_once, _init_l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__7);
lean_inc(v___x_869_);
v___x_872_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_872_, 0, v___x_869_);
lean_ctor_set(v___x_872_, 1, v___x_871_);
v___x_873_ = l_Lean_Syntax_node2(v___x_869_, v___x_870_, v___x_872_, v___x_867_);
v___x_874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_874_, 0, v___x_873_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___boxed(lean_object* v_numDigits_875_, lean_object* v_anchorPrefix_876_, lean_object* v_a_877_, lean_object* v_a_878_){
_start:
{
uint64_t v_anchorPrefix_boxed_879_; lean_object* v_res_880_; 
v_anchorPrefix_boxed_879_ = lean_unbox_uint64(v_anchorPrefix_876_);
lean_dec_ref(v_anchorPrefix_876_);
v_res_880_ = l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg(v_numDigits_875_, v_anchorPrefix_boxed_879_, v_a_877_);
lean_dec_ref(v_a_877_);
lean_dec(v_numDigits_875_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix(lean_object* v_numDigits_881_, uint64_t v_anchorPrefix_882_, lean_object* v_a_883_, lean_object* v_a_884_){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg(v_numDigits_881_, v_anchorPrefix_882_, v_a_883_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___boxed(lean_object* v_numDigits_887_, lean_object* v_anchorPrefix_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_){
_start:
{
uint64_t v_anchorPrefix_boxed_892_; lean_object* v_res_893_; 
v_anchorPrefix_boxed_892_ = lean_unbox_uint64(v_anchorPrefix_888_);
lean_dec_ref(v_anchorPrefix_888_);
v_res_893_ = l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix(v_numDigits_887_, v_anchorPrefix_boxed_892_, v_a_889_, v_a_890_);
lean_dec(v_a_890_);
lean_dec_ref(v_a_889_);
lean_dec(v_numDigits_887_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntax___redArg(lean_object* v_numDigits_894_, uint64_t v_anchor_895_, lean_object* v_a_896_){
_start:
{
uint64_t v___x_898_; uint64_t v___x_899_; uint64_t v___x_900_; uint64_t v___x_901_; uint64_t v___x_902_; uint64_t v_anchorPrefix_903_; lean_object* v___x_904_; 
v___x_898_ = 64ULL;
v___x_899_ = lean_uint64_of_nat(v_numDigits_894_);
v___x_900_ = 2ULL;
v___x_901_ = lean_uint64_shift_left(v___x_899_, v___x_900_);
v___x_902_ = lean_uint64_sub(v___x_898_, v___x_901_);
v_anchorPrefix_903_ = lean_uint64_shift_right(v_anchor_895_, v___x_902_);
v___x_904_ = l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg(v_numDigits_894_, v_anchorPrefix_903_, v_a_896_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntax___redArg___boxed(lean_object* v_numDigits_905_, lean_object* v_anchor_906_, lean_object* v_a_907_, lean_object* v_a_908_){
_start:
{
uint64_t v_anchor_boxed_909_; lean_object* v_res_910_; 
v_anchor_boxed_909_ = lean_unbox_uint64(v_anchor_906_);
lean_dec_ref(v_anchor_906_);
v_res_910_ = l_Lean_Meta_Grind_mkAnchorSyntax___redArg(v_numDigits_905_, v_anchor_boxed_909_, v_a_907_);
lean_dec_ref(v_a_907_);
lean_dec(v_numDigits_905_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntax(lean_object* v_numDigits_911_, uint64_t v_anchor_912_, lean_object* v_a_913_, lean_object* v_a_914_){
_start:
{
lean_object* v___x_916_; 
v___x_916_ = l_Lean_Meta_Grind_mkAnchorSyntax___redArg(v_numDigits_911_, v_anchor_912_, v_a_913_);
return v___x_916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntax___boxed(lean_object* v_numDigits_917_, lean_object* v_anchor_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_){
_start:
{
uint64_t v_anchor_boxed_922_; lean_object* v_res_923_; 
v_anchor_boxed_922_ = lean_unbox_uint64(v_anchor_918_);
lean_dec_ref(v_anchor_918_);
v_res_923_ = l_Lean_Meta_Grind_mkAnchorSyntax(v_numDigits_917_, v_anchor_boxed_922_, v_a_919_, v_a_920_);
lean_dec(v_a_920_);
lean_dec_ref(v_a_919_);
lean_dec(v_numDigits_917_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitInfo_getAnchor(lean_object* v_s_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_){
_start:
{
lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_935_ = l_Lean_Meta_Grind_SplitInfo_getExpr(v_s_924_);
v___x_936_ = l_Lean_Meta_Grind_getAnchor(v___x_935_, v_a_925_, v_a_926_, v_a_927_, v_a_928_, v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitInfo_getAnchor___boxed(lean_object* v_s_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_){
_start:
{
lean_object* v_res_948_; 
v_res_948_ = l_Lean_Meta_Grind_SplitInfo_getAnchor(v_s_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_, v_a_942_, v_a_943_, v_a_944_, v_a_945_, v_a_946_);
lean_dec(v_a_946_);
lean_dec_ref(v_a_945_);
lean_dec(v_a_944_);
lean_dec_ref(v_a_943_);
lean_dec(v_a_942_);
lean_dec_ref(v_a_941_);
lean_dec(v_a_940_);
lean_dec_ref(v_a_939_);
lean_dec(v_a_938_);
lean_dec_ref(v_s_937_);
return v_res_948_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_MarkNestedSubsingletons(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Anchor(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_MarkNestedSubsingletons(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Grind_instHasAnchorExprWithAnchor = _init_l_Lean_Meta_Grind_instHasAnchorExprWithAnchor();
lean_mark_persistent(l_Lean_Meta_Grind_instHasAnchorExprWithAnchor);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Anchor(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_MarkNestedSubsingletons(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Anchor(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_MarkNestedSubsingletons(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Anchor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Anchor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Anchor(builtin);
}
#ifdef __cplusplus
}
#endif
