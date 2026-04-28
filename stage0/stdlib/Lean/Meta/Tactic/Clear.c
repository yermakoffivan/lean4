// Lean compiler output
// Module: Lean.Meta.Tactic.Clear
// Imports: public import Lean.Meta.Tactic.Util import Init.Data.Nat.Order import Init.Data.Order.Lemmas
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_LocalContext_sortFVarsByContextOrder(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_erase(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
LEAN_EXPORT uint8_t l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MVarId_clear___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_clear___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__4;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__6;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__7(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_clear___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_clear___lam__1___closed__0;
static lean_once_cell_t l_Lean_MVarId_clear___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_clear___lam__1___closed__1;
static lean_once_cell_t l_Lean_MVarId_clear___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_clear___lam__1___closed__2;
static lean_once_cell_t l_Lean_MVarId_clear___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_clear___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_MVarId_clear___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_clear___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_clear___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClear___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_x27_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany_x27___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__0(lean_object* v_fvarId_1_, lean_object* v_x_2_){
_start:
{
uint8_t v___x_3_; 
v___x_3_ = l_Lean_instBEqFVarId_beq(v_fvarId_1_, v_x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__0___boxed(lean_object* v_fvarId_4_, lean_object* v_x_5_){
_start:
{
uint8_t v_res_6_; lean_object* v_r_7_; 
v_res_6_ = l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__0(v_fvarId_4_, v_x_5_);
lean_dec(v_x_5_);
lean_dec(v_fvarId_4_);
v_r_7_ = lean_box(v_res_6_);
return v_r_7_;
}
}
LEAN_EXPORT uint8_t l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__1(lean_object* v_x_8_){
_start:
{
uint8_t v___x_9_; 
v___x_9_ = 0;
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__1___boxed(lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__1(v_x_10_);
lean_dec(v_x_10_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
static lean_object* _init_l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___f_13_; 
v___f_13_ = lean_alloc_closure((void*)(l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__1___boxed), 1, 0);
return v___f_13_;
}
}
static lean_object* _init_l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_14_ = lean_box(0);
v___x_15_ = lean_unsigned_to_nat(16u);
v___x_16_ = lean_mk_array(v___x_15_, v___x_14_);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_17_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__1, &l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__1_once, _init_l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__1);
v___x_18_ = lean_unsigned_to_nat(0u);
v___x_19_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
lean_ctor_set(v___x_19_, 1, v___x_17_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg(lean_object* v_localDecl_20_, lean_object* v_fvarId_21_, uint8_t v_generalizeNondepLet_22_, lean_object* v___y_23_, lean_object* v___y_24_){
_start:
{
uint8_t v_fst_27_; lean_object* v_snd_28_; lean_object* v___y_48_; lean_object* v___f_52_; lean_object* v___f_53_; 
v___f_52_ = lean_alloc_closure((void*)(l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_52_, 0, v_fvarId_21_);
v___f_53_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__0, &l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__0_once, _init_l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__0);
if (lean_obj_tag(v_localDecl_20_) == 0)
{
lean_object* v_type_54_; lean_object* v___x_55_; lean_object* v___x_56_; uint8_t v_fst_58_; lean_object* v_mctx_59_; lean_object* v___y_78_; lean_object* v_mctx_83_; lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v_type_54_ = lean_ctor_get(v_localDecl_20_, 3);
lean_inc_ref(v_type_54_);
lean_dec_ref(v_localDecl_20_);
v___x_55_ = lean_st_ref_get(v___y_24_);
lean_dec(v___x_55_);
v___x_56_ = lean_st_ref_get(v___y_23_);
v_mctx_83_ = lean_ctor_get(v___x_56_, 0);
lean_inc_ref_n(v_mctx_83_, 2);
lean_dec(v___x_56_);
v___x_84_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2, &l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2_once, _init_l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2);
v___x_85_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set(v___x_85_, 1, v_mctx_83_);
v___x_86_ = l_Lean_Expr_hasFVar(v_type_54_);
if (v___x_86_ == 0)
{
uint8_t v___x_87_; 
v___x_87_ = l_Lean_Expr_hasMVar(v_type_54_);
if (v___x_87_ == 0)
{
lean_dec_ref(v___x_85_);
lean_dec_ref(v_type_54_);
lean_dec_ref(v___f_52_);
v_fst_58_ = v___x_87_;
v_mctx_59_ = v_mctx_83_;
goto v___jp_57_;
}
else
{
lean_object* v___x_88_; 
lean_dec_ref(v_mctx_83_);
v___x_88_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_52_, v___f_53_, v_type_54_, v___x_85_);
v___y_78_ = v___x_88_;
goto v___jp_77_;
}
}
else
{
lean_object* v___x_89_; 
lean_dec_ref(v_mctx_83_);
v___x_89_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_52_, v___f_53_, v_type_54_, v___x_85_);
v___y_78_ = v___x_89_;
goto v___jp_77_;
}
v___jp_57_:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v_cache_62_; lean_object* v_zetaDeltaFVarIds_63_; lean_object* v_postponed_64_; lean_object* v_diag_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_75_; 
v___x_60_ = lean_st_ref_get(v___y_24_);
lean_dec(v___x_60_);
v___x_61_ = lean_st_ref_take(v___y_23_);
v_cache_62_ = lean_ctor_get(v___x_61_, 1);
v_zetaDeltaFVarIds_63_ = lean_ctor_get(v___x_61_, 2);
v_postponed_64_ = lean_ctor_get(v___x_61_, 3);
v_diag_65_ = lean_ctor_get(v___x_61_, 4);
v_isSharedCheck_75_ = !lean_is_exclusive(v___x_61_);
if (v_isSharedCheck_75_ == 0)
{
lean_object* v_unused_76_; 
v_unused_76_ = lean_ctor_get(v___x_61_, 0);
lean_dec(v_unused_76_);
v___x_67_ = v___x_61_;
v_isShared_68_ = v_isSharedCheck_75_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_diag_65_);
lean_inc(v_postponed_64_);
lean_inc(v_zetaDeltaFVarIds_63_);
lean_inc(v_cache_62_);
lean_dec(v___x_61_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_75_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v___x_70_; 
if (v_isShared_68_ == 0)
{
lean_ctor_set(v___x_67_, 0, v_mctx_59_);
v___x_70_ = v___x_67_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v_mctx_59_);
lean_ctor_set(v_reuseFailAlloc_74_, 1, v_cache_62_);
lean_ctor_set(v_reuseFailAlloc_74_, 2, v_zetaDeltaFVarIds_63_);
lean_ctor_set(v_reuseFailAlloc_74_, 3, v_postponed_64_);
lean_ctor_set(v_reuseFailAlloc_74_, 4, v_diag_65_);
v___x_70_ = v_reuseFailAlloc_74_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_71_ = lean_st_ref_set(v___y_23_, v___x_70_);
v___x_72_ = lean_box(v_fst_58_);
v___x_73_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
return v___x_73_;
}
}
}
v___jp_77_:
{
lean_object* v_snd_79_; lean_object* v_fst_80_; lean_object* v_mctx_81_; uint8_t v___x_82_; 
v_snd_79_ = lean_ctor_get(v___y_78_, 1);
lean_inc(v_snd_79_);
v_fst_80_ = lean_ctor_get(v___y_78_, 0);
lean_inc(v_fst_80_);
lean_dec_ref(v___y_78_);
v_mctx_81_ = lean_ctor_get(v_snd_79_, 1);
lean_inc_ref(v_mctx_81_);
lean_dec(v_snd_79_);
v___x_82_ = lean_unbox(v_fst_80_);
lean_dec(v_fst_80_);
v_fst_58_ = v___x_82_;
v_mctx_59_ = v_mctx_81_;
goto v___jp_57_;
}
}
else
{
lean_object* v_type_90_; lean_object* v_value_91_; uint8_t v_nondep_92_; uint8_t v_fst_94_; lean_object* v_snd_95_; lean_object* v___y_101_; 
v_type_90_ = lean_ctor_get(v_localDecl_20_, 3);
lean_inc_ref(v_type_90_);
v_value_91_ = lean_ctor_get(v_localDecl_20_, 4);
lean_inc_ref(v_value_91_);
v_nondep_92_ = lean_ctor_get_uint8(v_localDecl_20_, sizeof(void*)*5);
lean_dec_ref(v_localDecl_20_);
if (v_generalizeNondepLet_22_ == 0)
{
goto v___jp_105_;
}
else
{
if (v_nondep_92_ == 0)
{
goto v___jp_105_;
}
else
{
lean_object* v___x_115_; lean_object* v___x_116_; uint8_t v_fst_118_; lean_object* v_mctx_119_; lean_object* v___y_138_; lean_object* v_mctx_143_; lean_object* v___x_144_; lean_object* v___x_145_; uint8_t v___x_146_; 
lean_dec_ref(v_value_91_);
v___x_115_ = lean_st_ref_get(v___y_24_);
lean_dec(v___x_115_);
v___x_116_ = lean_st_ref_get(v___y_23_);
v_mctx_143_ = lean_ctor_get(v___x_116_, 0);
lean_inc_ref_n(v_mctx_143_, 2);
lean_dec(v___x_116_);
v___x_144_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2, &l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2_once, _init_l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2);
v___x_145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
lean_ctor_set(v___x_145_, 1, v_mctx_143_);
v___x_146_ = l_Lean_Expr_hasFVar(v_type_90_);
if (v___x_146_ == 0)
{
uint8_t v___x_147_; 
v___x_147_ = l_Lean_Expr_hasMVar(v_type_90_);
if (v___x_147_ == 0)
{
lean_dec_ref(v___x_145_);
lean_dec_ref(v_type_90_);
lean_dec_ref(v___f_52_);
v_fst_118_ = v___x_147_;
v_mctx_119_ = v_mctx_143_;
goto v___jp_117_;
}
else
{
lean_object* v___x_148_; 
lean_dec_ref(v_mctx_143_);
v___x_148_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_52_, v___f_53_, v_type_90_, v___x_145_);
v___y_138_ = v___x_148_;
goto v___jp_137_;
}
}
else
{
lean_object* v___x_149_; 
lean_dec_ref(v_mctx_143_);
v___x_149_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_52_, v___f_53_, v_type_90_, v___x_145_);
v___y_138_ = v___x_149_;
goto v___jp_137_;
}
v___jp_117_:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v_cache_122_; lean_object* v_zetaDeltaFVarIds_123_; lean_object* v_postponed_124_; lean_object* v_diag_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_135_; 
v___x_120_ = lean_st_ref_get(v___y_24_);
lean_dec(v___x_120_);
v___x_121_ = lean_st_ref_take(v___y_23_);
v_cache_122_ = lean_ctor_get(v___x_121_, 1);
v_zetaDeltaFVarIds_123_ = lean_ctor_get(v___x_121_, 2);
v_postponed_124_ = lean_ctor_get(v___x_121_, 3);
v_diag_125_ = lean_ctor_get(v___x_121_, 4);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_135_ == 0)
{
lean_object* v_unused_136_; 
v_unused_136_ = lean_ctor_get(v___x_121_, 0);
lean_dec(v_unused_136_);
v___x_127_ = v___x_121_;
v_isShared_128_ = v_isSharedCheck_135_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_diag_125_);
lean_inc(v_postponed_124_);
lean_inc(v_zetaDeltaFVarIds_123_);
lean_inc(v_cache_122_);
lean_dec(v___x_121_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_135_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_130_; 
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v_mctx_119_);
v___x_130_ = v___x_127_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_mctx_119_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v_cache_122_);
lean_ctor_set(v_reuseFailAlloc_134_, 2, v_zetaDeltaFVarIds_123_);
lean_ctor_set(v_reuseFailAlloc_134_, 3, v_postponed_124_);
lean_ctor_set(v_reuseFailAlloc_134_, 4, v_diag_125_);
v___x_130_ = v_reuseFailAlloc_134_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_131_ = lean_st_ref_set(v___y_23_, v___x_130_);
v___x_132_ = lean_box(v_fst_118_);
v___x_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
return v___x_133_;
}
}
}
v___jp_137_:
{
lean_object* v_snd_139_; lean_object* v_fst_140_; lean_object* v_mctx_141_; uint8_t v___x_142_; 
v_snd_139_ = lean_ctor_get(v___y_138_, 1);
lean_inc(v_snd_139_);
v_fst_140_ = lean_ctor_get(v___y_138_, 0);
lean_inc(v_fst_140_);
lean_dec_ref(v___y_138_);
v_mctx_141_ = lean_ctor_get(v_snd_139_, 1);
lean_inc_ref(v_mctx_141_);
lean_dec(v_snd_139_);
v___x_142_ = lean_unbox(v_fst_140_);
lean_dec(v_fst_140_);
v_fst_118_ = v___x_142_;
v_mctx_119_ = v_mctx_141_;
goto v___jp_117_;
}
}
}
v___jp_93_:
{
if (v_fst_94_ == 0)
{
uint8_t v___x_96_; 
v___x_96_ = l_Lean_Expr_hasFVar(v_value_91_);
if (v___x_96_ == 0)
{
uint8_t v___x_97_; 
v___x_97_ = l_Lean_Expr_hasMVar(v_value_91_);
if (v___x_97_ == 0)
{
lean_dec_ref(v_value_91_);
lean_dec_ref(v___f_52_);
v_fst_27_ = v___x_97_;
v_snd_28_ = v_snd_95_;
goto v___jp_26_;
}
else
{
lean_object* v___x_98_; 
v___x_98_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_52_, v___f_53_, v_value_91_, v_snd_95_);
v___y_48_ = v___x_98_;
goto v___jp_47_;
}
}
else
{
lean_object* v___x_99_; 
v___x_99_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_52_, v___f_53_, v_value_91_, v_snd_95_);
v___y_48_ = v___x_99_;
goto v___jp_47_;
}
}
else
{
lean_dec_ref(v_value_91_);
lean_dec_ref(v___f_52_);
v_fst_27_ = v_fst_94_;
v_snd_28_ = v_snd_95_;
goto v___jp_26_;
}
}
v___jp_100_:
{
lean_object* v_fst_102_; lean_object* v_snd_103_; uint8_t v___x_104_; 
v_fst_102_ = lean_ctor_get(v___y_101_, 0);
lean_inc(v_fst_102_);
v_snd_103_ = lean_ctor_get(v___y_101_, 1);
lean_inc(v_snd_103_);
lean_dec_ref(v___y_101_);
v___x_104_ = lean_unbox(v_fst_102_);
lean_dec(v_fst_102_);
v_fst_94_ = v___x_104_;
v_snd_95_ = v_snd_103_;
goto v___jp_93_;
}
v___jp_105_:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v_mctx_108_; lean_object* v___x_109_; lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_106_ = lean_st_ref_get(v___y_24_);
lean_dec(v___x_106_);
v___x_107_ = lean_st_ref_get(v___y_23_);
v_mctx_108_ = lean_ctor_get(v___x_107_, 0);
lean_inc_ref(v_mctx_108_);
lean_dec(v___x_107_);
v___x_109_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2, &l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2_once, _init_l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2);
v___x_110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set(v___x_110_, 1, v_mctx_108_);
v___x_111_ = l_Lean_Expr_hasFVar(v_type_90_);
if (v___x_111_ == 0)
{
uint8_t v___x_112_; 
v___x_112_ = l_Lean_Expr_hasMVar(v_type_90_);
if (v___x_112_ == 0)
{
lean_dec_ref(v_type_90_);
v_fst_94_ = v___x_112_;
v_snd_95_ = v___x_110_;
goto v___jp_93_;
}
else
{
lean_object* v___x_113_; 
lean_inc_ref(v___f_52_);
v___x_113_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_52_, v___f_53_, v_type_90_, v___x_110_);
v___y_101_ = v___x_113_;
goto v___jp_100_;
}
}
else
{
lean_object* v___x_114_; 
lean_inc_ref(v___f_52_);
v___x_114_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_52_, v___f_53_, v_type_90_, v___x_110_);
v___y_101_ = v___x_114_;
goto v___jp_100_;
}
}
}
v___jp_26_:
{
lean_object* v_mctx_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v_cache_32_; lean_object* v_zetaDeltaFVarIds_33_; lean_object* v_postponed_34_; lean_object* v_diag_35_; lean_object* v___x_37_; uint8_t v_isShared_38_; uint8_t v_isSharedCheck_45_; 
v_mctx_29_ = lean_ctor_get(v_snd_28_, 1);
lean_inc_ref(v_mctx_29_);
lean_dec_ref(v_snd_28_);
v___x_30_ = lean_st_ref_get(v___y_24_);
lean_dec(v___x_30_);
v___x_31_ = lean_st_ref_take(v___y_23_);
v_cache_32_ = lean_ctor_get(v___x_31_, 1);
v_zetaDeltaFVarIds_33_ = lean_ctor_get(v___x_31_, 2);
v_postponed_34_ = lean_ctor_get(v___x_31_, 3);
v_diag_35_ = lean_ctor_get(v___x_31_, 4);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_31_);
if (v_isSharedCheck_45_ == 0)
{
lean_object* v_unused_46_; 
v_unused_46_ = lean_ctor_get(v___x_31_, 0);
lean_dec(v_unused_46_);
v___x_37_ = v___x_31_;
v_isShared_38_ = v_isSharedCheck_45_;
goto v_resetjp_36_;
}
else
{
lean_inc(v_diag_35_);
lean_inc(v_postponed_34_);
lean_inc(v_zetaDeltaFVarIds_33_);
lean_inc(v_cache_32_);
lean_dec(v___x_31_);
v___x_37_ = lean_box(0);
v_isShared_38_ = v_isSharedCheck_45_;
goto v_resetjp_36_;
}
v_resetjp_36_:
{
lean_object* v___x_40_; 
if (v_isShared_38_ == 0)
{
lean_ctor_set(v___x_37_, 0, v_mctx_29_);
v___x_40_ = v___x_37_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_mctx_29_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v_cache_32_);
lean_ctor_set(v_reuseFailAlloc_44_, 2, v_zetaDeltaFVarIds_33_);
lean_ctor_set(v_reuseFailAlloc_44_, 3, v_postponed_34_);
lean_ctor_set(v_reuseFailAlloc_44_, 4, v_diag_35_);
v___x_40_ = v_reuseFailAlloc_44_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_41_ = lean_st_ref_set(v___y_23_, v___x_40_);
v___x_42_ = lean_box(v_fst_27_);
v___x_43_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
return v___x_43_;
}
}
}
v___jp_47_:
{
lean_object* v_fst_49_; lean_object* v_snd_50_; uint8_t v___x_51_; 
v_fst_49_ = lean_ctor_get(v___y_48_, 0);
lean_inc(v_fst_49_);
v_snd_50_ = lean_ctor_get(v___y_48_, 1);
lean_inc(v_snd_50_);
lean_dec_ref(v___y_48_);
v___x_51_ = lean_unbox(v_fst_49_);
lean_dec(v_fst_49_);
v_fst_27_ = v___x_51_;
v_snd_28_ = v_snd_50_;
goto v___jp_26_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___boxed(lean_object* v_localDecl_150_, lean_object* v_fvarId_151_, lean_object* v_generalizeNondepLet_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_){
_start:
{
uint8_t v_generalizeNondepLet_boxed_156_; lean_object* v_res_157_; 
v_generalizeNondepLet_boxed_156_ = lean_unbox(v_generalizeNondepLet_152_);
v_res_157_ = l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg(v_localDecl_150_, v_fvarId_151_, v_generalizeNondepLet_boxed_156_, v___y_153_, v___y_154_);
lean_dec(v___y_154_);
lean_dec(v___y_153_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0(lean_object* v_localDecl_158_, lean_object* v_fvarId_159_, uint8_t v_generalizeNondepLet_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg(v_localDecl_158_, v_fvarId_159_, v_generalizeNondepLet_160_, v___y_162_, v___y_164_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___boxed(lean_object* v_localDecl_167_, lean_object* v_fvarId_168_, lean_object* v_generalizeNondepLet_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
uint8_t v_generalizeNondepLet_boxed_175_; lean_object* v_res_176_; 
v_generalizeNondepLet_boxed_175_ = lean_unbox(v_generalizeNondepLet_169_);
v_res_176_ = l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0(v_localDecl_167_, v_fvarId_168_, v_generalizeNondepLet_boxed_175_, v___y_170_, v___y_171_, v___y_172_, v___y_173_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___redArg(lean_object* v_e_177_, lean_object* v_fvarId_178_, lean_object* v___y_179_, lean_object* v___y_180_){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; uint8_t v_fst_185_; lean_object* v_mctx_186_; lean_object* v___y_205_; lean_object* v_mctx_210_; lean_object* v___f_211_; lean_object* v___f_212_; lean_object* v___x_213_; lean_object* v___x_214_; uint8_t v___x_215_; 
v___x_182_ = lean_st_ref_get(v___y_180_);
lean_dec(v___x_182_);
v___x_183_ = lean_st_ref_get(v___y_179_);
v_mctx_210_ = lean_ctor_get(v___x_183_, 0);
lean_inc_ref_n(v_mctx_210_, 2);
lean_dec(v___x_183_);
v___f_211_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__0, &l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__0_once, _init_l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__0);
v___f_212_ = lean_alloc_closure((void*)(l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_212_, 0, v_fvarId_178_);
v___x_213_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2, &l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2_once, _init_l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg___closed__2);
v___x_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
lean_ctor_set(v___x_214_, 1, v_mctx_210_);
v___x_215_ = l_Lean_Expr_hasFVar(v_e_177_);
if (v___x_215_ == 0)
{
uint8_t v___x_216_; 
v___x_216_ = l_Lean_Expr_hasMVar(v_e_177_);
if (v___x_216_ == 0)
{
lean_dec_ref(v___x_214_);
lean_dec_ref(v___f_212_);
lean_dec_ref(v_e_177_);
v_fst_185_ = v___x_216_;
v_mctx_186_ = v_mctx_210_;
goto v___jp_184_;
}
else
{
lean_object* v___x_217_; 
lean_dec_ref(v_mctx_210_);
v___x_217_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_212_, v___f_211_, v_e_177_, v___x_214_);
v___y_205_ = v___x_217_;
goto v___jp_204_;
}
}
else
{
lean_object* v___x_218_; 
lean_dec_ref(v_mctx_210_);
v___x_218_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_212_, v___f_211_, v_e_177_, v___x_214_);
v___y_205_ = v___x_218_;
goto v___jp_204_;
}
v___jp_184_:
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v_cache_189_; lean_object* v_zetaDeltaFVarIds_190_; lean_object* v_postponed_191_; lean_object* v_diag_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_202_; 
v___x_187_ = lean_st_ref_get(v___y_180_);
lean_dec(v___x_187_);
v___x_188_ = lean_st_ref_take(v___y_179_);
v_cache_189_ = lean_ctor_get(v___x_188_, 1);
v_zetaDeltaFVarIds_190_ = lean_ctor_get(v___x_188_, 2);
v_postponed_191_ = lean_ctor_get(v___x_188_, 3);
v_diag_192_ = lean_ctor_get(v___x_188_, 4);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_188_);
if (v_isSharedCheck_202_ == 0)
{
lean_object* v_unused_203_; 
v_unused_203_ = lean_ctor_get(v___x_188_, 0);
lean_dec(v_unused_203_);
v___x_194_ = v___x_188_;
v_isShared_195_ = v_isSharedCheck_202_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_diag_192_);
lean_inc(v_postponed_191_);
lean_inc(v_zetaDeltaFVarIds_190_);
lean_inc(v_cache_189_);
lean_dec(v___x_188_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_202_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
lean_object* v___x_197_; 
if (v_isShared_195_ == 0)
{
lean_ctor_set(v___x_194_, 0, v_mctx_186_);
v___x_197_ = v___x_194_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v_mctx_186_);
lean_ctor_set(v_reuseFailAlloc_201_, 1, v_cache_189_);
lean_ctor_set(v_reuseFailAlloc_201_, 2, v_zetaDeltaFVarIds_190_);
lean_ctor_set(v_reuseFailAlloc_201_, 3, v_postponed_191_);
lean_ctor_set(v_reuseFailAlloc_201_, 4, v_diag_192_);
v___x_197_ = v_reuseFailAlloc_201_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_198_ = lean_st_ref_set(v___y_179_, v___x_197_);
v___x_199_ = lean_box(v_fst_185_);
v___x_200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
return v___x_200_;
}
}
}
v___jp_204_:
{
lean_object* v_snd_206_; lean_object* v_fst_207_; lean_object* v_mctx_208_; uint8_t v___x_209_; 
v_snd_206_ = lean_ctor_get(v___y_205_, 1);
lean_inc(v_snd_206_);
v_fst_207_ = lean_ctor_get(v___y_205_, 0);
lean_inc(v_fst_207_);
lean_dec_ref(v___y_205_);
v_mctx_208_ = lean_ctor_get(v_snd_206_, 1);
lean_inc_ref(v_mctx_208_);
lean_dec(v_snd_206_);
v___x_209_ = lean_unbox(v_fst_207_);
lean_dec(v_fst_207_);
v_fst_185_ = v___x_209_;
v_mctx_186_ = v_mctx_208_;
goto v___jp_184_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___redArg___boxed(lean_object* v_e_219_, lean_object* v_fvarId_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___redArg(v_e_219_, v_fvarId_220_, v___y_221_, v___y_222_);
lean_dec(v___y_222_);
lean_dec(v___y_221_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3(lean_object* v_e_225_, lean_object* v_fvarId_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___redArg(v_e_225_, v_fvarId_226_, v___y_228_, v___y_230_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___boxed(lean_object* v_e_233_, lean_object* v_fvarId_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3(v_e_233_, v_fvarId_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_);
lean_dec(v___y_238_);
lean_dec_ref(v___y_237_);
lean_dec(v___y_236_);
lean_dec_ref(v___y_235_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___redArg(lean_object* v_mvarId_241_, lean_object* v_x_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_241_, v_x_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_256_; 
v_a_249_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_256_ == 0)
{
v___x_251_ = v___x_248_;
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_248_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_254_; 
if (v_isShared_252_ == 0)
{
v___x_254_ = v___x_251_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_a_249_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
else
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_264_; 
v_a_257_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_264_ == 0)
{
v___x_259_ = v___x_248_;
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v___x_248_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___redArg___boxed(lean_object* v_mvarId_265_, lean_object* v_x_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___redArg(v_mvarId_265_, v_x_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_);
lean_dec(v___y_270_);
lean_dec_ref(v___y_269_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4(lean_object* v_00_u03b1_273_, lean_object* v_mvarId_274_, lean_object* v_x_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___redArg(v_mvarId_274_, v_x_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___boxed(lean_object* v_00_u03b1_282_, lean_object* v_mvarId_283_, lean_object* v_x_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4(v_00_u03b1_282_, v_mvarId_283_, v_x_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
return v_res_290_;
}
}
LEAN_EXPORT uint8_t l_Lean_MVarId_clear___lam__0(lean_object* v_fvarId_291_, lean_object* v_localInst_292_){
_start:
{
lean_object* v_fvar_293_; lean_object* v___x_294_; uint8_t v___x_295_; 
v_fvar_293_ = lean_ctor_get(v_localInst_292_, 1);
v___x_294_ = l_Lean_Expr_fvarId_x21(v_fvar_293_);
v___x_295_ = l_Lean_instBEqFVarId_beq(v___x_294_, v_fvarId_291_);
lean_dec(v___x_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_clear___lam__0___boxed(lean_object* v_fvarId_296_, lean_object* v_localInst_297_){
_start:
{
uint8_t v_res_298_; lean_object* v_r_299_; 
v_res_298_ = l_Lean_MVarId_clear___lam__0(v_fvarId_296_, v_localInst_297_);
lean_dec_ref(v_localInst_297_);
lean_dec(v_fvarId_296_);
v_r_299_ = lean_box(v_res_298_);
return v_r_299_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__0(void){
_start:
{
lean_object* v___x_300_; 
v___x_300_ = lean_mk_string_unchecked("clear", 5, 5);
return v___x_300_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__0);
v___x_302_ = l_Lean_Name_mkStr1(v___x_301_);
return v___x_302_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__2(void){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = lean_mk_string_unchecked("variable '", 10, 10);
return v___x_303_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__2);
v___x_305_ = l_Lean_stringToMessageData(v___x_304_);
return v___x_305_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__4(void){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = lean_mk_string_unchecked("' depends on '", 14, 14);
return v___x_306_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__4, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__4);
v___x_308_ = l_Lean_stringToMessageData(v___x_307_);
return v___x_308_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__6(void){
_start:
{
lean_object* v___x_309_; 
v___x_309_ = lean_mk_string_unchecked("'", 1, 1);
return v___x_309_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__6, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__6);
v___x_311_ = l_Lean_stringToMessageData(v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9(lean_object* v_fvarId_312_, lean_object* v_mvarId_313_, lean_object* v_as_314_, size_t v_i_315_, size_t v_stop_316_, lean_object* v_b_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_){
_start:
{
lean_object* v_a_324_; uint8_t v___x_328_; 
v___x_328_ = lean_usize_dec_eq(v_i_315_, v_stop_316_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; 
v___x_329_ = lean_array_uget(v_as_314_, v_i_315_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v___x_330_; 
v___x_330_ = lean_box(0);
v_a_324_ = v___x_330_;
goto v___jp_323_;
}
else
{
lean_object* v_val_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_368_; 
v_val_331_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_368_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_368_ == 0)
{
v___x_333_ = v___x_329_;
v_isShared_334_ = v_isSharedCheck_368_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_val_331_);
lean_dec(v___x_329_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_368_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_335_; uint8_t v___x_336_; 
v___x_335_ = l_Lean_LocalDecl_fvarId(v_val_331_);
v___x_336_ = l_Lean_instBEqFVarId_beq(v___x_335_, v_fvarId_312_);
lean_dec(v___x_335_);
if (v___x_336_ == 0)
{
uint8_t v___x_337_; lean_object* v___x_338_; 
v___x_337_ = 1;
lean_inc(v_fvarId_312_);
lean_inc(v_val_331_);
v___x_338_ = l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg(v_val_331_, v_fvarId_312_, v___x_337_, v___y_319_, v___y_321_);
if (lean_obj_tag(v___x_338_) == 0)
{
lean_object* v_a_339_; uint8_t v___x_340_; 
v_a_339_ = lean_ctor_get(v___x_338_, 0);
lean_inc(v_a_339_);
lean_dec_ref(v___x_338_);
v___x_340_ = lean_unbox(v_a_339_);
lean_dec(v_a_339_);
if (v___x_340_ == 0)
{
lean_object* v___x_341_; 
lean_del_object(v___x_333_);
lean_dec(v_val_331_);
v___x_341_ = lean_box(0);
v_a_324_ = v___x_341_;
goto v___jp_323_;
}
else
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_355_; 
v___x_342_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1);
v___x_343_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3);
v___x_344_ = l_Lean_LocalDecl_toExpr(v_val_331_);
v___x_345_ = l_Lean_MessageData_ofExpr(v___x_344_);
v___x_346_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_346_, 0, v___x_343_);
lean_ctor_set(v___x_346_, 1, v___x_345_);
v___x_347_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5);
v___x_348_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_348_, 0, v___x_346_);
lean_ctor_set(v___x_348_, 1, v___x_347_);
lean_inc(v_fvarId_312_);
v___x_349_ = l_Lean_mkFVar(v_fvarId_312_);
v___x_350_ = l_Lean_MessageData_ofExpr(v___x_349_);
v___x_351_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_348_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
v___x_352_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7);
v___x_353_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_353_, 0, v___x_351_);
lean_ctor_set(v___x_353_, 1, v___x_352_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 0, v___x_353_);
v___x_355_ = v___x_333_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v___x_353_);
v___x_355_ = v_reuseFailAlloc_358_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
lean_object* v___x_356_; 
lean_inc(v_mvarId_313_);
v___x_356_ = l_Lean_Meta_throwTacticEx___redArg(v___x_342_, v_mvarId_313_, v___x_355_, v___y_318_, v___y_319_, v___y_320_, v___y_321_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
lean_inc(v_a_357_);
lean_dec_ref(v___x_356_);
v_a_324_ = v_a_357_;
goto v___jp_323_;
}
else
{
lean_dec(v_mvarId_313_);
lean_dec(v_fvarId_312_);
return v___x_356_;
}
}
}
}
else
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_366_; 
lean_del_object(v___x_333_);
lean_dec(v_val_331_);
lean_dec(v_mvarId_313_);
lean_dec(v_fvarId_312_);
v_a_359_ = lean_ctor_get(v___x_338_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_366_ == 0)
{
v___x_361_ = v___x_338_;
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_338_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_364_; 
if (v_isShared_362_ == 0)
{
v___x_364_ = v___x_361_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_359_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
}
else
{
lean_object* v___x_367_; 
lean_del_object(v___x_333_);
lean_dec(v_val_331_);
v___x_367_ = lean_box(0);
v_a_324_ = v___x_367_;
goto v___jp_323_;
}
}
}
}
else
{
lean_object* v___x_369_; 
lean_dec(v_mvarId_313_);
lean_dec(v_fvarId_312_);
v___x_369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_369_, 0, v_b_317_);
return v___x_369_;
}
v___jp_323_:
{
size_t v___x_325_; size_t v___x_326_; 
v___x_325_ = ((size_t)1ULL);
v___x_326_ = lean_usize_add(v_i_315_, v___x_325_);
v_i_315_ = v___x_326_;
v_b_317_ = v_a_324_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___boxed(lean_object* v_fvarId_370_, lean_object* v_mvarId_371_, lean_object* v_as_372_, lean_object* v_i_373_, lean_object* v_stop_374_, lean_object* v_b_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
size_t v_i_boxed_381_; size_t v_stop_boxed_382_; lean_object* v_res_383_; 
v_i_boxed_381_ = lean_unbox_usize(v_i_373_);
lean_dec(v_i_373_);
v_stop_boxed_382_ = lean_unbox_usize(v_stop_374_);
lean_dec(v_stop_374_);
v_res_383_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9(v_fvarId_370_, v_mvarId_371_, v_as_372_, v_i_boxed_381_, v_stop_boxed_382_, v_b_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec_ref(v_as_372_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(lean_object* v_fvarId_384_, lean_object* v_mvarId_385_, lean_object* v_as_386_, size_t v_i_387_, size_t v_stop_388_, lean_object* v_b_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
lean_object* v_a_396_; uint8_t v___x_400_; 
v___x_400_ = lean_usize_dec_eq(v_i_387_, v_stop_388_);
if (v___x_400_ == 0)
{
lean_object* v___x_401_; 
v___x_401_ = lean_array_uget(v_as_386_, v_i_387_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v___x_402_; 
v___x_402_ = lean_box(0);
v_a_396_ = v___x_402_;
goto v___jp_395_;
}
else
{
lean_object* v_val_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_440_; 
v_val_403_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_440_ == 0)
{
v___x_405_ = v___x_401_;
v_isShared_406_ = v_isSharedCheck_440_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_val_403_);
lean_dec(v___x_401_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_440_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_407_; uint8_t v___x_408_; 
v___x_407_ = l_Lean_LocalDecl_fvarId(v_val_403_);
v___x_408_ = l_Lean_instBEqFVarId_beq(v___x_407_, v_fvarId_384_);
lean_dec(v___x_407_);
if (v___x_408_ == 0)
{
uint8_t v___x_409_; lean_object* v___x_410_; 
v___x_409_ = 1;
lean_inc(v_fvarId_384_);
lean_inc(v_val_403_);
v___x_410_ = l_Lean_localDeclDependsOn___at___00Lean_MVarId_clear_spec__0___redArg(v_val_403_, v_fvarId_384_, v___x_409_, v___y_391_, v___y_393_);
if (lean_obj_tag(v___x_410_) == 0)
{
lean_object* v_a_411_; uint8_t v___x_412_; 
v_a_411_ = lean_ctor_get(v___x_410_, 0);
lean_inc(v_a_411_);
lean_dec_ref(v___x_410_);
v___x_412_ = lean_unbox(v_a_411_);
lean_dec(v_a_411_);
if (v___x_412_ == 0)
{
lean_object* v___x_413_; 
lean_del_object(v___x_405_);
lean_dec(v_val_403_);
v___x_413_ = lean_box(0);
v_a_396_ = v___x_413_;
goto v___jp_395_;
}
else
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_427_; 
v___x_414_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1);
v___x_415_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__3);
v___x_416_ = l_Lean_LocalDecl_toExpr(v_val_403_);
v___x_417_ = l_Lean_MessageData_ofExpr(v___x_416_);
v___x_418_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_415_);
lean_ctor_set(v___x_418_, 1, v___x_417_);
v___x_419_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__5);
v___x_420_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_420_, 0, v___x_418_);
lean_ctor_set(v___x_420_, 1, v___x_419_);
lean_inc(v_fvarId_384_);
v___x_421_ = l_Lean_mkFVar(v_fvarId_384_);
v___x_422_ = l_Lean_MessageData_ofExpr(v___x_421_);
v___x_423_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_423_, 0, v___x_420_);
lean_ctor_set(v___x_423_, 1, v___x_422_);
v___x_424_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7);
v___x_425_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_425_, 0, v___x_423_);
lean_ctor_set(v___x_425_, 1, v___x_424_);
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 0, v___x_425_);
v___x_427_ = v___x_405_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_425_);
v___x_427_ = v_reuseFailAlloc_430_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
lean_object* v___x_428_; 
lean_inc(v_mvarId_385_);
v___x_428_ = l_Lean_Meta_throwTacticEx___redArg(v___x_414_, v_mvarId_385_, v___x_427_, v___y_390_, v___y_391_, v___y_392_, v___y_393_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v_a_429_; 
v_a_429_ = lean_ctor_get(v___x_428_, 0);
lean_inc(v_a_429_);
lean_dec_ref(v___x_428_);
v_a_396_ = v_a_429_;
goto v___jp_395_;
}
else
{
lean_dec(v_mvarId_385_);
lean_dec(v_fvarId_384_);
return v___x_428_;
}
}
}
}
else
{
lean_object* v_a_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_438_; 
lean_del_object(v___x_405_);
lean_dec(v_val_403_);
lean_dec(v_mvarId_385_);
lean_dec(v_fvarId_384_);
v_a_431_ = lean_ctor_get(v___x_410_, 0);
v_isSharedCheck_438_ = !lean_is_exclusive(v___x_410_);
if (v_isSharedCheck_438_ == 0)
{
v___x_433_ = v___x_410_;
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_a_431_);
lean_dec(v___x_410_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_436_; 
if (v_isShared_434_ == 0)
{
v___x_436_ = v___x_433_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_a_431_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
}
else
{
lean_object* v___x_439_; 
lean_del_object(v___x_405_);
lean_dec(v_val_403_);
v___x_439_ = lean_box(0);
v_a_396_ = v___x_439_;
goto v___jp_395_;
}
}
}
}
else
{
lean_object* v___x_441_; 
lean_dec(v_mvarId_385_);
lean_dec(v_fvarId_384_);
v___x_441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_441_, 0, v_b_389_);
return v___x_441_;
}
v___jp_395_:
{
size_t v___x_397_; size_t v___x_398_; lean_object* v___x_399_; 
v___x_397_ = ((size_t)1ULL);
v___x_398_ = lean_usize_add(v_i_387_, v___x_397_);
v___x_399_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9(v_fvarId_384_, v_mvarId_385_, v_as_386_, v___x_398_, v_stop_388_, v_a_396_, v___y_390_, v___y_391_, v___y_392_, v___y_393_);
return v___x_399_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5___boxed(lean_object* v_fvarId_442_, lean_object* v_mvarId_443_, lean_object* v_as_444_, lean_object* v_i_445_, lean_object* v_stop_446_, lean_object* v_b_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
size_t v_i_boxed_453_; size_t v_stop_boxed_454_; lean_object* v_res_455_; 
v_i_boxed_453_ = lean_unbox_usize(v_i_445_);
lean_dec(v_i_445_);
v_stop_boxed_454_ = lean_unbox_usize(v_stop_446_);
lean_dec(v_stop_446_);
v_res_455_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(v_fvarId_442_, v_mvarId_443_, v_as_444_, v_i_boxed_453_, v_stop_boxed_454_, v_b_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_);
lean_dec(v___y_451_);
lean_dec_ref(v___y_450_);
lean_dec(v___y_449_);
lean_dec_ref(v___y_448_);
lean_dec_ref(v_as_444_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__6(lean_object* v_fvarId_456_, lean_object* v_mvarId_457_, lean_object* v_x_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_){
_start:
{
if (lean_obj_tag(v_x_458_) == 0)
{
lean_object* v_cs_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_485_; 
v_cs_464_ = lean_ctor_get(v_x_458_, 0);
v_isSharedCheck_485_ = !lean_is_exclusive(v_x_458_);
if (v_isSharedCheck_485_ == 0)
{
v___x_466_ = v_x_458_;
v_isShared_467_ = v_isSharedCheck_485_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_cs_464_);
lean_dec(v_x_458_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_485_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; uint8_t v___x_471_; 
v___x_468_ = lean_unsigned_to_nat(0u);
v___x_469_ = lean_array_get_size(v_cs_464_);
v___x_470_ = lean_box(0);
v___x_471_ = lean_nat_dec_lt(v___x_468_, v___x_469_);
if (v___x_471_ == 0)
{
lean_object* v___x_473_; 
lean_dec_ref(v_cs_464_);
lean_dec(v_mvarId_457_);
lean_dec(v_fvarId_456_);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 0, v___x_470_);
v___x_473_ = v___x_466_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v___x_470_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
else
{
uint8_t v___x_475_; 
v___x_475_ = lean_nat_dec_le(v___x_469_, v___x_469_);
if (v___x_475_ == 0)
{
if (v___x_471_ == 0)
{
lean_object* v___x_477_; 
lean_dec_ref(v_cs_464_);
lean_dec(v_mvarId_457_);
lean_dec(v_fvarId_456_);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 0, v___x_470_);
v___x_477_ = v___x_466_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v___x_470_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
else
{
size_t v___x_479_; size_t v___x_480_; lean_object* v___x_481_; 
lean_del_object(v___x_466_);
v___x_479_ = ((size_t)0ULL);
v___x_480_ = lean_usize_of_nat(v___x_469_);
v___x_481_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__7(v_fvarId_456_, v_mvarId_457_, v_cs_464_, v___x_479_, v___x_480_, v___x_470_, v___y_459_, v___y_460_, v___y_461_, v___y_462_);
lean_dec_ref(v_cs_464_);
return v___x_481_;
}
}
else
{
size_t v___x_482_; size_t v___x_483_; lean_object* v___x_484_; 
lean_del_object(v___x_466_);
v___x_482_ = ((size_t)0ULL);
v___x_483_ = lean_usize_of_nat(v___x_469_);
v___x_484_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__7(v_fvarId_456_, v_mvarId_457_, v_cs_464_, v___x_482_, v___x_483_, v___x_470_, v___y_459_, v___y_460_, v___y_461_, v___y_462_);
lean_dec_ref(v_cs_464_);
return v___x_484_;
}
}
}
}
else
{
lean_object* v_vs_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_507_; 
v_vs_486_ = lean_ctor_get(v_x_458_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v_x_458_);
if (v_isSharedCheck_507_ == 0)
{
v___x_488_ = v_x_458_;
v_isShared_489_ = v_isSharedCheck_507_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_vs_486_);
lean_dec(v_x_458_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_507_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; uint8_t v___x_493_; 
v___x_490_ = lean_unsigned_to_nat(0u);
v___x_491_ = lean_array_get_size(v_vs_486_);
v___x_492_ = lean_box(0);
v___x_493_ = lean_nat_dec_lt(v___x_490_, v___x_491_);
if (v___x_493_ == 0)
{
lean_object* v___x_495_; 
lean_dec_ref(v_vs_486_);
lean_dec(v_mvarId_457_);
lean_dec(v_fvarId_456_);
if (v_isShared_489_ == 0)
{
lean_ctor_set_tag(v___x_488_, 0);
lean_ctor_set(v___x_488_, 0, v___x_492_);
v___x_495_ = v___x_488_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_492_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
else
{
uint8_t v___x_497_; 
v___x_497_ = lean_nat_dec_le(v___x_491_, v___x_491_);
if (v___x_497_ == 0)
{
if (v___x_493_ == 0)
{
lean_object* v___x_499_; 
lean_dec_ref(v_vs_486_);
lean_dec(v_mvarId_457_);
lean_dec(v_fvarId_456_);
if (v_isShared_489_ == 0)
{
lean_ctor_set_tag(v___x_488_, 0);
lean_ctor_set(v___x_488_, 0, v___x_492_);
v___x_499_ = v___x_488_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v___x_492_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
else
{
size_t v___x_501_; size_t v___x_502_; lean_object* v___x_503_; 
lean_del_object(v___x_488_);
v___x_501_ = ((size_t)0ULL);
v___x_502_ = lean_usize_of_nat(v___x_491_);
v___x_503_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(v_fvarId_456_, v_mvarId_457_, v_vs_486_, v___x_501_, v___x_502_, v___x_492_, v___y_459_, v___y_460_, v___y_461_, v___y_462_);
lean_dec_ref(v_vs_486_);
return v___x_503_;
}
}
else
{
size_t v___x_504_; size_t v___x_505_; lean_object* v___x_506_; 
lean_del_object(v___x_488_);
v___x_504_ = ((size_t)0ULL);
v___x_505_ = lean_usize_of_nat(v___x_491_);
v___x_506_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(v_fvarId_456_, v_mvarId_457_, v_vs_486_, v___x_504_, v___x_505_, v___x_492_, v___y_459_, v___y_460_, v___y_461_, v___y_462_);
lean_dec_ref(v_vs_486_);
return v___x_506_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__7(lean_object* v_fvarId_508_, lean_object* v_mvarId_509_, lean_object* v_as_510_, size_t v_i_511_, size_t v_stop_512_, lean_object* v_b_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_){
_start:
{
uint8_t v___x_519_; 
v___x_519_ = lean_usize_dec_eq(v_i_511_, v_stop_512_);
if (v___x_519_ == 0)
{
lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_520_ = lean_array_uget_borrowed(v_as_510_, v_i_511_);
lean_inc(v___x_520_);
lean_inc(v_mvarId_509_);
lean_inc(v_fvarId_508_);
v___x_521_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__6(v_fvarId_508_, v_mvarId_509_, v___x_520_, v___y_514_, v___y_515_, v___y_516_, v___y_517_);
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v_a_522_; size_t v___x_523_; size_t v___x_524_; 
v_a_522_ = lean_ctor_get(v___x_521_, 0);
lean_inc(v_a_522_);
lean_dec_ref(v___x_521_);
v___x_523_ = ((size_t)1ULL);
v___x_524_ = lean_usize_add(v_i_511_, v___x_523_);
v_i_511_ = v___x_524_;
v_b_513_ = v_a_522_;
goto _start;
}
else
{
lean_dec(v_mvarId_509_);
lean_dec(v_fvarId_508_);
return v___x_521_;
}
}
else
{
lean_object* v___x_526_; 
lean_dec(v_mvarId_509_);
lean_dec(v_fvarId_508_);
v___x_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_526_, 0, v_b_513_);
return v___x_526_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__7___boxed(lean_object* v_fvarId_527_, lean_object* v_mvarId_528_, lean_object* v_as_529_, lean_object* v_i_530_, lean_object* v_stop_531_, lean_object* v_b_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
size_t v_i_boxed_538_; size_t v_stop_boxed_539_; lean_object* v_res_540_; 
v_i_boxed_538_ = lean_unbox_usize(v_i_530_);
lean_dec(v_i_530_);
v_stop_boxed_539_ = lean_unbox_usize(v_stop_531_);
lean_dec(v_stop_531_);
v_res_540_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__7(v_fvarId_527_, v_mvarId_528_, v_as_529_, v_i_boxed_538_, v_stop_boxed_539_, v_b_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec(v___y_534_);
lean_dec_ref(v___y_533_);
lean_dec_ref(v_as_529_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__6___boxed(lean_object* v_fvarId_541_, lean_object* v_mvarId_542_, lean_object* v_x_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__6(v_fvarId_541_, v_mvarId_542_, v_x_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_);
lean_dec(v___y_547_);
lean_dec_ref(v___y_546_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__6(lean_object* v_fvarId_550_, lean_object* v_mvarId_551_, lean_object* v_t_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_){
_start:
{
lean_object* v_root_558_; lean_object* v_tail_559_; lean_object* v___x_560_; 
v_root_558_ = lean_ctor_get(v_t_552_, 0);
lean_inc_ref(v_root_558_);
v_tail_559_ = lean_ctor_get(v_t_552_, 1);
lean_inc_ref(v_tail_559_);
lean_dec_ref(v_t_552_);
lean_inc(v_mvarId_551_);
lean_inc(v_fvarId_550_);
v___x_560_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__6(v_fvarId_550_, v_mvarId_551_, v_root_558_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_581_; 
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_581_ == 0)
{
lean_object* v_unused_582_; 
v_unused_582_ = lean_ctor_get(v___x_560_, 0);
lean_dec(v_unused_582_);
v___x_562_ = v___x_560_;
v_isShared_563_ = v_isSharedCheck_581_;
goto v_resetjp_561_;
}
else
{
lean_dec(v___x_560_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_581_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; uint8_t v___x_567_; 
v___x_564_ = lean_unsigned_to_nat(0u);
v___x_565_ = lean_array_get_size(v_tail_559_);
v___x_566_ = lean_box(0);
v___x_567_ = lean_nat_dec_lt(v___x_564_, v___x_565_);
if (v___x_567_ == 0)
{
lean_object* v___x_569_; 
lean_dec_ref(v_tail_559_);
lean_dec(v_mvarId_551_);
lean_dec(v_fvarId_550_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v___x_566_);
v___x_569_ = v___x_562_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v___x_566_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
else
{
uint8_t v___x_571_; 
v___x_571_ = lean_nat_dec_le(v___x_565_, v___x_565_);
if (v___x_571_ == 0)
{
if (v___x_567_ == 0)
{
lean_object* v___x_573_; 
lean_dec_ref(v_tail_559_);
lean_dec(v_mvarId_551_);
lean_dec(v_fvarId_550_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v___x_566_);
v___x_573_ = v___x_562_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v___x_566_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
else
{
size_t v___x_575_; size_t v___x_576_; lean_object* v___x_577_; 
lean_del_object(v___x_562_);
v___x_575_ = ((size_t)0ULL);
v___x_576_ = lean_usize_of_nat(v___x_565_);
v___x_577_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(v_fvarId_550_, v_mvarId_551_, v_tail_559_, v___x_575_, v___x_576_, v___x_566_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
lean_dec_ref(v_tail_559_);
return v___x_577_;
}
}
else
{
size_t v___x_578_; size_t v___x_579_; lean_object* v___x_580_; 
lean_del_object(v___x_562_);
v___x_578_ = ((size_t)0ULL);
v___x_579_ = lean_usize_of_nat(v___x_565_);
v___x_580_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(v_fvarId_550_, v_mvarId_551_, v_tail_559_, v___x_578_, v___x_579_, v___x_566_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
lean_dec_ref(v_tail_559_);
return v___x_580_;
}
}
}
}
else
{
lean_dec_ref(v_tail_559_);
lean_dec(v_mvarId_551_);
lean_dec(v_fvarId_550_);
return v___x_560_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__6___boxed(lean_object* v_fvarId_583_, lean_object* v_mvarId_584_, lean_object* v_t_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__6(v_fvarId_583_, v_mvarId_584_, v_t_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
return v_res_591_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4___closed__0(void){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = l_Lean_instInhabitedPersistentArrayNode_default(lean_box(0));
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4(lean_object* v_fvarId_593_, lean_object* v_mvarId_594_, lean_object* v_x_595_, size_t v_x_596_, size_t v_x_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_){
_start:
{
if (lean_obj_tag(v_x_595_) == 0)
{
lean_object* v_cs_603_; lean_object* v___x_604_; size_t v___x_605_; lean_object* v_j_606_; lean_object* v___x_607_; size_t v___x_608_; size_t v___x_609_; size_t v___x_610_; size_t v___x_611_; size_t v___x_612_; size_t v___x_613_; lean_object* v___x_614_; 
v_cs_603_ = lean_ctor_get(v_x_595_, 0);
lean_inc_ref(v_cs_603_);
lean_dec_ref(v_x_595_);
v___x_604_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4___closed__0);
v___x_605_ = lean_usize_shift_right(v_x_596_, v_x_597_);
v_j_606_ = lean_usize_to_nat(v___x_605_);
v___x_607_ = lean_array_get_borrowed(v___x_604_, v_cs_603_, v_j_606_);
v___x_608_ = ((size_t)1ULL);
v___x_609_ = lean_usize_shift_left(v___x_608_, v_x_597_);
v___x_610_ = lean_usize_sub(v___x_609_, v___x_608_);
v___x_611_ = lean_usize_land(v_x_596_, v___x_610_);
v___x_612_ = ((size_t)5ULL);
v___x_613_ = lean_usize_sub(v_x_597_, v___x_612_);
lean_inc(v___x_607_);
lean_inc(v_mvarId_594_);
lean_inc(v_fvarId_593_);
v___x_614_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4(v_fvarId_593_, v_mvarId_594_, v___x_607_, v___x_611_, v___x_613_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_636_; 
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_636_ == 0)
{
lean_object* v_unused_637_; 
v_unused_637_ = lean_ctor_get(v___x_614_, 0);
lean_dec(v_unused_637_);
v___x_616_ = v___x_614_;
v_isShared_617_ = v_isSharedCheck_636_;
goto v_resetjp_615_;
}
else
{
lean_dec(v___x_614_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_636_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; uint8_t v___x_622_; 
v___x_618_ = lean_unsigned_to_nat(1u);
v___x_619_ = lean_nat_add(v_j_606_, v___x_618_);
lean_dec(v_j_606_);
v___x_620_ = lean_array_get_size(v_cs_603_);
v___x_621_ = lean_box(0);
v___x_622_ = lean_nat_dec_lt(v___x_619_, v___x_620_);
if (v___x_622_ == 0)
{
lean_object* v___x_624_; 
lean_dec(v___x_619_);
lean_dec_ref(v_cs_603_);
lean_dec(v_mvarId_594_);
lean_dec(v_fvarId_593_);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 0, v___x_621_);
v___x_624_ = v___x_616_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v___x_621_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
else
{
uint8_t v___x_626_; 
v___x_626_ = lean_nat_dec_le(v___x_620_, v___x_620_);
if (v___x_626_ == 0)
{
if (v___x_622_ == 0)
{
lean_object* v___x_628_; 
lean_dec(v___x_619_);
lean_dec_ref(v_cs_603_);
lean_dec(v_mvarId_594_);
lean_dec(v_fvarId_593_);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 0, v___x_621_);
v___x_628_ = v___x_616_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v___x_621_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
else
{
size_t v___x_630_; size_t v___x_631_; lean_object* v___x_632_; 
lean_del_object(v___x_616_);
v___x_630_ = lean_usize_of_nat(v___x_619_);
lean_dec(v___x_619_);
v___x_631_ = lean_usize_of_nat(v___x_620_);
v___x_632_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__7(v_fvarId_593_, v_mvarId_594_, v_cs_603_, v___x_630_, v___x_631_, v___x_621_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
lean_dec_ref(v_cs_603_);
return v___x_632_;
}
}
else
{
size_t v___x_633_; size_t v___x_634_; lean_object* v___x_635_; 
lean_del_object(v___x_616_);
v___x_633_ = lean_usize_of_nat(v___x_619_);
lean_dec(v___x_619_);
v___x_634_ = lean_usize_of_nat(v___x_620_);
v___x_635_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4_spec__7(v_fvarId_593_, v_mvarId_594_, v_cs_603_, v___x_633_, v___x_634_, v___x_621_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
lean_dec_ref(v_cs_603_);
return v___x_635_;
}
}
}
}
else
{
lean_dec(v_j_606_);
lean_dec_ref(v_cs_603_);
lean_dec(v_mvarId_594_);
lean_dec(v_fvarId_593_);
return v___x_614_;
}
}
else
{
lean_object* v_vs_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_659_; 
v_vs_638_ = lean_ctor_get(v_x_595_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v_x_595_);
if (v_isSharedCheck_659_ == 0)
{
v___x_640_ = v_x_595_;
v_isShared_641_ = v_isSharedCheck_659_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_vs_638_);
lean_dec(v_x_595_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_659_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; uint8_t v___x_645_; 
v___x_642_ = lean_usize_to_nat(v_x_596_);
v___x_643_ = lean_array_get_size(v_vs_638_);
v___x_644_ = lean_box(0);
v___x_645_ = lean_nat_dec_lt(v___x_642_, v___x_643_);
if (v___x_645_ == 0)
{
lean_object* v___x_647_; 
lean_dec(v___x_642_);
lean_dec_ref(v_vs_638_);
lean_dec(v_mvarId_594_);
lean_dec(v_fvarId_593_);
if (v_isShared_641_ == 0)
{
lean_ctor_set_tag(v___x_640_, 0);
lean_ctor_set(v___x_640_, 0, v___x_644_);
v___x_647_ = v___x_640_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v___x_644_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
else
{
uint8_t v___x_649_; 
v___x_649_ = lean_nat_dec_le(v___x_643_, v___x_643_);
if (v___x_649_ == 0)
{
if (v___x_645_ == 0)
{
lean_object* v___x_651_; 
lean_dec(v___x_642_);
lean_dec_ref(v_vs_638_);
lean_dec(v_mvarId_594_);
lean_dec(v_fvarId_593_);
if (v_isShared_641_ == 0)
{
lean_ctor_set_tag(v___x_640_, 0);
lean_ctor_set(v___x_640_, 0, v___x_644_);
v___x_651_ = v___x_640_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v___x_644_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
else
{
size_t v___x_653_; size_t v___x_654_; lean_object* v___x_655_; 
lean_del_object(v___x_640_);
v___x_653_ = lean_usize_of_nat(v___x_642_);
lean_dec(v___x_642_);
v___x_654_ = lean_usize_of_nat(v___x_643_);
v___x_655_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(v_fvarId_593_, v_mvarId_594_, v_vs_638_, v___x_653_, v___x_654_, v___x_644_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
lean_dec_ref(v_vs_638_);
return v___x_655_;
}
}
else
{
size_t v___x_656_; size_t v___x_657_; lean_object* v___x_658_; 
lean_del_object(v___x_640_);
v___x_656_ = lean_usize_of_nat(v___x_642_);
lean_dec(v___x_642_);
v___x_657_ = lean_usize_of_nat(v___x_643_);
v___x_658_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(v_fvarId_593_, v_mvarId_594_, v_vs_638_, v___x_656_, v___x_657_, v___x_644_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
lean_dec_ref(v_vs_638_);
return v___x_658_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4___boxed(lean_object* v_fvarId_660_, lean_object* v_mvarId_661_, lean_object* v_x_662_, lean_object* v_x_663_, lean_object* v_x_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
size_t v_x_9394__boxed_670_; size_t v_x_9395__boxed_671_; lean_object* v_res_672_; 
v_x_9394__boxed_670_ = lean_unbox_usize(v_x_663_);
lean_dec(v_x_663_);
v_x_9395__boxed_671_ = lean_unbox_usize(v_x_664_);
lean_dec(v_x_664_);
v_res_672_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4(v_fvarId_660_, v_mvarId_661_, v_x_662_, v_x_9394__boxed_670_, v_x_9395__boxed_671_, v___y_665_, v___y_666_, v___y_667_, v___y_668_);
lean_dec(v___y_668_);
lean_dec_ref(v___y_667_);
lean_dec(v___y_666_);
lean_dec_ref(v___y_665_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1(lean_object* v_fvarId_673_, lean_object* v_mvarId_674_, lean_object* v_t_675_, lean_object* v_start_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_){
_start:
{
lean_object* v___x_682_; uint8_t v___x_683_; 
v___x_682_ = lean_unsigned_to_nat(0u);
v___x_683_ = lean_nat_dec_eq(v_start_676_, v___x_682_);
if (v___x_683_ == 0)
{
lean_object* v_root_684_; lean_object* v_tail_685_; size_t v_shift_686_; lean_object* v_tailOff_687_; uint8_t v___x_688_; 
v_root_684_ = lean_ctor_get(v_t_675_, 0);
lean_inc_ref(v_root_684_);
v_tail_685_ = lean_ctor_get(v_t_675_, 1);
lean_inc_ref(v_tail_685_);
v_shift_686_ = lean_ctor_get_usize(v_t_675_, 4);
v_tailOff_687_ = lean_ctor_get(v_t_675_, 3);
lean_inc(v_tailOff_687_);
lean_dec_ref(v_t_675_);
v___x_688_ = lean_nat_dec_le(v_tailOff_687_, v_start_676_);
if (v___x_688_ == 0)
{
size_t v___x_689_; lean_object* v___x_690_; 
lean_dec(v_tailOff_687_);
v___x_689_ = lean_usize_of_nat(v_start_676_);
lean_inc(v_mvarId_674_);
lean_inc(v_fvarId_673_);
v___x_690_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__4(v_fvarId_673_, v_mvarId_674_, v_root_684_, v___x_689_, v_shift_686_, v___y_677_, v___y_678_, v___y_679_, v___y_680_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_710_; 
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_710_ == 0)
{
lean_object* v_unused_711_; 
v_unused_711_ = lean_ctor_get(v___x_690_, 0);
lean_dec(v_unused_711_);
v___x_692_ = v___x_690_;
v_isShared_693_ = v_isSharedCheck_710_;
goto v_resetjp_691_;
}
else
{
lean_dec(v___x_690_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_710_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_694_; lean_object* v___x_695_; uint8_t v___x_696_; 
v___x_694_ = lean_array_get_size(v_tail_685_);
v___x_695_ = lean_box(0);
v___x_696_ = lean_nat_dec_lt(v___x_682_, v___x_694_);
if (v___x_696_ == 0)
{
lean_object* v___x_698_; 
lean_dec_ref(v_tail_685_);
lean_dec(v_mvarId_674_);
lean_dec(v_fvarId_673_);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 0, v___x_695_);
v___x_698_ = v___x_692_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v___x_695_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
else
{
uint8_t v___x_700_; 
v___x_700_ = lean_nat_dec_le(v___x_694_, v___x_694_);
if (v___x_700_ == 0)
{
if (v___x_696_ == 0)
{
lean_object* v___x_702_; 
lean_dec_ref(v_tail_685_);
lean_dec(v_mvarId_674_);
lean_dec(v_fvarId_673_);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 0, v___x_695_);
v___x_702_ = v___x_692_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v___x_695_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
return v___x_702_;
}
}
else
{
size_t v___x_704_; size_t v___x_705_; lean_object* v___x_706_; 
lean_del_object(v___x_692_);
v___x_704_ = ((size_t)0ULL);
v___x_705_ = lean_usize_of_nat(v___x_694_);
v___x_706_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(v_fvarId_673_, v_mvarId_674_, v_tail_685_, v___x_704_, v___x_705_, v___x_695_, v___y_677_, v___y_678_, v___y_679_, v___y_680_);
lean_dec_ref(v_tail_685_);
return v___x_706_;
}
}
else
{
size_t v___x_707_; size_t v___x_708_; lean_object* v___x_709_; 
lean_del_object(v___x_692_);
v___x_707_ = ((size_t)0ULL);
v___x_708_ = lean_usize_of_nat(v___x_694_);
v___x_709_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(v_fvarId_673_, v_mvarId_674_, v_tail_685_, v___x_707_, v___x_708_, v___x_695_, v___y_677_, v___y_678_, v___y_679_, v___y_680_);
lean_dec_ref(v_tail_685_);
return v___x_709_;
}
}
}
}
else
{
lean_dec_ref(v_tail_685_);
lean_dec(v_mvarId_674_);
lean_dec(v_fvarId_673_);
return v___x_690_;
}
}
else
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; uint8_t v___x_715_; 
lean_dec_ref(v_root_684_);
v___x_712_ = lean_nat_sub(v_start_676_, v_tailOff_687_);
lean_dec(v_tailOff_687_);
v___x_713_ = lean_array_get_size(v_tail_685_);
v___x_714_ = lean_box(0);
v___x_715_ = lean_nat_dec_lt(v___x_712_, v___x_713_);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; 
lean_dec(v___x_712_);
lean_dec_ref(v_tail_685_);
lean_dec(v_mvarId_674_);
lean_dec(v_fvarId_673_);
v___x_716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_716_, 0, v___x_714_);
return v___x_716_;
}
else
{
uint8_t v___x_717_; 
v___x_717_ = lean_nat_dec_le(v___x_713_, v___x_713_);
if (v___x_717_ == 0)
{
if (v___x_715_ == 0)
{
lean_object* v___x_718_; 
lean_dec(v___x_712_);
lean_dec_ref(v_tail_685_);
lean_dec(v_mvarId_674_);
lean_dec(v_fvarId_673_);
v___x_718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_718_, 0, v___x_714_);
return v___x_718_;
}
else
{
size_t v___x_719_; size_t v___x_720_; lean_object* v___x_721_; 
v___x_719_ = lean_usize_of_nat(v___x_712_);
lean_dec(v___x_712_);
v___x_720_ = lean_usize_of_nat(v___x_713_);
v___x_721_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(v_fvarId_673_, v_mvarId_674_, v_tail_685_, v___x_719_, v___x_720_, v___x_714_, v___y_677_, v___y_678_, v___y_679_, v___y_680_);
lean_dec_ref(v_tail_685_);
return v___x_721_;
}
}
else
{
size_t v___x_722_; size_t v___x_723_; lean_object* v___x_724_; 
v___x_722_ = lean_usize_of_nat(v___x_712_);
lean_dec(v___x_712_);
v___x_723_ = lean_usize_of_nat(v___x_713_);
v___x_724_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5(v_fvarId_673_, v_mvarId_674_, v_tail_685_, v___x_722_, v___x_723_, v___x_714_, v___y_677_, v___y_678_, v___y_679_, v___y_680_);
lean_dec_ref(v_tail_685_);
return v___x_724_;
}
}
}
}
else
{
lean_object* v___x_725_; 
v___x_725_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__6(v_fvarId_673_, v_mvarId_674_, v_t_675_, v___y_677_, v___y_678_, v___y_679_, v___y_680_);
return v___x_725_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1___boxed(lean_object* v_fvarId_726_, lean_object* v_mvarId_727_, lean_object* v_t_728_, lean_object* v_start_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1(v_fvarId_726_, v_mvarId_727_, v_t_728_, v_start_729_, v___y_730_, v___y_731_, v___y_732_, v___y_733_);
lean_dec(v___y_733_);
lean_dec_ref(v___y_732_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
lean_dec(v_start_729_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1(lean_object* v_fvarId_736_, lean_object* v_mvarId_737_, lean_object* v_lctx_738_, lean_object* v_start_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
lean_object* v_decls_745_; lean_object* v___x_746_; 
v_decls_745_ = lean_ctor_get(v_lctx_738_, 1);
lean_inc_ref(v_decls_745_);
lean_dec_ref(v_lctx_738_);
v___x_746_ = l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1(v_fvarId_736_, v_mvarId_737_, v_decls_745_, v_start_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1___boxed(lean_object* v_fvarId_747_, lean_object* v_mvarId_748_, lean_object* v_lctx_749_, lean_object* v_start_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l_Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1(v_fvarId_747_, v_mvarId_748_, v_lctx_749_, v_start_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
lean_dec(v___y_754_);
lean_dec_ref(v___y_753_);
lean_dec(v___y_752_);
lean_dec_ref(v___y_751_);
lean_dec(v_start_750_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13_spec__14___redArg(lean_object* v_x_757_, lean_object* v_x_758_, lean_object* v_x_759_, lean_object* v_x_760_){
_start:
{
lean_object* v_ks_761_; lean_object* v_vs_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_786_; 
v_ks_761_ = lean_ctor_get(v_x_757_, 0);
v_vs_762_ = lean_ctor_get(v_x_757_, 1);
v_isSharedCheck_786_ = !lean_is_exclusive(v_x_757_);
if (v_isSharedCheck_786_ == 0)
{
v___x_764_ = v_x_757_;
v_isShared_765_ = v_isSharedCheck_786_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_vs_762_);
lean_inc(v_ks_761_);
lean_dec(v_x_757_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_786_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_766_; uint8_t v___x_767_; 
v___x_766_ = lean_array_get_size(v_ks_761_);
v___x_767_ = lean_nat_dec_lt(v_x_758_, v___x_766_);
if (v___x_767_ == 0)
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_771_; 
lean_dec(v_x_758_);
v___x_768_ = lean_array_push(v_ks_761_, v_x_759_);
v___x_769_ = lean_array_push(v_vs_762_, v_x_760_);
if (v_isShared_765_ == 0)
{
lean_ctor_set(v___x_764_, 1, v___x_769_);
lean_ctor_set(v___x_764_, 0, v___x_768_);
v___x_771_ = v___x_764_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_768_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v___x_769_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
else
{
lean_object* v_k_x27_773_; uint8_t v___x_774_; 
v_k_x27_773_ = lean_array_fget_borrowed(v_ks_761_, v_x_758_);
v___x_774_ = l_Lean_instBEqMVarId_beq(v_x_759_, v_k_x27_773_);
if (v___x_774_ == 0)
{
lean_object* v___x_776_; 
if (v_isShared_765_ == 0)
{
v___x_776_ = v___x_764_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_ks_761_);
lean_ctor_set(v_reuseFailAlloc_780_, 1, v_vs_762_);
v___x_776_ = v_reuseFailAlloc_780_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_777_ = lean_unsigned_to_nat(1u);
v___x_778_ = lean_nat_add(v_x_758_, v___x_777_);
lean_dec(v_x_758_);
v_x_757_ = v___x_776_;
v_x_758_ = v___x_778_;
goto _start;
}
}
else
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_784_; 
v___x_781_ = lean_array_fset(v_ks_761_, v_x_758_, v_x_759_);
v___x_782_ = lean_array_fset(v_vs_762_, v_x_758_, v_x_760_);
lean_dec(v_x_758_);
if (v_isShared_765_ == 0)
{
lean_ctor_set(v___x_764_, 1, v___x_782_);
lean_ctor_set(v___x_764_, 0, v___x_781_);
v___x_784_ = v___x_764_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v___x_781_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v___x_782_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13___redArg(lean_object* v_n_787_, lean_object* v_k_788_, lean_object* v_v_789_){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_790_ = lean_unsigned_to_nat(0u);
v___x_791_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13_spec__14___redArg(v_n_787_, v___x_790_, v_k_788_, v_v_789_);
return v___x_791_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__0(void){
_start:
{
size_t v___x_792_; size_t v___x_793_; size_t v___x_794_; 
v___x_792_ = ((size_t)5ULL);
v___x_793_ = ((size_t)1ULL);
v___x_794_ = lean_usize_shift_left(v___x_793_, v___x_792_);
return v___x_794_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__1(void){
_start:
{
size_t v___x_795_; size_t v___x_796_; size_t v___x_797_; 
v___x_795_ = ((size_t)1ULL);
v___x_796_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__0);
v___x_797_ = lean_usize_sub(v___x_796_, v___x_795_);
return v___x_797_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_798_; 
v___x_798_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg(lean_object* v_x_799_, size_t v_x_800_, size_t v_x_801_, lean_object* v_x_802_, lean_object* v_x_803_){
_start:
{
if (lean_obj_tag(v_x_799_) == 0)
{
lean_object* v_es_804_; size_t v___x_805_; size_t v___x_806_; size_t v___x_807_; size_t v___x_808_; lean_object* v_j_809_; lean_object* v___x_810_; uint8_t v___x_811_; 
v_es_804_ = lean_ctor_get(v_x_799_, 0);
v___x_805_ = ((size_t)5ULL);
v___x_806_ = ((size_t)1ULL);
v___x_807_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__1);
v___x_808_ = lean_usize_land(v_x_800_, v___x_807_);
v_j_809_ = lean_usize_to_nat(v___x_808_);
v___x_810_ = lean_array_get_size(v_es_804_);
v___x_811_ = lean_nat_dec_lt(v_j_809_, v___x_810_);
if (v___x_811_ == 0)
{
lean_dec(v_j_809_);
lean_dec(v_x_803_);
lean_dec(v_x_802_);
return v_x_799_;
}
else
{
lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_848_; 
lean_inc_ref(v_es_804_);
v_isSharedCheck_848_ = !lean_is_exclusive(v_x_799_);
if (v_isSharedCheck_848_ == 0)
{
lean_object* v_unused_849_; 
v_unused_849_ = lean_ctor_get(v_x_799_, 0);
lean_dec(v_unused_849_);
v___x_813_ = v_x_799_;
v_isShared_814_ = v_isSharedCheck_848_;
goto v_resetjp_812_;
}
else
{
lean_dec(v_x_799_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_848_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v_v_815_; lean_object* v___x_816_; lean_object* v_xs_x27_817_; lean_object* v___y_819_; 
v_v_815_ = lean_array_fget(v_es_804_, v_j_809_);
v___x_816_ = lean_box(0);
v_xs_x27_817_ = lean_array_fset(v_es_804_, v_j_809_, v___x_816_);
switch(lean_obj_tag(v_v_815_))
{
case 0:
{
lean_object* v_key_824_; lean_object* v_val_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_835_; 
v_key_824_ = lean_ctor_get(v_v_815_, 0);
v_val_825_ = lean_ctor_get(v_v_815_, 1);
v_isSharedCheck_835_ = !lean_is_exclusive(v_v_815_);
if (v_isSharedCheck_835_ == 0)
{
v___x_827_ = v_v_815_;
v_isShared_828_ = v_isSharedCheck_835_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_val_825_);
lean_inc(v_key_824_);
lean_dec(v_v_815_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_835_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
uint8_t v___x_829_; 
v___x_829_ = l_Lean_instBEqMVarId_beq(v_x_802_, v_key_824_);
if (v___x_829_ == 0)
{
lean_object* v___x_830_; lean_object* v___x_831_; 
lean_del_object(v___x_827_);
v___x_830_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_824_, v_val_825_, v_x_802_, v_x_803_);
v___x_831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
v___y_819_ = v___x_831_;
goto v___jp_818_;
}
else
{
lean_object* v___x_833_; 
lean_dec(v_val_825_);
lean_dec(v_key_824_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 1, v_x_803_);
lean_ctor_set(v___x_827_, 0, v_x_802_);
v___x_833_ = v___x_827_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_x_802_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v_x_803_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
v___y_819_ = v___x_833_;
goto v___jp_818_;
}
}
}
}
case 1:
{
lean_object* v_node_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_846_; 
v_node_836_ = lean_ctor_get(v_v_815_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v_v_815_);
if (v_isSharedCheck_846_ == 0)
{
v___x_838_ = v_v_815_;
v_isShared_839_ = v_isSharedCheck_846_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_node_836_);
lean_dec(v_v_815_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_846_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
size_t v___x_840_; size_t v___x_841_; lean_object* v___x_842_; lean_object* v___x_844_; 
v___x_840_ = lean_usize_shift_right(v_x_800_, v___x_805_);
v___x_841_ = lean_usize_add(v_x_801_, v___x_806_);
v___x_842_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg(v_node_836_, v___x_840_, v___x_841_, v_x_802_, v_x_803_);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 0, v___x_842_);
v___x_844_ = v___x_838_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v___x_842_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
v___y_819_ = v___x_844_;
goto v___jp_818_;
}
}
}
default: 
{
lean_object* v___x_847_; 
v___x_847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_847_, 0, v_x_802_);
lean_ctor_set(v___x_847_, 1, v_x_803_);
v___y_819_ = v___x_847_;
goto v___jp_818_;
}
}
v___jp_818_:
{
lean_object* v___x_820_; lean_object* v___x_822_; 
v___x_820_ = lean_array_fset(v_xs_x27_817_, v_j_809_, v___y_819_);
lean_dec(v_j_809_);
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 0, v___x_820_);
v___x_822_ = v___x_813_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v___x_820_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
return v___x_822_;
}
}
}
}
}
else
{
lean_object* v_ks_850_; lean_object* v_vs_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_871_; 
v_ks_850_ = lean_ctor_get(v_x_799_, 0);
v_vs_851_ = lean_ctor_get(v_x_799_, 1);
v_isSharedCheck_871_ = !lean_is_exclusive(v_x_799_);
if (v_isSharedCheck_871_ == 0)
{
v___x_853_ = v_x_799_;
v_isShared_854_ = v_isSharedCheck_871_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_vs_851_);
lean_inc(v_ks_850_);
lean_dec(v_x_799_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_871_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_856_; 
if (v_isShared_854_ == 0)
{
v___x_856_ = v___x_853_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_ks_850_);
lean_ctor_set(v_reuseFailAlloc_870_, 1, v_vs_851_);
v___x_856_ = v_reuseFailAlloc_870_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
lean_object* v_newNode_857_; uint8_t v___y_859_; size_t v___x_865_; uint8_t v___x_866_; 
v_newNode_857_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13___redArg(v___x_856_, v_x_802_, v_x_803_);
v___x_865_ = ((size_t)7ULL);
v___x_866_ = lean_usize_dec_le(v___x_865_, v_x_801_);
if (v___x_866_ == 0)
{
lean_object* v___x_867_; lean_object* v___x_868_; uint8_t v___x_869_; 
v___x_867_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_857_);
v___x_868_ = lean_unsigned_to_nat(4u);
v___x_869_ = lean_nat_dec_lt(v___x_867_, v___x_868_);
lean_dec(v___x_867_);
v___y_859_ = v___x_869_;
goto v___jp_858_;
}
else
{
v___y_859_ = v___x_866_;
goto v___jp_858_;
}
v___jp_858_:
{
if (v___y_859_ == 0)
{
lean_object* v_ks_860_; lean_object* v_vs_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v_ks_860_ = lean_ctor_get(v_newNode_857_, 0);
lean_inc_ref(v_ks_860_);
v_vs_861_ = lean_ctor_get(v_newNode_857_, 1);
lean_inc_ref(v_vs_861_);
lean_dec_ref(v_newNode_857_);
v___x_862_ = lean_unsigned_to_nat(0u);
v___x_863_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___closed__2);
v___x_864_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___redArg(v_x_801_, v_ks_860_, v_vs_861_, v___x_862_, v___x_863_);
lean_dec_ref(v_vs_861_);
lean_dec_ref(v_ks_860_);
return v___x_864_;
}
else
{
return v_newNode_857_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___redArg(size_t v_depth_872_, lean_object* v_keys_873_, lean_object* v_vals_874_, lean_object* v_i_875_, lean_object* v_entries_876_){
_start:
{
lean_object* v___x_877_; uint8_t v___x_878_; 
v___x_877_ = lean_array_get_size(v_keys_873_);
v___x_878_ = lean_nat_dec_lt(v_i_875_, v___x_877_);
if (v___x_878_ == 0)
{
lean_dec(v_i_875_);
return v_entries_876_;
}
else
{
lean_object* v_k_879_; lean_object* v_v_880_; uint64_t v___x_881_; size_t v_h_882_; size_t v___x_883_; lean_object* v___x_884_; size_t v___x_885_; size_t v___x_886_; size_t v___x_887_; size_t v_h_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v_k_879_ = lean_array_fget_borrowed(v_keys_873_, v_i_875_);
v_v_880_ = lean_array_fget_borrowed(v_vals_874_, v_i_875_);
v___x_881_ = l_Lean_instHashableMVarId_hash(v_k_879_);
v_h_882_ = lean_uint64_to_usize(v___x_881_);
v___x_883_ = ((size_t)5ULL);
v___x_884_ = lean_unsigned_to_nat(1u);
v___x_885_ = ((size_t)1ULL);
v___x_886_ = lean_usize_sub(v_depth_872_, v___x_885_);
v___x_887_ = lean_usize_mul(v___x_883_, v___x_886_);
v_h_888_ = lean_usize_shift_right(v_h_882_, v___x_887_);
v___x_889_ = lean_nat_add(v_i_875_, v___x_884_);
lean_dec(v_i_875_);
lean_inc(v_v_880_);
lean_inc(v_k_879_);
v___x_890_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg(v_entries_876_, v_h_888_, v_depth_872_, v_k_879_, v_v_880_);
v_i_875_ = v___x_889_;
v_entries_876_ = v___x_890_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___redArg___boxed(lean_object* v_depth_892_, lean_object* v_keys_893_, lean_object* v_vals_894_, lean_object* v_i_895_, lean_object* v_entries_896_){
_start:
{
size_t v_depth_boxed_897_; lean_object* v_res_898_; 
v_depth_boxed_897_ = lean_unbox_usize(v_depth_892_);
lean_dec(v_depth_892_);
v_res_898_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___redArg(v_depth_boxed_897_, v_keys_893_, v_vals_894_, v_i_895_, v_entries_896_);
lean_dec_ref(v_vals_894_);
lean_dec_ref(v_keys_893_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg___boxed(lean_object* v_x_899_, lean_object* v_x_900_, lean_object* v_x_901_, lean_object* v_x_902_, lean_object* v_x_903_){
_start:
{
size_t v_x_9735__boxed_904_; size_t v_x_9736__boxed_905_; lean_object* v_res_906_; 
v_x_9735__boxed_904_ = lean_unbox_usize(v_x_900_);
lean_dec(v_x_900_);
v_x_9736__boxed_905_ = lean_unbox_usize(v_x_901_);
lean_dec(v_x_901_);
v_res_906_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg(v_x_899_, v_x_9735__boxed_904_, v_x_9736__boxed_905_, v_x_902_, v_x_903_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3___redArg(lean_object* v_x_907_, lean_object* v_x_908_, lean_object* v_x_909_){
_start:
{
uint64_t v___x_910_; size_t v___x_911_; size_t v___x_912_; lean_object* v___x_913_; 
v___x_910_ = l_Lean_instHashableMVarId_hash(v_x_908_);
v___x_911_ = lean_uint64_to_usize(v___x_910_);
v___x_912_ = ((size_t)1ULL);
v___x_913_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg(v_x_907_, v___x_911_, v___x_912_, v_x_908_, v_x_909_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___redArg(lean_object* v_mvarId_914_, lean_object* v_val_915_, lean_object* v___y_916_, lean_object* v___y_917_){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v_mctx_921_; lean_object* v_cache_922_; lean_object* v_zetaDeltaFVarIds_923_; lean_object* v_postponed_924_; lean_object* v_diag_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_953_; 
v___x_919_ = lean_st_ref_get(v___y_917_);
lean_dec(v___x_919_);
v___x_920_ = lean_st_ref_take(v___y_916_);
v_mctx_921_ = lean_ctor_get(v___x_920_, 0);
v_cache_922_ = lean_ctor_get(v___x_920_, 1);
v_zetaDeltaFVarIds_923_ = lean_ctor_get(v___x_920_, 2);
v_postponed_924_ = lean_ctor_get(v___x_920_, 3);
v_diag_925_ = lean_ctor_get(v___x_920_, 4);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_953_ == 0)
{
v___x_927_ = v___x_920_;
v_isShared_928_ = v_isSharedCheck_953_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_diag_925_);
lean_inc(v_postponed_924_);
lean_inc(v_zetaDeltaFVarIds_923_);
lean_inc(v_cache_922_);
lean_inc(v_mctx_921_);
lean_dec(v___x_920_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_953_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v_depth_929_; lean_object* v_levelAssignDepth_930_; lean_object* v_lmvarCounter_931_; lean_object* v_mvarCounter_932_; lean_object* v_lDecls_933_; lean_object* v_decls_934_; lean_object* v_userNames_935_; lean_object* v_lAssignment_936_; lean_object* v_eAssignment_937_; lean_object* v_dAssignment_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_952_; 
v_depth_929_ = lean_ctor_get(v_mctx_921_, 0);
v_levelAssignDepth_930_ = lean_ctor_get(v_mctx_921_, 1);
v_lmvarCounter_931_ = lean_ctor_get(v_mctx_921_, 2);
v_mvarCounter_932_ = lean_ctor_get(v_mctx_921_, 3);
v_lDecls_933_ = lean_ctor_get(v_mctx_921_, 4);
v_decls_934_ = lean_ctor_get(v_mctx_921_, 5);
v_userNames_935_ = lean_ctor_get(v_mctx_921_, 6);
v_lAssignment_936_ = lean_ctor_get(v_mctx_921_, 7);
v_eAssignment_937_ = lean_ctor_get(v_mctx_921_, 8);
v_dAssignment_938_ = lean_ctor_get(v_mctx_921_, 9);
v_isSharedCheck_952_ = !lean_is_exclusive(v_mctx_921_);
if (v_isSharedCheck_952_ == 0)
{
v___x_940_ = v_mctx_921_;
v_isShared_941_ = v_isSharedCheck_952_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_dAssignment_938_);
lean_inc(v_eAssignment_937_);
lean_inc(v_lAssignment_936_);
lean_inc(v_userNames_935_);
lean_inc(v_decls_934_);
lean_inc(v_lDecls_933_);
lean_inc(v_mvarCounter_932_);
lean_inc(v_lmvarCounter_931_);
lean_inc(v_levelAssignDepth_930_);
lean_inc(v_depth_929_);
lean_dec(v_mctx_921_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_952_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_942_; lean_object* v___x_944_; 
v___x_942_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3___redArg(v_eAssignment_937_, v_mvarId_914_, v_val_915_);
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 8, v___x_942_);
v___x_944_ = v___x_940_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_depth_929_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v_levelAssignDepth_930_);
lean_ctor_set(v_reuseFailAlloc_951_, 2, v_lmvarCounter_931_);
lean_ctor_set(v_reuseFailAlloc_951_, 3, v_mvarCounter_932_);
lean_ctor_set(v_reuseFailAlloc_951_, 4, v_lDecls_933_);
lean_ctor_set(v_reuseFailAlloc_951_, 5, v_decls_934_);
lean_ctor_set(v_reuseFailAlloc_951_, 6, v_userNames_935_);
lean_ctor_set(v_reuseFailAlloc_951_, 7, v_lAssignment_936_);
lean_ctor_set(v_reuseFailAlloc_951_, 8, v___x_942_);
lean_ctor_set(v_reuseFailAlloc_951_, 9, v_dAssignment_938_);
v___x_944_ = v_reuseFailAlloc_951_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
lean_object* v___x_946_; 
if (v_isShared_928_ == 0)
{
lean_ctor_set(v___x_927_, 0, v___x_944_);
v___x_946_ = v___x_927_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v___x_944_);
lean_ctor_set(v_reuseFailAlloc_950_, 1, v_cache_922_);
lean_ctor_set(v_reuseFailAlloc_950_, 2, v_zetaDeltaFVarIds_923_);
lean_ctor_set(v_reuseFailAlloc_950_, 3, v_postponed_924_);
lean_ctor_set(v_reuseFailAlloc_950_, 4, v_diag_925_);
v___x_946_ = v_reuseFailAlloc_950_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_947_ = lean_st_ref_set(v___y_916_, v___x_946_);
v___x_948_ = lean_box(0);
v___x_949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
return v___x_949_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___redArg___boxed(lean_object* v_mvarId_954_, lean_object* v_val_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___redArg(v_mvarId_954_, v_val_955_, v___y_956_, v___y_957_);
lean_dec(v___y_957_);
lean_dec(v___y_956_);
return v_res_959_;
}
}
static lean_object* _init_l_Lean_MVarId_clear___lam__1___closed__0(void){
_start:
{
lean_object* v___x_960_; 
v___x_960_ = lean_mk_string_unchecked("target depends on '", 19, 19);
return v___x_960_;
}
}
static lean_object* _init_l_Lean_MVarId_clear___lam__1___closed__1(void){
_start:
{
lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_961_ = lean_obj_once(&l_Lean_MVarId_clear___lam__1___closed__0, &l_Lean_MVarId_clear___lam__1___closed__0_once, _init_l_Lean_MVarId_clear___lam__1___closed__0);
v___x_962_ = l_Lean_stringToMessageData(v___x_961_);
return v___x_962_;
}
}
static lean_object* _init_l_Lean_MVarId_clear___lam__1___closed__2(void){
_start:
{
lean_object* v___x_963_; 
v___x_963_ = lean_mk_string_unchecked("unknown variable '", 18, 18);
return v___x_963_;
}
}
static lean_object* _init_l_Lean_MVarId_clear___lam__1___closed__3(void){
_start:
{
lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_964_ = lean_obj_once(&l_Lean_MVarId_clear___lam__1___closed__2, &l_Lean_MVarId_clear___lam__1___closed__2_once, _init_l_Lean_MVarId_clear___lam__1___closed__2);
v___x_965_ = l_Lean_stringToMessageData(v___x_964_);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_clear___lam__1(lean_object* v_mvarId_966_, lean_object* v___x_967_, lean_object* v_fvarId_968_, lean_object* v___f_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
lean_object* v___y_976_; lean_object* v___y_977_; lean_object* v___y_978_; lean_object* v___y_979_; lean_object* v___y_980_; lean_object* v___y_981_; lean_object* v___y_982_; lean_object* v___y_983_; lean_object* v___y_984_; lean_object* v___x_1006_; 
lean_inc(v___x_967_);
lean_inc(v_mvarId_966_);
v___x_1006_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_966_, v___x_967_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_lctx_1007_; lean_object* v___y_1009_; lean_object* v___y_1010_; lean_object* v___y_1011_; lean_object* v___y_1012_; lean_object* v___y_1013_; lean_object* v___y_1014_; lean_object* v___y_1015_; lean_object* v___y_1022_; lean_object* v___y_1023_; lean_object* v___y_1024_; lean_object* v___y_1025_; uint8_t v___x_1082_; 
lean_dec_ref(v___x_1006_);
v_lctx_1007_ = lean_ctor_get(v___y_970_, 2);
lean_inc_ref(v_lctx_1007_);
v___x_1082_ = l_Lean_LocalContext_contains(v_lctx_1007_, v_fvarId_968_);
if (v___x_1082_ == 0)
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1083_ = lean_obj_once(&l_Lean_MVarId_clear___lam__1___closed__3, &l_Lean_MVarId_clear___lam__1___closed__3_once, _init_l_Lean_MVarId_clear___lam__1___closed__3);
lean_inc(v_fvarId_968_);
v___x_1084_ = l_Lean_mkFVar(v_fvarId_968_);
v___x_1085_ = l_Lean_MessageData_ofExpr(v___x_1084_);
v___x_1086_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1083_);
lean_ctor_set(v___x_1086_, 1, v___x_1085_);
v___x_1087_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7);
v___x_1088_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1086_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
lean_inc(v_mvarId_966_);
lean_inc(v___x_967_);
v___x_1090_ = l_Lean_Meta_throwTacticEx___redArg(v___x_967_, v_mvarId_966_, v___x_1089_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_dec_ref(v___x_1090_);
v___y_1022_ = v___y_970_;
v___y_1023_ = v___y_971_;
v___y_1024_ = v___y_972_;
v___y_1025_ = v___y_973_;
goto v___jp_1021_;
}
else
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1098_; 
lean_dec_ref(v_lctx_1007_);
lean_dec_ref(v___y_970_);
lean_dec_ref(v___f_969_);
lean_dec(v_fvarId_968_);
lean_dec(v___x_967_);
lean_dec(v_mvarId_966_);
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1093_ = v___x_1090_;
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_1090_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
if (v_isShared_1094_ == 0)
{
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_a_1091_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
return v___x_1096_;
}
}
}
}
else
{
v___y_1022_ = v___y_970_;
v___y_1023_ = v___y_971_;
v___y_1024_ = v___y_972_;
v___y_1025_ = v___y_973_;
goto v___jp_1021_;
}
v___jp_1008_:
{
lean_object* v_localInstances_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v_localInstances_1016_ = lean_ctor_get(v___y_1012_, 3);
v___x_1017_ = lean_local_ctx_erase(v_lctx_1007_, v_fvarId_968_);
lean_inc(v___y_1011_);
v___x_1018_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_969_, v_localInstances_1016_, v___y_1011_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_inc_ref(v_localInstances_1016_);
v___y_976_ = v___y_1009_;
v___y_977_ = v___y_1013_;
v___y_978_ = v___y_1010_;
v___y_979_ = v___y_1014_;
v___y_980_ = v___y_1012_;
v___y_981_ = v___y_1015_;
v___y_982_ = v___y_1011_;
v___y_983_ = v___x_1017_;
v___y_984_ = v_localInstances_1016_;
goto v___jp_975_;
}
else
{
lean_object* v_val_1019_; lean_object* v___x_1020_; 
v_val_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc(v_val_1019_);
lean_dec_ref(v___x_1018_);
lean_inc_ref(v_localInstances_1016_);
v___x_1020_ = l_Array_eraseIdx___redArg(v_localInstances_1016_, v_val_1019_);
v___y_976_ = v___y_1009_;
v___y_977_ = v___y_1013_;
v___y_978_ = v___y_1010_;
v___y_979_ = v___y_1014_;
v___y_980_ = v___y_1012_;
v___y_981_ = v___y_1015_;
v___y_982_ = v___y_1011_;
v___y_983_ = v___x_1017_;
v___y_984_ = v___x_1020_;
goto v___jp_975_;
}
}
v___jp_1021_:
{
lean_object* v___x_1026_; 
lean_inc(v_mvarId_966_);
v___x_1026_ = l_Lean_MVarId_getTag(v_mvarId_966_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
if (lean_obj_tag(v___x_1026_) == 0)
{
lean_object* v_a_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v_a_1027_ = lean_ctor_get(v___x_1026_, 0);
lean_inc(v_a_1027_);
lean_dec_ref(v___x_1026_);
v___x_1028_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_lctx_1007_);
lean_inc(v_mvarId_966_);
lean_inc(v_fvarId_968_);
v___x_1029_ = l_Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1(v_fvarId_968_, v_mvarId_966_, v_lctx_1007_, v___x_1028_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
if (lean_obj_tag(v___x_1029_) == 0)
{
lean_object* v___x_1030_; 
lean_dec_ref(v___x_1029_);
lean_inc(v_mvarId_966_);
v___x_1030_ = l_Lean_MVarId_getDecl(v_mvarId_966_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v_a_1031_; lean_object* v_type_1032_; lean_object* v___x_1033_; lean_object* v_a_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1057_; 
v_a_1031_ = lean_ctor_get(v___x_1030_, 0);
lean_inc(v_a_1031_);
lean_dec_ref(v___x_1030_);
v_type_1032_ = lean_ctor_get(v_a_1031_, 2);
lean_inc_ref_n(v_type_1032_, 2);
lean_dec(v_a_1031_);
lean_inc(v_fvarId_968_);
v___x_1033_ = l_Lean_exprDependsOn___at___00Lean_MVarId_clear_spec__3___redArg(v_type_1032_, v_fvarId_968_, v___y_1023_, v___y_1025_);
v_a_1034_ = lean_ctor_get(v___x_1033_, 0);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1033_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1036_ = v___x_1033_;
v_isShared_1037_ = v_isSharedCheck_1057_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_a_1034_);
lean_dec(v___x_1033_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1057_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
uint8_t v___x_1038_; 
v___x_1038_ = lean_unbox(v_a_1034_);
lean_dec(v_a_1034_);
if (v___x_1038_ == 0)
{
lean_del_object(v___x_1036_);
lean_dec(v___x_967_);
v___y_1009_ = v_a_1027_;
v___y_1010_ = v_type_1032_;
v___y_1011_ = v___x_1028_;
v___y_1012_ = v___y_1022_;
v___y_1013_ = v___y_1023_;
v___y_1014_ = v___y_1024_;
v___y_1015_ = v___y_1025_;
goto v___jp_1008_;
}
else
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1046_; 
v___x_1039_ = lean_obj_once(&l_Lean_MVarId_clear___lam__1___closed__1, &l_Lean_MVarId_clear___lam__1___closed__1_once, _init_l_Lean_MVarId_clear___lam__1___closed__1);
lean_inc(v_fvarId_968_);
v___x_1040_ = l_Lean_mkFVar(v_fvarId_968_);
v___x_1041_ = l_Lean_MessageData_ofExpr(v___x_1040_);
v___x_1042_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1039_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___x_1043_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__7);
v___x_1044_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1042_);
lean_ctor_set(v___x_1044_, 1, v___x_1043_);
if (v_isShared_1037_ == 0)
{
lean_ctor_set_tag(v___x_1036_, 1);
lean_ctor_set(v___x_1036_, 0, v___x_1044_);
v___x_1046_ = v___x_1036_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v___x_1044_);
v___x_1046_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
lean_object* v___x_1047_; 
lean_inc(v_mvarId_966_);
v___x_1047_ = l_Lean_Meta_throwTacticEx___redArg(v___x_967_, v_mvarId_966_, v___x_1046_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_dec_ref(v___x_1047_);
v___y_1009_ = v_a_1027_;
v___y_1010_ = v_type_1032_;
v___y_1011_ = v___x_1028_;
v___y_1012_ = v___y_1022_;
v___y_1013_ = v___y_1023_;
v___y_1014_ = v___y_1024_;
v___y_1015_ = v___y_1025_;
goto v___jp_1008_;
}
else
{
lean_object* v_a_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1055_; 
lean_dec_ref(v_type_1032_);
lean_dec(v_a_1027_);
lean_dec_ref(v___y_1022_);
lean_dec_ref(v_lctx_1007_);
lean_dec_ref(v___f_969_);
lean_dec(v_fvarId_968_);
lean_dec(v_mvarId_966_);
v_a_1048_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1050_ = v___x_1047_;
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_a_1048_);
lean_dec(v___x_1047_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1053_; 
if (v_isShared_1051_ == 0)
{
v___x_1053_ = v___x_1050_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v_a_1048_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1065_; 
lean_dec(v_a_1027_);
lean_dec_ref(v___y_1022_);
lean_dec_ref(v_lctx_1007_);
lean_dec_ref(v___f_969_);
lean_dec(v_fvarId_968_);
lean_dec(v___x_967_);
lean_dec(v_mvarId_966_);
v_a_1058_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1060_ = v___x_1030_;
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_a_1058_);
lean_dec(v___x_1030_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1063_; 
if (v_isShared_1061_ == 0)
{
v___x_1063_ = v___x_1060_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_a_1058_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
}
else
{
lean_object* v_a_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1073_; 
lean_dec(v_a_1027_);
lean_dec_ref(v___y_1022_);
lean_dec_ref(v_lctx_1007_);
lean_dec_ref(v___f_969_);
lean_dec(v_fvarId_968_);
lean_dec(v___x_967_);
lean_dec(v_mvarId_966_);
v_a_1066_ = lean_ctor_get(v___x_1029_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1068_ = v___x_1029_;
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_a_1066_);
lean_dec(v___x_1029_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1071_; 
if (v_isShared_1069_ == 0)
{
v___x_1071_ = v___x_1068_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_a_1066_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
return v___x_1071_;
}
}
}
}
else
{
lean_object* v_a_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1081_; 
lean_dec_ref(v___y_1022_);
lean_dec_ref(v_lctx_1007_);
lean_dec_ref(v___f_969_);
lean_dec(v_fvarId_968_);
lean_dec(v___x_967_);
lean_dec(v_mvarId_966_);
v_a_1074_ = lean_ctor_get(v___x_1026_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1076_ = v___x_1026_;
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_a_1074_);
lean_dec(v___x_1026_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1079_; 
if (v_isShared_1077_ == 0)
{
v___x_1079_ = v___x_1076_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_a_1074_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
}
}
else
{
lean_object* v_a_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1106_; 
lean_dec_ref(v___y_970_);
lean_dec_ref(v___f_969_);
lean_dec(v_fvarId_968_);
lean_dec(v___x_967_);
lean_dec(v_mvarId_966_);
v_a_1099_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1106_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1101_ = v___x_1006_;
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_a_1099_);
lean_dec(v___x_1006_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1104_; 
if (v_isShared_1102_ == 0)
{
v___x_1104_ = v___x_1101_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v_a_1099_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
}
v___jp_975_:
{
uint8_t v___x_985_; lean_object* v___x_986_; 
v___x_985_ = 2;
v___x_986_ = l_Lean_Meta_mkFreshExprMVarAt(v___y_983_, v___y_984_, v___y_978_, v___x_985_, v___y_976_, v___y_982_, v___y_980_, v___y_977_, v___y_979_, v___y_981_);
lean_dec_ref(v___y_980_);
if (lean_obj_tag(v___x_986_) == 0)
{
lean_object* v_a_987_; lean_object* v___x_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_996_; 
v_a_987_ = lean_ctor_get(v___x_986_, 0);
lean_inc_n(v_a_987_, 2);
lean_dec_ref(v___x_986_);
v___x_988_ = l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___redArg(v_mvarId_966_, v_a_987_, v___y_977_, v___y_981_);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_996_ == 0)
{
lean_object* v_unused_997_; 
v_unused_997_ = lean_ctor_get(v___x_988_, 0);
lean_dec(v_unused_997_);
v___x_990_ = v___x_988_;
v_isShared_991_ = v_isSharedCheck_996_;
goto v_resetjp_989_;
}
else
{
lean_dec(v___x_988_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_996_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_992_; lean_object* v___x_994_; 
v___x_992_ = l_Lean_Expr_mvarId_x21(v_a_987_);
lean_dec(v_a_987_);
if (v_isShared_991_ == 0)
{
lean_ctor_set(v___x_990_, 0, v___x_992_);
v___x_994_ = v___x_990_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v___x_992_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
else
{
lean_object* v_a_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1005_; 
lean_dec(v_mvarId_966_);
v_a_998_ = lean_ctor_get(v___x_986_, 0);
v_isSharedCheck_1005_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_1000_ = v___x_986_;
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_a_998_);
lean_dec(v___x_986_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1003_; 
if (v_isShared_1001_ == 0)
{
v___x_1003_ = v___x_1000_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_a_998_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_clear___lam__1___boxed(lean_object* v_mvarId_1107_, lean_object* v___x_1108_, lean_object* v_fvarId_1109_, lean_object* v___f_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_){
_start:
{
lean_object* v_res_1116_; 
v_res_1116_ = l_Lean_MVarId_clear___lam__1(v_mvarId_1107_, v___x_1108_, v_fvarId_1109_, v___f_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_);
lean_dec(v___y_1114_);
lean_dec_ref(v___y_1113_);
lean_dec(v___y_1112_);
return v_res_1116_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_clear(lean_object* v_mvarId_1117_, lean_object* v_fvarId_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_){
_start:
{
lean_object* v___f_1124_; lean_object* v___x_1125_; lean_object* v___f_1126_; lean_object* v___x_1127_; 
lean_inc(v_fvarId_1118_);
v___f_1124_ = lean_alloc_closure((void*)(l_Lean_MVarId_clear___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1124_, 0, v_fvarId_1118_);
v___x_1125_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_MVarId_clear_spec__1_spec__1_spec__5_spec__9___closed__1);
lean_inc(v_mvarId_1117_);
v___f_1126_ = lean_alloc_closure((void*)(l_Lean_MVarId_clear___lam__1___boxed), 9, 4);
lean_closure_set(v___f_1126_, 0, v_mvarId_1117_);
lean_closure_set(v___f_1126_, 1, v___x_1125_);
lean_closure_set(v___f_1126_, 2, v_fvarId_1118_);
lean_closure_set(v___f_1126_, 3, v___f_1124_);
v___x_1127_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___redArg(v_mvarId_1117_, v___f_1126_, v_a_1119_, v_a_1120_, v_a_1121_, v_a_1122_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_clear___boxed(lean_object* v_mvarId_1128_, lean_object* v_fvarId_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_){
_start:
{
lean_object* v_res_1135_; 
v_res_1135_ = l_Lean_MVarId_clear(v_mvarId_1128_, v_fvarId_1129_, v_a_1130_, v_a_1131_, v_a_1132_, v_a_1133_);
lean_dec(v_a_1133_);
lean_dec_ref(v_a_1132_);
lean_dec(v_a_1131_);
lean_dec_ref(v_a_1130_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2(lean_object* v_mvarId_1136_, lean_object* v_val_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___redArg(v_mvarId_1136_, v_val_1137_, v___y_1139_, v___y_1141_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2___boxed(lean_object* v_mvarId_1144_, lean_object* v_val_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_){
_start:
{
lean_object* v_res_1151_; 
v_res_1151_ = l_Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2(v_mvarId_1144_, v_val_1145_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
lean_dec(v___y_1149_);
lean_dec_ref(v___y_1148_);
lean_dec(v___y_1147_);
lean_dec_ref(v___y_1146_);
return v_res_1151_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3(lean_object* v_00_u03b2_1152_, lean_object* v_x_1153_, lean_object* v_x_1154_, lean_object* v_x_1155_){
_start:
{
lean_object* v___x_1156_; 
v___x_1156_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3___redArg(v_x_1153_, v_x_1154_, v_x_1155_);
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9(lean_object* v_00_u03b2_1157_, lean_object* v_x_1158_, size_t v_x_1159_, size_t v_x_1160_, lean_object* v_x_1161_, lean_object* v_x_1162_){
_start:
{
lean_object* v___x_1163_; 
v___x_1163_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___redArg(v_x_1158_, v_x_1159_, v_x_1160_, v_x_1161_, v_x_1162_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9___boxed(lean_object* v_00_u03b2_1164_, lean_object* v_x_1165_, lean_object* v_x_1166_, lean_object* v_x_1167_, lean_object* v_x_1168_, lean_object* v_x_1169_){
_start:
{
size_t v_x_10309__boxed_1170_; size_t v_x_10310__boxed_1171_; lean_object* v_res_1172_; 
v_x_10309__boxed_1170_ = lean_unbox_usize(v_x_1166_);
lean_dec(v_x_1166_);
v_x_10310__boxed_1171_ = lean_unbox_usize(v_x_1167_);
lean_dec(v_x_1167_);
v_res_1172_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9(v_00_u03b2_1164_, v_x_1165_, v_x_10309__boxed_1170_, v_x_10310__boxed_1171_, v_x_1168_, v_x_1169_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13(lean_object* v_00_u03b2_1173_, lean_object* v_n_1174_, lean_object* v_k_1175_, lean_object* v_v_1176_){
_start:
{
lean_object* v___x_1177_; 
v___x_1177_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13___redArg(v_n_1174_, v_k_1175_, v_v_1176_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14(lean_object* v_00_u03b2_1178_, size_t v_depth_1179_, lean_object* v_keys_1180_, lean_object* v_vals_1181_, lean_object* v_heq_1182_, lean_object* v_i_1183_, lean_object* v_entries_1184_){
_start:
{
lean_object* v___x_1185_; 
v___x_1185_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___redArg(v_depth_1179_, v_keys_1180_, v_vals_1181_, v_i_1183_, v_entries_1184_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14___boxed(lean_object* v_00_u03b2_1186_, lean_object* v_depth_1187_, lean_object* v_keys_1188_, lean_object* v_vals_1189_, lean_object* v_heq_1190_, lean_object* v_i_1191_, lean_object* v_entries_1192_){
_start:
{
size_t v_depth_boxed_1193_; lean_object* v_res_1194_; 
v_depth_boxed_1193_ = lean_unbox_usize(v_depth_1187_);
lean_dec(v_depth_1187_);
v_res_1194_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__14(v_00_u03b2_1186_, v_depth_boxed_1193_, v_keys_1188_, v_vals_1189_, v_heq_1190_, v_i_1191_, v_entries_1192_);
lean_dec_ref(v_vals_1189_);
lean_dec_ref(v_keys_1188_);
return v_res_1194_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13_spec__14(lean_object* v_00_u03b2_1195_, lean_object* v_x_1196_, lean_object* v_x_1197_, lean_object* v_x_1198_, lean_object* v_x_1199_){
_start:
{
lean_object* v___x_1200_; 
v___x_1200_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_clear_spec__2_spec__3_spec__9_spec__13_spec__14___redArg(v_x_1196_, v_x_1197_, v_x_1198_, v_x_1199_);
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClear(lean_object* v_mvarId_1201_, lean_object* v_fvarId_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_){
_start:
{
lean_object* v___x_1208_; 
v___x_1208_ = l_Lean_Meta_saveState___redArg(v_a_1204_, v_a_1206_);
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1210_; 
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
lean_inc(v_a_1209_);
lean_dec_ref(v___x_1208_);
lean_inc(v_mvarId_1201_);
v___x_1210_ = l_Lean_MVarId_clear(v_mvarId_1201_, v_fvarId_1202_, v_a_1203_, v_a_1204_, v_a_1205_, v_a_1206_);
if (lean_obj_tag(v___x_1210_) == 0)
{
lean_dec(v_a_1209_);
lean_dec(v_mvarId_1201_);
return v___x_1210_;
}
else
{
lean_object* v_a_1211_; uint8_t v___y_1213_; uint8_t v___x_1231_; 
v_a_1211_ = lean_ctor_get(v___x_1210_, 0);
lean_inc(v_a_1211_);
v___x_1231_ = l_Lean_Exception_isInterrupt(v_a_1211_);
if (v___x_1231_ == 0)
{
uint8_t v___x_1232_; 
v___x_1232_ = l_Lean_Exception_isRuntime(v_a_1211_);
v___y_1213_ = v___x_1232_;
goto v___jp_1212_;
}
else
{
lean_dec(v_a_1211_);
v___y_1213_ = v___x_1231_;
goto v___jp_1212_;
}
v___jp_1212_:
{
if (v___y_1213_ == 0)
{
lean_object* v___x_1214_; 
lean_dec_ref(v___x_1210_);
v___x_1214_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1209_, v_a_1204_, v_a_1206_);
lean_dec(v_a_1209_);
if (lean_obj_tag(v___x_1214_) == 0)
{
lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1221_; 
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1221_ == 0)
{
lean_object* v_unused_1222_; 
v_unused_1222_ = lean_ctor_get(v___x_1214_, 0);
lean_dec(v_unused_1222_);
v___x_1216_ = v___x_1214_;
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
else
{
lean_dec(v___x_1214_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1219_; 
if (v_isShared_1217_ == 0)
{
lean_ctor_set(v___x_1216_, 0, v_mvarId_1201_);
v___x_1219_ = v___x_1216_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_mvarId_1201_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
}
else
{
lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1230_; 
lean_dec(v_mvarId_1201_);
v_a_1223_ = lean_ctor_get(v___x_1214_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1225_ = v___x_1214_;
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_dec(v___x_1214_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1228_; 
if (v_isShared_1226_ == 0)
{
v___x_1228_ = v___x_1225_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_a_1223_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
}
else
{
lean_dec(v_a_1209_);
lean_dec(v_mvarId_1201_);
return v___x_1210_;
}
}
}
}
else
{
lean_object* v_a_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1240_; 
lean_dec(v_fvarId_1202_);
lean_dec(v_mvarId_1201_);
v_a_1233_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1235_ = v___x_1208_;
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_a_1233_);
lean_dec(v___x_1208_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1238_; 
if (v_isShared_1236_ == 0)
{
v___x_1238_ = v___x_1235_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_a_1233_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClear___boxed(lean_object* v_mvarId_1241_, lean_object* v_fvarId_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l_Lean_MVarId_tryClear(v_mvarId_1241_, v_fvarId_1242_, v_a_1243_, v_a_1244_, v_a_1245_, v_a_1246_);
lean_dec(v_a_1246_);
lean_dec_ref(v_a_1245_);
lean_dec(v_a_1244_);
lean_dec_ref(v_a_1243_);
return v_res_1248_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_spec__0(lean_object* v_as_1249_, size_t v_i_1250_, size_t v_stop_1251_, lean_object* v_b_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_){
_start:
{
uint8_t v___x_1258_; 
v___x_1258_ = lean_usize_dec_eq(v_i_1250_, v_stop_1251_);
if (v___x_1258_ == 0)
{
size_t v___x_1259_; size_t v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1259_ = ((size_t)1ULL);
v___x_1260_ = lean_usize_sub(v_i_1250_, v___x_1259_);
v___x_1261_ = lean_array_uget_borrowed(v_as_1249_, v___x_1260_);
lean_inc(v___x_1261_);
v___x_1262_ = l_Lean_MVarId_tryClear(v_b_1252_, v___x_1261_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_);
if (lean_obj_tag(v___x_1262_) == 0)
{
lean_object* v_a_1263_; 
v_a_1263_ = lean_ctor_get(v___x_1262_, 0);
lean_inc(v_a_1263_);
lean_dec_ref(v___x_1262_);
v_i_1250_ = v___x_1260_;
v_b_1252_ = v_a_1263_;
goto _start;
}
else
{
return v___x_1262_;
}
}
else
{
lean_object* v___x_1265_; 
v___x_1265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1265_, 0, v_b_1252_);
return v___x_1265_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_spec__0___boxed(lean_object* v_as_1266_, lean_object* v_i_1267_, lean_object* v_stop_1268_, lean_object* v_b_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_){
_start:
{
size_t v_i_boxed_1275_; size_t v_stop_boxed_1276_; lean_object* v_res_1277_; 
v_i_boxed_1275_ = lean_unbox_usize(v_i_1267_);
lean_dec(v_i_1267_);
v_stop_boxed_1276_ = lean_unbox_usize(v_stop_1268_);
lean_dec(v_stop_1268_);
v_res_1277_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_spec__0(v_as_1266_, v_i_boxed_1275_, v_stop_boxed_1276_, v_b_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_);
lean_dec(v___y_1273_);
lean_dec_ref(v___y_1272_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec_ref(v_as_1266_);
return v_res_1277_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany(lean_object* v_mvarId_1278_, lean_object* v_fvarIds_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_){
_start:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; uint8_t v___x_1287_; 
v___x_1285_ = lean_array_get_size(v_fvarIds_1279_);
v___x_1286_ = lean_unsigned_to_nat(0u);
v___x_1287_ = lean_nat_dec_lt(v___x_1286_, v___x_1285_);
if (v___x_1287_ == 0)
{
lean_object* v___x_1288_; 
v___x_1288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1288_, 0, v_mvarId_1278_);
return v___x_1288_;
}
else
{
size_t v___x_1289_; size_t v___x_1290_; lean_object* v___x_1291_; 
v___x_1289_ = lean_usize_of_nat(v___x_1285_);
v___x_1290_ = ((size_t)0ULL);
v___x_1291_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_spec__0(v_fvarIds_1279_, v___x_1289_, v___x_1290_, v_mvarId_1278_, v_a_1280_, v_a_1281_, v_a_1282_, v_a_1283_);
return v___x_1291_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany___boxed(lean_object* v_mvarId_1292_, lean_object* v_fvarIds_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_){
_start:
{
lean_object* v_res_1299_; 
v_res_1299_ = l_Lean_MVarId_tryClearMany(v_mvarId_1292_, v_fvarIds_1293_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_);
lean_dec(v_a_1297_);
lean_dec_ref(v_a_1296_);
lean_dec(v_a_1295_);
lean_dec_ref(v_a_1294_);
lean_dec_ref(v_fvarIds_1293_);
return v_res_1299_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_x27_spec__0(lean_object* v_as_1300_, size_t v_i_1301_, size_t v_stop_1302_, lean_object* v_b_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
uint8_t v___x_1309_; 
v___x_1309_ = lean_usize_dec_eq(v_i_1301_, v_stop_1302_);
if (v___x_1309_ == 0)
{
lean_object* v_fst_1310_; lean_object* v_snd_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1336_; 
v_fst_1310_ = lean_ctor_get(v_b_1303_, 0);
v_snd_1311_ = lean_ctor_get(v_b_1303_, 1);
v_isSharedCheck_1336_ = !lean_is_exclusive(v_b_1303_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1313_ = v_b_1303_;
v_isShared_1314_ = v_isSharedCheck_1336_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_snd_1311_);
lean_inc(v_fst_1310_);
lean_dec(v_b_1303_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1336_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
size_t v___x_1315_; size_t v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1315_ = ((size_t)1ULL);
v___x_1316_ = lean_usize_sub(v_i_1301_, v___x_1315_);
v___x_1317_ = lean_array_uget_borrowed(v_as_1300_, v___x_1316_);
lean_inc(v___x_1317_);
lean_inc(v_fst_1310_);
v___x_1318_ = l_Lean_MVarId_tryClear(v_fst_1310_, v___x_1317_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_);
if (lean_obj_tag(v___x_1318_) == 0)
{
lean_object* v_a_1319_; lean_object* v___y_1321_; uint8_t v___x_1326_; 
v_a_1319_ = lean_ctor_get(v___x_1318_, 0);
lean_inc(v_a_1319_);
lean_dec_ref(v___x_1318_);
v___x_1326_ = l_Lean_instBEqMVarId_beq(v_fst_1310_, v_a_1319_);
lean_dec(v_fst_1310_);
if (v___x_1326_ == 0)
{
lean_object* v___x_1327_; 
lean_inc(v___x_1317_);
v___x_1327_ = lean_array_push(v_snd_1311_, v___x_1317_);
v___y_1321_ = v___x_1327_;
goto v___jp_1320_;
}
else
{
v___y_1321_ = v_snd_1311_;
goto v___jp_1320_;
}
v___jp_1320_:
{
lean_object* v___x_1323_; 
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 1, v___y_1321_);
lean_ctor_set(v___x_1313_, 0, v_a_1319_);
v___x_1323_ = v___x_1313_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v_a_1319_);
lean_ctor_set(v_reuseFailAlloc_1325_, 1, v___y_1321_);
v___x_1323_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
v_i_1301_ = v___x_1316_;
v_b_1303_ = v___x_1323_;
goto _start;
}
}
}
else
{
lean_object* v_a_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1335_; 
lean_del_object(v___x_1313_);
lean_dec(v_snd_1311_);
lean_dec(v_fst_1310_);
v_a_1328_ = lean_ctor_get(v___x_1318_, 0);
v_isSharedCheck_1335_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1335_ == 0)
{
v___x_1330_ = v___x_1318_;
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_a_1328_);
lean_dec(v___x_1318_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1333_; 
if (v_isShared_1331_ == 0)
{
v___x_1333_ = v___x_1330_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_a_1328_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
}
}
}
else
{
lean_object* v___x_1337_; 
v___x_1337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1337_, 0, v_b_1303_);
return v___x_1337_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_x27_spec__0___boxed(lean_object* v_as_1338_, lean_object* v_i_1339_, lean_object* v_stop_1340_, lean_object* v_b_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_){
_start:
{
size_t v_i_boxed_1347_; size_t v_stop_boxed_1348_; lean_object* v_res_1349_; 
v_i_boxed_1347_ = lean_unbox_usize(v_i_1339_);
lean_dec(v_i_1339_);
v_stop_boxed_1348_ = lean_unbox_usize(v_stop_1340_);
lean_dec(v_stop_1340_);
v_res_1349_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_x27_spec__0(v_as_1338_, v_i_boxed_1347_, v_stop_boxed_1348_, v_b_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
lean_dec(v___y_1345_);
lean_dec_ref(v___y_1344_);
lean_dec(v___y_1343_);
lean_dec_ref(v___y_1342_);
lean_dec_ref(v_as_1338_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany_x27___lam__0(lean_object* v_fvarIds_1350_, lean_object* v_goal_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v_lctx_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; uint8_t v___x_1363_; 
v_lctx_1357_ = lean_ctor_get(v___y_1352_, 2);
v___x_1358_ = l_Lean_LocalContext_sortFVarsByContextOrder(v_lctx_1357_, v_fvarIds_1350_);
v___x_1359_ = lean_array_get_size(v___x_1358_);
v___x_1360_ = lean_mk_empty_array_with_capacity(v___x_1359_);
v___x_1361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1361_, 0, v_goal_1351_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
v___x_1362_ = lean_unsigned_to_nat(0u);
v___x_1363_ = lean_nat_dec_lt(v___x_1362_, v___x_1359_);
if (v___x_1363_ == 0)
{
lean_object* v___x_1364_; 
lean_dec_ref(v___x_1358_);
v___x_1364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1364_, 0, v___x_1361_);
return v___x_1364_;
}
else
{
size_t v___x_1365_; size_t v___x_1366_; lean_object* v___x_1367_; 
v___x_1365_ = lean_usize_of_nat(v___x_1359_);
v___x_1366_ = ((size_t)0ULL);
v___x_1367_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_tryClearMany_x27_spec__0(v___x_1358_, v___x_1365_, v___x_1366_, v___x_1361_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_);
lean_dec_ref(v___x_1358_);
return v___x_1367_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany_x27___lam__0___boxed(lean_object* v_fvarIds_1368_, lean_object* v_goal_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_){
_start:
{
lean_object* v_res_1375_; 
v_res_1375_ = l_Lean_MVarId_tryClearMany_x27___lam__0(v_fvarIds_1368_, v_goal_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
return v_res_1375_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany_x27(lean_object* v_goal_1376_, lean_object* v_fvarIds_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_, lean_object* v_a_1381_){
_start:
{
lean_object* v___f_1383_; lean_object* v___x_1384_; 
lean_inc(v_goal_1376_);
v___f_1383_ = lean_alloc_closure((void*)(l_Lean_MVarId_tryClearMany_x27___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1383_, 0, v_fvarIds_1377_);
lean_closure_set(v___f_1383_, 1, v_goal_1376_);
v___x_1384_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_clear_spec__4___redArg(v_goal_1376_, v___f_1383_, v_a_1378_, v_a_1379_, v_a_1380_, v_a_1381_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_tryClearMany_x27___boxed(lean_object* v_goal_1385_, lean_object* v_fvarIds_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_){
_start:
{
lean_object* v_res_1392_; 
v_res_1392_ = l_Lean_MVarId_tryClearMany_x27(v_goal_1385_, v_fvarIds_1386_, v_a_1387_, v_a_1388_, v_a_1389_, v_a_1390_);
lean_dec(v_a_1390_);
lean_dec_ref(v_a_1389_);
lean_dec(v_a_1388_);
lean_dec_ref(v_a_1387_);
return v_res_1392_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Order(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Order_Lemmas(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Clear(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Order_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Clear(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Util(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Order(uint8_t builtin);
lean_object* initialize_Init_Data_Order_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Clear(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Order_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Clear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Clear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Clear(builtin);
}
#ifdef __cplusplus
}
#endif
