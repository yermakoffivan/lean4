// Lean compiler output
// Module: Lean.Meta.Tactic.Generalize
// Imports: public import Lean.Meta.KAbstract public import Lean.Meta.Tactic.Intro public import Lean.Meta.Tactic.FVarSubst public import Lean.Meta.Tactic.Revert import Lean.Meta.AppBuilder
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Meta_kabstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_MVarId_revert(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
static lean_once_cell_t l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__0;
static lean_once_cell_t l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__1;
static lean_once_cell_t l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__2;
static lean_once_cell_t l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedGeneralizeArg_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedGeneralizeArg;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__2(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_generalize(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_generalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MVarId_generalizeHyp_spec__1(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MVarId_generalizeHyp_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3(uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_generalizeHyp_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_generalizeHyp_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_generalizeHyp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_generalizeHyp___closed__0;
LEAN_EXPORT lean_object* l_Lean_MVarId_generalizeHyp(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_generalizeHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("_inhabitedExprDummy", 19, 19);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__0, &l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__0_once, _init_l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__0);
v___x_3_ = l_Lean_Name_mkStr1(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = lean_obj_once(&l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__1, &l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__1_once, _init_l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__1);
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__3(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = lean_box(0);
v___x_8_ = lean_obj_once(&l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__2, &l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__2_once, _init_l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__2);
v___x_9_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
lean_ctor_set(v___x_9_, 1, v___x_7_);
lean_ctor_set(v___x_9_, 2, v___x_7_);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedGeneralizeArg_default(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_obj_once(&l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__3, &l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__3_once, _init_l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__3);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedGeneralizeArg(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = l_Lean_Meta_instInhabitedGeneralizeArg_default;
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(lean_object* v_e_12_, lean_object* v___y_13_, lean_object* v___y_14_){
_start:
{
uint8_t v___x_16_; 
v___x_16_ = l_Lean_Expr_hasMVar(v_e_12_);
if (v___x_16_ == 0)
{
lean_object* v___x_17_; 
v___x_17_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_17_, 0, v_e_12_);
return v___x_17_;
}
else
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v_mctx_20_; lean_object* v___x_21_; lean_object* v_fst_22_; lean_object* v_snd_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v_cache_26_; lean_object* v_zetaDeltaFVarIds_27_; lean_object* v_postponed_28_; lean_object* v_diag_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_38_; 
v___x_18_ = lean_st_ref_get(v___y_14_);
lean_dec(v___x_18_);
v___x_19_ = lean_st_ref_get(v___y_13_);
v_mctx_20_ = lean_ctor_get(v___x_19_, 0);
lean_inc_ref(v_mctx_20_);
lean_dec(v___x_19_);
v___x_21_ = l_Lean_instantiateMVarsCore(v_mctx_20_, v_e_12_);
v_fst_22_ = lean_ctor_get(v___x_21_, 0);
lean_inc(v_fst_22_);
v_snd_23_ = lean_ctor_get(v___x_21_, 1);
lean_inc(v_snd_23_);
lean_dec_ref(v___x_21_);
v___x_24_ = lean_st_ref_get(v___y_14_);
lean_dec(v___x_24_);
v___x_25_ = lean_st_ref_take(v___y_13_);
v_cache_26_ = lean_ctor_get(v___x_25_, 1);
v_zetaDeltaFVarIds_27_ = lean_ctor_get(v___x_25_, 2);
v_postponed_28_ = lean_ctor_get(v___x_25_, 3);
v_diag_29_ = lean_ctor_get(v___x_25_, 4);
v_isSharedCheck_38_ = !lean_is_exclusive(v___x_25_);
if (v_isSharedCheck_38_ == 0)
{
lean_object* v_unused_39_; 
v_unused_39_ = lean_ctor_get(v___x_25_, 0);
lean_dec(v_unused_39_);
v___x_31_ = v___x_25_;
v_isShared_32_ = v_isSharedCheck_38_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_diag_29_);
lean_inc(v_postponed_28_);
lean_inc(v_zetaDeltaFVarIds_27_);
lean_inc(v_cache_26_);
lean_dec(v___x_25_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_38_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_34_; 
if (v_isShared_32_ == 0)
{
lean_ctor_set(v___x_31_, 0, v_snd_23_);
v___x_34_ = v___x_31_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v_snd_23_);
lean_ctor_set(v_reuseFailAlloc_37_, 1, v_cache_26_);
lean_ctor_set(v_reuseFailAlloc_37_, 2, v_zetaDeltaFVarIds_27_);
lean_ctor_set(v_reuseFailAlloc_37_, 3, v_postponed_28_);
lean_ctor_set(v_reuseFailAlloc_37_, 4, v_diag_29_);
v___x_34_ = v_reuseFailAlloc_37_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_st_ref_set(v___y_13_, v___x_34_);
v___x_36_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_36_, 0, v_fst_22_);
return v___x_36_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg___boxed(lean_object* v_e_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_e_40_, v___y_41_, v___y_42_);
lean_dec(v___y_42_);
lean_dec(v___y_41_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0(lean_object* v_e_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_e_45_, v___y_47_, v___y_49_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___boxed(lean_object* v_e_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0(v_e_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
return v_res_58_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__0(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_mk_string_unchecked("x", 1, 1);
return v___x_59_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__1(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__0, &l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__0);
v___x_61_ = l_Lean_Name_mkStr1(v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go(lean_object* v_args_62_, uint8_t v_transparency_63_, lean_object* v_target_64_, lean_object* v_i_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
lean_object* v___x_71_; uint8_t v___x_72_; 
v___x_71_ = lean_array_get_size(v_args_62_);
v___x_72_ = lean_nat_dec_lt(v_i_65_, v___x_71_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; 
v___x_73_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_73_, 0, v_target_64_);
return v___x_73_;
}
else
{
lean_object* v_arg_74_; lean_object* v_expr_75_; lean_object* v_xName_x3f_76_; lean_object* v___x_77_; 
v_arg_74_ = lean_array_fget_borrowed(v_args_62_, v_i_65_);
v_expr_75_ = lean_ctor_get(v_arg_74_, 0);
v_xName_x3f_76_ = lean_ctor_get(v_arg_74_, 1);
lean_inc_ref(v_expr_75_);
v___x_77_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_expr_75_, v_a_67_, v_a_69_);
if (lean_obj_tag(v___x_77_) == 0)
{
lean_object* v_a_78_; lean_object* v___x_79_; 
v_a_78_ = lean_ctor_get(v___x_77_, 0);
lean_inc_n(v_a_78_, 2);
lean_dec_ref(v___x_77_);
lean_inc(v_a_69_);
lean_inc_ref(v_a_68_);
lean_inc(v_a_67_);
lean_inc_ref(v_a_66_);
v___x_79_ = lean_infer_type(v_a_78_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_79_) == 0)
{
lean_object* v_a_80_; lean_object* v___x_81_; 
v_a_80_ = lean_ctor_get(v___x_79_, 0);
lean_inc(v_a_80_);
lean_dec_ref(v___x_79_);
v___x_81_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_a_80_, v_a_67_, v_a_69_);
if (lean_obj_tag(v___x_81_) == 0)
{
lean_object* v_a_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v_a_82_ = lean_ctor_get(v___x_81_, 0);
lean_inc(v_a_82_);
lean_dec_ref(v___x_81_);
v___x_83_ = lean_unsigned_to_nat(1u);
v___x_84_ = lean_nat_add(v_i_65_, v___x_83_);
v___x_85_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go(v_args_62_, v_transparency_63_, v_target_64_, v___x_84_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
lean_dec(v___x_84_);
if (lean_obj_tag(v___x_85_) == 0)
{
lean_object* v_a_86_; lean_object* v_xName_88_; lean_object* v___y_89_; lean_object* v___y_90_; lean_object* v___y_91_; lean_object* v___y_92_; 
v_a_86_ = lean_ctor_get(v___x_85_, 0);
lean_inc(v_a_86_);
lean_dec_ref(v___x_85_);
if (lean_obj_tag(v_xName_x3f_76_) == 1)
{
lean_object* v_val_149_; 
v_val_149_ = lean_ctor_get(v_xName_x3f_76_, 0);
lean_inc(v_val_149_);
v_xName_88_ = v_val_149_;
v___y_89_ = v_a_66_;
v___y_90_ = v_a_67_;
v___y_91_ = v_a_68_;
v___y_92_ = v_a_69_;
goto v___jp_87_;
}
else
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__1, &l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__1);
v___x_151_ = l_Lean_Core_mkFreshUserName(v___x_150_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_151_) == 0)
{
lean_object* v_a_152_; 
v_a_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc(v_a_152_);
lean_dec_ref(v___x_151_);
v_xName_88_ = v_a_152_;
v___y_89_ = v_a_66_;
v___y_90_ = v_a_67_;
v___y_91_ = v_a_68_;
v___y_92_ = v_a_69_;
goto v___jp_87_;
}
else
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_160_; 
lean_dec(v_a_86_);
lean_dec(v_a_82_);
lean_dec(v_a_78_);
v_a_153_ = lean_ctor_get(v___x_151_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_151_);
if (v_isSharedCheck_160_ == 0)
{
v___x_155_ = v___x_151_;
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v___x_151_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_158_; 
if (v_isShared_156_ == 0)
{
v___x_158_ = v___x_155_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_a_153_);
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
v___jp_87_:
{
lean_object* v___x_93_; uint8_t v_foApprox_94_; uint8_t v_ctxApprox_95_; uint8_t v_quasiPatternApprox_96_; uint8_t v_constApprox_97_; uint8_t v_isDefEqStuckEx_98_; uint8_t v_unificationHints_99_; uint8_t v_proofIrrelevance_100_; uint8_t v_assignSyntheticOpaque_101_; uint8_t v_offsetCnstrs_102_; uint8_t v_etaStruct_103_; uint8_t v_univApprox_104_; uint8_t v_iota_105_; uint8_t v_beta_106_; uint8_t v_proj_107_; uint8_t v_zeta_108_; uint8_t v_zetaDelta_109_; uint8_t v_zetaUnused_110_; uint8_t v_zetaHave_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_148_; 
v___x_93_ = l_Lean_Meta_Context_config(v___y_89_);
v_foApprox_94_ = lean_ctor_get_uint8(v___x_93_, 0);
v_ctxApprox_95_ = lean_ctor_get_uint8(v___x_93_, 1);
v_quasiPatternApprox_96_ = lean_ctor_get_uint8(v___x_93_, 2);
v_constApprox_97_ = lean_ctor_get_uint8(v___x_93_, 3);
v_isDefEqStuckEx_98_ = lean_ctor_get_uint8(v___x_93_, 4);
v_unificationHints_99_ = lean_ctor_get_uint8(v___x_93_, 5);
v_proofIrrelevance_100_ = lean_ctor_get_uint8(v___x_93_, 6);
v_assignSyntheticOpaque_101_ = lean_ctor_get_uint8(v___x_93_, 7);
v_offsetCnstrs_102_ = lean_ctor_get_uint8(v___x_93_, 8);
v_etaStruct_103_ = lean_ctor_get_uint8(v___x_93_, 10);
v_univApprox_104_ = lean_ctor_get_uint8(v___x_93_, 11);
v_iota_105_ = lean_ctor_get_uint8(v___x_93_, 12);
v_beta_106_ = lean_ctor_get_uint8(v___x_93_, 13);
v_proj_107_ = lean_ctor_get_uint8(v___x_93_, 14);
v_zeta_108_ = lean_ctor_get_uint8(v___x_93_, 15);
v_zetaDelta_109_ = lean_ctor_get_uint8(v___x_93_, 16);
v_zetaUnused_110_ = lean_ctor_get_uint8(v___x_93_, 17);
v_zetaHave_111_ = lean_ctor_get_uint8(v___x_93_, 18);
v_isSharedCheck_148_ = !lean_is_exclusive(v___x_93_);
if (v_isSharedCheck_148_ == 0)
{
v___x_113_ = v___x_93_;
v_isShared_114_ = v_isSharedCheck_148_;
goto v_resetjp_112_;
}
else
{
lean_dec(v___x_93_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_148_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
uint8_t v_trackZetaDelta_115_; lean_object* v_zetaDeltaSet_116_; lean_object* v_lctx_117_; lean_object* v_localInstances_118_; lean_object* v_defEqCtx_x3f_119_; lean_object* v_synthPendingDepth_120_; lean_object* v_canUnfold_x3f_121_; uint8_t v_univApprox_122_; uint8_t v_inTypeClassResolution_123_; uint8_t v_cacheInferType_124_; lean_object* v_config_126_; 
v_trackZetaDelta_115_ = lean_ctor_get_uint8(v___y_89_, sizeof(void*)*7);
v_zetaDeltaSet_116_ = lean_ctor_get(v___y_89_, 1);
v_lctx_117_ = lean_ctor_get(v___y_89_, 2);
v_localInstances_118_ = lean_ctor_get(v___y_89_, 3);
v_defEqCtx_x3f_119_ = lean_ctor_get(v___y_89_, 4);
v_synthPendingDepth_120_ = lean_ctor_get(v___y_89_, 5);
v_canUnfold_x3f_121_ = lean_ctor_get(v___y_89_, 6);
v_univApprox_122_ = lean_ctor_get_uint8(v___y_89_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_123_ = lean_ctor_get_uint8(v___y_89_, sizeof(void*)*7 + 2);
v_cacheInferType_124_ = lean_ctor_get_uint8(v___y_89_, sizeof(void*)*7 + 3);
if (v_isShared_114_ == 0)
{
v_config_126_ = v___x_113_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 0, v_foApprox_94_);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 1, v_ctxApprox_95_);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 2, v_quasiPatternApprox_96_);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 3, v_constApprox_97_);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 4, v_isDefEqStuckEx_98_);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 5, v_unificationHints_99_);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 6, v_proofIrrelevance_100_);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 7, v_assignSyntheticOpaque_101_);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 8, v_offsetCnstrs_102_);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 10, v_etaStruct_103_);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 11, v_univApprox_104_);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 12, v_iota_105_);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 13, v_beta_106_);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 14, v_proj_107_);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 15, v_zeta_108_);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 16, v_zetaDelta_109_);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 17, v_zetaUnused_110_);
lean_ctor_set_uint8(v_reuseFailAlloc_147_, 18, v_zetaHave_111_);
v_config_126_ = v_reuseFailAlloc_147_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
uint64_t v___x_127_; uint64_t v___x_128_; uint64_t v___x_129_; lean_object* v___x_130_; uint64_t v___x_131_; uint64_t v___x_132_; uint64_t v_key_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
lean_ctor_set_uint8(v_config_126_, 9, v_transparency_63_);
v___x_127_ = l_Lean_Meta_Context_configKey(v___y_89_);
v___x_128_ = 2ULL;
v___x_129_ = lean_uint64_shift_right(v___x_127_, v___x_128_);
v___x_130_ = lean_box(0);
v___x_131_ = lean_uint64_shift_left(v___x_129_, v___x_128_);
v___x_132_ = l_Lean_Meta_TransparencyMode_toUInt64(v_transparency_63_);
v_key_133_ = lean_uint64_lor(v___x_131_, v___x_132_);
v___x_134_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_134_, 0, v_config_126_);
lean_ctor_set_uint64(v___x_134_, sizeof(void*)*1, v_key_133_);
lean_inc(v_canUnfold_x3f_121_);
lean_inc(v_synthPendingDepth_120_);
lean_inc(v_defEqCtx_x3f_119_);
lean_inc_ref(v_localInstances_118_);
lean_inc_ref(v_lctx_117_);
lean_inc(v_zetaDeltaSet_116_);
v___x_135_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set(v___x_135_, 1, v_zetaDeltaSet_116_);
lean_ctor_set(v___x_135_, 2, v_lctx_117_);
lean_ctor_set(v___x_135_, 3, v_localInstances_118_);
lean_ctor_set(v___x_135_, 4, v_defEqCtx_x3f_119_);
lean_ctor_set(v___x_135_, 5, v_synthPendingDepth_120_);
lean_ctor_set(v___x_135_, 6, v_canUnfold_x3f_121_);
lean_ctor_set_uint8(v___x_135_, sizeof(void*)*7, v_trackZetaDelta_115_);
lean_ctor_set_uint8(v___x_135_, sizeof(void*)*7 + 1, v_univApprox_122_);
lean_ctor_set_uint8(v___x_135_, sizeof(void*)*7 + 2, v_inTypeClassResolution_123_);
lean_ctor_set_uint8(v___x_135_, sizeof(void*)*7 + 3, v_cacheInferType_124_);
v___x_136_ = l_Lean_Meta_kabstract(v_a_86_, v_a_78_, v___x_130_, v___x_135_, v___y_90_, v___y_91_, v___y_92_);
lean_dec_ref(v___x_135_);
if (lean_obj_tag(v___x_136_) == 0)
{
lean_object* v_a_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_146_; 
v_a_137_ = lean_ctor_get(v___x_136_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_136_);
if (v_isSharedCheck_146_ == 0)
{
v___x_139_ = v___x_136_;
v_isShared_140_ = v_isSharedCheck_146_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_a_137_);
lean_dec(v___x_136_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_146_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
uint8_t v___x_141_; lean_object* v___x_142_; lean_object* v___x_144_; 
v___x_141_ = 0;
v___x_142_ = l_Lean_mkForall(v_xName_88_, v___x_141_, v_a_82_, v_a_137_);
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 0, v___x_142_);
v___x_144_ = v___x_139_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v___x_142_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
else
{
lean_dec(v_xName_88_);
lean_dec(v_a_82_);
return v___x_136_;
}
}
}
}
}
else
{
lean_dec(v_a_82_);
lean_dec(v_a_78_);
return v___x_85_;
}
}
else
{
lean_dec(v_a_78_);
lean_dec_ref(v_target_64_);
return v___x_81_;
}
}
else
{
lean_dec(v_a_78_);
lean_dec_ref(v_target_64_);
return v___x_79_;
}
}
else
{
lean_dec_ref(v_target_64_);
return v___x_77_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___boxed(lean_object* v_args_161_, lean_object* v_transparency_162_, lean_object* v_target_163_, lean_object* v_i_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_){
_start:
{
uint8_t v_transparency_boxed_170_; lean_object* v_res_171_; 
v_transparency_boxed_170_ = lean_unbox(v_transparency_162_);
v_res_171_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go(v_args_161_, v_transparency_boxed_170_, v_target_163_, v_i_164_, v_a_165_, v_a_166_, v_a_167_, v_a_168_);
lean_dec(v_a_168_);
lean_dec_ref(v_a_167_);
lean_dec(v_a_166_);
lean_dec_ref(v_a_165_);
lean_dec(v_i_164_);
lean_dec_ref(v_args_161_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_x27(lean_object* v_args_172_, lean_object* v_xs_173_, lean_object* v_type_174_, lean_object* v_i_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_){
_start:
{
lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_181_ = lean_array_get_size(v_xs_173_);
v___x_182_ = lean_nat_dec_lt(v_i_175_, v___x_181_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
lean_dec(v_i_175_);
v___x_183_ = lean_box(0);
v___x_184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
lean_ctor_set(v___x_184_, 1, v_type_174_);
v___x_185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
return v___x_185_;
}
else
{
lean_object* v___x_186_; lean_object* v_arg_187_; lean_object* v_hName_x3f_188_; 
v___x_186_ = l_Lean_Meta_instInhabitedGeneralizeArg_default;
v_arg_187_ = lean_array_get_borrowed(v___x_186_, v_args_172_, v_i_175_);
v_hName_x3f_188_ = lean_ctor_get(v_arg_187_, 2);
if (lean_obj_tag(v_hName_x3f_188_) == 1)
{
lean_object* v_expr_189_; lean_object* v_val_190_; lean_object* v_fst_192_; lean_object* v_snd_193_; lean_object* v___y_194_; lean_object* v___y_195_; lean_object* v___y_196_; lean_object* v___y_197_; lean_object* v___x_221_; lean_object* v___x_222_; 
v_expr_189_ = lean_ctor_get(v_arg_187_, 0);
v_val_190_ = lean_ctor_get(v_hName_x3f_188_, 0);
v___x_221_ = lean_array_fget_borrowed(v_xs_173_, v_i_175_);
lean_inc(v_a_179_);
lean_inc_ref(v_a_178_);
lean_inc(v_a_177_);
lean_inc_ref(v_a_176_);
lean_inc(v___x_221_);
v___x_222_ = lean_infer_type(v___x_221_, v_a_176_, v_a_177_, v_a_178_, v_a_179_);
if (lean_obj_tag(v___x_222_) == 0)
{
lean_object* v_a_223_; lean_object* v___x_224_; 
v_a_223_ = lean_ctor_get(v___x_222_, 0);
lean_inc(v_a_223_);
lean_dec_ref(v___x_222_);
lean_inc_ref(v_expr_189_);
v___x_224_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_expr_189_, v_a_177_, v_a_179_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; lean_object* v___x_226_; 
v_a_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc_n(v_a_225_, 2);
lean_dec_ref(v___x_224_);
lean_inc(v_a_179_);
lean_inc_ref(v_a_178_);
lean_inc(v_a_177_);
lean_inc_ref(v_a_176_);
v___x_226_ = lean_infer_type(v_a_225_, v_a_176_, v_a_177_, v_a_178_, v_a_179_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v_a_227_; lean_object* v___x_228_; 
v_a_227_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_a_227_);
lean_dec_ref(v___x_226_);
v___x_228_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_a_227_, v_a_177_, v_a_179_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v_a_229_; lean_object* v___x_230_; 
v_a_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_a_229_);
lean_dec_ref(v___x_228_);
v___x_230_ = l_Lean_Meta_isExprDefEq(v_a_223_, v_a_229_, v_a_176_, v_a_177_, v_a_178_, v_a_179_);
if (lean_obj_tag(v___x_230_) == 0)
{
lean_object* v_a_231_; uint8_t v___x_232_; 
v_a_231_ = lean_ctor_get(v___x_230_, 0);
lean_inc(v_a_231_);
lean_dec_ref(v___x_230_);
v___x_232_ = lean_unbox(v_a_231_);
lean_dec(v_a_231_);
if (v___x_232_ == 0)
{
lean_object* v___x_233_; 
lean_inc(v___x_221_);
lean_inc(v_a_225_);
v___x_233_ = l_Lean_Meta_mkHEq(v_a_225_, v___x_221_, v_a_176_, v_a_177_, v_a_178_, v_a_179_);
if (lean_obj_tag(v___x_233_) == 0)
{
lean_object* v_a_234_; lean_object* v___x_235_; 
v_a_234_ = lean_ctor_get(v___x_233_, 0);
lean_inc(v_a_234_);
lean_dec_ref(v___x_233_);
v___x_235_ = l_Lean_Meta_mkHEqRefl(v_a_225_, v_a_176_, v_a_177_, v_a_178_, v_a_179_);
if (lean_obj_tag(v___x_235_) == 0)
{
lean_object* v_a_236_; 
v_a_236_ = lean_ctor_get(v___x_235_, 0);
lean_inc(v_a_236_);
lean_dec_ref(v___x_235_);
v_fst_192_ = v_a_234_;
v_snd_193_ = v_a_236_;
v___y_194_ = v_a_176_;
v___y_195_ = v_a_177_;
v___y_196_ = v_a_178_;
v___y_197_ = v_a_179_;
goto v___jp_191_;
}
else
{
lean_object* v_a_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_244_; 
lean_dec(v_a_234_);
lean_dec(v_i_175_);
lean_dec_ref(v_type_174_);
v_a_237_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_244_ == 0)
{
v___x_239_ = v___x_235_;
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_a_237_);
lean_dec(v___x_235_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_242_; 
if (v_isShared_240_ == 0)
{
v___x_242_ = v___x_239_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_a_237_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
else
{
lean_object* v_a_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_252_; 
lean_dec(v_a_225_);
lean_dec(v_i_175_);
lean_dec_ref(v_type_174_);
v_a_245_ = lean_ctor_get(v___x_233_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v___x_233_);
if (v_isSharedCheck_252_ == 0)
{
v___x_247_ = v___x_233_;
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_a_245_);
lean_dec(v___x_233_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_250_; 
if (v_isShared_248_ == 0)
{
v___x_250_ = v___x_247_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v_a_245_);
v___x_250_ = v_reuseFailAlloc_251_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
return v___x_250_;
}
}
}
}
else
{
lean_object* v___x_253_; 
lean_inc(v___x_221_);
lean_inc(v_a_225_);
v___x_253_ = l_Lean_Meta_mkEq(v_a_225_, v___x_221_, v_a_176_, v_a_177_, v_a_178_, v_a_179_);
if (lean_obj_tag(v___x_253_) == 0)
{
lean_object* v_a_254_; lean_object* v___x_255_; 
v_a_254_ = lean_ctor_get(v___x_253_, 0);
lean_inc(v_a_254_);
lean_dec_ref(v___x_253_);
v___x_255_ = l_Lean_Meta_mkEqRefl(v_a_225_, v_a_176_, v_a_177_, v_a_178_, v_a_179_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v_a_256_; 
v_a_256_ = lean_ctor_get(v___x_255_, 0);
lean_inc(v_a_256_);
lean_dec_ref(v___x_255_);
v_fst_192_ = v_a_254_;
v_snd_193_ = v_a_256_;
v___y_194_ = v_a_176_;
v___y_195_ = v_a_177_;
v___y_196_ = v_a_178_;
v___y_197_ = v_a_179_;
goto v___jp_191_;
}
else
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_264_; 
lean_dec(v_a_254_);
lean_dec(v_i_175_);
lean_dec_ref(v_type_174_);
v_a_257_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_264_ == 0)
{
v___x_259_ = v___x_255_;
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v___x_255_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_262_; 
if (v_isShared_260_ == 0)
{
v___x_262_ = v___x_259_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_a_257_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
}
else
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_272_; 
lean_dec(v_a_225_);
lean_dec(v_i_175_);
lean_dec_ref(v_type_174_);
v_a_265_ = lean_ctor_get(v___x_253_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_253_);
if (v_isSharedCheck_272_ == 0)
{
v___x_267_ = v___x_253_;
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v___x_253_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_270_; 
if (v_isShared_268_ == 0)
{
v___x_270_ = v___x_267_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_a_265_);
v___x_270_ = v_reuseFailAlloc_271_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
return v___x_270_;
}
}
}
}
}
else
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_280_; 
lean_dec(v_a_225_);
lean_dec(v_i_175_);
lean_dec_ref(v_type_174_);
v_a_273_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_280_ == 0)
{
v___x_275_ = v___x_230_;
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_230_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_278_; 
if (v_isShared_276_ == 0)
{
v___x_278_ = v___x_275_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_a_273_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
}
else
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
lean_dec(v_a_225_);
lean_dec(v_a_223_);
lean_dec(v_i_175_);
lean_dec_ref(v_type_174_);
v_a_281_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_288_ == 0)
{
v___x_283_ = v___x_228_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_228_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
else
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
lean_dec(v_a_225_);
lean_dec(v_a_223_);
lean_dec(v_i_175_);
lean_dec_ref(v_type_174_);
v_a_289_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_226_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_226_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_289_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
else
{
lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_304_; 
lean_dec(v_a_223_);
lean_dec(v_i_175_);
lean_dec_ref(v_type_174_);
v_a_297_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_304_ == 0)
{
v___x_299_ = v___x_224_;
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_224_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_302_; 
if (v_isShared_300_ == 0)
{
v___x_302_ = v___x_299_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_a_297_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
}
else
{
lean_object* v_a_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_312_; 
lean_dec(v_i_175_);
lean_dec_ref(v_type_174_);
v_a_305_ = lean_ctor_get(v___x_222_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_222_);
if (v_isSharedCheck_312_ == 0)
{
v___x_307_ = v___x_222_;
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_a_305_);
lean_dec(v___x_222_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v___x_310_; 
if (v_isShared_308_ == 0)
{
v___x_310_ = v___x_307_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v_a_305_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
v___jp_191_:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_198_ = lean_unsigned_to_nat(1u);
v___x_199_ = lean_nat_add(v_i_175_, v___x_198_);
lean_dec(v_i_175_);
v___x_200_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_x27(v_args_172_, v_xs_173_, v_type_174_, v___x_199_, v___y_194_, v___y_195_, v___y_196_, v___y_197_);
if (lean_obj_tag(v___x_200_) == 0)
{
lean_object* v_a_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_220_; 
v_a_201_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_220_ == 0)
{
v___x_203_ = v___x_200_;
v_isShared_204_ = v_isSharedCheck_220_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_a_201_);
lean_dec(v___x_200_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_220_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v_fst_205_; lean_object* v_snd_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_219_; 
v_fst_205_ = lean_ctor_get(v_a_201_, 0);
v_snd_206_ = lean_ctor_get(v_a_201_, 1);
v_isSharedCheck_219_ = !lean_is_exclusive(v_a_201_);
if (v_isSharedCheck_219_ == 0)
{
v___x_208_ = v_a_201_;
v_isShared_209_ = v_isSharedCheck_219_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_snd_206_);
lean_inc(v_fst_205_);
lean_dec(v_a_201_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_219_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; uint8_t v___x_211_; lean_object* v___x_212_; lean_object* v___x_214_; 
v___x_210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_210_, 0, v_snd_193_);
lean_ctor_set(v___x_210_, 1, v_fst_205_);
v___x_211_ = 0;
lean_inc(v_val_190_);
v___x_212_ = l_Lean_mkForall(v_val_190_, v___x_211_, v_fst_192_, v_snd_206_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 1, v___x_212_);
lean_ctor_set(v___x_208_, 0, v___x_210_);
v___x_214_ = v___x_208_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v___x_210_);
lean_ctor_set(v_reuseFailAlloc_218_, 1, v___x_212_);
v___x_214_ = v_reuseFailAlloc_218_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
lean_object* v___x_216_; 
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 0, v___x_214_);
v___x_216_ = v___x_203_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v___x_214_);
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
else
{
lean_dec_ref(v_snd_193_);
lean_dec_ref(v_fst_192_);
return v___x_200_;
}
}
}
else
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = lean_unsigned_to_nat(1u);
v___x_314_ = lean_nat_add(v_i_175_, v___x_313_);
lean_dec(v_i_175_);
v_i_175_ = v___x_314_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_x27___boxed(lean_object* v_args_316_, lean_object* v_xs_317_, lean_object* v_type_318_, lean_object* v_i_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_x27(v_args_316_, v_xs_317_, v_type_318_, v_i_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_);
lean_dec(v_a_323_);
lean_dec_ref(v_a_322_);
lean_dec(v_a_321_);
lean_dec_ref(v_a_320_);
lean_dec_ref(v_xs_317_);
lean_dec_ref(v_args_316_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg___lam__0(lean_object* v_k_326_, lean_object* v_b_327_, lean_object* v_c_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_){
_start:
{
lean_object* v___x_334_; 
lean_inc(v___y_332_);
lean_inc_ref(v___y_331_);
lean_inc(v___y_330_);
lean_inc_ref(v___y_329_);
v___x_334_ = lean_apply_7(v_k_326_, v_b_327_, v_c_328_, v___y_329_, v___y_330_, v___y_331_, v___y_332_, lean_box(0));
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg___lam__0___boxed(lean_object* v_k_335_, lean_object* v_b_336_, lean_object* v_c_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg___lam__0(v_k_335_, v_b_336_, v_c_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_);
lean_dec(v___y_341_);
lean_dec_ref(v___y_340_);
lean_dec(v___y_339_);
lean_dec_ref(v___y_338_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg(lean_object* v_type_344_, lean_object* v_maxFVars_x3f_345_, lean_object* v_k_346_, uint8_t v_cleanupAnnotations_347_, uint8_t v_whnfType_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_){
_start:
{
lean_object* v___f_354_; lean_object* v___x_355_; 
v___f_354_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_354_, 0, v_k_346_);
v___x_355_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_344_, v_maxFVars_x3f_345_, v___f_354_, v_cleanupAnnotations_347_, v_whnfType_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_);
if (lean_obj_tag(v___x_355_) == 0)
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
v_a_356_ = lean_ctor_get(v___x_355_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___x_355_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_355_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_356_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
else
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
v_a_364_ = lean_ctor_get(v___x_355_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_355_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_355_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_364_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg___boxed(lean_object* v_type_372_, lean_object* v_maxFVars_x3f_373_, lean_object* v_k_374_, lean_object* v_cleanupAnnotations_375_, lean_object* v_whnfType_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_382_; uint8_t v_whnfType_boxed_383_; lean_object* v_res_384_; 
v_cleanupAnnotations_boxed_382_ = lean_unbox(v_cleanupAnnotations_375_);
v_whnfType_boxed_383_ = lean_unbox(v_whnfType_376_);
v_res_384_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg(v_type_372_, v_maxFVars_x3f_373_, v_k_374_, v_cleanupAnnotations_boxed_382_, v_whnfType_boxed_383_, v___y_377_, v___y_378_, v___y_379_, v___y_380_);
lean_dec(v___y_380_);
lean_dec_ref(v___y_379_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3(lean_object* v_00_u03b1_385_, lean_object* v_type_386_, lean_object* v_maxFVars_x3f_387_, lean_object* v_k_388_, uint8_t v_cleanupAnnotations_389_, uint8_t v_whnfType_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_){
_start:
{
lean_object* v___x_396_; 
v___x_396_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg(v_type_386_, v_maxFVars_x3f_387_, v_k_388_, v_cleanupAnnotations_389_, v_whnfType_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___boxed(lean_object* v_00_u03b1_397_, lean_object* v_type_398_, lean_object* v_maxFVars_x3f_399_, lean_object* v_k_400_, lean_object* v_cleanupAnnotations_401_, lean_object* v_whnfType_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_408_; uint8_t v_whnfType_boxed_409_; lean_object* v_res_410_; 
v_cleanupAnnotations_boxed_408_ = lean_unbox(v_cleanupAnnotations_401_);
v_whnfType_boxed_409_ = lean_unbox(v_whnfType_402_);
v_res_410_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3(v_00_u03b1_397_, v_type_398_, v_maxFVars_x3f_399_, v_k_400_, v_cleanupAnnotations_boxed_408_, v_whnfType_boxed_409_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
lean_dec(v___y_406_);
lean_dec_ref(v___y_405_);
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___redArg(lean_object* v_mvarId_411_, lean_object* v_x_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_411_, v_x_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_);
if (lean_obj_tag(v___x_418_) == 0)
{
lean_object* v_a_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_426_; 
v_a_419_ = lean_ctor_get(v___x_418_, 0);
v_isSharedCheck_426_ = !lean_is_exclusive(v___x_418_);
if (v_isSharedCheck_426_ == 0)
{
v___x_421_ = v___x_418_;
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_a_419_);
lean_dec(v___x_418_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_424_; 
if (v_isShared_422_ == 0)
{
v___x_424_ = v___x_421_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_a_419_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
}
else
{
lean_object* v_a_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_434_; 
v_a_427_ = lean_ctor_get(v___x_418_, 0);
v_isSharedCheck_434_ = !lean_is_exclusive(v___x_418_);
if (v_isSharedCheck_434_ == 0)
{
v___x_429_ = v___x_418_;
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_a_427_);
lean_dec(v___x_418_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_432_; 
if (v_isShared_430_ == 0)
{
v___x_432_ = v___x_429_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v_a_427_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___redArg___boxed(lean_object* v_mvarId_435_, lean_object* v_x_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___redArg(v_mvarId_435_, v_x_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4(lean_object* v_00_u03b1_443_, lean_object* v_mvarId_444_, lean_object* v_x_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___redArg(v_mvarId_444_, v_x_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___boxed(lean_object* v_00_u03b1_452_, lean_object* v_mvarId_453_, lean_object* v_x_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4(v_00_u03b1_452_, v_mvarId_453_, v_x_454_, v___y_455_, v___y_456_, v___y_457_, v___y_458_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__0(lean_object* v_args_461_, lean_object* v___x_462_, uint8_t v___x_463_, uint8_t v___x_464_, lean_object* v_xs_465_, lean_object* v_type_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_x27(v_args_461_, v_xs_465_, v_type_466_, v___x_462_, v___y_467_, v___y_468_, v___y_469_, v___y_470_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_473_; lean_object* v_fst_474_; lean_object* v_snd_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_500_; 
v_a_473_ = lean_ctor_get(v___x_472_, 0);
lean_inc(v_a_473_);
lean_dec_ref(v___x_472_);
v_fst_474_ = lean_ctor_get(v_a_473_, 0);
v_snd_475_ = lean_ctor_get(v_a_473_, 1);
v_isSharedCheck_500_ = !lean_is_exclusive(v_a_473_);
if (v_isSharedCheck_500_ == 0)
{
v___x_477_ = v_a_473_;
v_isShared_478_ = v_isSharedCheck_500_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_snd_475_);
lean_inc(v_fst_474_);
lean_dec(v_a_473_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_500_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
uint8_t v___x_479_; lean_object* v___x_480_; 
v___x_479_ = 1;
v___x_480_ = l_Lean_Meta_mkForallFVars(v_xs_465_, v_snd_475_, v___x_463_, v___x_464_, v___x_464_, v___x_479_, v___y_467_, v___y_468_, v___y_469_, v___y_470_);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_491_; 
v_a_481_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_491_ == 0)
{
v___x_483_ = v___x_480_;
v_isShared_484_ = v_isSharedCheck_491_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___x_480_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_491_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_486_; 
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 1, v_a_481_);
v___x_486_ = v___x_477_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_fst_474_);
lean_ctor_set(v_reuseFailAlloc_490_, 1, v_a_481_);
v___x_486_ = v_reuseFailAlloc_490_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
lean_object* v___x_488_; 
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 0, v___x_486_);
v___x_488_ = v___x_483_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v___x_486_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
}
else
{
lean_object* v_a_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_499_; 
lean_del_object(v___x_477_);
lean_dec(v_fst_474_);
v_a_492_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_499_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_499_ == 0)
{
v___x_494_ = v___x_480_;
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_a_492_);
lean_dec(v___x_480_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_497_; 
if (v_isShared_495_ == 0)
{
v___x_497_ = v___x_494_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_a_492_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
return v___x_497_;
}
}
}
}
}
else
{
return v___x_472_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__0___boxed(lean_object* v_args_501_, lean_object* v___x_502_, lean_object* v___x_503_, lean_object* v___x_504_, lean_object* v_xs_505_, lean_object* v_type_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
uint8_t v___x_4835__boxed_512_; uint8_t v___x_4836__boxed_513_; lean_object* v_res_514_; 
v___x_4835__boxed_512_ = lean_unbox(v___x_503_);
v___x_4836__boxed_513_ = lean_unbox(v___x_504_);
v_res_514_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__0(v_args_501_, v___x_502_, v___x_4835__boxed_512_, v___x_4836__boxed_513_, v_xs_505_, v_type_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_509_);
lean_dec(v___y_508_);
lean_dec_ref(v___y_507_);
lean_dec_ref(v_xs_505_);
lean_dec_ref(v_args_501_);
return v_res_514_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__2(lean_object* v_as_515_, size_t v_i_516_, size_t v_stop_517_){
_start:
{
uint8_t v___x_518_; 
v___x_518_ = lean_usize_dec_eq(v_i_516_, v_stop_517_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; lean_object* v_hName_x3f_520_; uint8_t v___x_521_; 
v___x_519_ = lean_array_uget_borrowed(v_as_515_, v_i_516_);
v_hName_x3f_520_ = lean_ctor_get(v___x_519_, 2);
v___x_521_ = 1;
if (lean_obj_tag(v_hName_x3f_520_) == 0)
{
if (v___x_518_ == 0)
{
size_t v___x_522_; size_t v___x_523_; 
v___x_522_ = ((size_t)1ULL);
v___x_523_ = lean_usize_add(v_i_516_, v___x_522_);
v_i_516_ = v___x_523_;
goto _start;
}
else
{
return v___x_521_;
}
}
else
{
return v___x_521_;
}
}
else
{
uint8_t v___x_525_; 
v___x_525_ = 0;
return v___x_525_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__2___boxed(lean_object* v_as_526_, lean_object* v_i_527_, lean_object* v_stop_528_){
_start:
{
size_t v_i_boxed_529_; size_t v_stop_boxed_530_; uint8_t v_res_531_; lean_object* v_r_532_; 
v_i_boxed_529_ = lean_unbox_usize(v_i_527_);
lean_dec(v_i_527_);
v_stop_boxed_530_ = lean_unbox_usize(v_stop_528_);
lean_dec(v_stop_528_);
v_res_531_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__2(v_as_526_, v_i_boxed_529_, v_stop_boxed_530_);
lean_dec_ref(v_as_526_);
v_r_532_ = lean_box(v_res_531_);
return v_r_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6_spec__7___redArg(lean_object* v_x_533_, lean_object* v_x_534_, lean_object* v_x_535_, lean_object* v_x_536_){
_start:
{
lean_object* v_ks_537_; lean_object* v_vs_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_562_; 
v_ks_537_ = lean_ctor_get(v_x_533_, 0);
v_vs_538_ = lean_ctor_get(v_x_533_, 1);
v_isSharedCheck_562_ = !lean_is_exclusive(v_x_533_);
if (v_isSharedCheck_562_ == 0)
{
v___x_540_ = v_x_533_;
v_isShared_541_ = v_isSharedCheck_562_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_vs_538_);
lean_inc(v_ks_537_);
lean_dec(v_x_533_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_562_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_542_; uint8_t v___x_543_; 
v___x_542_ = lean_array_get_size(v_ks_537_);
v___x_543_ = lean_nat_dec_lt(v_x_534_, v___x_542_);
if (v___x_543_ == 0)
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_547_; 
lean_dec(v_x_534_);
v___x_544_ = lean_array_push(v_ks_537_, v_x_535_);
v___x_545_ = lean_array_push(v_vs_538_, v_x_536_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 1, v___x_545_);
lean_ctor_set(v___x_540_, 0, v___x_544_);
v___x_547_ = v___x_540_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v___x_544_);
lean_ctor_set(v_reuseFailAlloc_548_, 1, v___x_545_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
else
{
lean_object* v_k_x27_549_; uint8_t v___x_550_; 
v_k_x27_549_ = lean_array_fget_borrowed(v_ks_537_, v_x_534_);
v___x_550_ = l_Lean_instBEqMVarId_beq(v_x_535_, v_k_x27_549_);
if (v___x_550_ == 0)
{
lean_object* v___x_552_; 
if (v_isShared_541_ == 0)
{
v___x_552_ = v___x_540_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_ks_537_);
lean_ctor_set(v_reuseFailAlloc_556_, 1, v_vs_538_);
v___x_552_ = v_reuseFailAlloc_556_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = lean_unsigned_to_nat(1u);
v___x_554_ = lean_nat_add(v_x_534_, v___x_553_);
lean_dec(v_x_534_);
v_x_533_ = v___x_552_;
v_x_534_ = v___x_554_;
goto _start;
}
}
else
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_560_; 
v___x_557_ = lean_array_fset(v_ks_537_, v_x_534_, v_x_535_);
v___x_558_ = lean_array_fset(v_vs_538_, v_x_534_, v_x_536_);
lean_dec(v_x_534_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 1, v___x_558_);
lean_ctor_set(v___x_540_, 0, v___x_557_);
v___x_560_ = v___x_540_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v___x_557_);
lean_ctor_set(v_reuseFailAlloc_561_, 1, v___x_558_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6___redArg(lean_object* v_n_563_, lean_object* v_k_564_, lean_object* v_v_565_){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_566_ = lean_unsigned_to_nat(0u);
v___x_567_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6_spec__7___redArg(v_n_563_, v___x_566_, v_k_564_, v_v_565_);
return v___x_567_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__0(void){
_start:
{
size_t v___x_568_; size_t v___x_569_; size_t v___x_570_; 
v___x_568_ = ((size_t)5ULL);
v___x_569_ = ((size_t)1ULL);
v___x_570_ = lean_usize_shift_left(v___x_569_, v___x_568_);
return v___x_570_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_571_; size_t v___x_572_; size_t v___x_573_; 
v___x_571_ = ((size_t)1ULL);
v___x_572_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__0);
v___x_573_ = lean_usize_sub(v___x_572_, v___x_571_);
return v___x_573_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg(lean_object* v_x_575_, size_t v_x_576_, size_t v_x_577_, lean_object* v_x_578_, lean_object* v_x_579_){
_start:
{
if (lean_obj_tag(v_x_575_) == 0)
{
lean_object* v_es_580_; size_t v___x_581_; size_t v___x_582_; size_t v___x_583_; size_t v___x_584_; lean_object* v_j_585_; lean_object* v___x_586_; uint8_t v___x_587_; 
v_es_580_ = lean_ctor_get(v_x_575_, 0);
v___x_581_ = ((size_t)5ULL);
v___x_582_ = ((size_t)1ULL);
v___x_583_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__1);
v___x_584_ = lean_usize_land(v_x_576_, v___x_583_);
v_j_585_ = lean_usize_to_nat(v___x_584_);
v___x_586_ = lean_array_get_size(v_es_580_);
v___x_587_ = lean_nat_dec_lt(v_j_585_, v___x_586_);
if (v___x_587_ == 0)
{
lean_dec(v_j_585_);
lean_dec(v_x_579_);
lean_dec(v_x_578_);
return v_x_575_;
}
else
{
lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_624_; 
lean_inc_ref(v_es_580_);
v_isSharedCheck_624_ = !lean_is_exclusive(v_x_575_);
if (v_isSharedCheck_624_ == 0)
{
lean_object* v_unused_625_; 
v_unused_625_ = lean_ctor_get(v_x_575_, 0);
lean_dec(v_unused_625_);
v___x_589_ = v_x_575_;
v_isShared_590_ = v_isSharedCheck_624_;
goto v_resetjp_588_;
}
else
{
lean_dec(v_x_575_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_624_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v_v_591_; lean_object* v___x_592_; lean_object* v_xs_x27_593_; lean_object* v___y_595_; 
v_v_591_ = lean_array_fget(v_es_580_, v_j_585_);
v___x_592_ = lean_box(0);
v_xs_x27_593_ = lean_array_fset(v_es_580_, v_j_585_, v___x_592_);
switch(lean_obj_tag(v_v_591_))
{
case 0:
{
lean_object* v_key_600_; lean_object* v_val_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_611_; 
v_key_600_ = lean_ctor_get(v_v_591_, 0);
v_val_601_ = lean_ctor_get(v_v_591_, 1);
v_isSharedCheck_611_ = !lean_is_exclusive(v_v_591_);
if (v_isSharedCheck_611_ == 0)
{
v___x_603_ = v_v_591_;
v_isShared_604_ = v_isSharedCheck_611_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_val_601_);
lean_inc(v_key_600_);
lean_dec(v_v_591_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_611_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
uint8_t v___x_605_; 
v___x_605_ = l_Lean_instBEqMVarId_beq(v_x_578_, v_key_600_);
if (v___x_605_ == 0)
{
lean_object* v___x_606_; lean_object* v___x_607_; 
lean_del_object(v___x_603_);
v___x_606_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_600_, v_val_601_, v_x_578_, v_x_579_);
v___x_607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_607_, 0, v___x_606_);
v___y_595_ = v___x_607_;
goto v___jp_594_;
}
else
{
lean_object* v___x_609_; 
lean_dec(v_val_601_);
lean_dec(v_key_600_);
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 1, v_x_579_);
lean_ctor_set(v___x_603_, 0, v_x_578_);
v___x_609_ = v___x_603_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_x_578_);
lean_ctor_set(v_reuseFailAlloc_610_, 1, v_x_579_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
v___y_595_ = v___x_609_;
goto v___jp_594_;
}
}
}
}
case 1:
{
lean_object* v_node_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_622_; 
v_node_612_ = lean_ctor_get(v_v_591_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v_v_591_);
if (v_isSharedCheck_622_ == 0)
{
v___x_614_ = v_v_591_;
v_isShared_615_ = v_isSharedCheck_622_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_node_612_);
lean_dec(v_v_591_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_622_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
size_t v___x_616_; size_t v___x_617_; lean_object* v___x_618_; lean_object* v___x_620_; 
v___x_616_ = lean_usize_shift_right(v_x_576_, v___x_581_);
v___x_617_ = lean_usize_add(v_x_577_, v___x_582_);
v___x_618_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg(v_node_612_, v___x_616_, v___x_617_, v_x_578_, v_x_579_);
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 0, v___x_618_);
v___x_620_ = v___x_614_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v___x_618_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
v___y_595_ = v___x_620_;
goto v___jp_594_;
}
}
}
default: 
{
lean_object* v___x_623_; 
v___x_623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_623_, 0, v_x_578_);
lean_ctor_set(v___x_623_, 1, v_x_579_);
v___y_595_ = v___x_623_;
goto v___jp_594_;
}
}
v___jp_594_:
{
lean_object* v___x_596_; lean_object* v___x_598_; 
v___x_596_ = lean_array_fset(v_xs_x27_593_, v_j_585_, v___y_595_);
lean_dec(v_j_585_);
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 0, v___x_596_);
v___x_598_ = v___x_589_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v___x_596_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
}
}
}
else
{
lean_object* v_ks_626_; lean_object* v_vs_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_647_; 
v_ks_626_ = lean_ctor_get(v_x_575_, 0);
v_vs_627_ = lean_ctor_get(v_x_575_, 1);
v_isSharedCheck_647_ = !lean_is_exclusive(v_x_575_);
if (v_isSharedCheck_647_ == 0)
{
v___x_629_ = v_x_575_;
v_isShared_630_ = v_isSharedCheck_647_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_vs_627_);
lean_inc(v_ks_626_);
lean_dec(v_x_575_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_647_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_ks_626_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v_vs_627_);
v___x_632_ = v_reuseFailAlloc_646_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
lean_object* v_newNode_633_; uint8_t v___y_635_; size_t v___x_641_; uint8_t v___x_642_; 
v_newNode_633_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6___redArg(v___x_632_, v_x_578_, v_x_579_);
v___x_641_ = ((size_t)7ULL);
v___x_642_ = lean_usize_dec_le(v___x_641_, v_x_577_);
if (v___x_642_ == 0)
{
lean_object* v___x_643_; lean_object* v___x_644_; uint8_t v___x_645_; 
v___x_643_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_633_);
v___x_644_ = lean_unsigned_to_nat(4u);
v___x_645_ = lean_nat_dec_lt(v___x_643_, v___x_644_);
lean_dec(v___x_643_);
v___y_635_ = v___x_645_;
goto v___jp_634_;
}
else
{
v___y_635_ = v___x_642_;
goto v___jp_634_;
}
v___jp_634_:
{
if (v___y_635_ == 0)
{
lean_object* v_ks_636_; lean_object* v_vs_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
v_ks_636_ = lean_ctor_get(v_newNode_633_, 0);
lean_inc_ref(v_ks_636_);
v_vs_637_ = lean_ctor_get(v_newNode_633_, 1);
lean_inc_ref(v_vs_637_);
lean_dec_ref(v_newNode_633_);
v___x_638_ = lean_unsigned_to_nat(0u);
v___x_639_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__2);
v___x_640_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___redArg(v_x_577_, v_ks_636_, v_vs_637_, v___x_638_, v___x_639_);
lean_dec_ref(v_vs_637_);
lean_dec_ref(v_ks_636_);
return v___x_640_;
}
else
{
return v_newNode_633_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___redArg(size_t v_depth_648_, lean_object* v_keys_649_, lean_object* v_vals_650_, lean_object* v_i_651_, lean_object* v_entries_652_){
_start:
{
lean_object* v___x_653_; uint8_t v___x_654_; 
v___x_653_ = lean_array_get_size(v_keys_649_);
v___x_654_ = lean_nat_dec_lt(v_i_651_, v___x_653_);
if (v___x_654_ == 0)
{
lean_dec(v_i_651_);
return v_entries_652_;
}
else
{
lean_object* v_k_655_; lean_object* v_v_656_; uint64_t v___x_657_; size_t v_h_658_; size_t v___x_659_; lean_object* v___x_660_; size_t v___x_661_; size_t v___x_662_; size_t v___x_663_; size_t v_h_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v_k_655_ = lean_array_fget_borrowed(v_keys_649_, v_i_651_);
v_v_656_ = lean_array_fget_borrowed(v_vals_650_, v_i_651_);
v___x_657_ = l_Lean_instHashableMVarId_hash(v_k_655_);
v_h_658_ = lean_uint64_to_usize(v___x_657_);
v___x_659_ = ((size_t)5ULL);
v___x_660_ = lean_unsigned_to_nat(1u);
v___x_661_ = ((size_t)1ULL);
v___x_662_ = lean_usize_sub(v_depth_648_, v___x_661_);
v___x_663_ = lean_usize_mul(v___x_659_, v___x_662_);
v_h_664_ = lean_usize_shift_right(v_h_658_, v___x_663_);
v___x_665_ = lean_nat_add(v_i_651_, v___x_660_);
lean_dec(v_i_651_);
lean_inc(v_v_656_);
lean_inc(v_k_655_);
v___x_666_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg(v_entries_652_, v_h_664_, v_depth_648_, v_k_655_, v_v_656_);
v_i_651_ = v___x_665_;
v_entries_652_ = v___x_666_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___redArg___boxed(lean_object* v_depth_668_, lean_object* v_keys_669_, lean_object* v_vals_670_, lean_object* v_i_671_, lean_object* v_entries_672_){
_start:
{
size_t v_depth_boxed_673_; lean_object* v_res_674_; 
v_depth_boxed_673_ = lean_unbox_usize(v_depth_668_);
lean_dec(v_depth_668_);
v_res_674_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___redArg(v_depth_boxed_673_, v_keys_669_, v_vals_670_, v_i_671_, v_entries_672_);
lean_dec_ref(v_vals_670_);
lean_dec_ref(v_keys_669_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_x_675_, lean_object* v_x_676_, lean_object* v_x_677_, lean_object* v_x_678_, lean_object* v_x_679_){
_start:
{
size_t v_x_5021__boxed_680_; size_t v_x_5022__boxed_681_; lean_object* v_res_682_; 
v_x_5021__boxed_680_ = lean_unbox_usize(v_x_676_);
lean_dec(v_x_676_);
v_x_5022__boxed_681_ = lean_unbox_usize(v_x_677_);
lean_dec(v_x_677_);
v_res_682_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg(v_x_675_, v_x_5021__boxed_680_, v_x_5022__boxed_681_, v_x_678_, v_x_679_);
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1___redArg(lean_object* v_x_683_, lean_object* v_x_684_, lean_object* v_x_685_){
_start:
{
uint64_t v___x_686_; size_t v___x_687_; size_t v___x_688_; lean_object* v___x_689_; 
v___x_686_ = l_Lean_instHashableMVarId_hash(v_x_684_);
v___x_687_ = lean_uint64_to_usize(v___x_686_);
v___x_688_ = ((size_t)1ULL);
v___x_689_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg(v_x_683_, v___x_687_, v___x_688_, v_x_684_, v_x_685_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___redArg(lean_object* v_mvarId_690_, lean_object* v_val_691_, lean_object* v___y_692_, lean_object* v___y_693_){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v_mctx_697_; lean_object* v_cache_698_; lean_object* v_zetaDeltaFVarIds_699_; lean_object* v_postponed_700_; lean_object* v_diag_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_729_; 
v___x_695_ = lean_st_ref_get(v___y_693_);
lean_dec(v___x_695_);
v___x_696_ = lean_st_ref_take(v___y_692_);
v_mctx_697_ = lean_ctor_get(v___x_696_, 0);
v_cache_698_ = lean_ctor_get(v___x_696_, 1);
v_zetaDeltaFVarIds_699_ = lean_ctor_get(v___x_696_, 2);
v_postponed_700_ = lean_ctor_get(v___x_696_, 3);
v_diag_701_ = lean_ctor_get(v___x_696_, 4);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_696_);
if (v_isSharedCheck_729_ == 0)
{
v___x_703_ = v___x_696_;
v_isShared_704_ = v_isSharedCheck_729_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_diag_701_);
lean_inc(v_postponed_700_);
lean_inc(v_zetaDeltaFVarIds_699_);
lean_inc(v_cache_698_);
lean_inc(v_mctx_697_);
lean_dec(v___x_696_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_729_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v_depth_705_; lean_object* v_levelAssignDepth_706_; lean_object* v_lmvarCounter_707_; lean_object* v_mvarCounter_708_; lean_object* v_lDecls_709_; lean_object* v_decls_710_; lean_object* v_userNames_711_; lean_object* v_lAssignment_712_; lean_object* v_eAssignment_713_; lean_object* v_dAssignment_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_728_; 
v_depth_705_ = lean_ctor_get(v_mctx_697_, 0);
v_levelAssignDepth_706_ = lean_ctor_get(v_mctx_697_, 1);
v_lmvarCounter_707_ = lean_ctor_get(v_mctx_697_, 2);
v_mvarCounter_708_ = lean_ctor_get(v_mctx_697_, 3);
v_lDecls_709_ = lean_ctor_get(v_mctx_697_, 4);
v_decls_710_ = lean_ctor_get(v_mctx_697_, 5);
v_userNames_711_ = lean_ctor_get(v_mctx_697_, 6);
v_lAssignment_712_ = lean_ctor_get(v_mctx_697_, 7);
v_eAssignment_713_ = lean_ctor_get(v_mctx_697_, 8);
v_dAssignment_714_ = lean_ctor_get(v_mctx_697_, 9);
v_isSharedCheck_728_ = !lean_is_exclusive(v_mctx_697_);
if (v_isSharedCheck_728_ == 0)
{
v___x_716_ = v_mctx_697_;
v_isShared_717_ = v_isSharedCheck_728_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_dAssignment_714_);
lean_inc(v_eAssignment_713_);
lean_inc(v_lAssignment_712_);
lean_inc(v_userNames_711_);
lean_inc(v_decls_710_);
lean_inc(v_lDecls_709_);
lean_inc(v_mvarCounter_708_);
lean_inc(v_lmvarCounter_707_);
lean_inc(v_levelAssignDepth_706_);
lean_inc(v_depth_705_);
lean_dec(v_mctx_697_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_728_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_718_; lean_object* v___x_720_; 
v___x_718_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1___redArg(v_eAssignment_713_, v_mvarId_690_, v_val_691_);
if (v_isShared_717_ == 0)
{
lean_ctor_set(v___x_716_, 8, v___x_718_);
v___x_720_ = v___x_716_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_depth_705_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v_levelAssignDepth_706_);
lean_ctor_set(v_reuseFailAlloc_727_, 2, v_lmvarCounter_707_);
lean_ctor_set(v_reuseFailAlloc_727_, 3, v_mvarCounter_708_);
lean_ctor_set(v_reuseFailAlloc_727_, 4, v_lDecls_709_);
lean_ctor_set(v_reuseFailAlloc_727_, 5, v_decls_710_);
lean_ctor_set(v_reuseFailAlloc_727_, 6, v_userNames_711_);
lean_ctor_set(v_reuseFailAlloc_727_, 7, v_lAssignment_712_);
lean_ctor_set(v_reuseFailAlloc_727_, 8, v___x_718_);
lean_ctor_set(v_reuseFailAlloc_727_, 9, v_dAssignment_714_);
v___x_720_ = v_reuseFailAlloc_727_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
lean_object* v___x_722_; 
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 0, v___x_720_);
v___x_722_ = v___x_703_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v___x_720_);
lean_ctor_set(v_reuseFailAlloc_726_, 1, v_cache_698_);
lean_ctor_set(v_reuseFailAlloc_726_, 2, v_zetaDeltaFVarIds_699_);
lean_ctor_set(v_reuseFailAlloc_726_, 3, v_postponed_700_);
lean_ctor_set(v_reuseFailAlloc_726_, 4, v_diag_701_);
v___x_722_ = v_reuseFailAlloc_726_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_723_ = lean_st_ref_set(v___y_692_, v___x_722_);
v___x_724_ = lean_box(0);
v___x_725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_725_, 0, v___x_724_);
return v___x_725_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___redArg___boxed(lean_object* v_mvarId_730_, lean_object* v_val_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___redArg(v_mvarId_730_, v_val_731_, v___y_732_, v___y_733_);
lean_dec(v___y_733_);
lean_dec(v___y_732_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__0(size_t v_sz_736_, size_t v_i_737_, lean_object* v_bs_738_){
_start:
{
uint8_t v___x_739_; 
v___x_739_ = lean_usize_dec_lt(v_i_737_, v_sz_736_);
if (v___x_739_ == 0)
{
return v_bs_738_;
}
else
{
lean_object* v_v_740_; lean_object* v_expr_741_; lean_object* v___x_742_; lean_object* v_bs_x27_743_; size_t v___x_744_; size_t v___x_745_; lean_object* v___x_746_; 
v_v_740_ = lean_array_uget_borrowed(v_bs_738_, v_i_737_);
v_expr_741_ = lean_ctor_get(v_v_740_, 0);
lean_inc_ref(v_expr_741_);
v___x_742_ = lean_unsigned_to_nat(0u);
v_bs_x27_743_ = lean_array_uset(v_bs_738_, v_i_737_, v___x_742_);
v___x_744_ = ((size_t)1ULL);
v___x_745_ = lean_usize_add(v_i_737_, v___x_744_);
v___x_746_ = lean_array_uset(v_bs_x27_743_, v_i_737_, v_expr_741_);
v_i_737_ = v___x_745_;
v_bs_738_ = v___x_746_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__0___boxed(lean_object* v_sz_748_, lean_object* v_i_749_, lean_object* v_bs_750_){
_start:
{
size_t v_sz_boxed_751_; size_t v_i_boxed_752_; lean_object* v_res_753_; 
v_sz_boxed_751_ = lean_unbox_usize(v_sz_748_);
lean_dec(v_sz_748_);
v_i_boxed_752_ = lean_unbox_usize(v_i_749_);
lean_dec(v_i_749_);
v_res_753_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__0(v_sz_boxed_751_, v_i_boxed_752_, v_bs_750_);
return v_res_753_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__0(void){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = lean_mk_string_unchecked("result is not type correct", 26, 26);
return v___x_754_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__1(void){
_start:
{
lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_755_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__0, &l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__0_once, _init_l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__0);
v___x_756_ = l_Lean_stringToMessageData(v___x_755_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1(lean_object* v_mvarId_757_, lean_object* v___x_758_, lean_object* v_args_759_, uint8_t v_transparency_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v___x_766_; 
lean_inc(v___x_758_);
lean_inc(v_mvarId_757_);
v___x_766_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_757_, v___x_758_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v___x_767_; 
lean_dec_ref(v___x_766_);
lean_inc(v_mvarId_757_);
v___x_767_ = l_Lean_MVarId_getTag(v_mvarId_757_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_object* v_a_768_; lean_object* v___x_769_; 
v_a_768_ = lean_ctor_get(v___x_767_, 0);
lean_inc(v_a_768_);
lean_dec_ref(v___x_767_);
lean_inc(v_mvarId_757_);
v___x_769_ = l_Lean_MVarId_getType(v_mvarId_757_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v_a_770_; lean_object* v___x_771_; lean_object* v_a_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_885_; 
v_a_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_a_770_);
lean_dec_ref(v___x_769_);
v___x_771_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_a_770_, v___y_762_, v___y_764_);
v_a_772_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_885_ == 0)
{
v___x_774_ = v___x_771_;
v_isShared_775_ = v_isSharedCheck_885_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_a_772_);
lean_dec(v___x_771_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_885_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_776_ = lean_unsigned_to_nat(0u);
v___x_777_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go(v_args_759_, v_transparency_760_, v_a_772_, v___x_776_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v_a_778_; lean_object* v___y_780_; lean_object* v___y_781_; lean_object* v___y_782_; lean_object* v___y_783_; lean_object* v___y_784_; lean_object* v___y_785_; uint8_t v___y_786_; lean_object* v___y_804_; lean_object* v___y_805_; lean_object* v___y_806_; lean_object* v___y_807_; lean_object* v___x_853_; 
v_a_778_ = lean_ctor_get(v___x_777_, 0);
lean_inc_n(v_a_778_, 2);
lean_dec_ref(v___x_777_);
v___x_853_ = l_Lean_Meta_isTypeCorrect(v_a_778_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
if (lean_obj_tag(v___x_853_) == 0)
{
lean_object* v_a_854_; uint8_t v___x_855_; 
v_a_854_ = lean_ctor_get(v___x_853_, 0);
lean_inc(v_a_854_);
lean_dec_ref(v___x_853_);
v___x_855_ = lean_unbox(v_a_854_);
lean_dec(v_a_854_);
if (v___x_855_ == 0)
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_856_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__1, &l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__1_once, _init_l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__1);
lean_inc(v_a_778_);
v___x_857_ = l_Lean_indentExpr(v_a_778_);
v___x_858_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_858_, 0, v___x_856_);
lean_ctor_set(v___x_858_, 1, v___x_857_);
v___x_859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_859_, 0, v___x_858_);
lean_inc(v_mvarId_757_);
v___x_860_ = l_Lean_Meta_throwTacticEx___redArg(v___x_758_, v_mvarId_757_, v___x_859_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_dec_ref(v___x_860_);
v___y_804_ = v___y_761_;
v___y_805_ = v___y_762_;
v___y_806_ = v___y_763_;
v___y_807_ = v___y_764_;
goto v___jp_803_;
}
else
{
lean_object* v_a_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_868_; 
lean_dec(v_a_778_);
lean_del_object(v___x_774_);
lean_dec(v_a_768_);
lean_dec_ref(v_args_759_);
lean_dec(v_mvarId_757_);
v_a_861_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_868_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_868_ == 0)
{
v___x_863_ = v___x_860_;
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_a_861_);
lean_dec(v___x_860_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_866_; 
if (v_isShared_864_ == 0)
{
v___x_866_ = v___x_863_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_a_861_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
}
}
else
{
lean_dec(v___x_758_);
v___y_804_ = v___y_761_;
v___y_805_ = v___y_762_;
v___y_806_ = v___y_763_;
v___y_807_ = v___y_764_;
goto v___jp_803_;
}
}
else
{
lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_876_; 
lean_dec(v_a_778_);
lean_del_object(v___x_774_);
lean_dec(v_a_768_);
lean_dec_ref(v_args_759_);
lean_dec(v___x_758_);
lean_dec(v_mvarId_757_);
v_a_869_ = lean_ctor_get(v___x_853_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_876_ == 0)
{
v___x_871_ = v___x_853_;
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v___x_853_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_874_; 
if (v_isShared_872_ == 0)
{
v___x_874_ = v___x_871_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_a_869_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
v___jp_779_:
{
lean_object* v___x_787_; 
v___x_787_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_778_, v_a_768_, v___y_783_, v___y_782_, v___y_785_, v___y_781_);
if (lean_obj_tag(v___x_787_) == 0)
{
lean_object* v_a_788_; lean_object* v___x_789_; lean_object* v___x_790_; uint8_t v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
v_a_788_ = lean_ctor_get(v___x_787_, 0);
lean_inc_n(v_a_788_, 2);
lean_dec_ref(v___x_787_);
v___x_789_ = l_Lean_mkAppN(v_a_788_, v___y_784_);
lean_dec_ref(v___y_784_);
v___x_790_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___redArg(v_mvarId_757_, v___x_789_, v___y_782_, v___y_781_);
lean_dec_ref(v___x_790_);
v___x_791_ = 1;
v___x_792_ = l_Lean_Expr_mvarId_x21(v_a_788_);
lean_dec(v_a_788_);
v___x_793_ = lean_box(0);
v___x_794_ = l_Lean_Meta_introNCore(v___x_792_, v___y_780_, v___x_793_, v___y_786_, v___x_791_, v___y_783_, v___y_782_, v___y_785_, v___y_781_);
return v___x_794_;
}
else
{
lean_object* v_a_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_802_; 
lean_dec_ref(v___y_784_);
lean_dec(v___y_780_);
lean_dec(v_mvarId_757_);
v_a_795_ = lean_ctor_get(v___x_787_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_787_);
if (v_isSharedCheck_802_ == 0)
{
v___x_797_ = v___x_787_;
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_a_795_);
lean_dec(v___x_787_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_795_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
}
v___jp_803_:
{
size_t v_sz_808_; size_t v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; uint8_t v___x_812_; 
v_sz_808_ = lean_array_size(v_args_759_);
v___x_809_ = ((size_t)0ULL);
lean_inc_ref(v_args_759_);
v___x_810_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__0(v_sz_808_, v___x_809_, v_args_759_);
v___x_811_ = lean_array_get_size(v_args_759_);
v___x_812_ = lean_nat_dec_lt(v___x_776_, v___x_811_);
if (v___x_812_ == 0)
{
lean_del_object(v___x_774_);
lean_dec_ref(v_args_759_);
v___y_780_ = v___x_811_;
v___y_781_ = v___y_807_;
v___y_782_ = v___y_805_;
v___y_783_ = v___y_804_;
v___y_784_ = v___x_810_;
v___y_785_ = v___y_806_;
v___y_786_ = v___x_812_;
goto v___jp_779_;
}
else
{
if (v___x_812_ == 0)
{
lean_del_object(v___x_774_);
lean_dec_ref(v_args_759_);
v___y_780_ = v___x_811_;
v___y_781_ = v___y_807_;
v___y_782_ = v___y_805_;
v___y_783_ = v___y_804_;
v___y_784_ = v___x_810_;
v___y_785_ = v___y_806_;
v___y_786_ = v___x_812_;
goto v___jp_779_;
}
else
{
size_t v___x_813_; uint8_t v___x_814_; 
v___x_813_ = lean_usize_of_nat(v___x_811_);
v___x_814_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__2(v_args_759_, v___x_809_, v___x_813_);
if (v___x_814_ == 0)
{
lean_del_object(v___x_774_);
lean_dec_ref(v_args_759_);
v___y_780_ = v___x_811_;
v___y_781_ = v___y_807_;
v___y_782_ = v___y_805_;
v___y_783_ = v___y_804_;
v___y_784_ = v___x_810_;
v___y_785_ = v___y_806_;
v___y_786_ = v___x_814_;
goto v___jp_779_;
}
else
{
uint8_t v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___f_818_; lean_object* v___x_820_; 
v___x_815_ = 0;
v___x_816_ = lean_box(v___x_815_);
v___x_817_ = lean_box(v___x_814_);
v___f_818_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__0___boxed), 11, 4);
lean_closure_set(v___f_818_, 0, v_args_759_);
lean_closure_set(v___f_818_, 1, v___x_776_);
lean_closure_set(v___f_818_, 2, v___x_816_);
lean_closure_set(v___f_818_, 3, v___x_817_);
if (v_isShared_775_ == 0)
{
lean_ctor_set_tag(v___x_774_, 1);
lean_ctor_set(v___x_774_, 0, v___x_811_);
v___x_820_ = v___x_774_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v___x_811_);
v___x_820_ = v_reuseFailAlloc_852_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
lean_object* v___x_821_; 
v___x_821_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg(v_a_778_, v___x_820_, v___f_818_, v___x_815_, v___x_815_, v___y_804_, v___y_805_, v___y_806_, v___y_807_);
if (lean_obj_tag(v___x_821_) == 0)
{
lean_object* v_a_822_; lean_object* v_fst_823_; lean_object* v_snd_824_; lean_object* v___x_825_; 
v_a_822_ = lean_ctor_get(v___x_821_, 0);
lean_inc(v_a_822_);
lean_dec_ref(v___x_821_);
v_fst_823_ = lean_ctor_get(v_a_822_, 0);
lean_inc(v_fst_823_);
v_snd_824_ = lean_ctor_get(v_a_822_, 1);
lean_inc(v_snd_824_);
lean_dec(v_a_822_);
v___x_825_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_snd_824_, v_a_768_, v___y_804_, v___y_805_, v___y_806_, v___y_807_);
if (lean_obj_tag(v___x_825_) == 0)
{
lean_object* v_a_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v_a_826_ = lean_ctor_get(v___x_825_, 0);
lean_inc_n(v_a_826_, 2);
lean_dec_ref(v___x_825_);
v___x_827_ = l_Lean_mkAppN(v_a_826_, v___x_810_);
lean_dec_ref(v___x_810_);
lean_inc(v_fst_823_);
v___x_828_ = lean_array_mk(v_fst_823_);
v___x_829_ = l_Lean_mkAppN(v___x_827_, v___x_828_);
lean_dec_ref(v___x_828_);
v___x_830_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___redArg(v_mvarId_757_, v___x_829_, v___y_805_, v___y_807_);
lean_dec_ref(v___x_830_);
v___x_831_ = l_Lean_Expr_mvarId_x21(v_a_826_);
lean_dec(v_a_826_);
v___x_832_ = l_List_lengthTR___redArg(v_fst_823_);
lean_dec(v_fst_823_);
v___x_833_ = lean_nat_add(v___x_811_, v___x_832_);
lean_dec(v___x_832_);
v___x_834_ = lean_box(0);
v___x_835_ = l_Lean_Meta_introNCore(v___x_831_, v___x_833_, v___x_834_, v___x_815_, v___x_814_, v___y_804_, v___y_805_, v___y_806_, v___y_807_);
return v___x_835_;
}
else
{
lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_843_; 
lean_dec(v_fst_823_);
lean_dec_ref(v___x_810_);
lean_dec(v_mvarId_757_);
v_a_836_ = lean_ctor_get(v___x_825_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_843_ == 0)
{
v___x_838_ = v___x_825_;
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v___x_825_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_841_; 
if (v_isShared_839_ == 0)
{
v___x_841_ = v___x_838_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_a_836_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
}
else
{
lean_object* v_a_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_851_; 
lean_dec_ref(v___x_810_);
lean_dec(v_a_768_);
lean_dec(v_mvarId_757_);
v_a_844_ = lean_ctor_get(v___x_821_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_821_);
if (v_isSharedCheck_851_ == 0)
{
v___x_846_ = v___x_821_;
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_a_844_);
lean_dec(v___x_821_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_849_; 
if (v_isShared_847_ == 0)
{
v___x_849_ = v___x_846_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v_a_844_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
return v___x_849_;
}
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
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
lean_del_object(v___x_774_);
lean_dec(v_a_768_);
lean_dec_ref(v_args_759_);
lean_dec(v___x_758_);
lean_dec(v_mvarId_757_);
v_a_877_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_777_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_777_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
}
else
{
lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_893_; 
lean_dec(v_a_768_);
lean_dec_ref(v_args_759_);
lean_dec(v___x_758_);
lean_dec(v_mvarId_757_);
v_a_886_ = lean_ctor_get(v___x_769_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_893_ == 0)
{
v___x_888_ = v___x_769_;
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_dec(v___x_769_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_891_; 
if (v_isShared_889_ == 0)
{
v___x_891_ = v___x_888_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_a_886_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
else
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_901_; 
lean_dec_ref(v_args_759_);
lean_dec(v___x_758_);
lean_dec(v_mvarId_757_);
v_a_894_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_901_ == 0)
{
v___x_896_ = v___x_767_;
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_767_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_899_; 
if (v_isShared_897_ == 0)
{
v___x_899_ = v___x_896_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_a_894_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
}
else
{
lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
lean_dec_ref(v_args_759_);
lean_dec(v___x_758_);
lean_dec(v_mvarId_757_);
v_a_902_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___x_766_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_766_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_902_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___boxed(lean_object* v_mvarId_910_, lean_object* v___x_911_, lean_object* v_args_912_, lean_object* v_transparency_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
uint8_t v_transparency_boxed_919_; lean_object* v_res_920_; 
v_transparency_boxed_919_ = lean_unbox(v_transparency_913_);
v_res_920_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1(v_mvarId_910_, v___x_911_, v_args_912_, v_transparency_boxed_919_, v___y_914_, v___y_915_, v___y_916_, v___y_917_);
lean_dec(v___y_917_);
lean_dec_ref(v___y_916_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
return v_res_920_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__0(void){
_start:
{
lean_object* v___x_921_; 
v___x_921_ = lean_mk_string_unchecked("generalize", 10, 10);
return v___x_921_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__1(void){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_922_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__0, &l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__0_once, _init_l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__0);
v___x_923_ = l_Lean_Name_mkStr1(v___x_922_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore(lean_object* v_mvarId_924_, lean_object* v_args_925_, uint8_t v_transparency_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_){
_start:
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___f_934_; lean_object* v___x_935_; 
v___x_932_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__1, &l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__1_once, _init_l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__1);
v___x_933_ = lean_box(v_transparency_926_);
lean_inc(v_mvarId_924_);
v___f_934_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___boxed), 9, 4);
lean_closure_set(v___f_934_, 0, v_mvarId_924_);
lean_closure_set(v___f_934_, 1, v___x_932_);
lean_closure_set(v___f_934_, 2, v_args_925_);
lean_closure_set(v___f_934_, 3, v___x_933_);
v___x_935_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___redArg(v_mvarId_924_, v___f_934_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___boxed(lean_object* v_mvarId_936_, lean_object* v_args_937_, lean_object* v_transparency_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_){
_start:
{
uint8_t v_transparency_boxed_944_; lean_object* v_res_945_; 
v_transparency_boxed_944_ = lean_unbox(v_transparency_938_);
v_res_945_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore(v_mvarId_936_, v_args_937_, v_transparency_boxed_944_, v_a_939_, v_a_940_, v_a_941_, v_a_942_);
lean_dec(v_a_942_);
lean_dec_ref(v_a_941_);
lean_dec(v_a_940_);
lean_dec_ref(v_a_939_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1(lean_object* v_mvarId_946_, lean_object* v_val_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_){
_start:
{
lean_object* v___x_953_; 
v___x_953_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___redArg(v_mvarId_946_, v_val_947_, v___y_949_, v___y_951_);
return v___x_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___boxed(lean_object* v_mvarId_954_, lean_object* v_val_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_){
_start:
{
lean_object* v_res_961_; 
v_res_961_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1(v_mvarId_954_, v_val_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_);
lean_dec(v___y_959_);
lean_dec_ref(v___y_958_);
lean_dec(v___y_957_);
lean_dec_ref(v___y_956_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1(lean_object* v_00_u03b2_962_, lean_object* v_x_963_, lean_object* v_x_964_, lean_object* v_x_965_){
_start:
{
lean_object* v___x_966_; 
v___x_966_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1___redArg(v_x_963_, v_x_964_, v_x_965_);
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4(lean_object* v_00_u03b2_967_, lean_object* v_x_968_, size_t v_x_969_, size_t v_x_970_, lean_object* v_x_971_, lean_object* v_x_972_){
_start:
{
lean_object* v___x_973_; 
v___x_973_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg(v_x_968_, v_x_969_, v_x_970_, v_x_971_, v_x_972_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___boxed(lean_object* v_00_u03b2_974_, lean_object* v_x_975_, lean_object* v_x_976_, lean_object* v_x_977_, lean_object* v_x_978_, lean_object* v_x_979_){
_start:
{
size_t v_x_5623__boxed_980_; size_t v_x_5624__boxed_981_; lean_object* v_res_982_; 
v_x_5623__boxed_980_ = lean_unbox_usize(v_x_976_);
lean_dec(v_x_976_);
v_x_5624__boxed_981_ = lean_unbox_usize(v_x_977_);
lean_dec(v_x_977_);
v_res_982_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4(v_00_u03b2_974_, v_x_975_, v_x_5623__boxed_980_, v_x_5624__boxed_981_, v_x_978_, v_x_979_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6(lean_object* v_00_u03b2_983_, lean_object* v_n_984_, lean_object* v_k_985_, lean_object* v_v_986_){
_start:
{
lean_object* v___x_987_; 
v___x_987_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6___redArg(v_n_984_, v_k_985_, v_v_986_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7(lean_object* v_00_u03b2_988_, size_t v_depth_989_, lean_object* v_keys_990_, lean_object* v_vals_991_, lean_object* v_heq_992_, lean_object* v_i_993_, lean_object* v_entries_994_){
_start:
{
lean_object* v___x_995_; 
v___x_995_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___redArg(v_depth_989_, v_keys_990_, v_vals_991_, v_i_993_, v_entries_994_);
return v___x_995_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___boxed(lean_object* v_00_u03b2_996_, lean_object* v_depth_997_, lean_object* v_keys_998_, lean_object* v_vals_999_, lean_object* v_heq_1000_, lean_object* v_i_1001_, lean_object* v_entries_1002_){
_start:
{
size_t v_depth_boxed_1003_; lean_object* v_res_1004_; 
v_depth_boxed_1003_ = lean_unbox_usize(v_depth_997_);
lean_dec(v_depth_997_);
v_res_1004_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7(v_00_u03b2_996_, v_depth_boxed_1003_, v_keys_998_, v_vals_999_, v_heq_1000_, v_i_1001_, v_entries_1002_);
lean_dec_ref(v_vals_999_);
lean_dec_ref(v_keys_998_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6_spec__7(lean_object* v_00_u03b2_1005_, lean_object* v_x_1006_, lean_object* v_x_1007_, lean_object* v_x_1008_, lean_object* v_x_1009_){
_start:
{
lean_object* v___x_1010_; 
v___x_1010_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6_spec__7___redArg(v_x_1006_, v_x_1007_, v_x_1008_, v_x_1009_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_generalize(lean_object* v_mvarId_1011_, lean_object* v_args_1012_, uint8_t v_transparency_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_){
_start:
{
lean_object* v___x_1019_; 
v___x_1019_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore(v_mvarId_1011_, v_args_1012_, v_transparency_1013_, v_a_1014_, v_a_1015_, v_a_1016_, v_a_1017_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_generalize___boxed(lean_object* v_mvarId_1020_, lean_object* v_args_1021_, lean_object* v_transparency_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_){
_start:
{
uint8_t v_transparency_boxed_1028_; lean_object* v_res_1029_; 
v_transparency_boxed_1028_ = lean_unbox(v_transparency_1022_);
v_res_1029_ = l_Lean_MVarId_generalize(v_mvarId_1020_, v_args_1021_, v_transparency_boxed_1028_, v_a_1023_, v_a_1024_, v_a_1025_, v_a_1026_);
lean_dec(v_a_1026_);
lean_dec_ref(v_a_1025_);
lean_dec(v_a_1024_);
lean_dec_ref(v_a_1023_);
return v_res_1029_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MVarId_generalizeHyp_spec__1(uint8_t v_transparency_1030_, lean_object* v_a_1031_, lean_object* v_as_1032_, size_t v_i_1033_, size_t v_stop_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_){
_start:
{
uint8_t v___x_1040_; 
v___x_1040_ = lean_usize_dec_eq(v_i_1033_, v_stop_1034_);
if (v___x_1040_ == 0)
{
lean_object* v___x_1041_; lean_object* v_expr_1042_; lean_object* v___x_1043_; uint8_t v_foApprox_1044_; uint8_t v_ctxApprox_1045_; uint8_t v_quasiPatternApprox_1046_; uint8_t v_constApprox_1047_; uint8_t v_isDefEqStuckEx_1048_; uint8_t v_unificationHints_1049_; uint8_t v_proofIrrelevance_1050_; uint8_t v_assignSyntheticOpaque_1051_; uint8_t v_offsetCnstrs_1052_; uint8_t v_etaStruct_1053_; uint8_t v_univApprox_1054_; uint8_t v_iota_1055_; uint8_t v_beta_1056_; uint8_t v_proj_1057_; uint8_t v_zeta_1058_; uint8_t v_zetaDelta_1059_; uint8_t v_zetaUnused_1060_; uint8_t v_zetaHave_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1109_; 
v___x_1041_ = lean_array_uget_borrowed(v_as_1032_, v_i_1033_);
v_expr_1042_ = lean_ctor_get(v___x_1041_, 0);
v___x_1043_ = l_Lean_Meta_Context_config(v___y_1035_);
v_foApprox_1044_ = lean_ctor_get_uint8(v___x_1043_, 0);
v_ctxApprox_1045_ = lean_ctor_get_uint8(v___x_1043_, 1);
v_quasiPatternApprox_1046_ = lean_ctor_get_uint8(v___x_1043_, 2);
v_constApprox_1047_ = lean_ctor_get_uint8(v___x_1043_, 3);
v_isDefEqStuckEx_1048_ = lean_ctor_get_uint8(v___x_1043_, 4);
v_unificationHints_1049_ = lean_ctor_get_uint8(v___x_1043_, 5);
v_proofIrrelevance_1050_ = lean_ctor_get_uint8(v___x_1043_, 6);
v_assignSyntheticOpaque_1051_ = lean_ctor_get_uint8(v___x_1043_, 7);
v_offsetCnstrs_1052_ = lean_ctor_get_uint8(v___x_1043_, 8);
v_etaStruct_1053_ = lean_ctor_get_uint8(v___x_1043_, 10);
v_univApprox_1054_ = lean_ctor_get_uint8(v___x_1043_, 11);
v_iota_1055_ = lean_ctor_get_uint8(v___x_1043_, 12);
v_beta_1056_ = lean_ctor_get_uint8(v___x_1043_, 13);
v_proj_1057_ = lean_ctor_get_uint8(v___x_1043_, 14);
v_zeta_1058_ = lean_ctor_get_uint8(v___x_1043_, 15);
v_zetaDelta_1059_ = lean_ctor_get_uint8(v___x_1043_, 16);
v_zetaUnused_1060_ = lean_ctor_get_uint8(v___x_1043_, 17);
v_zetaHave_1061_ = lean_ctor_get_uint8(v___x_1043_, 18);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1043_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1063_ = v___x_1043_;
v_isShared_1064_ = v_isSharedCheck_1109_;
goto v_resetjp_1062_;
}
else
{
lean_dec(v___x_1043_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1109_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
uint8_t v_trackZetaDelta_1065_; lean_object* v_zetaDeltaSet_1066_; lean_object* v_lctx_1067_; lean_object* v_localInstances_1068_; lean_object* v_defEqCtx_x3f_1069_; lean_object* v_synthPendingDepth_1070_; lean_object* v_canUnfold_x3f_1071_; uint8_t v_univApprox_1072_; uint8_t v_inTypeClassResolution_1073_; uint8_t v_cacheInferType_1074_; lean_object* v_config_1076_; 
v_trackZetaDelta_1065_ = lean_ctor_get_uint8(v___y_1035_, sizeof(void*)*7);
v_zetaDeltaSet_1066_ = lean_ctor_get(v___y_1035_, 1);
v_lctx_1067_ = lean_ctor_get(v___y_1035_, 2);
v_localInstances_1068_ = lean_ctor_get(v___y_1035_, 3);
v_defEqCtx_x3f_1069_ = lean_ctor_get(v___y_1035_, 4);
v_synthPendingDepth_1070_ = lean_ctor_get(v___y_1035_, 5);
v_canUnfold_x3f_1071_ = lean_ctor_get(v___y_1035_, 6);
v_univApprox_1072_ = lean_ctor_get_uint8(v___y_1035_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1073_ = lean_ctor_get_uint8(v___y_1035_, sizeof(void*)*7 + 2);
v_cacheInferType_1074_ = lean_ctor_get_uint8(v___y_1035_, sizeof(void*)*7 + 3);
if (v_isShared_1064_ == 0)
{
v_config_1076_ = v___x_1063_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 0, v_foApprox_1044_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 1, v_ctxApprox_1045_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 2, v_quasiPatternApprox_1046_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 3, v_constApprox_1047_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 4, v_isDefEqStuckEx_1048_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 5, v_unificationHints_1049_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 6, v_proofIrrelevance_1050_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 7, v_assignSyntheticOpaque_1051_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 8, v_offsetCnstrs_1052_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 10, v_etaStruct_1053_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 11, v_univApprox_1054_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 12, v_iota_1055_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 13, v_beta_1056_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 14, v_proj_1057_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 15, v_zeta_1058_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 16, v_zetaDelta_1059_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 17, v_zetaUnused_1060_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, 18, v_zetaHave_1061_);
v_config_1076_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
uint64_t v___x_1077_; uint64_t v___x_1078_; uint64_t v___x_1079_; lean_object* v___x_1080_; uint64_t v___x_1081_; uint64_t v___x_1082_; uint64_t v_key_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
lean_ctor_set_uint8(v_config_1076_, 9, v_transparency_1030_);
v___x_1077_ = l_Lean_Meta_Context_configKey(v___y_1035_);
v___x_1078_ = 2ULL;
v___x_1079_ = lean_uint64_shift_right(v___x_1077_, v___x_1078_);
v___x_1080_ = lean_box(0);
v___x_1081_ = lean_uint64_shift_left(v___x_1079_, v___x_1078_);
v___x_1082_ = l_Lean_Meta_TransparencyMode_toUInt64(v_transparency_1030_);
v_key_1083_ = lean_uint64_lor(v___x_1081_, v___x_1082_);
v___x_1084_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1084_, 0, v_config_1076_);
lean_ctor_set_uint64(v___x_1084_, sizeof(void*)*1, v_key_1083_);
lean_inc(v_canUnfold_x3f_1071_);
lean_inc(v_synthPendingDepth_1070_);
lean_inc(v_defEqCtx_x3f_1069_);
lean_inc_ref(v_localInstances_1068_);
lean_inc_ref(v_lctx_1067_);
lean_inc(v_zetaDeltaSet_1066_);
v___x_1085_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1085_, 0, v___x_1084_);
lean_ctor_set(v___x_1085_, 1, v_zetaDeltaSet_1066_);
lean_ctor_set(v___x_1085_, 2, v_lctx_1067_);
lean_ctor_set(v___x_1085_, 3, v_localInstances_1068_);
lean_ctor_set(v___x_1085_, 4, v_defEqCtx_x3f_1069_);
lean_ctor_set(v___x_1085_, 5, v_synthPendingDepth_1070_);
lean_ctor_set(v___x_1085_, 6, v_canUnfold_x3f_1071_);
lean_ctor_set_uint8(v___x_1085_, sizeof(void*)*7, v_trackZetaDelta_1065_);
lean_ctor_set_uint8(v___x_1085_, sizeof(void*)*7 + 1, v_univApprox_1072_);
lean_ctor_set_uint8(v___x_1085_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1073_);
lean_ctor_set_uint8(v___x_1085_, sizeof(void*)*7 + 3, v_cacheInferType_1074_);
lean_inc_ref(v_expr_1042_);
lean_inc_ref(v_a_1031_);
v___x_1086_ = l_Lean_Meta_kabstract(v_a_1031_, v_expr_1042_, v___x_1080_, v___x_1085_, v___y_1036_, v___y_1037_, v___y_1038_);
lean_dec_ref(v___x_1085_);
if (lean_obj_tag(v___x_1086_) == 0)
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1099_; 
v_a_1087_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1089_ = v___x_1086_;
v_isShared_1090_ = v_isSharedCheck_1099_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___x_1086_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1099_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
uint8_t v___x_1091_; 
v___x_1091_ = l_Lean_Expr_hasLooseBVars(v_a_1087_);
lean_dec(v_a_1087_);
if (v___x_1091_ == 0)
{
size_t v___x_1092_; size_t v___x_1093_; 
lean_del_object(v___x_1089_);
v___x_1092_ = ((size_t)1ULL);
v___x_1093_ = lean_usize_add(v_i_1033_, v___x_1092_);
v_i_1033_ = v___x_1093_;
goto _start;
}
else
{
lean_object* v___x_1095_; lean_object* v___x_1097_; 
lean_dec_ref(v_a_1031_);
v___x_1095_ = lean_box(v___x_1091_);
if (v_isShared_1090_ == 0)
{
lean_ctor_set(v___x_1089_, 0, v___x_1095_);
v___x_1097_ = v___x_1089_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v___x_1095_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
return v___x_1097_;
}
}
}
}
else
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1107_; 
lean_dec_ref(v_a_1031_);
v_a_1100_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1102_ = v___x_1086_;
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1086_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1103_ == 0)
{
v___x_1105_ = v___x_1102_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_a_1100_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
}
}
}
else
{
uint8_t v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
lean_dec_ref(v_a_1031_);
v___x_1110_ = 0;
v___x_1111_ = lean_box(v___x_1110_);
v___x_1112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
return v___x_1112_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MVarId_generalizeHyp_spec__1___boxed(lean_object* v_transparency_1113_, lean_object* v_a_1114_, lean_object* v_as_1115_, lean_object* v_i_1116_, lean_object* v_stop_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_){
_start:
{
uint8_t v_transparency_boxed_1123_; size_t v_i_boxed_1124_; size_t v_stop_boxed_1125_; lean_object* v_res_1126_; 
v_transparency_boxed_1123_ = lean_unbox(v_transparency_1113_);
v_i_boxed_1124_ = lean_unbox_usize(v_i_1116_);
lean_dec(v_i_1116_);
v_stop_boxed_1125_ = lean_unbox_usize(v_stop_1117_);
lean_dec(v_stop_1117_);
v_res_1126_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MVarId_generalizeHyp_spec__1(v_transparency_boxed_1123_, v_a_1114_, v_as_1115_, v_i_boxed_1124_, v_stop_boxed_1125_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
lean_dec(v___y_1121_);
lean_dec_ref(v___y_1120_);
lean_dec(v___y_1119_);
lean_dec_ref(v___y_1118_);
lean_dec_ref(v_as_1115_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3_spec__3(lean_object* v_a_1127_, lean_object* v___x_1128_, uint8_t v_transparency_1129_, lean_object* v_as_1130_, size_t v_i_1131_, size_t v_stop_1132_, lean_object* v_b_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_){
_start:
{
lean_object* v_a_1140_; uint8_t v___x_1144_; 
v___x_1144_ = lean_usize_dec_eq(v_i_1131_, v_stop_1132_);
if (v___x_1144_ == 0)
{
lean_object* v___x_1145_; uint8_t v_a_1147_; lean_object* v___x_1149_; 
v___x_1145_ = lean_array_uget_borrowed(v_as_1130_, v_i_1131_);
lean_inc(v___x_1145_);
v___x_1149_ = l_Lean_FVarId_getType___redArg(v___x_1145_, v___y_1134_, v___y_1136_, v___y_1137_);
if (lean_obj_tag(v___x_1149_) == 0)
{
lean_object* v_a_1150_; lean_object* v___x_1151_; 
v_a_1150_ = lean_ctor_get(v___x_1149_, 0);
lean_inc(v_a_1150_);
lean_dec_ref(v___x_1149_);
v___x_1151_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_a_1150_, v___y_1135_, v___y_1137_);
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1152_; lean_object* v___x_1153_; uint8_t v___x_1154_; lean_object* v___x_1155_; uint8_t v___x_1156_; 
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
lean_inc(v_a_1152_);
lean_dec_ref(v___x_1151_);
v___x_1153_ = lean_unsigned_to_nat(0u);
v___x_1154_ = lean_nat_dec_eq(v___x_1128_, v___x_1153_);
v___x_1155_ = lean_array_get_size(v_a_1127_);
v___x_1156_ = lean_nat_dec_lt(v___x_1153_, v___x_1155_);
if (v___x_1156_ == 0)
{
lean_dec(v_a_1152_);
v_a_1147_ = v___x_1154_;
goto v___jp_1146_;
}
else
{
if (v___x_1156_ == 0)
{
lean_dec(v_a_1152_);
v_a_1147_ = v___x_1154_;
goto v___jp_1146_;
}
else
{
size_t v___x_1157_; size_t v___x_1158_; lean_object* v___x_1159_; 
v___x_1157_ = ((size_t)0ULL);
v___x_1158_ = lean_usize_of_nat(v___x_1155_);
v___x_1159_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MVarId_generalizeHyp_spec__1(v_transparency_1129_, v_a_1152_, v_a_1127_, v___x_1157_, v___x_1158_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
if (lean_obj_tag(v___x_1159_) == 0)
{
lean_object* v_a_1160_; uint8_t v___x_1161_; 
v_a_1160_ = lean_ctor_get(v___x_1159_, 0);
lean_inc(v_a_1160_);
lean_dec_ref(v___x_1159_);
v___x_1161_ = lean_unbox(v_a_1160_);
lean_dec(v_a_1160_);
v_a_1147_ = v___x_1161_;
goto v___jp_1146_;
}
else
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1169_; 
lean_dec_ref(v_b_1133_);
v_a_1162_ = lean_ctor_get(v___x_1159_, 0);
v_isSharedCheck_1169_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1164_ = v___x_1159_;
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v___x_1159_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1167_; 
if (v_isShared_1165_ == 0)
{
v___x_1167_ = v___x_1164_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_a_1162_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
return v___x_1167_;
}
}
}
}
}
}
else
{
lean_object* v_a_1170_; lean_object* v___x_1172_; uint8_t v_isShared_1173_; uint8_t v_isSharedCheck_1177_; 
lean_dec_ref(v_b_1133_);
v_a_1170_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1177_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1177_ == 0)
{
v___x_1172_ = v___x_1151_;
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
else
{
lean_inc(v_a_1170_);
lean_dec(v___x_1151_);
v___x_1172_ = lean_box(0);
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
v_resetjp_1171_:
{
lean_object* v___x_1175_; 
if (v_isShared_1173_ == 0)
{
v___x_1175_ = v___x_1172_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v_a_1170_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
return v___x_1175_;
}
}
}
}
else
{
lean_object* v_a_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1185_; 
lean_dec_ref(v_b_1133_);
v_a_1178_ = lean_ctor_get(v___x_1149_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1149_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1180_ = v___x_1149_;
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_a_1178_);
lean_dec(v___x_1149_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1183_; 
if (v_isShared_1181_ == 0)
{
v___x_1183_ = v___x_1180_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_a_1178_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
v___jp_1146_:
{
if (v_a_1147_ == 0)
{
v_a_1140_ = v_b_1133_;
goto v___jp_1139_;
}
else
{
lean_object* v___x_1148_; 
lean_inc(v___x_1145_);
v___x_1148_ = lean_array_push(v_b_1133_, v___x_1145_);
v_a_1140_ = v___x_1148_;
goto v___jp_1139_;
}
}
}
else
{
lean_object* v___x_1186_; 
v___x_1186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1186_, 0, v_b_1133_);
return v___x_1186_;
}
v___jp_1139_:
{
size_t v___x_1141_; size_t v___x_1142_; 
v___x_1141_ = ((size_t)1ULL);
v___x_1142_ = lean_usize_add(v_i_1131_, v___x_1141_);
v_i_1131_ = v___x_1142_;
v_b_1133_ = v_a_1140_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3_spec__3___boxed(lean_object* v_a_1187_, lean_object* v___x_1188_, lean_object* v_transparency_1189_, lean_object* v_as_1190_, lean_object* v_i_1191_, lean_object* v_stop_1192_, lean_object* v_b_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
uint8_t v_transparency_boxed_1199_; size_t v_i_boxed_1200_; size_t v_stop_boxed_1201_; lean_object* v_res_1202_; 
v_transparency_boxed_1199_ = lean_unbox(v_transparency_1189_);
v_i_boxed_1200_ = lean_unbox_usize(v_i_1191_);
lean_dec(v_i_1191_);
v_stop_boxed_1201_ = lean_unbox_usize(v_stop_1192_);
lean_dec(v_stop_1192_);
v_res_1202_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3_spec__3(v_a_1187_, v___x_1188_, v_transparency_boxed_1199_, v_as_1190_, v_i_boxed_1200_, v_stop_boxed_1201_, v_b_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
lean_dec(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec(v___y_1195_);
lean_dec_ref(v___y_1194_);
lean_dec_ref(v_as_1190_);
lean_dec(v___x_1188_);
lean_dec_ref(v_a_1187_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3(uint8_t v_transparency_1203_, lean_object* v_a_1204_, lean_object* v___x_1205_, lean_object* v_as_1206_, size_t v_i_1207_, size_t v_stop_1208_, lean_object* v_b_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_){
_start:
{
lean_object* v_a_1216_; uint8_t v___x_1220_; 
v___x_1220_ = lean_usize_dec_eq(v_i_1207_, v_stop_1208_);
if (v___x_1220_ == 0)
{
lean_object* v___x_1221_; uint8_t v_a_1223_; lean_object* v___x_1225_; 
v___x_1221_ = lean_array_uget_borrowed(v_as_1206_, v_i_1207_);
lean_inc(v___x_1221_);
v___x_1225_ = l_Lean_FVarId_getType___redArg(v___x_1221_, v___y_1210_, v___y_1212_, v___y_1213_);
if (lean_obj_tag(v___x_1225_) == 0)
{
lean_object* v_a_1226_; lean_object* v___x_1227_; 
v_a_1226_ = lean_ctor_get(v___x_1225_, 0);
lean_inc(v_a_1226_);
lean_dec_ref(v___x_1225_);
v___x_1227_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_a_1226_, v___y_1211_, v___y_1213_);
if (lean_obj_tag(v___x_1227_) == 0)
{
lean_object* v_a_1228_; lean_object* v___x_1229_; uint8_t v___x_1230_; lean_object* v___x_1231_; uint8_t v___x_1232_; 
v_a_1228_ = lean_ctor_get(v___x_1227_, 0);
lean_inc(v_a_1228_);
lean_dec_ref(v___x_1227_);
v___x_1229_ = lean_unsigned_to_nat(0u);
v___x_1230_ = lean_nat_dec_eq(v___x_1205_, v___x_1229_);
v___x_1231_ = lean_array_get_size(v_a_1204_);
v___x_1232_ = lean_nat_dec_lt(v___x_1229_, v___x_1231_);
if (v___x_1232_ == 0)
{
lean_dec(v_a_1228_);
v_a_1223_ = v___x_1230_;
goto v___jp_1222_;
}
else
{
if (v___x_1232_ == 0)
{
lean_dec(v_a_1228_);
v_a_1223_ = v___x_1230_;
goto v___jp_1222_;
}
else
{
size_t v___x_1233_; size_t v___x_1234_; lean_object* v___x_1235_; 
v___x_1233_ = ((size_t)0ULL);
v___x_1234_ = lean_usize_of_nat(v___x_1231_);
v___x_1235_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MVarId_generalizeHyp_spec__1(v_transparency_1203_, v_a_1228_, v_a_1204_, v___x_1233_, v___x_1234_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_);
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1236_; uint8_t v___x_1237_; 
v_a_1236_ = lean_ctor_get(v___x_1235_, 0);
lean_inc(v_a_1236_);
lean_dec_ref(v___x_1235_);
v___x_1237_ = lean_unbox(v_a_1236_);
lean_dec(v_a_1236_);
v_a_1223_ = v___x_1237_;
goto v___jp_1222_;
}
else
{
lean_object* v_a_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1245_; 
lean_dec_ref(v_b_1209_);
v_a_1238_ = lean_ctor_get(v___x_1235_, 0);
v_isSharedCheck_1245_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1245_ == 0)
{
v___x_1240_ = v___x_1235_;
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_a_1238_);
lean_dec(v___x_1235_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1243_; 
if (v_isShared_1241_ == 0)
{
v___x_1243_ = v___x_1240_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v_a_1238_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
return v___x_1243_;
}
}
}
}
}
}
else
{
lean_object* v_a_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1253_; 
lean_dec_ref(v_b_1209_);
v_a_1246_ = lean_ctor_get(v___x_1227_, 0);
v_isSharedCheck_1253_ = !lean_is_exclusive(v___x_1227_);
if (v_isSharedCheck_1253_ == 0)
{
v___x_1248_ = v___x_1227_;
v_isShared_1249_ = v_isSharedCheck_1253_;
goto v_resetjp_1247_;
}
else
{
lean_inc(v_a_1246_);
lean_dec(v___x_1227_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1253_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
lean_object* v___x_1251_; 
if (v_isShared_1249_ == 0)
{
v___x_1251_ = v___x_1248_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_a_1246_);
v___x_1251_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
return v___x_1251_;
}
}
}
}
else
{
lean_object* v_a_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1261_; 
lean_dec_ref(v_b_1209_);
v_a_1254_ = lean_ctor_get(v___x_1225_, 0);
v_isSharedCheck_1261_ = !lean_is_exclusive(v___x_1225_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1256_ = v___x_1225_;
v_isShared_1257_ = v_isSharedCheck_1261_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_a_1254_);
lean_dec(v___x_1225_);
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
v___jp_1222_:
{
if (v_a_1223_ == 0)
{
v_a_1216_ = v_b_1209_;
goto v___jp_1215_;
}
else
{
lean_object* v___x_1224_; 
lean_inc(v___x_1221_);
v___x_1224_ = lean_array_push(v_b_1209_, v___x_1221_);
v_a_1216_ = v___x_1224_;
goto v___jp_1215_;
}
}
}
else
{
lean_object* v___x_1262_; 
v___x_1262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1262_, 0, v_b_1209_);
return v___x_1262_;
}
v___jp_1215_:
{
size_t v___x_1217_; size_t v___x_1218_; lean_object* v___x_1219_; 
v___x_1217_ = ((size_t)1ULL);
v___x_1218_ = lean_usize_add(v_i_1207_, v___x_1217_);
v___x_1219_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3_spec__3(v_a_1204_, v___x_1205_, v_transparency_1203_, v_as_1206_, v___x_1218_, v_stop_1208_, v_a_1216_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_);
return v___x_1219_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3___boxed(lean_object* v_transparency_1263_, lean_object* v_a_1264_, lean_object* v___x_1265_, lean_object* v_as_1266_, lean_object* v_i_1267_, lean_object* v_stop_1268_, lean_object* v_b_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_){
_start:
{
uint8_t v_transparency_boxed_1275_; size_t v_i_boxed_1276_; size_t v_stop_boxed_1277_; lean_object* v_res_1278_; 
v_transparency_boxed_1275_ = lean_unbox(v_transparency_1263_);
v_i_boxed_1276_ = lean_unbox_usize(v_i_1267_);
lean_dec(v_i_1267_);
v_stop_boxed_1277_ = lean_unbox_usize(v_stop_1268_);
lean_dec(v_stop_1268_);
v_res_1278_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3(v_transparency_boxed_1275_, v_a_1264_, v___x_1265_, v_as_1266_, v_i_boxed_1276_, v_stop_boxed_1277_, v_b_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_);
lean_dec(v___y_1273_);
lean_dec_ref(v___y_1272_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec_ref(v_as_1266_);
lean_dec(v___x_1265_);
lean_dec_ref(v_a_1264_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_generalizeHyp_spec__2(lean_object* v_as_1279_, size_t v_sz_1280_, size_t v_i_1281_, lean_object* v_b_1282_){
_start:
{
uint8_t v___x_1283_; 
v___x_1283_ = lean_usize_dec_lt(v_i_1281_, v_sz_1280_);
if (v___x_1283_ == 0)
{
return v_b_1282_;
}
else
{
lean_object* v_snd_1284_; lean_object* v_fst_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1318_; 
v_snd_1284_ = lean_ctor_get(v_b_1282_, 1);
v_fst_1285_ = lean_ctor_get(v_b_1282_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v_b_1282_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1287_ = v_b_1282_;
v_isShared_1288_ = v_isSharedCheck_1318_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_snd_1284_);
lean_inc(v_fst_1285_);
lean_dec(v_b_1282_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1318_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v_array_1289_; lean_object* v_start_1290_; lean_object* v_stop_1291_; uint8_t v___x_1292_; 
v_array_1289_ = lean_ctor_get(v_snd_1284_, 0);
v_start_1290_ = lean_ctor_get(v_snd_1284_, 1);
v_stop_1291_ = lean_ctor_get(v_snd_1284_, 2);
v___x_1292_ = lean_nat_dec_lt(v_start_1290_, v_stop_1291_);
if (v___x_1292_ == 0)
{
lean_object* v___x_1294_; 
if (v_isShared_1288_ == 0)
{
v___x_1294_ = v___x_1287_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v_fst_1285_);
lean_ctor_set(v_reuseFailAlloc_1295_, 1, v_snd_1284_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
else
{
lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1314_; 
lean_inc(v_stop_1291_);
lean_inc(v_start_1290_);
lean_inc_ref(v_array_1289_);
v_isSharedCheck_1314_ = !lean_is_exclusive(v_snd_1284_);
if (v_isSharedCheck_1314_ == 0)
{
lean_object* v_unused_1315_; lean_object* v_unused_1316_; lean_object* v_unused_1317_; 
v_unused_1315_ = lean_ctor_get(v_snd_1284_, 2);
lean_dec(v_unused_1315_);
v_unused_1316_ = lean_ctor_get(v_snd_1284_, 1);
lean_dec(v_unused_1316_);
v_unused_1317_ = lean_ctor_get(v_snd_1284_, 0);
lean_dec(v_unused_1317_);
v___x_1297_ = v_snd_1284_;
v_isShared_1298_ = v_isSharedCheck_1314_;
goto v_resetjp_1296_;
}
else
{
lean_dec(v_snd_1284_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1314_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v_a_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1304_; 
v_a_1299_ = lean_array_uget_borrowed(v_as_1279_, v_i_1281_);
v___x_1300_ = lean_array_fget(v_array_1289_, v_start_1290_);
v___x_1301_ = lean_unsigned_to_nat(1u);
v___x_1302_ = lean_nat_add(v_start_1290_, v___x_1301_);
lean_dec(v_start_1290_);
if (v_isShared_1298_ == 0)
{
lean_ctor_set(v___x_1297_, 1, v___x_1302_);
v___x_1304_ = v___x_1297_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v_array_1289_);
lean_ctor_set(v_reuseFailAlloc_1313_, 1, v___x_1302_);
lean_ctor_set(v_reuseFailAlloc_1313_, 2, v_stop_1291_);
v___x_1304_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1308_; 
v___x_1305_ = l_Lean_mkFVar(v___x_1300_);
lean_inc(v_a_1299_);
v___x_1306_ = l_Lean_Meta_FVarSubst_insert(v_fst_1285_, v_a_1299_, v___x_1305_);
if (v_isShared_1288_ == 0)
{
lean_ctor_set(v___x_1287_, 1, v___x_1304_);
lean_ctor_set(v___x_1287_, 0, v___x_1306_);
v___x_1308_ = v___x_1287_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v___x_1306_);
lean_ctor_set(v_reuseFailAlloc_1312_, 1, v___x_1304_);
v___x_1308_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
size_t v___x_1309_; size_t v___x_1310_; 
v___x_1309_ = ((size_t)1ULL);
v___x_1310_ = lean_usize_add(v_i_1281_, v___x_1309_);
v_i_1281_ = v___x_1310_;
v_b_1282_ = v___x_1308_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_generalizeHyp_spec__2___boxed(lean_object* v_as_1319_, lean_object* v_sz_1320_, lean_object* v_i_1321_, lean_object* v_b_1322_){
_start:
{
size_t v_sz_boxed_1323_; size_t v_i_boxed_1324_; lean_object* v_res_1325_; 
v_sz_boxed_1323_ = lean_unbox_usize(v_sz_1320_);
lean_dec(v_sz_1320_);
v_i_boxed_1324_ = lean_unbox_usize(v_i_1321_);
lean_dec(v_i_1321_);
v_res_1325_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_generalizeHyp_spec__2(v_as_1319_, v_sz_boxed_1323_, v_i_boxed_1324_, v_b_1322_);
lean_dec_ref(v_as_1319_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___redArg(size_t v_sz_1326_, size_t v_i_1327_, lean_object* v_bs_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_){
_start:
{
uint8_t v___x_1332_; 
v___x_1332_ = lean_usize_dec_lt(v_i_1327_, v_sz_1326_);
if (v___x_1332_ == 0)
{
lean_object* v___x_1333_; 
v___x_1333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1333_, 0, v_bs_1328_);
return v___x_1333_;
}
else
{
lean_object* v_v_1334_; lean_object* v_expr_1335_; lean_object* v_xName_x3f_1336_; lean_object* v_hName_x3f_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1360_; 
v_v_1334_ = lean_array_uget(v_bs_1328_, v_i_1327_);
v_expr_1335_ = lean_ctor_get(v_v_1334_, 0);
v_xName_x3f_1336_ = lean_ctor_get(v_v_1334_, 1);
v_hName_x3f_1337_ = lean_ctor_get(v_v_1334_, 2);
v_isSharedCheck_1360_ = !lean_is_exclusive(v_v_1334_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1339_ = v_v_1334_;
v_isShared_1340_ = v_isSharedCheck_1360_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_hName_x3f_1337_);
lean_inc(v_xName_x3f_1336_);
lean_inc(v_expr_1335_);
lean_dec(v_v_1334_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1360_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1341_; 
v___x_1341_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_expr_1335_, v___y_1329_, v___y_1330_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v_a_1342_; lean_object* v___x_1343_; lean_object* v_bs_x27_1344_; lean_object* v___x_1346_; 
v_a_1342_ = lean_ctor_get(v___x_1341_, 0);
lean_inc(v_a_1342_);
lean_dec_ref(v___x_1341_);
v___x_1343_ = lean_unsigned_to_nat(0u);
v_bs_x27_1344_ = lean_array_uset(v_bs_1328_, v_i_1327_, v___x_1343_);
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 0, v_a_1342_);
v___x_1346_ = v___x_1339_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_a_1342_);
lean_ctor_set(v_reuseFailAlloc_1351_, 1, v_xName_x3f_1336_);
lean_ctor_set(v_reuseFailAlloc_1351_, 2, v_hName_x3f_1337_);
v___x_1346_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
size_t v___x_1347_; size_t v___x_1348_; lean_object* v___x_1349_; 
v___x_1347_ = ((size_t)1ULL);
v___x_1348_ = lean_usize_add(v_i_1327_, v___x_1347_);
v___x_1349_ = lean_array_uset(v_bs_x27_1344_, v_i_1327_, v___x_1346_);
v_i_1327_ = v___x_1348_;
v_bs_1328_ = v___x_1349_;
goto _start;
}
}
else
{
lean_object* v_a_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1359_; 
lean_del_object(v___x_1339_);
lean_dec(v_hName_x3f_1337_);
lean_dec(v_xName_x3f_1336_);
lean_dec_ref(v_bs_1328_);
v_a_1352_ = lean_ctor_get(v___x_1341_, 0);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1354_ = v___x_1341_;
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_a_1352_);
lean_dec(v___x_1341_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___redArg___boxed(lean_object* v_sz_1361_, lean_object* v_i_1362_, lean_object* v_bs_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
size_t v_sz_boxed_1367_; size_t v_i_boxed_1368_; lean_object* v_res_1369_; 
v_sz_boxed_1367_ = lean_unbox_usize(v_sz_1361_);
lean_dec(v_sz_1361_);
v_i_boxed_1368_ = lean_unbox_usize(v_i_1362_);
lean_dec(v_i_1362_);
v_res_1369_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___redArg(v_sz_boxed_1367_, v_i_boxed_1368_, v_bs_1363_, v___y_1364_, v___y_1365_);
lean_dec(v___y_1365_);
lean_dec(v___y_1364_);
return v_res_1369_;
}
}
static lean_object* _init_l_Lean_MVarId_generalizeHyp___closed__0(void){
_start:
{
lean_object* v___x_1370_; lean_object* v___x_1371_; 
v___x_1370_ = lean_unsigned_to_nat(0u);
v___x_1371_ = lean_mk_empty_array_with_capacity(v___x_1370_);
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_generalizeHyp(lean_object* v_mvarId_1372_, lean_object* v_args_1373_, lean_object* v_hyps_1374_, lean_object* v_fvarSubst_1375_, uint8_t v_transparency_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_){
_start:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; uint8_t v___x_1384_; 
v___x_1382_ = lean_array_get_size(v_hyps_1374_);
v___x_1383_ = lean_unsigned_to_nat(0u);
v___x_1384_ = lean_nat_dec_eq(v___x_1382_, v___x_1383_);
if (v___x_1384_ == 0)
{
size_t v_sz_1385_; size_t v___x_1386_; lean_object* v___x_1387_; 
v_sz_1385_ = lean_array_size(v_args_1373_);
v___x_1386_ = ((size_t)0ULL);
v___x_1387_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___redArg(v_sz_1385_, v___x_1386_, v_args_1373_, v_a_1378_, v_a_1380_);
if (lean_obj_tag(v___x_1387_) == 0)
{
lean_object* v_a_1388_; uint8_t v___x_1389_; lean_object* v_a_1391_; lean_object* v___y_1465_; lean_object* v___x_1475_; uint8_t v___x_1476_; 
v_a_1388_ = lean_ctor_get(v___x_1387_, 0);
lean_inc(v_a_1388_);
lean_dec_ref(v___x_1387_);
v___x_1389_ = 1;
v___x_1475_ = lean_obj_once(&l_Lean_MVarId_generalizeHyp___closed__0, &l_Lean_MVarId_generalizeHyp___closed__0_once, _init_l_Lean_MVarId_generalizeHyp___closed__0);
v___x_1476_ = lean_nat_dec_lt(v___x_1383_, v___x_1382_);
if (v___x_1476_ == 0)
{
v_a_1391_ = v___x_1475_;
goto v___jp_1390_;
}
else
{
uint8_t v___x_1477_; 
v___x_1477_ = lean_nat_dec_le(v___x_1382_, v___x_1382_);
if (v___x_1477_ == 0)
{
if (v___x_1476_ == 0)
{
v_a_1391_ = v___x_1475_;
goto v___jp_1390_;
}
else
{
size_t v___x_1478_; lean_object* v___x_1479_; 
v___x_1478_ = lean_usize_of_nat(v___x_1382_);
v___x_1479_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3(v_transparency_1376_, v_a_1388_, v___x_1382_, v_hyps_1374_, v___x_1386_, v___x_1478_, v___x_1475_, v_a_1377_, v_a_1378_, v_a_1379_, v_a_1380_);
v___y_1465_ = v___x_1479_;
goto v___jp_1464_;
}
}
else
{
size_t v___x_1480_; lean_object* v___x_1481_; 
v___x_1480_ = lean_usize_of_nat(v___x_1382_);
v___x_1481_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3(v_transparency_1376_, v_a_1388_, v___x_1382_, v_hyps_1374_, v___x_1386_, v___x_1480_, v___x_1475_, v_a_1377_, v_a_1378_, v_a_1379_, v_a_1380_);
v___y_1465_ = v___x_1481_;
goto v___jp_1464_;
}
}
v___jp_1390_:
{
lean_object* v___x_1392_; 
v___x_1392_ = l_Lean_MVarId_revert(v_mvarId_1372_, v_a_1391_, v___x_1389_, v___x_1384_, v_a_1377_, v_a_1378_, v_a_1379_, v_a_1380_);
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_object* v_a_1393_; lean_object* v_fst_1394_; lean_object* v_snd_1395_; lean_object* v___x_1396_; 
v_a_1393_ = lean_ctor_get(v___x_1392_, 0);
lean_inc(v_a_1393_);
lean_dec_ref(v___x_1392_);
v_fst_1394_ = lean_ctor_get(v_a_1393_, 0);
lean_inc(v_fst_1394_);
v_snd_1395_ = lean_ctor_get(v_a_1393_, 1);
lean_inc(v_snd_1395_);
lean_dec(v_a_1393_);
v___x_1396_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore(v_snd_1395_, v_a_1388_, v_transparency_1376_, v_a_1377_, v_a_1378_, v_a_1379_, v_a_1380_);
if (lean_obj_tag(v___x_1396_) == 0)
{
lean_object* v_a_1397_; lean_object* v_fst_1398_; lean_object* v_snd_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1447_; 
v_a_1397_ = lean_ctor_get(v___x_1396_, 0);
lean_inc(v_a_1397_);
lean_dec_ref(v___x_1396_);
v_fst_1398_ = lean_ctor_get(v_a_1397_, 0);
v_snd_1399_ = lean_ctor_get(v_a_1397_, 1);
v_isSharedCheck_1447_ = !lean_is_exclusive(v_a_1397_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1401_ = v_a_1397_;
v_isShared_1402_ = v_isSharedCheck_1447_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_snd_1399_);
lean_inc(v_fst_1398_);
lean_dec(v_a_1397_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1447_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1403_ = lean_array_get_size(v_fst_1394_);
v___x_1404_ = lean_box(0);
v___x_1405_ = l_Lean_Meta_introNCore(v_snd_1399_, v___x_1403_, v___x_1404_, v___x_1384_, v___x_1389_, v_a_1377_, v_a_1378_, v_a_1379_, v_a_1380_);
if (lean_obj_tag(v___x_1405_) == 0)
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1438_; 
v_a_1406_ = lean_ctor_get(v___x_1405_, 0);
v_isSharedCheck_1438_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1438_ == 0)
{
v___x_1408_ = v___x_1405_;
v_isShared_1409_ = v_isSharedCheck_1438_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1405_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1438_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v_fst_1410_; lean_object* v_snd_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1437_; 
v_fst_1410_ = lean_ctor_get(v_a_1406_, 0);
v_snd_1411_ = lean_ctor_get(v_a_1406_, 1);
v_isSharedCheck_1437_ = !lean_is_exclusive(v_a_1406_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1413_ = v_a_1406_;
v_isShared_1414_ = v_isSharedCheck_1437_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_snd_1411_);
lean_inc(v_fst_1410_);
lean_dec(v_a_1406_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1437_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1418_; 
v___x_1415_ = lean_array_get_size(v_fst_1410_);
v___x_1416_ = l_Array_toSubarray___redArg(v_fst_1410_, v___x_1383_, v___x_1415_);
if (v_isShared_1414_ == 0)
{
lean_ctor_set(v___x_1413_, 1, v___x_1416_);
lean_ctor_set(v___x_1413_, 0, v_fvarSubst_1375_);
v___x_1418_ = v___x_1413_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_fvarSubst_1375_);
lean_ctor_set(v_reuseFailAlloc_1436_, 1, v___x_1416_);
v___x_1418_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
size_t v_sz_1419_; lean_object* v___x_1420_; lean_object* v_fst_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1434_; 
v_sz_1419_ = lean_array_size(v_fst_1394_);
v___x_1420_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_generalizeHyp_spec__2(v_fst_1394_, v_sz_1419_, v___x_1386_, v___x_1418_);
lean_dec(v_fst_1394_);
v_fst_1421_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1434_ == 0)
{
lean_object* v_unused_1435_; 
v_unused_1435_ = lean_ctor_get(v___x_1420_, 1);
lean_dec(v_unused_1435_);
v___x_1423_ = v___x_1420_;
v_isShared_1424_ = v_isSharedCheck_1434_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_fst_1421_);
lean_dec(v___x_1420_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1434_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1426_; 
if (v_isShared_1424_ == 0)
{
lean_ctor_set(v___x_1423_, 1, v_snd_1411_);
lean_ctor_set(v___x_1423_, 0, v_fst_1398_);
v___x_1426_ = v___x_1423_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v_fst_1398_);
lean_ctor_set(v_reuseFailAlloc_1433_, 1, v_snd_1411_);
v___x_1426_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
lean_object* v___x_1428_; 
if (v_isShared_1402_ == 0)
{
lean_ctor_set(v___x_1401_, 1, v___x_1426_);
lean_ctor_set(v___x_1401_, 0, v_fst_1421_);
v___x_1428_ = v___x_1401_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_fst_1421_);
lean_ctor_set(v_reuseFailAlloc_1432_, 1, v___x_1426_);
v___x_1428_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
lean_object* v___x_1430_; 
if (v_isShared_1409_ == 0)
{
lean_ctor_set(v___x_1408_, 0, v___x_1428_);
v___x_1430_ = v___x_1408_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v___x_1428_);
v___x_1430_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
return v___x_1430_;
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
lean_object* v_a_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1446_; 
lean_del_object(v___x_1401_);
lean_dec(v_fst_1398_);
lean_dec(v_fst_1394_);
lean_dec(v_fvarSubst_1375_);
v_a_1439_ = lean_ctor_get(v___x_1405_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1441_ = v___x_1405_;
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_a_1439_);
lean_dec(v___x_1405_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v___x_1444_; 
if (v_isShared_1442_ == 0)
{
v___x_1444_ = v___x_1441_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_a_1439_);
v___x_1444_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
return v___x_1444_;
}
}
}
}
}
else
{
lean_object* v_a_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1455_; 
lean_dec(v_fst_1394_);
lean_dec(v_fvarSubst_1375_);
v_a_1448_ = lean_ctor_get(v___x_1396_, 0);
v_isSharedCheck_1455_ = !lean_is_exclusive(v___x_1396_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1450_ = v___x_1396_;
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_a_1448_);
lean_dec(v___x_1396_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1453_; 
if (v_isShared_1451_ == 0)
{
v___x_1453_ = v___x_1450_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_a_1448_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
else
{
lean_object* v_a_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1463_; 
lean_dec(v_a_1388_);
lean_dec(v_fvarSubst_1375_);
v_a_1456_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1463_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1458_ = v___x_1392_;
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_a_1456_);
lean_dec(v___x_1392_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1461_; 
if (v_isShared_1459_ == 0)
{
v___x_1461_ = v___x_1458_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v_a_1456_);
v___x_1461_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
return v___x_1461_;
}
}
}
}
v___jp_1464_:
{
if (lean_obj_tag(v___y_1465_) == 0)
{
lean_object* v_a_1466_; 
v_a_1466_ = lean_ctor_get(v___y_1465_, 0);
lean_inc(v_a_1466_);
lean_dec_ref(v___y_1465_);
v_a_1391_ = v_a_1466_;
goto v___jp_1390_;
}
else
{
lean_object* v_a_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1474_; 
lean_dec(v_a_1388_);
lean_dec(v_fvarSubst_1375_);
lean_dec(v_mvarId_1372_);
v_a_1467_ = lean_ctor_get(v___y_1465_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___y_1465_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1469_ = v___y_1465_;
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_a_1467_);
lean_dec(v___y_1465_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v___x_1472_; 
if (v_isShared_1470_ == 0)
{
v___x_1472_ = v___x_1469_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v_a_1467_);
v___x_1472_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
return v___x_1472_;
}
}
}
}
}
else
{
lean_object* v_a_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1489_; 
lean_dec(v_fvarSubst_1375_);
lean_dec(v_mvarId_1372_);
v_a_1482_ = lean_ctor_get(v___x_1387_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v___x_1387_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1484_ = v___x_1387_;
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_a_1482_);
lean_dec(v___x_1387_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1487_; 
if (v_isShared_1485_ == 0)
{
v___x_1487_ = v___x_1484_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v_a_1482_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
return v___x_1487_;
}
}
}
}
else
{
lean_object* v___x_1490_; 
v___x_1490_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore(v_mvarId_1372_, v_args_1373_, v_transparency_1376_, v_a_1377_, v_a_1378_, v_a_1379_, v_a_1380_);
if (lean_obj_tag(v___x_1490_) == 0)
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1499_; 
v_a_1491_ = lean_ctor_get(v___x_1490_, 0);
v_isSharedCheck_1499_ = !lean_is_exclusive(v___x_1490_);
if (v_isSharedCheck_1499_ == 0)
{
v___x_1493_ = v___x_1490_;
v_isShared_1494_ = v_isSharedCheck_1499_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v___x_1490_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1499_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1495_; lean_object* v___x_1497_; 
v___x_1495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1495_, 0, v_fvarSubst_1375_);
lean_ctor_set(v___x_1495_, 1, v_a_1491_);
if (v_isShared_1494_ == 0)
{
lean_ctor_set(v___x_1493_, 0, v___x_1495_);
v___x_1497_ = v___x_1493_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v___x_1495_);
v___x_1497_ = v_reuseFailAlloc_1498_;
goto v_reusejp_1496_;
}
v_reusejp_1496_:
{
return v___x_1497_;
}
}
}
else
{
lean_object* v_a_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1507_; 
lean_dec(v_fvarSubst_1375_);
v_a_1500_ = lean_ctor_get(v___x_1490_, 0);
v_isSharedCheck_1507_ = !lean_is_exclusive(v___x_1490_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1502_ = v___x_1490_;
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_a_1500_);
lean_dec(v___x_1490_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1505_; 
if (v_isShared_1503_ == 0)
{
v___x_1505_ = v___x_1502_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v_a_1500_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_generalizeHyp___boxed(lean_object* v_mvarId_1508_, lean_object* v_args_1509_, lean_object* v_hyps_1510_, lean_object* v_fvarSubst_1511_, lean_object* v_transparency_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_){
_start:
{
uint8_t v_transparency_boxed_1518_; lean_object* v_res_1519_; 
v_transparency_boxed_1518_ = lean_unbox(v_transparency_1512_);
v_res_1519_ = l_Lean_MVarId_generalizeHyp(v_mvarId_1508_, v_args_1509_, v_hyps_1510_, v_fvarSubst_1511_, v_transparency_boxed_1518_, v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_);
lean_dec(v_a_1516_);
lean_dec_ref(v_a_1515_);
lean_dec(v_a_1514_);
lean_dec_ref(v_a_1513_);
lean_dec_ref(v_hyps_1510_);
return v_res_1519_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0(size_t v_sz_1520_, size_t v_i_1521_, lean_object* v_bs_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_){
_start:
{
lean_object* v___x_1528_; 
v___x_1528_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___redArg(v_sz_1520_, v_i_1521_, v_bs_1522_, v___y_1524_, v___y_1526_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___boxed(lean_object* v_sz_1529_, lean_object* v_i_1530_, lean_object* v_bs_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_){
_start:
{
size_t v_sz_boxed_1537_; size_t v_i_boxed_1538_; lean_object* v_res_1539_; 
v_sz_boxed_1537_ = lean_unbox_usize(v_sz_1529_);
lean_dec(v_sz_1529_);
v_i_boxed_1538_ = lean_unbox_usize(v_i_1530_);
lean_dec(v_i_1530_);
v_res_1539_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0(v_sz_boxed_1537_, v_i_boxed_1538_, v_bs_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
return v_res_1539_;
}
}
lean_object* runtime_initialize_Lean_Meta_KAbstract(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Intro(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Revert(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Generalize(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_KAbstract(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_instInhabitedGeneralizeArg_default = _init_l_Lean_Meta_instInhabitedGeneralizeArg_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedGeneralizeArg_default);
l_Lean_Meta_instInhabitedGeneralizeArg = _init_l_Lean_Meta_instInhabitedGeneralizeArg();
lean_mark_persistent(l_Lean_Meta_instInhabitedGeneralizeArg);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Generalize(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_KAbstract(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Intro(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Revert(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Generalize(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_KAbstract(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Generalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Generalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Generalize(builtin);
}
#ifdef __cplusplus
}
#endif
