// Lean compiler output
// Module: Lean.Server.Completion.CompletionInfoSelection
// Imports: public import Lean.Server.Completion.SyntheticCompletion
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Lean_Syntax_eqWithInfo(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_String_instHashableRaw_hash(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_size_x3f(lean_object*);
uint8_t l_Lean_Elab_Info_occursInOrOnBoundary(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_Range_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_tailPos_x3f(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_pos_x3f(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_InfoTree_foldInfo___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_findSyntheticCompletions(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go_spec__0(lean_object*);
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__0;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__1;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__2;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_findCompletionInfosAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0;
static lean_once_cell_t l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_findPrioritizedCompletionPartitionsAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
else
{
uint8_t v___x_4_; 
v___x_4_ = 0;
return v___x_4_;
}
}
else
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_5_; 
v___x_5_ = 0;
return v___x_5_;
}
else
{
lean_object* v_val_6_; lean_object* v_val_7_; uint8_t v___x_8_; 
v_val_6_ = lean_ctor_get(v_x_1_, 0);
v_val_7_ = lean_ctor_get(v_x_2_, 0);
v___x_8_ = lean_name_eq(v_val_6_, v_val_7_);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_Option_instBEq_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0(v_x_9_, v_x_10_);
lean_dec(v_x_10_);
lean_dec(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq(lean_object* v_a_13_, lean_object* v_a_14_){
_start:
{
switch(lean_obj_tag(v_a_13_))
{
case 0:
{
if (lean_obj_tag(v_a_14_) == 0)
{
lean_object* v_termInfo_15_; lean_object* v_toElabInfo_16_; lean_object* v_termInfo_17_; lean_object* v_toElabInfo_18_; lean_object* v_expr_19_; lean_object* v_stx_20_; lean_object* v_expr_21_; lean_object* v_stx_22_; uint8_t v___x_23_; 
v_termInfo_15_ = lean_ctor_get(v_a_13_, 0);
lean_inc_ref(v_termInfo_15_);
lean_dec_ref(v_a_13_);
v_toElabInfo_16_ = lean_ctor_get(v_termInfo_15_, 0);
lean_inc_ref(v_toElabInfo_16_);
v_termInfo_17_ = lean_ctor_get(v_a_14_, 0);
lean_inc_ref(v_termInfo_17_);
lean_dec_ref(v_a_14_);
v_toElabInfo_18_ = lean_ctor_get(v_termInfo_17_, 0);
lean_inc_ref(v_toElabInfo_18_);
v_expr_19_ = lean_ctor_get(v_termInfo_15_, 3);
lean_inc_ref(v_expr_19_);
lean_dec_ref(v_termInfo_15_);
v_stx_20_ = lean_ctor_get(v_toElabInfo_16_, 1);
lean_inc(v_stx_20_);
lean_dec_ref(v_toElabInfo_16_);
v_expr_21_ = lean_ctor_get(v_termInfo_17_, 3);
lean_inc_ref(v_expr_21_);
lean_dec_ref(v_termInfo_17_);
v_stx_22_ = lean_ctor_get(v_toElabInfo_18_, 1);
lean_inc(v_stx_22_);
lean_dec_ref(v_toElabInfo_18_);
v___x_23_ = l_Lean_Syntax_eqWithInfo(v_stx_20_, v_stx_22_);
if (v___x_23_ == 0)
{
lean_dec_ref(v_expr_21_);
lean_dec_ref(v_expr_19_);
return v___x_23_;
}
else
{
uint8_t v___x_24_; 
v___x_24_ = lean_expr_eqv(v_expr_19_, v_expr_21_);
lean_dec_ref(v_expr_21_);
lean_dec_ref(v_expr_19_);
return v___x_24_;
}
}
else
{
uint8_t v___x_25_; 
lean_dec_ref(v_a_13_);
lean_dec_ref(v_a_14_);
v___x_25_ = 0;
return v___x_25_;
}
}
case 3:
{
if (lean_obj_tag(v_a_14_) == 3)
{
lean_object* v_stx_26_; lean_object* v_id_27_; lean_object* v_structName_28_; lean_object* v_stx_29_; lean_object* v_id_30_; lean_object* v_structName_31_; uint8_t v___y_33_; uint8_t v___x_35_; 
v_stx_26_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_26_);
v_id_27_ = lean_ctor_get(v_a_13_, 1);
lean_inc(v_id_27_);
v_structName_28_ = lean_ctor_get(v_a_13_, 3);
lean_inc(v_structName_28_);
lean_dec_ref(v_a_13_);
v_stx_29_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_29_);
v_id_30_ = lean_ctor_get(v_a_14_, 1);
lean_inc(v_id_30_);
v_structName_31_ = lean_ctor_get(v_a_14_, 3);
lean_inc(v_structName_31_);
lean_dec_ref(v_a_14_);
v___x_35_ = l_Lean_Syntax_eqWithInfo(v_stx_26_, v_stx_29_);
if (v___x_35_ == 0)
{
lean_dec(v_id_30_);
lean_dec(v_id_27_);
v___y_33_ = v___x_35_;
goto v___jp_32_;
}
else
{
uint8_t v___x_36_; 
v___x_36_ = l_Option_instBEq_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0(v_id_27_, v_id_30_);
lean_dec(v_id_30_);
lean_dec(v_id_27_);
v___y_33_ = v___x_36_;
goto v___jp_32_;
}
v___jp_32_:
{
if (v___y_33_ == 0)
{
lean_dec(v_structName_31_);
lean_dec(v_structName_28_);
return v___y_33_;
}
else
{
uint8_t v___x_34_; 
v___x_34_ = lean_name_eq(v_structName_28_, v_structName_31_);
lean_dec(v_structName_31_);
lean_dec(v_structName_28_);
return v___x_34_;
}
}
}
else
{
uint8_t v___x_37_; 
lean_dec_ref(v_a_13_);
lean_dec_ref(v_a_14_);
v___x_37_ = 0;
return v___x_37_;
}
}
case 4:
{
if (lean_obj_tag(v_a_14_) == 4)
{
lean_object* v_stx_38_; lean_object* v_stx_39_; uint8_t v___x_40_; 
v_stx_38_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_38_);
lean_dec_ref(v_a_13_);
v_stx_39_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_39_);
lean_dec_ref(v_a_14_);
v___x_40_ = l_Lean_Syntax_eqWithInfo(v_stx_38_, v_stx_39_);
return v___x_40_;
}
else
{
uint8_t v___x_41_; 
lean_dec_ref(v_a_13_);
lean_dec_ref(v_a_14_);
v___x_41_ = 0;
return v___x_41_;
}
}
case 5:
{
if (lean_obj_tag(v_a_14_) == 5)
{
lean_object* v_stx_42_; lean_object* v_stx_43_; uint8_t v___x_44_; 
v_stx_42_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_42_);
lean_dec_ref(v_a_13_);
v_stx_43_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_43_);
lean_dec_ref(v_a_14_);
v___x_44_ = l_Lean_Syntax_eqWithInfo(v_stx_42_, v_stx_43_);
return v___x_44_;
}
else
{
uint8_t v___x_45_; 
lean_dec_ref(v_a_13_);
lean_dec_ref(v_a_14_);
v___x_45_ = 0;
return v___x_45_;
}
}
case 6:
{
if (lean_obj_tag(v_a_14_) == 6)
{
lean_object* v_stx_46_; lean_object* v_stx_47_; uint8_t v___x_48_; 
v_stx_46_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_46_);
lean_dec_ref(v_a_13_);
v_stx_47_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_47_);
lean_dec_ref(v_a_14_);
v___x_48_ = l_Lean_Syntax_eqWithInfo(v_stx_46_, v_stx_47_);
return v___x_48_;
}
else
{
uint8_t v___x_49_; 
lean_dec_ref(v_a_13_);
lean_dec_ref(v_a_14_);
v___x_49_ = 0;
return v___x_49_;
}
}
case 7:
{
if (lean_obj_tag(v_a_14_) == 7)
{
lean_object* v_stx_50_; lean_object* v_stx_51_; uint8_t v___x_52_; 
v_stx_50_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_50_);
lean_dec_ref(v_a_13_);
v_stx_51_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_51_);
lean_dec_ref(v_a_14_);
v___x_52_ = l_Lean_Syntax_eqWithInfo(v_stx_50_, v_stx_51_);
return v___x_52_;
}
else
{
uint8_t v___x_53_; 
lean_dec_ref(v_a_13_);
lean_dec_ref(v_a_14_);
v___x_53_ = 0;
return v___x_53_;
}
}
case 8:
{
if (lean_obj_tag(v_a_14_) == 8)
{
lean_object* v_stx_54_; lean_object* v_stx_55_; uint8_t v___x_56_; 
v_stx_54_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_54_);
lean_dec_ref(v_a_13_);
v_stx_55_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_55_);
lean_dec_ref(v_a_14_);
v___x_56_ = l_Lean_Syntax_eqWithInfo(v_stx_54_, v_stx_55_);
return v___x_56_;
}
else
{
uint8_t v___x_57_; 
lean_dec_ref(v_a_13_);
lean_dec_ref(v_a_14_);
v___x_57_ = 0;
return v___x_57_;
}
}
default: 
{
if (lean_obj_tag(v_a_14_) == 1)
{
lean_object* v_stx_58_; lean_object* v_id_59_; lean_object* v_stx_60_; lean_object* v_id_61_; uint8_t v___x_62_; 
v_stx_58_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_58_);
v_id_59_ = lean_ctor_get(v_a_13_, 1);
lean_inc(v_id_59_);
lean_dec_ref(v_a_13_);
v_stx_60_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_60_);
v_id_61_ = lean_ctor_get(v_a_14_, 1);
lean_inc(v_id_61_);
lean_dec_ref(v_a_14_);
v___x_62_ = l_Lean_Syntax_eqWithInfo(v_stx_58_, v_stx_60_);
if (v___x_62_ == 0)
{
lean_dec(v_id_61_);
lean_dec(v_id_59_);
return v___x_62_;
}
else
{
uint8_t v___x_63_; 
v___x_63_ = lean_name_eq(v_id_59_, v_id_61_);
lean_dec(v_id_61_);
lean_dec(v_id_59_);
return v___x_63_;
}
}
else
{
uint8_t v___x_64_; 
lean_dec_ref(v_a_14_);
lean_dec_ref(v_a_13_);
v___x_64_ = 0;
return v___x_64_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq___boxed(lean_object* v_a_65_, lean_object* v_a_66_){
_start:
{
uint8_t v_res_67_; lean_object* v_r_68_; 
v_res_67_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq(v_a_65_, v_a_66_);
v_r_68_ = lean_box(v_res_67_);
return v_r_68_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0(lean_object* v_a_69_, lean_object* v_as_70_, size_t v_i_71_, size_t v_stop_72_){
_start:
{
uint8_t v___x_73_; 
v___x_73_ = lean_usize_dec_eq(v_i_71_, v_stop_72_);
if (v___x_73_ == 0)
{
lean_object* v___x_74_; lean_object* v_info_75_; lean_object* v_info_76_; uint8_t v___x_77_; 
v___x_74_ = lean_array_uget_borrowed(v_as_70_, v_i_71_);
v_info_75_ = lean_ctor_get(v___x_74_, 2);
v_info_76_ = lean_ctor_get(v_a_69_, 2);
lean_inc_ref(v_info_76_);
lean_inc_ref(v_info_75_);
v___x_77_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq(v_info_75_, v_info_76_);
if (v___x_77_ == 0)
{
size_t v___x_78_; size_t v___x_79_; 
v___x_78_ = ((size_t)1ULL);
v___x_79_ = lean_usize_add(v_i_71_, v___x_78_);
v_i_71_ = v___x_79_;
goto _start;
}
else
{
lean_dec_ref(v_a_69_);
return v___x_77_;
}
}
else
{
uint8_t v___x_81_; 
lean_dec_ref(v_a_69_);
v___x_81_ = 0;
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0___boxed(lean_object* v_a_82_, lean_object* v_as_83_, lean_object* v_i_84_, lean_object* v_stop_85_){
_start:
{
size_t v_i_boxed_86_; size_t v_stop_boxed_87_; uint8_t v_res_88_; lean_object* v_r_89_; 
v_i_boxed_86_ = lean_unbox_usize(v_i_84_);
lean_dec(v_i_84_);
v_stop_boxed_87_ = lean_unbox_usize(v_stop_85_);
lean_dec(v_stop_85_);
v_res_88_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0(v_a_82_, v_as_83_, v_i_boxed_86_, v_stop_boxed_87_);
lean_dec_ref(v_as_83_);
v_r_89_ = lean_box(v_res_88_);
return v_r_89_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1(lean_object* v_as_90_, size_t v_sz_91_, size_t v_i_92_, lean_object* v_b_93_){
_start:
{
lean_object* v_a_95_; uint8_t v___x_99_; 
v___x_99_ = lean_usize_dec_lt(v_i_92_, v_sz_91_);
if (v___x_99_ == 0)
{
return v_b_93_;
}
else
{
lean_object* v_a_100_; lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v_a_100_ = lean_array_uget_borrowed(v_as_90_, v_i_92_);
v___x_103_ = lean_unsigned_to_nat(0u);
v___x_104_ = lean_array_get_size(v_b_93_);
v___x_105_ = lean_nat_dec_lt(v___x_103_, v___x_104_);
if (v___x_105_ == 0)
{
goto v___jp_101_;
}
else
{
if (v___x_105_ == 0)
{
goto v___jp_101_;
}
else
{
size_t v___x_106_; size_t v___x_107_; uint8_t v___x_108_; 
v___x_106_ = ((size_t)0ULL);
v___x_107_ = lean_usize_of_nat(v___x_104_);
lean_inc(v_a_100_);
v___x_108_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0(v_a_100_, v_b_93_, v___x_106_, v___x_107_);
if (v___x_108_ == 0)
{
goto v___jp_101_;
}
else
{
v_a_95_ = v_b_93_;
goto v___jp_94_;
}
}
}
v___jp_101_:
{
lean_object* v___x_102_; 
lean_inc(v_a_100_);
v___x_102_ = lean_array_push(v_b_93_, v_a_100_);
v_a_95_ = v___x_102_;
goto v___jp_94_;
}
}
v___jp_94_:
{
size_t v___x_96_; size_t v___x_97_; 
v___x_96_ = ((size_t)1ULL);
v___x_97_ = lean_usize_add(v_i_92_, v___x_96_);
v_i_92_ = v___x_97_;
v_b_93_ = v_a_95_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1___boxed(lean_object* v_as_109_, lean_object* v_sz_110_, lean_object* v_i_111_, lean_object* v_b_112_){
_start:
{
size_t v_sz_boxed_113_; size_t v_i_boxed_114_; lean_object* v_res_115_; 
v_sz_boxed_113_ = lean_unbox_usize(v_sz_110_);
lean_dec(v_sz_110_);
v_i_boxed_114_ = lean_unbox_usize(v_i_111_);
lean_dec(v_i_111_);
v_res_115_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1(v_as_109_, v_sz_boxed_113_, v_i_boxed_114_, v_b_112_);
lean_dec_ref(v_as_109_);
return v_res_115_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0(void){
_start:
{
lean_object* v___x_116_; lean_object* v_deduplicatedInfos_117_; 
v___x_116_ = lean_unsigned_to_nat(0u);
v_deduplicatedInfos_117_ = lean_mk_empty_array_with_capacity(v___x_116_);
return v_deduplicatedInfos_117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos(lean_object* v_infos_118_){
_start:
{
lean_object* v_deduplicatedInfos_119_; size_t v_sz_120_; size_t v___x_121_; lean_object* v___x_122_; 
v_deduplicatedInfos_119_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0, &l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0);
v_sz_120_ = lean_array_size(v_infos_118_);
v___x_121_ = ((size_t)0ULL);
v___x_122_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1(v_infos_118_, v_sz_120_, v___x_121_, v_deduplicatedInfos_119_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___boxed(lean_object* v_infos_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos(v_infos_123_);
lean_dec_ref(v_infos_123_);
return v_res_124_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos(lean_object* v_hoverPos_125_, lean_object* v_i_126_){
_start:
{
if (lean_obj_tag(v_i_126_) == 5)
{
lean_object* v_stx_139_; lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v_stx_139_ = lean_ctor_get(v_i_126_, 0);
v___x_140_ = lean_unsigned_to_nat(1u);
v___x_141_ = l_Lean_Syntax_getArg(v_stx_139_, v___x_140_);
v___x_142_ = l_Lean_Syntax_isMissing(v___x_141_);
lean_dec(v___x_141_);
if (v___x_142_ == 0)
{
goto v___jp_130_;
}
else
{
lean_object* v___x_143_; 
lean_inc(v_stx_139_);
lean_dec_ref(v_i_126_);
v___x_143_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_stx_139_, v___x_142_);
lean_dec(v_stx_139_);
if (lean_obj_tag(v___x_143_) == 1)
{
lean_object* v_val_144_; uint8_t v___x_145_; uint8_t v___x_146_; 
v_val_144_ = lean_ctor_get(v___x_143_, 0);
lean_inc(v_val_144_);
lean_dec_ref(v___x_143_);
v___x_145_ = 0;
v___x_146_ = l_Lean_Syntax_Range_contains(v_val_144_, v_hoverPos_125_, v___x_145_);
lean_dec(v_val_144_);
return v___x_146_;
}
else
{
uint8_t v___x_147_; 
lean_dec(v___x_143_);
v___x_147_ = 0;
return v___x_147_;
}
}
}
else
{
goto v___jp_130_;
}
v___jp_127_:
{
lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_128_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_128_, 0, v_i_126_);
v___x_129_ = l_Lean_Elab_Info_occursInOrOnBoundary(v___x_128_, v_hoverPos_125_);
lean_dec_ref(v___x_128_);
return v___x_129_;
}
v___jp_130_:
{
if (lean_obj_tag(v_i_126_) == 7)
{
lean_object* v_id_x3f_131_; 
v_id_x3f_131_ = lean_ctor_get(v_i_126_, 1);
if (lean_obj_tag(v_id_x3f_131_) == 0)
{
lean_object* v_stx_132_; uint8_t v___x_133_; lean_object* v___x_134_; 
v_stx_132_ = lean_ctor_get(v_i_126_, 0);
lean_inc(v_stx_132_);
lean_dec_ref(v_i_126_);
v___x_133_ = 1;
v___x_134_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_stx_132_, v___x_133_);
lean_dec(v_stx_132_);
if (lean_obj_tag(v___x_134_) == 1)
{
lean_object* v_val_135_; uint8_t v___x_136_; uint8_t v___x_137_; 
v_val_135_ = lean_ctor_get(v___x_134_, 0);
lean_inc(v_val_135_);
lean_dec_ref(v___x_134_);
v___x_136_ = 0;
v___x_137_ = l_Lean_Syntax_Range_contains(v_val_135_, v_hoverPos_125_, v___x_136_);
lean_dec(v_val_135_);
return v___x_137_;
}
else
{
uint8_t v___x_138_; 
lean_dec(v___x_134_);
v___x_138_ = 0;
return v___x_138_;
}
}
else
{
goto v___jp_127_;
}
}
else
{
goto v___jp_127_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos___boxed(lean_object* v_hoverPos_148_, lean_object* v_i_149_){
_start:
{
uint8_t v_res_150_; lean_object* v_r_151_; 
v_res_150_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos(v_hoverPos_148_, v_i_149_);
lean_dec(v_hoverPos_148_);
v_r_151_ = lean_box(v_res_150_);
return v_r_151_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go_spec__0(lean_object* v_msg_152_){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = lean_unsigned_to_nat(0u);
v___x_154_ = lean_panic_fn_borrowed(v___x_153_, v_msg_152_);
return v___x_154_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__0(void){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lean_mk_string_unchecked("Init.Data.Option.BasicAux", 25, 25);
return v___x_155_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__1(void){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = lean_mk_string_unchecked("Option.get!", 11, 11);
return v___x_156_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__2(void){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lean_mk_string_unchecked("value is none", 13, 13);
return v___x_157_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_158_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__2, &l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__2_once, _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__2);
v___x_159_ = lean_unsigned_to_nat(14u);
v___x_160_ = lean_unsigned_to_nat(22u);
v___x_161_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__1, &l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__1_once, _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__1);
v___x_162_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__0, &l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__0);
v___x_163_ = l_mkPanicMessageWithDecl(v___x_162_, v___x_161_, v___x_160_, v___x_159_, v___x_158_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go(lean_object* v_fileMap_164_, lean_object* v_hoverPos_165_, lean_object* v_hoverLine_166_, lean_object* v_ctx_167_, lean_object* v_info_168_, lean_object* v_best_169_){
_start:
{
if (lean_obj_tag(v_info_168_) == 8)
{
lean_object* v_i_170_; lean_object* v___y_172_; lean_object* v___y_173_; lean_object* v___y_174_; uint8_t v___x_178_; lean_object* v___y_180_; lean_object* v___y_181_; lean_object* v___y_182_; lean_object* v___y_189_; lean_object* v___y_190_; lean_object* v___y_196_; 
v_i_170_ = lean_ctor_get(v_info_168_, 0);
lean_inc_ref_n(v_i_170_, 2);
v___x_178_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos(v_hoverPos_165_, v_i_170_);
if (v___x_178_ == 0)
{
lean_dec_ref(v_info_168_);
lean_dec_ref(v_i_170_);
lean_dec_ref(v_ctx_167_);
lean_dec_ref(v_fileMap_164_);
return v_best_169_;
}
else
{
lean_object* v___x_201_; 
v___x_201_ = l_Lean_Elab_Info_pos_x3f(v_info_168_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3, &l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3_once, _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3);
v___x_203_ = l_panic___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go_spec__0(v___x_202_);
v___y_196_ = v___x_203_;
goto v___jp_195_;
}
else
{
lean_object* v_val_204_; 
v_val_204_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_val_204_);
lean_dec_ref(v___x_201_);
v___y_196_ = v_val_204_;
goto v___jp_195_;
}
}
v___jp_171_:
{
uint8_t v___x_175_; 
v___x_175_ = lean_nat_dec_eq(v___y_174_, v___y_173_);
lean_dec(v___y_173_);
lean_dec(v___y_174_);
if (v___x_175_ == 0)
{
lean_dec(v___y_172_);
lean_dec_ref(v_i_170_);
lean_dec_ref(v_ctx_167_);
return v_best_169_;
}
else
{
lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_176_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_176_, 0, v___y_172_);
lean_ctor_set(v___x_176_, 1, v_ctx_167_);
lean_ctor_set(v___x_176_, 2, v_i_170_);
v___x_177_ = lean_array_push(v_best_169_, v___x_176_);
return v___x_177_;
}
}
v___jp_179_:
{
lean_object* v___x_183_; lean_object* v_line_184_; lean_object* v___x_185_; lean_object* v_line_186_; uint8_t v___x_187_; 
lean_inc_ref(v_fileMap_164_);
v___x_183_ = l_Lean_FileMap_toPosition(v_fileMap_164_, v___y_181_);
lean_dec(v___y_181_);
v_line_184_ = lean_ctor_get(v___x_183_, 0);
lean_inc(v_line_184_);
lean_dec_ref(v___x_183_);
v___x_185_ = l_Lean_FileMap_toPosition(v_fileMap_164_, v___y_180_);
lean_dec(v___y_180_);
v_line_186_ = lean_ctor_get(v___x_185_, 0);
lean_inc(v_line_186_);
lean_dec_ref(v___x_185_);
v___x_187_ = lean_nat_dec_eq(v_line_184_, v_hoverLine_166_);
if (v___x_187_ == 0)
{
if (v___x_178_ == 0)
{
v___y_172_ = v___y_182_;
v___y_173_ = v_line_186_;
v___y_174_ = v_line_184_;
goto v___jp_171_;
}
else
{
lean_dec(v_line_186_);
lean_dec(v_line_184_);
lean_dec(v___y_182_);
lean_dec_ref(v_i_170_);
lean_dec_ref(v_ctx_167_);
return v_best_169_;
}
}
else
{
v___y_172_ = v___y_182_;
v___y_173_ = v_line_186_;
v___y_174_ = v_line_184_;
goto v___jp_171_;
}
}
v___jp_188_:
{
uint8_t v___x_191_; 
v___x_191_ = lean_nat_dec_lt(v_hoverPos_165_, v___y_190_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; 
v___x_192_ = lean_box(0);
v___y_180_ = v___y_190_;
v___y_181_ = v___y_189_;
v___y_182_ = v___x_192_;
goto v___jp_179_;
}
else
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = lean_nat_sub(v_hoverPos_165_, v___y_189_);
v___x_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
v___y_180_ = v___y_190_;
v___y_181_ = v___y_189_;
v___y_182_ = v___x_194_;
goto v___jp_179_;
}
}
v___jp_195_:
{
lean_object* v___x_197_; 
v___x_197_ = l_Lean_Elab_Info_tailPos_x3f(v_info_168_);
lean_dec_ref(v_info_168_);
if (lean_obj_tag(v___x_197_) == 0)
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3, &l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3_once, _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3);
v___x_199_ = l_panic___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go_spec__0(v___x_198_);
v___y_189_ = v___y_196_;
v___y_190_ = v___x_199_;
goto v___jp_188_;
}
else
{
lean_object* v_val_200_; 
v_val_200_ = lean_ctor_get(v___x_197_, 0);
lean_inc(v_val_200_);
lean_dec_ref(v___x_197_);
v___y_189_ = v___y_196_;
v___y_190_ = v_val_200_;
goto v___jp_188_;
}
}
}
else
{
lean_dec_ref(v_info_168_);
lean_dec_ref(v_ctx_167_);
lean_dec_ref(v_fileMap_164_);
return v_best_169_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___boxed(lean_object* v_fileMap_205_, lean_object* v_hoverPos_206_, lean_object* v_hoverLine_207_, lean_object* v_ctx_208_, lean_object* v_info_209_, lean_object* v_best_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go(v_fileMap_205_, v_hoverPos_206_, v_hoverLine_207_, v_ctx_208_, v_info_209_, v_best_210_);
lean_dec(v_hoverLine_207_);
lean_dec(v_hoverPos_206_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_findCompletionInfosAt(lean_object* v_fileMap_212_, lean_object* v_hoverPos_213_, lean_object* v_cmdStx_214_, lean_object* v_infoTree_215_){
_start:
{
uint8_t v_isComplete_217_; lean_object* v_completionInfoCandidates_218_; lean_object* v___x_222_; lean_object* v_line_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v_completionInfoCandidates_227_; lean_object* v___x_228_; uint8_t v___x_229_; 
lean_inc_ref_n(v_fileMap_212_, 2);
v___x_222_ = l_Lean_FileMap_toPosition(v_fileMap_212_, v_hoverPos_213_);
v_line_223_ = lean_ctor_get(v___x_222_, 0);
lean_inc(v_line_223_);
lean_dec_ref(v___x_222_);
lean_inc(v_hoverPos_213_);
v___x_224_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___boxed), 6, 3);
lean_closure_set(v___x_224_, 0, v_fileMap_212_);
lean_closure_set(v___x_224_, 1, v_hoverPos_213_);
lean_closure_set(v___x_224_, 2, v_line_223_);
v___x_225_ = lean_unsigned_to_nat(0u);
v___x_226_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0, &l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0);
lean_inc_ref(v_infoTree_215_);
v_completionInfoCandidates_227_ = l_Lean_Elab_InfoTree_foldInfo___redArg(v___x_224_, v___x_226_, v_infoTree_215_);
v___x_228_ = lean_array_get_size(v_completionInfoCandidates_227_);
v___x_229_ = lean_nat_dec_eq(v___x_228_, v___x_225_);
if (v___x_229_ == 0)
{
uint8_t v_isComplete_230_; 
lean_dec_ref(v_infoTree_215_);
lean_dec(v_cmdStx_214_);
lean_dec(v_hoverPos_213_);
lean_dec_ref(v_fileMap_212_);
v_isComplete_230_ = 1;
v_isComplete_217_ = v_isComplete_230_;
v_completionInfoCandidates_218_ = v_completionInfoCandidates_227_;
goto v___jp_216_;
}
else
{
lean_object* v_completionInfoCandidates_231_; uint8_t v_isComplete_232_; 
lean_dec(v_completionInfoCandidates_227_);
v_completionInfoCandidates_231_ = l_Lean_Server_Completion_findSyntheticCompletions(v_fileMap_212_, v_hoverPos_213_, v_cmdStx_214_, v_infoTree_215_);
v_isComplete_232_ = 0;
v_isComplete_217_ = v_isComplete_232_;
v_completionInfoCandidates_218_ = v_completionInfoCandidates_231_;
goto v___jp_216_;
}
v___jp_216_:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_219_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos(v_completionInfoCandidates_218_);
lean_dec_ref(v_completionInfoCandidates_218_);
v___x_220_ = lean_box(v_isComplete_217_);
v___x_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_219_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
return v___x_221_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___lam__0(lean_object* v_x_233_){
_start:
{
lean_object* v_fst_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_249_; 
v_fst_234_ = lean_ctor_get(v_x_233_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v_x_233_);
if (v_isSharedCheck_249_ == 0)
{
lean_object* v_unused_250_; 
v_unused_250_ = lean_ctor_get(v_x_233_, 1);
lean_dec(v_unused_250_);
v___x_236_ = v_x_233_;
v_isShared_237_ = v_isSharedCheck_249_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_fst_234_);
lean_dec(v_x_233_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_249_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v_info_238_; uint8_t v___y_240_; 
v_info_238_ = lean_ctor_get(v_fst_234_, 2);
lean_inc_ref(v_info_238_);
lean_dec(v_fst_234_);
if (lean_obj_tag(v_info_238_) == 1)
{
uint8_t v___x_247_; 
v___x_247_ = 1;
v___y_240_ = v___x_247_;
goto v___jp_239_;
}
else
{
uint8_t v___x_248_; 
v___x_248_ = 0;
v___y_240_ = v___x_248_;
goto v___jp_239_;
}
v___jp_239_:
{
lean_object* v___x_241_; lean_object* v_size_x3f_242_; lean_object* v___x_243_; lean_object* v___x_245_; 
v___x_241_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_241_, 0, v_info_238_);
v_size_x3f_242_ = l_Lean_Elab_Info_size_x3f(v___x_241_);
lean_dec_ref(v___x_241_);
v___x_243_ = lean_box(v___y_240_);
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 1, v_size_x3f_242_);
lean_ctor_set(v___x_236_, 0, v___x_243_);
v___x_245_ = v___x_236_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_243_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v_size_x3f_242_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0(size_t v_sz_251_, size_t v_i_252_, lean_object* v_bs_253_){
_start:
{
uint8_t v___x_254_; 
v___x_254_ = lean_usize_dec_lt(v_i_252_, v_sz_251_);
if (v___x_254_ == 0)
{
return v_bs_253_;
}
else
{
lean_object* v_v_255_; lean_object* v_snd_256_; lean_object* v___x_257_; lean_object* v_bs_x27_258_; size_t v___x_259_; size_t v___x_260_; lean_object* v___x_261_; 
v_v_255_ = lean_array_uget_borrowed(v_bs_253_, v_i_252_);
v_snd_256_ = lean_ctor_get(v_v_255_, 1);
lean_inc(v_snd_256_);
v___x_257_ = lean_unsigned_to_nat(0u);
v_bs_x27_258_ = lean_array_uset(v_bs_253_, v_i_252_, v___x_257_);
v___x_259_ = ((size_t)1ULL);
v___x_260_ = lean_usize_add(v_i_252_, v___x_259_);
v___x_261_ = lean_array_uset(v_bs_x27_258_, v_i_252_, v_snd_256_);
v_i_252_ = v___x_260_;
v_bs_253_ = v___x_261_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0___boxed(lean_object* v_sz_263_, lean_object* v_i_264_, lean_object* v_bs_265_){
_start:
{
size_t v_sz_boxed_266_; size_t v_i_boxed_267_; lean_object* v_res_268_; 
v_sz_boxed_266_ = lean_unbox_usize(v_sz_263_);
lean_dec(v_sz_263_);
v_i_boxed_267_ = lean_unbox_usize(v_i_264_);
lean_dec(v_i_264_);
v_res_268_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0(v_sz_boxed_266_, v_i_boxed_267_, v_bs_265_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11___redArg(lean_object* v_x_269_, lean_object* v_x_270_){
_start:
{
if (lean_obj_tag(v_x_270_) == 0)
{
return v_x_269_;
}
else
{
lean_object* v_key_271_; lean_object* v_value_272_; lean_object* v_tail_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_311_; 
v_key_271_ = lean_ctor_get(v_x_270_, 0);
v_value_272_ = lean_ctor_get(v_x_270_, 1);
v_tail_273_ = lean_ctor_get(v_x_270_, 2);
v_isSharedCheck_311_ = !lean_is_exclusive(v_x_270_);
if (v_isSharedCheck_311_ == 0)
{
v___x_275_ = v_x_270_;
v_isShared_276_ = v_isSharedCheck_311_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_tail_273_);
lean_inc(v_value_272_);
lean_inc(v_key_271_);
lean_dec(v_x_270_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_311_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v_fst_277_; lean_object* v_snd_278_; lean_object* v___x_279_; uint64_t v___y_281_; uint64_t v___y_282_; uint64_t v___y_302_; uint8_t v___x_308_; 
v_fst_277_ = lean_ctor_get(v_key_271_, 0);
v_snd_278_ = lean_ctor_get(v_key_271_, 1);
v___x_279_ = lean_array_get_size(v_x_269_);
v___x_308_ = lean_unbox(v_fst_277_);
if (v___x_308_ == 0)
{
uint64_t v___x_309_; 
v___x_309_ = 13ULL;
v___y_302_ = v___x_309_;
goto v___jp_301_;
}
else
{
uint64_t v___x_310_; 
v___x_310_ = 11ULL;
v___y_302_ = v___x_310_;
goto v___jp_301_;
}
v___jp_280_:
{
uint64_t v___x_283_; uint64_t v___x_284_; uint64_t v___x_285_; uint64_t v_fold_286_; uint64_t v___x_287_; uint64_t v___x_288_; uint64_t v___x_289_; size_t v___x_290_; size_t v___x_291_; size_t v___x_292_; size_t v___x_293_; size_t v___x_294_; lean_object* v___x_295_; lean_object* v___x_297_; 
v___x_283_ = lean_uint64_mix_hash(v___y_281_, v___y_282_);
v___x_284_ = 32ULL;
v___x_285_ = lean_uint64_shift_right(v___x_283_, v___x_284_);
v_fold_286_ = lean_uint64_xor(v___x_283_, v___x_285_);
v___x_287_ = 16ULL;
v___x_288_ = lean_uint64_shift_right(v_fold_286_, v___x_287_);
v___x_289_ = lean_uint64_xor(v_fold_286_, v___x_288_);
v___x_290_ = lean_uint64_to_usize(v___x_289_);
v___x_291_ = lean_usize_of_nat(v___x_279_);
v___x_292_ = ((size_t)1ULL);
v___x_293_ = lean_usize_sub(v___x_291_, v___x_292_);
v___x_294_ = lean_usize_land(v___x_290_, v___x_293_);
v___x_295_ = lean_array_uget_borrowed(v_x_269_, v___x_294_);
lean_inc(v___x_295_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 2, v___x_295_);
v___x_297_ = v___x_275_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_key_271_);
lean_ctor_set(v_reuseFailAlloc_300_, 1, v_value_272_);
lean_ctor_set(v_reuseFailAlloc_300_, 2, v___x_295_);
v___x_297_ = v_reuseFailAlloc_300_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
lean_object* v___x_298_; 
v___x_298_ = lean_array_uset(v_x_269_, v___x_294_, v___x_297_);
v_x_269_ = v___x_298_;
v_x_270_ = v_tail_273_;
goto _start;
}
}
v___jp_301_:
{
if (lean_obj_tag(v_snd_278_) == 0)
{
uint64_t v___x_303_; 
v___x_303_ = 11ULL;
v___y_281_ = v___y_302_;
v___y_282_ = v___x_303_;
goto v___jp_280_;
}
else
{
lean_object* v_val_304_; uint64_t v___x_305_; uint64_t v___x_306_; uint64_t v___x_307_; 
v_val_304_ = lean_ctor_get(v_snd_278_, 0);
v___x_305_ = l_String_instHashableRaw_hash(v_val_304_);
v___x_306_ = 13ULL;
v___x_307_ = lean_uint64_mix_hash(v___x_305_, v___x_306_);
v___y_281_ = v___y_302_;
v___y_282_ = v___x_307_;
goto v___jp_280_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9___redArg(lean_object* v_i_312_, lean_object* v_source_313_, lean_object* v_target_314_){
_start:
{
lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_315_ = lean_array_get_size(v_source_313_);
v___x_316_ = lean_nat_dec_lt(v_i_312_, v___x_315_);
if (v___x_316_ == 0)
{
lean_dec_ref(v_source_313_);
lean_dec(v_i_312_);
return v_target_314_;
}
else
{
lean_object* v_es_317_; lean_object* v___x_318_; lean_object* v_source_319_; lean_object* v_target_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v_es_317_ = lean_array_fget(v_source_313_, v_i_312_);
v___x_318_ = lean_box(0);
v_source_319_ = lean_array_fset(v_source_313_, v_i_312_, v___x_318_);
v_target_320_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11___redArg(v_target_314_, v_es_317_);
v___x_321_ = lean_unsigned_to_nat(1u);
v___x_322_ = lean_nat_add(v_i_312_, v___x_321_);
lean_dec(v_i_312_);
v_i_312_ = v___x_322_;
v_source_313_ = v_source_319_;
v_target_314_ = v_target_320_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5___redArg(lean_object* v_data_324_){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v_nbuckets_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_325_ = lean_array_get_size(v_data_324_);
v___x_326_ = lean_unsigned_to_nat(2u);
v_nbuckets_327_ = lean_nat_mul(v___x_325_, v___x_326_);
v___x_328_ = lean_unsigned_to_nat(0u);
v___x_329_ = lean_box(0);
v___x_330_ = lean_mk_array(v_nbuckets_327_, v___x_329_);
v___x_331_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9___redArg(v___x_328_, v_data_324_, v___x_330_);
return v___x_331_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7(lean_object* v_x_332_, lean_object* v_x_333_){
_start:
{
if (lean_obj_tag(v_x_332_) == 0)
{
if (lean_obj_tag(v_x_333_) == 0)
{
uint8_t v___x_334_; 
v___x_334_ = 1;
return v___x_334_;
}
else
{
uint8_t v___x_335_; 
v___x_335_ = 0;
return v___x_335_;
}
}
else
{
if (lean_obj_tag(v_x_333_) == 0)
{
uint8_t v___x_336_; 
v___x_336_ = 0;
return v___x_336_;
}
else
{
lean_object* v_val_337_; lean_object* v_val_338_; uint8_t v___x_339_; 
v_val_337_ = lean_ctor_get(v_x_332_, 0);
v_val_338_ = lean_ctor_get(v_x_333_, 0);
v___x_339_ = lean_nat_dec_eq(v_val_337_, v_val_338_);
return v___x_339_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7___boxed(lean_object* v_x_340_, lean_object* v_x_341_){
_start:
{
uint8_t v_res_342_; lean_object* v_r_343_; 
v_res_342_ = l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7(v_x_340_, v_x_341_);
lean_dec(v_x_341_);
lean_dec(v_x_340_);
v_r_343_ = lean_box(v_res_342_);
return v_r_343_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = lean_unsigned_to_nat(0u);
v___x_345_ = lean_mk_empty_array_with_capacity(v___x_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0(lean_object* v_a_346_, lean_object* v_x_347_){
_start:
{
lean_object* v___y_349_; 
if (lean_obj_tag(v_x_347_) == 0)
{
lean_object* v___x_352_; 
v___x_352_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0, &l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0);
v___y_349_ = v___x_352_;
goto v___jp_348_;
}
else
{
lean_object* v_val_353_; 
v_val_353_ = lean_ctor_get(v_x_347_, 0);
lean_inc(v_val_353_);
lean_dec_ref(v_x_347_);
v___y_349_ = v_val_353_;
goto v___jp_348_;
}
v___jp_348_:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_array_push(v___y_349_, v_a_346_);
v___x_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
return v___x_351_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg(lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_x_356_){
_start:
{
if (lean_obj_tag(v_x_356_) == 0)
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v_val_359_; lean_object* v___x_360_; 
v___x_357_ = lean_box(0);
v___x_358_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0(v_a_354_, v___x_357_);
v_val_359_ = lean_ctor_get(v___x_358_, 0);
lean_inc(v_val_359_);
lean_dec(v___x_358_);
v___x_360_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_360_, 0, v_a_355_);
lean_ctor_set(v___x_360_, 1, v_val_359_);
lean_ctor_set(v___x_360_, 2, v_x_356_);
return v___x_360_;
}
else
{
lean_object* v_key_361_; lean_object* v_value_362_; lean_object* v_tail_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_385_; 
v_key_361_ = lean_ctor_get(v_x_356_, 0);
v_value_362_ = lean_ctor_get(v_x_356_, 1);
v_tail_363_ = lean_ctor_get(v_x_356_, 2);
v_isSharedCheck_385_ = !lean_is_exclusive(v_x_356_);
if (v_isSharedCheck_385_ == 0)
{
v___x_365_ = v_x_356_;
v_isShared_366_ = v_isSharedCheck_385_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_tail_363_);
lean_inc(v_value_362_);
lean_inc(v_key_361_);
lean_dec(v_x_356_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_385_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v_fst_372_; lean_object* v_snd_373_; lean_object* v_fst_374_; lean_object* v_snd_375_; uint8_t v___x_382_; 
v_fst_372_ = lean_ctor_get(v_key_361_, 0);
v_snd_373_ = lean_ctor_get(v_key_361_, 1);
v_fst_374_ = lean_ctor_get(v_a_355_, 0);
v_snd_375_ = lean_ctor_get(v_a_355_, 1);
v___x_382_ = lean_unbox(v_fst_372_);
if (v___x_382_ == 0)
{
uint8_t v___x_383_; 
v___x_383_ = lean_unbox(v_fst_374_);
if (v___x_383_ == 0)
{
goto v___jp_376_;
}
else
{
goto v___jp_367_;
}
}
else
{
uint8_t v___x_384_; 
v___x_384_ = lean_unbox(v_fst_374_);
if (v___x_384_ == 0)
{
goto v___jp_367_;
}
else
{
goto v___jp_376_;
}
}
v___jp_367_:
{
lean_object* v_tail_368_; lean_object* v___x_370_; 
v_tail_368_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg(v_a_354_, v_a_355_, v_tail_363_);
if (v_isShared_366_ == 0)
{
lean_ctor_set(v___x_365_, 2, v_tail_368_);
v___x_370_ = v___x_365_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_key_361_);
lean_ctor_set(v_reuseFailAlloc_371_, 1, v_value_362_);
lean_ctor_set(v_reuseFailAlloc_371_, 2, v_tail_368_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
v___jp_376_:
{
uint8_t v___x_377_; 
v___x_377_ = l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7(v_snd_373_, v_snd_375_);
if (v___x_377_ == 0)
{
goto v___jp_367_;
}
else
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v_val_380_; lean_object* v___x_381_; 
lean_del_object(v___x_365_);
lean_dec(v_key_361_);
v___x_378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_378_, 0, v_value_362_);
v___x_379_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0(v_a_354_, v___x_378_);
v_val_380_ = lean_ctor_get(v___x_379_, 0);
lean_inc(v_val_380_);
lean_dec(v___x_379_);
v___x_381_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_381_, 0, v_a_355_);
lean_ctor_set(v___x_381_, 1, v_val_380_);
lean_ctor_set(v___x_381_, 2, v_tail_363_);
return v___x_381_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(lean_object* v_a_386_, lean_object* v_x_387_){
_start:
{
if (lean_obj_tag(v_x_387_) == 0)
{
uint8_t v___x_388_; 
v___x_388_ = 0;
return v___x_388_;
}
else
{
lean_object* v_key_389_; lean_object* v_tail_390_; lean_object* v_fst_391_; lean_object* v_snd_392_; lean_object* v_fst_393_; lean_object* v_snd_394_; uint8_t v___x_398_; 
v_key_389_ = lean_ctor_get(v_x_387_, 0);
v_tail_390_ = lean_ctor_get(v_x_387_, 2);
v_fst_391_ = lean_ctor_get(v_key_389_, 0);
v_snd_392_ = lean_ctor_get(v_key_389_, 1);
v_fst_393_ = lean_ctor_get(v_a_386_, 0);
v_snd_394_ = lean_ctor_get(v_a_386_, 1);
v___x_398_ = lean_unbox(v_fst_391_);
if (v___x_398_ == 0)
{
uint8_t v___x_399_; 
v___x_399_ = lean_unbox(v_fst_393_);
if (v___x_399_ == 0)
{
goto v___jp_395_;
}
else
{
v_x_387_ = v_tail_390_;
goto _start;
}
}
else
{
uint8_t v___x_401_; 
v___x_401_ = lean_unbox(v_fst_393_);
if (v___x_401_ == 0)
{
v_x_387_ = v_tail_390_;
goto _start;
}
else
{
goto v___jp_395_;
}
}
v___jp_395_:
{
uint8_t v___x_396_; 
v___x_396_ = l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7(v_snd_392_, v_snd_394_);
if (v___x_396_ == 0)
{
v_x_387_ = v_tail_390_;
goto _start;
}
else
{
return v___x_396_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_a_403_, lean_object* v_x_404_){
_start:
{
uint8_t v_res_405_; lean_object* v_r_406_; 
v_res_405_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(v_a_403_, v_x_404_);
lean_dec(v_x_404_);
lean_dec_ref(v_a_403_);
v_r_406_ = lean_box(v_res_405_);
return v_r_406_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3___redArg(lean_object* v_a_407_, lean_object* v_m_408_, lean_object* v_a_409_){
_start:
{
size_t v___y_411_; lean_object* v___y_412_; lean_object* v___y_413_; lean_object* v___y_414_; lean_object* v_size_417_; lean_object* v_buckets_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_477_; 
v_size_417_ = lean_ctor_get(v_m_408_, 0);
v_buckets_418_ = lean_ctor_get(v_m_408_, 1);
v_isSharedCheck_477_ = !lean_is_exclusive(v_m_408_);
if (v_isSharedCheck_477_ == 0)
{
v___x_420_ = v_m_408_;
v_isShared_421_ = v_isSharedCheck_477_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_buckets_418_);
lean_inc(v_size_417_);
lean_dec(v_m_408_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_477_;
goto v_resetjp_419_;
}
v___jp_410_:
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = lean_array_uset(v___y_413_, v___y_411_, v___y_412_);
v___x_416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_416_, 0, v___y_414_);
lean_ctor_set(v___x_416_, 1, v___x_415_);
return v___x_416_;
}
v_resetjp_419_:
{
lean_object* v_fst_422_; lean_object* v_snd_423_; lean_object* v___x_424_; uint64_t v___y_426_; uint64_t v___y_427_; uint64_t v___y_468_; uint8_t v___x_474_; 
v_fst_422_ = lean_ctor_get(v_a_409_, 0);
v_snd_423_ = lean_ctor_get(v_a_409_, 1);
v___x_424_ = lean_array_get_size(v_buckets_418_);
v___x_474_ = lean_unbox(v_fst_422_);
if (v___x_474_ == 0)
{
uint64_t v___x_475_; 
v___x_475_ = 13ULL;
v___y_468_ = v___x_475_;
goto v___jp_467_;
}
else
{
uint64_t v___x_476_; 
v___x_476_ = 11ULL;
v___y_468_ = v___x_476_;
goto v___jp_467_;
}
v___jp_425_:
{
uint64_t v___x_428_; uint64_t v___x_429_; uint64_t v___x_430_; uint64_t v_fold_431_; uint64_t v___x_432_; uint64_t v___x_433_; uint64_t v___x_434_; size_t v___x_435_; size_t v___x_436_; size_t v___x_437_; size_t v___x_438_; size_t v___x_439_; lean_object* v_bkt_440_; uint8_t v___x_441_; 
v___x_428_ = lean_uint64_mix_hash(v___y_426_, v___y_427_);
v___x_429_ = 32ULL;
v___x_430_ = lean_uint64_shift_right(v___x_428_, v___x_429_);
v_fold_431_ = lean_uint64_xor(v___x_428_, v___x_430_);
v___x_432_ = 16ULL;
v___x_433_ = lean_uint64_shift_right(v_fold_431_, v___x_432_);
v___x_434_ = lean_uint64_xor(v_fold_431_, v___x_433_);
v___x_435_ = lean_uint64_to_usize(v___x_434_);
v___x_436_ = lean_usize_of_nat(v___x_424_);
v___x_437_ = ((size_t)1ULL);
v___x_438_ = lean_usize_sub(v___x_436_, v___x_437_);
v___x_439_ = lean_usize_land(v___x_435_, v___x_438_);
v_bkt_440_ = lean_array_uget_borrowed(v_buckets_418_, v___x_439_);
v___x_441_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(v_a_409_, v_bkt_440_);
if (v___x_441_ == 0)
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v_size_x27_445_; lean_object* v___x_446_; lean_object* v_buckets_x27_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; uint8_t v___x_453_; 
v___x_442_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0, &l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0);
v___x_443_ = lean_array_push(v___x_442_, v_a_407_);
v___x_444_ = lean_unsigned_to_nat(1u);
v_size_x27_445_ = lean_nat_add(v_size_417_, v___x_444_);
lean_dec(v_size_417_);
lean_inc(v_bkt_440_);
v___x_446_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_446_, 0, v_a_409_);
lean_ctor_set(v___x_446_, 1, v___x_443_);
lean_ctor_set(v___x_446_, 2, v_bkt_440_);
v_buckets_x27_447_ = lean_array_uset(v_buckets_418_, v___x_439_, v___x_446_);
v___x_448_ = lean_unsigned_to_nat(4u);
v___x_449_ = lean_nat_mul(v_size_x27_445_, v___x_448_);
v___x_450_ = lean_unsigned_to_nat(3u);
v___x_451_ = lean_nat_div(v___x_449_, v___x_450_);
lean_dec(v___x_449_);
v___x_452_ = lean_array_get_size(v_buckets_x27_447_);
v___x_453_ = lean_nat_dec_le(v___x_451_, v___x_452_);
lean_dec(v___x_451_);
if (v___x_453_ == 0)
{
lean_object* v_val_454_; lean_object* v___x_456_; 
v_val_454_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5___redArg(v_buckets_x27_447_);
if (v_isShared_421_ == 0)
{
lean_ctor_set(v___x_420_, 1, v_val_454_);
lean_ctor_set(v___x_420_, 0, v_size_x27_445_);
v___x_456_ = v___x_420_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_size_x27_445_);
lean_ctor_set(v_reuseFailAlloc_457_, 1, v_val_454_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
else
{
lean_object* v___x_459_; 
if (v_isShared_421_ == 0)
{
lean_ctor_set(v___x_420_, 1, v_buckets_x27_447_);
lean_ctor_set(v___x_420_, 0, v_size_x27_445_);
v___x_459_ = v___x_420_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_size_x27_445_);
lean_ctor_set(v_reuseFailAlloc_460_, 1, v_buckets_x27_447_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
else
{
lean_object* v___x_461_; lean_object* v_buckets_x27_462_; lean_object* v_bkt_x27_463_; uint8_t v___x_464_; 
lean_inc(v_bkt_440_);
lean_del_object(v___x_420_);
v___x_461_ = lean_box(0);
v_buckets_x27_462_ = lean_array_uset(v_buckets_418_, v___x_439_, v___x_461_);
lean_inc_ref(v_a_409_);
v_bkt_x27_463_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg(v_a_407_, v_a_409_, v_bkt_440_);
v___x_464_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(v_a_409_, v_bkt_x27_463_);
lean_dec_ref(v_a_409_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_465_ = lean_unsigned_to_nat(1u);
v___x_466_ = lean_nat_sub(v_size_417_, v___x_465_);
lean_dec(v_size_417_);
v___y_411_ = v___x_439_;
v___y_412_ = v_bkt_x27_463_;
v___y_413_ = v_buckets_x27_462_;
v___y_414_ = v___x_466_;
goto v___jp_410_;
}
else
{
v___y_411_ = v___x_439_;
v___y_412_ = v_bkt_x27_463_;
v___y_413_ = v_buckets_x27_462_;
v___y_414_ = v_size_417_;
goto v___jp_410_;
}
}
}
v___jp_467_:
{
if (lean_obj_tag(v_snd_423_) == 0)
{
uint64_t v___x_469_; 
v___x_469_ = 11ULL;
v___y_426_ = v___y_468_;
v___y_427_ = v___x_469_;
goto v___jp_425_;
}
else
{
lean_object* v_val_470_; uint64_t v___x_471_; uint64_t v___x_472_; uint64_t v___x_473_; 
v_val_470_ = lean_ctor_get(v_snd_423_, 0);
v___x_471_ = l_String_instHashableRaw_hash(v_val_470_);
v___x_472_ = 13ULL;
v___x_473_ = lean_uint64_mix_hash(v___x_471_, v___x_472_);
v___y_426_ = v___y_468_;
v___y_427_ = v___x_473_;
goto v___jp_425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg(lean_object* v_key_478_, lean_object* v_as_479_, size_t v_sz_480_, size_t v_i_481_, lean_object* v_b_482_){
_start:
{
uint8_t v___x_483_; 
v___x_483_ = lean_usize_dec_lt(v_i_481_, v_sz_480_);
if (v___x_483_ == 0)
{
lean_dec_ref(v_key_478_);
return v_b_482_;
}
else
{
lean_object* v_a_484_; lean_object* v___x_485_; lean_object* v___x_486_; size_t v___x_487_; size_t v___x_488_; 
v_a_484_ = lean_array_uget_borrowed(v_as_479_, v_i_481_);
lean_inc_ref(v_key_478_);
lean_inc_n(v_a_484_, 2);
v___x_485_ = lean_apply_1(v_key_478_, v_a_484_);
v___x_486_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3___redArg(v_a_484_, v_b_482_, v___x_485_);
v___x_487_ = ((size_t)1ULL);
v___x_488_ = lean_usize_add(v_i_481_, v___x_487_);
v_i_481_ = v___x_488_;
v_b_482_ = v___x_486_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg___boxed(lean_object* v_key_490_, lean_object* v_as_491_, lean_object* v_sz_492_, lean_object* v_i_493_, lean_object* v_b_494_){
_start:
{
size_t v_sz_boxed_495_; size_t v_i_boxed_496_; lean_object* v_res_497_; 
v_sz_boxed_495_ = lean_unbox_usize(v_sz_492_);
lean_dec(v_sz_492_);
v_i_boxed_496_ = lean_unbox_usize(v_i_493_);
lean_dec(v_i_493_);
v_res_497_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg(v_key_490_, v_as_491_, v_sz_boxed_495_, v_i_boxed_496_, v_b_494_);
lean_dec_ref(v_as_491_);
return v_res_497_;
}
}
static lean_object* _init_l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_498_ = lean_box(0);
v___x_499_ = lean_unsigned_to_nat(16u);
v___x_500_ = lean_mk_array(v___x_499_, v___x_498_);
return v___x_500_;
}
}
static lean_object* _init_l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v_groups_503_; 
v___x_501_ = lean_obj_once(&l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0, &l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0_once, _init_l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0);
v___x_502_ = lean_unsigned_to_nat(0u);
v_groups_503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_groups_503_, 0, v___x_502_);
lean_ctor_set(v_groups_503_, 1, v___x_501_);
return v_groups_503_;
}
}
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg(lean_object* v_key_504_, lean_object* v_xs_505_){
_start:
{
lean_object* v_groups_506_; size_t v_sz_507_; size_t v___x_508_; lean_object* v___x_509_; 
v_groups_506_ = lean_obj_once(&l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1, &l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1_once, _init_l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1);
v_sz_507_ = lean_array_size(v_xs_505_);
v___x_508_ = ((size_t)0ULL);
v___x_509_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg(v_key_504_, v_xs_505_, v_sz_507_, v___x_508_, v_groups_506_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___boxed(lean_object* v_key_510_, lean_object* v_xs_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg(v_key_510_, v_xs_511_);
lean_dec_ref(v_xs_511_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3(lean_object* v_x_513_, lean_object* v_x_514_){
_start:
{
if (lean_obj_tag(v_x_514_) == 0)
{
return v_x_513_;
}
else
{
lean_object* v_key_515_; lean_object* v_value_516_; lean_object* v_tail_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v_key_515_ = lean_ctor_get(v_x_514_, 0);
v_value_516_ = lean_ctor_get(v_x_514_, 1);
v_tail_517_ = lean_ctor_get(v_x_514_, 2);
lean_inc(v_value_516_);
lean_inc(v_key_515_);
v___x_518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_518_, 0, v_key_515_);
lean_ctor_set(v___x_518_, 1, v_value_516_);
v___x_519_ = lean_array_push(v_x_513_, v___x_518_);
v_x_513_ = v___x_519_;
v_x_514_ = v_tail_517_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3___boxed(lean_object* v_x_521_, lean_object* v_x_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3(v_x_521_, v_x_522_);
lean_dec(v_x_522_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4(lean_object* v_as_524_, size_t v_i_525_, size_t v_stop_526_, lean_object* v_b_527_){
_start:
{
uint8_t v___x_528_; 
v___x_528_ = lean_usize_dec_eq(v_i_525_, v_stop_526_);
if (v___x_528_ == 0)
{
lean_object* v___x_529_; lean_object* v___x_530_; size_t v___x_531_; size_t v___x_532_; 
v___x_529_ = lean_array_uget_borrowed(v_as_524_, v_i_525_);
v___x_530_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3(v_b_527_, v___x_529_);
v___x_531_ = ((size_t)1ULL);
v___x_532_ = lean_usize_add(v_i_525_, v___x_531_);
v_i_525_ = v___x_532_;
v_b_527_ = v___x_530_;
goto _start;
}
else
{
return v_b_527_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4___boxed(lean_object* v_as_534_, lean_object* v_i_535_, lean_object* v_stop_536_, lean_object* v_b_537_){
_start:
{
size_t v_i_boxed_538_; size_t v_stop_boxed_539_; lean_object* v_res_540_; 
v_i_boxed_538_ = lean_unbox_usize(v_i_535_);
lean_dec(v_i_535_);
v_stop_boxed_539_ = lean_unbox_usize(v_stop_536_);
lean_dec(v_stop_536_);
v_res_540_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4(v_as_534_, v_i_boxed_538_, v_stop_boxed_539_, v_b_537_);
lean_dec_ref(v_as_534_);
return v_res_540_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(uint8_t v___x_541_, lean_object* v_x_542_, lean_object* v_x_543_){
_start:
{
lean_object* v_fst_544_; lean_object* v_fst_545_; lean_object* v_fst_546_; lean_object* v_snd_547_; lean_object* v_fst_548_; lean_object* v_snd_549_; 
v_fst_544_ = lean_ctor_get(v_x_542_, 0);
v_fst_545_ = lean_ctor_get(v_x_543_, 0);
v_fst_546_ = lean_ctor_get(v_fst_544_, 0);
v_snd_547_ = lean_ctor_get(v_fst_544_, 1);
v_fst_548_ = lean_ctor_get(v_fst_545_, 0);
v_snd_549_ = lean_ctor_get(v_fst_545_, 1);
if (lean_obj_tag(v_snd_547_) == 0)
{
if (lean_obj_tag(v_snd_549_) == 1)
{
uint8_t v___x_562_; 
v___x_562_ = 0;
return v___x_562_;
}
else
{
goto v___jp_556_;
}
}
else
{
if (lean_obj_tag(v_snd_549_) == 0)
{
return v___x_541_;
}
else
{
goto v___jp_556_;
}
}
v___jp_550_:
{
if (lean_obj_tag(v_snd_547_) == 1)
{
if (lean_obj_tag(v_snd_549_) == 1)
{
lean_object* v_val_551_; lean_object* v_val_552_; uint8_t v___x_553_; 
v_val_551_ = lean_ctor_get(v_snd_547_, 0);
v_val_552_ = lean_ctor_get(v_snd_549_, 0);
v___x_553_ = lean_nat_dec_lt(v_val_551_, v_val_552_);
return v___x_553_;
}
else
{
uint8_t v___x_554_; 
v___x_554_ = 0;
return v___x_554_;
}
}
else
{
uint8_t v___x_555_; 
v___x_555_ = 0;
return v___x_555_;
}
}
v___jp_556_:
{
uint8_t v___x_557_; 
v___x_557_ = lean_unbox(v_fst_546_);
if (v___x_557_ == 0)
{
uint8_t v___x_558_; 
v___x_558_ = lean_unbox(v_fst_548_);
if (v___x_558_ == 1)
{
uint8_t v___x_559_; 
v___x_559_ = lean_unbox(v_fst_548_);
return v___x_559_;
}
else
{
goto v___jp_550_;
}
}
else
{
uint8_t v___x_560_; 
v___x_560_ = lean_unbox(v_fst_548_);
if (v___x_560_ == 0)
{
uint8_t v___x_561_; 
v___x_561_ = lean_unbox(v_fst_548_);
return v___x_561_;
}
else
{
goto v___jp_550_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0___boxed(lean_object* v___x_563_, lean_object* v_x_564_, lean_object* v_x_565_){
_start:
{
uint8_t v___x_2689__boxed_566_; uint8_t v_res_567_; lean_object* v_r_568_; 
v___x_2689__boxed_566_ = lean_unbox(v___x_563_);
v_res_567_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(v___x_2689__boxed_566_, v_x_564_, v_x_565_);
lean_dec_ref(v_x_565_);
lean_dec_ref(v_x_564_);
v_r_568_ = lean_box(v_res_567_);
return v_r_568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg(lean_object* v_hi_569_, lean_object* v_pivot_570_, lean_object* v_as_571_, lean_object* v_i_572_, lean_object* v_k_573_){
_start:
{
uint8_t v___x_584_; 
v___x_584_ = lean_nat_dec_lt(v_k_573_, v_hi_569_);
if (v___x_584_ == 0)
{
lean_object* v___x_585_; lean_object* v___x_586_; 
lean_dec(v_k_573_);
v___x_585_ = lean_array_fswap(v_as_571_, v_i_572_, v_hi_569_);
v___x_586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_586_, 0, v_i_572_);
lean_ctor_set(v___x_586_, 1, v___x_585_);
return v___x_586_;
}
else
{
lean_object* v___x_587_; lean_object* v_fst_588_; lean_object* v_fst_589_; lean_object* v_fst_590_; lean_object* v_snd_591_; lean_object* v_fst_592_; lean_object* v_snd_593_; 
v___x_587_ = lean_array_fget_borrowed(v_as_571_, v_k_573_);
v_fst_588_ = lean_ctor_get(v___x_587_, 0);
v_fst_589_ = lean_ctor_get(v_pivot_570_, 0);
v_fst_590_ = lean_ctor_get(v_fst_588_, 0);
v_snd_591_ = lean_ctor_get(v_fst_588_, 1);
v_fst_592_ = lean_ctor_get(v_fst_589_, 0);
v_snd_593_ = lean_ctor_get(v_fst_589_, 1);
if (lean_obj_tag(v_snd_591_) == 0)
{
if (lean_obj_tag(v_snd_593_) == 1)
{
goto v___jp_574_;
}
else
{
goto v___jp_598_;
}
}
else
{
if (lean_obj_tag(v_snd_593_) == 0)
{
goto v___jp_578_;
}
else
{
goto v___jp_598_;
}
}
v___jp_594_:
{
if (lean_obj_tag(v_snd_591_) == 1)
{
if (lean_obj_tag(v_snd_593_) == 1)
{
lean_object* v_val_595_; lean_object* v_val_596_; uint8_t v___x_597_; 
v_val_595_ = lean_ctor_get(v_snd_591_, 0);
v_val_596_ = lean_ctor_get(v_snd_593_, 0);
v___x_597_ = lean_nat_dec_lt(v_val_595_, v_val_596_);
if (v___x_597_ == 0)
{
goto v___jp_574_;
}
else
{
goto v___jp_578_;
}
}
else
{
goto v___jp_574_;
}
}
else
{
goto v___jp_574_;
}
}
v___jp_598_:
{
uint8_t v___x_599_; 
v___x_599_ = lean_unbox(v_fst_590_);
if (v___x_599_ == 0)
{
uint8_t v___x_600_; 
v___x_600_ = lean_unbox(v_fst_592_);
if (v___x_600_ == 1)
{
goto v___jp_578_;
}
else
{
goto v___jp_594_;
}
}
else
{
uint8_t v___x_601_; 
v___x_601_ = lean_unbox(v_fst_592_);
if (v___x_601_ == 0)
{
goto v___jp_574_;
}
else
{
goto v___jp_594_;
}
}
}
}
v___jp_574_:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = lean_unsigned_to_nat(1u);
v___x_576_ = lean_nat_add(v_k_573_, v___x_575_);
lean_dec(v_k_573_);
v_k_573_ = v___x_576_;
goto _start;
}
v___jp_578_:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_579_ = lean_array_fswap(v_as_571_, v_i_572_, v_k_573_);
v___x_580_ = lean_unsigned_to_nat(1u);
v___x_581_ = lean_nat_add(v_i_572_, v___x_580_);
lean_dec(v_i_572_);
v___x_582_ = lean_nat_add(v_k_573_, v___x_580_);
lean_dec(v_k_573_);
v_as_571_ = v___x_579_;
v_i_572_ = v___x_581_;
v_k_573_ = v___x_582_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg___boxed(lean_object* v_hi_602_, lean_object* v_pivot_603_, lean_object* v_as_604_, lean_object* v_i_605_, lean_object* v_k_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg(v_hi_602_, v_pivot_603_, v_as_604_, v_i_605_, v_k_606_);
lean_dec_ref(v_pivot_603_);
lean_dec(v_hi_602_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(lean_object* v_n_608_, lean_object* v_as_609_, lean_object* v_lo_610_, lean_object* v_hi_611_){
_start:
{
lean_object* v___y_613_; uint8_t v___x_623_; 
v___x_623_ = lean_nat_dec_lt(v_lo_610_, v_hi_611_);
if (v___x_623_ == 0)
{
lean_dec(v_lo_610_);
return v_as_609_;
}
else
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v_mid_626_; lean_object* v___y_628_; lean_object* v___y_634_; lean_object* v___x_639_; lean_object* v___x_640_; uint8_t v___x_641_; 
v___x_624_ = lean_nat_add(v_lo_610_, v_hi_611_);
v___x_625_ = lean_unsigned_to_nat(1u);
v_mid_626_ = lean_nat_shiftr(v___x_624_, v___x_625_);
lean_dec(v___x_624_);
v___x_639_ = lean_array_fget_borrowed(v_as_609_, v_mid_626_);
v___x_640_ = lean_array_fget_borrowed(v_as_609_, v_lo_610_);
v___x_641_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(v___x_623_, v___x_639_, v___x_640_);
if (v___x_641_ == 0)
{
v___y_634_ = v_as_609_;
goto v___jp_633_;
}
else
{
lean_object* v___x_642_; 
v___x_642_ = lean_array_fswap(v_as_609_, v_lo_610_, v_mid_626_);
v___y_634_ = v___x_642_;
goto v___jp_633_;
}
v___jp_627_:
{
lean_object* v___x_629_; lean_object* v___x_630_; uint8_t v___x_631_; 
v___x_629_ = lean_array_fget_borrowed(v___y_628_, v_mid_626_);
v___x_630_ = lean_array_fget_borrowed(v___y_628_, v_hi_611_);
v___x_631_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(v___x_623_, v___x_629_, v___x_630_);
if (v___x_631_ == 0)
{
lean_dec(v_mid_626_);
v___y_613_ = v___y_628_;
goto v___jp_612_;
}
else
{
lean_object* v___x_632_; 
v___x_632_ = lean_array_fswap(v___y_628_, v_mid_626_, v_hi_611_);
lean_dec(v_mid_626_);
v___y_613_ = v___x_632_;
goto v___jp_612_;
}
}
v___jp_633_:
{
lean_object* v___x_635_; lean_object* v___x_636_; uint8_t v___x_637_; 
v___x_635_ = lean_array_fget_borrowed(v___y_634_, v_hi_611_);
v___x_636_ = lean_array_fget_borrowed(v___y_634_, v_lo_610_);
v___x_637_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(v___x_623_, v___x_635_, v___x_636_);
if (v___x_637_ == 0)
{
v___y_628_ = v___y_634_;
goto v___jp_627_;
}
else
{
lean_object* v___x_638_; 
v___x_638_ = lean_array_fswap(v___y_634_, v_lo_610_, v_hi_611_);
v___y_628_ = v___x_638_;
goto v___jp_627_;
}
}
}
v___jp_612_:
{
lean_object* v_pivot_614_; lean_object* v___x_615_; lean_object* v_fst_616_; lean_object* v_snd_617_; uint8_t v___x_618_; 
v_pivot_614_ = lean_array_fget(v___y_613_, v_hi_611_);
lean_inc_n(v_lo_610_, 2);
v___x_615_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg(v_hi_611_, v_pivot_614_, v___y_613_, v_lo_610_, v_lo_610_);
lean_dec(v_pivot_614_);
v_fst_616_ = lean_ctor_get(v___x_615_, 0);
lean_inc(v_fst_616_);
v_snd_617_ = lean_ctor_get(v___x_615_, 1);
lean_inc(v_snd_617_);
lean_dec_ref(v___x_615_);
v___x_618_ = lean_nat_dec_le(v_hi_611_, v_fst_616_);
if (v___x_618_ == 0)
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_619_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(v_n_608_, v_snd_617_, v_lo_610_, v_fst_616_);
v___x_620_ = lean_unsigned_to_nat(1u);
v___x_621_ = lean_nat_add(v_fst_616_, v___x_620_);
lean_dec(v_fst_616_);
v_as_609_ = v___x_619_;
v_lo_610_ = v___x_621_;
goto _start;
}
else
{
lean_dec(v_fst_616_);
lean_dec(v_lo_610_);
return v_snd_617_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___boxed(lean_object* v_n_643_, lean_object* v_as_644_, lean_object* v_lo_645_, lean_object* v_hi_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(v_n_643_, v_as_644_, v_lo_645_, v_hi_646_);
lean_dec(v_hi_646_);
lean_dec(v_n_643_);
return v_res_647_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___closed__0(void){
_start:
{
lean_object* v___f_648_; 
v___f_648_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___lam__0), 1, 0);
return v___f_648_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions(lean_object* v_items_649_){
_start:
{
lean_object* v___y_651_; lean_object* v___y_656_; lean_object* v___y_657_; lean_object* v___y_658_; lean_object* v___y_659_; lean_object* v___y_662_; lean_object* v___y_663_; lean_object* v___y_664_; lean_object* v___y_665_; lean_object* v___y_668_; lean_object* v___f_675_; lean_object* v_partitions_676_; lean_object* v_size_677_; lean_object* v_buckets_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; uint8_t v___x_682_; 
v___f_675_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___closed__0, &l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___closed__0);
v_partitions_676_ = l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg(v___f_675_, v_items_649_);
v_size_677_ = lean_ctor_get(v_partitions_676_, 0);
lean_inc(v_size_677_);
v_buckets_678_ = lean_ctor_get(v_partitions_676_, 1);
lean_inc_ref(v_buckets_678_);
lean_dec_ref(v_partitions_676_);
v___x_679_ = lean_mk_empty_array_with_capacity(v_size_677_);
lean_dec(v_size_677_);
v___x_680_ = lean_unsigned_to_nat(0u);
v___x_681_ = lean_array_get_size(v_buckets_678_);
v___x_682_ = lean_nat_dec_lt(v___x_680_, v___x_681_);
if (v___x_682_ == 0)
{
lean_dec_ref(v_buckets_678_);
v___y_668_ = v___x_679_;
goto v___jp_667_;
}
else
{
uint8_t v___x_683_; 
v___x_683_ = lean_nat_dec_le(v___x_681_, v___x_681_);
if (v___x_683_ == 0)
{
if (v___x_682_ == 0)
{
lean_dec_ref(v_buckets_678_);
v___y_668_ = v___x_679_;
goto v___jp_667_;
}
else
{
size_t v___x_684_; size_t v___x_685_; lean_object* v___x_686_; 
v___x_684_ = ((size_t)0ULL);
v___x_685_ = lean_usize_of_nat(v___x_681_);
v___x_686_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4(v_buckets_678_, v___x_684_, v___x_685_, v___x_679_);
lean_dec_ref(v_buckets_678_);
v___y_668_ = v___x_686_;
goto v___jp_667_;
}
}
else
{
size_t v___x_687_; size_t v___x_688_; lean_object* v___x_689_; 
v___x_687_ = ((size_t)0ULL);
v___x_688_ = lean_usize_of_nat(v___x_681_);
v___x_689_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4(v_buckets_678_, v___x_687_, v___x_688_, v___x_679_);
lean_dec_ref(v_buckets_678_);
v___y_668_ = v___x_689_;
goto v___jp_667_;
}
}
v___jp_650_:
{
size_t v_sz_652_; size_t v___x_653_; lean_object* v___x_654_; 
v_sz_652_ = lean_array_size(v___y_651_);
v___x_653_ = ((size_t)0ULL);
v___x_654_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0(v_sz_652_, v___x_653_, v___y_651_);
return v___x_654_;
}
v___jp_655_:
{
lean_object* v___x_660_; 
v___x_660_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(v___y_657_, v___y_656_, v___y_658_, v___y_659_);
lean_dec(v___y_659_);
lean_dec(v___y_657_);
v___y_651_ = v___x_660_;
goto v___jp_650_;
}
v___jp_661_:
{
uint8_t v___x_666_; 
v___x_666_ = lean_nat_dec_le(v___y_665_, v___y_664_);
if (v___x_666_ == 0)
{
lean_dec(v___y_664_);
lean_inc(v___y_665_);
v___y_656_ = v___y_662_;
v___y_657_ = v___y_663_;
v___y_658_ = v___y_665_;
v___y_659_ = v___y_665_;
goto v___jp_655_;
}
else
{
v___y_656_ = v___y_662_;
v___y_657_ = v___y_663_;
v___y_658_ = v___y_665_;
v___y_659_ = v___y_664_;
goto v___jp_655_;
}
}
v___jp_667_:
{
lean_object* v___x_669_; lean_object* v___x_670_; uint8_t v___x_671_; 
v___x_669_ = lean_array_get_size(v___y_668_);
v___x_670_ = lean_unsigned_to_nat(0u);
v___x_671_ = lean_nat_dec_eq(v___x_669_, v___x_670_);
if (v___x_671_ == 0)
{
lean_object* v___x_672_; lean_object* v___x_673_; uint8_t v___x_674_; 
v___x_672_ = lean_unsigned_to_nat(1u);
v___x_673_ = lean_nat_sub(v___x_669_, v___x_672_);
v___x_674_ = lean_nat_dec_le(v___x_670_, v___x_673_);
if (v___x_674_ == 0)
{
lean_inc(v___x_673_);
v___y_662_ = v___y_668_;
v___y_663_ = v___x_669_;
v___y_664_ = v___x_673_;
v___y_665_ = v___x_673_;
goto v___jp_661_;
}
else
{
v___y_662_ = v___y_668_;
v___y_663_ = v___x_669_;
v___y_664_ = v___x_673_;
v___y_665_ = v___x_670_;
goto v___jp_661_;
}
}
else
{
v___y_651_ = v___y_668_;
goto v___jp_650_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___boxed(lean_object* v_items_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions(v_items_690_);
lean_dec_ref(v_items_690_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1(lean_object* v_n_692_, lean_object* v_as_693_, lean_object* v_lo_694_, lean_object* v_hi_695_, lean_object* v_w_696_, lean_object* v_hlo_697_, lean_object* v_hhi_698_){
_start:
{
lean_object* v___x_699_; 
v___x_699_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(v_n_692_, v_as_693_, v_lo_694_, v_hi_695_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___boxed(lean_object* v_n_700_, lean_object* v_as_701_, lean_object* v_lo_702_, lean_object* v_hi_703_, lean_object* v_w_704_, lean_object* v_hlo_705_, lean_object* v_hhi_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1(v_n_700_, v_as_701_, v_lo_702_, v_hi_703_, v_w_704_, v_hlo_705_, v_hhi_706_);
lean_dec(v_hi_703_);
lean_dec(v_n_700_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2(lean_object* v_00_u03b2_708_, lean_object* v_key_709_, lean_object* v_xs_710_){
_start:
{
lean_object* v___x_711_; 
v___x_711_ = l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg(v_key_709_, v_xs_710_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___boxed(lean_object* v_00_u03b2_712_, lean_object* v_key_713_, lean_object* v_xs_714_){
_start:
{
lean_object* v_res_715_; 
v_res_715_ = l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2(v_00_u03b2_712_, v_key_713_, v_xs_714_);
lean_dec_ref(v_xs_714_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1(lean_object* v_n_716_, lean_object* v_lo_717_, lean_object* v_hi_718_, lean_object* v_hhi_719_, lean_object* v_pivot_720_, lean_object* v_as_721_, lean_object* v_i_722_, lean_object* v_k_723_, lean_object* v_ilo_724_, lean_object* v_ik_725_, lean_object* v_w_726_){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg(v_hi_718_, v_pivot_720_, v_as_721_, v_i_722_, v_k_723_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___boxed(lean_object* v_n_728_, lean_object* v_lo_729_, lean_object* v_hi_730_, lean_object* v_hhi_731_, lean_object* v_pivot_732_, lean_object* v_as_733_, lean_object* v_i_734_, lean_object* v_k_735_, lean_object* v_ilo_736_, lean_object* v_ik_737_, lean_object* v_w_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1(v_n_728_, v_lo_729_, v_hi_730_, v_hhi_731_, v_pivot_732_, v_as_733_, v_i_734_, v_k_735_, v_ilo_736_, v_ik_737_, v_w_738_);
lean_dec_ref(v_pivot_732_);
lean_dec(v_hi_730_);
lean_dec(v_lo_729_);
lean_dec(v_n_728_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3(lean_object* v_00_u03b2_740_, lean_object* v_a_741_, lean_object* v_m_742_, lean_object* v_a_743_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3___redArg(v_a_741_, v_m_742_, v_a_743_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4(lean_object* v_00_u03b2_745_, lean_object* v_key_746_, lean_object* v_as_747_, size_t v_sz_748_, size_t v_i_749_, lean_object* v_b_750_){
_start:
{
lean_object* v___x_751_; 
v___x_751_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg(v_key_746_, v_as_747_, v_sz_748_, v_i_749_, v_b_750_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___boxed(lean_object* v_00_u03b2_752_, lean_object* v_key_753_, lean_object* v_as_754_, lean_object* v_sz_755_, lean_object* v_i_756_, lean_object* v_b_757_){
_start:
{
size_t v_sz_boxed_758_; size_t v_i_boxed_759_; lean_object* v_res_760_; 
v_sz_boxed_758_ = lean_unbox_usize(v_sz_755_);
lean_dec(v_sz_755_);
v_i_boxed_759_ = lean_unbox_usize(v_i_756_);
lean_dec(v_i_756_);
v_res_760_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4(v_00_u03b2_752_, v_key_753_, v_as_754_, v_sz_boxed_758_, v_i_boxed_759_, v_b_757_);
lean_dec_ref(v_as_754_);
return v_res_760_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_761_, lean_object* v_a_762_, lean_object* v_x_763_){
_start:
{
uint8_t v___x_764_; 
v___x_764_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(v_a_762_, v_x_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_765_, lean_object* v_a_766_, lean_object* v_x_767_){
_start:
{
uint8_t v_res_768_; lean_object* v_r_769_; 
v_res_768_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4(v_00_u03b2_765_, v_a_766_, v_x_767_);
lean_dec(v_x_767_);
lean_dec_ref(v_a_766_);
v_r_769_ = lean_box(v_res_768_);
return v_r_769_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_770_, lean_object* v_data_771_){
_start:
{
lean_object* v___x_772_; 
v___x_772_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5___redArg(v_data_771_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6(lean_object* v_00_u03b2_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_x_776_){
_start:
{
lean_object* v___x_777_; 
v___x_777_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg(v_a_774_, v_a_775_, v_x_776_);
return v___x_777_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9(lean_object* v_00_u03b2_778_, lean_object* v_i_779_, lean_object* v_source_780_, lean_object* v_target_781_){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9___redArg(v_i_779_, v_source_780_, v_target_781_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11(lean_object* v_00_u03b2_783_, lean_object* v_x_784_, lean_object* v_x_785_){
_start:
{
lean_object* v___x_786_; 
v___x_786_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11___redArg(v_x_784_, v_x_785_);
return v___x_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_findPrioritizedCompletionPartitionsAt(lean_object* v_fileMap_787_, lean_object* v_hoverPos_788_, lean_object* v_cmdStx_789_, lean_object* v_infoTree_790_){
_start:
{
lean_object* v___x_791_; lean_object* v_fst_792_; lean_object* v_snd_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_803_; 
v___x_791_ = l_Lean_Server_Completion_findCompletionInfosAt(v_fileMap_787_, v_hoverPos_788_, v_cmdStx_789_, v_infoTree_790_);
v_fst_792_ = lean_ctor_get(v___x_791_, 0);
v_snd_793_ = lean_ctor_get(v___x_791_, 1);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_803_ == 0)
{
v___x_795_ = v___x_791_;
v_isShared_796_ = v_isSharedCheck_803_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_snd_793_);
lean_inc(v_fst_792_);
lean_dec(v___x_791_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_803_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v_partitions_799_; lean_object* v___x_801_; 
v___x_797_ = lean_unsigned_to_nat(0u);
v___x_798_ = l_Array_zipIdx___redArg(v_fst_792_, v___x_797_);
lean_dec(v_fst_792_);
v_partitions_799_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions(v___x_798_);
lean_dec_ref(v___x_798_);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v_partitions_799_);
v___x_801_ = v___x_795_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_partitions_799_);
lean_ctor_set(v_reuseFailAlloc_802_, 1, v_snd_793_);
v___x_801_ = v_reuseFailAlloc_802_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
return v___x_801_;
}
}
}
}
lean_object* runtime_initialize_Lean_Server_Completion_SyntheticCompletion(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Completion_CompletionInfoSelection(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Server_Completion_SyntheticCompletion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Completion_CompletionInfoSelection(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Server_Completion_SyntheticCompletion(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Completion_CompletionInfoSelection(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Server_Completion_SyntheticCompletion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_CompletionInfoSelection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Completion_CompletionInfoSelection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Completion_CompletionInfoSelection(builtin);
}
#ifdef __cplusplus
}
#endif
