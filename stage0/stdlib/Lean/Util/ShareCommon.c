// Lean compiler output
// Module: Lean.Util.ShareCommon
// Imports: public import Init.ShareCommon public import Std.Data.HashSet.Basic public import Lean.Data.PersistentHashSet
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
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
lean_object* l_ShareCommon_StateFactory_mkImpl(lean_object*);
lean_object* l_ShareCommon_mkStateImpl(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_state_sharecommon(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7_spec__10_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ShareCommon_objectFactory___elam__5_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getKey_x3f___at___00Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ShareCommon_objectFactory___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_objectFactory___closed__0;
static lean_once_cell_t l_Lean_ShareCommon_objectFactory___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_objectFactory___closed__1;
static lean_once_cell_t l_Lean_ShareCommon_objectFactory___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_objectFactory___closed__2;
static lean_once_cell_t l_Lean_ShareCommon_objectFactory___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_objectFactory___closed__3;
static lean_once_cell_t l_Lean_ShareCommon_objectFactory___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_objectFactory___closed__4;
static lean_once_cell_t l_Lean_ShareCommon_objectFactory___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_objectFactory___closed__5;
static lean_once_cell_t l_Lean_ShareCommon_objectFactory___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_objectFactory___closed__6;
static lean_once_cell_t l_Lean_ShareCommon_objectFactory___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_objectFactory___closed__7;
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory;
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ShareCommon_objectFactory___elam__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getKey_x3f___at___00Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7_spec__10_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__11_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__12___redArg(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ShareCommon_persistentObjectFactory___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_persistentObjectFactory___closed__0;
static lean_once_cell_t l_Lean_ShareCommon_persistentObjectFactory___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_persistentObjectFactory___closed__1;
static lean_once_cell_t l_Lean_ShareCommon_persistentObjectFactory___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_persistentObjectFactory___closed__2;
static lean_once_cell_t l_Lean_ShareCommon_persistentObjectFactory___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_persistentObjectFactory___closed__3;
static lean_once_cell_t l_Lean_ShareCommon_persistentObjectFactory___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_persistentObjectFactory___closed__4;
static lean_once_cell_t l_Lean_ShareCommon_persistentObjectFactory___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_persistentObjectFactory___closed__5;
static lean_once_cell_t l_Lean_ShareCommon_persistentObjectFactory___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_persistentObjectFactory___closed__6;
static lean_once_cell_t l_Lean_ShareCommon_persistentObjectFactory___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_persistentObjectFactory___closed__7;
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory;
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__11_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_withShareCommon___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_withShareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonT_withShareCommon___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonT_withShareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_monadShareCommon___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_monadShareCommon___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_monadShareCommon(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonT_monadShareCommon___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonT_monadShareCommon___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonT_monadShareCommon(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_run___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_run___redArg___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__0;
static lean_once_cell_t l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_run(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ShareCommon_PShareCommonT_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ShareCommon_PShareCommonT_run___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonT_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonT_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonM_run___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonM_run(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonM_run___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonM_run(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_withShareCommon___at___00Lean_ShareCommon_shareCommon_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_withShareCommon___at___00Lean_ShareCommon_shareCommon_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_shareCommon___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_shareCommon(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__0___redArg(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_2_ = lean_unsigned_to_nat(0u);
v___x_3_ = lean_unsigned_to_nat(4u);
v___x_4_ = lean_nat_mul(v_x_1_, v___x_3_);
v___x_5_ = lean_unsigned_to_nat(3u);
v___x_6_ = lean_nat_div(v___x_4_, v___x_5_);
lean_dec(v___x_4_);
v___x_7_ = l_Nat_nextPowerOfTwo(v___x_6_);
lean_dec(v___x_6_);
v___x_8_ = lean_box(0);
v___x_9_ = lean_mk_array(v___x_7_, v___x_8_);
v___x_10_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_10_, 0, v___x_2_);
lean_ctor_set(v___x_10_, 1, v___x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__0___redArg___boxed(lean_object* v_x_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Lean_ShareCommon_objectFactory___elam__0___redArg(v_x_11_);
lean_dec(v_x_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__0(lean_object* v_00_u03b1_13_, lean_object* v_00_u03b2_14_, lean_object* v_inst_15_, lean_object* v_inst_16_, lean_object* v_x_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_ShareCommon_objectFactory___elam__0___redArg(v_x_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__0___boxed(lean_object* v_00_u03b1_19_, lean_object* v_00_u03b2_20_, lean_object* v_inst_21_, lean_object* v_inst_22_, lean_object* v_x_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_ShareCommon_objectFactory___elam__0(v_00_u03b1_19_, v_00_u03b2_20_, v_inst_21_, v_inst_22_, v_x_23_);
lean_dec(v_x_23_);
lean_dec_ref(v_inst_22_);
lean_dec_ref(v_inst_21_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__3___redArg(lean_object* v_x_25_){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_26_ = lean_unsigned_to_nat(0u);
v___x_27_ = lean_unsigned_to_nat(4u);
v___x_28_ = lean_nat_mul(v_x_25_, v___x_27_);
v___x_29_ = lean_unsigned_to_nat(3u);
v___x_30_ = lean_nat_div(v___x_28_, v___x_29_);
lean_dec(v___x_28_);
v___x_31_ = l_Nat_nextPowerOfTwo(v___x_30_);
lean_dec(v___x_30_);
v___x_32_ = lean_box(0);
v___x_33_ = lean_mk_array(v___x_31_, v___x_32_);
v___x_34_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_34_, 0, v___x_26_);
lean_ctor_set(v___x_34_, 1, v___x_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__3___redArg___boxed(lean_object* v_x_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lean_ShareCommon_objectFactory___elam__3___redArg(v_x_35_);
lean_dec(v_x_35_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__3(lean_object* v_00_u03b1_37_, lean_object* v_inst_38_, lean_object* v_inst_39_, lean_object* v_x_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_ShareCommon_objectFactory___elam__3___redArg(v_x_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__3___boxed(lean_object* v_00_u03b1_42_, lean_object* v_inst_43_, lean_object* v_inst_44_, lean_object* v_x_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l_Lean_ShareCommon_objectFactory___elam__3(v_00_u03b1_42_, v_inst_43_, v_inst_44_, v_x_45_);
lean_dec(v_x_45_);
lean_dec_ref(v_inst_44_);
lean_dec_ref(v_inst_43_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7_spec__10_spec__13___redArg(lean_object* v_inst_47_, lean_object* v_x_48_, lean_object* v_x_49_){
_start:
{
if (lean_obj_tag(v_x_49_) == 0)
{
lean_dec_ref(v_inst_47_);
return v_x_48_;
}
else
{
lean_object* v_key_50_; lean_object* v_value_51_; lean_object* v_tail_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_77_; 
v_key_50_ = lean_ctor_get(v_x_49_, 0);
v_value_51_ = lean_ctor_get(v_x_49_, 1);
v_tail_52_ = lean_ctor_get(v_x_49_, 2);
v_isSharedCheck_77_ = !lean_is_exclusive(v_x_49_);
if (v_isSharedCheck_77_ == 0)
{
v___x_54_ = v_x_49_;
v_isShared_55_ = v_isSharedCheck_77_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_tail_52_);
lean_inc(v_value_51_);
lean_inc(v_key_50_);
lean_dec(v_x_49_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_77_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v___x_56_; lean_object* v___x_57_; uint64_t v___x_58_; uint64_t v___x_59_; uint64_t v___x_60_; uint64_t v___x_61_; uint64_t v_fold_62_; uint64_t v___x_63_; uint64_t v___x_64_; uint64_t v___x_65_; size_t v___x_66_; size_t v___x_67_; size_t v___x_68_; size_t v___x_69_; size_t v___x_70_; lean_object* v___x_71_; lean_object* v___x_73_; 
v___x_56_ = lean_array_get_size(v_x_48_);
lean_inc_ref(v_inst_47_);
lean_inc(v_key_50_);
v___x_57_ = lean_apply_1(v_inst_47_, v_key_50_);
v___x_58_ = 32ULL;
v___x_59_ = lean_unbox_uint64(v___x_57_);
v___x_60_ = lean_uint64_shift_right(v___x_59_, v___x_58_);
v___x_61_ = lean_unbox_uint64(v___x_57_);
lean_dec_ref(v___x_57_);
v_fold_62_ = lean_uint64_xor(v___x_61_, v___x_60_);
v___x_63_ = 16ULL;
v___x_64_ = lean_uint64_shift_right(v_fold_62_, v___x_63_);
v___x_65_ = lean_uint64_xor(v_fold_62_, v___x_64_);
v___x_66_ = lean_uint64_to_usize(v___x_65_);
v___x_67_ = lean_usize_of_nat(v___x_56_);
v___x_68_ = ((size_t)1ULL);
v___x_69_ = lean_usize_sub(v___x_67_, v___x_68_);
v___x_70_ = lean_usize_land(v___x_66_, v___x_69_);
v___x_71_ = lean_array_uget_borrowed(v_x_48_, v___x_70_);
lean_inc(v___x_71_);
if (v_isShared_55_ == 0)
{
lean_ctor_set(v___x_54_, 2, v___x_71_);
v___x_73_ = v___x_54_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v_key_50_);
lean_ctor_set(v_reuseFailAlloc_76_, 1, v_value_51_);
lean_ctor_set(v_reuseFailAlloc_76_, 2, v___x_71_);
v___x_73_ = v_reuseFailAlloc_76_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
lean_object* v___x_74_; 
v___x_74_ = lean_array_uset(v_x_48_, v___x_70_, v___x_73_);
v_x_48_ = v___x_74_;
v_x_49_ = v_tail_52_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7_spec__10___redArg(lean_object* v_inst_78_, lean_object* v_i_79_, lean_object* v_source_80_, lean_object* v_target_81_){
_start:
{
lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_82_ = lean_array_get_size(v_source_80_);
v___x_83_ = lean_nat_dec_lt(v_i_79_, v___x_82_);
if (v___x_83_ == 0)
{
lean_dec_ref(v_source_80_);
lean_dec(v_i_79_);
lean_dec_ref(v_inst_78_);
return v_target_81_;
}
else
{
lean_object* v_es_84_; lean_object* v___x_85_; lean_object* v_source_86_; lean_object* v_target_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v_es_84_ = lean_array_fget(v_source_80_, v_i_79_);
v___x_85_ = lean_box(0);
v_source_86_ = lean_array_fset(v_source_80_, v_i_79_, v___x_85_);
lean_inc_ref(v_inst_78_);
v_target_87_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7_spec__10_spec__13___redArg(v_inst_78_, v_target_81_, v_es_84_);
v___x_88_ = lean_unsigned_to_nat(1u);
v___x_89_ = lean_nat_add(v_i_79_, v___x_88_);
lean_dec(v_i_79_);
v_i_79_ = v___x_89_;
v_source_80_ = v_source_86_;
v_target_81_ = v_target_87_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7___redArg(lean_object* v_inst_91_, lean_object* v_data_92_){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v_nbuckets_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_93_ = lean_array_get_size(v_data_92_);
v___x_94_ = lean_unsigned_to_nat(2u);
v_nbuckets_95_ = lean_nat_mul(v___x_93_, v___x_94_);
v___x_96_ = lean_unsigned_to_nat(0u);
v___x_97_ = lean_box(0);
v___x_98_ = lean_mk_array(v_nbuckets_95_, v___x_97_);
v___x_99_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7_spec__10___redArg(v_inst_91_, v___x_96_, v_data_92_, v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__6___redArg(lean_object* v_inst_100_, lean_object* v_a_101_, lean_object* v_x_102_){
_start:
{
if (lean_obj_tag(v_x_102_) == 0)
{
uint8_t v___x_103_; 
lean_dec(v_a_101_);
lean_dec_ref(v_inst_100_);
v___x_103_ = 0;
return v___x_103_;
}
else
{
lean_object* v_key_104_; lean_object* v_tail_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
v_key_104_ = lean_ctor_get(v_x_102_, 0);
lean_inc(v_key_104_);
v_tail_105_ = lean_ctor_get(v_x_102_, 2);
lean_inc(v_tail_105_);
lean_dec_ref(v_x_102_);
lean_inc_ref(v_inst_100_);
lean_inc(v_a_101_);
v___x_106_ = lean_apply_2(v_inst_100_, v_key_104_, v_a_101_);
v___x_107_ = lean_unbox(v___x_106_);
if (v___x_107_ == 0)
{
v_x_102_ = v_tail_105_;
goto _start;
}
else
{
uint8_t v___x_109_; 
lean_dec(v_tail_105_);
lean_dec(v_a_101_);
lean_dec_ref(v_inst_100_);
v___x_109_ = lean_unbox(v___x_106_);
return v___x_109_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__6___redArg___boxed(lean_object* v_inst_110_, lean_object* v_a_111_, lean_object* v_x_112_){
_start:
{
uint8_t v_res_113_; lean_object* v_r_114_; 
v_res_113_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__6___redArg(v_inst_110_, v_a_111_, v_x_112_);
v_r_114_ = lean_box(v_res_113_);
return v_r_114_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ShareCommon_objectFactory___elam__5_spec__8___redArg(lean_object* v_inst_115_, lean_object* v_inst_116_, lean_object* v_m_117_, lean_object* v_a_118_, lean_object* v_b_119_){
_start:
{
lean_object* v_size_120_; lean_object* v_buckets_121_; lean_object* v___x_122_; lean_object* v___x_123_; uint64_t v___x_124_; uint64_t v___x_125_; uint64_t v___x_126_; uint64_t v___x_127_; uint64_t v_fold_128_; uint64_t v___x_129_; uint64_t v___x_130_; uint64_t v___x_131_; size_t v___x_132_; size_t v___x_133_; size_t v___x_134_; size_t v___x_135_; size_t v___x_136_; lean_object* v_bkt_137_; uint8_t v___x_138_; 
v_size_120_ = lean_ctor_get(v_m_117_, 0);
v_buckets_121_ = lean_ctor_get(v_m_117_, 1);
v___x_122_ = lean_array_get_size(v_buckets_121_);
lean_inc_ref(v_inst_116_);
lean_inc_n(v_a_118_, 2);
v___x_123_ = lean_apply_1(v_inst_116_, v_a_118_);
v___x_124_ = 32ULL;
v___x_125_ = lean_unbox_uint64(v___x_123_);
v___x_126_ = lean_uint64_shift_right(v___x_125_, v___x_124_);
v___x_127_ = lean_unbox_uint64(v___x_123_);
lean_dec_ref(v___x_123_);
v_fold_128_ = lean_uint64_xor(v___x_127_, v___x_126_);
v___x_129_ = 16ULL;
v___x_130_ = lean_uint64_shift_right(v_fold_128_, v___x_129_);
v___x_131_ = lean_uint64_xor(v_fold_128_, v___x_130_);
v___x_132_ = lean_uint64_to_usize(v___x_131_);
v___x_133_ = lean_usize_of_nat(v___x_122_);
v___x_134_ = ((size_t)1ULL);
v___x_135_ = lean_usize_sub(v___x_133_, v___x_134_);
v___x_136_ = lean_usize_land(v___x_132_, v___x_135_);
v_bkt_137_ = lean_array_uget_borrowed(v_buckets_121_, v___x_136_);
lean_inc(v_bkt_137_);
v___x_138_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__6___redArg(v_inst_115_, v_a_118_, v_bkt_137_);
if (v___x_138_ == 0)
{
lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_159_; 
lean_inc_ref(v_buckets_121_);
lean_inc(v_size_120_);
v_isSharedCheck_159_ = !lean_is_exclusive(v_m_117_);
if (v_isSharedCheck_159_ == 0)
{
lean_object* v_unused_160_; lean_object* v_unused_161_; 
v_unused_160_ = lean_ctor_get(v_m_117_, 1);
lean_dec(v_unused_160_);
v_unused_161_ = lean_ctor_get(v_m_117_, 0);
lean_dec(v_unused_161_);
v___x_140_ = v_m_117_;
v_isShared_141_ = v_isSharedCheck_159_;
goto v_resetjp_139_;
}
else
{
lean_dec(v_m_117_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_159_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_142_; lean_object* v_size_x27_143_; lean_object* v___x_144_; lean_object* v_buckets_x27_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_142_ = lean_unsigned_to_nat(1u);
v_size_x27_143_ = lean_nat_add(v_size_120_, v___x_142_);
lean_dec(v_size_120_);
lean_inc(v_bkt_137_);
v___x_144_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_144_, 0, v_a_118_);
lean_ctor_set(v___x_144_, 1, v_b_119_);
lean_ctor_set(v___x_144_, 2, v_bkt_137_);
v_buckets_x27_145_ = lean_array_uset(v_buckets_121_, v___x_136_, v___x_144_);
v___x_146_ = lean_unsigned_to_nat(4u);
v___x_147_ = lean_nat_mul(v_size_x27_143_, v___x_146_);
v___x_148_ = lean_unsigned_to_nat(3u);
v___x_149_ = lean_nat_div(v___x_147_, v___x_148_);
lean_dec(v___x_147_);
v___x_150_ = lean_array_get_size(v_buckets_x27_145_);
v___x_151_ = lean_nat_dec_le(v___x_149_, v___x_150_);
lean_dec(v___x_149_);
if (v___x_151_ == 0)
{
lean_object* v_val_152_; lean_object* v___x_154_; 
v_val_152_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7___redArg(v_inst_116_, v_buckets_x27_145_);
if (v_isShared_141_ == 0)
{
lean_ctor_set(v___x_140_, 1, v_val_152_);
lean_ctor_set(v___x_140_, 0, v_size_x27_143_);
v___x_154_ = v___x_140_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_size_x27_143_);
lean_ctor_set(v_reuseFailAlloc_155_, 1, v_val_152_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
else
{
lean_object* v___x_157_; 
lean_dec_ref(v_inst_116_);
if (v_isShared_141_ == 0)
{
lean_ctor_set(v___x_140_, 1, v_buckets_x27_145_);
lean_ctor_set(v___x_140_, 0, v_size_x27_143_);
v___x_157_ = v___x_140_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_size_x27_143_);
lean_ctor_set(v_reuseFailAlloc_158_, 1, v_buckets_x27_145_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
}
}
else
{
lean_dec(v_b_119_);
lean_dec(v_a_118_);
lean_dec_ref(v_inst_116_);
return v_m_117_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__5___redArg(lean_object* v_inst_162_, lean_object* v_inst_163_, lean_object* v_x_164_, lean_object* v___y_165_){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = lean_box(0);
v___x_167_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ShareCommon_objectFactory___elam__5_spec__8___redArg(v_inst_162_, v_inst_163_, v_x_164_, v___y_165_, v___x_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__5(lean_object* v_00_u03b1_168_, lean_object* v_inst_169_, lean_object* v_inst_170_, lean_object* v_x_171_, lean_object* v___y_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = l_Lean_ShareCommon_objectFactory___elam__5___redArg(v_inst_169_, v_inst_170_, v_x_171_, v___y_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1_spec__3___redArg(lean_object* v_inst_174_, lean_object* v_a_175_, lean_object* v_x_176_){
_start:
{
if (lean_obj_tag(v_x_176_) == 0)
{
lean_object* v___x_177_; 
lean_dec(v_a_175_);
lean_dec_ref(v_inst_174_);
v___x_177_ = lean_box(0);
return v___x_177_;
}
else
{
lean_object* v_key_178_; lean_object* v_value_179_; lean_object* v_tail_180_; lean_object* v___x_181_; uint8_t v___x_182_; 
v_key_178_ = lean_ctor_get(v_x_176_, 0);
lean_inc(v_key_178_);
v_value_179_ = lean_ctor_get(v_x_176_, 1);
lean_inc(v_value_179_);
v_tail_180_ = lean_ctor_get(v_x_176_, 2);
lean_inc(v_tail_180_);
lean_dec_ref(v_x_176_);
lean_inc_ref(v_inst_174_);
lean_inc(v_a_175_);
v___x_181_ = lean_apply_2(v_inst_174_, v_key_178_, v_a_175_);
v___x_182_ = lean_unbox(v___x_181_);
if (v___x_182_ == 0)
{
lean_dec(v_value_179_);
v_x_176_ = v_tail_180_;
goto _start;
}
else
{
lean_object* v___x_184_; 
lean_dec(v_tail_180_);
lean_dec(v_a_175_);
lean_dec_ref(v_inst_174_);
v___x_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_184_, 0, v_value_179_);
return v___x_184_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1___redArg(lean_object* v_inst_185_, lean_object* v_inst_186_, lean_object* v_m_187_, lean_object* v_a_188_){
_start:
{
lean_object* v_buckets_189_; lean_object* v___x_190_; lean_object* v___x_191_; uint64_t v___x_192_; uint64_t v___x_193_; uint64_t v___x_194_; uint64_t v___x_195_; uint64_t v_fold_196_; uint64_t v___x_197_; uint64_t v___x_198_; uint64_t v___x_199_; size_t v___x_200_; size_t v___x_201_; size_t v___x_202_; size_t v___x_203_; size_t v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v_buckets_189_ = lean_ctor_get(v_m_187_, 1);
v___x_190_ = lean_array_get_size(v_buckets_189_);
lean_inc(v_a_188_);
v___x_191_ = lean_apply_1(v_inst_186_, v_a_188_);
v___x_192_ = 32ULL;
v___x_193_ = lean_unbox_uint64(v___x_191_);
v___x_194_ = lean_uint64_shift_right(v___x_193_, v___x_192_);
v___x_195_ = lean_unbox_uint64(v___x_191_);
lean_dec_ref(v___x_191_);
v_fold_196_ = lean_uint64_xor(v___x_195_, v___x_194_);
v___x_197_ = 16ULL;
v___x_198_ = lean_uint64_shift_right(v_fold_196_, v___x_197_);
v___x_199_ = lean_uint64_xor(v_fold_196_, v___x_198_);
v___x_200_ = lean_uint64_to_usize(v___x_199_);
v___x_201_ = lean_usize_of_nat(v___x_190_);
v___x_202_ = ((size_t)1ULL);
v___x_203_ = lean_usize_sub(v___x_201_, v___x_202_);
v___x_204_ = lean_usize_land(v___x_200_, v___x_203_);
v___x_205_ = lean_array_uget_borrowed(v_buckets_189_, v___x_204_);
lean_inc(v___x_205_);
v___x_206_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1_spec__3___redArg(v_inst_185_, v_a_188_, v___x_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1___redArg___boxed(lean_object* v_inst_207_, lean_object* v_inst_208_, lean_object* v_m_209_, lean_object* v_a_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1___redArg(v_inst_207_, v_inst_208_, v_m_209_, v_a_210_);
lean_dec_ref(v_m_209_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__1(lean_object* v_00_u03b1_212_, lean_object* v_00_u03b2_213_, lean_object* v_inst_214_, lean_object* v_inst_215_, lean_object* v_x_216_, lean_object* v___y_217_){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1___redArg(v_inst_214_, v_inst_215_, v_x_216_, v___y_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__1___boxed(lean_object* v_00_u03b1_219_, lean_object* v_00_u03b2_220_, lean_object* v_inst_221_, lean_object* v_inst_222_, lean_object* v_x_223_, lean_object* v___y_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Lean_ShareCommon_objectFactory___elam__1(v_00_u03b1_219_, v_00_u03b2_220_, v_inst_221_, v_inst_222_, v_x_223_, v___y_224_);
lean_dec_ref(v_x_223_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__8___redArg(lean_object* v_inst_226_, lean_object* v_a_227_, lean_object* v_b_228_, lean_object* v_x_229_){
_start:
{
if (lean_obj_tag(v_x_229_) == 0)
{
lean_dec(v_b_228_);
lean_dec(v_a_227_);
lean_dec_ref(v_inst_226_);
return v_x_229_;
}
else
{
lean_object* v_key_230_; lean_object* v_value_231_; lean_object* v_tail_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_245_; 
v_key_230_ = lean_ctor_get(v_x_229_, 0);
v_value_231_ = lean_ctor_get(v_x_229_, 1);
v_tail_232_ = lean_ctor_get(v_x_229_, 2);
v_isSharedCheck_245_ = !lean_is_exclusive(v_x_229_);
if (v_isSharedCheck_245_ == 0)
{
v___x_234_ = v_x_229_;
v_isShared_235_ = v_isSharedCheck_245_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_tail_232_);
lean_inc(v_value_231_);
lean_inc(v_key_230_);
lean_dec(v_x_229_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_245_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_236_; uint8_t v___x_237_; 
lean_inc_ref(v_inst_226_);
lean_inc(v_a_227_);
lean_inc(v_key_230_);
v___x_236_ = lean_apply_2(v_inst_226_, v_key_230_, v_a_227_);
v___x_237_ = lean_unbox(v___x_236_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; lean_object* v___x_240_; 
v___x_238_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__8___redArg(v_inst_226_, v_a_227_, v_b_228_, v_tail_232_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 2, v___x_238_);
v___x_240_ = v___x_234_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_key_230_);
lean_ctor_set(v_reuseFailAlloc_241_, 1, v_value_231_);
lean_ctor_set(v_reuseFailAlloc_241_, 2, v___x_238_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
else
{
lean_object* v___x_243_; 
lean_dec(v_value_231_);
lean_dec(v_key_230_);
lean_dec_ref(v_inst_226_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 1, v_b_228_);
lean_ctor_set(v___x_234_, 0, v_a_227_);
v___x_243_ = v___x_234_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_a_227_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v_b_228_);
lean_ctor_set(v_reuseFailAlloc_244_, 2, v_tail_232_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3___redArg(lean_object* v_inst_246_, lean_object* v_inst_247_, lean_object* v_m_248_, lean_object* v_a_249_, lean_object* v_b_250_){
_start:
{
lean_object* v_size_251_; lean_object* v_buckets_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_297_; 
v_size_251_ = lean_ctor_get(v_m_248_, 0);
v_buckets_252_ = lean_ctor_get(v_m_248_, 1);
v_isSharedCheck_297_ = !lean_is_exclusive(v_m_248_);
if (v_isSharedCheck_297_ == 0)
{
v___x_254_ = v_m_248_;
v_isShared_255_ = v_isSharedCheck_297_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_buckets_252_);
lean_inc(v_size_251_);
lean_dec(v_m_248_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_297_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_256_; lean_object* v___x_257_; uint64_t v___x_258_; uint64_t v___x_259_; uint64_t v___x_260_; uint64_t v___x_261_; uint64_t v_fold_262_; uint64_t v___x_263_; uint64_t v___x_264_; uint64_t v___x_265_; size_t v___x_266_; size_t v___x_267_; size_t v___x_268_; size_t v___x_269_; size_t v___x_270_; lean_object* v_bkt_271_; uint8_t v___x_272_; 
v___x_256_ = lean_array_get_size(v_buckets_252_);
lean_inc_ref(v_inst_247_);
lean_inc_n(v_a_249_, 2);
v___x_257_ = lean_apply_1(v_inst_247_, v_a_249_);
v___x_258_ = 32ULL;
v___x_259_ = lean_unbox_uint64(v___x_257_);
v___x_260_ = lean_uint64_shift_right(v___x_259_, v___x_258_);
v___x_261_ = lean_unbox_uint64(v___x_257_);
lean_dec_ref(v___x_257_);
v_fold_262_ = lean_uint64_xor(v___x_261_, v___x_260_);
v___x_263_ = 16ULL;
v___x_264_ = lean_uint64_shift_right(v_fold_262_, v___x_263_);
v___x_265_ = lean_uint64_xor(v_fold_262_, v___x_264_);
v___x_266_ = lean_uint64_to_usize(v___x_265_);
v___x_267_ = lean_usize_of_nat(v___x_256_);
v___x_268_ = ((size_t)1ULL);
v___x_269_ = lean_usize_sub(v___x_267_, v___x_268_);
v___x_270_ = lean_usize_land(v___x_266_, v___x_269_);
v_bkt_271_ = lean_array_uget_borrowed(v_buckets_252_, v___x_270_);
lean_inc(v_bkt_271_);
lean_inc_ref(v_inst_246_);
v___x_272_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__6___redArg(v_inst_246_, v_a_249_, v_bkt_271_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; lean_object* v_size_x27_274_; lean_object* v___x_275_; lean_object* v_buckets_x27_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; uint8_t v___x_282_; 
lean_dec_ref(v_inst_246_);
v___x_273_ = lean_unsigned_to_nat(1u);
v_size_x27_274_ = lean_nat_add(v_size_251_, v___x_273_);
lean_dec(v_size_251_);
lean_inc(v_bkt_271_);
v___x_275_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_275_, 0, v_a_249_);
lean_ctor_set(v___x_275_, 1, v_b_250_);
lean_ctor_set(v___x_275_, 2, v_bkt_271_);
v_buckets_x27_276_ = lean_array_uset(v_buckets_252_, v___x_270_, v___x_275_);
v___x_277_ = lean_unsigned_to_nat(4u);
v___x_278_ = lean_nat_mul(v_size_x27_274_, v___x_277_);
v___x_279_ = lean_unsigned_to_nat(3u);
v___x_280_ = lean_nat_div(v___x_278_, v___x_279_);
lean_dec(v___x_278_);
v___x_281_ = lean_array_get_size(v_buckets_x27_276_);
v___x_282_ = lean_nat_dec_le(v___x_280_, v___x_281_);
lean_dec(v___x_280_);
if (v___x_282_ == 0)
{
lean_object* v_val_283_; lean_object* v___x_285_; 
v_val_283_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7___redArg(v_inst_247_, v_buckets_x27_276_);
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 1, v_val_283_);
lean_ctor_set(v___x_254_, 0, v_size_x27_274_);
v___x_285_ = v___x_254_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_size_x27_274_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v_val_283_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
else
{
lean_object* v___x_288_; 
lean_dec_ref(v_inst_247_);
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 1, v_buckets_x27_276_);
lean_ctor_set(v___x_254_, 0, v_size_x27_274_);
v___x_288_ = v___x_254_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_size_x27_274_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v_buckets_x27_276_);
v___x_288_ = v_reuseFailAlloc_289_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
return v___x_288_;
}
}
}
else
{
lean_object* v___x_290_; lean_object* v_buckets_x27_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_295_; 
lean_inc(v_bkt_271_);
lean_dec_ref(v_inst_247_);
v___x_290_ = lean_box(0);
v_buckets_x27_291_ = lean_array_uset(v_buckets_252_, v___x_270_, v___x_290_);
v___x_292_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__8___redArg(v_inst_246_, v_a_249_, v_b_250_, v_bkt_271_);
v___x_293_ = lean_array_uset(v_buckets_x27_291_, v___x_270_, v___x_292_);
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 1, v___x_293_);
v___x_295_ = v___x_254_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_size_251_);
lean_ctor_set(v_reuseFailAlloc_296_, 1, v___x_293_);
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
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__2(lean_object* v_00_u03b1_298_, lean_object* v_00_u03b2_299_, lean_object* v_inst_300_, lean_object* v_inst_301_, lean_object* v_x_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3___redArg(v_inst_300_, v_inst_301_, v_x_302_, v___y_303_, v___y_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getKey_x3f___at___00Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6_spec__11___redArg(lean_object* v_inst_306_, lean_object* v_a_307_, lean_object* v_x_308_){
_start:
{
if (lean_obj_tag(v_x_308_) == 0)
{
lean_object* v___x_309_; 
lean_dec(v_a_307_);
lean_dec_ref(v_inst_306_);
v___x_309_ = lean_box(0);
return v___x_309_;
}
else
{
lean_object* v_key_310_; lean_object* v_tail_311_; lean_object* v___x_312_; uint8_t v___x_313_; 
v_key_310_ = lean_ctor_get(v_x_308_, 0);
lean_inc_n(v_key_310_, 2);
v_tail_311_ = lean_ctor_get(v_x_308_, 2);
lean_inc(v_tail_311_);
lean_dec_ref(v_x_308_);
lean_inc_ref(v_inst_306_);
lean_inc(v_a_307_);
v___x_312_ = lean_apply_2(v_inst_306_, v_key_310_, v_a_307_);
v___x_313_ = lean_unbox(v___x_312_);
if (v___x_313_ == 0)
{
lean_dec(v_key_310_);
v_x_308_ = v_tail_311_;
goto _start;
}
else
{
lean_object* v___x_315_; 
lean_dec(v_tail_311_);
lean_dec(v_a_307_);
lean_dec_ref(v_inst_306_);
v___x_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_315_, 0, v_key_310_);
return v___x_315_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6___redArg(lean_object* v_inst_316_, lean_object* v_inst_317_, lean_object* v_m_318_, lean_object* v_a_319_){
_start:
{
lean_object* v_buckets_320_; lean_object* v___x_321_; lean_object* v___x_322_; uint64_t v___x_323_; uint64_t v___x_324_; uint64_t v___x_325_; uint64_t v___x_326_; uint64_t v_fold_327_; uint64_t v___x_328_; uint64_t v___x_329_; uint64_t v___x_330_; size_t v___x_331_; size_t v___x_332_; size_t v___x_333_; size_t v___x_334_; size_t v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v_buckets_320_ = lean_ctor_get(v_m_318_, 1);
v___x_321_ = lean_array_get_size(v_buckets_320_);
lean_inc(v_a_319_);
v___x_322_ = lean_apply_1(v_inst_317_, v_a_319_);
v___x_323_ = 32ULL;
v___x_324_ = lean_unbox_uint64(v___x_322_);
v___x_325_ = lean_uint64_shift_right(v___x_324_, v___x_323_);
v___x_326_ = lean_unbox_uint64(v___x_322_);
lean_dec_ref(v___x_322_);
v_fold_327_ = lean_uint64_xor(v___x_326_, v___x_325_);
v___x_328_ = 16ULL;
v___x_329_ = lean_uint64_shift_right(v_fold_327_, v___x_328_);
v___x_330_ = lean_uint64_xor(v_fold_327_, v___x_329_);
v___x_331_ = lean_uint64_to_usize(v___x_330_);
v___x_332_ = lean_usize_of_nat(v___x_321_);
v___x_333_ = ((size_t)1ULL);
v___x_334_ = lean_usize_sub(v___x_332_, v___x_333_);
v___x_335_ = lean_usize_land(v___x_331_, v___x_334_);
v___x_336_ = lean_array_uget_borrowed(v_buckets_320_, v___x_335_);
lean_inc(v___x_336_);
v___x_337_ = l_Std_DHashMap_Internal_AssocList_getKey_x3f___at___00Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6_spec__11___redArg(v_inst_316_, v_a_319_, v___x_336_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6___redArg___boxed(lean_object* v_inst_338_, lean_object* v_inst_339_, lean_object* v_m_340_, lean_object* v_a_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6___redArg(v_inst_338_, v_inst_339_, v_m_340_, v_a_341_);
lean_dec_ref(v_m_340_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__4(lean_object* v_00_u03b1_343_, lean_object* v_inst_344_, lean_object* v_inst_345_, lean_object* v_x_346_, lean_object* v___y_347_){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6___redArg(v_inst_344_, v_inst_345_, v_x_346_, v___y_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__4___boxed(lean_object* v_00_u03b1_349_, lean_object* v_inst_350_, lean_object* v_inst_351_, lean_object* v_x_352_, lean_object* v___y_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_Lean_ShareCommon_objectFactory___elam__4(v_00_u03b1_349_, v_inst_350_, v_inst_351_, v_x_352_, v___y_353_);
lean_dec_ref(v_x_352_);
return v_res_354_;
}
}
static lean_object* _init_l_Lean_ShareCommon_objectFactory___closed__0(void){
_start:
{
lean_object* v___f_355_; 
v___f_355_ = lean_alloc_closure((void*)(l_Lean_ShareCommon_objectFactory___elam__0___boxed), 5, 0);
return v___f_355_;
}
}
static lean_object* _init_l_Lean_ShareCommon_objectFactory___closed__1(void){
_start:
{
lean_object* v___f_356_; 
v___f_356_ = lean_alloc_closure((void*)(l_Lean_ShareCommon_objectFactory___elam__1___boxed), 6, 0);
return v___f_356_;
}
}
static lean_object* _init_l_Lean_ShareCommon_objectFactory___closed__2(void){
_start:
{
lean_object* v___f_357_; 
v___f_357_ = lean_alloc_closure((void*)(l_Lean_ShareCommon_objectFactory___elam__2), 7, 0);
return v___f_357_;
}
}
static lean_object* _init_l_Lean_ShareCommon_objectFactory___closed__3(void){
_start:
{
lean_object* v___f_358_; 
v___f_358_ = lean_alloc_closure((void*)(l_Lean_ShareCommon_objectFactory___elam__3___boxed), 4, 0);
return v___f_358_;
}
}
static lean_object* _init_l_Lean_ShareCommon_objectFactory___closed__4(void){
_start:
{
lean_object* v___f_359_; 
v___f_359_ = lean_alloc_closure((void*)(l_Lean_ShareCommon_objectFactory___elam__4___boxed), 5, 0);
return v___f_359_;
}
}
static lean_object* _init_l_Lean_ShareCommon_objectFactory___closed__5(void){
_start:
{
lean_object* v___f_360_; 
v___f_360_ = lean_alloc_closure((void*)(l_Lean_ShareCommon_objectFactory___elam__5), 5, 0);
return v___f_360_;
}
}
static lean_object* _init_l_Lean_ShareCommon_objectFactory___closed__6(void){
_start:
{
lean_object* v___f_361_; lean_object* v___f_362_; lean_object* v___f_363_; lean_object* v___f_364_; lean_object* v___f_365_; lean_object* v___f_366_; lean_object* v___x_367_; 
v___f_361_ = lean_obj_once(&l_Lean_ShareCommon_objectFactory___closed__5, &l_Lean_ShareCommon_objectFactory___closed__5_once, _init_l_Lean_ShareCommon_objectFactory___closed__5);
v___f_362_ = lean_obj_once(&l_Lean_ShareCommon_objectFactory___closed__4, &l_Lean_ShareCommon_objectFactory___closed__4_once, _init_l_Lean_ShareCommon_objectFactory___closed__4);
v___f_363_ = lean_obj_once(&l_Lean_ShareCommon_objectFactory___closed__3, &l_Lean_ShareCommon_objectFactory___closed__3_once, _init_l_Lean_ShareCommon_objectFactory___closed__3);
v___f_364_ = lean_obj_once(&l_Lean_ShareCommon_objectFactory___closed__2, &l_Lean_ShareCommon_objectFactory___closed__2_once, _init_l_Lean_ShareCommon_objectFactory___closed__2);
v___f_365_ = lean_obj_once(&l_Lean_ShareCommon_objectFactory___closed__1, &l_Lean_ShareCommon_objectFactory___closed__1_once, _init_l_Lean_ShareCommon_objectFactory___closed__1);
v___f_366_ = lean_obj_once(&l_Lean_ShareCommon_objectFactory___closed__0, &l_Lean_ShareCommon_objectFactory___closed__0_once, _init_l_Lean_ShareCommon_objectFactory___closed__0);
v___x_367_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_367_, 0, v___f_366_);
lean_ctor_set(v___x_367_, 1, v___f_365_);
lean_ctor_set(v___x_367_, 2, v___f_364_);
lean_ctor_set(v___x_367_, 3, v___f_363_);
lean_ctor_set(v___x_367_, 4, v___f_362_);
lean_ctor_set(v___x_367_, 5, v___f_361_);
return v___x_367_;
}
}
static lean_object* _init_l_Lean_ShareCommon_objectFactory___closed__7(void){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_368_ = lean_obj_once(&l_Lean_ShareCommon_objectFactory___closed__6, &l_Lean_ShareCommon_objectFactory___closed__6_once, _init_l_Lean_ShareCommon_objectFactory___closed__6);
v___x_369_ = l_ShareCommon_StateFactory_mkImpl(v___x_368_);
return v___x_369_;
}
}
static lean_object* _init_l_Lean_ShareCommon_objectFactory(void){
_start:
{
lean_object* v___x_370_; 
v___x_370_ = lean_obj_once(&l_Lean_ShareCommon_objectFactory___closed__7, &l_Lean_ShareCommon_objectFactory___closed__7_once, _init_l_Lean_ShareCommon_objectFactory___closed__7);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__1___redArg(lean_object* v_inst_371_, lean_object* v_inst_372_, lean_object* v_x_373_, lean_object* v___y_374_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1___redArg(v_inst_371_, v_inst_372_, v_x_373_, v___y_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__1___redArg___boxed(lean_object* v_inst_376_, lean_object* v_inst_377_, lean_object* v_x_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lean_ShareCommon_objectFactory___elam__1___redArg(v_inst_376_, v_inst_377_, v_x_378_, v___y_379_);
lean_dec_ref(v_x_378_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__2___redArg(lean_object* v_inst_381_, lean_object* v_inst_382_, lean_object* v_x_383_, lean_object* v___y_384_, lean_object* v___y_385_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3___redArg(v_inst_381_, v_inst_382_, v_x_383_, v___y_384_, v___y_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__4___redArg(lean_object* v_inst_387_, lean_object* v_inst_388_, lean_object* v_x_389_, lean_object* v___y_390_){
_start:
{
lean_object* v___x_391_; 
v___x_391_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6___redArg(v_inst_387_, v_inst_388_, v_x_389_, v___y_390_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_objectFactory___elam__4___redArg___boxed(lean_object* v_inst_392_, lean_object* v_inst_393_, lean_object* v_x_394_, lean_object* v___y_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Lean_ShareCommon_objectFactory___elam__4___redArg(v_inst_392_, v_inst_393_, v_x_394_, v___y_395_);
lean_dec_ref(v_x_394_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1(lean_object* v_00_u03b1_397_, lean_object* v_inst_398_, lean_object* v_inst_399_, lean_object* v_00_u03b2_400_, lean_object* v_m_401_, lean_object* v_a_402_){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1___redArg(v_inst_398_, v_inst_399_, v_m_401_, v_a_402_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1___boxed(lean_object* v_00_u03b1_404_, lean_object* v_inst_405_, lean_object* v_inst_406_, lean_object* v_00_u03b2_407_, lean_object* v_m_408_, lean_object* v_a_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1(v_00_u03b1_404_, v_inst_405_, v_inst_406_, v_00_u03b2_407_, v_m_408_, v_a_409_);
lean_dec_ref(v_m_408_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3(lean_object* v_00_u03b1_411_, lean_object* v_inst_412_, lean_object* v_inst_413_, lean_object* v_00_u03b2_414_, lean_object* v_m_415_, lean_object* v_a_416_, lean_object* v_b_417_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3___redArg(v_inst_412_, v_inst_413_, v_m_415_, v_a_416_, v_b_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6(lean_object* v_00_u03b1_419_, lean_object* v_inst_420_, lean_object* v_inst_421_, lean_object* v_00_u03b2_422_, lean_object* v_m_423_, lean_object* v_a_424_){
_start:
{
lean_object* v___x_425_; 
v___x_425_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6___redArg(v_inst_420_, v_inst_421_, v_m_423_, v_a_424_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6___boxed(lean_object* v_00_u03b1_426_, lean_object* v_inst_427_, lean_object* v_inst_428_, lean_object* v_00_u03b2_429_, lean_object* v_m_430_, lean_object* v_a_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6(v_00_u03b1_426_, v_inst_427_, v_inst_428_, v_00_u03b2_429_, v_m_430_, v_a_431_);
lean_dec_ref(v_m_430_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ShareCommon_objectFactory___elam__5_spec__8(lean_object* v_00_u03b1_433_, lean_object* v_inst_434_, lean_object* v_inst_435_, lean_object* v_00_u03b2_436_, lean_object* v_m_437_, lean_object* v_a_438_, lean_object* v_b_439_){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ShareCommon_objectFactory___elam__5_spec__8___redArg(v_inst_434_, v_inst_435_, v_m_437_, v_a_438_, v_b_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1_spec__3(lean_object* v_00_u03b1_441_, lean_object* v_inst_442_, lean_object* v_00_u03b2_443_, lean_object* v_a_444_, lean_object* v_x_445_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ShareCommon_objectFactory___elam__1_spec__1_spec__3___redArg(v_inst_442_, v_a_444_, v_x_445_);
return v___x_446_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__6(lean_object* v_00_u03b1_447_, lean_object* v_inst_448_, lean_object* v_00_u03b2_449_, lean_object* v_a_450_, lean_object* v_x_451_){
_start:
{
uint8_t v___x_452_; 
v___x_452_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__6___redArg(v_inst_448_, v_a_450_, v_x_451_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__6___boxed(lean_object* v_00_u03b1_453_, lean_object* v_inst_454_, lean_object* v_00_u03b2_455_, lean_object* v_a_456_, lean_object* v_x_457_){
_start:
{
uint8_t v_res_458_; lean_object* v_r_459_; 
v_res_458_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__6(v_00_u03b1_453_, v_inst_454_, v_00_u03b2_455_, v_a_456_, v_x_457_);
v_r_459_ = lean_box(v_res_458_);
return v_r_459_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7(lean_object* v_00_u03b1_460_, lean_object* v_inst_461_, lean_object* v_00_u03b2_462_, lean_object* v_data_463_){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7___redArg(v_inst_461_, v_data_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__8(lean_object* v_00_u03b1_465_, lean_object* v_inst_466_, lean_object* v_00_u03b2_467_, lean_object* v_a_468_, lean_object* v_b_469_, lean_object* v_x_470_){
_start:
{
lean_object* v___x_471_; 
v___x_471_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__8___redArg(v_inst_466_, v_a_468_, v_b_469_, v_x_470_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getKey_x3f___at___00Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6_spec__11(lean_object* v_00_u03b1_472_, lean_object* v_inst_473_, lean_object* v_00_u03b2_474_, lean_object* v_a_475_, lean_object* v_x_476_){
_start:
{
lean_object* v___x_477_; 
v___x_477_ = l_Std_DHashMap_Internal_AssocList_getKey_x3f___at___00Std_DHashMap_Internal_Raw_u2080_getKey_x3f___at___00Lean_ShareCommon_objectFactory___elam__4_spec__6_spec__11___redArg(v_inst_473_, v_a_475_, v_x_476_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7_spec__10(lean_object* v_00_u03b1_478_, lean_object* v_inst_479_, lean_object* v_00_u03b2_480_, lean_object* v_i_481_, lean_object* v_source_482_, lean_object* v_target_483_){
_start:
{
lean_object* v___x_484_; 
v___x_484_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7_spec__10___redArg(v_inst_479_, v_i_481_, v_source_482_, v_target_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7_spec__10_spec__13(lean_object* v_00_u03b1_485_, lean_object* v_00_u03b2_486_, lean_object* v_inst_487_, lean_object* v_x_488_, lean_object* v_x_489_){
_start:
{
lean_object* v___x_490_; 
v___x_490_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ShareCommon_objectFactory___elam__2_spec__3_spec__7_spec__10_spec__13___redArg(v_inst_487_, v_x_488_, v_x_489_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__11_spec__13___redArg(lean_object* v_inst_491_, lean_object* v_x_492_, lean_object* v_x_493_, lean_object* v_x_494_, lean_object* v_x_495_){
_start:
{
lean_object* v_ks_496_; lean_object* v_vs_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_522_; 
v_ks_496_ = lean_ctor_get(v_x_492_, 0);
v_vs_497_ = lean_ctor_get(v_x_492_, 1);
v_isSharedCheck_522_ = !lean_is_exclusive(v_x_492_);
if (v_isSharedCheck_522_ == 0)
{
v___x_499_ = v_x_492_;
v_isShared_500_ = v_isSharedCheck_522_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_vs_497_);
lean_inc(v_ks_496_);
lean_dec(v_x_492_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_522_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_501_; uint8_t v___x_502_; 
v___x_501_ = lean_array_get_size(v_ks_496_);
v___x_502_ = lean_nat_dec_lt(v_x_493_, v___x_501_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_506_; 
lean_dec(v_x_493_);
lean_dec_ref(v_inst_491_);
v___x_503_ = lean_array_push(v_ks_496_, v_x_494_);
v___x_504_ = lean_array_push(v_vs_497_, v_x_495_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 1, v___x_504_);
lean_ctor_set(v___x_499_, 0, v___x_503_);
v___x_506_ = v___x_499_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_503_);
lean_ctor_set(v_reuseFailAlloc_507_, 1, v___x_504_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
else
{
lean_object* v_k_x27_508_; lean_object* v___x_509_; uint8_t v___x_510_; 
v_k_x27_508_ = lean_array_fget_borrowed(v_ks_496_, v_x_493_);
lean_inc_ref(v_inst_491_);
lean_inc(v_k_x27_508_);
lean_inc(v_x_494_);
v___x_509_ = lean_apply_2(v_inst_491_, v_x_494_, v_k_x27_508_);
v___x_510_ = lean_unbox(v___x_509_);
if (v___x_510_ == 0)
{
lean_object* v___x_512_; 
if (v_isShared_500_ == 0)
{
v___x_512_ = v___x_499_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_ks_496_);
lean_ctor_set(v_reuseFailAlloc_516_, 1, v_vs_497_);
v___x_512_ = v_reuseFailAlloc_516_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = lean_unsigned_to_nat(1u);
v___x_514_ = lean_nat_add(v_x_493_, v___x_513_);
lean_dec(v_x_493_);
v_x_492_ = v___x_512_;
v_x_493_ = v___x_514_;
goto _start;
}
}
else
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_520_; 
lean_dec_ref(v_inst_491_);
v___x_517_ = lean_array_fset(v_ks_496_, v_x_493_, v_x_494_);
v___x_518_ = lean_array_fset(v_vs_497_, v_x_493_, v_x_495_);
lean_dec(v_x_493_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 1, v___x_518_);
lean_ctor_set(v___x_499_, 0, v___x_517_);
v___x_520_ = v___x_499_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v___x_517_);
lean_ctor_set(v_reuseFailAlloc_521_, 1, v___x_518_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__11___redArg(lean_object* v_inst_523_, lean_object* v_n_524_, lean_object* v_k_525_, lean_object* v_v_526_){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_527_ = lean_unsigned_to_nat(0u);
v___x_528_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__11_spec__13___redArg(v_inst_523_, v_n_524_, v___x_527_, v_k_525_, v_v_526_);
return v___x_528_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__0(void){
_start:
{
size_t v___x_529_; size_t v___x_530_; size_t v___x_531_; 
v___x_529_ = ((size_t)5ULL);
v___x_530_ = ((size_t)1ULL);
v___x_531_ = lean_usize_shift_left(v___x_530_, v___x_529_);
return v___x_531_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__1(void){
_start:
{
size_t v___x_532_; size_t v___x_533_; size_t v___x_534_; 
v___x_532_ = ((size_t)1ULL);
v___x_533_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__0);
v___x_534_ = lean_usize_sub(v___x_533_, v___x_532_);
return v___x_534_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_535_; 
v___x_535_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg(lean_object* v_inst_536_, lean_object* v_inst_537_, lean_object* v_x_538_, size_t v_x_539_, size_t v_x_540_, lean_object* v_x_541_, lean_object* v_x_542_){
_start:
{
if (lean_obj_tag(v_x_538_) == 0)
{
lean_object* v_es_543_; size_t v___x_544_; size_t v___x_545_; size_t v___x_546_; size_t v___x_547_; lean_object* v_j_548_; lean_object* v___x_549_; uint8_t v___x_550_; 
v_es_543_ = lean_ctor_get(v_x_538_, 0);
v___x_544_ = ((size_t)5ULL);
v___x_545_ = ((size_t)1ULL);
v___x_546_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__1);
v___x_547_ = lean_usize_land(v_x_539_, v___x_546_);
v_j_548_ = lean_usize_to_nat(v___x_547_);
v___x_549_ = lean_array_get_size(v_es_543_);
v___x_550_ = lean_nat_dec_lt(v_j_548_, v___x_549_);
if (v___x_550_ == 0)
{
lean_dec(v_j_548_);
lean_dec(v_x_542_);
lean_dec(v_x_541_);
lean_dec_ref(v_inst_537_);
lean_dec_ref(v_inst_536_);
return v_x_538_;
}
else
{
lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_588_; 
lean_inc_ref(v_es_543_);
v_isSharedCheck_588_ = !lean_is_exclusive(v_x_538_);
if (v_isSharedCheck_588_ == 0)
{
lean_object* v_unused_589_; 
v_unused_589_ = lean_ctor_get(v_x_538_, 0);
lean_dec(v_unused_589_);
v___x_552_ = v_x_538_;
v_isShared_553_ = v_isSharedCheck_588_;
goto v_resetjp_551_;
}
else
{
lean_dec(v_x_538_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_588_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v_v_554_; lean_object* v___x_555_; lean_object* v_xs_x27_556_; lean_object* v___y_558_; 
v_v_554_ = lean_array_fget(v_es_543_, v_j_548_);
v___x_555_ = lean_box(0);
v_xs_x27_556_ = lean_array_fset(v_es_543_, v_j_548_, v___x_555_);
switch(lean_obj_tag(v_v_554_))
{
case 0:
{
lean_object* v_key_563_; lean_object* v_val_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_575_; 
lean_dec_ref(v_inst_537_);
v_key_563_ = lean_ctor_get(v_v_554_, 0);
v_val_564_ = lean_ctor_get(v_v_554_, 1);
v_isSharedCheck_575_ = !lean_is_exclusive(v_v_554_);
if (v_isSharedCheck_575_ == 0)
{
v___x_566_ = v_v_554_;
v_isShared_567_ = v_isSharedCheck_575_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_val_564_);
lean_inc(v_key_563_);
lean_dec(v_v_554_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_575_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_568_; uint8_t v___x_569_; 
lean_inc(v_key_563_);
lean_inc(v_x_541_);
v___x_568_ = lean_apply_2(v_inst_536_, v_x_541_, v_key_563_);
v___x_569_ = lean_unbox(v___x_568_);
if (v___x_569_ == 0)
{
lean_object* v___x_570_; lean_object* v___x_571_; 
lean_del_object(v___x_566_);
v___x_570_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_563_, v_val_564_, v_x_541_, v_x_542_);
v___x_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_571_, 0, v___x_570_);
v___y_558_ = v___x_571_;
goto v___jp_557_;
}
else
{
lean_object* v___x_573_; 
lean_dec(v_val_564_);
lean_dec(v_key_563_);
if (v_isShared_567_ == 0)
{
lean_ctor_set(v___x_566_, 1, v_x_542_);
lean_ctor_set(v___x_566_, 0, v_x_541_);
v___x_573_ = v___x_566_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_x_541_);
lean_ctor_set(v_reuseFailAlloc_574_, 1, v_x_542_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
v___y_558_ = v___x_573_;
goto v___jp_557_;
}
}
}
}
case 1:
{
lean_object* v_node_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_586_; 
v_node_576_ = lean_ctor_get(v_v_554_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v_v_554_);
if (v_isSharedCheck_586_ == 0)
{
v___x_578_ = v_v_554_;
v_isShared_579_ = v_isSharedCheck_586_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_node_576_);
lean_dec(v_v_554_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_586_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
size_t v___x_580_; size_t v___x_581_; lean_object* v___x_582_; lean_object* v___x_584_; 
v___x_580_ = lean_usize_shift_right(v_x_539_, v___x_544_);
v___x_581_ = lean_usize_add(v_x_540_, v___x_545_);
v___x_582_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg(v_inst_536_, v_inst_537_, v_node_576_, v___x_580_, v___x_581_, v_x_541_, v_x_542_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 0, v___x_582_);
v___x_584_ = v___x_578_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v___x_582_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
v___y_558_ = v___x_584_;
goto v___jp_557_;
}
}
}
default: 
{
lean_object* v___x_587_; 
lean_dec_ref(v_inst_537_);
lean_dec_ref(v_inst_536_);
v___x_587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_587_, 0, v_x_541_);
lean_ctor_set(v___x_587_, 1, v_x_542_);
v___y_558_ = v___x_587_;
goto v___jp_557_;
}
}
v___jp_557_:
{
lean_object* v___x_559_; lean_object* v___x_561_; 
v___x_559_ = lean_array_fset(v_xs_x27_556_, v_j_548_, v___y_558_);
lean_dec(v_j_548_);
if (v_isShared_553_ == 0)
{
lean_ctor_set(v___x_552_, 0, v___x_559_);
v___x_561_ = v___x_552_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v___x_559_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
}
}
else
{
lean_object* v_ks_590_; lean_object* v_vs_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_611_; 
v_ks_590_ = lean_ctor_get(v_x_538_, 0);
v_vs_591_ = lean_ctor_get(v_x_538_, 1);
v_isSharedCheck_611_ = !lean_is_exclusive(v_x_538_);
if (v_isSharedCheck_611_ == 0)
{
v___x_593_ = v_x_538_;
v_isShared_594_ = v_isSharedCheck_611_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_vs_591_);
lean_inc(v_ks_590_);
lean_dec(v_x_538_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_611_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_ks_590_);
lean_ctor_set(v_reuseFailAlloc_610_, 1, v_vs_591_);
v___x_596_ = v_reuseFailAlloc_610_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
lean_object* v_newNode_597_; uint8_t v___y_599_; size_t v___x_605_; uint8_t v___x_606_; 
lean_inc_ref(v_inst_536_);
v_newNode_597_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__11___redArg(v_inst_536_, v___x_596_, v_x_541_, v_x_542_);
v___x_605_ = ((size_t)7ULL);
v___x_606_ = lean_usize_dec_le(v___x_605_, v_x_540_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; lean_object* v___x_608_; uint8_t v___x_609_; 
v___x_607_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_597_);
v___x_608_ = lean_unsigned_to_nat(4u);
v___x_609_ = lean_nat_dec_lt(v___x_607_, v___x_608_);
lean_dec(v___x_607_);
v___y_599_ = v___x_609_;
goto v___jp_598_;
}
else
{
v___y_599_ = v___x_606_;
goto v___jp_598_;
}
v___jp_598_:
{
if (v___y_599_ == 0)
{
lean_object* v_ks_600_; lean_object* v_vs_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v_ks_600_ = lean_ctor_get(v_newNode_597_, 0);
lean_inc_ref(v_ks_600_);
v_vs_601_ = lean_ctor_get(v_newNode_597_, 1);
lean_inc_ref(v_vs_601_);
lean_dec_ref(v_newNode_597_);
v___x_602_ = lean_unsigned_to_nat(0u);
v___x_603_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__2);
v___x_604_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__12___redArg(v_inst_536_, v_inst_537_, v_x_540_, v_ks_600_, v_vs_601_, v___x_602_, v___x_603_);
lean_dec_ref(v_vs_601_);
lean_dec_ref(v_ks_600_);
return v___x_604_;
}
else
{
lean_dec_ref(v_inst_537_);
lean_dec_ref(v_inst_536_);
return v_newNode_597_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__12___redArg(lean_object* v_inst_612_, lean_object* v_inst_613_, size_t v_depth_614_, lean_object* v_keys_615_, lean_object* v_vals_616_, lean_object* v_i_617_, lean_object* v_entries_618_){
_start:
{
lean_object* v___x_619_; uint8_t v___x_620_; 
v___x_619_ = lean_array_get_size(v_keys_615_);
v___x_620_ = lean_nat_dec_lt(v_i_617_, v___x_619_);
if (v___x_620_ == 0)
{
lean_dec(v_i_617_);
lean_dec_ref(v_inst_613_);
lean_dec_ref(v_inst_612_);
return v_entries_618_;
}
else
{
lean_object* v_k_621_; lean_object* v_v_622_; lean_object* v___x_623_; uint64_t v___x_624_; size_t v_h_625_; size_t v___x_626_; lean_object* v___x_627_; size_t v___x_628_; size_t v___x_629_; size_t v___x_630_; size_t v_h_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v_k_621_ = lean_array_fget_borrowed(v_keys_615_, v_i_617_);
v_v_622_ = lean_array_fget_borrowed(v_vals_616_, v_i_617_);
lean_inc_ref_n(v_inst_613_, 2);
lean_inc_n(v_k_621_, 2);
v___x_623_ = lean_apply_1(v_inst_613_, v_k_621_);
v___x_624_ = lean_unbox_uint64(v___x_623_);
lean_dec_ref(v___x_623_);
v_h_625_ = lean_uint64_to_usize(v___x_624_);
v___x_626_ = ((size_t)5ULL);
v___x_627_ = lean_unsigned_to_nat(1u);
v___x_628_ = ((size_t)1ULL);
v___x_629_ = lean_usize_sub(v_depth_614_, v___x_628_);
v___x_630_ = lean_usize_mul(v___x_626_, v___x_629_);
v_h_631_ = lean_usize_shift_right(v_h_625_, v___x_630_);
v___x_632_ = lean_nat_add(v_i_617_, v___x_627_);
lean_dec(v_i_617_);
lean_inc(v_v_622_);
lean_inc_ref(v_inst_612_);
v___x_633_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg(v_inst_612_, v_inst_613_, v_entries_618_, v_h_631_, v_depth_614_, v_k_621_, v_v_622_);
v_i_617_ = v___x_632_;
v_entries_618_ = v___x_633_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__12___redArg___boxed(lean_object* v_inst_635_, lean_object* v_inst_636_, lean_object* v_depth_637_, lean_object* v_keys_638_, lean_object* v_vals_639_, lean_object* v_i_640_, lean_object* v_entries_641_){
_start:
{
size_t v_depth_boxed_642_; lean_object* v_res_643_; 
v_depth_boxed_642_ = lean_unbox_usize(v_depth_637_);
lean_dec(v_depth_637_);
v_res_643_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__12___redArg(v_inst_635_, v_inst_636_, v_depth_boxed_642_, v_keys_638_, v_vals_639_, v_i_640_, v_entries_641_);
lean_dec_ref(v_vals_639_);
lean_dec_ref(v_keys_638_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___boxed(lean_object* v_inst_644_, lean_object* v_inst_645_, lean_object* v_x_646_, lean_object* v_x_647_, lean_object* v_x_648_, lean_object* v_x_649_, lean_object* v_x_650_){
_start:
{
size_t v_x_772__boxed_651_; size_t v_x_773__boxed_652_; lean_object* v_res_653_; 
v_x_772__boxed_651_ = lean_unbox_usize(v_x_647_);
lean_dec(v_x_647_);
v_x_773__boxed_652_ = lean_unbox_usize(v_x_648_);
lean_dec(v_x_648_);
v_res_653_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg(v_inst_644_, v_inst_645_, v_x_646_, v_x_772__boxed_651_, v_x_773__boxed_652_, v_x_649_, v_x_650_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4___redArg(lean_object* v_inst_654_, lean_object* v_inst_655_, lean_object* v_x_656_, lean_object* v_x_657_, lean_object* v_x_658_){
_start:
{
lean_object* v___x_659_; uint64_t v___x_660_; size_t v___x_661_; size_t v___x_662_; lean_object* v___x_663_; 
lean_inc_ref(v_inst_655_);
lean_inc(v_x_657_);
v___x_659_ = lean_apply_1(v_inst_655_, v_x_657_);
v___x_660_ = lean_unbox_uint64(v___x_659_);
lean_dec_ref(v___x_659_);
v___x_661_ = lean_uint64_to_usize(v___x_660_);
v___x_662_ = ((size_t)1ULL);
v___x_663_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg(v_inst_654_, v_inst_655_, v_x_656_, v___x_661_, v___x_662_, v_x_657_, v_x_658_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__2(lean_object* v_00_u03b1_664_, lean_object* v_00_u03b2_665_, lean_object* v_inst_666_, lean_object* v_inst_667_, lean_object* v_x_668_, lean_object* v___y_669_, lean_object* v___y_670_){
_start:
{
lean_object* v___x_671_; 
v___x_671_ = l_Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4___redArg(v_inst_666_, v_inst_667_, v_x_668_, v___y_669_, v___y_670_);
return v___x_671_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_672_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_673_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0___closed__0);
v___x_674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_674_, 0, v___x_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0(lean_object* v_00_u03b1_675_, lean_object* v_inst_676_, lean_object* v_inst_677_, lean_object* v_00_u03b2_678_){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0___closed__1);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0___boxed(lean_object* v_00_u03b1_680_, lean_object* v_inst_681_, lean_object* v_inst_682_, lean_object* v_00_u03b2_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0(v_00_u03b1_680_, v_inst_681_, v_inst_682_, v_00_u03b2_683_);
lean_dec_ref(v_inst_682_);
lean_dec_ref(v_inst_681_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__0(lean_object* v_00_u03b1_685_, lean_object* v_00_u03b2_686_, lean_object* v_inst_687_, lean_object* v_inst_688_, lean_object* v_x_689_){
_start:
{
lean_object* v___x_690_; 
v___x_690_ = l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0(lean_box(0), v_inst_687_, v_inst_688_, lean_box(0));
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__0___boxed(lean_object* v_00_u03b1_691_, lean_object* v_00_u03b2_692_, lean_object* v_inst_693_, lean_object* v_inst_694_, lean_object* v_x_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l_Lean_ShareCommon_persistentObjectFactory___elam__0(v_00_u03b1_691_, v_00_u03b2_692_, v_inst_693_, v_inst_694_, v_x_695_);
lean_dec(v_x_695_);
lean_dec_ref(v_inst_694_);
lean_dec_ref(v_inst_693_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10_spec__15___redArg(lean_object* v_inst_697_, lean_object* v_keys_698_, lean_object* v_vals_699_, lean_object* v_i_700_, lean_object* v_k_701_){
_start:
{
lean_object* v___x_702_; uint8_t v___x_703_; 
v___x_702_ = lean_array_get_size(v_keys_698_);
v___x_703_ = lean_nat_dec_lt(v_i_700_, v___x_702_);
if (v___x_703_ == 0)
{
lean_object* v___x_704_; 
lean_dec(v_k_701_);
lean_dec(v_i_700_);
lean_dec_ref(v_inst_697_);
v___x_704_ = lean_box(0);
return v___x_704_;
}
else
{
lean_object* v_k_x27_705_; lean_object* v___x_706_; uint8_t v___x_707_; 
v_k_x27_705_ = lean_array_fget_borrowed(v_keys_698_, v_i_700_);
lean_inc_ref(v_inst_697_);
lean_inc(v_k_x27_705_);
lean_inc(v_k_701_);
v___x_706_ = lean_apply_2(v_inst_697_, v_k_701_, v_k_x27_705_);
v___x_707_ = lean_unbox(v___x_706_);
if (v___x_707_ == 0)
{
lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_708_ = lean_unsigned_to_nat(1u);
v___x_709_ = lean_nat_add(v_i_700_, v___x_708_);
lean_dec(v_i_700_);
v_i_700_ = v___x_709_;
goto _start;
}
else
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
lean_dec(v_k_701_);
lean_dec_ref(v_inst_697_);
v___x_711_ = lean_array_fget_borrowed(v_vals_699_, v_i_700_);
lean_dec(v_i_700_);
lean_inc(v___x_711_);
lean_inc(v_k_x27_705_);
v___x_712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_712_, 0, v_k_x27_705_);
lean_ctor_set(v___x_712_, 1, v___x_711_);
v___x_713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_713_, 0, v___x_712_);
return v___x_713_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10_spec__15___redArg___boxed(lean_object* v_inst_714_, lean_object* v_keys_715_, lean_object* v_vals_716_, lean_object* v_i_717_, lean_object* v_k_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10_spec__15___redArg(v_inst_714_, v_keys_715_, v_vals_716_, v_i_717_, v_k_718_);
lean_dec_ref(v_vals_716_);
lean_dec_ref(v_keys_715_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10___redArg(lean_object* v_inst_720_, lean_object* v_x_721_, size_t v_x_722_, lean_object* v_x_723_){
_start:
{
if (lean_obj_tag(v_x_721_) == 0)
{
lean_object* v_es_724_; lean_object* v___x_725_; size_t v___x_726_; size_t v___x_727_; size_t v___x_728_; lean_object* v_j_729_; lean_object* v___x_730_; 
v_es_724_ = lean_ctor_get(v_x_721_, 0);
lean_inc_ref(v_es_724_);
lean_dec_ref(v_x_721_);
v___x_725_ = lean_box(2);
v___x_726_ = ((size_t)5ULL);
v___x_727_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__1);
v___x_728_ = lean_usize_land(v_x_722_, v___x_727_);
v_j_729_ = lean_usize_to_nat(v___x_728_);
v___x_730_ = lean_array_get(v___x_725_, v_es_724_, v_j_729_);
lean_dec(v_j_729_);
lean_dec_ref(v_es_724_);
switch(lean_obj_tag(v___x_730_))
{
case 0:
{
lean_object* v_key_731_; lean_object* v_val_732_; lean_object* v___x_733_; uint8_t v___x_734_; 
v_key_731_ = lean_ctor_get(v___x_730_, 0);
lean_inc_n(v_key_731_, 2);
v_val_732_ = lean_ctor_get(v___x_730_, 1);
lean_inc(v_val_732_);
lean_dec_ref(v___x_730_);
v___x_733_ = lean_apply_2(v_inst_720_, v_x_723_, v_key_731_);
v___x_734_ = lean_unbox(v___x_733_);
if (v___x_734_ == 0)
{
lean_object* v___x_735_; 
lean_dec(v_val_732_);
lean_dec(v_key_731_);
v___x_735_ = lean_box(0);
return v___x_735_;
}
else
{
lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_736_, 0, v_key_731_);
lean_ctor_set(v___x_736_, 1, v_val_732_);
v___x_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_737_, 0, v___x_736_);
return v___x_737_;
}
}
case 1:
{
lean_object* v_node_738_; size_t v___x_739_; 
v_node_738_ = lean_ctor_get(v___x_730_, 0);
lean_inc(v_node_738_);
lean_dec_ref(v___x_730_);
v___x_739_ = lean_usize_shift_right(v_x_722_, v___x_726_);
v_x_721_ = v_node_738_;
v_x_722_ = v___x_739_;
goto _start;
}
default: 
{
lean_object* v___x_741_; 
lean_dec(v_x_723_);
lean_dec_ref(v_inst_720_);
v___x_741_ = lean_box(0);
return v___x_741_;
}
}
}
else
{
lean_object* v_ks_742_; lean_object* v_vs_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v_ks_742_ = lean_ctor_get(v_x_721_, 0);
lean_inc_ref(v_ks_742_);
v_vs_743_ = lean_ctor_get(v_x_721_, 1);
lean_inc_ref(v_vs_743_);
lean_dec_ref(v_x_721_);
v___x_744_ = lean_unsigned_to_nat(0u);
v___x_745_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10_spec__15___redArg(v_inst_720_, v_ks_742_, v_vs_743_, v___x_744_, v_x_723_);
lean_dec_ref(v_vs_743_);
lean_dec_ref(v_ks_742_);
return v___x_745_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10___redArg___boxed(lean_object* v_inst_746_, lean_object* v_x_747_, lean_object* v_x_748_, lean_object* v_x_749_){
_start:
{
size_t v_x_1051__boxed_750_; lean_object* v_res_751_; 
v_x_1051__boxed_750_ = lean_unbox_usize(v_x_748_);
lean_dec(v_x_748_);
v_res_751_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10___redArg(v_inst_746_, v_x_747_, v_x_1051__boxed_750_, v_x_749_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7___redArg(lean_object* v_inst_752_, lean_object* v_inst_753_, lean_object* v_x_754_, lean_object* v_x_755_){
_start:
{
lean_object* v___x_756_; uint64_t v___x_757_; size_t v___x_758_; lean_object* v___x_759_; 
lean_inc(v_x_755_);
v___x_756_ = lean_apply_1(v_inst_753_, v_x_755_);
v___x_757_ = lean_unbox_uint64(v___x_756_);
lean_dec_ref(v___x_756_);
v___x_758_ = lean_uint64_to_usize(v___x_757_);
lean_inc_ref(v_x_754_);
v___x_759_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10___redArg(v_inst_752_, v_x_754_, v___x_758_, v_x_755_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7___redArg___boxed(lean_object* v_inst_760_, lean_object* v_inst_761_, lean_object* v_x_762_, lean_object* v_x_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7___redArg(v_inst_760_, v_inst_761_, v_x_762_, v_x_763_);
lean_dec_ref(v_x_762_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__4___redArg(lean_object* v_inst_765_, lean_object* v_inst_766_, lean_object* v_x_767_, lean_object* v___y_768_){
_start:
{
lean_object* v___x_769_; 
v___x_769_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7___redArg(v_inst_765_, v_inst_766_, v_x_767_, v___y_768_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v___x_770_; 
v___x_770_ = lean_box(0);
return v___x_770_;
}
else
{
lean_object* v_val_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_779_; 
v_val_771_ = lean_ctor_get(v___x_769_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_779_ == 0)
{
v___x_773_ = v___x_769_;
v_isShared_774_ = v_isSharedCheck_779_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_val_771_);
lean_dec(v___x_769_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_779_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v_fst_775_; lean_object* v___x_777_; 
v_fst_775_ = lean_ctor_get(v_val_771_, 0);
lean_inc(v_fst_775_);
lean_dec(v_val_771_);
if (v_isShared_774_ == 0)
{
lean_ctor_set(v___x_773_, 0, v_fst_775_);
v___x_777_ = v___x_773_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_fst_775_);
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
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__4___redArg___boxed(lean_object* v_inst_780_, lean_object* v_inst_781_, lean_object* v_x_782_, lean_object* v___y_783_){
_start:
{
lean_object* v_res_784_; 
v_res_784_ = l_Lean_ShareCommon_persistentObjectFactory___elam__4___redArg(v_inst_780_, v_inst_781_, v_x_782_, v___y_783_);
lean_dec_ref(v_x_782_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__4(lean_object* v_00_u03b1_785_, lean_object* v_inst_786_, lean_object* v_inst_787_, lean_object* v_x_788_, lean_object* v___y_789_){
_start:
{
lean_object* v___x_790_; 
v___x_790_ = l_Lean_ShareCommon_persistentObjectFactory___elam__4___redArg(v_inst_786_, v_inst_787_, v_x_788_, v___y_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__4___boxed(lean_object* v_00_u03b1_791_, lean_object* v_inst_792_, lean_object* v_inst_793_, lean_object* v_x_794_, lean_object* v___y_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Lean_ShareCommon_persistentObjectFactory___elam__4(v_00_u03b1_791_, v_inst_792_, v_inst_793_, v_x_794_, v___y_795_);
lean_dec_ref(v_x_794_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__5___redArg(lean_object* v_inst_797_, lean_object* v_inst_798_, lean_object* v_x_799_, lean_object* v___y_800_){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = lean_box(0);
v___x_802_ = l_Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4___redArg(v_inst_797_, v_inst_798_, v_x_799_, v___y_800_, v___x_801_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__5(lean_object* v_00_u03b1_803_, lean_object* v_inst_804_, lean_object* v_inst_805_, lean_object* v_x_806_, lean_object* v___y_807_){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = l_Lean_ShareCommon_persistentObjectFactory___elam__5___redArg(v_inst_804_, v_inst_805_, v_x_806_, v___y_807_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3_spec__8___redArg(lean_object* v_inst_809_, lean_object* v_keys_810_, lean_object* v_vals_811_, lean_object* v_i_812_, lean_object* v_k_813_){
_start:
{
lean_object* v___x_814_; uint8_t v___x_815_; 
v___x_814_ = lean_array_get_size(v_keys_810_);
v___x_815_ = lean_nat_dec_lt(v_i_812_, v___x_814_);
if (v___x_815_ == 0)
{
lean_object* v___x_816_; 
lean_dec(v_k_813_);
lean_dec(v_i_812_);
lean_dec_ref(v_inst_809_);
v___x_816_ = lean_box(0);
return v___x_816_;
}
else
{
lean_object* v_k_x27_817_; lean_object* v___x_818_; uint8_t v___x_819_; 
v_k_x27_817_ = lean_array_fget_borrowed(v_keys_810_, v_i_812_);
lean_inc_ref(v_inst_809_);
lean_inc(v_k_x27_817_);
lean_inc(v_k_813_);
v___x_818_ = lean_apply_2(v_inst_809_, v_k_813_, v_k_x27_817_);
v___x_819_ = lean_unbox(v___x_818_);
if (v___x_819_ == 0)
{
lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_820_ = lean_unsigned_to_nat(1u);
v___x_821_ = lean_nat_add(v_i_812_, v___x_820_);
lean_dec(v_i_812_);
v_i_812_ = v___x_821_;
goto _start;
}
else
{
lean_object* v___x_823_; lean_object* v___x_824_; 
lean_dec(v_k_813_);
lean_dec_ref(v_inst_809_);
v___x_823_ = lean_array_fget_borrowed(v_vals_811_, v_i_812_);
lean_dec(v_i_812_);
lean_inc(v___x_823_);
v___x_824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_824_, 0, v___x_823_);
return v___x_824_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3_spec__8___redArg___boxed(lean_object* v_inst_825_, lean_object* v_keys_826_, lean_object* v_vals_827_, lean_object* v_i_828_, lean_object* v_k_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3_spec__8___redArg(v_inst_825_, v_keys_826_, v_vals_827_, v_i_828_, v_k_829_);
lean_dec_ref(v_vals_827_);
lean_dec_ref(v_keys_826_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3___redArg(lean_object* v_inst_831_, lean_object* v_x_832_, size_t v_x_833_, lean_object* v_x_834_){
_start:
{
if (lean_obj_tag(v_x_832_) == 0)
{
lean_object* v_es_835_; lean_object* v___x_836_; size_t v___x_837_; size_t v___x_838_; size_t v___x_839_; lean_object* v_j_840_; lean_object* v___x_841_; 
v_es_835_ = lean_ctor_get(v_x_832_, 0);
lean_inc_ref(v_es_835_);
lean_dec_ref(v_x_832_);
v___x_836_ = lean_box(2);
v___x_837_ = ((size_t)5ULL);
v___x_838_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg___closed__1);
v___x_839_ = lean_usize_land(v_x_833_, v___x_838_);
v_j_840_ = lean_usize_to_nat(v___x_839_);
v___x_841_ = lean_array_get(v___x_836_, v_es_835_, v_j_840_);
lean_dec(v_j_840_);
lean_dec_ref(v_es_835_);
switch(lean_obj_tag(v___x_841_))
{
case 0:
{
lean_object* v_key_842_; lean_object* v_val_843_; lean_object* v___x_844_; uint8_t v___x_845_; 
v_key_842_ = lean_ctor_get(v___x_841_, 0);
lean_inc(v_key_842_);
v_val_843_ = lean_ctor_get(v___x_841_, 1);
lean_inc(v_val_843_);
lean_dec_ref(v___x_841_);
v___x_844_ = lean_apply_2(v_inst_831_, v_x_834_, v_key_842_);
v___x_845_ = lean_unbox(v___x_844_);
if (v___x_845_ == 0)
{
lean_object* v___x_846_; 
lean_dec(v_val_843_);
v___x_846_ = lean_box(0);
return v___x_846_;
}
else
{
lean_object* v___x_847_; 
v___x_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_847_, 0, v_val_843_);
return v___x_847_;
}
}
case 1:
{
lean_object* v_node_848_; size_t v___x_849_; 
v_node_848_ = lean_ctor_get(v___x_841_, 0);
lean_inc(v_node_848_);
lean_dec_ref(v___x_841_);
v___x_849_ = lean_usize_shift_right(v_x_833_, v___x_837_);
v_x_832_ = v_node_848_;
v_x_833_ = v___x_849_;
goto _start;
}
default: 
{
lean_object* v___x_851_; 
lean_dec(v_x_834_);
lean_dec_ref(v_inst_831_);
v___x_851_ = lean_box(0);
return v___x_851_;
}
}
}
else
{
lean_object* v_ks_852_; lean_object* v_vs_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v_ks_852_ = lean_ctor_get(v_x_832_, 0);
lean_inc_ref(v_ks_852_);
v_vs_853_ = lean_ctor_get(v_x_832_, 1);
lean_inc_ref(v_vs_853_);
lean_dec_ref(v_x_832_);
v___x_854_ = lean_unsigned_to_nat(0u);
v___x_855_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3_spec__8___redArg(v_inst_831_, v_ks_852_, v_vs_853_, v___x_854_, v_x_834_);
lean_dec_ref(v_vs_853_);
lean_dec_ref(v_ks_852_);
return v___x_855_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3___redArg___boxed(lean_object* v_inst_856_, lean_object* v_x_857_, lean_object* v_x_858_, lean_object* v_x_859_){
_start:
{
size_t v_x_1232__boxed_860_; lean_object* v_res_861_; 
v_x_1232__boxed_860_ = lean_unbox_usize(v_x_858_);
lean_dec(v_x_858_);
v_res_861_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3___redArg(v_inst_856_, v_x_857_, v_x_1232__boxed_860_, v_x_859_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2___redArg(lean_object* v_inst_862_, lean_object* v_inst_863_, lean_object* v_x_864_, lean_object* v_x_865_){
_start:
{
lean_object* v___x_866_; uint64_t v___x_867_; size_t v___x_868_; lean_object* v___x_869_; 
lean_inc(v_x_865_);
v___x_866_ = lean_apply_1(v_inst_863_, v_x_865_);
v___x_867_ = lean_unbox_uint64(v___x_866_);
lean_dec_ref(v___x_866_);
v___x_868_ = lean_uint64_to_usize(v___x_867_);
lean_inc_ref(v_x_864_);
v___x_869_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3___redArg(v_inst_862_, v_x_864_, v___x_868_, v_x_865_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2___redArg___boxed(lean_object* v_inst_870_, lean_object* v_inst_871_, lean_object* v_x_872_, lean_object* v_x_873_){
_start:
{
lean_object* v_res_874_; 
v_res_874_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2___redArg(v_inst_870_, v_inst_871_, v_x_872_, v_x_873_);
lean_dec_ref(v_x_872_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__1(lean_object* v_00_u03b1_875_, lean_object* v_00_u03b2_876_, lean_object* v_inst_877_, lean_object* v_inst_878_, lean_object* v_x_879_, lean_object* v___y_880_){
_start:
{
lean_object* v___x_881_; 
v___x_881_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2___redArg(v_inst_877_, v_inst_878_, v_x_879_, v___y_880_);
return v___x_881_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__1___boxed(lean_object* v_00_u03b1_882_, lean_object* v_00_u03b2_883_, lean_object* v_inst_884_, lean_object* v_inst_885_, lean_object* v_x_886_, lean_object* v___y_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = l_Lean_ShareCommon_persistentObjectFactory___elam__1(v_00_u03b1_882_, v_00_u03b2_883_, v_inst_884_, v_inst_885_, v_x_886_, v___y_887_);
lean_dec_ref(v_x_886_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__3(lean_object* v_00_u03b1_889_, lean_object* v_inst_890_, lean_object* v_inst_891_, lean_object* v_x_892_){
_start:
{
lean_object* v___x_893_; 
v___x_893_ = l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0(lean_box(0), v_inst_890_, v_inst_891_, lean_box(0));
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__3___boxed(lean_object* v_00_u03b1_894_, lean_object* v_inst_895_, lean_object* v_inst_896_, lean_object* v_x_897_){
_start:
{
lean_object* v_res_898_; 
v_res_898_ = l_Lean_ShareCommon_persistentObjectFactory___elam__3(v_00_u03b1_894_, v_inst_895_, v_inst_896_, v_x_897_);
lean_dec(v_x_897_);
lean_dec_ref(v_inst_896_);
lean_dec_ref(v_inst_895_);
return v_res_898_;
}
}
static lean_object* _init_l_Lean_ShareCommon_persistentObjectFactory___closed__0(void){
_start:
{
lean_object* v___f_899_; 
v___f_899_ = lean_alloc_closure((void*)(l_Lean_ShareCommon_persistentObjectFactory___elam__0___boxed), 5, 0);
return v___f_899_;
}
}
static lean_object* _init_l_Lean_ShareCommon_persistentObjectFactory___closed__1(void){
_start:
{
lean_object* v___f_900_; 
v___f_900_ = lean_alloc_closure((void*)(l_Lean_ShareCommon_persistentObjectFactory___elam__1___boxed), 6, 0);
return v___f_900_;
}
}
static lean_object* _init_l_Lean_ShareCommon_persistentObjectFactory___closed__2(void){
_start:
{
lean_object* v___f_901_; 
v___f_901_ = lean_alloc_closure((void*)(l_Lean_ShareCommon_persistentObjectFactory___elam__2), 7, 0);
return v___f_901_;
}
}
static lean_object* _init_l_Lean_ShareCommon_persistentObjectFactory___closed__3(void){
_start:
{
lean_object* v___f_902_; 
v___f_902_ = lean_alloc_closure((void*)(l_Lean_ShareCommon_persistentObjectFactory___elam__3___boxed), 4, 0);
return v___f_902_;
}
}
static lean_object* _init_l_Lean_ShareCommon_persistentObjectFactory___closed__4(void){
_start:
{
lean_object* v___f_903_; 
v___f_903_ = lean_alloc_closure((void*)(l_Lean_ShareCommon_persistentObjectFactory___elam__4___boxed), 5, 0);
return v___f_903_;
}
}
static lean_object* _init_l_Lean_ShareCommon_persistentObjectFactory___closed__5(void){
_start:
{
lean_object* v___f_904_; 
v___f_904_ = lean_alloc_closure((void*)(l_Lean_ShareCommon_persistentObjectFactory___elam__5), 5, 0);
return v___f_904_;
}
}
static lean_object* _init_l_Lean_ShareCommon_persistentObjectFactory___closed__6(void){
_start:
{
lean_object* v___f_905_; lean_object* v___f_906_; lean_object* v___f_907_; lean_object* v___f_908_; lean_object* v___f_909_; lean_object* v___f_910_; lean_object* v___x_911_; 
v___f_905_ = lean_obj_once(&l_Lean_ShareCommon_persistentObjectFactory___closed__5, &l_Lean_ShareCommon_persistentObjectFactory___closed__5_once, _init_l_Lean_ShareCommon_persistentObjectFactory___closed__5);
v___f_906_ = lean_obj_once(&l_Lean_ShareCommon_persistentObjectFactory___closed__4, &l_Lean_ShareCommon_persistentObjectFactory___closed__4_once, _init_l_Lean_ShareCommon_persistentObjectFactory___closed__4);
v___f_907_ = lean_obj_once(&l_Lean_ShareCommon_persistentObjectFactory___closed__3, &l_Lean_ShareCommon_persistentObjectFactory___closed__3_once, _init_l_Lean_ShareCommon_persistentObjectFactory___closed__3);
v___f_908_ = lean_obj_once(&l_Lean_ShareCommon_persistentObjectFactory___closed__2, &l_Lean_ShareCommon_persistentObjectFactory___closed__2_once, _init_l_Lean_ShareCommon_persistentObjectFactory___closed__2);
v___f_909_ = lean_obj_once(&l_Lean_ShareCommon_persistentObjectFactory___closed__1, &l_Lean_ShareCommon_persistentObjectFactory___closed__1_once, _init_l_Lean_ShareCommon_persistentObjectFactory___closed__1);
v___f_910_ = lean_obj_once(&l_Lean_ShareCommon_persistentObjectFactory___closed__0, &l_Lean_ShareCommon_persistentObjectFactory___closed__0_once, _init_l_Lean_ShareCommon_persistentObjectFactory___closed__0);
v___x_911_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_911_, 0, v___f_910_);
lean_ctor_set(v___x_911_, 1, v___f_909_);
lean_ctor_set(v___x_911_, 2, v___f_908_);
lean_ctor_set(v___x_911_, 3, v___f_907_);
lean_ctor_set(v___x_911_, 4, v___f_906_);
lean_ctor_set(v___x_911_, 5, v___f_905_);
return v___x_911_;
}
}
static lean_object* _init_l_Lean_ShareCommon_persistentObjectFactory___closed__7(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = lean_obj_once(&l_Lean_ShareCommon_persistentObjectFactory___closed__6, &l_Lean_ShareCommon_persistentObjectFactory___closed__6_once, _init_l_Lean_ShareCommon_persistentObjectFactory___closed__6);
v___x_913_ = l_ShareCommon_StateFactory_mkImpl(v___x_912_);
return v___x_913_;
}
}
static lean_object* _init_l_Lean_ShareCommon_persistentObjectFactory(void){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = lean_obj_once(&l_Lean_ShareCommon_persistentObjectFactory___closed__7, &l_Lean_ShareCommon_persistentObjectFactory___closed__7_once, _init_l_Lean_ShareCommon_persistentObjectFactory___closed__7);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__0___redArg(lean_object* v_inst_915_, lean_object* v_inst_916_){
_start:
{
lean_object* v___x_917_; 
v___x_917_ = l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0(lean_box(0), v_inst_915_, v_inst_916_, lean_box(0));
return v___x_917_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__0___redArg___boxed(lean_object* v_inst_918_, lean_object* v_inst_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Lean_ShareCommon_persistentObjectFactory___elam__0___redArg(v_inst_918_, v_inst_919_);
lean_dec_ref(v_inst_919_);
lean_dec_ref(v_inst_918_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__1___redArg(lean_object* v_inst_921_, lean_object* v_inst_922_, lean_object* v_x_923_, lean_object* v___y_924_){
_start:
{
lean_object* v___x_925_; 
v___x_925_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2___redArg(v_inst_921_, v_inst_922_, v_x_923_, v___y_924_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__1___redArg___boxed(lean_object* v_inst_926_, lean_object* v_inst_927_, lean_object* v_x_928_, lean_object* v___y_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l_Lean_ShareCommon_persistentObjectFactory___elam__1___redArg(v_inst_926_, v_inst_927_, v_x_928_, v___y_929_);
lean_dec_ref(v_x_928_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__2___redArg(lean_object* v_inst_931_, lean_object* v_inst_932_, lean_object* v_x_933_, lean_object* v___y_934_, lean_object* v___y_935_){
_start:
{
lean_object* v___x_936_; 
v___x_936_ = l_Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4___redArg(v_inst_931_, v_inst_932_, v_x_933_, v___y_934_, v___y_935_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__3___redArg(lean_object* v_inst_937_, lean_object* v_inst_938_){
_start:
{
lean_object* v___x_939_; 
v___x_939_ = l_Lean_PersistentHashMap_empty___at___00Lean_ShareCommon_persistentObjectFactory___elam__0_spec__0(lean_box(0), v_inst_937_, v_inst_938_, lean_box(0));
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_persistentObjectFactory___elam__3___redArg___boxed(lean_object* v_inst_940_, lean_object* v_inst_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Lean_ShareCommon_persistentObjectFactory___elam__3___redArg(v_inst_940_, v_inst_941_);
lean_dec_ref(v_inst_941_);
lean_dec_ref(v_inst_940_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2(lean_object* v_00_u03b1_943_, lean_object* v_inst_944_, lean_object* v_inst_945_, lean_object* v_00_u03b2_946_, lean_object* v_x_947_, lean_object* v_x_948_){
_start:
{
lean_object* v___x_949_; 
v___x_949_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2___redArg(v_inst_944_, v_inst_945_, v_x_947_, v_x_948_);
return v___x_949_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2___boxed(lean_object* v_00_u03b1_950_, lean_object* v_inst_951_, lean_object* v_inst_952_, lean_object* v_00_u03b2_953_, lean_object* v_x_954_, lean_object* v_x_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2(v_00_u03b1_950_, v_inst_951_, v_inst_952_, v_00_u03b2_953_, v_x_954_, v_x_955_);
lean_dec_ref(v_x_954_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4(lean_object* v_00_u03b1_957_, lean_object* v_inst_958_, lean_object* v_inst_959_, lean_object* v_00_u03b2_960_, lean_object* v_x_961_, lean_object* v_x_962_, lean_object* v_x_963_){
_start:
{
lean_object* v___x_964_; 
v___x_964_ = l_Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4___redArg(v_inst_958_, v_inst_959_, v_x_961_, v_x_962_, v_x_963_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7(lean_object* v_00_u03b1_965_, lean_object* v_inst_966_, lean_object* v_inst_967_, lean_object* v_00_u03b2_968_, lean_object* v_x_969_, lean_object* v_x_970_){
_start:
{
lean_object* v___x_971_; 
v___x_971_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7___redArg(v_inst_966_, v_inst_967_, v_x_969_, v_x_970_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7___boxed(lean_object* v_00_u03b1_972_, lean_object* v_inst_973_, lean_object* v_inst_974_, lean_object* v_00_u03b2_975_, lean_object* v_x_976_, lean_object* v_x_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7(v_00_u03b1_972_, v_inst_973_, v_inst_974_, v_00_u03b2_975_, v_x_976_, v_x_977_);
lean_dec_ref(v_x_976_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3(lean_object* v_00_u03b1_979_, lean_object* v_inst_980_, lean_object* v_00_u03b2_981_, lean_object* v_x_982_, size_t v_x_983_, lean_object* v_x_984_){
_start:
{
lean_object* v___x_985_; 
lean_inc_ref(v_x_982_);
v___x_985_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3___redArg(v_inst_980_, v_x_982_, v_x_983_, v_x_984_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3___boxed(lean_object* v_00_u03b1_986_, lean_object* v_inst_987_, lean_object* v_00_u03b2_988_, lean_object* v_x_989_, lean_object* v_x_990_, lean_object* v_x_991_){
_start:
{
size_t v_x_1478__boxed_992_; lean_object* v_res_993_; 
v_x_1478__boxed_992_ = lean_unbox_usize(v_x_990_);
lean_dec(v_x_990_);
v_res_993_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3(v_00_u03b1_986_, v_inst_987_, v_00_u03b2_988_, v_x_989_, v_x_1478__boxed_992_, v_x_991_);
lean_dec_ref(v_x_989_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6(lean_object* v_00_u03b1_994_, lean_object* v_inst_995_, lean_object* v_inst_996_, lean_object* v_00_u03b2_997_, lean_object* v_x_998_, size_t v_x_999_, size_t v_x_1000_, lean_object* v_x_1001_, lean_object* v_x_1002_){
_start:
{
lean_object* v___x_1003_; 
v___x_1003_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___redArg(v_inst_995_, v_inst_996_, v_x_998_, v_x_999_, v_x_1000_, v_x_1001_, v_x_1002_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6___boxed(lean_object* v_00_u03b1_1004_, lean_object* v_inst_1005_, lean_object* v_inst_1006_, lean_object* v_00_u03b2_1007_, lean_object* v_x_1008_, lean_object* v_x_1009_, lean_object* v_x_1010_, lean_object* v_x_1011_, lean_object* v_x_1012_){
_start:
{
size_t v_x_1496__boxed_1013_; size_t v_x_1497__boxed_1014_; lean_object* v_res_1015_; 
v_x_1496__boxed_1013_ = lean_unbox_usize(v_x_1009_);
lean_dec(v_x_1009_);
v_x_1497__boxed_1014_ = lean_unbox_usize(v_x_1010_);
lean_dec(v_x_1010_);
v_res_1015_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6(v_00_u03b1_1004_, v_inst_1005_, v_inst_1006_, v_00_u03b2_1007_, v_x_1008_, v_x_1496__boxed_1013_, v_x_1497__boxed_1014_, v_x_1011_, v_x_1012_);
return v_res_1015_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10(lean_object* v_00_u03b1_1016_, lean_object* v_inst_1017_, lean_object* v_00_u03b2_1018_, lean_object* v_x_1019_, size_t v_x_1020_, lean_object* v_x_1021_){
_start:
{
lean_object* v___x_1022_; 
lean_inc_ref(v_x_1019_);
v___x_1022_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10___redArg(v_inst_1017_, v_x_1019_, v_x_1020_, v_x_1021_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10___boxed(lean_object* v_00_u03b1_1023_, lean_object* v_inst_1024_, lean_object* v_00_u03b2_1025_, lean_object* v_x_1026_, lean_object* v_x_1027_, lean_object* v_x_1028_){
_start:
{
size_t v_x_1521__boxed_1029_; lean_object* v_res_1030_; 
v_x_1521__boxed_1029_ = lean_unbox_usize(v_x_1027_);
lean_dec(v_x_1027_);
v_res_1030_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10(v_00_u03b1_1023_, v_inst_1024_, v_00_u03b2_1025_, v_x_1026_, v_x_1521__boxed_1029_, v_x_1028_);
lean_dec_ref(v_x_1026_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3_spec__8(lean_object* v_00_u03b1_1031_, lean_object* v_inst_1032_, lean_object* v_00_u03b2_1033_, lean_object* v_keys_1034_, lean_object* v_vals_1035_, lean_object* v_heq_1036_, lean_object* v_i_1037_, lean_object* v_k_1038_){
_start:
{
lean_object* v___x_1039_; 
v___x_1039_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3_spec__8___redArg(v_inst_1032_, v_keys_1034_, v_vals_1035_, v_i_1037_, v_k_1038_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3_spec__8___boxed(lean_object* v_00_u03b1_1040_, lean_object* v_inst_1041_, lean_object* v_00_u03b2_1042_, lean_object* v_keys_1043_, lean_object* v_vals_1044_, lean_object* v_heq_1045_, lean_object* v_i_1046_, lean_object* v_k_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__1_spec__2_spec__3_spec__8(v_00_u03b1_1040_, v_inst_1041_, v_00_u03b2_1042_, v_keys_1043_, v_vals_1044_, v_heq_1045_, v_i_1046_, v_k_1047_);
lean_dec_ref(v_vals_1044_);
lean_dec_ref(v_keys_1043_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__11(lean_object* v_00_u03b1_1049_, lean_object* v_inst_1050_, lean_object* v_00_u03b2_1051_, lean_object* v_n_1052_, lean_object* v_k_1053_, lean_object* v_v_1054_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__11___redArg(v_inst_1050_, v_n_1052_, v_k_1053_, v_v_1054_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__12(lean_object* v_00_u03b1_1056_, lean_object* v_inst_1057_, lean_object* v_inst_1058_, lean_object* v_00_u03b2_1059_, size_t v_depth_1060_, lean_object* v_keys_1061_, lean_object* v_vals_1062_, lean_object* v_heq_1063_, lean_object* v_i_1064_, lean_object* v_entries_1065_){
_start:
{
lean_object* v___x_1066_; 
v___x_1066_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__12___redArg(v_inst_1057_, v_inst_1058_, v_depth_1060_, v_keys_1061_, v_vals_1062_, v_i_1064_, v_entries_1065_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__12___boxed(lean_object* v_00_u03b1_1067_, lean_object* v_inst_1068_, lean_object* v_inst_1069_, lean_object* v_00_u03b2_1070_, lean_object* v_depth_1071_, lean_object* v_keys_1072_, lean_object* v_vals_1073_, lean_object* v_heq_1074_, lean_object* v_i_1075_, lean_object* v_entries_1076_){
_start:
{
size_t v_depth_boxed_1077_; lean_object* v_res_1078_; 
v_depth_boxed_1077_ = lean_unbox_usize(v_depth_1071_);
lean_dec(v_depth_1071_);
v_res_1078_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__12(v_00_u03b1_1067_, v_inst_1068_, v_inst_1069_, v_00_u03b2_1070_, v_depth_boxed_1077_, v_keys_1072_, v_vals_1073_, v_heq_1074_, v_i_1075_, v_entries_1076_);
lean_dec_ref(v_vals_1073_);
lean_dec_ref(v_keys_1072_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10_spec__15(lean_object* v_00_u03b1_1079_, lean_object* v_inst_1080_, lean_object* v_00_u03b2_1081_, lean_object* v_keys_1082_, lean_object* v_vals_1083_, lean_object* v_heq_1084_, lean_object* v_i_1085_, lean_object* v_k_1086_){
_start:
{
lean_object* v___x_1087_; 
v___x_1087_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10_spec__15___redArg(v_inst_1080_, v_keys_1082_, v_vals_1083_, v_i_1085_, v_k_1086_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10_spec__15___boxed(lean_object* v_00_u03b1_1088_, lean_object* v_inst_1089_, lean_object* v_00_u03b2_1090_, lean_object* v_keys_1091_, lean_object* v_vals_1092_, lean_object* v_heq_1093_, lean_object* v_i_1094_, lean_object* v_k_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_ShareCommon_persistentObjectFactory___elam__4_spec__7_spec__10_spec__15(v_00_u03b1_1088_, v_inst_1089_, v_00_u03b2_1090_, v_keys_1091_, v_vals_1092_, v_heq_1093_, v_i_1094_, v_k_1095_);
lean_dec_ref(v_vals_1092_);
lean_dec_ref(v_keys_1091_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__11_spec__13(lean_object* v_00_u03b1_1097_, lean_object* v_inst_1098_, lean_object* v_00_u03b2_1099_, lean_object* v_x_1100_, lean_object* v_x_1101_, lean_object* v_x_1102_, lean_object* v_x_1103_){
_start:
{
lean_object* v___x_1104_; 
v___x_1104_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ShareCommon_persistentObjectFactory___elam__2_spec__4_spec__6_spec__11_spec__13___redArg(v_inst_1098_, v_x_1100_, v_x_1101_, v_x_1102_, v_x_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_withShareCommon___redArg(lean_object* v_inst_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_){
_start:
{
lean_object* v_toApplicative_1108_; lean_object* v_toPure_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v_toApplicative_1108_ = lean_ctor_get(v_inst_1105_, 0);
lean_inc_ref(v_toApplicative_1108_);
lean_dec_ref(v_inst_1105_);
v_toPure_1109_ = lean_ctor_get(v_toApplicative_1108_, 1);
lean_inc(v_toPure_1109_);
lean_dec_ref(v_toApplicative_1108_);
v___x_1110_ = l_Lean_ShareCommon_objectFactory;
v___x_1111_ = lean_state_sharecommon(v___x_1110_, v_a_1107_, v_a_1106_);
v___x_1112_ = lean_apply_2(v_toPure_1109_, lean_box(0), v___x_1111_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_withShareCommon(lean_object* v_m_1113_, lean_object* v_00_u03b1_1114_, lean_object* v_inst_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_){
_start:
{
lean_object* v___x_1118_; 
v___x_1118_ = l_Lean_ShareCommon_ShareCommonT_withShareCommon___redArg(v_inst_1115_, v_a_1116_, v_a_1117_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonT_withShareCommon___redArg(lean_object* v_inst_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_){
_start:
{
lean_object* v_toApplicative_1122_; lean_object* v_toPure_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; 
v_toApplicative_1122_ = lean_ctor_get(v_inst_1119_, 0);
lean_inc_ref(v_toApplicative_1122_);
lean_dec_ref(v_inst_1119_);
v_toPure_1123_ = lean_ctor_get(v_toApplicative_1122_, 1);
lean_inc(v_toPure_1123_);
lean_dec_ref(v_toApplicative_1122_);
v___x_1124_ = l_Lean_ShareCommon_persistentObjectFactory;
v___x_1125_ = lean_state_sharecommon(v___x_1124_, v_a_1121_, v_a_1120_);
v___x_1126_ = lean_apply_2(v_toPure_1123_, lean_box(0), v___x_1125_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonT_withShareCommon(lean_object* v_m_1127_, lean_object* v_00_u03b1_1128_, lean_object* v_inst_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_){
_start:
{
lean_object* v___x_1132_; 
v___x_1132_ = l_Lean_ShareCommon_PShareCommonT_withShareCommon___redArg(v_inst_1129_, v_a_1130_, v_a_1131_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_monadShareCommon___redArg___lam__0(lean_object* v_inst_1133_, lean_object* v_00_u03b1_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_){
_start:
{
lean_object* v___x_1137_; 
v___x_1137_ = l_Lean_ShareCommon_ShareCommonT_withShareCommon___redArg(v_inst_1133_, v___y_1135_, v___y_1136_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_monadShareCommon___redArg(lean_object* v_inst_1138_){
_start:
{
lean_object* v___f_1139_; 
v___f_1139_ = lean_alloc_closure((void*)(l_Lean_ShareCommon_ShareCommonT_monadShareCommon___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1139_, 0, v_inst_1138_);
return v___f_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_monadShareCommon(lean_object* v_m_1140_, lean_object* v_inst_1141_){
_start:
{
lean_object* v___f_1142_; 
v___f_1142_ = lean_alloc_closure((void*)(l_Lean_ShareCommon_ShareCommonT_monadShareCommon___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1142_, 0, v_inst_1141_);
return v___f_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonT_monadShareCommon___redArg___lam__0(lean_object* v_inst_1143_, lean_object* v_00_u03b1_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_){
_start:
{
lean_object* v___x_1147_; 
v___x_1147_ = l_Lean_ShareCommon_PShareCommonT_withShareCommon___redArg(v_inst_1143_, v___y_1145_, v___y_1146_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonT_monadShareCommon___redArg(lean_object* v_inst_1148_){
_start:
{
lean_object* v___f_1149_; 
v___f_1149_ = lean_alloc_closure((void*)(l_Lean_ShareCommon_PShareCommonT_monadShareCommon___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1149_, 0, v_inst_1148_);
return v___f_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonT_monadShareCommon(lean_object* v_m_1150_, lean_object* v_inst_1151_){
_start:
{
lean_object* v___f_1152_; 
v___f_1152_ = lean_alloc_closure((void*)(l_Lean_ShareCommon_PShareCommonT_monadShareCommon___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1152_, 0, v_inst_1151_);
return v___f_1152_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_run___redArg___lam__0(lean_object* v_x_1153_){
_start:
{
lean_object* v_fst_1154_; 
v_fst_1154_ = lean_ctor_get(v_x_1153_, 0);
lean_inc(v_fst_1154_);
return v_fst_1154_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_run___redArg___lam__0___boxed(lean_object* v_x_1155_){
_start:
{
lean_object* v_res_1156_; 
v_res_1156_ = l_Lean_ShareCommon_ShareCommonT_run___redArg___lam__0(v_x_1155_);
lean_dec_ref(v_x_1155_);
return v_res_1156_;
}
}
static lean_object* _init_l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__0(void){
_start:
{
lean_object* v___f_1157_; 
v___f_1157_ = lean_alloc_closure((void*)(l_Lean_ShareCommon_ShareCommonT_run___redArg___lam__0___boxed), 1, 0);
return v___f_1157_;
}
}
static lean_object* _init_l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1158_ = l_Lean_ShareCommon_objectFactory;
v___x_1159_ = l_ShareCommon_mkStateImpl(v___x_1158_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_run___redArg(lean_object* v_inst_1160_, lean_object* v_x_1161_){
_start:
{
lean_object* v_toApplicative_1162_; lean_object* v_toFunctor_1163_; lean_object* v_map_1164_; lean_object* v___f_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
v_toApplicative_1162_ = lean_ctor_get(v_inst_1160_, 0);
lean_inc_ref(v_toApplicative_1162_);
lean_dec_ref(v_inst_1160_);
v_toFunctor_1163_ = lean_ctor_get(v_toApplicative_1162_, 0);
lean_inc_ref(v_toFunctor_1163_);
lean_dec_ref(v_toApplicative_1162_);
v_map_1164_ = lean_ctor_get(v_toFunctor_1163_, 0);
lean_inc(v_map_1164_);
lean_dec_ref(v_toFunctor_1163_);
v___f_1165_ = lean_obj_once(&l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__0, &l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__0_once, _init_l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__0);
v___x_1166_ = lean_obj_once(&l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1, &l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1_once, _init_l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1);
v___x_1167_ = lean_apply_1(v_x_1161_, v___x_1166_);
v___x_1168_ = lean_apply_4(v_map_1164_, lean_box(0), lean_box(0), v___f_1165_, v___x_1167_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_run(lean_object* v_m_1169_, lean_object* v_00_u03b1_1170_, lean_object* v_inst_1171_, lean_object* v_x_1172_){
_start:
{
lean_object* v_toApplicative_1173_; lean_object* v_toFunctor_1174_; lean_object* v_map_1175_; lean_object* v___f_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v_toApplicative_1173_ = lean_ctor_get(v_inst_1171_, 0);
lean_inc_ref(v_toApplicative_1173_);
lean_dec_ref(v_inst_1171_);
v_toFunctor_1174_ = lean_ctor_get(v_toApplicative_1173_, 0);
lean_inc_ref(v_toFunctor_1174_);
lean_dec_ref(v_toApplicative_1173_);
v_map_1175_ = lean_ctor_get(v_toFunctor_1174_, 0);
lean_inc(v_map_1175_);
lean_dec_ref(v_toFunctor_1174_);
v___f_1176_ = lean_obj_once(&l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__0, &l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__0_once, _init_l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__0);
v___x_1177_ = lean_obj_once(&l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1, &l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1_once, _init_l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1);
v___x_1178_ = lean_apply_1(v_x_1172_, v___x_1177_);
v___x_1179_ = lean_apply_4(v_map_1175_, lean_box(0), lean_box(0), v___f_1176_, v___x_1178_);
return v___x_1179_;
}
}
static lean_object* _init_l_Lean_ShareCommon_PShareCommonT_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; 
v___x_1180_ = l_Lean_ShareCommon_persistentObjectFactory;
v___x_1181_ = l_ShareCommon_mkStateImpl(v___x_1180_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonT_run___redArg(lean_object* v_inst_1182_, lean_object* v_x_1183_){
_start:
{
lean_object* v_toApplicative_1184_; lean_object* v_toFunctor_1185_; lean_object* v_map_1186_; lean_object* v___f_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
v_toApplicative_1184_ = lean_ctor_get(v_inst_1182_, 0);
lean_inc_ref(v_toApplicative_1184_);
lean_dec_ref(v_inst_1182_);
v_toFunctor_1185_ = lean_ctor_get(v_toApplicative_1184_, 0);
lean_inc_ref(v_toFunctor_1185_);
lean_dec_ref(v_toApplicative_1184_);
v_map_1186_ = lean_ctor_get(v_toFunctor_1185_, 0);
lean_inc(v_map_1186_);
lean_dec_ref(v_toFunctor_1185_);
v___f_1187_ = lean_obj_once(&l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__0, &l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__0_once, _init_l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__0);
v___x_1188_ = lean_obj_once(&l_Lean_ShareCommon_PShareCommonT_run___redArg___closed__0, &l_Lean_ShareCommon_PShareCommonT_run___redArg___closed__0_once, _init_l_Lean_ShareCommon_PShareCommonT_run___redArg___closed__0);
v___x_1189_ = lean_apply_1(v_x_1183_, v___x_1188_);
v___x_1190_ = lean_apply_4(v_map_1186_, lean_box(0), lean_box(0), v___f_1187_, v___x_1189_);
return v___x_1190_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonT_run(lean_object* v_m_1191_, lean_object* v_00_u03b1_1192_, lean_object* v_inst_1193_, lean_object* v_x_1194_){
_start:
{
lean_object* v_toApplicative_1195_; lean_object* v_toFunctor_1196_; lean_object* v_map_1197_; lean_object* v___f_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v_toApplicative_1195_ = lean_ctor_get(v_inst_1193_, 0);
lean_inc_ref(v_toApplicative_1195_);
lean_dec_ref(v_inst_1193_);
v_toFunctor_1196_ = lean_ctor_get(v_toApplicative_1195_, 0);
lean_inc_ref(v_toFunctor_1196_);
lean_dec_ref(v_toApplicative_1195_);
v_map_1197_ = lean_ctor_get(v_toFunctor_1196_, 0);
lean_inc(v_map_1197_);
lean_dec_ref(v_toFunctor_1196_);
v___f_1198_ = lean_obj_once(&l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__0, &l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__0_once, _init_l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__0);
v___x_1199_ = lean_obj_once(&l_Lean_ShareCommon_PShareCommonT_run___redArg___closed__0, &l_Lean_ShareCommon_PShareCommonT_run___redArg___closed__0_once, _init_l_Lean_ShareCommon_PShareCommonT_run___redArg___closed__0);
v___x_1200_ = lean_apply_1(v_x_1194_, v___x_1199_);
v___x_1201_ = lean_apply_4(v_map_1197_, lean_box(0), lean_box(0), v___f_1198_, v___x_1200_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonM_run___redArg(lean_object* v_a_1202_){
_start:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v_fst_1205_; 
v___x_1203_ = lean_obj_once(&l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1, &l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1_once, _init_l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1);
v___x_1204_ = lean_apply_1(v_a_1202_, v___x_1203_);
v_fst_1205_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_fst_1205_);
lean_dec_ref(v___x_1204_);
return v_fst_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonM_run(lean_object* v_00_u03b1_1206_, lean_object* v_a_1207_){
_start:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v_fst_1210_; 
v___x_1208_ = lean_obj_once(&l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1, &l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1_once, _init_l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1);
v___x_1209_ = lean_apply_1(v_a_1207_, v___x_1208_);
v_fst_1210_ = lean_ctor_get(v___x_1209_, 0);
lean_inc(v_fst_1210_);
lean_dec_ref(v___x_1209_);
return v_fst_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonM_run___redArg(lean_object* v_a_1211_){
_start:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v_fst_1214_; 
v___x_1212_ = lean_obj_once(&l_Lean_ShareCommon_PShareCommonT_run___redArg___closed__0, &l_Lean_ShareCommon_PShareCommonT_run___redArg___closed__0_once, _init_l_Lean_ShareCommon_PShareCommonT_run___redArg___closed__0);
v___x_1213_ = lean_apply_1(v_a_1211_, v___x_1212_);
v_fst_1214_ = lean_ctor_get(v___x_1213_, 0);
lean_inc(v_fst_1214_);
lean_dec_ref(v___x_1213_);
return v_fst_1214_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_PShareCommonM_run(lean_object* v_00_u03b1_1215_, lean_object* v_a_1216_){
_start:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v_fst_1219_; 
v___x_1217_ = lean_obj_once(&l_Lean_ShareCommon_PShareCommonT_run___redArg___closed__0, &l_Lean_ShareCommon_PShareCommonT_run___redArg___closed__0_once, _init_l_Lean_ShareCommon_PShareCommonT_run___redArg___closed__0);
v___x_1218_ = lean_apply_1(v_a_1216_, v___x_1217_);
v_fst_1219_ = lean_ctor_get(v___x_1218_, 0);
lean_inc(v_fst_1219_);
lean_dec_ref(v___x_1218_);
return v_fst_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_withShareCommon___at___00Lean_ShareCommon_shareCommon_spec__0___redArg(lean_object* v_a_1220_, lean_object* v_a_1221_){
_start:
{
lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1222_ = l_Lean_ShareCommon_objectFactory;
v___x_1223_ = lean_state_sharecommon(v___x_1222_, v_a_1221_, v_a_1220_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_ShareCommonT_withShareCommon___at___00Lean_ShareCommon_shareCommon_spec__0(lean_object* v_00_u03b1_1224_, lean_object* v_a_1225_, lean_object* v_a_1226_){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = l_Lean_ShareCommon_ShareCommonT_withShareCommon___at___00Lean_ShareCommon_shareCommon_spec__0___redArg(v_a_1225_, v_a_1226_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_shareCommon___redArg(lean_object* v_a_1228_){
_start:
{
lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v_fst_1231_; 
v___x_1229_ = lean_obj_once(&l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1, &l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1_once, _init_l_Lean_ShareCommon_ShareCommonT_run___redArg___closed__1);
v___x_1230_ = l_Lean_ShareCommon_ShareCommonT_withShareCommon___at___00Lean_ShareCommon_shareCommon_spec__0___redArg(v_a_1228_, v___x_1229_);
v_fst_1231_ = lean_ctor_get(v___x_1230_, 0);
lean_inc(v_fst_1231_);
lean_dec_ref(v___x_1230_);
return v_fst_1231_;
}
}
LEAN_EXPORT lean_object* l_Lean_ShareCommon_shareCommon(lean_object* v_00_u03b1_1232_, lean_object* v_a_1233_){
_start:
{
lean_object* v___x_1234_; 
v___x_1234_ = l_Lean_ShareCommon_shareCommon___redArg(v_a_1233_);
return v___x_1234_;
}
}
lean_object* runtime_initialize_Init_ShareCommon(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashSet_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_PersistentHashSet(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_ShareCommon(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_ShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashSet_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_PersistentHashSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_ShareCommon_objectFactory = _init_l_Lean_ShareCommon_objectFactory();
lean_mark_persistent(l_Lean_ShareCommon_objectFactory);
l_Lean_ShareCommon_persistentObjectFactory = _init_l_Lean_ShareCommon_persistentObjectFactory();
lean_mark_persistent(l_Lean_ShareCommon_persistentObjectFactory);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_ShareCommon(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_ShareCommon(uint8_t builtin);
lean_object* initialize_Std_Data_HashSet_Basic(uint8_t builtin);
lean_object* initialize_Lean_Data_PersistentHashSet(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_ShareCommon(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_ShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashSet_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_PersistentHashSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_ShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_ShareCommon(builtin);
}
#ifdef __cplusplus
}
#endif
