// Lean compiler output
// Module: Lean.Meta.Sym.AlphaShareCommon
// Imports: public import Lean.Meta.Sym.ExprPtr
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
uint8_t l_Lean_KVMap_eqv(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint64_t l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_findKeyDAux___redArg(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_hashPtrExpr_unsafe__1___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_findEntry_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___closed__0;
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Meta_Sym_instHashableAlphaKey___private__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instHashableAlphaKey___private__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_instHashableAlphaKey___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instHashableAlphaKey___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instHashableAlphaKey;
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_instBEqAlphaKey___private__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instBEqAlphaKey___private__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_instBEqAlphaKey___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instBEqAlphaKey___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instBEqAlphaKey;
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_shareCommonAlpha___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_shareCommonAlpha___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_shareCommonAlpha___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_shareCommonAlpha___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlpha(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visitInc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlphaInc(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(lean_object* v_e_1_){
_start:
{
switch(lean_obj_tag(v_e_1_))
{
case 5:
{
uint64_t v___x_2_; 
v___x_2_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_e_1_);
return v___x_2_;
}
case 6:
{
uint64_t v___x_3_; 
v___x_3_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_e_1_);
return v___x_3_;
}
case 7:
{
uint64_t v___x_4_; 
v___x_4_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_e_1_);
return v___x_4_;
}
case 8:
{
uint64_t v___x_5_; 
v___x_5_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_e_1_);
return v___x_5_;
}
case 10:
{
uint64_t v___x_6_; 
v___x_6_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_e_1_);
return v___x_6_;
}
case 11:
{
uint64_t v___x_7_; 
v___x_7_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_e_1_);
return v___x_7_;
}
default: 
{
uint64_t v___x_8_; 
v___x_8_ = l_Lean_Expr_hash(v_e_1_);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild___boxed(lean_object* v_e_9_){
_start:
{
uint64_t v_res_10_; lean_object* v_r_11_; 
v_res_10_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_e_9_);
lean_dec_ref(v_e_9_);
v_r_11_ = lean_box_uint64(v_res_10_);
return v_r_11_;
}
}
static uint64_t _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___closed__0(void){
_start:
{
lean_object* v___x_12_; uint64_t v___x_13_; 
v___x_12_ = lean_unsigned_to_nat(1723u);
v___x_13_ = lean_uint64_of_nat(v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(lean_object* v_e_14_){
_start:
{
lean_object* v_d_16_; lean_object* v_b_17_; 
switch(lean_obj_tag(v_e_14_))
{
case 5:
{
lean_object* v_fn_21_; lean_object* v_arg_22_; uint64_t v___x_23_; uint64_t v___x_24_; uint64_t v___x_25_; 
v_fn_21_ = lean_ctor_get(v_e_14_, 0);
v_arg_22_ = lean_ctor_get(v_e_14_, 1);
v___x_23_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_fn_21_);
v___x_24_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_arg_22_);
v___x_25_ = lean_uint64_mix_hash(v___x_23_, v___x_24_);
return v___x_25_;
}
case 6:
{
lean_object* v_binderType_26_; lean_object* v_body_27_; 
v_binderType_26_ = lean_ctor_get(v_e_14_, 1);
v_body_27_ = lean_ctor_get(v_e_14_, 2);
v_d_16_ = v_binderType_26_;
v_b_17_ = v_body_27_;
goto v___jp_15_;
}
case 7:
{
lean_object* v_binderType_28_; lean_object* v_body_29_; 
v_binderType_28_ = lean_ctor_get(v_e_14_, 1);
v_body_29_ = lean_ctor_get(v_e_14_, 2);
v_d_16_ = v_binderType_28_;
v_b_17_ = v_body_29_;
goto v___jp_15_;
}
case 8:
{
lean_object* v_value_30_; lean_object* v_body_31_; uint64_t v___x_32_; uint64_t v___x_33_; uint64_t v___x_34_; 
v_value_30_ = lean_ctor_get(v_e_14_, 2);
v_body_31_ = lean_ctor_get(v_e_14_, 3);
v___x_32_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_value_30_);
v___x_33_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_body_31_);
v___x_34_ = lean_uint64_mix_hash(v___x_32_, v___x_33_);
return v___x_34_;
}
case 10:
{
lean_object* v_expr_35_; uint64_t v___x_36_; uint64_t v___x_37_; uint64_t v___x_38_; 
v_expr_35_ = lean_ctor_get(v_e_14_, 1);
v___x_36_ = 13ULL;
v___x_37_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_expr_35_);
v___x_38_ = lean_uint64_mix_hash(v___x_36_, v___x_37_);
return v___x_38_;
}
case 11:
{
lean_object* v_typeName_39_; lean_object* v_idx_40_; lean_object* v_struct_41_; uint64_t v___y_43_; 
v_typeName_39_ = lean_ctor_get(v_e_14_, 0);
v_idx_40_ = lean_ctor_get(v_e_14_, 1);
v_struct_41_ = lean_ctor_get(v_e_14_, 2);
if (lean_obj_tag(v_typeName_39_) == 0)
{
uint64_t v___x_48_; 
v___x_48_ = lean_uint64_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___closed__0);
v___y_43_ = v___x_48_;
goto v___jp_42_;
}
else
{
uint64_t v_hash_49_; 
v_hash_49_ = lean_ctor_get_uint64(v_typeName_39_, sizeof(void*)*2);
v___y_43_ = v_hash_49_;
goto v___jp_42_;
}
v___jp_42_:
{
uint64_t v___x_44_; uint64_t v___x_45_; uint64_t v___x_46_; uint64_t v___x_47_; 
v___x_44_ = lean_uint64_of_nat(v_idx_40_);
v___x_45_ = lean_uint64_mix_hash(v___y_43_, v___x_44_);
v___x_46_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_struct_41_);
v___x_47_ = lean_uint64_mix_hash(v___x_45_, v___x_46_);
return v___x_47_;
}
}
default: 
{
uint64_t v___x_50_; 
v___x_50_ = l_Lean_Expr_hash(v_e_14_);
return v___x_50_;
}
}
v___jp_15_:
{
uint64_t v___x_18_; uint64_t v___x_19_; uint64_t v___x_20_; 
v___x_18_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_d_16_);
v___x_19_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_b_17_);
v___x_20_ = lean_uint64_mix_hash(v___x_18_, v___x_19_);
return v___x_20_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___boxed(lean_object* v_e_51_){
_start:
{
uint64_t v_res_52_; lean_object* v_r_53_; 
v_res_52_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_51_);
lean_dec_ref(v_e_51_);
v_r_53_ = lean_box_uint64(v_res_52_);
return v_r_53_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(lean_object* v_e_u2081_54_, lean_object* v_e_u2082_55_){
_start:
{
switch(lean_obj_tag(v_e_u2081_54_))
{
case 5:
{
if (lean_obj_tag(v_e_u2082_55_) == 5)
{
lean_object* v_fn_56_; lean_object* v_arg_57_; lean_object* v_fn_58_; lean_object* v_arg_59_; uint8_t v___x_60_; 
v_fn_56_ = lean_ctor_get(v_e_u2081_54_, 0);
lean_inc_ref(v_fn_56_);
v_arg_57_ = lean_ctor_get(v_e_u2081_54_, 1);
lean_inc_ref(v_arg_57_);
lean_dec_ref(v_e_u2081_54_);
v_fn_58_ = lean_ctor_get(v_e_u2082_55_, 0);
lean_inc_ref(v_fn_58_);
v_arg_59_ = lean_ctor_get(v_e_u2082_55_, 1);
lean_inc_ref(v_arg_59_);
lean_dec_ref(v_e_u2082_55_);
v___x_60_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_fn_56_, v_fn_58_);
lean_dec_ref(v_fn_58_);
lean_dec_ref(v_fn_56_);
if (v___x_60_ == 0)
{
lean_dec_ref(v_arg_59_);
lean_dec_ref(v_arg_57_);
return v___x_60_;
}
else
{
uint8_t v___x_61_; 
v___x_61_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_arg_57_, v_arg_59_);
lean_dec_ref(v_arg_59_);
lean_dec_ref(v_arg_57_);
return v___x_61_;
}
}
else
{
uint8_t v___x_62_; 
lean_dec_ref(v_e_u2081_54_);
lean_dec_ref(v_e_u2082_55_);
v___x_62_ = 0;
return v___x_62_;
}
}
case 6:
{
if (lean_obj_tag(v_e_u2082_55_) == 6)
{
lean_object* v_binderType_63_; lean_object* v_body_64_; lean_object* v_binderType_65_; lean_object* v_body_66_; uint8_t v___x_67_; 
v_binderType_63_ = lean_ctor_get(v_e_u2081_54_, 1);
lean_inc_ref(v_binderType_63_);
v_body_64_ = lean_ctor_get(v_e_u2081_54_, 2);
lean_inc_ref(v_body_64_);
lean_dec_ref(v_e_u2081_54_);
v_binderType_65_ = lean_ctor_get(v_e_u2082_55_, 1);
lean_inc_ref(v_binderType_65_);
v_body_66_ = lean_ctor_get(v_e_u2082_55_, 2);
lean_inc_ref(v_body_66_);
lean_dec_ref(v_e_u2082_55_);
v___x_67_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_binderType_63_, v_binderType_65_);
lean_dec_ref(v_binderType_65_);
lean_dec_ref(v_binderType_63_);
if (v___x_67_ == 0)
{
lean_dec_ref(v_body_66_);
lean_dec_ref(v_body_64_);
return v___x_67_;
}
else
{
uint8_t v___x_68_; 
v___x_68_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_64_, v_body_66_);
lean_dec_ref(v_body_66_);
lean_dec_ref(v_body_64_);
return v___x_68_;
}
}
else
{
uint8_t v___x_69_; 
lean_dec_ref(v_e_u2081_54_);
lean_dec_ref(v_e_u2082_55_);
v___x_69_ = 0;
return v___x_69_;
}
}
case 7:
{
if (lean_obj_tag(v_e_u2082_55_) == 7)
{
lean_object* v_binderType_70_; lean_object* v_body_71_; lean_object* v_binderType_72_; lean_object* v_body_73_; uint8_t v___x_74_; 
v_binderType_70_ = lean_ctor_get(v_e_u2081_54_, 1);
lean_inc_ref(v_binderType_70_);
v_body_71_ = lean_ctor_get(v_e_u2081_54_, 2);
lean_inc_ref(v_body_71_);
lean_dec_ref(v_e_u2081_54_);
v_binderType_72_ = lean_ctor_get(v_e_u2082_55_, 1);
lean_inc_ref(v_binderType_72_);
v_body_73_ = lean_ctor_get(v_e_u2082_55_, 2);
lean_inc_ref(v_body_73_);
lean_dec_ref(v_e_u2082_55_);
v___x_74_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_binderType_70_, v_binderType_72_);
lean_dec_ref(v_binderType_72_);
lean_dec_ref(v_binderType_70_);
if (v___x_74_ == 0)
{
lean_dec_ref(v_body_73_);
lean_dec_ref(v_body_71_);
return v___x_74_;
}
else
{
uint8_t v___x_75_; 
v___x_75_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_71_, v_body_73_);
lean_dec_ref(v_body_73_);
lean_dec_ref(v_body_71_);
return v___x_75_;
}
}
else
{
uint8_t v___x_76_; 
lean_dec_ref(v_e_u2081_54_);
lean_dec_ref(v_e_u2082_55_);
v___x_76_ = 0;
return v___x_76_;
}
}
case 8:
{
if (lean_obj_tag(v_e_u2082_55_) == 8)
{
lean_object* v_value_77_; lean_object* v_body_78_; lean_object* v_value_79_; lean_object* v_body_80_; uint8_t v___x_81_; 
v_value_77_ = lean_ctor_get(v_e_u2081_54_, 2);
lean_inc_ref(v_value_77_);
v_body_78_ = lean_ctor_get(v_e_u2081_54_, 3);
lean_inc_ref(v_body_78_);
lean_dec_ref(v_e_u2081_54_);
v_value_79_ = lean_ctor_get(v_e_u2082_55_, 2);
lean_inc_ref(v_value_79_);
v_body_80_ = lean_ctor_get(v_e_u2082_55_, 3);
lean_inc_ref(v_body_80_);
lean_dec_ref(v_e_u2082_55_);
v___x_81_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_value_77_, v_value_79_);
lean_dec_ref(v_value_79_);
lean_dec_ref(v_value_77_);
if (v___x_81_ == 0)
{
lean_dec_ref(v_body_80_);
lean_dec_ref(v_body_78_);
return v___x_81_;
}
else
{
uint8_t v___x_82_; 
v___x_82_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_body_78_, v_body_80_);
lean_dec_ref(v_body_80_);
lean_dec_ref(v_body_78_);
return v___x_82_;
}
}
else
{
uint8_t v___x_83_; 
lean_dec_ref(v_e_u2081_54_);
lean_dec_ref(v_e_u2082_55_);
v___x_83_ = 0;
return v___x_83_;
}
}
case 10:
{
if (lean_obj_tag(v_e_u2082_55_) == 10)
{
lean_object* v_data_84_; lean_object* v_expr_85_; lean_object* v_data_86_; lean_object* v_expr_87_; uint8_t v___x_88_; 
v_data_84_ = lean_ctor_get(v_e_u2081_54_, 0);
lean_inc(v_data_84_);
v_expr_85_ = lean_ctor_get(v_e_u2081_54_, 1);
lean_inc_ref(v_expr_85_);
lean_dec_ref(v_e_u2081_54_);
v_data_86_ = lean_ctor_get(v_e_u2082_55_, 0);
lean_inc(v_data_86_);
v_expr_87_ = lean_ctor_get(v_e_u2082_55_, 1);
lean_inc_ref(v_expr_87_);
lean_dec_ref(v_e_u2082_55_);
v___x_88_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_expr_85_, v_expr_87_);
lean_dec_ref(v_expr_87_);
lean_dec_ref(v_expr_85_);
if (v___x_88_ == 0)
{
lean_dec(v_data_86_);
lean_dec(v_data_84_);
return v___x_88_;
}
else
{
uint8_t v___x_89_; 
v___x_89_ = l_Lean_KVMap_eqv(v_data_84_, v_data_86_);
return v___x_89_;
}
}
else
{
uint8_t v___x_90_; 
lean_dec_ref(v_e_u2081_54_);
lean_dec_ref(v_e_u2082_55_);
v___x_90_ = 0;
return v___x_90_;
}
}
case 11:
{
if (lean_obj_tag(v_e_u2082_55_) == 11)
{
lean_object* v_typeName_91_; lean_object* v_idx_92_; lean_object* v_struct_93_; lean_object* v_typeName_94_; lean_object* v_idx_95_; lean_object* v_struct_96_; uint8_t v___y_98_; uint8_t v___x_100_; 
v_typeName_91_ = lean_ctor_get(v_e_u2081_54_, 0);
lean_inc(v_typeName_91_);
v_idx_92_ = lean_ctor_get(v_e_u2081_54_, 1);
lean_inc(v_idx_92_);
v_struct_93_ = lean_ctor_get(v_e_u2081_54_, 2);
lean_inc_ref(v_struct_93_);
lean_dec_ref(v_e_u2081_54_);
v_typeName_94_ = lean_ctor_get(v_e_u2082_55_, 0);
lean_inc(v_typeName_94_);
v_idx_95_ = lean_ctor_get(v_e_u2082_55_, 1);
lean_inc(v_idx_95_);
v_struct_96_ = lean_ctor_get(v_e_u2082_55_, 2);
lean_inc_ref(v_struct_96_);
lean_dec_ref(v_e_u2082_55_);
v___x_100_ = lean_name_eq(v_typeName_91_, v_typeName_94_);
lean_dec(v_typeName_94_);
lean_dec(v_typeName_91_);
if (v___x_100_ == 0)
{
lean_dec(v_idx_95_);
lean_dec(v_idx_92_);
v___y_98_ = v___x_100_;
goto v___jp_97_;
}
else
{
uint8_t v___x_101_; 
v___x_101_ = lean_nat_dec_eq(v_idx_92_, v_idx_95_);
lean_dec(v_idx_95_);
lean_dec(v_idx_92_);
v___y_98_ = v___x_101_;
goto v___jp_97_;
}
v___jp_97_:
{
if (v___y_98_ == 0)
{
lean_dec_ref(v_struct_96_);
lean_dec_ref(v_struct_93_);
return v___y_98_;
}
else
{
uint8_t v___x_99_; 
v___x_99_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_struct_93_, v_struct_96_);
lean_dec_ref(v_struct_96_);
lean_dec_ref(v_struct_93_);
return v___x_99_;
}
}
}
else
{
uint8_t v___x_102_; 
lean_dec_ref(v_e_u2081_54_);
lean_dec_ref(v_e_u2082_55_);
v___x_102_ = 0;
return v___x_102_;
}
}
default: 
{
uint8_t v___x_103_; 
v___x_103_ = lean_expr_eqv(v_e_u2081_54_, v_e_u2082_55_);
lean_dec_ref(v_e_u2082_55_);
lean_dec_ref(v_e_u2081_54_);
return v___x_103_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq___boxed(lean_object* v_e_u2081_104_, lean_object* v_e_u2082_105_){
_start:
{
uint8_t v_res_106_; lean_object* v_r_107_; 
v_res_106_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_e_u2081_104_, v_e_u2082_105_);
v_r_107_ = lean_box(v_res_106_);
return v_r_107_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Sym_instHashableAlphaKey___private__1(lean_object* v_k_108_){
_start:
{
uint64_t v___x_109_; 
v___x_109_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_k_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instHashableAlphaKey___private__1___boxed(lean_object* v_k_110_){
_start:
{
uint64_t v_res_111_; lean_object* v_r_112_; 
v_res_111_ = l_Lean_Meta_Sym_instHashableAlphaKey___private__1(v_k_110_);
lean_dec_ref(v_k_110_);
v_r_112_ = lean_box_uint64(v_res_111_);
return v_r_112_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instHashableAlphaKey___closed__0(void){
_start:
{
lean_object* v___f_113_; 
v___f_113_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___boxed), 1, 0);
return v___f_113_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instHashableAlphaKey(void){
_start:
{
lean_object* v___f_114_; 
v___f_114_ = lean_obj_once(&l_Lean_Meta_Sym_instHashableAlphaKey___closed__0, &l_Lean_Meta_Sym_instHashableAlphaKey___closed__0_once, _init_l_Lean_Meta_Sym_instHashableAlphaKey___closed__0);
return v___f_114_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_instBEqAlphaKey___private__1(lean_object* v_k_u2081_115_, lean_object* v_k_u2082_116_){
_start:
{
uint8_t v___x_117_; 
v___x_117_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_u2081_115_, v_k_u2082_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instBEqAlphaKey___private__1___boxed(lean_object* v_k_u2081_118_, lean_object* v_k_u2082_119_){
_start:
{
uint8_t v_res_120_; lean_object* v_r_121_; 
v_res_120_ = l_Lean_Meta_Sym_instBEqAlphaKey___private__1(v_k_u2081_118_, v_k_u2082_119_);
v_r_121_ = lean_box(v_res_120_);
return v_r_121_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instBEqAlphaKey___closed__0(void){
_start:
{
lean_object* v___f_122_; 
v___f_122_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq___boxed), 2, 0);
return v___f_122_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instBEqAlphaKey(void){
_start:
{
lean_object* v___f_123_; 
v___f_123_ = lean_obj_once(&l_Lean_Meta_Sym_instBEqAlphaKey___closed__0, &l_Lean_Meta_Sym_instBEqAlphaKey___closed__0_once, _init_l_Lean_Meta_Sym_instBEqAlphaKey___closed__0);
return v___f_123_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0(void){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = lean_mk_string_unchecked("__dummy__", 9, 9);
return v___x_124_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0);
v___x_126_ = l_Lean_Name_mkStr1(v___x_125_);
return v___x_126_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_127_ = lean_box(0);
v___x_128_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1);
v___x_129_ = l_Lean_mkConst(v___x_128_, v___x_127_);
return v___x_129_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10___redArg(lean_object* v_x_131_, lean_object* v_x_132_, lean_object* v_x_133_, lean_object* v_x_134_){
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
lean_inc(v_k_x27_147_);
lean_inc_ref(v_x_133_);
v___x_148_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_133_, v_k_x27_147_);
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8___redArg(lean_object* v_n_161_, lean_object* v_k_162_, lean_object* v_v_163_){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = lean_unsigned_to_nat(0u);
v___x_165_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10___redArg(v_n_161_, v___x_164_, v_k_162_, v_v_163_);
return v___x_165_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0(void){
_start:
{
size_t v___x_166_; size_t v___x_167_; size_t v___x_168_; 
v___x_166_ = ((size_t)5ULL);
v___x_167_ = ((size_t)1ULL);
v___x_168_ = lean_usize_shift_left(v___x_167_, v___x_166_);
return v___x_168_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1(void){
_start:
{
size_t v___x_169_; size_t v___x_170_; size_t v___x_171_; 
v___x_169_ = ((size_t)1ULL);
v___x_170_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0);
v___x_171_ = lean_usize_sub(v___x_170_, v___x_169_);
return v___x_171_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(lean_object* v_x_173_, size_t v_x_174_, size_t v_x_175_, lean_object* v_x_176_, lean_object* v_x_177_){
_start:
{
if (lean_obj_tag(v_x_173_) == 0)
{
lean_object* v_es_178_; size_t v___x_179_; size_t v___x_180_; size_t v___x_181_; size_t v___x_182_; lean_object* v_j_183_; lean_object* v___x_184_; uint8_t v___x_185_; 
v_es_178_ = lean_ctor_get(v_x_173_, 0);
v___x_179_ = ((size_t)5ULL);
v___x_180_ = ((size_t)1ULL);
v___x_181_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1);
v___x_182_ = lean_usize_land(v_x_174_, v___x_181_);
v_j_183_ = lean_usize_to_nat(v___x_182_);
v___x_184_ = lean_array_get_size(v_es_178_);
v___x_185_ = lean_nat_dec_lt(v_j_183_, v___x_184_);
if (v___x_185_ == 0)
{
lean_dec(v_j_183_);
lean_dec(v_x_177_);
lean_dec_ref(v_x_176_);
return v_x_173_;
}
else
{
lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_222_; 
lean_inc_ref(v_es_178_);
v_isSharedCheck_222_ = !lean_is_exclusive(v_x_173_);
if (v_isSharedCheck_222_ == 0)
{
lean_object* v_unused_223_; 
v_unused_223_ = lean_ctor_get(v_x_173_, 0);
lean_dec(v_unused_223_);
v___x_187_ = v_x_173_;
v_isShared_188_ = v_isSharedCheck_222_;
goto v_resetjp_186_;
}
else
{
lean_dec(v_x_173_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_222_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v_v_189_; lean_object* v___x_190_; lean_object* v_xs_x27_191_; lean_object* v___y_193_; 
v_v_189_ = lean_array_fget(v_es_178_, v_j_183_);
v___x_190_ = lean_box(0);
v_xs_x27_191_ = lean_array_fset(v_es_178_, v_j_183_, v___x_190_);
switch(lean_obj_tag(v_v_189_))
{
case 0:
{
lean_object* v_key_198_; lean_object* v_val_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_209_; 
v_key_198_ = lean_ctor_get(v_v_189_, 0);
v_val_199_ = lean_ctor_get(v_v_189_, 1);
v_isSharedCheck_209_ = !lean_is_exclusive(v_v_189_);
if (v_isSharedCheck_209_ == 0)
{
v___x_201_ = v_v_189_;
v_isShared_202_ = v_isSharedCheck_209_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_val_199_);
lean_inc(v_key_198_);
lean_dec(v_v_189_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_209_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
uint8_t v___x_203_; 
lean_inc(v_key_198_);
lean_inc_ref(v_x_176_);
v___x_203_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_176_, v_key_198_);
if (v___x_203_ == 0)
{
lean_object* v___x_204_; lean_object* v___x_205_; 
lean_del_object(v___x_201_);
v___x_204_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_198_, v_val_199_, v_x_176_, v_x_177_);
v___x_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
v___y_193_ = v___x_205_;
goto v___jp_192_;
}
else
{
lean_object* v___x_207_; 
lean_dec(v_val_199_);
lean_dec(v_key_198_);
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 1, v_x_177_);
lean_ctor_set(v___x_201_, 0, v_x_176_);
v___x_207_ = v___x_201_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_x_176_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_x_177_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
v___y_193_ = v___x_207_;
goto v___jp_192_;
}
}
}
}
case 1:
{
lean_object* v_node_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_220_; 
v_node_210_ = lean_ctor_get(v_v_189_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v_v_189_);
if (v_isSharedCheck_220_ == 0)
{
v___x_212_ = v_v_189_;
v_isShared_213_ = v_isSharedCheck_220_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_node_210_);
lean_dec(v_v_189_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_220_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
size_t v___x_214_; size_t v___x_215_; lean_object* v___x_216_; lean_object* v___x_218_; 
v___x_214_ = lean_usize_shift_right(v_x_174_, v___x_179_);
v___x_215_ = lean_usize_add(v_x_175_, v___x_180_);
v___x_216_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_node_210_, v___x_214_, v___x_215_, v_x_176_, v_x_177_);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 0, v___x_216_);
v___x_218_ = v___x_212_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v___x_216_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
v___y_193_ = v___x_218_;
goto v___jp_192_;
}
}
}
default: 
{
lean_object* v___x_221_; 
v___x_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_221_, 0, v_x_176_);
lean_ctor_set(v___x_221_, 1, v_x_177_);
v___y_193_ = v___x_221_;
goto v___jp_192_;
}
}
v___jp_192_:
{
lean_object* v___x_194_; lean_object* v___x_196_; 
v___x_194_ = lean_array_fset(v_xs_x27_191_, v_j_183_, v___y_193_);
lean_dec(v_j_183_);
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 0, v___x_194_);
v___x_196_ = v___x_187_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_194_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
}
else
{
lean_object* v_ks_224_; lean_object* v_vs_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_245_; 
v_ks_224_ = lean_ctor_get(v_x_173_, 0);
v_vs_225_ = lean_ctor_get(v_x_173_, 1);
v_isSharedCheck_245_ = !lean_is_exclusive(v_x_173_);
if (v_isSharedCheck_245_ == 0)
{
v___x_227_ = v_x_173_;
v_isShared_228_ = v_isSharedCheck_245_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_vs_225_);
lean_inc(v_ks_224_);
lean_dec(v_x_173_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_245_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_230_; 
if (v_isShared_228_ == 0)
{
v___x_230_ = v___x_227_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_ks_224_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v_vs_225_);
v___x_230_ = v_reuseFailAlloc_244_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
lean_object* v_newNode_231_; uint8_t v___y_233_; size_t v___x_239_; uint8_t v___x_240_; 
v_newNode_231_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8___redArg(v___x_230_, v_x_176_, v_x_177_);
v___x_239_ = ((size_t)7ULL);
v___x_240_ = lean_usize_dec_le(v___x_239_, v_x_175_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; lean_object* v___x_242_; uint8_t v___x_243_; 
v___x_241_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_231_);
v___x_242_ = lean_unsigned_to_nat(4u);
v___x_243_ = lean_nat_dec_lt(v___x_241_, v___x_242_);
lean_dec(v___x_241_);
v___y_233_ = v___x_243_;
goto v___jp_232_;
}
else
{
v___y_233_ = v___x_240_;
goto v___jp_232_;
}
v___jp_232_:
{
if (v___y_233_ == 0)
{
lean_object* v_ks_234_; lean_object* v_vs_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v_ks_234_ = lean_ctor_get(v_newNode_231_, 0);
lean_inc_ref(v_ks_234_);
v_vs_235_ = lean_ctor_get(v_newNode_231_, 1);
lean_inc_ref(v_vs_235_);
lean_dec_ref(v_newNode_231_);
v___x_236_ = lean_unsigned_to_nat(0u);
v___x_237_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__2);
v___x_238_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(v_x_175_, v_ks_234_, v_vs_235_, v___x_236_, v___x_237_);
lean_dec_ref(v_vs_235_);
lean_dec_ref(v_ks_234_);
return v___x_238_;
}
else
{
return v_newNode_231_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(size_t v_depth_246_, lean_object* v_keys_247_, lean_object* v_vals_248_, lean_object* v_i_249_, lean_object* v_entries_250_){
_start:
{
lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_251_ = lean_array_get_size(v_keys_247_);
v___x_252_ = lean_nat_dec_lt(v_i_249_, v___x_251_);
if (v___x_252_ == 0)
{
lean_dec(v_i_249_);
return v_entries_250_;
}
else
{
lean_object* v_k_253_; lean_object* v_v_254_; uint64_t v___x_255_; size_t v_h_256_; size_t v___x_257_; lean_object* v___x_258_; size_t v___x_259_; size_t v___x_260_; size_t v___x_261_; size_t v_h_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v_k_253_ = lean_array_fget_borrowed(v_keys_247_, v_i_249_);
v_v_254_ = lean_array_fget_borrowed(v_vals_248_, v_i_249_);
v___x_255_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_k_253_);
v_h_256_ = lean_uint64_to_usize(v___x_255_);
v___x_257_ = ((size_t)5ULL);
v___x_258_ = lean_unsigned_to_nat(1u);
v___x_259_ = ((size_t)1ULL);
v___x_260_ = lean_usize_sub(v_depth_246_, v___x_259_);
v___x_261_ = lean_usize_mul(v___x_257_, v___x_260_);
v_h_262_ = lean_usize_shift_right(v_h_256_, v___x_261_);
v___x_263_ = lean_nat_add(v_i_249_, v___x_258_);
lean_dec(v_i_249_);
lean_inc(v_v_254_);
lean_inc(v_k_253_);
v___x_264_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_entries_250_, v_h_262_, v_depth_246_, v_k_253_, v_v_254_);
v_i_249_ = v___x_263_;
v_entries_250_ = v___x_264_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg___boxed(lean_object* v_depth_266_, lean_object* v_keys_267_, lean_object* v_vals_268_, lean_object* v_i_269_, lean_object* v_entries_270_){
_start:
{
size_t v_depth_boxed_271_; lean_object* v_res_272_; 
v_depth_boxed_271_ = lean_unbox_usize(v_depth_266_);
lean_dec(v_depth_266_);
v_res_272_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(v_depth_boxed_271_, v_keys_267_, v_vals_268_, v_i_269_, v_entries_270_);
lean_dec_ref(v_vals_268_);
lean_dec_ref(v_keys_267_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___boxed(lean_object* v_x_273_, lean_object* v_x_274_, lean_object* v_x_275_, lean_object* v_x_276_, lean_object* v_x_277_){
_start:
{
size_t v_x_1980__boxed_278_; size_t v_x_1981__boxed_279_; lean_object* v_res_280_; 
v_x_1980__boxed_278_ = lean_unbox_usize(v_x_274_);
lean_dec(v_x_274_);
v_x_1981__boxed_279_ = lean_unbox_usize(v_x_275_);
lean_dec(v_x_275_);
v_res_280_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_x_273_, v_x_1980__boxed_278_, v_x_1981__boxed_279_, v_x_276_, v_x_277_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(lean_object* v_x_281_, lean_object* v_x_282_, lean_object* v_x_283_){
_start:
{
uint64_t v___x_284_; size_t v___x_285_; size_t v___x_286_; lean_object* v___x_287_; 
v___x_284_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_x_282_);
v___x_285_ = lean_uint64_to_usize(v___x_284_);
v___x_286_ = ((size_t)1ULL);
v___x_287_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_x_281_, v___x_285_, v___x_286_, v_x_282_, v_x_283_);
return v___x_287_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(lean_object* v_a_288_, lean_object* v_x_289_){
_start:
{
if (lean_obj_tag(v_x_289_) == 0)
{
uint8_t v___x_290_; 
v___x_290_ = 0;
return v___x_290_;
}
else
{
lean_object* v_key_291_; lean_object* v_tail_292_; uint8_t v___x_293_; 
v_key_291_ = lean_ctor_get(v_x_289_, 0);
v_tail_292_ = lean_ctor_get(v_x_289_, 2);
v___x_293_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_key_291_, v_a_288_);
if (v___x_293_ == 0)
{
v_x_289_ = v_tail_292_;
goto _start;
}
else
{
return v___x_293_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg___boxed(lean_object* v_a_295_, lean_object* v_x_296_){
_start:
{
uint8_t v_res_297_; lean_object* v_r_298_; 
v_res_297_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(v_a_295_, v_x_296_);
lean_dec(v_x_296_);
lean_dec_ref(v_a_295_);
v_r_298_ = lean_box(v_res_297_);
return v_r_298_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(lean_object* v_a_299_, lean_object* v_b_300_, lean_object* v_x_301_){
_start:
{
if (lean_obj_tag(v_x_301_) == 0)
{
lean_dec(v_b_300_);
lean_dec_ref(v_a_299_);
return v_x_301_;
}
else
{
lean_object* v_key_302_; lean_object* v_value_303_; lean_object* v_tail_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_316_; 
v_key_302_ = lean_ctor_get(v_x_301_, 0);
v_value_303_ = lean_ctor_get(v_x_301_, 1);
v_tail_304_ = lean_ctor_get(v_x_301_, 2);
v_isSharedCheck_316_ = !lean_is_exclusive(v_x_301_);
if (v_isSharedCheck_316_ == 0)
{
v___x_306_ = v_x_301_;
v_isShared_307_ = v_isSharedCheck_316_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_tail_304_);
lean_inc(v_value_303_);
lean_inc(v_key_302_);
lean_dec(v_x_301_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_316_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
uint8_t v___x_308_; 
v___x_308_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_key_302_, v_a_299_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; lean_object* v___x_311_; 
v___x_309_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(v_a_299_, v_b_300_, v_tail_304_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 2, v___x_309_);
v___x_311_ = v___x_306_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v_key_302_);
lean_ctor_set(v_reuseFailAlloc_312_, 1, v_value_303_);
lean_ctor_set(v_reuseFailAlloc_312_, 2, v___x_309_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
else
{
lean_object* v___x_314_; 
lean_dec(v_value_303_);
lean_dec(v_key_302_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 1, v_b_300_);
lean_ctor_set(v___x_306_, 0, v_a_299_);
v___x_314_ = v___x_306_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_299_);
lean_ctor_set(v_reuseFailAlloc_315_, 1, v_b_300_);
lean_ctor_set(v_reuseFailAlloc_315_, 2, v_tail_304_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6___redArg(lean_object* v_x_317_, lean_object* v_x_318_){
_start:
{
if (lean_obj_tag(v_x_318_) == 0)
{
return v_x_317_;
}
else
{
lean_object* v_key_319_; lean_object* v_value_320_; lean_object* v_tail_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_344_; 
v_key_319_ = lean_ctor_get(v_x_318_, 0);
v_value_320_ = lean_ctor_get(v_x_318_, 1);
v_tail_321_ = lean_ctor_get(v_x_318_, 2);
v_isSharedCheck_344_ = !lean_is_exclusive(v_x_318_);
if (v_isSharedCheck_344_ == 0)
{
v___x_323_ = v_x_318_;
v_isShared_324_ = v_isSharedCheck_344_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_tail_321_);
lean_inc(v_value_320_);
lean_inc(v_key_319_);
lean_dec(v_x_318_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_344_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_325_; uint64_t v___x_326_; uint64_t v___x_327_; uint64_t v___x_328_; uint64_t v_fold_329_; uint64_t v___x_330_; uint64_t v___x_331_; uint64_t v___x_332_; size_t v___x_333_; size_t v___x_334_; size_t v___x_335_; size_t v___x_336_; size_t v___x_337_; lean_object* v___x_338_; lean_object* v___x_340_; 
v___x_325_ = lean_array_get_size(v_x_317_);
v___x_326_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_key_319_);
v___x_327_ = 32ULL;
v___x_328_ = lean_uint64_shift_right(v___x_326_, v___x_327_);
v_fold_329_ = lean_uint64_xor(v___x_326_, v___x_328_);
v___x_330_ = 16ULL;
v___x_331_ = lean_uint64_shift_right(v_fold_329_, v___x_330_);
v___x_332_ = lean_uint64_xor(v_fold_329_, v___x_331_);
v___x_333_ = lean_uint64_to_usize(v___x_332_);
v___x_334_ = lean_usize_of_nat(v___x_325_);
v___x_335_ = ((size_t)1ULL);
v___x_336_ = lean_usize_sub(v___x_334_, v___x_335_);
v___x_337_ = lean_usize_land(v___x_333_, v___x_336_);
v___x_338_ = lean_array_uget_borrowed(v_x_317_, v___x_337_);
lean_inc(v___x_338_);
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 2, v___x_338_);
v___x_340_ = v___x_323_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_key_319_);
lean_ctor_set(v_reuseFailAlloc_343_, 1, v_value_320_);
lean_ctor_set(v_reuseFailAlloc_343_, 2, v___x_338_);
v___x_340_ = v_reuseFailAlloc_343_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v___x_341_; 
v___x_341_ = lean_array_uset(v_x_317_, v___x_337_, v___x_340_);
v_x_317_ = v___x_341_;
v_x_318_ = v_tail_321_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4___redArg(lean_object* v_i_345_, lean_object* v_source_346_, lean_object* v_target_347_){
_start:
{
lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_348_ = lean_array_get_size(v_source_346_);
v___x_349_ = lean_nat_dec_lt(v_i_345_, v___x_348_);
if (v___x_349_ == 0)
{
lean_dec_ref(v_source_346_);
lean_dec(v_i_345_);
return v_target_347_;
}
else
{
lean_object* v_es_350_; lean_object* v___x_351_; lean_object* v_source_352_; lean_object* v_target_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v_es_350_ = lean_array_fget(v_source_346_, v_i_345_);
v___x_351_ = lean_box(0);
v_source_352_ = lean_array_fset(v_source_346_, v_i_345_, v___x_351_);
v_target_353_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6___redArg(v_target_347_, v_es_350_);
v___x_354_ = lean_unsigned_to_nat(1u);
v___x_355_ = lean_nat_add(v_i_345_, v___x_354_);
lean_dec(v_i_345_);
v_i_345_ = v___x_355_;
v_source_346_ = v_source_352_;
v_target_347_ = v_target_353_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3___redArg(lean_object* v_data_357_){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v_nbuckets_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_358_ = lean_array_get_size(v_data_357_);
v___x_359_ = lean_unsigned_to_nat(2u);
v_nbuckets_360_ = lean_nat_mul(v___x_358_, v___x_359_);
v___x_361_ = lean_unsigned_to_nat(0u);
v___x_362_ = lean_box(0);
v___x_363_ = lean_mk_array(v_nbuckets_360_, v___x_362_);
v___x_364_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4___redArg(v___x_361_, v_data_357_, v___x_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(lean_object* v_m_365_, lean_object* v_a_366_, lean_object* v_b_367_){
_start:
{
lean_object* v_size_368_; lean_object* v_buckets_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_412_; 
v_size_368_ = lean_ctor_get(v_m_365_, 0);
v_buckets_369_ = lean_ctor_get(v_m_365_, 1);
v_isSharedCheck_412_ = !lean_is_exclusive(v_m_365_);
if (v_isSharedCheck_412_ == 0)
{
v___x_371_ = v_m_365_;
v_isShared_372_ = v_isSharedCheck_412_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_buckets_369_);
lean_inc(v_size_368_);
lean_dec(v_m_365_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_412_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_373_; uint64_t v___x_374_; uint64_t v___x_375_; uint64_t v___x_376_; uint64_t v_fold_377_; uint64_t v___x_378_; uint64_t v___x_379_; uint64_t v___x_380_; size_t v___x_381_; size_t v___x_382_; size_t v___x_383_; size_t v___x_384_; size_t v___x_385_; lean_object* v_bkt_386_; uint8_t v___x_387_; 
v___x_373_ = lean_array_get_size(v_buckets_369_);
v___x_374_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_a_366_);
v___x_375_ = 32ULL;
v___x_376_ = lean_uint64_shift_right(v___x_374_, v___x_375_);
v_fold_377_ = lean_uint64_xor(v___x_374_, v___x_376_);
v___x_378_ = 16ULL;
v___x_379_ = lean_uint64_shift_right(v_fold_377_, v___x_378_);
v___x_380_ = lean_uint64_xor(v_fold_377_, v___x_379_);
v___x_381_ = lean_uint64_to_usize(v___x_380_);
v___x_382_ = lean_usize_of_nat(v___x_373_);
v___x_383_ = ((size_t)1ULL);
v___x_384_ = lean_usize_sub(v___x_382_, v___x_383_);
v___x_385_ = lean_usize_land(v___x_381_, v___x_384_);
v_bkt_386_ = lean_array_uget_borrowed(v_buckets_369_, v___x_385_);
v___x_387_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(v_a_366_, v_bkt_386_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; lean_object* v_size_x27_389_; lean_object* v___x_390_; lean_object* v_buckets_x27_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; uint8_t v___x_397_; 
v___x_388_ = lean_unsigned_to_nat(1u);
v_size_x27_389_ = lean_nat_add(v_size_368_, v___x_388_);
lean_dec(v_size_368_);
lean_inc(v_bkt_386_);
v___x_390_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_390_, 0, v_a_366_);
lean_ctor_set(v___x_390_, 1, v_b_367_);
lean_ctor_set(v___x_390_, 2, v_bkt_386_);
v_buckets_x27_391_ = lean_array_uset(v_buckets_369_, v___x_385_, v___x_390_);
v___x_392_ = lean_unsigned_to_nat(4u);
v___x_393_ = lean_nat_mul(v_size_x27_389_, v___x_392_);
v___x_394_ = lean_unsigned_to_nat(3u);
v___x_395_ = lean_nat_div(v___x_393_, v___x_394_);
lean_dec(v___x_393_);
v___x_396_ = lean_array_get_size(v_buckets_x27_391_);
v___x_397_ = lean_nat_dec_le(v___x_395_, v___x_396_);
lean_dec(v___x_395_);
if (v___x_397_ == 0)
{
lean_object* v_val_398_; lean_object* v___x_400_; 
v_val_398_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3___redArg(v_buckets_x27_391_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 1, v_val_398_);
lean_ctor_set(v___x_371_, 0, v_size_x27_389_);
v___x_400_ = v___x_371_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_size_x27_389_);
lean_ctor_set(v_reuseFailAlloc_401_, 1, v_val_398_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
else
{
lean_object* v___x_403_; 
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 1, v_buckets_x27_391_);
lean_ctor_set(v___x_371_, 0, v_size_x27_389_);
v___x_403_ = v___x_371_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_size_x27_389_);
lean_ctor_set(v_reuseFailAlloc_404_, 1, v_buckets_x27_391_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
else
{
lean_object* v___x_405_; lean_object* v_buckets_x27_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_410_; 
lean_inc(v_bkt_386_);
v___x_405_ = lean_box(0);
v_buckets_x27_406_ = lean_array_uset(v_buckets_369_, v___x_385_, v___x_405_);
v___x_407_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(v_a_366_, v_b_367_, v_bkt_386_);
v___x_408_ = lean_array_uset(v_buckets_x27_406_, v___x_385_, v___x_407_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 1, v___x_408_);
v___x_410_ = v___x_371_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_size_368_);
lean_ctor_set(v_reuseFailAlloc_411_, 1, v___x_408_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(lean_object* v_keys_413_, lean_object* v_i_414_, lean_object* v_k_415_, lean_object* v_k_u2080_416_){
_start:
{
lean_object* v___x_417_; uint8_t v___x_418_; 
v___x_417_ = lean_array_get_size(v_keys_413_);
v___x_418_ = lean_nat_dec_lt(v_i_414_, v___x_417_);
if (v___x_418_ == 0)
{
lean_dec_ref(v_k_415_);
lean_dec(v_i_414_);
lean_inc_ref(v_k_u2080_416_);
return v_k_u2080_416_;
}
else
{
lean_object* v_k_x27_419_; uint8_t v___x_420_; 
v_k_x27_419_ = lean_array_fget_borrowed(v_keys_413_, v_i_414_);
lean_inc(v_k_x27_419_);
lean_inc_ref(v_k_415_);
v___x_420_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_415_, v_k_x27_419_);
if (v___x_420_ == 0)
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = lean_unsigned_to_nat(1u);
v___x_422_ = lean_nat_add(v_i_414_, v___x_421_);
lean_dec(v_i_414_);
v_i_414_ = v___x_422_;
goto _start;
}
else
{
lean_dec_ref(v_k_415_);
lean_dec(v_i_414_);
lean_inc(v_k_x27_419_);
return v_k_x27_419_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg___boxed(lean_object* v_keys_424_, lean_object* v_i_425_, lean_object* v_k_426_, lean_object* v_k_u2080_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(v_keys_424_, v_i_425_, v_k_426_, v_k_u2080_427_);
lean_dec_ref(v_k_u2080_427_);
lean_dec_ref(v_keys_424_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(lean_object* v_x_429_, size_t v_x_430_, lean_object* v_x_431_, lean_object* v_x_432_){
_start:
{
if (lean_obj_tag(v_x_429_) == 0)
{
lean_object* v_es_433_; lean_object* v___x_434_; size_t v___x_435_; size_t v___x_436_; size_t v___x_437_; lean_object* v_j_438_; lean_object* v___x_439_; 
v_es_433_ = lean_ctor_get(v_x_429_, 0);
lean_inc_ref(v_es_433_);
lean_dec_ref(v_x_429_);
v___x_434_ = lean_box(2);
v___x_435_ = ((size_t)5ULL);
v___x_436_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1);
v___x_437_ = lean_usize_land(v_x_430_, v___x_436_);
v_j_438_ = lean_usize_to_nat(v___x_437_);
v___x_439_ = lean_array_get(v___x_434_, v_es_433_, v_j_438_);
lean_dec(v_j_438_);
lean_dec_ref(v_es_433_);
switch(lean_obj_tag(v___x_439_))
{
case 0:
{
lean_object* v_key_440_; uint8_t v___x_441_; 
v_key_440_ = lean_ctor_get(v___x_439_, 0);
lean_inc_n(v_key_440_, 2);
lean_dec_ref(v___x_439_);
v___x_441_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_431_, v_key_440_);
if (v___x_441_ == 0)
{
lean_dec(v_key_440_);
lean_inc_ref(v_x_432_);
return v_x_432_;
}
else
{
return v_key_440_;
}
}
case 1:
{
lean_object* v_node_442_; size_t v___x_443_; 
v_node_442_ = lean_ctor_get(v___x_439_, 0);
lean_inc(v_node_442_);
lean_dec_ref(v___x_439_);
v___x_443_ = lean_usize_shift_right(v_x_430_, v___x_435_);
v_x_429_ = v_node_442_;
v_x_430_ = v___x_443_;
goto _start;
}
default: 
{
lean_dec_ref(v_x_431_);
lean_inc_ref(v_x_432_);
return v_x_432_;
}
}
}
else
{
lean_object* v_ks_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v_ks_445_ = lean_ctor_get(v_x_429_, 0);
lean_inc_ref(v_ks_445_);
lean_dec_ref(v_x_429_);
v___x_446_ = lean_unsigned_to_nat(0u);
v___x_447_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(v_ks_445_, v___x_446_, v_x_431_, v_x_432_);
lean_dec_ref(v_ks_445_);
return v___x_447_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg___boxed(lean_object* v_x_448_, lean_object* v_x_449_, lean_object* v_x_450_, lean_object* v_x_451_){
_start:
{
size_t v_x_2378__boxed_452_; lean_object* v_res_453_; 
v_x_2378__boxed_452_ = lean_unbox_usize(v_x_449_);
lean_dec(v_x_449_);
v_res_453_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_x_448_, v_x_2378__boxed_452_, v_x_450_, v_x_451_);
lean_dec_ref(v_x_451_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(lean_object* v_e_454_, lean_object* v_r_455_, lean_object* v_a_456_){
_start:
{
lean_object* v_map_457_; lean_object* v_set_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_480_; 
v_map_457_ = lean_ctor_get(v_a_456_, 0);
v_set_458_ = lean_ctor_get(v_a_456_, 1);
v_isSharedCheck_480_ = !lean_is_exclusive(v_a_456_);
if (v_isSharedCheck_480_ == 0)
{
v___x_460_ = v_a_456_;
v_isShared_461_ = v_isSharedCheck_480_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_set_458_);
lean_inc(v_map_457_);
lean_dec(v_a_456_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_480_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_462_; uint64_t v___x_463_; size_t v___x_464_; lean_object* v___x_465_; uint8_t v___x_466_; 
v___x_462_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_463_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_r_455_);
v___x_464_ = lean_uint64_to_usize(v___x_463_);
lean_inc_ref(v_r_455_);
lean_inc_ref(v_set_458_);
v___x_465_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_458_, v___x_464_, v_r_455_, v___x_462_);
v___x_466_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_465_, v___x_462_);
if (v___x_466_ == 0)
{
lean_object* v___x_467_; lean_object* v___x_469_; 
lean_dec_ref(v_r_455_);
lean_inc_ref(v___x_465_);
v___x_467_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(v_map_457_, v_e_454_, v___x_465_);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 0, v___x_467_);
v___x_469_ = v___x_460_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_467_);
lean_ctor_set(v_reuseFailAlloc_471_, 1, v_set_458_);
v___x_469_ = v_reuseFailAlloc_471_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
lean_object* v___x_470_; 
v___x_470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_470_, 0, v___x_465_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
return v___x_470_;
}
}
else
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_477_; 
lean_dec_ref(v___x_465_);
lean_inc_ref_n(v_r_455_, 4);
v___x_472_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(v_map_457_, v_e_454_, v_r_455_);
v___x_473_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(v___x_472_, v_r_455_, v_r_455_);
v___x_474_ = lean_box(0);
v___x_475_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_set_458_, v_r_455_, v___x_474_);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 1, v___x_475_);
lean_ctor_set(v___x_460_, 0, v___x_473_);
v___x_477_ = v___x_460_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v___x_473_);
lean_ctor_set(v_reuseFailAlloc_479_, 1, v___x_475_);
v___x_477_ = v_reuseFailAlloc_479_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
lean_object* v___x_478_; 
v___x_478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_478_, 0, v_r_455_);
lean_ctor_set(v___x_478_, 1, v___x_477_);
return v___x_478_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0(lean_object* v_00_u03b2_481_, lean_object* v_x_482_, size_t v_x_483_, lean_object* v_x_484_, lean_object* v_x_485_){
_start:
{
lean_object* v___x_486_; 
v___x_486_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_x_482_, v_x_483_, v_x_484_, v_x_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___boxed(lean_object* v_00_u03b2_487_, lean_object* v_x_488_, lean_object* v_x_489_, lean_object* v_x_490_, lean_object* v_x_491_){
_start:
{
size_t v_x_2468__boxed_492_; lean_object* v_res_493_; 
v_x_2468__boxed_492_ = lean_unbox_usize(v_x_489_);
lean_dec(v_x_489_);
v_res_493_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0(v_00_u03b2_487_, v_x_488_, v_x_2468__boxed_492_, v_x_490_, v_x_491_);
lean_dec_ref(v_x_491_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1(lean_object* v_00_u03b2_494_, lean_object* v_m_495_, lean_object* v_a_496_, lean_object* v_b_497_){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(v_m_495_, v_a_496_, v_b_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2(lean_object* v_00_u03b2_499_, lean_object* v_x_500_, lean_object* v_x_501_, lean_object* v_x_502_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_x_500_, v_x_501_, v_x_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0(lean_object* v_00_u03b2_504_, lean_object* v_keys_505_, lean_object* v_vals_506_, lean_object* v_heq_507_, lean_object* v_i_508_, lean_object* v_k_509_, lean_object* v_k_u2080_510_){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(v_keys_505_, v_i_508_, v_k_509_, v_k_u2080_510_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___boxed(lean_object* v_00_u03b2_512_, lean_object* v_keys_513_, lean_object* v_vals_514_, lean_object* v_heq_515_, lean_object* v_i_516_, lean_object* v_k_517_, lean_object* v_k_u2080_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0(v_00_u03b2_512_, v_keys_513_, v_vals_514_, v_heq_515_, v_i_516_, v_k_517_, v_k_u2080_518_);
lean_dec_ref(v_k_u2080_518_);
lean_dec_ref(v_vals_514_);
lean_dec_ref(v_keys_513_);
return v_res_519_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2(lean_object* v_00_u03b2_520_, lean_object* v_a_521_, lean_object* v_x_522_){
_start:
{
uint8_t v___x_523_; 
v___x_523_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(v_a_521_, v_x_522_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___boxed(lean_object* v_00_u03b2_524_, lean_object* v_a_525_, lean_object* v_x_526_){
_start:
{
uint8_t v_res_527_; lean_object* v_r_528_; 
v_res_527_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2(v_00_u03b2_524_, v_a_525_, v_x_526_);
lean_dec(v_x_526_);
lean_dec_ref(v_a_525_);
v_r_528_ = lean_box(v_res_527_);
return v_r_528_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3(lean_object* v_00_u03b2_529_, lean_object* v_data_530_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3___redArg(v_data_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4(lean_object* v_00_u03b2_532_, lean_object* v_a_533_, lean_object* v_b_534_, lean_object* v_x_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(v_a_533_, v_b_534_, v_x_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6(lean_object* v_00_u03b2_537_, lean_object* v_x_538_, size_t v_x_539_, size_t v_x_540_, lean_object* v_x_541_, lean_object* v_x_542_){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_x_538_, v_x_539_, v_x_540_, v_x_541_, v_x_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___boxed(lean_object* v_00_u03b2_544_, lean_object* v_x_545_, lean_object* v_x_546_, lean_object* v_x_547_, lean_object* v_x_548_, lean_object* v_x_549_){
_start:
{
size_t v_x_2505__boxed_550_; size_t v_x_2506__boxed_551_; lean_object* v_res_552_; 
v_x_2505__boxed_550_ = lean_unbox_usize(v_x_546_);
lean_dec(v_x_546_);
v_x_2506__boxed_551_ = lean_unbox_usize(v_x_547_);
lean_dec(v_x_547_);
v_res_552_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6(v_00_u03b2_544_, v_x_545_, v_x_2505__boxed_550_, v_x_2506__boxed_551_, v_x_548_, v_x_549_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_553_, lean_object* v_i_554_, lean_object* v_source_555_, lean_object* v_target_556_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4___redArg(v_i_554_, v_source_555_, v_target_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8(lean_object* v_00_u03b2_558_, lean_object* v_n_559_, lean_object* v_k_560_, lean_object* v_v_561_){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8___redArg(v_n_559_, v_k_560_, v_v_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9(lean_object* v_00_u03b2_563_, size_t v_depth_564_, lean_object* v_keys_565_, lean_object* v_vals_566_, lean_object* v_heq_567_, lean_object* v_i_568_, lean_object* v_entries_569_){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(v_depth_564_, v_keys_565_, v_vals_566_, v_i_568_, v_entries_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___boxed(lean_object* v_00_u03b2_571_, lean_object* v_depth_572_, lean_object* v_keys_573_, lean_object* v_vals_574_, lean_object* v_heq_575_, lean_object* v_i_576_, lean_object* v_entries_577_){
_start:
{
size_t v_depth_boxed_578_; lean_object* v_res_579_; 
v_depth_boxed_578_ = lean_unbox_usize(v_depth_572_);
lean_dec(v_depth_572_);
v_res_579_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9(v_00_u03b2_571_, v_depth_boxed_578_, v_keys_573_, v_vals_574_, v_heq_575_, v_i_576_, v_entries_577_);
lean_dec_ref(v_vals_574_);
lean_dec_ref(v_keys_573_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_580_, lean_object* v_x_581_, lean_object* v_x_582_){
_start:
{
lean_object* v___x_583_; 
v___x_583_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6___redArg(v_x_581_, v_x_582_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10(lean_object* v_00_u03b2_584_, lean_object* v_x_585_, lean_object* v_x_586_, lean_object* v_x_587_, lean_object* v_x_588_){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10___redArg(v_x_585_, v_x_586_, v_x_587_, v_x_588_);
return v___x_589_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0(void){
_start:
{
lean_object* v___f_590_; 
v___f_590_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1___boxed), 2, 0);
return v___f_590_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1(void){
_start:
{
lean_object* v___f_591_; 
v___f_591_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_hashPtrExpr_unsafe__1___boxed), 1, 0);
return v___f_591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit(lean_object* v_e_592_, lean_object* v_k_593_, lean_object* v_a_594_){
_start:
{
lean_object* v_map_595_; lean_object* v_set_596_; lean_object* v___f_597_; lean_object* v___f_598_; lean_object* v___x_599_; 
v_map_595_ = lean_ctor_get(v_a_594_, 0);
v_set_596_ = lean_ctor_get(v_a_594_, 1);
v___f_597_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0);
v___f_598_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1);
lean_inc_ref(v_e_592_);
v___x_599_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_597_, v___f_598_, v_map_595_, v_e_592_);
if (lean_obj_tag(v___x_599_) == 1)
{
lean_object* v_val_600_; lean_object* v___x_601_; 
lean_dec_ref(v_k_593_);
lean_dec_ref(v_e_592_);
v_val_600_ = lean_ctor_get(v___x_599_, 0);
lean_inc(v_val_600_);
lean_dec_ref(v___x_599_);
v___x_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_601_, 0, v_val_600_);
lean_ctor_set(v___x_601_, 1, v_a_594_);
return v___x_601_;
}
else
{
lean_object* v___f_602_; lean_object* v___x_603_; uint64_t v___x_604_; size_t v___x_605_; lean_object* v___x_606_; uint8_t v___x_607_; 
lean_dec(v___x_599_);
v___f_602_ = lean_obj_once(&l_Lean_Meta_Sym_instBEqAlphaKey___closed__0, &l_Lean_Meta_Sym_instBEqAlphaKey___closed__0_once, _init_l_Lean_Meta_Sym_instBEqAlphaKey___closed__0);
v___x_603_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_604_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_592_);
v___x_605_ = lean_uint64_to_usize(v___x_604_);
lean_inc_ref(v_e_592_);
lean_inc_ref(v_set_596_);
v___x_606_ = l_Lean_PersistentHashMap_findKeyDAux___redArg(v___f_602_, v_set_596_, v___x_605_, v_e_592_, v___x_603_);
v___x_607_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_606_, v___x_603_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; 
lean_dec_ref(v_k_593_);
lean_dec_ref(v_e_592_);
v___x_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_606_);
lean_ctor_set(v___x_608_, 1, v_a_594_);
return v___x_608_;
}
else
{
lean_object* v___x_609_; lean_object* v_fst_610_; lean_object* v_snd_611_; lean_object* v___x_612_; 
lean_dec(v___x_606_);
v___x_609_ = lean_apply_1(v_k_593_, v_a_594_);
v_fst_610_ = lean_ctor_get(v___x_609_, 0);
lean_inc(v_fst_610_);
v_snd_611_ = lean_ctor_get(v___x_609_, 1);
lean_inc(v_snd_611_);
lean_dec_ref(v___x_609_);
v___x_612_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_592_, v_fst_610_, v_snd_611_);
return v___x_612_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(lean_object* v_a_613_, lean_object* v_x_614_){
_start:
{
if (lean_obj_tag(v_x_614_) == 0)
{
lean_object* v___x_615_; 
v___x_615_ = lean_box(0);
return v___x_615_;
}
else
{
lean_object* v_key_616_; lean_object* v_value_617_; lean_object* v_tail_618_; uint8_t v___x_619_; 
v_key_616_ = lean_ctor_get(v_x_614_, 0);
v_value_617_ = lean_ctor_get(v_x_614_, 1);
v_tail_618_ = lean_ctor_get(v_x_614_, 2);
v___x_619_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_key_616_, v_a_613_);
if (v___x_619_ == 0)
{
v_x_614_ = v_tail_618_;
goto _start;
}
else
{
lean_object* v___x_621_; 
lean_inc(v_value_617_);
v___x_621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_621_, 0, v_value_617_);
return v___x_621_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg___boxed(lean_object* v_a_622_, lean_object* v_x_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(v_a_622_, v_x_623_);
lean_dec(v_x_623_);
lean_dec_ref(v_a_622_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(lean_object* v_m_625_, lean_object* v_a_626_){
_start:
{
lean_object* v_buckets_627_; lean_object* v___x_628_; uint64_t v___x_629_; uint64_t v___x_630_; uint64_t v___x_631_; uint64_t v_fold_632_; uint64_t v___x_633_; uint64_t v___x_634_; uint64_t v___x_635_; size_t v___x_636_; size_t v___x_637_; size_t v___x_638_; size_t v___x_639_; size_t v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v_buckets_627_ = lean_ctor_get(v_m_625_, 1);
v___x_628_ = lean_array_get_size(v_buckets_627_);
v___x_629_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_a_626_);
v___x_630_ = 32ULL;
v___x_631_ = lean_uint64_shift_right(v___x_629_, v___x_630_);
v_fold_632_ = lean_uint64_xor(v___x_629_, v___x_631_);
v___x_633_ = 16ULL;
v___x_634_ = lean_uint64_shift_right(v_fold_632_, v___x_633_);
v___x_635_ = lean_uint64_xor(v_fold_632_, v___x_634_);
v___x_636_ = lean_uint64_to_usize(v___x_635_);
v___x_637_ = lean_usize_of_nat(v___x_628_);
v___x_638_ = ((size_t)1ULL);
v___x_639_ = lean_usize_sub(v___x_637_, v___x_638_);
v___x_640_ = lean_usize_land(v___x_636_, v___x_639_);
v___x_641_ = lean_array_uget_borrowed(v_buckets_627_, v___x_640_);
v___x_642_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(v_a_626_, v___x_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg___boxed(lean_object* v_m_643_, lean_object* v_a_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_m_643_, v_a_644_);
lean_dec_ref(v_a_644_);
lean_dec_ref(v_m_643_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2_spec__3___redArg(lean_object* v_keys_646_, lean_object* v_vals_647_, lean_object* v_i_648_, lean_object* v_k_649_){
_start:
{
lean_object* v___x_650_; uint8_t v___x_651_; 
v___x_650_ = lean_array_get_size(v_keys_646_);
v___x_651_ = lean_nat_dec_lt(v_i_648_, v___x_650_);
if (v___x_651_ == 0)
{
lean_object* v___x_652_; 
lean_dec_ref(v_k_649_);
lean_dec(v_i_648_);
v___x_652_ = lean_box(0);
return v___x_652_;
}
else
{
lean_object* v_k_x27_653_; uint8_t v___x_654_; 
v_k_x27_653_ = lean_array_fget_borrowed(v_keys_646_, v_i_648_);
lean_inc(v_k_x27_653_);
lean_inc_ref(v_k_649_);
v___x_654_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_649_, v_k_x27_653_);
if (v___x_654_ == 0)
{
lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_655_ = lean_unsigned_to_nat(1u);
v___x_656_ = lean_nat_add(v_i_648_, v___x_655_);
lean_dec(v_i_648_);
v_i_648_ = v___x_656_;
goto _start;
}
else
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
lean_dec_ref(v_k_649_);
v___x_658_ = lean_array_fget_borrowed(v_vals_647_, v_i_648_);
lean_dec(v_i_648_);
lean_inc(v___x_658_);
lean_inc(v_k_x27_653_);
v___x_659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_659_, 0, v_k_x27_653_);
lean_ctor_set(v___x_659_, 1, v___x_658_);
v___x_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_660_, 0, v___x_659_);
return v___x_660_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_keys_661_, lean_object* v_vals_662_, lean_object* v_i_663_, lean_object* v_k_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2_spec__3___redArg(v_keys_661_, v_vals_662_, v_i_663_, v_k_664_);
lean_dec_ref(v_vals_662_);
lean_dec_ref(v_keys_661_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(lean_object* v_x_666_, size_t v_x_667_, lean_object* v_x_668_){
_start:
{
if (lean_obj_tag(v_x_666_) == 0)
{
lean_object* v_es_669_; lean_object* v___x_670_; size_t v___x_671_; size_t v___x_672_; size_t v___x_673_; lean_object* v_j_674_; lean_object* v___x_675_; 
v_es_669_ = lean_ctor_get(v_x_666_, 0);
lean_inc_ref(v_es_669_);
lean_dec_ref(v_x_666_);
v___x_670_ = lean_box(2);
v___x_671_ = ((size_t)5ULL);
v___x_672_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1);
v___x_673_ = lean_usize_land(v_x_667_, v___x_672_);
v_j_674_ = lean_usize_to_nat(v___x_673_);
v___x_675_ = lean_array_get(v___x_670_, v_es_669_, v_j_674_);
lean_dec(v_j_674_);
lean_dec_ref(v_es_669_);
switch(lean_obj_tag(v___x_675_))
{
case 0:
{
lean_object* v_key_676_; lean_object* v_val_677_; uint8_t v___x_678_; 
v_key_676_ = lean_ctor_get(v___x_675_, 0);
lean_inc_n(v_key_676_, 2);
v_val_677_ = lean_ctor_get(v___x_675_, 1);
lean_inc(v_val_677_);
lean_dec_ref(v___x_675_);
v___x_678_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_668_, v_key_676_);
if (v___x_678_ == 0)
{
lean_object* v___x_679_; 
lean_dec(v_val_677_);
lean_dec(v_key_676_);
v___x_679_ = lean_box(0);
return v___x_679_;
}
else
{
lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_680_, 0, v_key_676_);
lean_ctor_set(v___x_680_, 1, v_val_677_);
v___x_681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
return v___x_681_;
}
}
case 1:
{
lean_object* v_node_682_; size_t v___x_683_; 
v_node_682_ = lean_ctor_get(v___x_675_, 0);
lean_inc(v_node_682_);
lean_dec_ref(v___x_675_);
v___x_683_ = lean_usize_shift_right(v_x_667_, v___x_671_);
v_x_666_ = v_node_682_;
v_x_667_ = v___x_683_;
goto _start;
}
default: 
{
lean_object* v___x_685_; 
lean_dec_ref(v_x_668_);
v___x_685_ = lean_box(0);
return v___x_685_;
}
}
}
else
{
lean_object* v_ks_686_; lean_object* v_vs_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v_ks_686_ = lean_ctor_get(v_x_666_, 0);
lean_inc_ref(v_ks_686_);
v_vs_687_ = lean_ctor_get(v_x_666_, 1);
lean_inc_ref(v_vs_687_);
lean_dec_ref(v_x_666_);
v___x_688_ = lean_unsigned_to_nat(0u);
v___x_689_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2_spec__3___redArg(v_ks_686_, v_vs_687_, v___x_688_, v_x_668_);
lean_dec_ref(v_vs_687_);
lean_dec_ref(v_ks_686_);
return v___x_689_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg___boxed(lean_object* v_x_690_, lean_object* v_x_691_, lean_object* v_x_692_){
_start:
{
size_t v_x_8828__boxed_693_; lean_object* v_res_694_; 
v_x_8828__boxed_693_ = lean_unbox_usize(v_x_691_);
lean_dec(v_x_691_);
v_res_694_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(v_x_690_, v_x_8828__boxed_693_, v_x_692_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(lean_object* v_x_695_, lean_object* v_x_696_){
_start:
{
uint64_t v___x_697_; size_t v___x_698_; lean_object* v___x_699_; 
v___x_697_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_x_696_);
v___x_698_ = lean_uint64_to_usize(v___x_697_);
lean_inc_ref(v_x_695_);
v___x_699_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(v_x_695_, v___x_698_, v_x_696_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg___boxed(lean_object* v_x_700_, lean_object* v_x_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_x_700_, v_x_701_);
lean_dec_ref(v_x_700_);
return v_res_702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(lean_object* v_e_703_, lean_object* v_a_704_){
_start:
{
switch(lean_obj_tag(v_e_703_))
{
case 5:
{
lean_object* v_fn_705_; lean_object* v_arg_706_; lean_object* v_map_707_; lean_object* v_set_708_; lean_object* v___x_709_; 
v_fn_705_ = lean_ctor_get(v_e_703_, 0);
v_arg_706_ = lean_ctor_get(v_e_703_, 1);
v_map_707_ = lean_ctor_get(v_a_704_, 0);
v_set_708_ = lean_ctor_get(v_a_704_, 1);
v___x_709_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_map_707_, v_e_703_);
if (lean_obj_tag(v___x_709_) == 1)
{
lean_object* v_val_710_; lean_object* v___x_711_; 
lean_dec_ref(v_e_703_);
v_val_710_ = lean_ctor_get(v___x_709_, 0);
lean_inc(v_val_710_);
lean_dec_ref(v___x_709_);
v___x_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_711_, 0, v_val_710_);
lean_ctor_set(v___x_711_, 1, v_a_704_);
return v___x_711_;
}
else
{
lean_object* v___x_712_; uint64_t v___x_713_; size_t v___x_714_; lean_object* v___x_715_; uint8_t v___x_716_; 
lean_dec(v___x_709_);
v___x_712_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_713_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_703_);
v___x_714_ = lean_uint64_to_usize(v___x_713_);
lean_inc_ref(v_e_703_);
lean_inc_ref(v_set_708_);
v___x_715_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_708_, v___x_714_, v_e_703_, v___x_712_);
v___x_716_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_715_, v___x_712_);
if (v___x_716_ == 0)
{
lean_object* v___x_717_; 
lean_dec_ref(v_e_703_);
v___x_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_717_, 0, v___x_715_);
lean_ctor_set(v___x_717_, 1, v_a_704_);
return v___x_717_;
}
else
{
lean_object* v___x_718_; lean_object* v_fst_719_; lean_object* v_snd_720_; lean_object* v___x_721_; lean_object* v_fst_722_; lean_object* v_snd_723_; uint8_t v___y_725_; size_t v___x_729_; size_t v___x_730_; uint8_t v___x_731_; 
lean_dec_ref(v___x_715_);
lean_inc_ref(v_fn_705_);
v___x_718_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_fn_705_, v_a_704_);
v_fst_719_ = lean_ctor_get(v___x_718_, 0);
lean_inc(v_fst_719_);
v_snd_720_ = lean_ctor_get(v___x_718_, 1);
lean_inc(v_snd_720_);
lean_dec_ref(v___x_718_);
lean_inc_ref(v_arg_706_);
v___x_721_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_arg_706_, v_snd_720_);
v_fst_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_fst_722_);
v_snd_723_ = lean_ctor_get(v___x_721_, 1);
lean_inc(v_snd_723_);
lean_dec_ref(v___x_721_);
v___x_729_ = lean_ptr_addr(v_fn_705_);
v___x_730_ = lean_ptr_addr(v_fst_719_);
v___x_731_ = lean_usize_dec_eq(v___x_729_, v___x_730_);
if (v___x_731_ == 0)
{
v___y_725_ = v___x_731_;
goto v___jp_724_;
}
else
{
size_t v___x_732_; size_t v___x_733_; uint8_t v___x_734_; 
v___x_732_ = lean_ptr_addr(v_arg_706_);
v___x_733_ = lean_ptr_addr(v_fst_722_);
v___x_734_ = lean_usize_dec_eq(v___x_732_, v___x_733_);
v___y_725_ = v___x_734_;
goto v___jp_724_;
}
v___jp_724_:
{
if (v___y_725_ == 0)
{
lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_726_ = l_Lean_Expr_app___override(v_fst_719_, v_fst_722_);
v___x_727_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_703_, v___x_726_, v_snd_723_);
return v___x_727_;
}
else
{
lean_object* v___x_728_; 
lean_dec(v_fst_722_);
lean_dec(v_fst_719_);
lean_inc_ref(v_e_703_);
v___x_728_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_703_, v_e_703_, v_snd_723_);
return v___x_728_;
}
}
}
}
}
case 6:
{
lean_object* v_binderName_735_; lean_object* v_binderType_736_; lean_object* v_body_737_; uint8_t v_binderInfo_738_; lean_object* v_map_739_; lean_object* v_set_740_; lean_object* v___x_741_; 
v_binderName_735_ = lean_ctor_get(v_e_703_, 0);
v_binderType_736_ = lean_ctor_get(v_e_703_, 1);
v_body_737_ = lean_ctor_get(v_e_703_, 2);
v_binderInfo_738_ = lean_ctor_get_uint8(v_e_703_, sizeof(void*)*3 + 8);
v_map_739_ = lean_ctor_get(v_a_704_, 0);
v_set_740_ = lean_ctor_get(v_a_704_, 1);
v___x_741_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_map_739_, v_e_703_);
if (lean_obj_tag(v___x_741_) == 1)
{
lean_object* v_val_742_; lean_object* v___x_743_; 
lean_dec_ref(v_e_703_);
v_val_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_val_742_);
lean_dec_ref(v___x_741_);
v___x_743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_743_, 0, v_val_742_);
lean_ctor_set(v___x_743_, 1, v_a_704_);
return v___x_743_;
}
else
{
lean_object* v___x_744_; uint64_t v___x_745_; size_t v___x_746_; lean_object* v___x_747_; uint8_t v___x_748_; 
lean_dec(v___x_741_);
v___x_744_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_745_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_703_);
v___x_746_ = lean_uint64_to_usize(v___x_745_);
lean_inc_ref(v_e_703_);
lean_inc_ref(v_set_740_);
v___x_747_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_740_, v___x_746_, v_e_703_, v___x_744_);
v___x_748_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_747_, v___x_744_);
if (v___x_748_ == 0)
{
lean_object* v___x_749_; 
lean_dec_ref(v_e_703_);
v___x_749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_747_);
lean_ctor_set(v___x_749_, 1, v_a_704_);
return v___x_749_;
}
else
{
lean_object* v___x_750_; lean_object* v_fst_751_; lean_object* v_snd_752_; lean_object* v___x_753_; lean_object* v_fst_754_; lean_object* v_snd_755_; uint8_t v___y_757_; size_t v___x_764_; size_t v___x_765_; uint8_t v___x_766_; 
lean_dec_ref(v___x_747_);
lean_inc_ref(v_binderType_736_);
v___x_750_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_binderType_736_, v_a_704_);
v_fst_751_ = lean_ctor_get(v___x_750_, 0);
lean_inc(v_fst_751_);
v_snd_752_ = lean_ctor_get(v___x_750_, 1);
lean_inc(v_snd_752_);
lean_dec_ref(v___x_750_);
lean_inc_ref(v_body_737_);
v___x_753_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_body_737_, v_snd_752_);
v_fst_754_ = lean_ctor_get(v___x_753_, 0);
lean_inc(v_fst_754_);
v_snd_755_ = lean_ctor_get(v___x_753_, 1);
lean_inc(v_snd_755_);
lean_dec_ref(v___x_753_);
v___x_764_ = lean_ptr_addr(v_binderType_736_);
v___x_765_ = lean_ptr_addr(v_fst_751_);
v___x_766_ = lean_usize_dec_eq(v___x_764_, v___x_765_);
if (v___x_766_ == 0)
{
v___y_757_ = v___x_766_;
goto v___jp_756_;
}
else
{
size_t v___x_767_; size_t v___x_768_; uint8_t v___x_769_; 
v___x_767_ = lean_ptr_addr(v_body_737_);
v___x_768_ = lean_ptr_addr(v_fst_754_);
v___x_769_ = lean_usize_dec_eq(v___x_767_, v___x_768_);
v___y_757_ = v___x_769_;
goto v___jp_756_;
}
v___jp_756_:
{
if (v___y_757_ == 0)
{
lean_object* v___x_758_; lean_object* v___x_759_; 
lean_inc(v_binderName_735_);
v___x_758_ = l_Lean_Expr_lam___override(v_binderName_735_, v_fst_751_, v_fst_754_, v_binderInfo_738_);
v___x_759_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_703_, v___x_758_, v_snd_755_);
return v___x_759_;
}
else
{
uint8_t v___x_760_; 
v___x_760_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_738_, v_binderInfo_738_);
if (v___x_760_ == 0)
{
lean_object* v___x_761_; lean_object* v___x_762_; 
lean_inc(v_binderName_735_);
v___x_761_ = l_Lean_Expr_lam___override(v_binderName_735_, v_fst_751_, v_fst_754_, v_binderInfo_738_);
v___x_762_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_703_, v___x_761_, v_snd_755_);
return v___x_762_;
}
else
{
lean_object* v___x_763_; 
lean_dec(v_fst_754_);
lean_dec(v_fst_751_);
lean_inc_ref(v_e_703_);
v___x_763_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_703_, v_e_703_, v_snd_755_);
return v___x_763_;
}
}
}
}
}
}
case 7:
{
lean_object* v_binderName_770_; lean_object* v_binderType_771_; lean_object* v_body_772_; uint8_t v_binderInfo_773_; lean_object* v_map_774_; lean_object* v_set_775_; lean_object* v___x_776_; 
v_binderName_770_ = lean_ctor_get(v_e_703_, 0);
v_binderType_771_ = lean_ctor_get(v_e_703_, 1);
v_body_772_ = lean_ctor_get(v_e_703_, 2);
v_binderInfo_773_ = lean_ctor_get_uint8(v_e_703_, sizeof(void*)*3 + 8);
v_map_774_ = lean_ctor_get(v_a_704_, 0);
v_set_775_ = lean_ctor_get(v_a_704_, 1);
v___x_776_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_map_774_, v_e_703_);
if (lean_obj_tag(v___x_776_) == 1)
{
lean_object* v_val_777_; lean_object* v___x_778_; 
lean_dec_ref(v_e_703_);
v_val_777_ = lean_ctor_get(v___x_776_, 0);
lean_inc(v_val_777_);
lean_dec_ref(v___x_776_);
v___x_778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_778_, 0, v_val_777_);
lean_ctor_set(v___x_778_, 1, v_a_704_);
return v___x_778_;
}
else
{
lean_object* v___x_779_; uint64_t v___x_780_; size_t v___x_781_; lean_object* v___x_782_; uint8_t v___x_783_; 
lean_dec(v___x_776_);
v___x_779_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_780_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_703_);
v___x_781_ = lean_uint64_to_usize(v___x_780_);
lean_inc_ref(v_e_703_);
lean_inc_ref(v_set_775_);
v___x_782_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_775_, v___x_781_, v_e_703_, v___x_779_);
v___x_783_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_782_, v___x_779_);
if (v___x_783_ == 0)
{
lean_object* v___x_784_; 
lean_dec_ref(v_e_703_);
v___x_784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_782_);
lean_ctor_set(v___x_784_, 1, v_a_704_);
return v___x_784_;
}
else
{
lean_object* v___x_785_; lean_object* v_fst_786_; lean_object* v_snd_787_; lean_object* v___x_788_; lean_object* v_fst_789_; lean_object* v_snd_790_; uint8_t v___y_792_; size_t v___x_799_; size_t v___x_800_; uint8_t v___x_801_; 
lean_dec_ref(v___x_782_);
lean_inc_ref(v_binderType_771_);
v___x_785_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_binderType_771_, v_a_704_);
v_fst_786_ = lean_ctor_get(v___x_785_, 0);
lean_inc(v_fst_786_);
v_snd_787_ = lean_ctor_get(v___x_785_, 1);
lean_inc(v_snd_787_);
lean_dec_ref(v___x_785_);
lean_inc_ref(v_body_772_);
v___x_788_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_body_772_, v_snd_787_);
v_fst_789_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v_fst_789_);
v_snd_790_ = lean_ctor_get(v___x_788_, 1);
lean_inc(v_snd_790_);
lean_dec_ref(v___x_788_);
v___x_799_ = lean_ptr_addr(v_binderType_771_);
v___x_800_ = lean_ptr_addr(v_fst_786_);
v___x_801_ = lean_usize_dec_eq(v___x_799_, v___x_800_);
if (v___x_801_ == 0)
{
v___y_792_ = v___x_801_;
goto v___jp_791_;
}
else
{
size_t v___x_802_; size_t v___x_803_; uint8_t v___x_804_; 
v___x_802_ = lean_ptr_addr(v_body_772_);
v___x_803_ = lean_ptr_addr(v_fst_789_);
v___x_804_ = lean_usize_dec_eq(v___x_802_, v___x_803_);
v___y_792_ = v___x_804_;
goto v___jp_791_;
}
v___jp_791_:
{
if (v___y_792_ == 0)
{
lean_object* v___x_793_; lean_object* v___x_794_; 
lean_inc(v_binderName_770_);
v___x_793_ = l_Lean_Expr_forallE___override(v_binderName_770_, v_fst_786_, v_fst_789_, v_binderInfo_773_);
v___x_794_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_703_, v___x_793_, v_snd_790_);
return v___x_794_;
}
else
{
uint8_t v___x_795_; 
v___x_795_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_773_, v_binderInfo_773_);
if (v___x_795_ == 0)
{
lean_object* v___x_796_; lean_object* v___x_797_; 
lean_inc(v_binderName_770_);
v___x_796_ = l_Lean_Expr_forallE___override(v_binderName_770_, v_fst_786_, v_fst_789_, v_binderInfo_773_);
v___x_797_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_703_, v___x_796_, v_snd_790_);
return v___x_797_;
}
else
{
lean_object* v___x_798_; 
lean_dec(v_fst_789_);
lean_dec(v_fst_786_);
lean_inc_ref(v_e_703_);
v___x_798_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_703_, v_e_703_, v_snd_790_);
return v___x_798_;
}
}
}
}
}
}
case 8:
{
lean_object* v_declName_805_; lean_object* v_type_806_; lean_object* v_value_807_; lean_object* v_body_808_; uint8_t v_nondep_809_; lean_object* v_map_810_; lean_object* v_set_811_; lean_object* v___x_812_; 
v_declName_805_ = lean_ctor_get(v_e_703_, 0);
v_type_806_ = lean_ctor_get(v_e_703_, 1);
v_value_807_ = lean_ctor_get(v_e_703_, 2);
v_body_808_ = lean_ctor_get(v_e_703_, 3);
v_nondep_809_ = lean_ctor_get_uint8(v_e_703_, sizeof(void*)*4 + 8);
v_map_810_ = lean_ctor_get(v_a_704_, 0);
v_set_811_ = lean_ctor_get(v_a_704_, 1);
v___x_812_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_map_810_, v_e_703_);
if (lean_obj_tag(v___x_812_) == 1)
{
lean_object* v_val_813_; lean_object* v___x_814_; 
lean_dec_ref(v_e_703_);
v_val_813_ = lean_ctor_get(v___x_812_, 0);
lean_inc(v_val_813_);
lean_dec_ref(v___x_812_);
v___x_814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_814_, 0, v_val_813_);
lean_ctor_set(v___x_814_, 1, v_a_704_);
return v___x_814_;
}
else
{
lean_object* v___x_815_; uint64_t v___x_816_; size_t v___x_817_; lean_object* v___x_818_; uint8_t v___x_819_; 
lean_dec(v___x_812_);
v___x_815_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_816_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_703_);
v___x_817_ = lean_uint64_to_usize(v___x_816_);
lean_inc_ref(v_e_703_);
lean_inc_ref(v_set_811_);
v___x_818_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_811_, v___x_817_, v_e_703_, v___x_815_);
v___x_819_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_818_, v___x_815_);
if (v___x_819_ == 0)
{
lean_object* v___x_820_; 
lean_dec_ref(v_e_703_);
v___x_820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_820_, 0, v___x_818_);
lean_ctor_set(v___x_820_, 1, v_a_704_);
return v___x_820_;
}
else
{
lean_object* v___x_821_; lean_object* v_fst_822_; lean_object* v_snd_823_; lean_object* v___x_824_; lean_object* v_fst_825_; lean_object* v_snd_826_; lean_object* v___x_827_; lean_object* v_fst_828_; lean_object* v_snd_829_; uint8_t v___y_831_; size_t v___x_840_; size_t v___x_841_; uint8_t v___x_842_; 
lean_dec_ref(v___x_818_);
lean_inc_ref(v_type_806_);
v___x_821_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_type_806_, v_a_704_);
v_fst_822_ = lean_ctor_get(v___x_821_, 0);
lean_inc(v_fst_822_);
v_snd_823_ = lean_ctor_get(v___x_821_, 1);
lean_inc(v_snd_823_);
lean_dec_ref(v___x_821_);
lean_inc_ref(v_value_807_);
v___x_824_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_value_807_, v_snd_823_);
v_fst_825_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_fst_825_);
v_snd_826_ = lean_ctor_get(v___x_824_, 1);
lean_inc(v_snd_826_);
lean_dec_ref(v___x_824_);
lean_inc_ref(v_body_808_);
v___x_827_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_body_808_, v_snd_826_);
v_fst_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_fst_828_);
v_snd_829_ = lean_ctor_get(v___x_827_, 1);
lean_inc(v_snd_829_);
lean_dec_ref(v___x_827_);
v___x_840_ = lean_ptr_addr(v_type_806_);
v___x_841_ = lean_ptr_addr(v_fst_822_);
v___x_842_ = lean_usize_dec_eq(v___x_840_, v___x_841_);
if (v___x_842_ == 0)
{
v___y_831_ = v___x_842_;
goto v___jp_830_;
}
else
{
size_t v___x_843_; size_t v___x_844_; uint8_t v___x_845_; 
v___x_843_ = lean_ptr_addr(v_value_807_);
v___x_844_ = lean_ptr_addr(v_fst_825_);
v___x_845_ = lean_usize_dec_eq(v___x_843_, v___x_844_);
v___y_831_ = v___x_845_;
goto v___jp_830_;
}
v___jp_830_:
{
if (v___y_831_ == 0)
{
lean_object* v___x_832_; lean_object* v___x_833_; 
lean_inc(v_declName_805_);
v___x_832_ = l_Lean_Expr_letE___override(v_declName_805_, v_fst_822_, v_fst_825_, v_fst_828_, v_nondep_809_);
v___x_833_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_703_, v___x_832_, v_snd_829_);
return v___x_833_;
}
else
{
size_t v___x_834_; size_t v___x_835_; uint8_t v___x_836_; 
v___x_834_ = lean_ptr_addr(v_body_808_);
v___x_835_ = lean_ptr_addr(v_fst_828_);
v___x_836_ = lean_usize_dec_eq(v___x_834_, v___x_835_);
if (v___x_836_ == 0)
{
lean_object* v___x_837_; lean_object* v___x_838_; 
lean_inc(v_declName_805_);
v___x_837_ = l_Lean_Expr_letE___override(v_declName_805_, v_fst_822_, v_fst_825_, v_fst_828_, v_nondep_809_);
v___x_838_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_703_, v___x_837_, v_snd_829_);
return v___x_838_;
}
else
{
lean_object* v___x_839_; 
lean_dec(v_fst_828_);
lean_dec(v_fst_825_);
lean_dec(v_fst_822_);
lean_inc_ref(v_e_703_);
v___x_839_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_703_, v_e_703_, v_snd_829_);
return v___x_839_;
}
}
}
}
}
}
case 10:
{
lean_object* v_data_846_; lean_object* v_expr_847_; lean_object* v_map_848_; lean_object* v_set_849_; lean_object* v___x_850_; 
v_data_846_ = lean_ctor_get(v_e_703_, 0);
v_expr_847_ = lean_ctor_get(v_e_703_, 1);
v_map_848_ = lean_ctor_get(v_a_704_, 0);
v_set_849_ = lean_ctor_get(v_a_704_, 1);
v___x_850_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_map_848_, v_e_703_);
if (lean_obj_tag(v___x_850_) == 1)
{
lean_object* v_val_851_; lean_object* v___x_852_; 
lean_dec_ref(v_e_703_);
v_val_851_ = lean_ctor_get(v___x_850_, 0);
lean_inc(v_val_851_);
lean_dec_ref(v___x_850_);
v___x_852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_852_, 0, v_val_851_);
lean_ctor_set(v___x_852_, 1, v_a_704_);
return v___x_852_;
}
else
{
lean_object* v___x_853_; uint64_t v___x_854_; size_t v___x_855_; lean_object* v___x_856_; uint8_t v___x_857_; 
lean_dec(v___x_850_);
v___x_853_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_854_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_703_);
v___x_855_ = lean_uint64_to_usize(v___x_854_);
lean_inc_ref(v_e_703_);
lean_inc_ref(v_set_849_);
v___x_856_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_849_, v___x_855_, v_e_703_, v___x_853_);
v___x_857_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_856_, v___x_853_);
if (v___x_857_ == 0)
{
lean_object* v___x_858_; 
lean_dec_ref(v_e_703_);
v___x_858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_858_, 0, v___x_856_);
lean_ctor_set(v___x_858_, 1, v_a_704_);
return v___x_858_;
}
else
{
lean_object* v___x_859_; lean_object* v_fst_860_; lean_object* v_snd_861_; size_t v___x_862_; size_t v___x_863_; uint8_t v___x_864_; 
lean_dec_ref(v___x_856_);
lean_inc_ref(v_expr_847_);
v___x_859_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_expr_847_, v_a_704_);
v_fst_860_ = lean_ctor_get(v___x_859_, 0);
lean_inc(v_fst_860_);
v_snd_861_ = lean_ctor_get(v___x_859_, 1);
lean_inc(v_snd_861_);
lean_dec_ref(v___x_859_);
v___x_862_ = lean_ptr_addr(v_expr_847_);
v___x_863_ = lean_ptr_addr(v_fst_860_);
v___x_864_ = lean_usize_dec_eq(v___x_862_, v___x_863_);
if (v___x_864_ == 0)
{
lean_object* v___x_865_; lean_object* v___x_866_; 
lean_inc(v_data_846_);
v___x_865_ = l_Lean_Expr_mdata___override(v_data_846_, v_fst_860_);
v___x_866_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_703_, v___x_865_, v_snd_861_);
return v___x_866_;
}
else
{
lean_object* v___x_867_; 
lean_dec(v_fst_860_);
lean_inc_ref(v_e_703_);
v___x_867_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_703_, v_e_703_, v_snd_861_);
return v___x_867_;
}
}
}
}
case 11:
{
lean_object* v_typeName_868_; lean_object* v_idx_869_; lean_object* v_struct_870_; lean_object* v_map_871_; lean_object* v_set_872_; lean_object* v___x_873_; 
v_typeName_868_ = lean_ctor_get(v_e_703_, 0);
v_idx_869_ = lean_ctor_get(v_e_703_, 1);
v_struct_870_ = lean_ctor_get(v_e_703_, 2);
v_map_871_ = lean_ctor_get(v_a_704_, 0);
v_set_872_ = lean_ctor_get(v_a_704_, 1);
v___x_873_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_map_871_, v_e_703_);
if (lean_obj_tag(v___x_873_) == 1)
{
lean_object* v_val_874_; lean_object* v___x_875_; 
lean_dec_ref(v_e_703_);
v_val_874_ = lean_ctor_get(v___x_873_, 0);
lean_inc(v_val_874_);
lean_dec_ref(v___x_873_);
v___x_875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_875_, 0, v_val_874_);
lean_ctor_set(v___x_875_, 1, v_a_704_);
return v___x_875_;
}
else
{
lean_object* v___x_876_; uint64_t v___x_877_; size_t v___x_878_; lean_object* v___x_879_; uint8_t v___x_880_; 
lean_dec(v___x_873_);
v___x_876_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_877_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_703_);
v___x_878_ = lean_uint64_to_usize(v___x_877_);
lean_inc_ref(v_e_703_);
lean_inc_ref(v_set_872_);
v___x_879_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_872_, v___x_878_, v_e_703_, v___x_876_);
v___x_880_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_879_, v___x_876_);
if (v___x_880_ == 0)
{
lean_object* v___x_881_; 
lean_dec_ref(v_e_703_);
v___x_881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_879_);
lean_ctor_set(v___x_881_, 1, v_a_704_);
return v___x_881_;
}
else
{
lean_object* v___x_882_; lean_object* v_fst_883_; lean_object* v_snd_884_; size_t v___x_885_; size_t v___x_886_; uint8_t v___x_887_; 
lean_dec_ref(v___x_879_);
lean_inc_ref(v_struct_870_);
v___x_882_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_struct_870_, v_a_704_);
v_fst_883_ = lean_ctor_get(v___x_882_, 0);
lean_inc(v_fst_883_);
v_snd_884_ = lean_ctor_get(v___x_882_, 1);
lean_inc(v_snd_884_);
lean_dec_ref(v___x_882_);
v___x_885_ = lean_ptr_addr(v_struct_870_);
v___x_886_ = lean_ptr_addr(v_fst_883_);
v___x_887_ = lean_usize_dec_eq(v___x_885_, v___x_886_);
if (v___x_887_ == 0)
{
lean_object* v___x_888_; lean_object* v___x_889_; 
lean_inc(v_idx_869_);
lean_inc(v_typeName_868_);
v___x_888_ = l_Lean_Expr_proj___override(v_typeName_868_, v_idx_869_, v_fst_883_);
v___x_889_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_703_, v___x_888_, v_snd_884_);
return v___x_889_;
}
else
{
lean_object* v___x_890_; 
lean_dec(v_fst_883_);
lean_inc_ref(v_e_703_);
v___x_890_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_703_, v_e_703_, v_snd_884_);
return v___x_890_;
}
}
}
}
default: 
{
lean_object* v_map_891_; lean_object* v_set_892_; lean_object* v___x_893_; 
v_map_891_ = lean_ctor_get(v_a_704_, 0);
v_set_892_ = lean_ctor_get(v_a_704_, 1);
lean_inc_ref(v_e_703_);
v___x_893_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_set_892_, v_e_703_);
if (lean_obj_tag(v___x_893_) == 0)
{
lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_903_; 
lean_inc_ref(v_set_892_);
lean_inc_ref(v_map_891_);
v_isSharedCheck_903_ = !lean_is_exclusive(v_a_704_);
if (v_isSharedCheck_903_ == 0)
{
lean_object* v_unused_904_; lean_object* v_unused_905_; 
v_unused_904_ = lean_ctor_get(v_a_704_, 1);
lean_dec(v_unused_904_);
v_unused_905_ = lean_ctor_get(v_a_704_, 0);
lean_dec(v_unused_905_);
v___x_895_ = v_a_704_;
v_isShared_896_ = v_isSharedCheck_903_;
goto v_resetjp_894_;
}
else
{
lean_dec(v_a_704_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_903_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_900_; 
v___x_897_ = lean_box(0);
lean_inc_ref(v_e_703_);
v___x_898_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_set_892_, v_e_703_, v___x_897_);
if (v_isShared_896_ == 0)
{
lean_ctor_set(v___x_895_, 1, v___x_898_);
v___x_900_ = v___x_895_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_map_891_);
lean_ctor_set(v_reuseFailAlloc_902_, 1, v___x_898_);
v___x_900_ = v_reuseFailAlloc_902_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
lean_object* v___x_901_; 
v___x_901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_901_, 0, v_e_703_);
lean_ctor_set(v___x_901_, 1, v___x_900_);
return v___x_901_;
}
}
}
else
{
lean_object* v_val_906_; lean_object* v_fst_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
lean_dec_ref(v_e_703_);
v_val_906_ = lean_ctor_get(v___x_893_, 0);
lean_inc(v_val_906_);
lean_dec_ref(v___x_893_);
v_fst_907_ = lean_ctor_get(v_val_906_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v_val_906_);
if (v_isSharedCheck_914_ == 0)
{
lean_object* v_unused_915_; 
v_unused_915_ = lean_ctor_get(v_val_906_, 1);
lean_dec(v_unused_915_);
v___x_909_ = v_val_906_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_fst_907_);
lean_dec(v_val_906_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
lean_ctor_set(v___x_909_, 1, v_a_704_);
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_fst_907_);
lean_ctor_set(v_reuseFailAlloc_913_, 1, v_a_704_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0(lean_object* v_00_u03b2_916_, lean_object* v_m_917_, lean_object* v_a_918_){
_start:
{
lean_object* v___x_919_; 
v___x_919_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_m_917_, v_a_918_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___boxed(lean_object* v_00_u03b2_920_, lean_object* v_m_921_, lean_object* v_a_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0(v_00_u03b2_920_, v_m_921_, v_a_922_);
lean_dec_ref(v_a_922_);
lean_dec_ref(v_m_921_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1(lean_object* v_00_u03b2_924_, lean_object* v_x_925_, lean_object* v_x_926_){
_start:
{
lean_object* v___x_927_; 
v___x_927_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_x_925_, v_x_926_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___boxed(lean_object* v_00_u03b2_928_, lean_object* v_x_929_, lean_object* v_x_930_){
_start:
{
lean_object* v_res_931_; 
v_res_931_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1(v_00_u03b2_928_, v_x_929_, v_x_930_);
lean_dec_ref(v_x_929_);
return v_res_931_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0(lean_object* v_00_u03b2_932_, lean_object* v_a_933_, lean_object* v_x_934_){
_start:
{
lean_object* v___x_935_; 
v___x_935_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(v_a_933_, v_x_934_);
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_936_, lean_object* v_a_937_, lean_object* v_x_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0(v_00_u03b2_936_, v_a_937_, v_x_938_);
lean_dec(v_x_938_);
lean_dec_ref(v_a_937_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2(lean_object* v_00_u03b2_940_, lean_object* v_x_941_, size_t v_x_942_, lean_object* v_x_943_){
_start:
{
lean_object* v___x_944_; 
lean_inc_ref(v_x_941_);
v___x_944_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(v_x_941_, v_x_942_, v_x_943_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___boxed(lean_object* v_00_u03b2_945_, lean_object* v_x_946_, lean_object* v_x_947_, lean_object* v_x_948_){
_start:
{
size_t v_x_9303__boxed_949_; lean_object* v_res_950_; 
v_x_9303__boxed_949_ = lean_unbox_usize(v_x_947_);
lean_dec(v_x_947_);
v_res_950_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2(v_00_u03b2_945_, v_x_946_, v_x_9303__boxed_949_, v_x_948_);
lean_dec_ref(v_x_946_);
return v_res_950_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_951_, lean_object* v_keys_952_, lean_object* v_vals_953_, lean_object* v_heq_954_, lean_object* v_i_955_, lean_object* v_k_956_){
_start:
{
lean_object* v___x_957_; 
v___x_957_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2_spec__3___redArg(v_keys_952_, v_vals_953_, v_i_955_, v_k_956_);
return v___x_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03b2_958_, lean_object* v_keys_959_, lean_object* v_vals_960_, lean_object* v_heq_961_, lean_object* v_i_962_, lean_object* v_k_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2_spec__3(v_00_u03b2_958_, v_keys_959_, v_vals_960_, v_heq_961_, v_i_962_, v_k_963_);
lean_dec_ref(v_vals_960_);
lean_dec_ref(v_keys_959_);
return v_res_964_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_shareCommonAlpha___closed__0(void){
_start:
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_965_ = lean_box(0);
v___x_966_ = lean_unsigned_to_nat(16u);
v___x_967_ = lean_mk_array(v___x_966_, v___x_965_);
return v___x_967_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_shareCommonAlpha___closed__1(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_968_ = lean_obj_once(&l_Lean_Meta_Sym_shareCommonAlpha___closed__0, &l_Lean_Meta_Sym_shareCommonAlpha___closed__0_once, _init_l_Lean_Meta_Sym_shareCommonAlpha___closed__0);
v___x_969_ = lean_unsigned_to_nat(0u);
v___x_970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_969_);
lean_ctor_set(v___x_970_, 1, v___x_968_);
return v___x_970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlpha(lean_object* v_e_971_, lean_object* v_s_972_){
_start:
{
lean_object* v___f_973_; lean_object* v___f_974_; lean_object* v___x_975_; 
v___f_973_ = lean_obj_once(&l_Lean_Meta_Sym_instBEqAlphaKey___closed__0, &l_Lean_Meta_Sym_instBEqAlphaKey___closed__0_once, _init_l_Lean_Meta_Sym_instBEqAlphaKey___closed__0);
v___f_974_ = lean_obj_once(&l_Lean_Meta_Sym_instHashableAlphaKey___closed__0, &l_Lean_Meta_Sym_instHashableAlphaKey___closed__0_once, _init_l_Lean_Meta_Sym_instHashableAlphaKey___closed__0);
lean_inc_ref(v_e_971_);
v___x_975_ = l_Lean_PersistentHashMap_findEntry_x3f___redArg(v___f_973_, v___f_974_, v_s_972_, v_e_971_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v_snd_979_; lean_object* v_fst_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_988_; 
v___x_976_ = lean_obj_once(&l_Lean_Meta_Sym_shareCommonAlpha___closed__1, &l_Lean_Meta_Sym_shareCommonAlpha___closed__1_once, _init_l_Lean_Meta_Sym_shareCommonAlpha___closed__1);
v___x_977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_976_);
lean_ctor_set(v___x_977_, 1, v_s_972_);
v___x_978_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_e_971_, v___x_977_);
v_snd_979_ = lean_ctor_get(v___x_978_, 1);
v_fst_980_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_988_ == 0)
{
v___x_982_ = v___x_978_;
v_isShared_983_ = v_isSharedCheck_988_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_snd_979_);
lean_inc(v_fst_980_);
lean_dec(v___x_978_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_988_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v_set_984_; lean_object* v___x_986_; 
v_set_984_ = lean_ctor_get(v_snd_979_, 1);
lean_inc_ref(v_set_984_);
lean_dec(v_snd_979_);
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 1, v_set_984_);
v___x_986_ = v___x_982_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_fst_980_);
lean_ctor_set(v_reuseFailAlloc_987_, 1, v_set_984_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
else
{
lean_object* v_val_989_; lean_object* v_fst_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_997_; 
lean_dec_ref(v_e_971_);
v_val_989_ = lean_ctor_get(v___x_975_, 0);
lean_inc(v_val_989_);
lean_dec_ref(v___x_975_);
v_fst_990_ = lean_ctor_get(v_val_989_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v_val_989_);
if (v_isSharedCheck_997_ == 0)
{
lean_object* v_unused_998_; 
v_unused_998_ = lean_ctor_get(v_val_989_, 1);
lean_dec(v_unused_998_);
v___x_992_ = v_val_989_;
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_fst_990_);
lean_dec(v_val_989_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_995_; 
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 1, v_s_972_);
v___x_995_ = v___x_992_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_fst_990_);
lean_ctor_set(v_reuseFailAlloc_996_, 1, v_s_972_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(lean_object* v_e_999_, lean_object* v_a_1000_){
_start:
{
lean_object* v___x_1001_; uint64_t v___x_1002_; size_t v___x_1003_; lean_object* v___x_1004_; uint8_t v___x_1005_; 
v___x_1001_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1002_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_999_);
v___x_1003_ = lean_uint64_to_usize(v___x_1002_);
lean_inc_ref(v_e_999_);
lean_inc_ref(v_a_1000_);
v___x_1004_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1000_, v___x_1003_, v_e_999_, v___x_1001_);
v___x_1005_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_1004_, v___x_1001_);
if (v___x_1005_ == 0)
{
lean_object* v___x_1006_; 
lean_dec_ref(v_e_999_);
v___x_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1004_);
lean_ctor_set(v___x_1006_, 1, v_a_1000_);
return v___x_1006_;
}
else
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
lean_dec_ref(v___x_1004_);
v___x_1007_ = lean_box(0);
lean_inc_ref(v_e_999_);
v___x_1008_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_a_1000_, v_e_999_, v___x_1007_);
v___x_1009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1009_, 0, v_e_999_);
lean_ctor_set(v___x_1009_, 1, v___x_1008_);
return v___x_1009_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visitInc(lean_object* v_e_1010_, lean_object* v_k_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v___f_1013_; lean_object* v___x_1014_; uint64_t v___x_1015_; size_t v___x_1016_; lean_object* v___x_1017_; uint8_t v___x_1018_; 
v___f_1013_ = lean_obj_once(&l_Lean_Meta_Sym_instBEqAlphaKey___closed__0, &l_Lean_Meta_Sym_instBEqAlphaKey___closed__0_once, _init_l_Lean_Meta_Sym_instBEqAlphaKey___closed__0);
v___x_1014_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1015_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1010_);
v___x_1016_ = lean_uint64_to_usize(v___x_1015_);
lean_inc_ref(v_a_1012_);
v___x_1017_ = l_Lean_PersistentHashMap_findKeyDAux___redArg(v___f_1013_, v_a_1012_, v___x_1016_, v_e_1010_, v___x_1014_);
v___x_1018_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_1017_, v___x_1014_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; 
lean_dec_ref(v_k_1011_);
v___x_1019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1017_);
lean_ctor_set(v___x_1019_, 1, v_a_1012_);
return v___x_1019_;
}
else
{
lean_object* v___x_1020_; lean_object* v_fst_1021_; lean_object* v_snd_1022_; lean_object* v___x_1023_; 
lean_dec(v___x_1017_);
v___x_1020_ = lean_apply_1(v_k_1011_, v_a_1012_);
v_fst_1021_ = lean_ctor_get(v___x_1020_, 0);
lean_inc(v_fst_1021_);
v_snd_1022_ = lean_ctor_get(v___x_1020_, 1);
lean_inc(v_snd_1022_);
lean_dec_ref(v___x_1020_);
v___x_1023_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v_fst_1021_, v_snd_1022_);
return v___x_1023_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(lean_object* v_e_1024_, lean_object* v_a_1025_){
_start:
{
switch(lean_obj_tag(v_e_1024_))
{
case 5:
{
lean_object* v_fn_1026_; lean_object* v_arg_1027_; lean_object* v___x_1028_; uint64_t v___x_1029_; size_t v___x_1030_; lean_object* v___x_1031_; uint8_t v___x_1032_; 
v_fn_1026_ = lean_ctor_get(v_e_1024_, 0);
v_arg_1027_ = lean_ctor_get(v_e_1024_, 1);
v___x_1028_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1029_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1024_);
v___x_1030_ = lean_uint64_to_usize(v___x_1029_);
lean_inc_ref(v_e_1024_);
lean_inc_ref(v_a_1025_);
v___x_1031_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1025_, v___x_1030_, v_e_1024_, v___x_1028_);
v___x_1032_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_1031_, v___x_1028_);
if (v___x_1032_ == 0)
{
lean_object* v___x_1033_; 
lean_dec_ref(v_e_1024_);
v___x_1033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1033_, 0, v___x_1031_);
lean_ctor_set(v___x_1033_, 1, v_a_1025_);
return v___x_1033_;
}
else
{
lean_object* v___x_1034_; lean_object* v_fst_1035_; lean_object* v_snd_1036_; lean_object* v___x_1037_; lean_object* v_fst_1038_; lean_object* v_snd_1039_; uint8_t v___y_1041_; size_t v___x_1045_; size_t v___x_1046_; uint8_t v___x_1047_; 
lean_dec_ref(v___x_1031_);
lean_inc_ref(v_fn_1026_);
v___x_1034_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_fn_1026_, v_a_1025_);
v_fst_1035_ = lean_ctor_get(v___x_1034_, 0);
lean_inc(v_fst_1035_);
v_snd_1036_ = lean_ctor_get(v___x_1034_, 1);
lean_inc(v_snd_1036_);
lean_dec_ref(v___x_1034_);
lean_inc_ref(v_arg_1027_);
v___x_1037_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_arg_1027_, v_snd_1036_);
v_fst_1038_ = lean_ctor_get(v___x_1037_, 0);
lean_inc(v_fst_1038_);
v_snd_1039_ = lean_ctor_get(v___x_1037_, 1);
lean_inc(v_snd_1039_);
lean_dec_ref(v___x_1037_);
v___x_1045_ = lean_ptr_addr(v_fn_1026_);
v___x_1046_ = lean_ptr_addr(v_fst_1035_);
v___x_1047_ = lean_usize_dec_eq(v___x_1045_, v___x_1046_);
if (v___x_1047_ == 0)
{
v___y_1041_ = v___x_1047_;
goto v___jp_1040_;
}
else
{
size_t v___x_1048_; size_t v___x_1049_; uint8_t v___x_1050_; 
v___x_1048_ = lean_ptr_addr(v_arg_1027_);
v___x_1049_ = lean_ptr_addr(v_fst_1038_);
v___x_1050_ = lean_usize_dec_eq(v___x_1048_, v___x_1049_);
v___y_1041_ = v___x_1050_;
goto v___jp_1040_;
}
v___jp_1040_:
{
if (v___y_1041_ == 0)
{
lean_object* v___x_1042_; lean_object* v___x_1043_; 
lean_dec_ref(v_e_1024_);
v___x_1042_ = l_Lean_Expr_app___override(v_fst_1035_, v_fst_1038_);
v___x_1043_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v___x_1042_, v_snd_1039_);
return v___x_1043_;
}
else
{
lean_object* v___x_1044_; 
lean_dec(v_fst_1038_);
lean_dec(v_fst_1035_);
v___x_1044_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v_e_1024_, v_snd_1039_);
return v___x_1044_;
}
}
}
}
case 6:
{
lean_object* v_binderName_1051_; lean_object* v_binderType_1052_; lean_object* v_body_1053_; uint8_t v_binderInfo_1054_; lean_object* v___x_1055_; uint64_t v___x_1056_; size_t v___x_1057_; lean_object* v___x_1058_; uint8_t v___x_1059_; 
v_binderName_1051_ = lean_ctor_get(v_e_1024_, 0);
v_binderType_1052_ = lean_ctor_get(v_e_1024_, 1);
v_body_1053_ = lean_ctor_get(v_e_1024_, 2);
v_binderInfo_1054_ = lean_ctor_get_uint8(v_e_1024_, sizeof(void*)*3 + 8);
v___x_1055_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1056_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1024_);
v___x_1057_ = lean_uint64_to_usize(v___x_1056_);
lean_inc_ref(v_e_1024_);
lean_inc_ref(v_a_1025_);
v___x_1058_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1025_, v___x_1057_, v_e_1024_, v___x_1055_);
v___x_1059_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_1058_, v___x_1055_);
if (v___x_1059_ == 0)
{
lean_object* v___x_1060_; 
lean_dec_ref(v_e_1024_);
v___x_1060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1058_);
lean_ctor_set(v___x_1060_, 1, v_a_1025_);
return v___x_1060_;
}
else
{
lean_object* v___x_1061_; lean_object* v_fst_1062_; lean_object* v_snd_1063_; lean_object* v___x_1064_; lean_object* v_fst_1065_; lean_object* v_snd_1066_; uint8_t v___y_1068_; size_t v___x_1075_; size_t v___x_1076_; uint8_t v___x_1077_; 
lean_dec_ref(v___x_1058_);
lean_inc_ref(v_binderType_1052_);
v___x_1061_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_binderType_1052_, v_a_1025_);
v_fst_1062_ = lean_ctor_get(v___x_1061_, 0);
lean_inc(v_fst_1062_);
v_snd_1063_ = lean_ctor_get(v___x_1061_, 1);
lean_inc(v_snd_1063_);
lean_dec_ref(v___x_1061_);
lean_inc_ref(v_body_1053_);
v___x_1064_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_body_1053_, v_snd_1063_);
v_fst_1065_ = lean_ctor_get(v___x_1064_, 0);
lean_inc(v_fst_1065_);
v_snd_1066_ = lean_ctor_get(v___x_1064_, 1);
lean_inc(v_snd_1066_);
lean_dec_ref(v___x_1064_);
v___x_1075_ = lean_ptr_addr(v_binderType_1052_);
v___x_1076_ = lean_ptr_addr(v_fst_1062_);
v___x_1077_ = lean_usize_dec_eq(v___x_1075_, v___x_1076_);
if (v___x_1077_ == 0)
{
v___y_1068_ = v___x_1077_;
goto v___jp_1067_;
}
else
{
size_t v___x_1078_; size_t v___x_1079_; uint8_t v___x_1080_; 
v___x_1078_ = lean_ptr_addr(v_body_1053_);
v___x_1079_ = lean_ptr_addr(v_fst_1065_);
v___x_1080_ = lean_usize_dec_eq(v___x_1078_, v___x_1079_);
v___y_1068_ = v___x_1080_;
goto v___jp_1067_;
}
v___jp_1067_:
{
if (v___y_1068_ == 0)
{
lean_object* v___x_1069_; lean_object* v___x_1070_; 
lean_inc(v_binderName_1051_);
lean_dec_ref(v_e_1024_);
v___x_1069_ = l_Lean_Expr_lam___override(v_binderName_1051_, v_fst_1062_, v_fst_1065_, v_binderInfo_1054_);
v___x_1070_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v___x_1069_, v_snd_1066_);
return v___x_1070_;
}
else
{
uint8_t v___x_1071_; 
v___x_1071_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1054_, v_binderInfo_1054_);
if (v___x_1071_ == 0)
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
lean_inc(v_binderName_1051_);
lean_dec_ref(v_e_1024_);
v___x_1072_ = l_Lean_Expr_lam___override(v_binderName_1051_, v_fst_1062_, v_fst_1065_, v_binderInfo_1054_);
v___x_1073_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v___x_1072_, v_snd_1066_);
return v___x_1073_;
}
else
{
lean_object* v___x_1074_; 
lean_dec(v_fst_1065_);
lean_dec(v_fst_1062_);
v___x_1074_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v_e_1024_, v_snd_1066_);
return v___x_1074_;
}
}
}
}
}
case 7:
{
lean_object* v_binderName_1081_; lean_object* v_binderType_1082_; lean_object* v_body_1083_; uint8_t v_binderInfo_1084_; lean_object* v___x_1085_; uint64_t v___x_1086_; size_t v___x_1087_; lean_object* v___x_1088_; uint8_t v___x_1089_; 
v_binderName_1081_ = lean_ctor_get(v_e_1024_, 0);
v_binderType_1082_ = lean_ctor_get(v_e_1024_, 1);
v_body_1083_ = lean_ctor_get(v_e_1024_, 2);
v_binderInfo_1084_ = lean_ctor_get_uint8(v_e_1024_, sizeof(void*)*3 + 8);
v___x_1085_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1086_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1024_);
v___x_1087_ = lean_uint64_to_usize(v___x_1086_);
lean_inc_ref(v_e_1024_);
lean_inc_ref(v_a_1025_);
v___x_1088_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1025_, v___x_1087_, v_e_1024_, v___x_1085_);
v___x_1089_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_1088_, v___x_1085_);
if (v___x_1089_ == 0)
{
lean_object* v___x_1090_; 
lean_dec_ref(v_e_1024_);
v___x_1090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1088_);
lean_ctor_set(v___x_1090_, 1, v_a_1025_);
return v___x_1090_;
}
else
{
lean_object* v___x_1091_; lean_object* v_fst_1092_; lean_object* v_snd_1093_; lean_object* v___x_1094_; lean_object* v_fst_1095_; lean_object* v_snd_1096_; uint8_t v___y_1098_; size_t v___x_1105_; size_t v___x_1106_; uint8_t v___x_1107_; 
lean_dec_ref(v___x_1088_);
lean_inc_ref(v_binderType_1082_);
v___x_1091_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_binderType_1082_, v_a_1025_);
v_fst_1092_ = lean_ctor_get(v___x_1091_, 0);
lean_inc(v_fst_1092_);
v_snd_1093_ = lean_ctor_get(v___x_1091_, 1);
lean_inc(v_snd_1093_);
lean_dec_ref(v___x_1091_);
lean_inc_ref(v_body_1083_);
v___x_1094_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_body_1083_, v_snd_1093_);
v_fst_1095_ = lean_ctor_get(v___x_1094_, 0);
lean_inc(v_fst_1095_);
v_snd_1096_ = lean_ctor_get(v___x_1094_, 1);
lean_inc(v_snd_1096_);
lean_dec_ref(v___x_1094_);
v___x_1105_ = lean_ptr_addr(v_binderType_1082_);
v___x_1106_ = lean_ptr_addr(v_fst_1092_);
v___x_1107_ = lean_usize_dec_eq(v___x_1105_, v___x_1106_);
if (v___x_1107_ == 0)
{
v___y_1098_ = v___x_1107_;
goto v___jp_1097_;
}
else
{
size_t v___x_1108_; size_t v___x_1109_; uint8_t v___x_1110_; 
v___x_1108_ = lean_ptr_addr(v_body_1083_);
v___x_1109_ = lean_ptr_addr(v_fst_1095_);
v___x_1110_ = lean_usize_dec_eq(v___x_1108_, v___x_1109_);
v___y_1098_ = v___x_1110_;
goto v___jp_1097_;
}
v___jp_1097_:
{
if (v___y_1098_ == 0)
{
lean_object* v___x_1099_; lean_object* v___x_1100_; 
lean_inc(v_binderName_1081_);
lean_dec_ref(v_e_1024_);
v___x_1099_ = l_Lean_Expr_forallE___override(v_binderName_1081_, v_fst_1092_, v_fst_1095_, v_binderInfo_1084_);
v___x_1100_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v___x_1099_, v_snd_1096_);
return v___x_1100_;
}
else
{
uint8_t v___x_1101_; 
v___x_1101_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1084_, v_binderInfo_1084_);
if (v___x_1101_ == 0)
{
lean_object* v___x_1102_; lean_object* v___x_1103_; 
lean_inc(v_binderName_1081_);
lean_dec_ref(v_e_1024_);
v___x_1102_ = l_Lean_Expr_forallE___override(v_binderName_1081_, v_fst_1092_, v_fst_1095_, v_binderInfo_1084_);
v___x_1103_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v___x_1102_, v_snd_1096_);
return v___x_1103_;
}
else
{
lean_object* v___x_1104_; 
lean_dec(v_fst_1095_);
lean_dec(v_fst_1092_);
v___x_1104_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v_e_1024_, v_snd_1096_);
return v___x_1104_;
}
}
}
}
}
case 8:
{
lean_object* v_declName_1111_; lean_object* v_type_1112_; lean_object* v_value_1113_; lean_object* v_body_1114_; uint8_t v_nondep_1115_; lean_object* v___x_1116_; uint64_t v___x_1117_; size_t v___x_1118_; lean_object* v___x_1119_; uint8_t v___x_1120_; 
v_declName_1111_ = lean_ctor_get(v_e_1024_, 0);
v_type_1112_ = lean_ctor_get(v_e_1024_, 1);
v_value_1113_ = lean_ctor_get(v_e_1024_, 2);
v_body_1114_ = lean_ctor_get(v_e_1024_, 3);
v_nondep_1115_ = lean_ctor_get_uint8(v_e_1024_, sizeof(void*)*4 + 8);
v___x_1116_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1117_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1024_);
v___x_1118_ = lean_uint64_to_usize(v___x_1117_);
lean_inc_ref(v_e_1024_);
lean_inc_ref(v_a_1025_);
v___x_1119_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1025_, v___x_1118_, v_e_1024_, v___x_1116_);
v___x_1120_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_1119_, v___x_1116_);
if (v___x_1120_ == 0)
{
lean_object* v___x_1121_; 
lean_dec_ref(v_e_1024_);
v___x_1121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1119_);
lean_ctor_set(v___x_1121_, 1, v_a_1025_);
return v___x_1121_;
}
else
{
lean_object* v___x_1122_; lean_object* v_fst_1123_; lean_object* v_snd_1124_; lean_object* v___x_1125_; lean_object* v_fst_1126_; lean_object* v_snd_1127_; lean_object* v___x_1128_; lean_object* v_fst_1129_; lean_object* v_snd_1130_; uint8_t v___y_1132_; size_t v___x_1141_; size_t v___x_1142_; uint8_t v___x_1143_; 
lean_dec_ref(v___x_1119_);
lean_inc_ref(v_type_1112_);
v___x_1122_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_type_1112_, v_a_1025_);
v_fst_1123_ = lean_ctor_get(v___x_1122_, 0);
lean_inc(v_fst_1123_);
v_snd_1124_ = lean_ctor_get(v___x_1122_, 1);
lean_inc(v_snd_1124_);
lean_dec_ref(v___x_1122_);
lean_inc_ref(v_value_1113_);
v___x_1125_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_value_1113_, v_snd_1124_);
v_fst_1126_ = lean_ctor_get(v___x_1125_, 0);
lean_inc(v_fst_1126_);
v_snd_1127_ = lean_ctor_get(v___x_1125_, 1);
lean_inc(v_snd_1127_);
lean_dec_ref(v___x_1125_);
lean_inc_ref(v_body_1114_);
v___x_1128_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_body_1114_, v_snd_1127_);
v_fst_1129_ = lean_ctor_get(v___x_1128_, 0);
lean_inc(v_fst_1129_);
v_snd_1130_ = lean_ctor_get(v___x_1128_, 1);
lean_inc(v_snd_1130_);
lean_dec_ref(v___x_1128_);
v___x_1141_ = lean_ptr_addr(v_type_1112_);
v___x_1142_ = lean_ptr_addr(v_fst_1123_);
v___x_1143_ = lean_usize_dec_eq(v___x_1141_, v___x_1142_);
if (v___x_1143_ == 0)
{
v___y_1132_ = v___x_1143_;
goto v___jp_1131_;
}
else
{
size_t v___x_1144_; size_t v___x_1145_; uint8_t v___x_1146_; 
v___x_1144_ = lean_ptr_addr(v_value_1113_);
v___x_1145_ = lean_ptr_addr(v_fst_1126_);
v___x_1146_ = lean_usize_dec_eq(v___x_1144_, v___x_1145_);
v___y_1132_ = v___x_1146_;
goto v___jp_1131_;
}
v___jp_1131_:
{
if (v___y_1132_ == 0)
{
lean_object* v___x_1133_; lean_object* v___x_1134_; 
lean_inc(v_declName_1111_);
lean_dec_ref(v_e_1024_);
v___x_1133_ = l_Lean_Expr_letE___override(v_declName_1111_, v_fst_1123_, v_fst_1126_, v_fst_1129_, v_nondep_1115_);
v___x_1134_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v___x_1133_, v_snd_1130_);
return v___x_1134_;
}
else
{
size_t v___x_1135_; size_t v___x_1136_; uint8_t v___x_1137_; 
v___x_1135_ = lean_ptr_addr(v_body_1114_);
v___x_1136_ = lean_ptr_addr(v_fst_1129_);
v___x_1137_ = lean_usize_dec_eq(v___x_1135_, v___x_1136_);
if (v___x_1137_ == 0)
{
lean_object* v___x_1138_; lean_object* v___x_1139_; 
lean_inc(v_declName_1111_);
lean_dec_ref(v_e_1024_);
v___x_1138_ = l_Lean_Expr_letE___override(v_declName_1111_, v_fst_1123_, v_fst_1126_, v_fst_1129_, v_nondep_1115_);
v___x_1139_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v___x_1138_, v_snd_1130_);
return v___x_1139_;
}
else
{
lean_object* v___x_1140_; 
lean_dec(v_fst_1129_);
lean_dec(v_fst_1126_);
lean_dec(v_fst_1123_);
v___x_1140_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v_e_1024_, v_snd_1130_);
return v___x_1140_;
}
}
}
}
}
case 10:
{
lean_object* v_data_1147_; lean_object* v_expr_1148_; lean_object* v___x_1149_; uint64_t v___x_1150_; size_t v___x_1151_; lean_object* v___x_1152_; uint8_t v___x_1153_; 
v_data_1147_ = lean_ctor_get(v_e_1024_, 0);
v_expr_1148_ = lean_ctor_get(v_e_1024_, 1);
v___x_1149_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1150_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1024_);
v___x_1151_ = lean_uint64_to_usize(v___x_1150_);
lean_inc_ref(v_e_1024_);
lean_inc_ref(v_a_1025_);
v___x_1152_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1025_, v___x_1151_, v_e_1024_, v___x_1149_);
v___x_1153_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_1152_, v___x_1149_);
if (v___x_1153_ == 0)
{
lean_object* v___x_1154_; 
lean_dec_ref(v_e_1024_);
v___x_1154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1152_);
lean_ctor_set(v___x_1154_, 1, v_a_1025_);
return v___x_1154_;
}
else
{
lean_object* v___x_1155_; lean_object* v_fst_1156_; lean_object* v_snd_1157_; size_t v___x_1158_; size_t v___x_1159_; uint8_t v___x_1160_; 
lean_dec_ref(v___x_1152_);
lean_inc_ref(v_expr_1148_);
v___x_1155_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_expr_1148_, v_a_1025_);
v_fst_1156_ = lean_ctor_get(v___x_1155_, 0);
lean_inc(v_fst_1156_);
v_snd_1157_ = lean_ctor_get(v___x_1155_, 1);
lean_inc(v_snd_1157_);
lean_dec_ref(v___x_1155_);
v___x_1158_ = lean_ptr_addr(v_expr_1148_);
v___x_1159_ = lean_ptr_addr(v_fst_1156_);
v___x_1160_ = lean_usize_dec_eq(v___x_1158_, v___x_1159_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
lean_inc(v_data_1147_);
lean_dec_ref(v_e_1024_);
v___x_1161_ = l_Lean_Expr_mdata___override(v_data_1147_, v_fst_1156_);
v___x_1162_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v___x_1161_, v_snd_1157_);
return v___x_1162_;
}
else
{
lean_object* v___x_1163_; 
lean_dec(v_fst_1156_);
v___x_1163_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v_e_1024_, v_snd_1157_);
return v___x_1163_;
}
}
}
case 11:
{
lean_object* v_typeName_1164_; lean_object* v_idx_1165_; lean_object* v_struct_1166_; lean_object* v___x_1167_; uint64_t v___x_1168_; size_t v___x_1169_; lean_object* v___x_1170_; uint8_t v___x_1171_; 
v_typeName_1164_ = lean_ctor_get(v_e_1024_, 0);
v_idx_1165_ = lean_ctor_get(v_e_1024_, 1);
v_struct_1166_ = lean_ctor_get(v_e_1024_, 2);
v___x_1167_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1168_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1024_);
v___x_1169_ = lean_uint64_to_usize(v___x_1168_);
lean_inc_ref(v_e_1024_);
lean_inc_ref(v_a_1025_);
v___x_1170_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1025_, v___x_1169_, v_e_1024_, v___x_1167_);
v___x_1171_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_1170_, v___x_1167_);
if (v___x_1171_ == 0)
{
lean_object* v___x_1172_; 
lean_dec_ref(v_e_1024_);
v___x_1172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1170_);
lean_ctor_set(v___x_1172_, 1, v_a_1025_);
return v___x_1172_;
}
else
{
lean_object* v___x_1173_; lean_object* v_fst_1174_; lean_object* v_snd_1175_; size_t v___x_1176_; size_t v___x_1177_; uint8_t v___x_1178_; 
lean_dec_ref(v___x_1170_);
lean_inc_ref(v_struct_1166_);
v___x_1173_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_struct_1166_, v_a_1025_);
v_fst_1174_ = lean_ctor_get(v___x_1173_, 0);
lean_inc(v_fst_1174_);
v_snd_1175_ = lean_ctor_get(v___x_1173_, 1);
lean_inc(v_snd_1175_);
lean_dec_ref(v___x_1173_);
v___x_1176_ = lean_ptr_addr(v_struct_1166_);
v___x_1177_ = lean_ptr_addr(v_fst_1174_);
v___x_1178_ = lean_usize_dec_eq(v___x_1176_, v___x_1177_);
if (v___x_1178_ == 0)
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
lean_inc(v_idx_1165_);
lean_inc(v_typeName_1164_);
lean_dec_ref(v_e_1024_);
v___x_1179_ = l_Lean_Expr_proj___override(v_typeName_1164_, v_idx_1165_, v_fst_1174_);
v___x_1180_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v___x_1179_, v_snd_1175_);
return v___x_1180_;
}
else
{
lean_object* v___x_1181_; 
lean_dec(v_fst_1174_);
v___x_1181_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v_e_1024_, v_snd_1175_);
return v___x_1181_;
}
}
}
default: 
{
lean_object* v___x_1182_; 
v___x_1182_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v_e_1024_, v_a_1025_);
return v___x_1182_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlphaInc(lean_object* v_e_1183_, lean_object* v_a_1184_){
_start:
{
lean_object* v___x_1185_; 
v___x_1185_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_e_1183_, v_a_1184_);
return v___x_1185_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareCommon(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Sym_instHashableAlphaKey = _init_l_Lean_Meta_Sym_instHashableAlphaKey();
lean_mark_persistent(l_Lean_Meta_Sym_instHashableAlphaKey);
l_Lean_Meta_Sym_instBEqAlphaKey = _init_l_Lean_Meta_Sym_instBEqAlphaKey();
lean_mark_persistent(l_Lean_Meta_Sym_instBEqAlphaKey);
l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy = _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy();
lean_mark_persistent(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_AlphaShareCommon(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_AlphaShareCommon(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_AlphaShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_AlphaShareCommon(builtin);
}
#ifdef __cplusplus
}
#endif
