// Lean compiler output
// Module: Lean.Compiler.LCNF.Probing
// Imports: public import Lean.Compiler.LCNF.PhaseExt
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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_size(uint8_t, lean_object*);
uint8_t l_Lean_Name_lt(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_getJps___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_getJps___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getJps(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getJps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFun(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFunDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByCases(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJmp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJmp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByReturn(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByReturn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByUnreach(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByUnreach___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_instMonadEIO(lean_box(0));
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0);
v___x_3_ = l_StateRefT_x27_instMonad___redArg(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2(void){
_start:
{
lean_object* v___f_4_; 
v___f_4_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_4_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3(void){
_start:
{
lean_object* v___f_5_; 
v___f_5_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_5_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4(void){
_start:
{
lean_object* v___f_6_; 
v___f_6_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed), 7, 0);
return v___f_6_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5(void){
_start:
{
lean_object* v___f_7_; 
v___f_7_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed), 9, 0);
return v___f_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg(lean_object* v_f_8_, lean_object* v_data_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_){
_start:
{
lean_object* v___x_15_; lean_object* v_toApplicative_16_; lean_object* v_toFunctor_17_; lean_object* v_toSeq_18_; lean_object* v_toSeqLeft_19_; lean_object* v_toSeqRight_20_; lean_object* v___f_21_; lean_object* v___f_22_; lean_object* v___f_23_; lean_object* v___f_24_; lean_object* v___x_25_; lean_object* v___f_26_; lean_object* v___f_27_; lean_object* v___f_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v_toApplicative_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_63_; 
v___x_15_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_16_ = lean_ctor_get(v___x_15_, 0);
v_toFunctor_17_ = lean_ctor_get(v_toApplicative_16_, 0);
v_toSeq_18_ = lean_ctor_get(v_toApplicative_16_, 2);
v_toSeqLeft_19_ = lean_ctor_get(v_toApplicative_16_, 3);
v_toSeqRight_20_ = lean_ctor_get(v_toApplicative_16_, 4);
v___f_21_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2);
v___f_22_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3);
lean_inc_ref_n(v_toFunctor_17_, 2);
v___f_23_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_23_, 0, v_toFunctor_17_);
v___f_24_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_24_, 0, v_toFunctor_17_);
v___x_25_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_25_, 0, v___f_23_);
lean_ctor_set(v___x_25_, 1, v___f_24_);
lean_inc(v_toSeqRight_20_);
v___f_26_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_26_, 0, v_toSeqRight_20_);
lean_inc(v_toSeqLeft_19_);
v___f_27_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_27_, 0, v_toSeqLeft_19_);
lean_inc(v_toSeq_18_);
v___f_28_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_28_, 0, v_toSeq_18_);
v___x_29_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_29_, 0, v___x_25_);
lean_ctor_set(v___x_29_, 1, v___f_21_);
lean_ctor_set(v___x_29_, 2, v___f_28_);
lean_ctor_set(v___x_29_, 3, v___f_27_);
lean_ctor_set(v___x_29_, 4, v___f_26_);
v___x_30_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
lean_ctor_set(v___x_30_, 1, v___f_22_);
v___x_31_ = l_StateRefT_x27_instMonad___redArg(v___x_30_);
v_toApplicative_32_ = lean_ctor_get(v___x_31_, 0);
v_isSharedCheck_63_ = !lean_is_exclusive(v___x_31_);
if (v_isSharedCheck_63_ == 0)
{
lean_object* v_unused_64_; 
v_unused_64_ = lean_ctor_get(v___x_31_, 1);
lean_dec(v_unused_64_);
v___x_34_ = v___x_31_;
v_isShared_35_ = v_isSharedCheck_63_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_toApplicative_32_);
lean_dec(v___x_31_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_63_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v_toFunctor_36_; lean_object* v_toSeq_37_; lean_object* v_toSeqLeft_38_; lean_object* v_toSeqRight_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_61_; 
v_toFunctor_36_ = lean_ctor_get(v_toApplicative_32_, 0);
v_toSeq_37_ = lean_ctor_get(v_toApplicative_32_, 2);
v_toSeqLeft_38_ = lean_ctor_get(v_toApplicative_32_, 3);
v_toSeqRight_39_ = lean_ctor_get(v_toApplicative_32_, 4);
v_isSharedCheck_61_ = !lean_is_exclusive(v_toApplicative_32_);
if (v_isSharedCheck_61_ == 0)
{
lean_object* v_unused_62_; 
v_unused_62_ = lean_ctor_get(v_toApplicative_32_, 1);
lean_dec(v_unused_62_);
v___x_41_ = v_toApplicative_32_;
v_isShared_42_ = v_isSharedCheck_61_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_toSeqRight_39_);
lean_inc(v_toSeqLeft_38_);
lean_inc(v_toSeq_37_);
lean_inc(v_toFunctor_36_);
lean_dec(v_toApplicative_32_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_61_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___f_43_; lean_object* v___f_44_; lean_object* v___f_45_; lean_object* v___f_46_; lean_object* v___x_47_; lean_object* v___f_48_; lean_object* v___f_49_; lean_object* v___f_50_; lean_object* v___x_52_; 
v___f_43_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4);
v___f_44_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5);
lean_inc_ref(v_toFunctor_36_);
v___f_45_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_45_, 0, v_toFunctor_36_);
v___f_46_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_46_, 0, v_toFunctor_36_);
v___x_47_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_47_, 0, v___f_45_);
lean_ctor_set(v___x_47_, 1, v___f_46_);
v___f_48_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_48_, 0, v_toSeqRight_39_);
v___f_49_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_49_, 0, v_toSeqLeft_38_);
v___f_50_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_50_, 0, v_toSeq_37_);
if (v_isShared_42_ == 0)
{
lean_ctor_set(v___x_41_, 4, v___f_48_);
lean_ctor_set(v___x_41_, 3, v___f_49_);
lean_ctor_set(v___x_41_, 2, v___f_50_);
lean_ctor_set(v___x_41_, 1, v___f_43_);
lean_ctor_set(v___x_41_, 0, v___x_47_);
v___x_52_ = v___x_41_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v___x_47_);
lean_ctor_set(v_reuseFailAlloc_60_, 1, v___f_43_);
lean_ctor_set(v_reuseFailAlloc_60_, 2, v___f_50_);
lean_ctor_set(v_reuseFailAlloc_60_, 3, v___f_49_);
lean_ctor_set(v_reuseFailAlloc_60_, 4, v___f_48_);
v___x_52_ = v_reuseFailAlloc_60_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
lean_object* v___x_54_; 
if (v_isShared_35_ == 0)
{
lean_ctor_set(v___x_34_, 1, v___f_44_);
lean_ctor_set(v___x_34_, 0, v___x_52_);
v___x_54_ = v___x_34_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_59_; 
v_reuseFailAlloc_59_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_59_, 0, v___x_52_);
lean_ctor_set(v_reuseFailAlloc_59_, 1, v___f_44_);
v___x_54_ = v_reuseFailAlloc_59_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
size_t v_sz_55_; size_t v___x_56_; lean_object* v___x_7__overap_57_; lean_object* v___x_58_; 
v_sz_55_ = lean_array_size(v_data_9_);
v___x_56_ = ((size_t)0ULL);
v___x_7__overap_57_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_54_, v_f_8_, v_sz_55_, v___x_56_, v_data_9_);
lean_inc(v_a_13_);
lean_inc_ref(v_a_12_);
lean_inc(v_a_11_);
lean_inc_ref(v_a_10_);
v___x_58_ = lean_apply_5(v___x_7__overap_57_, v_a_10_, v_a_11_, v_a_12_, v_a_13_, lean_box(0));
return v___x_58_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___boxed(lean_object* v_f_65_, lean_object* v_data_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_Compiler_LCNF_Probe_map___redArg(v_f_65_, v_data_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_);
lean_dec(v_a_70_);
lean_dec_ref(v_a_69_);
lean_dec(v_a_68_);
lean_dec_ref(v_a_67_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map(lean_object* v_00_u03b1_73_, lean_object* v_00_u03b2_74_, lean_object* v_f_75_, lean_object* v_data_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_){
_start:
{
lean_object* v___x_82_; lean_object* v_toApplicative_83_; lean_object* v_toFunctor_84_; lean_object* v_toSeq_85_; lean_object* v_toSeqLeft_86_; lean_object* v_toSeqRight_87_; lean_object* v___f_88_; lean_object* v___f_89_; lean_object* v___f_90_; lean_object* v___f_91_; lean_object* v___x_92_; lean_object* v___f_93_; lean_object* v___f_94_; lean_object* v___f_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v_toApplicative_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_130_; 
v___x_82_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_83_ = lean_ctor_get(v___x_82_, 0);
v_toFunctor_84_ = lean_ctor_get(v_toApplicative_83_, 0);
v_toSeq_85_ = lean_ctor_get(v_toApplicative_83_, 2);
v_toSeqLeft_86_ = lean_ctor_get(v_toApplicative_83_, 3);
v_toSeqRight_87_ = lean_ctor_get(v_toApplicative_83_, 4);
v___f_88_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2);
v___f_89_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3);
lean_inc_ref_n(v_toFunctor_84_, 2);
v___f_90_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_90_, 0, v_toFunctor_84_);
v___f_91_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_91_, 0, v_toFunctor_84_);
v___x_92_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_92_, 0, v___f_90_);
lean_ctor_set(v___x_92_, 1, v___f_91_);
lean_inc(v_toSeqRight_87_);
v___f_93_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_93_, 0, v_toSeqRight_87_);
lean_inc(v_toSeqLeft_86_);
v___f_94_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_94_, 0, v_toSeqLeft_86_);
lean_inc(v_toSeq_85_);
v___f_95_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_95_, 0, v_toSeq_85_);
v___x_96_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_96_, 0, v___x_92_);
lean_ctor_set(v___x_96_, 1, v___f_88_);
lean_ctor_set(v___x_96_, 2, v___f_95_);
lean_ctor_set(v___x_96_, 3, v___f_94_);
lean_ctor_set(v___x_96_, 4, v___f_93_);
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v___f_89_);
v___x_98_ = l_StateRefT_x27_instMonad___redArg(v___x_97_);
v_toApplicative_99_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_130_ == 0)
{
lean_object* v_unused_131_; 
v_unused_131_ = lean_ctor_get(v___x_98_, 1);
lean_dec(v_unused_131_);
v___x_101_ = v___x_98_;
v_isShared_102_ = v_isSharedCheck_130_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_toApplicative_99_);
lean_dec(v___x_98_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_130_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v_toFunctor_103_; lean_object* v_toSeq_104_; lean_object* v_toSeqLeft_105_; lean_object* v_toSeqRight_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_128_; 
v_toFunctor_103_ = lean_ctor_get(v_toApplicative_99_, 0);
v_toSeq_104_ = lean_ctor_get(v_toApplicative_99_, 2);
v_toSeqLeft_105_ = lean_ctor_get(v_toApplicative_99_, 3);
v_toSeqRight_106_ = lean_ctor_get(v_toApplicative_99_, 4);
v_isSharedCheck_128_ = !lean_is_exclusive(v_toApplicative_99_);
if (v_isSharedCheck_128_ == 0)
{
lean_object* v_unused_129_; 
v_unused_129_ = lean_ctor_get(v_toApplicative_99_, 1);
lean_dec(v_unused_129_);
v___x_108_ = v_toApplicative_99_;
v_isShared_109_ = v_isSharedCheck_128_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_toSeqRight_106_);
lean_inc(v_toSeqLeft_105_);
lean_inc(v_toSeq_104_);
lean_inc(v_toFunctor_103_);
lean_dec(v_toApplicative_99_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_128_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___f_110_; lean_object* v___f_111_; lean_object* v___f_112_; lean_object* v___f_113_; lean_object* v___x_114_; lean_object* v___f_115_; lean_object* v___f_116_; lean_object* v___f_117_; lean_object* v___x_119_; 
v___f_110_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4);
v___f_111_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5);
lean_inc_ref(v_toFunctor_103_);
v___f_112_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_112_, 0, v_toFunctor_103_);
v___f_113_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_113_, 0, v_toFunctor_103_);
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v___f_112_);
lean_ctor_set(v___x_114_, 1, v___f_113_);
v___f_115_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_115_, 0, v_toSeqRight_106_);
v___f_116_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_116_, 0, v_toSeqLeft_105_);
v___f_117_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_117_, 0, v_toSeq_104_);
if (v_isShared_109_ == 0)
{
lean_ctor_set(v___x_108_, 4, v___f_115_);
lean_ctor_set(v___x_108_, 3, v___f_116_);
lean_ctor_set(v___x_108_, 2, v___f_117_);
lean_ctor_set(v___x_108_, 1, v___f_110_);
lean_ctor_set(v___x_108_, 0, v___x_114_);
v___x_119_ = v___x_108_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v___x_114_);
lean_ctor_set(v_reuseFailAlloc_127_, 1, v___f_110_);
lean_ctor_set(v_reuseFailAlloc_127_, 2, v___f_117_);
lean_ctor_set(v_reuseFailAlloc_127_, 3, v___f_116_);
lean_ctor_set(v_reuseFailAlloc_127_, 4, v___f_115_);
v___x_119_ = v_reuseFailAlloc_127_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_121_; 
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 1, v___f_111_);
lean_ctor_set(v___x_101_, 0, v___x_119_);
v___x_121_ = v___x_101_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v___x_119_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v___f_111_);
v___x_121_ = v_reuseFailAlloc_126_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
size_t v_sz_122_; size_t v___x_123_; lean_object* v___x_57__overap_124_; lean_object* v___x_125_; 
v_sz_122_ = lean_array_size(v_data_76_);
v___x_123_ = ((size_t)0ULL);
v___x_57__overap_124_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_121_, v_f_75_, v_sz_122_, v___x_123_, v_data_76_);
lean_inc(v_a_80_);
lean_inc_ref(v_a_79_);
lean_inc(v_a_78_);
lean_inc_ref(v_a_77_);
v___x_125_ = lean_apply_5(v___x_57__overap_124_, v_a_77_, v_a_78_, v_a_79_, v_a_80_, lean_box(0));
return v___x_125_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___boxed(lean_object* v_00_u03b1_132_, lean_object* v_00_u03b2_133_, lean_object* v_f_134_, lean_object* v_data_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l_Lean_Compiler_LCNF_Probe_map(v_00_u03b1_132_, v_00_u03b2_133_, v_f_134_, v_data_135_, v_a_136_, v_a_137_, v_a_138_, v_a_139_);
lean_dec(v_a_139_);
lean_dec_ref(v_a_138_);
lean_dec(v_a_137_);
lean_dec_ref(v_a_136_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0(lean_object* v_f_142_, lean_object* v_acc_143_, lean_object* v_a_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_){
_start:
{
lean_object* v___x_150_; 
lean_inc(v___y_148_);
lean_inc_ref(v___y_147_);
lean_inc(v___y_146_);
lean_inc_ref(v___y_145_);
lean_inc(v_a_144_);
v___x_150_ = lean_apply_6(v_f_142_, v_a_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, lean_box(0));
if (lean_obj_tag(v___x_150_) == 0)
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_163_; 
v_a_151_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_163_ == 0)
{
v___x_153_ = v___x_150_;
v_isShared_154_ = v_isSharedCheck_163_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_150_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_163_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
uint8_t v___x_155_; 
v___x_155_ = lean_unbox(v_a_151_);
lean_dec(v_a_151_);
if (v___x_155_ == 0)
{
lean_object* v___x_157_; 
lean_dec(v_a_144_);
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 0, v_acc_143_);
v___x_157_ = v___x_153_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_acc_143_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
else
{
lean_object* v___x_159_; lean_object* v___x_161_; 
v___x_159_ = lean_array_push(v_acc_143_, v_a_144_);
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 0, v___x_159_);
v___x_161_ = v___x_153_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_159_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
else
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
lean_dec(v_a_144_);
lean_dec_ref(v_acc_143_);
v_a_164_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_171_ == 0)
{
v___x_166_ = v___x_150_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_150_);
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
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0___boxed(lean_object* v_f_172_, lean_object* v_acc_173_, lean_object* v_a_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0(v_f_172_, v_acc_173_, v_a_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
lean_dec(v___y_178_);
lean_dec_ref(v___y_177_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
return v_res_180_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = lean_unsigned_to_nat(0u);
v___x_182_ = lean_mk_empty_array_with_capacity(v___x_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg(lean_object* v_f_183_, lean_object* v_data_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_){
_start:
{
lean_object* v___x_190_; lean_object* v_toApplicative_191_; lean_object* v_toFunctor_192_; lean_object* v_toSeq_193_; lean_object* v_toSeqLeft_194_; lean_object* v_toSeqRight_195_; lean_object* v___f_196_; lean_object* v___f_197_; lean_object* v___f_198_; lean_object* v___f_199_; lean_object* v___x_200_; lean_object* v___f_201_; lean_object* v___f_202_; lean_object* v___f_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v_toApplicative_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_250_; 
v___x_190_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_191_ = lean_ctor_get(v___x_190_, 0);
v_toFunctor_192_ = lean_ctor_get(v_toApplicative_191_, 0);
v_toSeq_193_ = lean_ctor_get(v_toApplicative_191_, 2);
v_toSeqLeft_194_ = lean_ctor_get(v_toApplicative_191_, 3);
v_toSeqRight_195_ = lean_ctor_get(v_toApplicative_191_, 4);
v___f_196_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2);
v___f_197_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3);
lean_inc_ref_n(v_toFunctor_192_, 2);
v___f_198_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_198_, 0, v_toFunctor_192_);
v___f_199_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_199_, 0, v_toFunctor_192_);
v___x_200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_200_, 0, v___f_198_);
lean_ctor_set(v___x_200_, 1, v___f_199_);
lean_inc(v_toSeqRight_195_);
v___f_201_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_201_, 0, v_toSeqRight_195_);
lean_inc(v_toSeqLeft_194_);
v___f_202_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_202_, 0, v_toSeqLeft_194_);
lean_inc(v_toSeq_193_);
v___f_203_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_203_, 0, v_toSeq_193_);
v___x_204_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_204_, 0, v___x_200_);
lean_ctor_set(v___x_204_, 1, v___f_196_);
lean_ctor_set(v___x_204_, 2, v___f_203_);
lean_ctor_set(v___x_204_, 3, v___f_202_);
lean_ctor_set(v___x_204_, 4, v___f_201_);
v___x_205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
lean_ctor_set(v___x_205_, 1, v___f_197_);
v___x_206_ = l_StateRefT_x27_instMonad___redArg(v___x_205_);
v_toApplicative_207_ = lean_ctor_get(v___x_206_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_206_);
if (v_isSharedCheck_250_ == 0)
{
lean_object* v_unused_251_; 
v_unused_251_ = lean_ctor_get(v___x_206_, 1);
lean_dec(v_unused_251_);
v___x_209_ = v___x_206_;
v_isShared_210_ = v_isSharedCheck_250_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_toApplicative_207_);
lean_dec(v___x_206_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_250_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v_toFunctor_211_; lean_object* v_toSeq_212_; lean_object* v_toSeqLeft_213_; lean_object* v_toSeqRight_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_248_; 
v_toFunctor_211_ = lean_ctor_get(v_toApplicative_207_, 0);
v_toSeq_212_ = lean_ctor_get(v_toApplicative_207_, 2);
v_toSeqLeft_213_ = lean_ctor_get(v_toApplicative_207_, 3);
v_toSeqRight_214_ = lean_ctor_get(v_toApplicative_207_, 4);
v_isSharedCheck_248_ = !lean_is_exclusive(v_toApplicative_207_);
if (v_isSharedCheck_248_ == 0)
{
lean_object* v_unused_249_; 
v_unused_249_ = lean_ctor_get(v_toApplicative_207_, 1);
lean_dec(v_unused_249_);
v___x_216_ = v_toApplicative_207_;
v_isShared_217_ = v_isSharedCheck_248_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_toSeqRight_214_);
lean_inc(v_toSeqLeft_213_);
lean_inc(v_toSeq_212_);
lean_inc(v_toFunctor_211_);
lean_dec(v_toApplicative_207_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_248_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___f_218_; lean_object* v___f_219_; lean_object* v___f_220_; lean_object* v___f_221_; lean_object* v___x_222_; lean_object* v___f_223_; lean_object* v___f_224_; lean_object* v___f_225_; lean_object* v___x_227_; 
v___f_218_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4);
v___f_219_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5);
lean_inc_ref(v_toFunctor_211_);
v___f_220_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_220_, 0, v_toFunctor_211_);
v___f_221_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_221_, 0, v_toFunctor_211_);
v___x_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_222_, 0, v___f_220_);
lean_ctor_set(v___x_222_, 1, v___f_221_);
v___f_223_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_223_, 0, v_toSeqRight_214_);
v___f_224_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_224_, 0, v_toSeqLeft_213_);
v___f_225_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_225_, 0, v_toSeq_212_);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 4, v___f_223_);
lean_ctor_set(v___x_216_, 3, v___f_224_);
lean_ctor_set(v___x_216_, 2, v___f_225_);
lean_ctor_set(v___x_216_, 1, v___f_218_);
lean_ctor_set(v___x_216_, 0, v___x_222_);
v___x_227_ = v___x_216_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v___x_222_);
lean_ctor_set(v_reuseFailAlloc_247_, 1, v___f_218_);
lean_ctor_set(v_reuseFailAlloc_247_, 2, v___f_225_);
lean_ctor_set(v_reuseFailAlloc_247_, 3, v___f_224_);
lean_ctor_set(v_reuseFailAlloc_247_, 4, v___f_223_);
v___x_227_ = v_reuseFailAlloc_247_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
lean_object* v___x_229_; 
if (v_isShared_210_ == 0)
{
lean_ctor_set(v___x_209_, 1, v___f_219_);
lean_ctor_set(v___x_209_, 0, v___x_227_);
v___x_229_ = v___x_209_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_227_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v___f_219_);
v___x_229_ = v_reuseFailAlloc_246_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; uint8_t v___x_233_; 
v___x_230_ = lean_unsigned_to_nat(0u);
v___x_231_ = lean_array_get_size(v_data_184_);
v___x_232_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0, &l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0);
v___x_233_ = lean_nat_dec_lt(v___x_230_, v___x_231_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; 
lean_dec_ref(v___x_229_);
lean_dec_ref(v_data_184_);
lean_dec_ref(v_f_183_);
v___x_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_234_, 0, v___x_232_);
return v___x_234_;
}
else
{
lean_object* v___f_235_; uint8_t v___x_236_; 
v___f_235_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_235_, 0, v_f_183_);
v___x_236_ = lean_nat_dec_le(v___x_231_, v___x_231_);
if (v___x_236_ == 0)
{
if (v___x_233_ == 0)
{
lean_object* v___x_237_; 
lean_dec_ref(v___f_235_);
lean_dec_ref(v___x_229_);
lean_dec_ref(v_data_184_);
v___x_237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_237_, 0, v___x_232_);
return v___x_237_;
}
else
{
size_t v___x_238_; size_t v___x_239_; lean_object* v___x_359__overap_240_; lean_object* v___x_241_; 
v___x_238_ = ((size_t)0ULL);
v___x_239_ = lean_usize_of_nat(v___x_231_);
v___x_359__overap_240_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_229_, v___f_235_, v_data_184_, v___x_238_, v___x_239_, v___x_232_);
lean_inc(v_a_188_);
lean_inc_ref(v_a_187_);
lean_inc(v_a_186_);
lean_inc_ref(v_a_185_);
v___x_241_ = lean_apply_5(v___x_359__overap_240_, v_a_185_, v_a_186_, v_a_187_, v_a_188_, lean_box(0));
return v___x_241_;
}
}
else
{
size_t v___x_242_; size_t v___x_243_; lean_object* v___x_364__overap_244_; lean_object* v___x_245_; 
v___x_242_ = ((size_t)0ULL);
v___x_243_ = lean_usize_of_nat(v___x_231_);
v___x_364__overap_244_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_229_, v___f_235_, v_data_184_, v___x_242_, v___x_243_, v___x_232_);
lean_inc(v_a_188_);
lean_inc_ref(v_a_187_);
lean_inc(v_a_186_);
lean_inc_ref(v_a_185_);
v___x_245_ = lean_apply_5(v___x_364__overap_244_, v_a_185_, v_a_186_, v_a_187_, v_a_188_, lean_box(0));
return v___x_245_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___boxed(lean_object* v_f_252_, lean_object* v_data_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l_Lean_Compiler_LCNF_Probe_filter___redArg(v_f_252_, v_data_253_, v_a_254_, v_a_255_, v_a_256_, v_a_257_);
lean_dec(v_a_257_);
lean_dec_ref(v_a_256_);
lean_dec(v_a_255_);
lean_dec_ref(v_a_254_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter(lean_object* v_00_u03b1_260_, lean_object* v_f_261_, lean_object* v_data_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_){
_start:
{
lean_object* v___x_268_; lean_object* v_toApplicative_269_; lean_object* v_toFunctor_270_; lean_object* v_toSeq_271_; lean_object* v_toSeqLeft_272_; lean_object* v_toSeqRight_273_; lean_object* v___f_274_; lean_object* v___f_275_; lean_object* v___f_276_; lean_object* v___f_277_; lean_object* v___x_278_; lean_object* v___f_279_; lean_object* v___f_280_; lean_object* v___f_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v_toApplicative_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_328_; 
v___x_268_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_269_ = lean_ctor_get(v___x_268_, 0);
v_toFunctor_270_ = lean_ctor_get(v_toApplicative_269_, 0);
v_toSeq_271_ = lean_ctor_get(v_toApplicative_269_, 2);
v_toSeqLeft_272_ = lean_ctor_get(v_toApplicative_269_, 3);
v_toSeqRight_273_ = lean_ctor_get(v_toApplicative_269_, 4);
v___f_274_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2);
v___f_275_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3);
lean_inc_ref_n(v_toFunctor_270_, 2);
v___f_276_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_276_, 0, v_toFunctor_270_);
v___f_277_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_277_, 0, v_toFunctor_270_);
v___x_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_278_, 0, v___f_276_);
lean_ctor_set(v___x_278_, 1, v___f_277_);
lean_inc(v_toSeqRight_273_);
v___f_279_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_279_, 0, v_toSeqRight_273_);
lean_inc(v_toSeqLeft_272_);
v___f_280_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_280_, 0, v_toSeqLeft_272_);
lean_inc(v_toSeq_271_);
v___f_281_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_281_, 0, v_toSeq_271_);
v___x_282_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_282_, 0, v___x_278_);
lean_ctor_set(v___x_282_, 1, v___f_274_);
lean_ctor_set(v___x_282_, 2, v___f_281_);
lean_ctor_set(v___x_282_, 3, v___f_280_);
lean_ctor_set(v___x_282_, 4, v___f_279_);
v___x_283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
lean_ctor_set(v___x_283_, 1, v___f_275_);
v___x_284_ = l_StateRefT_x27_instMonad___redArg(v___x_283_);
v_toApplicative_285_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_328_ == 0)
{
lean_object* v_unused_329_; 
v_unused_329_ = lean_ctor_get(v___x_284_, 1);
lean_dec(v_unused_329_);
v___x_287_ = v___x_284_;
v_isShared_288_ = v_isSharedCheck_328_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_toApplicative_285_);
lean_dec(v___x_284_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_328_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v_toFunctor_289_; lean_object* v_toSeq_290_; lean_object* v_toSeqLeft_291_; lean_object* v_toSeqRight_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_326_; 
v_toFunctor_289_ = lean_ctor_get(v_toApplicative_285_, 0);
v_toSeq_290_ = lean_ctor_get(v_toApplicative_285_, 2);
v_toSeqLeft_291_ = lean_ctor_get(v_toApplicative_285_, 3);
v_toSeqRight_292_ = lean_ctor_get(v_toApplicative_285_, 4);
v_isSharedCheck_326_ = !lean_is_exclusive(v_toApplicative_285_);
if (v_isSharedCheck_326_ == 0)
{
lean_object* v_unused_327_; 
v_unused_327_ = lean_ctor_get(v_toApplicative_285_, 1);
lean_dec(v_unused_327_);
v___x_294_ = v_toApplicative_285_;
v_isShared_295_ = v_isSharedCheck_326_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_toSeqRight_292_);
lean_inc(v_toSeqLeft_291_);
lean_inc(v_toSeq_290_);
lean_inc(v_toFunctor_289_);
lean_dec(v_toApplicative_285_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_326_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___f_296_; lean_object* v___f_297_; lean_object* v___f_298_; lean_object* v___f_299_; lean_object* v___x_300_; lean_object* v___f_301_; lean_object* v___f_302_; lean_object* v___f_303_; lean_object* v___x_305_; 
v___f_296_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4);
v___f_297_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5);
lean_inc_ref(v_toFunctor_289_);
v___f_298_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_298_, 0, v_toFunctor_289_);
v___f_299_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_299_, 0, v_toFunctor_289_);
v___x_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_300_, 0, v___f_298_);
lean_ctor_set(v___x_300_, 1, v___f_299_);
v___f_301_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_301_, 0, v_toSeqRight_292_);
v___f_302_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_302_, 0, v_toSeqLeft_291_);
v___f_303_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_303_, 0, v_toSeq_290_);
if (v_isShared_295_ == 0)
{
lean_ctor_set(v___x_294_, 4, v___f_301_);
lean_ctor_set(v___x_294_, 3, v___f_302_);
lean_ctor_set(v___x_294_, 2, v___f_303_);
lean_ctor_set(v___x_294_, 1, v___f_296_);
lean_ctor_set(v___x_294_, 0, v___x_300_);
v___x_305_ = v___x_294_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_300_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v___f_296_);
lean_ctor_set(v_reuseFailAlloc_325_, 2, v___f_303_);
lean_ctor_set(v_reuseFailAlloc_325_, 3, v___f_302_);
lean_ctor_set(v_reuseFailAlloc_325_, 4, v___f_301_);
v___x_305_ = v_reuseFailAlloc_325_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
lean_object* v___x_307_; 
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 1, v___f_297_);
lean_ctor_set(v___x_287_, 0, v___x_305_);
v___x_307_ = v___x_287_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v___x_305_);
lean_ctor_set(v_reuseFailAlloc_324_, 1, v___f_297_);
v___x_307_ = v_reuseFailAlloc_324_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; uint8_t v___x_311_; 
v___x_308_ = lean_unsigned_to_nat(0u);
v___x_309_ = lean_array_get_size(v_data_262_);
v___x_310_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0, &l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0);
v___x_311_ = lean_nat_dec_lt(v___x_308_, v___x_309_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; 
lean_dec_ref(v___x_307_);
lean_dec_ref(v_data_262_);
lean_dec_ref(v_f_261_);
v___x_312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_312_, 0, v___x_310_);
return v___x_312_;
}
else
{
lean_object* v___f_313_; uint8_t v___x_314_; 
v___f_313_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_313_, 0, v_f_261_);
v___x_314_ = lean_nat_dec_le(v___x_309_, v___x_309_);
if (v___x_314_ == 0)
{
if (v___x_311_ == 0)
{
lean_object* v___x_315_; 
lean_dec_ref(v___f_313_);
lean_dec_ref(v___x_307_);
lean_dec_ref(v_data_262_);
v___x_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_310_);
return v___x_315_;
}
else
{
size_t v___x_316_; size_t v___x_317_; lean_object* v___x_448__overap_318_; lean_object* v___x_319_; 
v___x_316_ = ((size_t)0ULL);
v___x_317_ = lean_usize_of_nat(v___x_309_);
v___x_448__overap_318_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_307_, v___f_313_, v_data_262_, v___x_316_, v___x_317_, v___x_310_);
lean_inc(v_a_266_);
lean_inc_ref(v_a_265_);
lean_inc(v_a_264_);
lean_inc_ref(v_a_263_);
v___x_319_ = lean_apply_5(v___x_448__overap_318_, v_a_263_, v_a_264_, v_a_265_, v_a_266_, lean_box(0));
return v___x_319_;
}
}
else
{
size_t v___x_320_; size_t v___x_321_; lean_object* v___x_451__overap_322_; lean_object* v___x_323_; 
v___x_320_ = ((size_t)0ULL);
v___x_321_ = lean_usize_of_nat(v___x_309_);
v___x_451__overap_322_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_307_, v___f_313_, v_data_262_, v___x_320_, v___x_321_, v___x_310_);
lean_inc(v_a_266_);
lean_inc_ref(v_a_265_);
lean_inc(v_a_264_);
lean_inc_ref(v_a_263_);
v___x_323_ = lean_apply_5(v___x_451__overap_322_, v_a_263_, v_a_264_, v_a_265_, v_a_266_, lean_box(0));
return v___x_323_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___boxed(lean_object* v_00_u03b1_330_, lean_object* v_f_331_, lean_object* v_data_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lean_Compiler_LCNF_Probe_filter(v_00_u03b1_330_, v_f_331_, v_data_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_);
lean_dec(v_a_336_);
lean_dec_ref(v_a_335_);
lean_dec(v_a_334_);
lean_dec_ref(v_a_333_);
return v_res_338_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0(lean_object* v_inst_339_, lean_object* v_x1_340_, lean_object* v_x2_341_){
_start:
{
lean_object* v___x_342_; uint8_t v___x_343_; 
v___x_342_ = lean_apply_2(v_inst_339_, v_x1_340_, v_x2_341_);
v___x_343_ = lean_unbox(v___x_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0___boxed(lean_object* v_inst_344_, lean_object* v_x1_345_, lean_object* v_x2_346_){
_start:
{
uint8_t v_res_347_; lean_object* v_r_348_; 
v_res_347_ = l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0(v_inst_344_, v_x1_345_, v_x2_346_);
v_r_348_ = lean_box(v_res_347_);
return v_r_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg(lean_object* v_inst_349_, lean_object* v_data_350_){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_352_ = lean_array_get_size(v_data_350_);
v___x_353_ = lean_unsigned_to_nat(0u);
v___x_354_ = lean_nat_dec_eq(v___x_352_, v___x_353_);
if (v___x_354_ == 0)
{
lean_object* v___f_355_; lean_object* v___y_357_; lean_object* v___y_358_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___y_364_; uint8_t v___x_366_; 
v___f_355_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_355_, 0, v_inst_349_);
v___x_361_ = lean_unsigned_to_nat(1u);
v___x_362_ = lean_nat_sub(v___x_352_, v___x_361_);
v___x_366_ = lean_nat_dec_le(v___x_353_, v___x_362_);
if (v___x_366_ == 0)
{
lean_inc(v___x_362_);
v___y_364_ = v___x_362_;
goto v___jp_363_;
}
else
{
v___y_364_ = v___x_353_;
goto v___jp_363_;
}
v___jp_356_:
{
lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_359_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_355_, v___x_352_, v_data_350_, v___y_357_, v___y_358_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_358_);
v___x_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
return v___x_360_;
}
v___jp_363_:
{
uint8_t v___x_365_; 
v___x_365_ = lean_nat_dec_le(v___y_364_, v___x_362_);
if (v___x_365_ == 0)
{
lean_dec(v___x_362_);
lean_inc(v___y_364_);
v___y_357_ = v___y_364_;
v___y_358_ = v___y_364_;
goto v___jp_356_;
}
else
{
v___y_357_ = v___y_364_;
v___y_358_ = v___x_362_;
goto v___jp_356_;
}
}
}
else
{
lean_object* v___x_367_; 
lean_dec_ref(v_inst_349_);
v___x_367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_367_, 0, v_data_350_);
return v___x_367_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg___boxed(lean_object* v_inst_368_, lean_object* v_data_369_, lean_object* v_a_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Lean_Compiler_LCNF_Probe_sorted___redArg(v_inst_368_, v_data_369_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted(lean_object* v_00_u03b1_372_, lean_object* v_inst_373_, lean_object* v_inst_374_, lean_object* v_inst_375_, lean_object* v_data_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; uint8_t v___x_384_; 
v___x_382_ = lean_array_get_size(v_data_376_);
v___x_383_ = lean_unsigned_to_nat(0u);
v___x_384_ = lean_nat_dec_eq(v___x_382_, v___x_383_);
if (v___x_384_ == 0)
{
lean_object* v___f_385_; lean_object* v___y_387_; lean_object* v___y_388_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___y_394_; uint8_t v___x_396_; 
v___f_385_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_385_, 0, v_inst_375_);
v___x_391_ = lean_unsigned_to_nat(1u);
v___x_392_ = lean_nat_sub(v___x_382_, v___x_391_);
v___x_396_ = lean_nat_dec_le(v___x_383_, v___x_392_);
if (v___x_396_ == 0)
{
lean_inc(v___x_392_);
v___y_394_ = v___x_392_;
goto v___jp_393_;
}
else
{
v___y_394_ = v___x_383_;
goto v___jp_393_;
}
v___jp_386_:
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_385_, v___x_382_, v_data_376_, v___y_387_, v___y_388_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_388_);
v___x_390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_390_, 0, v___x_389_);
return v___x_390_;
}
v___jp_393_:
{
uint8_t v___x_395_; 
v___x_395_ = lean_nat_dec_le(v___y_394_, v___x_392_);
if (v___x_395_ == 0)
{
lean_dec(v___x_392_);
lean_inc(v___y_394_);
v___y_387_ = v___y_394_;
v___y_388_ = v___y_394_;
goto v___jp_386_;
}
else
{
v___y_387_ = v___y_394_;
v___y_388_ = v___x_392_;
goto v___jp_386_;
}
}
}
else
{
lean_object* v___x_397_; 
lean_dec_ref(v_inst_375_);
v___x_397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_397_, 0, v_data_376_);
return v___x_397_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___boxed(lean_object* v_00_u03b1_398_, lean_object* v_inst_399_, lean_object* v_inst_400_, lean_object* v_inst_401_, lean_object* v_data_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Lean_Compiler_LCNF_Probe_sorted(v_00_u03b1_398_, v_inst_399_, v_inst_400_, v_inst_401_, v_data_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_);
lean_dec(v_a_406_);
lean_dec_ref(v_a_405_);
lean_dec(v_a_404_);
lean_dec_ref(v_a_403_);
lean_dec(v_inst_399_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0(uint8_t v_pu_409_, lean_object* v_x_410_){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = l_Lean_Compiler_LCNF_Decl_size(v_pu_409_, v_x_410_);
v___x_412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
lean_ctor_set(v___x_412_, 1, v_x_410_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0___boxed(lean_object* v_pu_413_, lean_object* v_x_414_){
_start:
{
uint8_t v_pu_boxed_415_; lean_object* v_res_416_; 
v_pu_boxed_415_ = lean_unbox(v_pu_413_);
v_res_416_ = l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0(v_pu_boxed_415_, v_x_414_);
return v_res_416_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1(lean_object* v_x_417_, lean_object* v_x_418_){
_start:
{
lean_object* v_fst_419_; lean_object* v_snd_420_; lean_object* v_fst_421_; lean_object* v_snd_422_; uint8_t v___x_423_; 
v_fst_419_ = lean_ctor_get(v_x_417_, 0);
v_snd_420_ = lean_ctor_get(v_x_417_, 1);
v_fst_421_ = lean_ctor_get(v_x_418_, 0);
v_snd_422_ = lean_ctor_get(v_x_418_, 1);
v___x_423_ = lean_nat_dec_eq(v_fst_419_, v_fst_421_);
if (v___x_423_ == 0)
{
uint8_t v___x_424_; 
v___x_424_ = lean_nat_dec_lt(v_fst_419_, v_fst_421_);
return v___x_424_;
}
else
{
lean_object* v_toSignature_425_; lean_object* v_toSignature_426_; lean_object* v_name_427_; lean_object* v_name_428_; uint8_t v___x_429_; 
v_toSignature_425_ = lean_ctor_get(v_snd_420_, 0);
v_toSignature_426_ = lean_ctor_get(v_snd_422_, 0);
v_name_427_ = lean_ctor_get(v_toSignature_425_, 0);
v_name_428_ = lean_ctor_get(v_toSignature_426_, 0);
v___x_429_ = l_Lean_Name_lt(v_name_427_, v_name_428_);
return v___x_429_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1___boxed(lean_object* v_x_430_, lean_object* v_x_431_){
_start:
{
uint8_t v_res_432_; lean_object* v_r_433_; 
v_res_432_ = l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1(v_x_430_, v_x_431_);
lean_dec_ref(v_x_431_);
lean_dec_ref(v_x_430_);
v_r_433_ = lean_box(v_res_432_);
return v_r_433_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0(void){
_start:
{
lean_object* v___f_434_; 
v___f_434_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_434_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1(void){
_start:
{
lean_object* v___f_435_; 
v___f_435_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_435_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2(void){
_start:
{
lean_object* v___f_436_; 
v___f_436_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_436_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3(void){
_start:
{
lean_object* v___f_437_; 
v___f_437_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_437_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4(void){
_start:
{
lean_object* v___f_438_; 
v___f_438_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_438_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5(void){
_start:
{
lean_object* v___f_439_; 
v___f_439_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_439_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6(void){
_start:
{
lean_object* v___f_440_; 
v___f_440_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_440_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7(void){
_start:
{
lean_object* v___f_441_; lean_object* v___f_442_; lean_object* v___x_443_; 
v___f_441_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1);
v___f_442_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0, &l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0);
v___x_443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_443_, 0, v___f_442_);
lean_ctor_set(v___x_443_, 1, v___f_441_);
return v___x_443_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8(void){
_start:
{
lean_object* v___f_444_; lean_object* v___f_445_; lean_object* v___f_446_; lean_object* v___f_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
v___f_444_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5, &l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5);
v___f_445_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4, &l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4);
v___f_446_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3, &l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3);
v___f_447_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2, &l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2);
v___x_448_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7, &l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7_once, _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7);
v___x_449_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_449_, 0, v___x_448_);
lean_ctor_set(v___x_449_, 1, v___f_447_);
lean_ctor_set(v___x_449_, 2, v___f_446_);
lean_ctor_set(v___x_449_, 3, v___f_445_);
lean_ctor_set(v___x_449_, 4, v___f_444_);
return v___x_449_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9(void){
_start:
{
lean_object* v___f_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___f_450_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6, &l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6_once, _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6);
v___x_451_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8, &l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8_once, _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8);
v___x_452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_452_, 0, v___x_451_);
lean_ctor_set(v___x_452_, 1, v___f_450_);
return v___x_452_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10(void){
_start:
{
lean_object* v___f_453_; 
v___f_453_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1___boxed), 2, 0);
return v___f_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg(uint8_t v_pu_454_, lean_object* v_decls_455_){
_start:
{
lean_object* v___x_457_; lean_object* v___f_458_; lean_object* v___x_459_; size_t v_sz_460_; size_t v___x_461_; lean_object* v_decls_462_; lean_object* v___x_463_; lean_object* v___x_464_; uint8_t v___x_465_; 
v___x_457_ = lean_box(v_pu_454_);
v___f_458_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_458_, 0, v___x_457_);
v___x_459_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9, &l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9_once, _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9);
v_sz_460_ = lean_array_size(v_decls_455_);
v___x_461_ = ((size_t)0ULL);
v_decls_462_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_459_, v___f_458_, v_sz_460_, v___x_461_, v_decls_455_);
v___x_463_ = lean_array_get_size(v_decls_462_);
v___x_464_ = lean_unsigned_to_nat(0u);
v___x_465_ = lean_nat_dec_eq(v___x_463_, v___x_464_);
if (v___x_465_ == 0)
{
lean_object* v___f_466_; lean_object* v___y_468_; lean_object* v___y_469_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___y_475_; uint8_t v___x_477_; 
v___f_466_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10, &l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10_once, _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10);
v___x_472_ = lean_unsigned_to_nat(1u);
v___x_473_ = lean_nat_sub(v___x_463_, v___x_472_);
v___x_477_ = lean_nat_dec_le(v___x_464_, v___x_473_);
if (v___x_477_ == 0)
{
lean_inc(v___x_473_);
v___y_475_ = v___x_473_;
goto v___jp_474_;
}
else
{
v___y_475_ = v___x_464_;
goto v___jp_474_;
}
v___jp_467_:
{
lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_470_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_466_, v___x_463_, v_decls_462_, v___y_468_, v___y_469_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_469_);
v___x_471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
return v___x_471_;
}
v___jp_474_:
{
uint8_t v___x_476_; 
v___x_476_ = lean_nat_dec_le(v___y_475_, v___x_473_);
if (v___x_476_ == 0)
{
lean_dec(v___x_473_);
lean_inc(v___y_475_);
v___y_468_ = v___y_475_;
v___y_469_ = v___y_475_;
goto v___jp_467_;
}
else
{
v___y_468_ = v___y_475_;
v___y_469_ = v___x_473_;
goto v___jp_467_;
}
}
}
else
{
lean_object* v___x_478_; 
v___x_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_478_, 0, v_decls_462_);
return v___x_478_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___boxed(lean_object* v_pu_479_, lean_object* v_decls_480_, lean_object* v_a_481_){
_start:
{
uint8_t v_pu_boxed_482_; lean_object* v_res_483_; 
v_pu_boxed_482_ = lean_unbox(v_pu_479_);
v_res_483_ = l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg(v_pu_boxed_482_, v_decls_480_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize(uint8_t v_pu_484_, lean_object* v_decls_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_){
_start:
{
lean_object* v___x_491_; lean_object* v___f_492_; lean_object* v___x_493_; size_t v_sz_494_; size_t v___x_495_; lean_object* v_decls_496_; lean_object* v___x_497_; lean_object* v___x_498_; uint8_t v___x_499_; 
v___x_491_ = lean_box(v_pu_484_);
v___f_492_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_492_, 0, v___x_491_);
v___x_493_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9, &l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9_once, _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9);
v_sz_494_ = lean_array_size(v_decls_485_);
v___x_495_ = ((size_t)0ULL);
v_decls_496_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_493_, v___f_492_, v_sz_494_, v___x_495_, v_decls_485_);
v___x_497_ = lean_array_get_size(v_decls_496_);
v___x_498_ = lean_unsigned_to_nat(0u);
v___x_499_ = lean_nat_dec_eq(v___x_497_, v___x_498_);
if (v___x_499_ == 0)
{
lean_object* v___f_500_; lean_object* v___y_502_; lean_object* v___y_503_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___y_509_; uint8_t v___x_511_; 
v___f_500_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10, &l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10_once, _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10);
v___x_506_ = lean_unsigned_to_nat(1u);
v___x_507_ = lean_nat_sub(v___x_497_, v___x_506_);
v___x_511_ = lean_nat_dec_le(v___x_498_, v___x_507_);
if (v___x_511_ == 0)
{
lean_inc(v___x_507_);
v___y_509_ = v___x_507_;
goto v___jp_508_;
}
else
{
v___y_509_ = v___x_498_;
goto v___jp_508_;
}
v___jp_501_:
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_500_, v___x_497_, v_decls_496_, v___y_502_, v___y_503_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_503_);
v___x_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_505_, 0, v___x_504_);
return v___x_505_;
}
v___jp_508_:
{
uint8_t v___x_510_; 
v___x_510_ = lean_nat_dec_le(v___y_509_, v___x_507_);
if (v___x_510_ == 0)
{
lean_dec(v___x_507_);
lean_inc(v___y_509_);
v___y_502_ = v___y_509_;
v___y_503_ = v___y_509_;
goto v___jp_501_;
}
else
{
v___y_502_ = v___y_509_;
v___y_503_ = v___x_507_;
goto v___jp_501_;
}
}
}
else
{
lean_object* v___x_512_; 
v___x_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_512_, 0, v_decls_496_);
return v___x_512_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___boxed(lean_object* v_pu_513_, lean_object* v_decls_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_){
_start:
{
uint8_t v_pu_boxed_520_; lean_object* v_res_521_; 
v_pu_boxed_520_ = lean_unbox(v_pu_513_);
v_res_521_ = l_Lean_Compiler_LCNF_Probe_sortedBySize(v_pu_boxed_520_, v_decls_514_, v_a_515_, v_a_516_, v_a_517_, v_a_518_);
lean_dec(v_a_518_);
lean_dec_ref(v_a_517_);
lean_dec(v_a_516_);
lean_dec_ref(v_a_515_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0(lean_object* v_inst_522_, lean_object* v_inst_523_, lean_object* v_a_524_, lean_object* v_x_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_){
_start:
{
lean_object* v___x_532_; 
lean_inc(v_a_524_);
lean_inc_ref(v_inst_523_);
lean_inc_ref(v_inst_522_);
v___x_532_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_522_, v_inst_523_, v___y_526_, v_a_524_);
if (lean_obj_tag(v___x_532_) == 1)
{
lean_object* v_val_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_544_; 
v_val_533_ = lean_ctor_get(v___x_532_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_544_ == 0)
{
v___x_535_ = v___x_532_;
v_isShared_536_ = v_isSharedCheck_544_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_val_533_);
lean_dec(v___x_532_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_544_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_541_; 
v___x_537_ = lean_unsigned_to_nat(1u);
v___x_538_ = lean_nat_add(v_val_533_, v___x_537_);
lean_dec(v_val_533_);
v___x_539_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_522_, v_inst_523_, v___y_526_, v_a_524_, v___x_538_);
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 0, v___x_539_);
v___x_541_ = v___x_535_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v___x_539_);
v___x_541_ = v_reuseFailAlloc_543_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_542_; 
v___x_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_542_, 0, v___x_541_);
return v___x_542_;
}
}
}
else
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
lean_dec(v___x_532_);
v___x_545_ = lean_unsigned_to_nat(1u);
v___x_546_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_522_, v_inst_523_, v___y_526_, v_a_524_, v___x_545_);
v___x_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
v___x_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
return v___x_548_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0___boxed(lean_object* v_inst_549_, lean_object* v_inst_550_, lean_object* v_a_551_, lean_object* v_x_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0(v_inst_549_, v_inst_550_, v_a_551_, v_x_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_);
lean_dec(v___y_557_);
lean_dec_ref(v___y_556_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__1(lean_object* v_x1_560_, lean_object* v_x2_561_, lean_object* v_x3_562_){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_563_, 0, v_x2_561_);
lean_ctor_set(v___x_563_, 1, v_x3_562_);
v___x_564_ = lean_array_push(v_x1_560_, v___x_563_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__2(lean_object* v___x_565_, lean_object* v___f_566_, lean_object* v_acc_567_, lean_object* v_l_568_){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = l_Std_DHashMap_Internal_AssocList_foldlM___redArg(v___x_565_, v___f_566_, v_acc_567_, v_l_568_);
return v___x_569_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0(void){
_start:
{
lean_object* v___f_570_; 
v___f_570_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__1), 3, 0);
return v___f_570_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1(void){
_start:
{
lean_object* v___f_571_; lean_object* v___x_572_; lean_object* v___f_573_; 
v___f_571_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0, &l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0);
v___x_572_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9, &l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9_once, _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9);
v___f_573_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__2), 4, 2);
lean_closure_set(v___f_573_, 0, v___x_572_);
lean_closure_set(v___f_573_, 1, v___f_571_);
return v___f_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg(lean_object* v_inst_574_, lean_object* v_inst_575_, lean_object* v_data_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_){
_start:
{
lean_object* v___x_582_; lean_object* v_toApplicative_583_; lean_object* v_toFunctor_584_; lean_object* v_toSeq_585_; lean_object* v_toSeqLeft_586_; lean_object* v_toSeqRight_587_; lean_object* v___f_588_; lean_object* v___f_589_; lean_object* v___f_590_; lean_object* v___f_591_; lean_object* v___x_592_; lean_object* v___f_593_; lean_object* v___f_594_; lean_object* v___f_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v_toApplicative_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_678_; 
v___x_582_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_583_ = lean_ctor_get(v___x_582_, 0);
v_toFunctor_584_ = lean_ctor_get(v_toApplicative_583_, 0);
v_toSeq_585_ = lean_ctor_get(v_toApplicative_583_, 2);
v_toSeqLeft_586_ = lean_ctor_get(v_toApplicative_583_, 3);
v_toSeqRight_587_ = lean_ctor_get(v_toApplicative_583_, 4);
v___f_588_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2);
v___f_589_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3);
lean_inc_ref_n(v_toFunctor_584_, 2);
v___f_590_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_590_, 0, v_toFunctor_584_);
v___f_591_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_591_, 0, v_toFunctor_584_);
v___x_592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_592_, 0, v___f_590_);
lean_ctor_set(v___x_592_, 1, v___f_591_);
lean_inc(v_toSeqRight_587_);
v___f_593_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_593_, 0, v_toSeqRight_587_);
lean_inc(v_toSeqLeft_586_);
v___f_594_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_594_, 0, v_toSeqLeft_586_);
lean_inc(v_toSeq_585_);
v___f_595_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_595_, 0, v_toSeq_585_);
v___x_596_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_596_, 0, v___x_592_);
lean_ctor_set(v___x_596_, 1, v___f_588_);
lean_ctor_set(v___x_596_, 2, v___f_595_);
lean_ctor_set(v___x_596_, 3, v___f_594_);
lean_ctor_set(v___x_596_, 4, v___f_593_);
v___x_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_596_);
lean_ctor_set(v___x_597_, 1, v___f_589_);
v___x_598_ = l_StateRefT_x27_instMonad___redArg(v___x_597_);
v_toApplicative_599_ = lean_ctor_get(v___x_598_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_598_);
if (v_isSharedCheck_678_ == 0)
{
lean_object* v_unused_679_; 
v_unused_679_ = lean_ctor_get(v___x_598_, 1);
lean_dec(v_unused_679_);
v___x_601_ = v___x_598_;
v_isShared_602_ = v_isSharedCheck_678_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_toApplicative_599_);
lean_dec(v___x_598_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_678_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v_toFunctor_603_; lean_object* v_toSeq_604_; lean_object* v_toSeqLeft_605_; lean_object* v_toSeqRight_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_676_; 
v_toFunctor_603_ = lean_ctor_get(v_toApplicative_599_, 0);
v_toSeq_604_ = lean_ctor_get(v_toApplicative_599_, 2);
v_toSeqLeft_605_ = lean_ctor_get(v_toApplicative_599_, 3);
v_toSeqRight_606_ = lean_ctor_get(v_toApplicative_599_, 4);
v_isSharedCheck_676_ = !lean_is_exclusive(v_toApplicative_599_);
if (v_isSharedCheck_676_ == 0)
{
lean_object* v_unused_677_; 
v_unused_677_ = lean_ctor_get(v_toApplicative_599_, 1);
lean_dec(v_unused_677_);
v___x_608_ = v_toApplicative_599_;
v_isShared_609_ = v_isSharedCheck_676_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_toSeqRight_606_);
lean_inc(v_toSeqLeft_605_);
lean_inc(v_toSeq_604_);
lean_inc(v_toFunctor_603_);
lean_dec(v_toApplicative_599_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_676_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___f_610_; lean_object* v___f_611_; lean_object* v___f_612_; lean_object* v___f_613_; lean_object* v___f_614_; lean_object* v___x_615_; lean_object* v___f_616_; lean_object* v___f_617_; lean_object* v___f_618_; lean_object* v___x_620_; 
v___f_610_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_610_, 0, v_inst_574_);
lean_closure_set(v___f_610_, 1, v_inst_575_);
v___f_611_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4);
v___f_612_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5);
lean_inc_ref(v_toFunctor_603_);
v___f_613_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_613_, 0, v_toFunctor_603_);
v___f_614_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_614_, 0, v_toFunctor_603_);
v___x_615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_615_, 0, v___f_613_);
lean_ctor_set(v___x_615_, 1, v___f_614_);
v___f_616_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_616_, 0, v_toSeqRight_606_);
v___f_617_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_617_, 0, v_toSeqLeft_605_);
v___f_618_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_618_, 0, v_toSeq_604_);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 4, v___f_616_);
lean_ctor_set(v___x_608_, 3, v___f_617_);
lean_ctor_set(v___x_608_, 2, v___f_618_);
lean_ctor_set(v___x_608_, 1, v___f_611_);
lean_ctor_set(v___x_608_, 0, v___x_615_);
v___x_620_ = v___x_608_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v___x_615_);
lean_ctor_set(v_reuseFailAlloc_675_, 1, v___f_611_);
lean_ctor_set(v_reuseFailAlloc_675_, 2, v___f_618_);
lean_ctor_set(v_reuseFailAlloc_675_, 3, v___f_617_);
lean_ctor_set(v_reuseFailAlloc_675_, 4, v___f_616_);
v___x_620_ = v_reuseFailAlloc_675_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
lean_object* v___x_622_; 
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 1, v___f_612_);
lean_ctor_set(v___x_601_, 0, v___x_620_);
v___x_622_ = v___x_601_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v___x_620_);
lean_ctor_set(v_reuseFailAlloc_674_, 1, v___f_612_);
v___x_622_ = v_reuseFailAlloc_674_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v_map_632_; size_t v_sz_633_; size_t v___x_634_; lean_object* v___x_747__overap_635_; lean_object* v___x_636_; 
v___x_623_ = lean_array_get_size(v_data_576_);
v___x_624_ = lean_unsigned_to_nat(0u);
v___x_625_ = lean_unsigned_to_nat(4u);
v___x_626_ = lean_nat_mul(v___x_623_, v___x_625_);
v___x_627_ = lean_unsigned_to_nat(3u);
v___x_628_ = lean_nat_div(v___x_626_, v___x_627_);
lean_dec(v___x_626_);
v___x_629_ = l_Nat_nextPowerOfTwo(v___x_628_);
lean_dec(v___x_628_);
v___x_630_ = lean_box(0);
v___x_631_ = lean_mk_array(v___x_629_, v___x_630_);
v_map_632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_map_632_, 0, v___x_624_);
lean_ctor_set(v_map_632_, 1, v___x_631_);
v_sz_633_ = lean_array_size(v_data_576_);
v___x_634_ = ((size_t)0ULL);
v___x_747__overap_635_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_622_, v_data_576_, v___f_610_, v_sz_633_, v___x_634_, v_map_632_);
lean_inc(v_a_580_);
lean_inc_ref(v_a_579_);
lean_inc(v_a_578_);
lean_inc_ref(v_a_577_);
v___x_636_ = lean_apply_5(v___x_747__overap_635_, v_a_577_, v_a_578_, v_a_579_, v_a_580_, lean_box(0));
if (lean_obj_tag(v___x_636_) == 0)
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_665_; 
v_a_637_ = lean_ctor_get(v___x_636_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v___x_636_);
if (v_isSharedCheck_665_ == 0)
{
v___x_639_ = v___x_636_;
v_isShared_640_ = v_isSharedCheck_665_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___x_636_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_665_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v_size_641_; lean_object* v_buckets_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; uint8_t v___x_646_; 
v_size_641_ = lean_ctor_get(v_a_637_, 0);
lean_inc(v_size_641_);
v_buckets_642_ = lean_ctor_get(v_a_637_, 1);
lean_inc_ref(v_buckets_642_);
lean_dec(v_a_637_);
v___x_643_ = lean_mk_empty_array_with_capacity(v_size_641_);
lean_dec(v_size_641_);
v___x_644_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9, &l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9_once, _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9);
v___x_645_ = lean_array_get_size(v_buckets_642_);
v___x_646_ = lean_nat_dec_lt(v___x_624_, v___x_645_);
if (v___x_646_ == 0)
{
lean_object* v___x_648_; 
lean_dec_ref(v_buckets_642_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 0, v___x_643_);
v___x_648_ = v___x_639_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v___x_643_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
else
{
lean_object* v___f_650_; uint8_t v___x_651_; 
v___f_650_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1);
v___x_651_ = lean_nat_dec_le(v___x_645_, v___x_645_);
if (v___x_651_ == 0)
{
if (v___x_646_ == 0)
{
lean_object* v___x_653_; 
lean_dec_ref(v_buckets_642_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 0, v___x_643_);
v___x_653_ = v___x_639_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v___x_643_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
else
{
size_t v___x_655_; lean_object* v___x_656_; lean_object* v___x_658_; 
v___x_655_ = lean_usize_of_nat(v___x_645_);
v___x_656_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_644_, v___f_650_, v_buckets_642_, v___x_634_, v___x_655_, v___x_643_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 0, v___x_656_);
v___x_658_ = v___x_639_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v___x_656_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
else
{
size_t v___x_660_; lean_object* v___x_661_; lean_object* v___x_663_; 
v___x_660_ = lean_usize_of_nat(v___x_645_);
v___x_661_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_644_, v___f_650_, v_buckets_642_, v___x_634_, v___x_660_, v___x_643_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 0, v___x_661_);
v___x_663_ = v___x_639_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v___x_661_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
return v___x_663_;
}
}
}
}
}
else
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_673_; 
v_a_666_ = lean_ctor_get(v___x_636_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_636_);
if (v_isSharedCheck_673_ == 0)
{
v___x_668_ = v___x_636_;
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___x_636_);
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
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___boxed(lean_object* v_inst_680_, lean_object* v_inst_681_, lean_object* v_data_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg(v_inst_680_, v_inst_681_, v_data_682_, v_a_683_, v_a_684_, v_a_685_, v_a_686_);
lean_dec(v_a_686_);
lean_dec_ref(v_a_685_);
lean_dec(v_a_684_);
lean_dec_ref(v_a_683_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique(lean_object* v_00_u03b1_689_, lean_object* v_inst_690_, lean_object* v_inst_691_, lean_object* v_inst_692_, lean_object* v_data_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_){
_start:
{
lean_object* v___x_699_; 
v___x_699_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg(v_inst_691_, v_inst_692_, v_data_693_, v_a_694_, v_a_695_, v_a_696_, v_a_697_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___boxed(lean_object* v_00_u03b1_700_, lean_object* v_inst_701_, lean_object* v_inst_702_, lean_object* v_inst_703_, lean_object* v_data_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l_Lean_Compiler_LCNF_Probe_countUnique(v_00_u03b1_700_, v_inst_701_, v_inst_702_, v_inst_703_, v_data_704_, v_a_705_, v_a_706_, v_a_707_, v_a_708_);
lean_dec(v_a_708_);
lean_dec_ref(v_a_707_);
lean_dec(v_a_706_);
lean_dec_ref(v_a_705_);
lean_dec_ref(v_inst_701_);
return v_res_710_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0(lean_object* v_l_711_, lean_object* v_r_712_){
_start:
{
lean_object* v_snd_713_; lean_object* v_snd_714_; uint8_t v___x_715_; 
v_snd_713_ = lean_ctor_get(v_l_711_, 1);
v_snd_714_ = lean_ctor_get(v_r_712_, 1);
v___x_715_ = lean_nat_dec_lt(v_snd_713_, v_snd_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0___boxed(lean_object* v_l_716_, lean_object* v_r_717_){
_start:
{
uint8_t v_res_718_; lean_object* v_r_719_; 
v_res_718_ = l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0(v_l_716_, v_r_717_);
lean_dec_ref(v_r_717_);
lean_dec_ref(v_l_716_);
v_r_719_ = lean_box(v_res_718_);
return v_r_719_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0(void){
_start:
{
lean_object* v___f_720_; 
v___f_720_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0___boxed), 2, 0);
return v___f_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg(lean_object* v_inst_721_, lean_object* v_inst_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_){
_start:
{
lean_object* v___x_729_; 
v___x_729_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg(v_inst_721_, v_inst_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
if (lean_obj_tag(v___x_729_) == 0)
{
lean_object* v_a_730_; lean_object* v___x_731_; lean_object* v___x_732_; uint8_t v___x_733_; 
v_a_730_ = lean_ctor_get(v___x_729_, 0);
lean_inc(v_a_730_);
v___x_731_ = lean_array_get_size(v_a_730_);
v___x_732_ = lean_unsigned_to_nat(0u);
v___x_733_ = lean_nat_dec_eq(v___x_731_, v___x_732_);
if (v___x_733_ == 0)
{
lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_751_; 
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_751_ == 0)
{
lean_object* v_unused_752_; 
v_unused_752_ = lean_ctor_get(v___x_729_, 0);
lean_dec(v_unused_752_);
v___x_735_ = v___x_729_;
v_isShared_736_ = v_isSharedCheck_751_;
goto v_resetjp_734_;
}
else
{
lean_dec(v___x_729_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_751_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___f_737_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___y_748_; uint8_t v___x_750_; 
v___f_737_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0, &l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0);
v___x_745_ = lean_unsigned_to_nat(1u);
v___x_746_ = lean_nat_sub(v___x_731_, v___x_745_);
v___x_750_ = lean_nat_dec_le(v___x_732_, v___x_746_);
if (v___x_750_ == 0)
{
lean_inc(v___x_746_);
v___y_748_ = v___x_746_;
goto v___jp_747_;
}
else
{
v___y_748_ = v___x_732_;
goto v___jp_747_;
}
v___jp_738_:
{
lean_object* v___x_741_; lean_object* v___x_743_; 
v___x_741_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_737_, v___x_731_, v_a_730_, v___y_739_, v___y_740_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_740_);
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 0, v___x_741_);
v___x_743_ = v___x_735_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_741_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
v___jp_747_:
{
uint8_t v___x_749_; 
v___x_749_ = lean_nat_dec_le(v___y_748_, v___x_746_);
if (v___x_749_ == 0)
{
lean_dec(v___x_746_);
lean_inc(v___y_748_);
v___y_739_ = v___y_748_;
v___y_740_ = v___y_748_;
goto v___jp_738_;
}
else
{
v___y_739_ = v___y_748_;
v___y_740_ = v___x_746_;
goto v___jp_738_;
}
}
}
}
else
{
lean_dec(v_a_730_);
return v___x_729_;
}
}
else
{
return v___x_729_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___boxed(lean_object* v_inst_753_, lean_object* v_inst_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg(v_inst_753_, v_inst_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_);
lean_dec(v_a_759_);
lean_dec_ref(v_a_758_);
lean_dec(v_a_757_);
lean_dec_ref(v_a_756_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted(lean_object* v_00_u03b1_762_, lean_object* v_inst_763_, lean_object* v_inst_764_, lean_object* v_inst_765_, lean_object* v_inst_766_, lean_object* v_a_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_){
_start:
{
lean_object* v___x_773_; 
v___x_773_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg(v_inst_764_, v_inst_765_, v_a_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_object* v_a_774_; lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; 
v_a_774_ = lean_ctor_get(v___x_773_, 0);
lean_inc(v_a_774_);
v___x_775_ = lean_array_get_size(v_a_774_);
v___x_776_ = lean_unsigned_to_nat(0u);
v___x_777_ = lean_nat_dec_eq(v___x_775_, v___x_776_);
if (v___x_777_ == 0)
{
lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_795_; 
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_795_ == 0)
{
lean_object* v_unused_796_; 
v_unused_796_ = lean_ctor_get(v___x_773_, 0);
lean_dec(v_unused_796_);
v___x_779_ = v___x_773_;
v_isShared_780_ = v_isSharedCheck_795_;
goto v_resetjp_778_;
}
else
{
lean_dec(v___x_773_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_795_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___f_781_; lean_object* v___y_783_; lean_object* v___y_784_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___y_792_; uint8_t v___x_794_; 
v___f_781_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0, &l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0);
v___x_789_ = lean_unsigned_to_nat(1u);
v___x_790_ = lean_nat_sub(v___x_775_, v___x_789_);
v___x_794_ = lean_nat_dec_le(v___x_776_, v___x_790_);
if (v___x_794_ == 0)
{
lean_inc(v___x_790_);
v___y_792_ = v___x_790_;
goto v___jp_791_;
}
else
{
v___y_792_ = v___x_776_;
goto v___jp_791_;
}
v___jp_782_:
{
lean_object* v___x_785_; lean_object* v___x_787_; 
v___x_785_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_781_, v___x_775_, v_a_774_, v___y_783_, v___y_784_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_784_);
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 0, v___x_785_);
v___x_787_ = v___x_779_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_785_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
v___jp_791_:
{
uint8_t v___x_793_; 
v___x_793_ = lean_nat_dec_le(v___y_792_, v___x_790_);
if (v___x_793_ == 0)
{
lean_dec(v___x_790_);
lean_inc(v___y_792_);
v___y_783_ = v___y_792_;
v___y_784_ = v___y_792_;
goto v___jp_782_;
}
else
{
v___y_783_ = v___y_792_;
v___y_784_ = v___x_790_;
goto v___jp_782_;
}
}
}
}
else
{
lean_dec(v_a_774_);
return v___x_773_;
}
}
else
{
return v___x_773_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___boxed(lean_object* v_00_u03b1_797_, lean_object* v_inst_798_, lean_object* v_inst_799_, lean_object* v_inst_800_, lean_object* v_inst_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l_Lean_Compiler_LCNF_Probe_countUniqueSorted(v_00_u03b1_797_, v_inst_798_, v_inst_799_, v_inst_800_, v_inst_801_, v_a_802_, v_a_803_, v_a_804_, v_a_805_, v_a_806_);
lean_dec(v_a_806_);
lean_dec_ref(v_a_805_);
lean_dec(v_a_804_);
lean_dec_ref(v_a_803_);
lean_dec(v_inst_801_);
lean_dec_ref(v_inst_798_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(uint8_t v_pu_809_, lean_object* v_c_810_, lean_object* v_a_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_){
_start:
{
switch(lean_obj_tag(v_c_810_))
{
case 0:
{
lean_object* v_decl_817_; lean_object* v_k_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v_value_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v_decl_817_ = lean_ctor_get(v_c_810_, 0);
lean_inc_ref(v_decl_817_);
v_k_818_ = lean_ctor_get(v_c_810_, 1);
lean_inc_ref(v_k_818_);
lean_dec_ref(v_c_810_);
v___x_819_ = lean_st_ref_get(v_a_815_);
lean_dec(v___x_819_);
v___x_820_ = lean_st_ref_take(v_a_811_);
v_value_821_ = lean_ctor_get(v_decl_817_, 3);
lean_inc(v_value_821_);
lean_dec_ref(v_decl_817_);
v___x_822_ = lean_array_push(v___x_820_, v_value_821_);
v___x_823_ = lean_st_ref_set(v_a_811_, v___x_822_);
v_c_810_ = v_k_818_;
goto _start;
}
case 1:
{
lean_object* v_decl_825_; lean_object* v_k_826_; lean_object* v_value_827_; lean_object* v___x_828_; 
v_decl_825_ = lean_ctor_get(v_c_810_, 0);
lean_inc_ref(v_decl_825_);
v_k_826_ = lean_ctor_get(v_c_810_, 1);
lean_inc_ref(v_k_826_);
lean_dec_ref(v_c_810_);
v_value_827_ = lean_ctor_get(v_decl_825_, 4);
lean_inc_ref(v_value_827_);
lean_dec_ref(v_decl_825_);
v___x_828_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(v_pu_809_, v_value_827_, v_a_811_, v_a_812_, v_a_813_, v_a_814_, v_a_815_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_dec_ref(v___x_828_);
v_c_810_ = v_k_826_;
goto _start;
}
else
{
lean_dec_ref(v_k_826_);
return v___x_828_;
}
}
case 2:
{
lean_object* v_decl_830_; lean_object* v_k_831_; lean_object* v_value_832_; lean_object* v___x_833_; 
v_decl_830_ = lean_ctor_get(v_c_810_, 0);
lean_inc_ref(v_decl_830_);
v_k_831_ = lean_ctor_get(v_c_810_, 1);
lean_inc_ref(v_k_831_);
lean_dec_ref(v_c_810_);
v_value_832_ = lean_ctor_get(v_decl_830_, 4);
lean_inc_ref(v_value_832_);
lean_dec_ref(v_decl_830_);
v___x_833_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(v_pu_809_, v_value_832_, v_a_811_, v_a_812_, v_a_813_, v_a_814_, v_a_815_);
if (lean_obj_tag(v___x_833_) == 0)
{
lean_dec_ref(v___x_833_);
v_c_810_ = v_k_831_;
goto _start;
}
else
{
lean_dec_ref(v_k_831_);
return v___x_833_;
}
}
case 4:
{
lean_object* v_cases_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_857_; 
v_cases_835_ = lean_ctor_get(v_c_810_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v_c_810_);
if (v_isSharedCheck_857_ == 0)
{
v___x_837_ = v_c_810_;
v_isShared_838_ = v_isSharedCheck_857_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_cases_835_);
lean_dec(v_c_810_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_857_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v_alts_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; uint8_t v___x_843_; 
v_alts_839_ = lean_ctor_get(v_cases_835_, 3);
lean_inc_ref(v_alts_839_);
lean_dec_ref(v_cases_835_);
v___x_840_ = lean_unsigned_to_nat(0u);
v___x_841_ = lean_array_get_size(v_alts_839_);
v___x_842_ = lean_box(0);
v___x_843_ = lean_nat_dec_lt(v___x_840_, v___x_841_);
if (v___x_843_ == 0)
{
lean_object* v___x_845_; 
lean_dec_ref(v_alts_839_);
if (v_isShared_838_ == 0)
{
lean_ctor_set_tag(v___x_837_, 0);
lean_ctor_set(v___x_837_, 0, v___x_842_);
v___x_845_ = v___x_837_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_842_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
else
{
uint8_t v___x_847_; 
v___x_847_ = lean_nat_dec_le(v___x_841_, v___x_841_);
if (v___x_847_ == 0)
{
if (v___x_843_ == 0)
{
lean_object* v___x_849_; 
lean_dec_ref(v_alts_839_);
if (v_isShared_838_ == 0)
{
lean_ctor_set_tag(v___x_837_, 0);
lean_ctor_set(v___x_837_, 0, v___x_842_);
v___x_849_ = v___x_837_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v___x_842_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
return v___x_849_;
}
}
else
{
size_t v___x_851_; size_t v___x_852_; lean_object* v___x_853_; 
lean_del_object(v___x_837_);
v___x_851_ = ((size_t)0ULL);
v___x_852_ = lean_usize_of_nat(v___x_841_);
v___x_853_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(v_pu_809_, v_alts_839_, v___x_851_, v___x_852_, v___x_842_, v_a_811_, v_a_812_, v_a_813_, v_a_814_, v_a_815_);
lean_dec_ref(v_alts_839_);
return v___x_853_;
}
}
else
{
size_t v___x_854_; size_t v___x_855_; lean_object* v___x_856_; 
lean_del_object(v___x_837_);
v___x_854_ = ((size_t)0ULL);
v___x_855_ = lean_usize_of_nat(v___x_841_);
v___x_856_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(v_pu_809_, v_alts_839_, v___x_854_, v___x_855_, v___x_842_, v_a_811_, v_a_812_, v_a_813_, v_a_814_, v_a_815_);
lean_dec_ref(v_alts_839_);
return v___x_856_;
}
}
}
}
case 7:
{
lean_object* v_k_858_; 
v_k_858_ = lean_ctor_get(v_c_810_, 3);
lean_inc_ref(v_k_858_);
lean_dec_ref(v_c_810_);
v_c_810_ = v_k_858_;
goto _start;
}
case 8:
{
lean_object* v_k_860_; 
v_k_860_ = lean_ctor_get(v_c_810_, 3);
lean_inc_ref(v_k_860_);
lean_dec_ref(v_c_810_);
v_c_810_ = v_k_860_;
goto _start;
}
case 9:
{
lean_object* v_k_862_; 
v_k_862_ = lean_ctor_get(v_c_810_, 5);
lean_inc_ref(v_k_862_);
lean_dec_ref(v_c_810_);
v_c_810_ = v_k_862_;
goto _start;
}
case 10:
{
lean_object* v_k_864_; 
v_k_864_ = lean_ctor_get(v_c_810_, 2);
lean_inc_ref(v_k_864_);
lean_dec_ref(v_c_810_);
v_c_810_ = v_k_864_;
goto _start;
}
case 11:
{
lean_object* v_k_866_; 
v_k_866_ = lean_ctor_get(v_c_810_, 2);
lean_inc_ref(v_k_866_);
lean_dec_ref(v_c_810_);
v_c_810_ = v_k_866_;
goto _start;
}
case 12:
{
lean_object* v_k_868_; 
v_k_868_ = lean_ctor_get(v_c_810_, 2);
lean_inc_ref(v_k_868_);
lean_dec_ref(v_c_810_);
v_c_810_ = v_k_868_;
goto _start;
}
case 13:
{
lean_object* v_k_870_; 
v_k_870_ = lean_ctor_get(v_c_810_, 1);
lean_inc_ref(v_k_870_);
lean_dec_ref(v_c_810_);
v_c_810_ = v_k_870_;
goto _start;
}
default: 
{
lean_object* v___x_872_; lean_object* v___x_873_; 
lean_dec_ref(v_c_810_);
v___x_872_ = lean_box(0);
v___x_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
return v___x_873_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(uint8_t v_pu_874_, lean_object* v_as_875_, size_t v_i_876_, size_t v_stop_877_, lean_object* v_b_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_){
_start:
{
lean_object* v___y_886_; uint8_t v___x_892_; 
v___x_892_ = lean_usize_dec_eq(v_i_876_, v_stop_877_);
if (v___x_892_ == 0)
{
lean_object* v___x_893_; 
v___x_893_ = lean_array_uget_borrowed(v_as_875_, v_i_876_);
switch(lean_obj_tag(v___x_893_))
{
case 0:
{
lean_object* v_code_894_; 
v_code_894_ = lean_ctor_get(v___x_893_, 2);
lean_inc_ref(v_code_894_);
v___y_886_ = v_code_894_;
goto v___jp_885_;
}
case 1:
{
lean_object* v_code_895_; 
v_code_895_ = lean_ctor_get(v___x_893_, 1);
lean_inc_ref(v_code_895_);
v___y_886_ = v_code_895_;
goto v___jp_885_;
}
default: 
{
lean_object* v_code_896_; 
v_code_896_ = lean_ctor_get(v___x_893_, 0);
lean_inc_ref(v_code_896_);
v___y_886_ = v_code_896_;
goto v___jp_885_;
}
}
}
else
{
lean_object* v___x_897_; 
v___x_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_897_, 0, v_b_878_);
return v___x_897_;
}
v___jp_885_:
{
lean_object* v___x_887_; 
v___x_887_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(v_pu_874_, v___y_886_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v_a_888_; size_t v___x_889_; size_t v___x_890_; 
v_a_888_ = lean_ctor_get(v___x_887_, 0);
lean_inc(v_a_888_);
lean_dec_ref(v___x_887_);
v___x_889_ = ((size_t)1ULL);
v___x_890_ = lean_usize_add(v_i_876_, v___x_889_);
v_i_876_ = v___x_890_;
v_b_878_ = v_a_888_;
goto _start;
}
else
{
return v___x_887_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0___boxed(lean_object* v_pu_898_, lean_object* v_as_899_, lean_object* v_i_900_, lean_object* v_stop_901_, lean_object* v_b_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_){
_start:
{
uint8_t v_pu_boxed_909_; size_t v_i_boxed_910_; size_t v_stop_boxed_911_; lean_object* v_res_912_; 
v_pu_boxed_909_ = lean_unbox(v_pu_898_);
v_i_boxed_910_ = lean_unbox_usize(v_i_900_);
lean_dec(v_i_900_);
v_stop_boxed_911_ = lean_unbox_usize(v_stop_901_);
lean_dec(v_stop_901_);
v_res_912_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(v_pu_boxed_909_, v_as_899_, v_i_boxed_910_, v_stop_boxed_911_, v_b_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_, v___y_907_);
lean_dec(v___y_907_);
lean_dec_ref(v___y_906_);
lean_dec(v___y_905_);
lean_dec_ref(v___y_904_);
lean_dec(v___y_903_);
lean_dec_ref(v_as_899_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go___boxed(lean_object* v_pu_913_, lean_object* v_c_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_){
_start:
{
uint8_t v_pu_boxed_921_; lean_object* v_res_922_; 
v_pu_boxed_921_ = lean_unbox(v_pu_913_);
v_res_922_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(v_pu_boxed_921_, v_c_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_);
lean_dec(v_a_919_);
lean_dec_ref(v_a_918_);
lean_dec(v_a_917_);
lean_dec_ref(v_a_916_);
lean_dec(v_a_915_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(lean_object* v_f_923_, lean_object* v_v_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
if (lean_obj_tag(v_v_924_) == 0)
{
lean_object* v_code_931_; lean_object* v___x_932_; 
v_code_931_ = lean_ctor_get(v_v_924_, 0);
lean_inc_ref(v_code_931_);
lean_dec_ref(v_v_924_);
lean_inc(v___y_929_);
lean_inc_ref(v___y_928_);
lean_inc(v___y_927_);
lean_inc_ref(v___y_926_);
lean_inc(v___y_925_);
v___x_932_ = lean_apply_7(v_f_923_, v_code_931_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, lean_box(0));
return v___x_932_;
}
else
{
lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_940_; 
lean_dec_ref(v_f_923_);
v_isSharedCheck_940_ = !lean_is_exclusive(v_v_924_);
if (v_isSharedCheck_940_ == 0)
{
lean_object* v_unused_941_; 
v_unused_941_ = lean_ctor_get(v_v_924_, 0);
lean_dec(v_unused_941_);
v___x_934_ = v_v_924_;
v_isShared_935_ = v_isSharedCheck_940_;
goto v_resetjp_933_;
}
else
{
lean_dec(v_v_924_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_940_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_936_; lean_object* v___x_938_; 
v___x_936_ = lean_box(0);
if (v_isShared_935_ == 0)
{
lean_ctor_set_tag(v___x_934_, 0);
lean_ctor_set(v___x_934_, 0, v___x_936_);
v___x_938_ = v___x_934_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v___x_936_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
return v___x_938_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg___boxed(lean_object* v_f_942_, lean_object* v_v_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_){
_start:
{
lean_object* v_res_950_; 
v_res_950_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(v_f_942_, v_v_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_, v___y_948_);
lean_dec(v___y_948_);
lean_dec_ref(v___y_947_);
lean_dec(v___y_946_);
lean_dec_ref(v___y_945_);
lean_dec(v___y_944_);
return v_res_950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0(uint8_t v_pu_951_, lean_object* v_f_952_, lean_object* v_v_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_){
_start:
{
lean_object* v___x_960_; 
v___x_960_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(v_f_952_, v_v_953_, v___y_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___boxed(lean_object* v_pu_961_, lean_object* v_f_962_, lean_object* v_v_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_){
_start:
{
uint8_t v_pu_boxed_970_; lean_object* v_res_971_; 
v_pu_boxed_970_ = lean_unbox(v_pu_961_);
v_res_971_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0(v_pu_boxed_970_, v_f_962_, v_v_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_);
lean_dec(v___y_968_);
lean_dec_ref(v___y_967_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
lean_dec(v___y_964_);
return v_res_971_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(uint8_t v_pu_972_, lean_object* v_as_973_, size_t v_i_974_, size_t v_stop_975_, lean_object* v_b_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_){
_start:
{
uint8_t v___x_983_; 
v___x_983_ = lean_usize_dec_eq(v_i_974_, v_stop_975_);
if (v___x_983_ == 0)
{
lean_object* v___x_984_; lean_object* v_value_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_984_ = lean_array_uget_borrowed(v_as_973_, v_i_974_);
v_value_985_ = lean_ctor_get(v___x_984_, 1);
v___x_986_ = lean_box(v_pu_972_);
v___x_987_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go___boxed), 8, 1);
lean_closure_set(v___x_987_, 0, v___x_986_);
lean_inc_ref(v_value_985_);
v___x_988_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(v___x_987_, v_value_985_, v___y_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_);
if (lean_obj_tag(v___x_988_) == 0)
{
lean_object* v_a_989_; size_t v___x_990_; size_t v___x_991_; 
v_a_989_ = lean_ctor_get(v___x_988_, 0);
lean_inc(v_a_989_);
lean_dec_ref(v___x_988_);
v___x_990_ = ((size_t)1ULL);
v___x_991_ = lean_usize_add(v_i_974_, v___x_990_);
v_i_974_ = v___x_991_;
v_b_976_ = v_a_989_;
goto _start;
}
else
{
return v___x_988_;
}
}
else
{
lean_object* v___x_993_; 
v___x_993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_993_, 0, v_b_976_);
return v___x_993_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1___boxed(lean_object* v_pu_994_, lean_object* v_as_995_, lean_object* v_i_996_, lean_object* v_stop_997_, lean_object* v_b_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
uint8_t v_pu_boxed_1005_; size_t v_i_boxed_1006_; size_t v_stop_boxed_1007_; lean_object* v_res_1008_; 
v_pu_boxed_1005_ = lean_unbox(v_pu_994_);
v_i_boxed_1006_ = lean_unbox_usize(v_i_996_);
lean_dec(v_i_996_);
v_stop_boxed_1007_ = lean_unbox_usize(v_stop_997_);
lean_dec(v_stop_997_);
v_res_1008_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(v_pu_boxed_1005_, v_as_995_, v_i_boxed_1006_, v_stop_boxed_1007_, v_b_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec_ref(v___y_1000_);
lean_dec(v___y_999_);
lean_dec_ref(v_as_995_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start(uint8_t v_pu_1009_, lean_object* v_decls_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_){
_start:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; uint8_t v___x_1020_; 
v___x_1017_ = lean_unsigned_to_nat(0u);
v___x_1018_ = lean_array_get_size(v_decls_1010_);
v___x_1019_ = lean_box(0);
v___x_1020_ = lean_nat_dec_lt(v___x_1017_, v___x_1018_);
if (v___x_1020_ == 0)
{
lean_object* v___x_1021_; 
v___x_1021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1021_, 0, v___x_1019_);
return v___x_1021_;
}
else
{
uint8_t v___x_1022_; 
v___x_1022_ = lean_nat_dec_le(v___x_1018_, v___x_1018_);
if (v___x_1022_ == 0)
{
if (v___x_1020_ == 0)
{
lean_object* v___x_1023_; 
v___x_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1019_);
return v___x_1023_;
}
else
{
size_t v___x_1024_; size_t v___x_1025_; lean_object* v___x_1026_; 
v___x_1024_ = ((size_t)0ULL);
v___x_1025_ = lean_usize_of_nat(v___x_1018_);
v___x_1026_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(v_pu_1009_, v_decls_1010_, v___x_1024_, v___x_1025_, v___x_1019_, v_a_1011_, v_a_1012_, v_a_1013_, v_a_1014_, v_a_1015_);
return v___x_1026_;
}
}
else
{
size_t v___x_1027_; size_t v___x_1028_; lean_object* v___x_1029_; 
v___x_1027_ = ((size_t)0ULL);
v___x_1028_ = lean_usize_of_nat(v___x_1018_);
v___x_1029_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(v_pu_1009_, v_decls_1010_, v___x_1027_, v___x_1028_, v___x_1019_, v_a_1011_, v_a_1012_, v_a_1013_, v_a_1014_, v_a_1015_);
return v___x_1029_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start___boxed(lean_object* v_pu_1030_, lean_object* v_decls_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_){
_start:
{
uint8_t v_pu_boxed_1038_; lean_object* v_res_1039_; 
v_pu_boxed_1038_ = lean_unbox(v_pu_1030_);
v_res_1039_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start(v_pu_boxed_1038_, v_decls_1031_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_);
lean_dec(v_a_1036_);
lean_dec_ref(v_a_1035_);
lean_dec(v_a_1034_);
lean_dec_ref(v_a_1033_);
lean_dec(v_a_1032_);
lean_dec_ref(v_decls_1031_);
return v_res_1039_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0(void){
_start:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1040_ = lean_unsigned_to_nat(0u);
v___x_1041_ = lean_mk_empty_array_with_capacity(v___x_1040_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues(uint8_t v_pu_1042_, lean_object* v_decls_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_){
_start:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1049_ = lean_st_ref_get(v_a_1047_);
lean_dec(v___x_1049_);
v___x_1050_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0, &l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0);
v___x_1051_ = lean_st_mk_ref(v___x_1050_);
v___x_1052_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start(v_pu_1042_, v_decls_1043_, v___x_1051_, v_a_1044_, v_a_1045_, v_a_1046_, v_a_1047_);
if (lean_obj_tag(v___x_1052_) == 0)
{
lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1061_; 
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1052_);
if (v_isSharedCheck_1061_ == 0)
{
lean_object* v_unused_1062_; 
v_unused_1062_ = lean_ctor_get(v___x_1052_, 0);
lean_dec(v_unused_1062_);
v___x_1054_ = v___x_1052_;
v_isShared_1055_ = v_isSharedCheck_1061_;
goto v_resetjp_1053_;
}
else
{
lean_dec(v___x_1052_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1061_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1059_; 
v___x_1056_ = lean_st_ref_get(v_a_1047_);
lean_dec(v___x_1056_);
v___x_1057_ = lean_st_ref_get(v___x_1051_);
lean_dec(v___x_1051_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 0, v___x_1057_);
v___x_1059_ = v___x_1054_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v___x_1057_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
else
{
lean_object* v_a_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1070_; 
lean_dec(v___x_1051_);
v_a_1063_ = lean_ctor_get(v___x_1052_, 0);
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1052_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1065_ = v___x_1052_;
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_a_1063_);
lean_dec(v___x_1052_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1068_; 
if (v_isShared_1066_ == 0)
{
v___x_1068_ = v___x_1065_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_a_1063_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues___boxed(lean_object* v_pu_1071_, lean_object* v_decls_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_){
_start:
{
uint8_t v_pu_boxed_1078_; lean_object* v_res_1079_; 
v_pu_boxed_1078_ = lean_unbox(v_pu_1071_);
v_res_1079_ = l_Lean_Compiler_LCNF_Probe_getLetValues(v_pu_boxed_1078_, v_decls_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_);
lean_dec(v_a_1076_);
lean_dec_ref(v_a_1075_);
lean_dec(v_a_1074_);
lean_dec_ref(v_a_1073_);
lean_dec_ref(v_decls_1072_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(uint8_t v_pu_1080_, lean_object* v_code_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_){
_start:
{
switch(lean_obj_tag(v_code_1081_))
{
case 0:
{
lean_object* v_k_1088_; 
v_k_1088_ = lean_ctor_get(v_code_1081_, 1);
lean_inc_ref(v_k_1088_);
lean_dec_ref(v_code_1081_);
v_code_1081_ = v_k_1088_;
goto _start;
}
case 1:
{
lean_object* v_decl_1090_; lean_object* v_k_1091_; lean_object* v_value_1092_; lean_object* v___x_1093_; 
v_decl_1090_ = lean_ctor_get(v_code_1081_, 0);
lean_inc_ref(v_decl_1090_);
v_k_1091_ = lean_ctor_get(v_code_1081_, 1);
lean_inc_ref(v_k_1091_);
lean_dec_ref(v_code_1081_);
v_value_1092_ = lean_ctor_get(v_decl_1090_, 4);
lean_inc_ref(v_value_1092_);
lean_dec_ref(v_decl_1090_);
v___x_1093_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(v_pu_1080_, v_value_1092_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_, v_a_1086_);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_dec_ref(v___x_1093_);
v_code_1081_ = v_k_1091_;
goto _start;
}
else
{
lean_dec_ref(v_k_1091_);
return v___x_1093_;
}
}
case 2:
{
lean_object* v_decl_1095_; lean_object* v_k_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v_value_1101_; lean_object* v___x_1102_; 
v_decl_1095_ = lean_ctor_get(v_code_1081_, 0);
lean_inc_ref_n(v_decl_1095_, 2);
v_k_1096_ = lean_ctor_get(v_code_1081_, 1);
lean_inc_ref(v_k_1096_);
lean_dec_ref(v_code_1081_);
v___x_1097_ = lean_st_ref_get(v_a_1086_);
lean_dec(v___x_1097_);
v___x_1098_ = lean_st_ref_take(v_a_1082_);
v___x_1099_ = lean_array_push(v___x_1098_, v_decl_1095_);
v___x_1100_ = lean_st_ref_set(v_a_1082_, v___x_1099_);
v_value_1101_ = lean_ctor_get(v_decl_1095_, 4);
lean_inc_ref(v_value_1101_);
lean_dec_ref(v_decl_1095_);
v___x_1102_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(v_pu_1080_, v_value_1101_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_, v_a_1086_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_dec_ref(v___x_1102_);
v_code_1081_ = v_k_1096_;
goto _start;
}
else
{
lean_dec_ref(v_k_1096_);
return v___x_1102_;
}
}
case 4:
{
lean_object* v_cases_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1126_; 
v_cases_1104_ = lean_ctor_get(v_code_1081_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v_code_1081_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1106_ = v_code_1081_;
v_isShared_1107_ = v_isSharedCheck_1126_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_cases_1104_);
lean_dec(v_code_1081_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1126_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v_alts_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; uint8_t v___x_1112_; 
v_alts_1108_ = lean_ctor_get(v_cases_1104_, 3);
lean_inc_ref(v_alts_1108_);
lean_dec_ref(v_cases_1104_);
v___x_1109_ = lean_unsigned_to_nat(0u);
v___x_1110_ = lean_array_get_size(v_alts_1108_);
v___x_1111_ = lean_box(0);
v___x_1112_ = lean_nat_dec_lt(v___x_1109_, v___x_1110_);
if (v___x_1112_ == 0)
{
lean_object* v___x_1114_; 
lean_dec_ref(v_alts_1108_);
if (v_isShared_1107_ == 0)
{
lean_ctor_set_tag(v___x_1106_, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1111_);
v___x_1114_ = v___x_1106_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v___x_1111_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
return v___x_1114_;
}
}
else
{
uint8_t v___x_1116_; 
v___x_1116_ = lean_nat_dec_le(v___x_1110_, v___x_1110_);
if (v___x_1116_ == 0)
{
if (v___x_1112_ == 0)
{
lean_object* v___x_1118_; 
lean_dec_ref(v_alts_1108_);
if (v_isShared_1107_ == 0)
{
lean_ctor_set_tag(v___x_1106_, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1111_);
v___x_1118_ = v___x_1106_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v___x_1111_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
else
{
size_t v___x_1120_; size_t v___x_1121_; lean_object* v___x_1122_; 
lean_del_object(v___x_1106_);
v___x_1120_ = ((size_t)0ULL);
v___x_1121_ = lean_usize_of_nat(v___x_1110_);
v___x_1122_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(v_pu_1080_, v_alts_1108_, v___x_1120_, v___x_1121_, v___x_1111_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_, v_a_1086_);
lean_dec_ref(v_alts_1108_);
return v___x_1122_;
}
}
else
{
size_t v___x_1123_; size_t v___x_1124_; lean_object* v___x_1125_; 
lean_del_object(v___x_1106_);
v___x_1123_ = ((size_t)0ULL);
v___x_1124_ = lean_usize_of_nat(v___x_1110_);
v___x_1125_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(v_pu_1080_, v_alts_1108_, v___x_1123_, v___x_1124_, v___x_1111_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_, v_a_1086_);
lean_dec_ref(v_alts_1108_);
return v___x_1125_;
}
}
}
}
case 7:
{
lean_object* v_k_1127_; 
v_k_1127_ = lean_ctor_get(v_code_1081_, 3);
lean_inc_ref(v_k_1127_);
lean_dec_ref(v_code_1081_);
v_code_1081_ = v_k_1127_;
goto _start;
}
case 8:
{
lean_object* v_k_1129_; 
v_k_1129_ = lean_ctor_get(v_code_1081_, 3);
lean_inc_ref(v_k_1129_);
lean_dec_ref(v_code_1081_);
v_code_1081_ = v_k_1129_;
goto _start;
}
case 9:
{
lean_object* v_k_1131_; 
v_k_1131_ = lean_ctor_get(v_code_1081_, 5);
lean_inc_ref(v_k_1131_);
lean_dec_ref(v_code_1081_);
v_code_1081_ = v_k_1131_;
goto _start;
}
case 10:
{
lean_object* v_k_1133_; 
v_k_1133_ = lean_ctor_get(v_code_1081_, 2);
lean_inc_ref(v_k_1133_);
lean_dec_ref(v_code_1081_);
v_code_1081_ = v_k_1133_;
goto _start;
}
case 11:
{
lean_object* v_k_1135_; 
v_k_1135_ = lean_ctor_get(v_code_1081_, 2);
lean_inc_ref(v_k_1135_);
lean_dec_ref(v_code_1081_);
v_code_1081_ = v_k_1135_;
goto _start;
}
case 12:
{
lean_object* v_k_1137_; 
v_k_1137_ = lean_ctor_get(v_code_1081_, 2);
lean_inc_ref(v_k_1137_);
lean_dec_ref(v_code_1081_);
v_code_1081_ = v_k_1137_;
goto _start;
}
case 13:
{
lean_object* v_k_1139_; 
v_k_1139_ = lean_ctor_get(v_code_1081_, 1);
lean_inc_ref(v_k_1139_);
lean_dec_ref(v_code_1081_);
v_code_1081_ = v_k_1139_;
goto _start;
}
default: 
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
lean_dec_ref(v_code_1081_);
v___x_1141_ = lean_box(0);
v___x_1142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1141_);
return v___x_1142_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(uint8_t v_pu_1143_, lean_object* v_as_1144_, size_t v_i_1145_, size_t v_stop_1146_, lean_object* v_b_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_){
_start:
{
lean_object* v___y_1155_; uint8_t v___x_1161_; 
v___x_1161_ = lean_usize_dec_eq(v_i_1145_, v_stop_1146_);
if (v___x_1161_ == 0)
{
lean_object* v___x_1162_; 
v___x_1162_ = lean_array_uget_borrowed(v_as_1144_, v_i_1145_);
switch(lean_obj_tag(v___x_1162_))
{
case 0:
{
lean_object* v_code_1163_; 
v_code_1163_ = lean_ctor_get(v___x_1162_, 2);
lean_inc_ref(v_code_1163_);
v___y_1155_ = v_code_1163_;
goto v___jp_1154_;
}
case 1:
{
lean_object* v_code_1164_; 
v_code_1164_ = lean_ctor_get(v___x_1162_, 1);
lean_inc_ref(v_code_1164_);
v___y_1155_ = v_code_1164_;
goto v___jp_1154_;
}
default: 
{
lean_object* v_code_1165_; 
v_code_1165_ = lean_ctor_get(v___x_1162_, 0);
lean_inc_ref(v_code_1165_);
v___y_1155_ = v_code_1165_;
goto v___jp_1154_;
}
}
}
else
{
lean_object* v___x_1166_; 
v___x_1166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1166_, 0, v_b_1147_);
return v___x_1166_;
}
v___jp_1154_:
{
lean_object* v___x_1156_; 
v___x_1156_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(v_pu_1143_, v___y_1155_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; size_t v___x_1158_; size_t v___x_1159_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
lean_inc(v_a_1157_);
lean_dec_ref(v___x_1156_);
v___x_1158_ = ((size_t)1ULL);
v___x_1159_ = lean_usize_add(v_i_1145_, v___x_1158_);
v_i_1145_ = v___x_1159_;
v_b_1147_ = v_a_1157_;
goto _start;
}
else
{
return v___x_1156_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0___boxed(lean_object* v_pu_1167_, lean_object* v_as_1168_, lean_object* v_i_1169_, lean_object* v_stop_1170_, lean_object* v_b_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
uint8_t v_pu_boxed_1178_; size_t v_i_boxed_1179_; size_t v_stop_boxed_1180_; lean_object* v_res_1181_; 
v_pu_boxed_1178_ = lean_unbox(v_pu_1167_);
v_i_boxed_1179_ = lean_unbox_usize(v_i_1169_);
lean_dec(v_i_1169_);
v_stop_boxed_1180_ = lean_unbox_usize(v_stop_1170_);
lean_dec(v_stop_1170_);
v_res_1181_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(v_pu_boxed_1178_, v_as_1168_, v_i_boxed_1179_, v_stop_boxed_1180_, v_b_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
lean_dec(v___y_1172_);
lean_dec_ref(v_as_1168_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go___boxed(lean_object* v_pu_1182_, lean_object* v_code_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_){
_start:
{
uint8_t v_pu_boxed_1190_; lean_object* v_res_1191_; 
v_pu_boxed_1190_ = lean_unbox(v_pu_1182_);
v_res_1191_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(v_pu_boxed_1190_, v_code_1183_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_);
lean_dec(v_a_1188_);
lean_dec_ref(v_a_1187_);
lean_dec(v_a_1186_);
lean_dec_ref(v_a_1185_);
lean_dec(v_a_1184_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(lean_object* v_f_1192_, lean_object* v_v_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
if (lean_obj_tag(v_v_1193_) == 0)
{
lean_object* v_code_1200_; lean_object* v___x_1201_; 
v_code_1200_ = lean_ctor_get(v_v_1193_, 0);
lean_inc_ref(v_code_1200_);
lean_dec_ref(v_v_1193_);
lean_inc(v___y_1198_);
lean_inc_ref(v___y_1197_);
lean_inc(v___y_1196_);
lean_inc_ref(v___y_1195_);
lean_inc(v___y_1194_);
v___x_1201_ = lean_apply_7(v_f_1192_, v_code_1200_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, lean_box(0));
return v___x_1201_;
}
else
{
lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1209_; 
lean_dec_ref(v_f_1192_);
v_isSharedCheck_1209_ = !lean_is_exclusive(v_v_1193_);
if (v_isSharedCheck_1209_ == 0)
{
lean_object* v_unused_1210_; 
v_unused_1210_ = lean_ctor_get(v_v_1193_, 0);
lean_dec(v_unused_1210_);
v___x_1203_ = v_v_1193_;
v_isShared_1204_ = v_isSharedCheck_1209_;
goto v_resetjp_1202_;
}
else
{
lean_dec(v_v_1193_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1209_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1205_; lean_object* v___x_1207_; 
v___x_1205_ = lean_box(0);
if (v_isShared_1204_ == 0)
{
lean_ctor_set_tag(v___x_1203_, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1205_);
v___x_1207_ = v___x_1203_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v___x_1205_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg___boxed(lean_object* v_f_1211_, lean_object* v_v_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_){
_start:
{
lean_object* v_res_1219_; 
v_res_1219_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(v_f_1211_, v_v_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_);
lean_dec(v___y_1217_);
lean_dec_ref(v___y_1216_);
lean_dec(v___y_1215_);
lean_dec_ref(v___y_1214_);
lean_dec(v___y_1213_);
return v_res_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0(uint8_t v_pu_1220_, lean_object* v_f_1221_, lean_object* v_v_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_){
_start:
{
lean_object* v___x_1229_; 
v___x_1229_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(v_f_1221_, v_v_1222_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_);
return v___x_1229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___boxed(lean_object* v_pu_1230_, lean_object* v_f_1231_, lean_object* v_v_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_){
_start:
{
uint8_t v_pu_boxed_1239_; lean_object* v_res_1240_; 
v_pu_boxed_1239_ = lean_unbox(v_pu_1230_);
v_res_1240_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0(v_pu_boxed_1239_, v_f_1231_, v_v_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_);
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
lean_dec(v___y_1235_);
lean_dec_ref(v___y_1234_);
lean_dec(v___y_1233_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(uint8_t v_pu_1241_, lean_object* v_as_1242_, size_t v_i_1243_, size_t v_stop_1244_, lean_object* v_b_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_){
_start:
{
uint8_t v___x_1252_; 
v___x_1252_ = lean_usize_dec_eq(v_i_1243_, v_stop_1244_);
if (v___x_1252_ == 0)
{
lean_object* v___x_1253_; lean_object* v_value_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1253_ = lean_array_uget_borrowed(v_as_1242_, v_i_1243_);
v_value_1254_ = lean_ctor_get(v___x_1253_, 1);
v___x_1255_ = lean_box(v_pu_1241_);
v___x_1256_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go___boxed), 8, 1);
lean_closure_set(v___x_1256_, 0, v___x_1255_);
lean_inc_ref(v_value_1254_);
v___x_1257_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(v___x_1256_, v_value_1254_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v_a_1258_; size_t v___x_1259_; size_t v___x_1260_; 
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
lean_inc(v_a_1258_);
lean_dec_ref(v___x_1257_);
v___x_1259_ = ((size_t)1ULL);
v___x_1260_ = lean_usize_add(v_i_1243_, v___x_1259_);
v_i_1243_ = v___x_1260_;
v_b_1245_ = v_a_1258_;
goto _start;
}
else
{
return v___x_1257_;
}
}
else
{
lean_object* v___x_1262_; 
v___x_1262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1262_, 0, v_b_1245_);
return v___x_1262_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1___boxed(lean_object* v_pu_1263_, lean_object* v_as_1264_, lean_object* v_i_1265_, lean_object* v_stop_1266_, lean_object* v_b_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
uint8_t v_pu_boxed_1274_; size_t v_i_boxed_1275_; size_t v_stop_boxed_1276_; lean_object* v_res_1277_; 
v_pu_boxed_1274_ = lean_unbox(v_pu_1263_);
v_i_boxed_1275_ = lean_unbox_usize(v_i_1265_);
lean_dec(v_i_1265_);
v_stop_boxed_1276_ = lean_unbox_usize(v_stop_1266_);
lean_dec(v_stop_1266_);
v_res_1277_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(v_pu_boxed_1274_, v_as_1264_, v_i_boxed_1275_, v_stop_boxed_1276_, v_b_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_);
lean_dec(v___y_1272_);
lean_dec_ref(v___y_1271_);
lean_dec(v___y_1270_);
lean_dec_ref(v___y_1269_);
lean_dec(v___y_1268_);
lean_dec_ref(v_as_1264_);
return v_res_1277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start(uint8_t v_pu_1278_, lean_object* v_decls_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_){
_start:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; uint8_t v___x_1289_; 
v___x_1286_ = lean_unsigned_to_nat(0u);
v___x_1287_ = lean_array_get_size(v_decls_1279_);
v___x_1288_ = lean_box(0);
v___x_1289_ = lean_nat_dec_lt(v___x_1286_, v___x_1287_);
if (v___x_1289_ == 0)
{
lean_object* v___x_1290_; 
v___x_1290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1288_);
return v___x_1290_;
}
else
{
uint8_t v___x_1291_; 
v___x_1291_ = lean_nat_dec_le(v___x_1287_, v___x_1287_);
if (v___x_1291_ == 0)
{
if (v___x_1289_ == 0)
{
lean_object* v___x_1292_; 
v___x_1292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1288_);
return v___x_1292_;
}
else
{
size_t v___x_1293_; size_t v___x_1294_; lean_object* v___x_1295_; 
v___x_1293_ = ((size_t)0ULL);
v___x_1294_ = lean_usize_of_nat(v___x_1287_);
v___x_1295_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(v_pu_1278_, v_decls_1279_, v___x_1293_, v___x_1294_, v___x_1288_, v_a_1280_, v_a_1281_, v_a_1282_, v_a_1283_, v_a_1284_);
return v___x_1295_;
}
}
else
{
size_t v___x_1296_; size_t v___x_1297_; lean_object* v___x_1298_; 
v___x_1296_ = ((size_t)0ULL);
v___x_1297_ = lean_usize_of_nat(v___x_1287_);
v___x_1298_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(v_pu_1278_, v_decls_1279_, v___x_1296_, v___x_1297_, v___x_1288_, v_a_1280_, v_a_1281_, v_a_1282_, v_a_1283_, v_a_1284_);
return v___x_1298_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start___boxed(lean_object* v_pu_1299_, lean_object* v_decls_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_){
_start:
{
uint8_t v_pu_boxed_1307_; lean_object* v_res_1308_; 
v_pu_boxed_1307_ = lean_unbox(v_pu_1299_);
v_res_1308_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start(v_pu_boxed_1307_, v_decls_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
lean_dec(v_a_1305_);
lean_dec_ref(v_a_1304_);
lean_dec(v_a_1303_);
lean_dec_ref(v_a_1302_);
lean_dec(v_a_1301_);
lean_dec_ref(v_decls_1300_);
return v_res_1308_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_getJps___closed__0(void){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1309_ = lean_unsigned_to_nat(0u);
v___x_1310_ = lean_mk_empty_array_with_capacity(v___x_1309_);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getJps(uint8_t v_pu_1311_, lean_object* v_decls_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_){
_start:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1318_ = lean_st_ref_get(v_a_1316_);
lean_dec(v___x_1318_);
v___x_1319_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_getJps___closed__0, &l_Lean_Compiler_LCNF_Probe_getJps___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_getJps___closed__0);
v___x_1320_ = lean_st_mk_ref(v___x_1319_);
v___x_1321_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start(v_pu_1311_, v_decls_1312_, v___x_1320_, v_a_1313_, v_a_1314_, v_a_1315_, v_a_1316_);
if (lean_obj_tag(v___x_1321_) == 0)
{
lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1330_; 
v_isSharedCheck_1330_ = !lean_is_exclusive(v___x_1321_);
if (v_isSharedCheck_1330_ == 0)
{
lean_object* v_unused_1331_; 
v_unused_1331_ = lean_ctor_get(v___x_1321_, 0);
lean_dec(v_unused_1331_);
v___x_1323_ = v___x_1321_;
v_isShared_1324_ = v_isSharedCheck_1330_;
goto v_resetjp_1322_;
}
else
{
lean_dec(v___x_1321_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1330_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1328_; 
v___x_1325_ = lean_st_ref_get(v_a_1316_);
lean_dec(v___x_1325_);
v___x_1326_ = lean_st_ref_get(v___x_1320_);
lean_dec(v___x_1320_);
if (v_isShared_1324_ == 0)
{
lean_ctor_set(v___x_1323_, 0, v___x_1326_);
v___x_1328_ = v___x_1323_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v___x_1326_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
else
{
lean_object* v_a_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1339_; 
lean_dec(v___x_1320_);
v_a_1332_ = lean_ctor_get(v___x_1321_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1321_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1334_ = v___x_1321_;
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_a_1332_);
lean_dec(v___x_1321_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v___x_1337_; 
if (v_isShared_1335_ == 0)
{
v___x_1337_ = v___x_1334_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_a_1332_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getJps___boxed(lean_object* v_pu_1340_, lean_object* v_decls_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_, lean_object* v_a_1344_, lean_object* v_a_1345_, lean_object* v_a_1346_){
_start:
{
uint8_t v_pu_boxed_1347_; lean_object* v_res_1348_; 
v_pu_boxed_1347_ = lean_unbox(v_pu_1340_);
v_res_1348_ = l_Lean_Compiler_LCNF_Probe_getJps(v_pu_boxed_1347_, v_decls_1341_, v_a_1342_, v_a_1343_, v_a_1344_, v_a_1345_);
lean_dec(v_a_1345_);
lean_dec_ref(v_a_1344_);
lean_dec(v_a_1343_);
lean_dec_ref(v_a_1342_);
lean_dec_ref(v_decls_1341_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(uint8_t v_pu_1349_, lean_object* v_f_1350_, lean_object* v_a_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_){
_start:
{
switch(lean_obj_tag(v_a_1351_))
{
case 0:
{
lean_object* v_decl_1357_; lean_object* v_k_1358_; lean_object* v___x_1359_; 
v_decl_1357_ = lean_ctor_get(v_a_1351_, 0);
lean_inc_ref(v_decl_1357_);
v_k_1358_ = lean_ctor_get(v_a_1351_, 1);
lean_inc_ref(v_k_1358_);
lean_dec_ref(v_a_1351_);
lean_inc_ref(v_f_1350_);
lean_inc(v_a_1355_);
lean_inc_ref(v_a_1354_);
lean_inc(v_a_1353_);
lean_inc_ref(v_a_1352_);
v___x_1359_ = lean_apply_6(v_f_1350_, v_decl_1357_, v_a_1352_, v_a_1353_, v_a_1354_, v_a_1355_, lean_box(0));
if (lean_obj_tag(v___x_1359_) == 0)
{
lean_object* v_a_1360_; uint8_t v___x_1361_; 
v_a_1360_ = lean_ctor_get(v___x_1359_, 0);
lean_inc(v_a_1360_);
v___x_1361_ = lean_unbox(v_a_1360_);
lean_dec(v_a_1360_);
if (v___x_1361_ == 0)
{
lean_dec_ref(v___x_1359_);
v_a_1351_ = v_k_1358_;
goto _start;
}
else
{
lean_dec_ref(v_k_1358_);
lean_dec_ref(v_f_1350_);
return v___x_1359_;
}
}
else
{
lean_dec_ref(v_k_1358_);
lean_dec_ref(v_f_1350_);
return v___x_1359_;
}
}
case 1:
{
lean_object* v_decl_1363_; lean_object* v_k_1364_; lean_object* v_value_1365_; lean_object* v___x_1366_; 
v_decl_1363_ = lean_ctor_get(v_a_1351_, 0);
lean_inc_ref(v_decl_1363_);
v_k_1364_ = lean_ctor_get(v_a_1351_, 1);
lean_inc_ref(v_k_1364_);
lean_dec_ref(v_a_1351_);
v_value_1365_ = lean_ctor_get(v_decl_1363_, 4);
lean_inc_ref(v_value_1365_);
lean_dec_ref(v_decl_1363_);
lean_inc_ref(v_f_1350_);
v___x_1366_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(v_pu_1349_, v_f_1350_, v_value_1365_, v_a_1352_, v_a_1353_, v_a_1354_, v_a_1355_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v_a_1367_; uint8_t v___x_1368_; 
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
lean_inc(v_a_1367_);
v___x_1368_ = lean_unbox(v_a_1367_);
lean_dec(v_a_1367_);
if (v___x_1368_ == 0)
{
lean_dec_ref(v___x_1366_);
v_a_1351_ = v_k_1364_;
goto _start;
}
else
{
lean_dec_ref(v_k_1364_);
lean_dec_ref(v_f_1350_);
return v___x_1366_;
}
}
else
{
lean_dec_ref(v_k_1364_);
lean_dec_ref(v_f_1350_);
return v___x_1366_;
}
}
case 2:
{
lean_object* v_decl_1370_; lean_object* v_k_1371_; lean_object* v_value_1372_; lean_object* v___x_1373_; 
v_decl_1370_ = lean_ctor_get(v_a_1351_, 0);
lean_inc_ref(v_decl_1370_);
v_k_1371_ = lean_ctor_get(v_a_1351_, 1);
lean_inc_ref(v_k_1371_);
lean_dec_ref(v_a_1351_);
v_value_1372_ = lean_ctor_get(v_decl_1370_, 4);
lean_inc_ref(v_value_1372_);
lean_dec_ref(v_decl_1370_);
lean_inc_ref(v_f_1350_);
v___x_1373_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(v_pu_1349_, v_f_1350_, v_value_1372_, v_a_1352_, v_a_1353_, v_a_1354_, v_a_1355_);
if (lean_obj_tag(v___x_1373_) == 0)
{
lean_object* v_a_1374_; uint8_t v___x_1375_; 
v_a_1374_ = lean_ctor_get(v___x_1373_, 0);
lean_inc(v_a_1374_);
v___x_1375_ = lean_unbox(v_a_1374_);
lean_dec(v_a_1374_);
if (v___x_1375_ == 0)
{
lean_dec_ref(v___x_1373_);
v_a_1351_ = v_k_1371_;
goto _start;
}
else
{
lean_dec_ref(v_k_1371_);
lean_dec_ref(v_f_1350_);
return v___x_1373_;
}
}
else
{
lean_dec_ref(v_k_1371_);
lean_dec_ref(v_f_1350_);
return v___x_1373_;
}
}
case 4:
{
lean_object* v_cases_1377_; lean_object* v___x_1379_; uint8_t v_isShared_1380_; uint8_t v_isSharedCheck_1396_; 
v_cases_1377_ = lean_ctor_get(v_a_1351_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v_a_1351_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1379_ = v_a_1351_;
v_isShared_1380_ = v_isSharedCheck_1396_;
goto v_resetjp_1378_;
}
else
{
lean_inc(v_cases_1377_);
lean_dec(v_a_1351_);
v___x_1379_ = lean_box(0);
v_isShared_1380_ = v_isSharedCheck_1396_;
goto v_resetjp_1378_;
}
v_resetjp_1378_:
{
lean_object* v_alts_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; uint8_t v___x_1384_; 
v_alts_1381_ = lean_ctor_get(v_cases_1377_, 3);
lean_inc_ref(v_alts_1381_);
lean_dec_ref(v_cases_1377_);
v___x_1382_ = lean_unsigned_to_nat(0u);
v___x_1383_ = lean_array_get_size(v_alts_1381_);
v___x_1384_ = lean_nat_dec_lt(v___x_1382_, v___x_1383_);
if (v___x_1384_ == 0)
{
lean_object* v___x_1385_; lean_object* v___x_1387_; 
lean_dec_ref(v_alts_1381_);
lean_dec_ref(v_f_1350_);
v___x_1385_ = lean_box(v___x_1384_);
if (v_isShared_1380_ == 0)
{
lean_ctor_set_tag(v___x_1379_, 0);
lean_ctor_set(v___x_1379_, 0, v___x_1385_);
v___x_1387_ = v___x_1379_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v___x_1385_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
}
}
else
{
if (v___x_1384_ == 0)
{
lean_object* v___x_1389_; lean_object* v___x_1391_; 
lean_dec_ref(v_alts_1381_);
lean_dec_ref(v_f_1350_);
v___x_1389_ = lean_box(v___x_1384_);
if (v_isShared_1380_ == 0)
{
lean_ctor_set_tag(v___x_1379_, 0);
lean_ctor_set(v___x_1379_, 0, v___x_1389_);
v___x_1391_ = v___x_1379_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v___x_1389_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
return v___x_1391_;
}
}
else
{
size_t v___x_1393_; size_t v___x_1394_; lean_object* v___x_1395_; 
lean_del_object(v___x_1379_);
v___x_1393_ = ((size_t)0ULL);
v___x_1394_ = lean_usize_of_nat(v___x_1383_);
v___x_1395_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0(v_pu_1349_, v_f_1350_, v_alts_1381_, v___x_1393_, v___x_1394_, v_a_1352_, v_a_1353_, v_a_1354_, v_a_1355_);
lean_dec_ref(v_alts_1381_);
return v___x_1395_;
}
}
}
}
case 7:
{
lean_object* v_k_1397_; 
v_k_1397_ = lean_ctor_get(v_a_1351_, 3);
lean_inc_ref(v_k_1397_);
lean_dec_ref(v_a_1351_);
v_a_1351_ = v_k_1397_;
goto _start;
}
case 8:
{
lean_object* v_k_1399_; 
v_k_1399_ = lean_ctor_get(v_a_1351_, 3);
lean_inc_ref(v_k_1399_);
lean_dec_ref(v_a_1351_);
v_a_1351_ = v_k_1399_;
goto _start;
}
case 9:
{
lean_object* v_k_1401_; 
v_k_1401_ = lean_ctor_get(v_a_1351_, 5);
lean_inc_ref(v_k_1401_);
lean_dec_ref(v_a_1351_);
v_a_1351_ = v_k_1401_;
goto _start;
}
case 10:
{
lean_object* v_k_1403_; 
v_k_1403_ = lean_ctor_get(v_a_1351_, 2);
lean_inc_ref(v_k_1403_);
lean_dec_ref(v_a_1351_);
v_a_1351_ = v_k_1403_;
goto _start;
}
case 11:
{
lean_object* v_k_1405_; 
v_k_1405_ = lean_ctor_get(v_a_1351_, 2);
lean_inc_ref(v_k_1405_);
lean_dec_ref(v_a_1351_);
v_a_1351_ = v_k_1405_;
goto _start;
}
case 12:
{
lean_object* v_k_1407_; 
v_k_1407_ = lean_ctor_get(v_a_1351_, 2);
lean_inc_ref(v_k_1407_);
lean_dec_ref(v_a_1351_);
v_a_1351_ = v_k_1407_;
goto _start;
}
case 13:
{
lean_object* v_k_1409_; 
v_k_1409_ = lean_ctor_get(v_a_1351_, 1);
lean_inc_ref(v_k_1409_);
lean_dec_ref(v_a_1351_);
v_a_1351_ = v_k_1409_;
goto _start;
}
default: 
{
uint8_t v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
lean_dec_ref(v_a_1351_);
lean_dec_ref(v_f_1350_);
v___x_1411_ = 0;
v___x_1412_ = lean_box(v___x_1411_);
v___x_1413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
return v___x_1413_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0(uint8_t v_pu_1414_, lean_object* v_f_1415_, lean_object* v_as_1416_, size_t v_i_1417_, size_t v_stop_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_){
_start:
{
uint8_t v___x_1424_; 
v___x_1424_ = lean_usize_dec_eq(v_i_1417_, v_stop_1418_);
if (v___x_1424_ == 0)
{
uint8_t v___x_1425_; lean_object* v___y_1427_; lean_object* v___x_1442_; 
v___x_1425_ = 1;
v___x_1442_ = lean_array_uget_borrowed(v_as_1416_, v_i_1417_);
switch(lean_obj_tag(v___x_1442_))
{
case 0:
{
lean_object* v_code_1443_; 
v_code_1443_ = lean_ctor_get(v___x_1442_, 2);
lean_inc_ref(v_code_1443_);
v___y_1427_ = v_code_1443_;
goto v___jp_1426_;
}
case 1:
{
lean_object* v_code_1444_; 
v_code_1444_ = lean_ctor_get(v___x_1442_, 1);
lean_inc_ref(v_code_1444_);
v___y_1427_ = v_code_1444_;
goto v___jp_1426_;
}
default: 
{
lean_object* v_code_1445_; 
v_code_1445_ = lean_ctor_get(v___x_1442_, 0);
lean_inc_ref(v_code_1445_);
v___y_1427_ = v_code_1445_;
goto v___jp_1426_;
}
}
v___jp_1426_:
{
lean_object* v___x_1428_; 
lean_inc_ref(v_f_1415_);
v___x_1428_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(v_pu_1414_, v_f_1415_, v___y_1427_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_);
if (lean_obj_tag(v___x_1428_) == 0)
{
lean_object* v_a_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1441_; 
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1431_ = v___x_1428_;
v_isShared_1432_ = v_isSharedCheck_1441_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_a_1429_);
lean_dec(v___x_1428_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1441_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
uint8_t v___x_1433_; 
v___x_1433_ = lean_unbox(v_a_1429_);
lean_dec(v_a_1429_);
if (v___x_1433_ == 0)
{
size_t v___x_1434_; size_t v___x_1435_; 
lean_del_object(v___x_1431_);
v___x_1434_ = ((size_t)1ULL);
v___x_1435_ = lean_usize_add(v_i_1417_, v___x_1434_);
v_i_1417_ = v___x_1435_;
goto _start;
}
else
{
lean_object* v___x_1437_; lean_object* v___x_1439_; 
lean_dec_ref(v_f_1415_);
v___x_1437_ = lean_box(v___x_1425_);
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 0, v___x_1437_);
v___x_1439_ = v___x_1431_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v___x_1437_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
}
else
{
lean_dec_ref(v_f_1415_);
return v___x_1428_;
}
}
}
else
{
uint8_t v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
lean_dec_ref(v_f_1415_);
v___x_1446_ = 0;
v___x_1447_ = lean_box(v___x_1446_);
v___x_1448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1448_, 0, v___x_1447_);
return v___x_1448_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0___boxed(lean_object* v_pu_1449_, lean_object* v_f_1450_, lean_object* v_as_1451_, lean_object* v_i_1452_, lean_object* v_stop_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_){
_start:
{
uint8_t v_pu_boxed_1459_; size_t v_i_boxed_1460_; size_t v_stop_boxed_1461_; lean_object* v_res_1462_; 
v_pu_boxed_1459_ = lean_unbox(v_pu_1449_);
v_i_boxed_1460_ = lean_unbox_usize(v_i_1452_);
lean_dec(v_i_1452_);
v_stop_boxed_1461_ = lean_unbox_usize(v_stop_1453_);
lean_dec(v_stop_1453_);
v_res_1462_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0(v_pu_boxed_1459_, v_f_1450_, v_as_1451_, v_i_boxed_1460_, v_stop_boxed_1461_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
lean_dec(v___y_1457_);
lean_dec_ref(v___y_1456_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
lean_dec_ref(v_as_1451_);
return v_res_1462_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go___boxed(lean_object* v_pu_1463_, lean_object* v_f_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_, lean_object* v_a_1470_){
_start:
{
uint8_t v_pu_boxed_1471_; lean_object* v_res_1472_; 
v_pu_boxed_1471_ = lean_unbox(v_pu_1463_);
v_res_1472_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(v_pu_boxed_1471_, v_f_1464_, v_a_1465_, v_a_1466_, v_a_1467_, v_a_1468_, v_a_1469_);
lean_dec(v_a_1469_);
lean_dec_ref(v_a_1468_);
lean_dec(v_a_1467_);
lean_dec_ref(v_a_1466_);
return v_res_1472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(lean_object* v_v_1473_, lean_object* v_f_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_){
_start:
{
if (lean_obj_tag(v_v_1473_) == 0)
{
lean_object* v_code_1480_; lean_object* v___x_1481_; 
v_code_1480_ = lean_ctor_get(v_v_1473_, 0);
lean_inc_ref(v_code_1480_);
lean_dec_ref(v_v_1473_);
lean_inc(v___y_1478_);
lean_inc_ref(v___y_1477_);
lean_inc(v___y_1476_);
lean_inc_ref(v___y_1475_);
v___x_1481_ = lean_apply_6(v_f_1474_, v_code_1480_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_, lean_box(0));
return v___x_1481_;
}
else
{
lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1490_; 
lean_dec_ref(v_f_1474_);
v_isSharedCheck_1490_ = !lean_is_exclusive(v_v_1473_);
if (v_isSharedCheck_1490_ == 0)
{
lean_object* v_unused_1491_; 
v_unused_1491_ = lean_ctor_get(v_v_1473_, 0);
lean_dec(v_unused_1491_);
v___x_1483_ = v_v_1473_;
v_isShared_1484_ = v_isSharedCheck_1490_;
goto v_resetjp_1482_;
}
else
{
lean_dec(v_v_1473_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1490_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
uint8_t v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1488_; 
v___x_1485_ = 0;
v___x_1486_ = lean_box(v___x_1485_);
if (v_isShared_1484_ == 0)
{
lean_ctor_set_tag(v___x_1483_, 0);
lean_ctor_set(v___x_1483_, 0, v___x_1486_);
v___x_1488_ = v___x_1483_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v___x_1486_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg___boxed(lean_object* v_v_1492_, lean_object* v_f_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_v_1492_, v_f_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
lean_dec(v___y_1495_);
lean_dec_ref(v___y_1494_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0(uint8_t v_pu_1500_, lean_object* v_v_1501_, lean_object* v_f_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
lean_object* v___x_1508_; 
v___x_1508_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_v_1501_, v_f_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___boxed(lean_object* v_pu_1509_, lean_object* v_v_1510_, lean_object* v_f_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
uint8_t v_pu_boxed_1517_; lean_object* v_res_1518_; 
v_pu_boxed_1517_ = lean_unbox(v_pu_1509_);
v_res_1518_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0(v_pu_boxed_1517_, v_v_1510_, v_f_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_);
lean_dec(v___y_1515_);
lean_dec_ref(v___y_1514_);
lean_dec(v___y_1513_);
lean_dec_ref(v___y_1512_);
return v_res_1518_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1(uint8_t v_pu_1519_, lean_object* v_f_1520_, lean_object* v_as_1521_, size_t v_i_1522_, size_t v_stop_1523_, lean_object* v_b_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_){
_start:
{
uint8_t v___x_1530_; 
v___x_1530_ = lean_usize_dec_eq(v_i_1522_, v_stop_1523_);
if (v___x_1530_ == 0)
{
lean_object* v___x_1531_; lean_object* v_value_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; 
v___x_1531_ = lean_array_uget_borrowed(v_as_1521_, v_i_1522_);
v_value_1532_ = lean_ctor_get(v___x_1531_, 1);
v___x_1533_ = lean_box(v_pu_1519_);
lean_inc_ref(v_f_1520_);
v___x_1534_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go___boxed), 8, 2);
lean_closure_set(v___x_1534_, 0, v___x_1533_);
lean_closure_set(v___x_1534_, 1, v_f_1520_);
lean_inc_ref(v_value_1532_);
v___x_1535_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_1532_, v___x_1534_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_);
if (lean_obj_tag(v___x_1535_) == 0)
{
lean_object* v_a_1536_; lean_object* v_a_1538_; uint8_t v___x_1542_; 
v_a_1536_ = lean_ctor_get(v___x_1535_, 0);
lean_inc(v_a_1536_);
lean_dec_ref(v___x_1535_);
v___x_1542_ = lean_unbox(v_a_1536_);
lean_dec(v_a_1536_);
if (v___x_1542_ == 0)
{
v_a_1538_ = v_b_1524_;
goto v___jp_1537_;
}
else
{
lean_object* v___x_1543_; 
lean_inc(v___x_1531_);
v___x_1543_ = lean_array_push(v_b_1524_, v___x_1531_);
v_a_1538_ = v___x_1543_;
goto v___jp_1537_;
}
v___jp_1537_:
{
size_t v___x_1539_; size_t v___x_1540_; 
v___x_1539_ = ((size_t)1ULL);
v___x_1540_ = lean_usize_add(v_i_1522_, v___x_1539_);
v_i_1522_ = v___x_1540_;
v_b_1524_ = v_a_1538_;
goto _start;
}
}
else
{
lean_object* v_a_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1551_; 
lean_dec_ref(v_b_1524_);
lean_dec_ref(v_f_1520_);
v_a_1544_ = lean_ctor_get(v___x_1535_, 0);
v_isSharedCheck_1551_ = !lean_is_exclusive(v___x_1535_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1546_ = v___x_1535_;
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_a_1544_);
lean_dec(v___x_1535_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1549_; 
if (v_isShared_1547_ == 0)
{
v___x_1549_ = v___x_1546_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_a_1544_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
return v___x_1549_;
}
}
}
}
else
{
lean_object* v___x_1552_; 
lean_dec_ref(v_f_1520_);
v___x_1552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1552_, 0, v_b_1524_);
return v___x_1552_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1___boxed(lean_object* v_pu_1553_, lean_object* v_f_1554_, lean_object* v_as_1555_, lean_object* v_i_1556_, lean_object* v_stop_1557_, lean_object* v_b_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_){
_start:
{
uint8_t v_pu_boxed_1564_; size_t v_i_boxed_1565_; size_t v_stop_boxed_1566_; lean_object* v_res_1567_; 
v_pu_boxed_1564_ = lean_unbox(v_pu_1553_);
v_i_boxed_1565_ = lean_unbox_usize(v_i_1556_);
lean_dec(v_i_1556_);
v_stop_boxed_1566_ = lean_unbox_usize(v_stop_1557_);
lean_dec(v_stop_1557_);
v_res_1567_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1(v_pu_boxed_1564_, v_f_1554_, v_as_1555_, v_i_boxed_1565_, v_stop_boxed_1566_, v_b_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_);
lean_dec(v___y_1562_);
lean_dec_ref(v___y_1561_);
lean_dec(v___y_1560_);
lean_dec_ref(v___y_1559_);
lean_dec_ref(v_as_1555_);
return v_res_1567_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0(void){
_start:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1568_ = lean_unsigned_to_nat(0u);
v___x_1569_ = lean_mk_empty_array_with_capacity(v___x_1568_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet(uint8_t v_pu_1570_, lean_object* v_f_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_){
_start:
{
lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; uint8_t v___x_1581_; 
v___x_1578_ = lean_unsigned_to_nat(0u);
v___x_1579_ = lean_array_get_size(v_a_1572_);
v___x_1580_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0, &l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0);
v___x_1581_ = lean_nat_dec_lt(v___x_1578_, v___x_1579_);
if (v___x_1581_ == 0)
{
lean_object* v___x_1582_; 
lean_dec_ref(v_f_1571_);
v___x_1582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1582_, 0, v___x_1580_);
return v___x_1582_;
}
else
{
uint8_t v___x_1583_; 
v___x_1583_ = lean_nat_dec_le(v___x_1579_, v___x_1579_);
if (v___x_1583_ == 0)
{
if (v___x_1581_ == 0)
{
lean_object* v___x_1584_; 
lean_dec_ref(v_f_1571_);
v___x_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1580_);
return v___x_1584_;
}
else
{
size_t v___x_1585_; size_t v___x_1586_; lean_object* v___x_1587_; 
v___x_1585_ = ((size_t)0ULL);
v___x_1586_ = lean_usize_of_nat(v___x_1579_);
v___x_1587_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1(v_pu_1570_, v_f_1571_, v_a_1572_, v___x_1585_, v___x_1586_, v___x_1580_, v_a_1573_, v_a_1574_, v_a_1575_, v_a_1576_);
return v___x_1587_;
}
}
else
{
size_t v___x_1588_; size_t v___x_1589_; lean_object* v___x_1590_; 
v___x_1588_ = ((size_t)0ULL);
v___x_1589_ = lean_usize_of_nat(v___x_1579_);
v___x_1590_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1(v_pu_1570_, v_f_1571_, v_a_1572_, v___x_1588_, v___x_1589_, v___x_1580_, v_a_1573_, v_a_1574_, v_a_1575_, v_a_1576_);
return v___x_1590_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet___boxed(lean_object* v_pu_1591_, lean_object* v_f_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_){
_start:
{
uint8_t v_pu_boxed_1599_; lean_object* v_res_1600_; 
v_pu_boxed_1599_ = lean_unbox(v_pu_1591_);
v_res_1600_ = l_Lean_Compiler_LCNF_Probe_filterByLet(v_pu_boxed_1599_, v_f_1592_, v_a_1593_, v_a_1594_, v_a_1595_, v_a_1596_, v_a_1597_);
lean_dec(v_a_1597_);
lean_dec_ref(v_a_1596_);
lean_dec(v_a_1595_);
lean_dec_ref(v_a_1594_);
lean_dec_ref(v_a_1593_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(uint8_t v_pu_1601_, lean_object* v_f_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_){
_start:
{
switch(lean_obj_tag(v_a_1603_))
{
case 0:
{
lean_object* v_k_1609_; 
v_k_1609_ = lean_ctor_get(v_a_1603_, 1);
lean_inc_ref(v_k_1609_);
lean_dec_ref(v_a_1603_);
v_a_1603_ = v_k_1609_;
goto _start;
}
case 1:
{
lean_object* v_decl_1611_; lean_object* v_k_1612_; lean_object* v___x_1613_; 
v_decl_1611_ = lean_ctor_get(v_a_1603_, 0);
lean_inc_ref_n(v_decl_1611_, 2);
v_k_1612_ = lean_ctor_get(v_a_1603_, 1);
lean_inc_ref(v_k_1612_);
lean_dec_ref(v_a_1603_);
lean_inc_ref(v_f_1602_);
lean_inc(v_a_1607_);
lean_inc_ref(v_a_1606_);
lean_inc(v_a_1605_);
lean_inc_ref(v_a_1604_);
v___x_1613_ = lean_apply_6(v_f_1602_, v_decl_1611_, v_a_1604_, v_a_1605_, v_a_1606_, v_a_1607_, lean_box(0));
if (lean_obj_tag(v___x_1613_) == 0)
{
lean_object* v_a_1614_; uint8_t v___x_1615_; 
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
lean_inc(v_a_1614_);
v___x_1615_ = lean_unbox(v_a_1614_);
lean_dec(v_a_1614_);
if (v___x_1615_ == 0)
{
lean_object* v_value_1616_; lean_object* v___x_1617_; 
lean_dec_ref(v___x_1613_);
v_value_1616_ = lean_ctor_get(v_decl_1611_, 4);
lean_inc_ref(v_value_1616_);
lean_dec_ref(v_decl_1611_);
lean_inc_ref(v_f_1602_);
v___x_1617_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(v_pu_1601_, v_f_1602_, v_value_1616_, v_a_1604_, v_a_1605_, v_a_1606_, v_a_1607_);
if (lean_obj_tag(v___x_1617_) == 0)
{
lean_object* v_a_1618_; uint8_t v___x_1619_; 
v_a_1618_ = lean_ctor_get(v___x_1617_, 0);
lean_inc(v_a_1618_);
v___x_1619_ = lean_unbox(v_a_1618_);
lean_dec(v_a_1618_);
if (v___x_1619_ == 0)
{
lean_dec_ref(v___x_1617_);
v_a_1603_ = v_k_1612_;
goto _start;
}
else
{
lean_dec_ref(v_k_1612_);
lean_dec_ref(v_f_1602_);
return v___x_1617_;
}
}
else
{
lean_dec_ref(v_k_1612_);
lean_dec_ref(v_f_1602_);
return v___x_1617_;
}
}
else
{
lean_dec_ref(v_k_1612_);
lean_dec_ref(v_decl_1611_);
lean_dec_ref(v_f_1602_);
return v___x_1613_;
}
}
else
{
lean_dec_ref(v_k_1612_);
lean_dec_ref(v_decl_1611_);
lean_dec_ref(v_f_1602_);
return v___x_1613_;
}
}
case 2:
{
lean_object* v_k_1621_; 
v_k_1621_ = lean_ctor_get(v_a_1603_, 1);
lean_inc_ref(v_k_1621_);
lean_dec_ref(v_a_1603_);
v_a_1603_ = v_k_1621_;
goto _start;
}
case 4:
{
lean_object* v_cases_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1642_; 
v_cases_1623_ = lean_ctor_get(v_a_1603_, 0);
v_isSharedCheck_1642_ = !lean_is_exclusive(v_a_1603_);
if (v_isSharedCheck_1642_ == 0)
{
v___x_1625_ = v_a_1603_;
v_isShared_1626_ = v_isSharedCheck_1642_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_cases_1623_);
lean_dec(v_a_1603_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1642_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v_alts_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; uint8_t v___x_1630_; 
v_alts_1627_ = lean_ctor_get(v_cases_1623_, 3);
lean_inc_ref(v_alts_1627_);
lean_dec_ref(v_cases_1623_);
v___x_1628_ = lean_unsigned_to_nat(0u);
v___x_1629_ = lean_array_get_size(v_alts_1627_);
v___x_1630_ = lean_nat_dec_lt(v___x_1628_, v___x_1629_);
if (v___x_1630_ == 0)
{
lean_object* v___x_1631_; lean_object* v___x_1633_; 
lean_dec_ref(v_alts_1627_);
lean_dec_ref(v_f_1602_);
v___x_1631_ = lean_box(v___x_1630_);
if (v_isShared_1626_ == 0)
{
lean_ctor_set_tag(v___x_1625_, 0);
lean_ctor_set(v___x_1625_, 0, v___x_1631_);
v___x_1633_ = v___x_1625_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v___x_1631_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
else
{
if (v___x_1630_ == 0)
{
lean_object* v___x_1635_; lean_object* v___x_1637_; 
lean_dec_ref(v_alts_1627_);
lean_dec_ref(v_f_1602_);
v___x_1635_ = lean_box(v___x_1630_);
if (v_isShared_1626_ == 0)
{
lean_ctor_set_tag(v___x_1625_, 0);
lean_ctor_set(v___x_1625_, 0, v___x_1635_);
v___x_1637_ = v___x_1625_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v___x_1635_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
return v___x_1637_;
}
}
else
{
size_t v___x_1639_; size_t v___x_1640_; lean_object* v___x_1641_; 
lean_del_object(v___x_1625_);
v___x_1639_ = ((size_t)0ULL);
v___x_1640_ = lean_usize_of_nat(v___x_1629_);
v___x_1641_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0(v_pu_1601_, v_f_1602_, v_alts_1627_, v___x_1639_, v___x_1640_, v_a_1604_, v_a_1605_, v_a_1606_, v_a_1607_);
lean_dec_ref(v_alts_1627_);
return v___x_1641_;
}
}
}
}
case 7:
{
lean_object* v_k_1643_; 
v_k_1643_ = lean_ctor_get(v_a_1603_, 3);
lean_inc_ref(v_k_1643_);
lean_dec_ref(v_a_1603_);
v_a_1603_ = v_k_1643_;
goto _start;
}
case 8:
{
lean_object* v_k_1645_; 
v_k_1645_ = lean_ctor_get(v_a_1603_, 3);
lean_inc_ref(v_k_1645_);
lean_dec_ref(v_a_1603_);
v_a_1603_ = v_k_1645_;
goto _start;
}
case 9:
{
lean_object* v_k_1647_; 
v_k_1647_ = lean_ctor_get(v_a_1603_, 5);
lean_inc_ref(v_k_1647_);
lean_dec_ref(v_a_1603_);
v_a_1603_ = v_k_1647_;
goto _start;
}
case 10:
{
lean_object* v_k_1649_; 
v_k_1649_ = lean_ctor_get(v_a_1603_, 2);
lean_inc_ref(v_k_1649_);
lean_dec_ref(v_a_1603_);
v_a_1603_ = v_k_1649_;
goto _start;
}
case 11:
{
lean_object* v_k_1651_; 
v_k_1651_ = lean_ctor_get(v_a_1603_, 2);
lean_inc_ref(v_k_1651_);
lean_dec_ref(v_a_1603_);
v_a_1603_ = v_k_1651_;
goto _start;
}
case 12:
{
lean_object* v_k_1653_; 
v_k_1653_ = lean_ctor_get(v_a_1603_, 2);
lean_inc_ref(v_k_1653_);
lean_dec_ref(v_a_1603_);
v_a_1603_ = v_k_1653_;
goto _start;
}
case 13:
{
lean_object* v_k_1655_; 
v_k_1655_ = lean_ctor_get(v_a_1603_, 1);
lean_inc_ref(v_k_1655_);
lean_dec_ref(v_a_1603_);
v_a_1603_ = v_k_1655_;
goto _start;
}
default: 
{
uint8_t v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; 
lean_dec_ref(v_a_1603_);
lean_dec_ref(v_f_1602_);
v___x_1657_ = 0;
v___x_1658_ = lean_box(v___x_1657_);
v___x_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1658_);
return v___x_1659_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0(uint8_t v_pu_1660_, lean_object* v_f_1661_, lean_object* v_as_1662_, size_t v_i_1663_, size_t v_stop_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_){
_start:
{
uint8_t v___x_1670_; 
v___x_1670_ = lean_usize_dec_eq(v_i_1663_, v_stop_1664_);
if (v___x_1670_ == 0)
{
uint8_t v___x_1671_; lean_object* v___y_1673_; lean_object* v___x_1688_; 
v___x_1671_ = 1;
v___x_1688_ = lean_array_uget_borrowed(v_as_1662_, v_i_1663_);
switch(lean_obj_tag(v___x_1688_))
{
case 0:
{
lean_object* v_code_1689_; 
v_code_1689_ = lean_ctor_get(v___x_1688_, 2);
lean_inc_ref(v_code_1689_);
v___y_1673_ = v_code_1689_;
goto v___jp_1672_;
}
case 1:
{
lean_object* v_code_1690_; 
v_code_1690_ = lean_ctor_get(v___x_1688_, 1);
lean_inc_ref(v_code_1690_);
v___y_1673_ = v_code_1690_;
goto v___jp_1672_;
}
default: 
{
lean_object* v_code_1691_; 
v_code_1691_ = lean_ctor_get(v___x_1688_, 0);
lean_inc_ref(v_code_1691_);
v___y_1673_ = v_code_1691_;
goto v___jp_1672_;
}
}
v___jp_1672_:
{
lean_object* v___x_1674_; 
lean_inc_ref(v_f_1661_);
v___x_1674_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(v_pu_1660_, v_f_1661_, v___y_1673_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
if (lean_obj_tag(v___x_1674_) == 0)
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1687_; 
v_a_1675_ = lean_ctor_get(v___x_1674_, 0);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1674_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1677_ = v___x_1674_;
v_isShared_1678_ = v_isSharedCheck_1687_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1674_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1687_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
uint8_t v___x_1679_; 
v___x_1679_ = lean_unbox(v_a_1675_);
lean_dec(v_a_1675_);
if (v___x_1679_ == 0)
{
size_t v___x_1680_; size_t v___x_1681_; 
lean_del_object(v___x_1677_);
v___x_1680_ = ((size_t)1ULL);
v___x_1681_ = lean_usize_add(v_i_1663_, v___x_1680_);
v_i_1663_ = v___x_1681_;
goto _start;
}
else
{
lean_object* v___x_1683_; lean_object* v___x_1685_; 
lean_dec_ref(v_f_1661_);
v___x_1683_ = lean_box(v___x_1671_);
if (v_isShared_1678_ == 0)
{
lean_ctor_set(v___x_1677_, 0, v___x_1683_);
v___x_1685_ = v___x_1677_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v___x_1683_);
v___x_1685_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
return v___x_1685_;
}
}
}
}
else
{
lean_dec_ref(v_f_1661_);
return v___x_1674_;
}
}
}
else
{
uint8_t v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
lean_dec_ref(v_f_1661_);
v___x_1692_ = 0;
v___x_1693_ = lean_box(v___x_1692_);
v___x_1694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1694_, 0, v___x_1693_);
return v___x_1694_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0___boxed(lean_object* v_pu_1695_, lean_object* v_f_1696_, lean_object* v_as_1697_, lean_object* v_i_1698_, lean_object* v_stop_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_){
_start:
{
uint8_t v_pu_boxed_1705_; size_t v_i_boxed_1706_; size_t v_stop_boxed_1707_; lean_object* v_res_1708_; 
v_pu_boxed_1705_ = lean_unbox(v_pu_1695_);
v_i_boxed_1706_ = lean_unbox_usize(v_i_1698_);
lean_dec(v_i_1698_);
v_stop_boxed_1707_ = lean_unbox_usize(v_stop_1699_);
lean_dec(v_stop_1699_);
v_res_1708_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0(v_pu_boxed_1705_, v_f_1696_, v_as_1697_, v_i_boxed_1706_, v_stop_boxed_1707_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec_ref(v_as_1697_);
return v_res_1708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go___boxed(lean_object* v_pu_1709_, lean_object* v_f_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_){
_start:
{
uint8_t v_pu_boxed_1717_; lean_object* v_res_1718_; 
v_pu_boxed_1717_ = lean_unbox(v_pu_1709_);
v_res_1718_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(v_pu_boxed_1717_, v_f_1710_, v_a_1711_, v_a_1712_, v_a_1713_, v_a_1714_, v_a_1715_);
lean_dec(v_a_1715_);
lean_dec_ref(v_a_1714_);
lean_dec(v_a_1713_);
lean_dec_ref(v_a_1712_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0(uint8_t v_pu_1719_, lean_object* v_f_1720_, lean_object* v_as_1721_, size_t v_i_1722_, size_t v_stop_1723_, lean_object* v_b_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
uint8_t v___x_1730_; 
v___x_1730_ = lean_usize_dec_eq(v_i_1722_, v_stop_1723_);
if (v___x_1730_ == 0)
{
lean_object* v___x_1731_; lean_object* v_value_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1731_ = lean_array_uget_borrowed(v_as_1721_, v_i_1722_);
v_value_1732_ = lean_ctor_get(v___x_1731_, 1);
v___x_1733_ = lean_box(v_pu_1719_);
lean_inc_ref(v_f_1720_);
v___x_1734_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go___boxed), 8, 2);
lean_closure_set(v___x_1734_, 0, v___x_1733_);
lean_closure_set(v___x_1734_, 1, v_f_1720_);
lean_inc_ref(v_value_1732_);
v___x_1735_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_1732_, v___x_1734_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_);
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_object* v_a_1736_; lean_object* v_a_1738_; uint8_t v___x_1742_; 
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_a_1736_);
lean_dec_ref(v___x_1735_);
v___x_1742_ = lean_unbox(v_a_1736_);
lean_dec(v_a_1736_);
if (v___x_1742_ == 0)
{
v_a_1738_ = v_b_1724_;
goto v___jp_1737_;
}
else
{
lean_object* v___x_1743_; 
lean_inc(v___x_1731_);
v___x_1743_ = lean_array_push(v_b_1724_, v___x_1731_);
v_a_1738_ = v___x_1743_;
goto v___jp_1737_;
}
v___jp_1737_:
{
size_t v___x_1739_; size_t v___x_1740_; 
v___x_1739_ = ((size_t)1ULL);
v___x_1740_ = lean_usize_add(v_i_1722_, v___x_1739_);
v_i_1722_ = v___x_1740_;
v_b_1724_ = v_a_1738_;
goto _start;
}
}
else
{
lean_object* v_a_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1751_; 
lean_dec_ref(v_b_1724_);
lean_dec_ref(v_f_1720_);
v_a_1744_ = lean_ctor_get(v___x_1735_, 0);
v_isSharedCheck_1751_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1746_ = v___x_1735_;
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_a_1744_);
lean_dec(v___x_1735_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v___x_1749_; 
if (v_isShared_1747_ == 0)
{
v___x_1749_ = v___x_1746_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v_a_1744_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
return v___x_1749_;
}
}
}
}
else
{
lean_object* v___x_1752_; 
lean_dec_ref(v_f_1720_);
v___x_1752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1752_, 0, v_b_1724_);
return v___x_1752_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0___boxed(lean_object* v_pu_1753_, lean_object* v_f_1754_, lean_object* v_as_1755_, lean_object* v_i_1756_, lean_object* v_stop_1757_, lean_object* v_b_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_){
_start:
{
uint8_t v_pu_boxed_1764_; size_t v_i_boxed_1765_; size_t v_stop_boxed_1766_; lean_object* v_res_1767_; 
v_pu_boxed_1764_ = lean_unbox(v_pu_1753_);
v_i_boxed_1765_ = lean_unbox_usize(v_i_1756_);
lean_dec(v_i_1756_);
v_stop_boxed_1766_ = lean_unbox_usize(v_stop_1757_);
lean_dec(v_stop_1757_);
v_res_1767_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0(v_pu_boxed_1764_, v_f_1754_, v_as_1755_, v_i_boxed_1765_, v_stop_boxed_1766_, v_b_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_);
lean_dec(v___y_1762_);
lean_dec_ref(v___y_1761_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec_ref(v_as_1755_);
return v_res_1767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFun(uint8_t v_pu_1768_, lean_object* v_f_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_){
_start:
{
lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; uint8_t v___x_1779_; 
v___x_1776_ = lean_unsigned_to_nat(0u);
v___x_1777_ = lean_array_get_size(v_a_1770_);
v___x_1778_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0, &l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0);
v___x_1779_ = lean_nat_dec_lt(v___x_1776_, v___x_1777_);
if (v___x_1779_ == 0)
{
lean_object* v___x_1780_; 
lean_dec_ref(v_f_1769_);
v___x_1780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1778_);
return v___x_1780_;
}
else
{
uint8_t v___x_1781_; 
v___x_1781_ = lean_nat_dec_le(v___x_1777_, v___x_1777_);
if (v___x_1781_ == 0)
{
if (v___x_1779_ == 0)
{
lean_object* v___x_1782_; 
lean_dec_ref(v_f_1769_);
v___x_1782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1782_, 0, v___x_1778_);
return v___x_1782_;
}
else
{
size_t v___x_1783_; size_t v___x_1784_; lean_object* v___x_1785_; 
v___x_1783_ = ((size_t)0ULL);
v___x_1784_ = lean_usize_of_nat(v___x_1777_);
v___x_1785_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0(v_pu_1768_, v_f_1769_, v_a_1770_, v___x_1783_, v___x_1784_, v___x_1778_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_);
return v___x_1785_;
}
}
else
{
size_t v___x_1786_; size_t v___x_1787_; lean_object* v___x_1788_; 
v___x_1786_ = ((size_t)0ULL);
v___x_1787_ = lean_usize_of_nat(v___x_1777_);
v___x_1788_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0(v_pu_1768_, v_f_1769_, v_a_1770_, v___x_1786_, v___x_1787_, v___x_1778_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_);
return v___x_1788_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFun___boxed(lean_object* v_pu_1789_, lean_object* v_f_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_){
_start:
{
uint8_t v_pu_boxed_1797_; lean_object* v_res_1798_; 
v_pu_boxed_1797_ = lean_unbox(v_pu_1789_);
v_res_1798_ = l_Lean_Compiler_LCNF_Probe_filterByFun(v_pu_boxed_1797_, v_f_1790_, v_a_1791_, v_a_1792_, v_a_1793_, v_a_1794_, v_a_1795_);
lean_dec(v_a_1795_);
lean_dec_ref(v_a_1794_);
lean_dec(v_a_1793_);
lean_dec_ref(v_a_1792_);
lean_dec_ref(v_a_1791_);
return v_res_1798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(uint8_t v_pu_1799_, lean_object* v_f_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_){
_start:
{
switch(lean_obj_tag(v_a_1801_))
{
case 0:
{
lean_object* v_k_1807_; 
v_k_1807_ = lean_ctor_get(v_a_1801_, 1);
lean_inc_ref(v_k_1807_);
lean_dec_ref(v_a_1801_);
v_a_1801_ = v_k_1807_;
goto _start;
}
case 1:
{
lean_object* v_decl_1809_; lean_object* v_k_1810_; lean_object* v_value_1811_; lean_object* v___x_1812_; 
v_decl_1809_ = lean_ctor_get(v_a_1801_, 0);
lean_inc_ref(v_decl_1809_);
v_k_1810_ = lean_ctor_get(v_a_1801_, 1);
lean_inc_ref(v_k_1810_);
lean_dec_ref(v_a_1801_);
v_value_1811_ = lean_ctor_get(v_decl_1809_, 4);
lean_inc_ref(v_value_1811_);
lean_dec_ref(v_decl_1809_);
lean_inc_ref(v_f_1800_);
v___x_1812_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(v_pu_1799_, v_f_1800_, v_value_1811_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
if (lean_obj_tag(v___x_1812_) == 0)
{
lean_object* v_a_1813_; uint8_t v___x_1814_; 
v_a_1813_ = lean_ctor_get(v___x_1812_, 0);
lean_inc(v_a_1813_);
v___x_1814_ = lean_unbox(v_a_1813_);
lean_dec(v_a_1813_);
if (v___x_1814_ == 0)
{
lean_dec_ref(v___x_1812_);
v_a_1801_ = v_k_1810_;
goto _start;
}
else
{
lean_dec_ref(v_k_1810_);
lean_dec_ref(v_f_1800_);
return v___x_1812_;
}
}
else
{
lean_dec_ref(v_k_1810_);
lean_dec_ref(v_f_1800_);
return v___x_1812_;
}
}
case 2:
{
lean_object* v_decl_1816_; lean_object* v_k_1817_; lean_object* v___x_1818_; 
v_decl_1816_ = lean_ctor_get(v_a_1801_, 0);
lean_inc_ref_n(v_decl_1816_, 2);
v_k_1817_ = lean_ctor_get(v_a_1801_, 1);
lean_inc_ref(v_k_1817_);
lean_dec_ref(v_a_1801_);
lean_inc_ref(v_f_1800_);
lean_inc(v_a_1805_);
lean_inc_ref(v_a_1804_);
lean_inc(v_a_1803_);
lean_inc_ref(v_a_1802_);
v___x_1818_ = lean_apply_6(v_f_1800_, v_decl_1816_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_, lean_box(0));
if (lean_obj_tag(v___x_1818_) == 0)
{
lean_object* v_a_1819_; uint8_t v___x_1820_; 
v_a_1819_ = lean_ctor_get(v___x_1818_, 0);
lean_inc(v_a_1819_);
v___x_1820_ = lean_unbox(v_a_1819_);
lean_dec(v_a_1819_);
if (v___x_1820_ == 0)
{
lean_object* v_value_1821_; lean_object* v___x_1822_; 
lean_dec_ref(v___x_1818_);
v_value_1821_ = lean_ctor_get(v_decl_1816_, 4);
lean_inc_ref(v_value_1821_);
lean_dec_ref(v_decl_1816_);
lean_inc_ref(v_f_1800_);
v___x_1822_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(v_pu_1799_, v_f_1800_, v_value_1821_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
if (lean_obj_tag(v___x_1822_) == 0)
{
lean_object* v_a_1823_; uint8_t v___x_1824_; 
v_a_1823_ = lean_ctor_get(v___x_1822_, 0);
lean_inc(v_a_1823_);
v___x_1824_ = lean_unbox(v_a_1823_);
lean_dec(v_a_1823_);
if (v___x_1824_ == 0)
{
lean_dec_ref(v___x_1822_);
v_a_1801_ = v_k_1817_;
goto _start;
}
else
{
lean_dec_ref(v_k_1817_);
lean_dec_ref(v_f_1800_);
return v___x_1822_;
}
}
else
{
lean_dec_ref(v_k_1817_);
lean_dec_ref(v_f_1800_);
return v___x_1822_;
}
}
else
{
lean_dec_ref(v_k_1817_);
lean_dec_ref(v_decl_1816_);
lean_dec_ref(v_f_1800_);
return v___x_1818_;
}
}
else
{
lean_dec_ref(v_k_1817_);
lean_dec_ref(v_decl_1816_);
lean_dec_ref(v_f_1800_);
return v___x_1818_;
}
}
case 4:
{
lean_object* v_cases_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1845_; 
v_cases_1826_ = lean_ctor_get(v_a_1801_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v_a_1801_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1828_ = v_a_1801_;
v_isShared_1829_ = v_isSharedCheck_1845_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_cases_1826_);
lean_dec(v_a_1801_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1845_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v_alts_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; uint8_t v___x_1833_; 
v_alts_1830_ = lean_ctor_get(v_cases_1826_, 3);
lean_inc_ref(v_alts_1830_);
lean_dec_ref(v_cases_1826_);
v___x_1831_ = lean_unsigned_to_nat(0u);
v___x_1832_ = lean_array_get_size(v_alts_1830_);
v___x_1833_ = lean_nat_dec_lt(v___x_1831_, v___x_1832_);
if (v___x_1833_ == 0)
{
lean_object* v___x_1834_; lean_object* v___x_1836_; 
lean_dec_ref(v_alts_1830_);
lean_dec_ref(v_f_1800_);
v___x_1834_ = lean_box(v___x_1833_);
if (v_isShared_1829_ == 0)
{
lean_ctor_set_tag(v___x_1828_, 0);
lean_ctor_set(v___x_1828_, 0, v___x_1834_);
v___x_1836_ = v___x_1828_;
goto v_reusejp_1835_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v___x_1834_);
v___x_1836_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1835_;
}
v_reusejp_1835_:
{
return v___x_1836_;
}
}
else
{
if (v___x_1833_ == 0)
{
lean_object* v___x_1838_; lean_object* v___x_1840_; 
lean_dec_ref(v_alts_1830_);
lean_dec_ref(v_f_1800_);
v___x_1838_ = lean_box(v___x_1833_);
if (v_isShared_1829_ == 0)
{
lean_ctor_set_tag(v___x_1828_, 0);
lean_ctor_set(v___x_1828_, 0, v___x_1838_);
v___x_1840_ = v___x_1828_;
goto v_reusejp_1839_;
}
else
{
lean_object* v_reuseFailAlloc_1841_; 
v_reuseFailAlloc_1841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1841_, 0, v___x_1838_);
v___x_1840_ = v_reuseFailAlloc_1841_;
goto v_reusejp_1839_;
}
v_reusejp_1839_:
{
return v___x_1840_;
}
}
else
{
size_t v___x_1842_; size_t v___x_1843_; lean_object* v___x_1844_; 
lean_del_object(v___x_1828_);
v___x_1842_ = ((size_t)0ULL);
v___x_1843_ = lean_usize_of_nat(v___x_1832_);
v___x_1844_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0(v_pu_1799_, v_f_1800_, v_alts_1830_, v___x_1842_, v___x_1843_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
lean_dec_ref(v_alts_1830_);
return v___x_1844_;
}
}
}
}
case 7:
{
lean_object* v_k_1846_; 
v_k_1846_ = lean_ctor_get(v_a_1801_, 3);
lean_inc_ref(v_k_1846_);
lean_dec_ref(v_a_1801_);
v_a_1801_ = v_k_1846_;
goto _start;
}
case 8:
{
lean_object* v_k_1848_; 
v_k_1848_ = lean_ctor_get(v_a_1801_, 3);
lean_inc_ref(v_k_1848_);
lean_dec_ref(v_a_1801_);
v_a_1801_ = v_k_1848_;
goto _start;
}
case 9:
{
lean_object* v_k_1850_; 
v_k_1850_ = lean_ctor_get(v_a_1801_, 5);
lean_inc_ref(v_k_1850_);
lean_dec_ref(v_a_1801_);
v_a_1801_ = v_k_1850_;
goto _start;
}
case 10:
{
lean_object* v_k_1852_; 
v_k_1852_ = lean_ctor_get(v_a_1801_, 2);
lean_inc_ref(v_k_1852_);
lean_dec_ref(v_a_1801_);
v_a_1801_ = v_k_1852_;
goto _start;
}
case 11:
{
lean_object* v_k_1854_; 
v_k_1854_ = lean_ctor_get(v_a_1801_, 2);
lean_inc_ref(v_k_1854_);
lean_dec_ref(v_a_1801_);
v_a_1801_ = v_k_1854_;
goto _start;
}
case 12:
{
lean_object* v_k_1856_; 
v_k_1856_ = lean_ctor_get(v_a_1801_, 2);
lean_inc_ref(v_k_1856_);
lean_dec_ref(v_a_1801_);
v_a_1801_ = v_k_1856_;
goto _start;
}
case 13:
{
lean_object* v_k_1858_; 
v_k_1858_ = lean_ctor_get(v_a_1801_, 1);
lean_inc_ref(v_k_1858_);
lean_dec_ref(v_a_1801_);
v_a_1801_ = v_k_1858_;
goto _start;
}
default: 
{
uint8_t v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; 
lean_dec_ref(v_a_1801_);
lean_dec_ref(v_f_1800_);
v___x_1860_ = 0;
v___x_1861_ = lean_box(v___x_1860_);
v___x_1862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1862_, 0, v___x_1861_);
return v___x_1862_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0(uint8_t v_pu_1863_, lean_object* v_f_1864_, lean_object* v_as_1865_, size_t v_i_1866_, size_t v_stop_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_){
_start:
{
uint8_t v___x_1873_; 
v___x_1873_ = lean_usize_dec_eq(v_i_1866_, v_stop_1867_);
if (v___x_1873_ == 0)
{
uint8_t v___x_1874_; lean_object* v___y_1876_; lean_object* v___x_1891_; 
v___x_1874_ = 1;
v___x_1891_ = lean_array_uget_borrowed(v_as_1865_, v_i_1866_);
switch(lean_obj_tag(v___x_1891_))
{
case 0:
{
lean_object* v_code_1892_; 
v_code_1892_ = lean_ctor_get(v___x_1891_, 2);
lean_inc_ref(v_code_1892_);
v___y_1876_ = v_code_1892_;
goto v___jp_1875_;
}
case 1:
{
lean_object* v_code_1893_; 
v_code_1893_ = lean_ctor_get(v___x_1891_, 1);
lean_inc_ref(v_code_1893_);
v___y_1876_ = v_code_1893_;
goto v___jp_1875_;
}
default: 
{
lean_object* v_code_1894_; 
v_code_1894_ = lean_ctor_get(v___x_1891_, 0);
lean_inc_ref(v_code_1894_);
v___y_1876_ = v_code_1894_;
goto v___jp_1875_;
}
}
v___jp_1875_:
{
lean_object* v___x_1877_; 
lean_inc_ref(v_f_1864_);
v___x_1877_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(v_pu_1863_, v_f_1864_, v___y_1876_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_);
if (lean_obj_tag(v___x_1877_) == 0)
{
lean_object* v_a_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1890_; 
v_a_1878_ = lean_ctor_get(v___x_1877_, 0);
v_isSharedCheck_1890_ = !lean_is_exclusive(v___x_1877_);
if (v_isSharedCheck_1890_ == 0)
{
v___x_1880_ = v___x_1877_;
v_isShared_1881_ = v_isSharedCheck_1890_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_a_1878_);
lean_dec(v___x_1877_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1890_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
uint8_t v___x_1882_; 
v___x_1882_ = lean_unbox(v_a_1878_);
lean_dec(v_a_1878_);
if (v___x_1882_ == 0)
{
size_t v___x_1883_; size_t v___x_1884_; 
lean_del_object(v___x_1880_);
v___x_1883_ = ((size_t)1ULL);
v___x_1884_ = lean_usize_add(v_i_1866_, v___x_1883_);
v_i_1866_ = v___x_1884_;
goto _start;
}
else
{
lean_object* v___x_1886_; lean_object* v___x_1888_; 
lean_dec_ref(v_f_1864_);
v___x_1886_ = lean_box(v___x_1874_);
if (v_isShared_1881_ == 0)
{
lean_ctor_set(v___x_1880_, 0, v___x_1886_);
v___x_1888_ = v___x_1880_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1889_; 
v_reuseFailAlloc_1889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1889_, 0, v___x_1886_);
v___x_1888_ = v_reuseFailAlloc_1889_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
return v___x_1888_;
}
}
}
}
else
{
lean_dec_ref(v_f_1864_);
return v___x_1877_;
}
}
}
else
{
uint8_t v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; 
lean_dec_ref(v_f_1864_);
v___x_1895_ = 0;
v___x_1896_ = lean_box(v___x_1895_);
v___x_1897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1897_, 0, v___x_1896_);
return v___x_1897_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0___boxed(lean_object* v_pu_1898_, lean_object* v_f_1899_, lean_object* v_as_1900_, lean_object* v_i_1901_, lean_object* v_stop_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_){
_start:
{
uint8_t v_pu_boxed_1908_; size_t v_i_boxed_1909_; size_t v_stop_boxed_1910_; lean_object* v_res_1911_; 
v_pu_boxed_1908_ = lean_unbox(v_pu_1898_);
v_i_boxed_1909_ = lean_unbox_usize(v_i_1901_);
lean_dec(v_i_1901_);
v_stop_boxed_1910_ = lean_unbox_usize(v_stop_1902_);
lean_dec(v_stop_1902_);
v_res_1911_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0(v_pu_boxed_1908_, v_f_1899_, v_as_1900_, v_i_boxed_1909_, v_stop_boxed_1910_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_);
lean_dec(v___y_1906_);
lean_dec_ref(v___y_1905_);
lean_dec(v___y_1904_);
lean_dec_ref(v___y_1903_);
lean_dec_ref(v_as_1900_);
return v_res_1911_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go___boxed(lean_object* v_pu_1912_, lean_object* v_f_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_){
_start:
{
uint8_t v_pu_boxed_1920_; lean_object* v_res_1921_; 
v_pu_boxed_1920_ = lean_unbox(v_pu_1912_);
v_res_1921_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(v_pu_boxed_1920_, v_f_1913_, v_a_1914_, v_a_1915_, v_a_1916_, v_a_1917_, v_a_1918_);
lean_dec(v_a_1918_);
lean_dec_ref(v_a_1917_);
lean_dec(v_a_1916_);
lean_dec_ref(v_a_1915_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0(uint8_t v_pu_1922_, lean_object* v_f_1923_, lean_object* v_as_1924_, size_t v_i_1925_, size_t v_stop_1926_, lean_object* v_b_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_){
_start:
{
uint8_t v___x_1933_; 
v___x_1933_ = lean_usize_dec_eq(v_i_1925_, v_stop_1926_);
if (v___x_1933_ == 0)
{
lean_object* v___x_1934_; lean_object* v_value_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; 
v___x_1934_ = lean_array_uget_borrowed(v_as_1924_, v_i_1925_);
v_value_1935_ = lean_ctor_get(v___x_1934_, 1);
v___x_1936_ = lean_box(v_pu_1922_);
lean_inc_ref(v_f_1923_);
v___x_1937_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go___boxed), 8, 2);
lean_closure_set(v___x_1937_, 0, v___x_1936_);
lean_closure_set(v___x_1937_, 1, v_f_1923_);
lean_inc_ref(v_value_1935_);
v___x_1938_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_1935_, v___x_1937_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_);
if (lean_obj_tag(v___x_1938_) == 0)
{
lean_object* v_a_1939_; lean_object* v_a_1941_; uint8_t v___x_1945_; 
v_a_1939_ = lean_ctor_get(v___x_1938_, 0);
lean_inc(v_a_1939_);
lean_dec_ref(v___x_1938_);
v___x_1945_ = lean_unbox(v_a_1939_);
lean_dec(v_a_1939_);
if (v___x_1945_ == 0)
{
v_a_1941_ = v_b_1927_;
goto v___jp_1940_;
}
else
{
lean_object* v___x_1946_; 
lean_inc(v___x_1934_);
v___x_1946_ = lean_array_push(v_b_1927_, v___x_1934_);
v_a_1941_ = v___x_1946_;
goto v___jp_1940_;
}
v___jp_1940_:
{
size_t v___x_1942_; size_t v___x_1943_; 
v___x_1942_ = ((size_t)1ULL);
v___x_1943_ = lean_usize_add(v_i_1925_, v___x_1942_);
v_i_1925_ = v___x_1943_;
v_b_1927_ = v_a_1941_;
goto _start;
}
}
else
{
lean_object* v_a_1947_; lean_object* v___x_1949_; uint8_t v_isShared_1950_; uint8_t v_isSharedCheck_1954_; 
lean_dec_ref(v_b_1927_);
lean_dec_ref(v_f_1923_);
v_a_1947_ = lean_ctor_get(v___x_1938_, 0);
v_isSharedCheck_1954_ = !lean_is_exclusive(v___x_1938_);
if (v_isSharedCheck_1954_ == 0)
{
v___x_1949_ = v___x_1938_;
v_isShared_1950_ = v_isSharedCheck_1954_;
goto v_resetjp_1948_;
}
else
{
lean_inc(v_a_1947_);
lean_dec(v___x_1938_);
v___x_1949_ = lean_box(0);
v_isShared_1950_ = v_isSharedCheck_1954_;
goto v_resetjp_1948_;
}
v_resetjp_1948_:
{
lean_object* v___x_1952_; 
if (v_isShared_1950_ == 0)
{
v___x_1952_ = v___x_1949_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v_a_1947_);
v___x_1952_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
return v___x_1952_;
}
}
}
}
else
{
lean_object* v___x_1955_; 
lean_dec_ref(v_f_1923_);
v___x_1955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1955_, 0, v_b_1927_);
return v___x_1955_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0___boxed(lean_object* v_pu_1956_, lean_object* v_f_1957_, lean_object* v_as_1958_, lean_object* v_i_1959_, lean_object* v_stop_1960_, lean_object* v_b_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_){
_start:
{
uint8_t v_pu_boxed_1967_; size_t v_i_boxed_1968_; size_t v_stop_boxed_1969_; lean_object* v_res_1970_; 
v_pu_boxed_1967_ = lean_unbox(v_pu_1956_);
v_i_boxed_1968_ = lean_unbox_usize(v_i_1959_);
lean_dec(v_i_1959_);
v_stop_boxed_1969_ = lean_unbox_usize(v_stop_1960_);
lean_dec(v_stop_1960_);
v_res_1970_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0(v_pu_boxed_1967_, v_f_1957_, v_as_1958_, v_i_boxed_1968_, v_stop_boxed_1969_, v_b_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
lean_dec_ref(v_as_1958_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJp(uint8_t v_pu_1971_, lean_object* v_f_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_){
_start:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; uint8_t v___x_1982_; 
v___x_1979_ = lean_unsigned_to_nat(0u);
v___x_1980_ = lean_array_get_size(v_a_1973_);
v___x_1981_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0, &l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0);
v___x_1982_ = lean_nat_dec_lt(v___x_1979_, v___x_1980_);
if (v___x_1982_ == 0)
{
lean_object* v___x_1983_; 
lean_dec_ref(v_f_1972_);
v___x_1983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1983_, 0, v___x_1981_);
return v___x_1983_;
}
else
{
uint8_t v___x_1984_; 
v___x_1984_ = lean_nat_dec_le(v___x_1980_, v___x_1980_);
if (v___x_1984_ == 0)
{
if (v___x_1982_ == 0)
{
lean_object* v___x_1985_; 
lean_dec_ref(v_f_1972_);
v___x_1985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1981_);
return v___x_1985_;
}
else
{
size_t v___x_1986_; size_t v___x_1987_; lean_object* v___x_1988_; 
v___x_1986_ = ((size_t)0ULL);
v___x_1987_ = lean_usize_of_nat(v___x_1980_);
v___x_1988_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0(v_pu_1971_, v_f_1972_, v_a_1973_, v___x_1986_, v___x_1987_, v___x_1981_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_);
return v___x_1988_;
}
}
else
{
size_t v___x_1989_; size_t v___x_1990_; lean_object* v___x_1991_; 
v___x_1989_ = ((size_t)0ULL);
v___x_1990_ = lean_usize_of_nat(v___x_1980_);
v___x_1991_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0(v_pu_1971_, v_f_1972_, v_a_1973_, v___x_1989_, v___x_1990_, v___x_1981_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_);
return v___x_1991_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJp___boxed(lean_object* v_pu_1992_, lean_object* v_f_1993_, lean_object* v_a_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_){
_start:
{
uint8_t v_pu_boxed_2000_; lean_object* v_res_2001_; 
v_pu_boxed_2000_ = lean_unbox(v_pu_1992_);
v_res_2001_ = l_Lean_Compiler_LCNF_Probe_filterByJp(v_pu_boxed_2000_, v_f_1993_, v_a_1994_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_);
lean_dec(v_a_1998_);
lean_dec_ref(v_a_1997_);
lean_dec(v_a_1996_);
lean_dec_ref(v_a_1995_);
lean_dec_ref(v_a_1994_);
return v_res_2001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(uint8_t v_pu_2002_, lean_object* v_f_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_){
_start:
{
switch(lean_obj_tag(v_a_2004_))
{
case 0:
{
lean_object* v_k_2010_; 
v_k_2010_ = lean_ctor_get(v_a_2004_, 1);
lean_inc_ref(v_k_2010_);
lean_dec_ref(v_a_2004_);
v_a_2004_ = v_k_2010_;
goto _start;
}
case 1:
{
lean_object* v_decl_2012_; lean_object* v_k_2013_; lean_object* v___x_2014_; 
v_decl_2012_ = lean_ctor_get(v_a_2004_, 0);
lean_inc_ref_n(v_decl_2012_, 2);
v_k_2013_ = lean_ctor_get(v_a_2004_, 1);
lean_inc_ref(v_k_2013_);
lean_dec_ref(v_a_2004_);
lean_inc_ref(v_f_2003_);
lean_inc(v_a_2008_);
lean_inc_ref(v_a_2007_);
lean_inc(v_a_2006_);
lean_inc_ref(v_a_2005_);
v___x_2014_ = lean_apply_6(v_f_2003_, v_decl_2012_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, lean_box(0));
if (lean_obj_tag(v___x_2014_) == 0)
{
lean_object* v_a_2015_; uint8_t v___x_2016_; 
v_a_2015_ = lean_ctor_get(v___x_2014_, 0);
lean_inc(v_a_2015_);
v___x_2016_ = lean_unbox(v_a_2015_);
lean_dec(v_a_2015_);
if (v___x_2016_ == 0)
{
lean_object* v_value_2017_; lean_object* v___x_2018_; 
lean_dec_ref(v___x_2014_);
v_value_2017_ = lean_ctor_get(v_decl_2012_, 4);
lean_inc_ref(v_value_2017_);
lean_dec_ref(v_decl_2012_);
lean_inc_ref(v_f_2003_);
v___x_2018_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(v_pu_2002_, v_f_2003_, v_value_2017_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_);
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_object* v_a_2019_; uint8_t v___x_2020_; 
v_a_2019_ = lean_ctor_get(v___x_2018_, 0);
lean_inc(v_a_2019_);
v___x_2020_ = lean_unbox(v_a_2019_);
lean_dec(v_a_2019_);
if (v___x_2020_ == 0)
{
lean_dec_ref(v___x_2018_);
v_a_2004_ = v_k_2013_;
goto _start;
}
else
{
lean_dec_ref(v_k_2013_);
lean_dec_ref(v_f_2003_);
return v___x_2018_;
}
}
else
{
lean_dec_ref(v_k_2013_);
lean_dec_ref(v_f_2003_);
return v___x_2018_;
}
}
else
{
lean_dec_ref(v_k_2013_);
lean_dec_ref(v_decl_2012_);
lean_dec_ref(v_f_2003_);
return v___x_2014_;
}
}
else
{
lean_dec_ref(v_k_2013_);
lean_dec_ref(v_decl_2012_);
lean_dec_ref(v_f_2003_);
return v___x_2014_;
}
}
case 2:
{
lean_object* v_decl_2022_; lean_object* v_k_2023_; lean_object* v___x_2024_; 
v_decl_2022_ = lean_ctor_get(v_a_2004_, 0);
lean_inc_ref_n(v_decl_2022_, 2);
v_k_2023_ = lean_ctor_get(v_a_2004_, 1);
lean_inc_ref(v_k_2023_);
lean_dec_ref(v_a_2004_);
lean_inc_ref(v_f_2003_);
lean_inc(v_a_2008_);
lean_inc_ref(v_a_2007_);
lean_inc(v_a_2006_);
lean_inc_ref(v_a_2005_);
v___x_2024_ = lean_apply_6(v_f_2003_, v_decl_2022_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, lean_box(0));
if (lean_obj_tag(v___x_2024_) == 0)
{
lean_object* v_a_2025_; uint8_t v___x_2026_; 
v_a_2025_ = lean_ctor_get(v___x_2024_, 0);
lean_inc(v_a_2025_);
v___x_2026_ = lean_unbox(v_a_2025_);
lean_dec(v_a_2025_);
if (v___x_2026_ == 0)
{
lean_object* v_value_2027_; lean_object* v___x_2028_; 
lean_dec_ref(v___x_2024_);
v_value_2027_ = lean_ctor_get(v_decl_2022_, 4);
lean_inc_ref(v_value_2027_);
lean_dec_ref(v_decl_2022_);
lean_inc_ref(v_f_2003_);
v___x_2028_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(v_pu_2002_, v_f_2003_, v_value_2027_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_);
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v_a_2029_; uint8_t v___x_2030_; 
v_a_2029_ = lean_ctor_get(v___x_2028_, 0);
lean_inc(v_a_2029_);
v___x_2030_ = lean_unbox(v_a_2029_);
lean_dec(v_a_2029_);
if (v___x_2030_ == 0)
{
lean_dec_ref(v___x_2028_);
v_a_2004_ = v_k_2023_;
goto _start;
}
else
{
lean_dec_ref(v_k_2023_);
lean_dec_ref(v_f_2003_);
return v___x_2028_;
}
}
else
{
lean_dec_ref(v_k_2023_);
lean_dec_ref(v_f_2003_);
return v___x_2028_;
}
}
else
{
lean_dec_ref(v_k_2023_);
lean_dec_ref(v_decl_2022_);
lean_dec_ref(v_f_2003_);
return v___x_2024_;
}
}
else
{
lean_dec_ref(v_k_2023_);
lean_dec_ref(v_decl_2022_);
lean_dec_ref(v_f_2003_);
return v___x_2024_;
}
}
case 4:
{
lean_object* v_cases_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2051_; 
v_cases_2032_ = lean_ctor_get(v_a_2004_, 0);
v_isSharedCheck_2051_ = !lean_is_exclusive(v_a_2004_);
if (v_isSharedCheck_2051_ == 0)
{
v___x_2034_ = v_a_2004_;
v_isShared_2035_ = v_isSharedCheck_2051_;
goto v_resetjp_2033_;
}
else
{
lean_inc(v_cases_2032_);
lean_dec(v_a_2004_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2051_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
lean_object* v_alts_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; uint8_t v___x_2039_; 
v_alts_2036_ = lean_ctor_get(v_cases_2032_, 3);
lean_inc_ref(v_alts_2036_);
lean_dec_ref(v_cases_2032_);
v___x_2037_ = lean_unsigned_to_nat(0u);
v___x_2038_ = lean_array_get_size(v_alts_2036_);
v___x_2039_ = lean_nat_dec_lt(v___x_2037_, v___x_2038_);
if (v___x_2039_ == 0)
{
lean_object* v___x_2040_; lean_object* v___x_2042_; 
lean_dec_ref(v_alts_2036_);
lean_dec_ref(v_f_2003_);
v___x_2040_ = lean_box(v___x_2039_);
if (v_isShared_2035_ == 0)
{
lean_ctor_set_tag(v___x_2034_, 0);
lean_ctor_set(v___x_2034_, 0, v___x_2040_);
v___x_2042_ = v___x_2034_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2043_; 
v_reuseFailAlloc_2043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2043_, 0, v___x_2040_);
v___x_2042_ = v_reuseFailAlloc_2043_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
return v___x_2042_;
}
}
else
{
if (v___x_2039_ == 0)
{
lean_object* v___x_2044_; lean_object* v___x_2046_; 
lean_dec_ref(v_alts_2036_);
lean_dec_ref(v_f_2003_);
v___x_2044_ = lean_box(v___x_2039_);
if (v_isShared_2035_ == 0)
{
lean_ctor_set_tag(v___x_2034_, 0);
lean_ctor_set(v___x_2034_, 0, v___x_2044_);
v___x_2046_ = v___x_2034_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v___x_2044_);
v___x_2046_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
return v___x_2046_;
}
}
else
{
size_t v___x_2048_; size_t v___x_2049_; lean_object* v___x_2050_; 
lean_del_object(v___x_2034_);
v___x_2048_ = ((size_t)0ULL);
v___x_2049_ = lean_usize_of_nat(v___x_2038_);
v___x_2050_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0(v_pu_2002_, v_f_2003_, v_alts_2036_, v___x_2048_, v___x_2049_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_);
lean_dec_ref(v_alts_2036_);
return v___x_2050_;
}
}
}
}
case 7:
{
lean_object* v_k_2052_; 
v_k_2052_ = lean_ctor_get(v_a_2004_, 3);
lean_inc_ref(v_k_2052_);
lean_dec_ref(v_a_2004_);
v_a_2004_ = v_k_2052_;
goto _start;
}
case 8:
{
lean_object* v_k_2054_; 
v_k_2054_ = lean_ctor_get(v_a_2004_, 3);
lean_inc_ref(v_k_2054_);
lean_dec_ref(v_a_2004_);
v_a_2004_ = v_k_2054_;
goto _start;
}
case 9:
{
lean_object* v_k_2056_; 
v_k_2056_ = lean_ctor_get(v_a_2004_, 5);
lean_inc_ref(v_k_2056_);
lean_dec_ref(v_a_2004_);
v_a_2004_ = v_k_2056_;
goto _start;
}
case 10:
{
lean_object* v_k_2058_; 
v_k_2058_ = lean_ctor_get(v_a_2004_, 2);
lean_inc_ref(v_k_2058_);
lean_dec_ref(v_a_2004_);
v_a_2004_ = v_k_2058_;
goto _start;
}
case 11:
{
lean_object* v_k_2060_; 
v_k_2060_ = lean_ctor_get(v_a_2004_, 2);
lean_inc_ref(v_k_2060_);
lean_dec_ref(v_a_2004_);
v_a_2004_ = v_k_2060_;
goto _start;
}
case 12:
{
lean_object* v_k_2062_; 
v_k_2062_ = lean_ctor_get(v_a_2004_, 2);
lean_inc_ref(v_k_2062_);
lean_dec_ref(v_a_2004_);
v_a_2004_ = v_k_2062_;
goto _start;
}
case 13:
{
lean_object* v_k_2064_; 
v_k_2064_ = lean_ctor_get(v_a_2004_, 1);
lean_inc_ref(v_k_2064_);
lean_dec_ref(v_a_2004_);
v_a_2004_ = v_k_2064_;
goto _start;
}
default: 
{
uint8_t v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; 
lean_dec_ref(v_a_2004_);
lean_dec_ref(v_f_2003_);
v___x_2066_ = 0;
v___x_2067_ = lean_box(v___x_2066_);
v___x_2068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2067_);
return v___x_2068_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0(uint8_t v_pu_2069_, lean_object* v_f_2070_, lean_object* v_as_2071_, size_t v_i_2072_, size_t v_stop_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_){
_start:
{
uint8_t v___x_2079_; 
v___x_2079_ = lean_usize_dec_eq(v_i_2072_, v_stop_2073_);
if (v___x_2079_ == 0)
{
uint8_t v___x_2080_; lean_object* v___y_2082_; lean_object* v___x_2097_; 
v___x_2080_ = 1;
v___x_2097_ = lean_array_uget_borrowed(v_as_2071_, v_i_2072_);
switch(lean_obj_tag(v___x_2097_))
{
case 0:
{
lean_object* v_code_2098_; 
v_code_2098_ = lean_ctor_get(v___x_2097_, 2);
lean_inc_ref(v_code_2098_);
v___y_2082_ = v_code_2098_;
goto v___jp_2081_;
}
case 1:
{
lean_object* v_code_2099_; 
v_code_2099_ = lean_ctor_get(v___x_2097_, 1);
lean_inc_ref(v_code_2099_);
v___y_2082_ = v_code_2099_;
goto v___jp_2081_;
}
default: 
{
lean_object* v_code_2100_; 
v_code_2100_ = lean_ctor_get(v___x_2097_, 0);
lean_inc_ref(v_code_2100_);
v___y_2082_ = v_code_2100_;
goto v___jp_2081_;
}
}
v___jp_2081_:
{
lean_object* v___x_2083_; 
lean_inc_ref(v_f_2070_);
v___x_2083_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(v_pu_2069_, v_f_2070_, v___y_2082_, v___y_2074_, v___y_2075_, v___y_2076_, v___y_2077_);
if (lean_obj_tag(v___x_2083_) == 0)
{
lean_object* v_a_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2096_; 
v_a_2084_ = lean_ctor_get(v___x_2083_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2083_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2086_ = v___x_2083_;
v_isShared_2087_ = v_isSharedCheck_2096_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_a_2084_);
lean_dec(v___x_2083_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2096_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
uint8_t v___x_2088_; 
v___x_2088_ = lean_unbox(v_a_2084_);
lean_dec(v_a_2084_);
if (v___x_2088_ == 0)
{
size_t v___x_2089_; size_t v___x_2090_; 
lean_del_object(v___x_2086_);
v___x_2089_ = ((size_t)1ULL);
v___x_2090_ = lean_usize_add(v_i_2072_, v___x_2089_);
v_i_2072_ = v___x_2090_;
goto _start;
}
else
{
lean_object* v___x_2092_; lean_object* v___x_2094_; 
lean_dec_ref(v_f_2070_);
v___x_2092_ = lean_box(v___x_2080_);
if (v_isShared_2087_ == 0)
{
lean_ctor_set(v___x_2086_, 0, v___x_2092_);
v___x_2094_ = v___x_2086_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v___x_2092_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
}
else
{
lean_dec_ref(v_f_2070_);
return v___x_2083_;
}
}
}
else
{
uint8_t v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; 
lean_dec_ref(v_f_2070_);
v___x_2101_ = 0;
v___x_2102_ = lean_box(v___x_2101_);
v___x_2103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2102_);
return v___x_2103_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0___boxed(lean_object* v_pu_2104_, lean_object* v_f_2105_, lean_object* v_as_2106_, lean_object* v_i_2107_, lean_object* v_stop_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_){
_start:
{
uint8_t v_pu_boxed_2114_; size_t v_i_boxed_2115_; size_t v_stop_boxed_2116_; lean_object* v_res_2117_; 
v_pu_boxed_2114_ = lean_unbox(v_pu_2104_);
v_i_boxed_2115_ = lean_unbox_usize(v_i_2107_);
lean_dec(v_i_2107_);
v_stop_boxed_2116_ = lean_unbox_usize(v_stop_2108_);
lean_dec(v_stop_2108_);
v_res_2117_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0(v_pu_boxed_2114_, v_f_2105_, v_as_2106_, v_i_boxed_2115_, v_stop_boxed_2116_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_);
lean_dec(v___y_2112_);
lean_dec_ref(v___y_2111_);
lean_dec(v___y_2110_);
lean_dec_ref(v___y_2109_);
lean_dec_ref(v_as_2106_);
return v_res_2117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go___boxed(lean_object* v_pu_2118_, lean_object* v_f_2119_, lean_object* v_a_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_){
_start:
{
uint8_t v_pu_boxed_2126_; lean_object* v_res_2127_; 
v_pu_boxed_2126_ = lean_unbox(v_pu_2118_);
v_res_2127_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(v_pu_boxed_2126_, v_f_2119_, v_a_2120_, v_a_2121_, v_a_2122_, v_a_2123_, v_a_2124_);
lean_dec(v_a_2124_);
lean_dec_ref(v_a_2123_);
lean_dec(v_a_2122_);
lean_dec_ref(v_a_2121_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0(uint8_t v_pu_2128_, lean_object* v_f_2129_, lean_object* v_as_2130_, size_t v_i_2131_, size_t v_stop_2132_, lean_object* v_b_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_){
_start:
{
uint8_t v___x_2139_; 
v___x_2139_ = lean_usize_dec_eq(v_i_2131_, v_stop_2132_);
if (v___x_2139_ == 0)
{
lean_object* v___x_2140_; lean_object* v_value_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; 
v___x_2140_ = lean_array_uget_borrowed(v_as_2130_, v_i_2131_);
v_value_2141_ = lean_ctor_get(v___x_2140_, 1);
v___x_2142_ = lean_box(v_pu_2128_);
lean_inc_ref(v_f_2129_);
v___x_2143_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go___boxed), 8, 2);
lean_closure_set(v___x_2143_, 0, v___x_2142_);
lean_closure_set(v___x_2143_, 1, v_f_2129_);
lean_inc_ref(v_value_2141_);
v___x_2144_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2141_, v___x_2143_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_);
if (lean_obj_tag(v___x_2144_) == 0)
{
lean_object* v_a_2145_; lean_object* v_a_2147_; uint8_t v___x_2151_; 
v_a_2145_ = lean_ctor_get(v___x_2144_, 0);
lean_inc(v_a_2145_);
lean_dec_ref(v___x_2144_);
v___x_2151_ = lean_unbox(v_a_2145_);
lean_dec(v_a_2145_);
if (v___x_2151_ == 0)
{
v_a_2147_ = v_b_2133_;
goto v___jp_2146_;
}
else
{
lean_object* v___x_2152_; 
lean_inc(v___x_2140_);
v___x_2152_ = lean_array_push(v_b_2133_, v___x_2140_);
v_a_2147_ = v___x_2152_;
goto v___jp_2146_;
}
v___jp_2146_:
{
size_t v___x_2148_; size_t v___x_2149_; 
v___x_2148_ = ((size_t)1ULL);
v___x_2149_ = lean_usize_add(v_i_2131_, v___x_2148_);
v_i_2131_ = v___x_2149_;
v_b_2133_ = v_a_2147_;
goto _start;
}
}
else
{
lean_object* v_a_2153_; lean_object* v___x_2155_; uint8_t v_isShared_2156_; uint8_t v_isSharedCheck_2160_; 
lean_dec_ref(v_b_2133_);
lean_dec_ref(v_f_2129_);
v_a_2153_ = lean_ctor_get(v___x_2144_, 0);
v_isSharedCheck_2160_ = !lean_is_exclusive(v___x_2144_);
if (v_isSharedCheck_2160_ == 0)
{
v___x_2155_ = v___x_2144_;
v_isShared_2156_ = v_isSharedCheck_2160_;
goto v_resetjp_2154_;
}
else
{
lean_inc(v_a_2153_);
lean_dec(v___x_2144_);
v___x_2155_ = lean_box(0);
v_isShared_2156_ = v_isSharedCheck_2160_;
goto v_resetjp_2154_;
}
v_resetjp_2154_:
{
lean_object* v___x_2158_; 
if (v_isShared_2156_ == 0)
{
v___x_2158_ = v___x_2155_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v_a_2153_);
v___x_2158_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
return v___x_2158_;
}
}
}
}
else
{
lean_object* v___x_2161_; 
lean_dec_ref(v_f_2129_);
v___x_2161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2161_, 0, v_b_2133_);
return v___x_2161_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0___boxed(lean_object* v_pu_2162_, lean_object* v_f_2163_, lean_object* v_as_2164_, lean_object* v_i_2165_, lean_object* v_stop_2166_, lean_object* v_b_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_){
_start:
{
uint8_t v_pu_boxed_2173_; size_t v_i_boxed_2174_; size_t v_stop_boxed_2175_; lean_object* v_res_2176_; 
v_pu_boxed_2173_ = lean_unbox(v_pu_2162_);
v_i_boxed_2174_ = lean_unbox_usize(v_i_2165_);
lean_dec(v_i_2165_);
v_stop_boxed_2175_ = lean_unbox_usize(v_stop_2166_);
lean_dec(v_stop_2166_);
v_res_2176_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0(v_pu_boxed_2173_, v_f_2163_, v_as_2164_, v_i_boxed_2174_, v_stop_boxed_2175_, v_b_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_);
lean_dec(v___y_2171_);
lean_dec_ref(v___y_2170_);
lean_dec(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec_ref(v_as_2164_);
return v_res_2176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFunDecl(uint8_t v_pu_2177_, lean_object* v_f_2178_, lean_object* v_a_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_){
_start:
{
lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; uint8_t v___x_2188_; 
v___x_2185_ = lean_unsigned_to_nat(0u);
v___x_2186_ = lean_array_get_size(v_a_2179_);
v___x_2187_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0, &l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0);
v___x_2188_ = lean_nat_dec_lt(v___x_2185_, v___x_2186_);
if (v___x_2188_ == 0)
{
lean_object* v___x_2189_; 
lean_dec_ref(v_f_2178_);
v___x_2189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2189_, 0, v___x_2187_);
return v___x_2189_;
}
else
{
uint8_t v___x_2190_; 
v___x_2190_ = lean_nat_dec_le(v___x_2186_, v___x_2186_);
if (v___x_2190_ == 0)
{
if (v___x_2188_ == 0)
{
lean_object* v___x_2191_; 
lean_dec_ref(v_f_2178_);
v___x_2191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2191_, 0, v___x_2187_);
return v___x_2191_;
}
else
{
size_t v___x_2192_; size_t v___x_2193_; lean_object* v___x_2194_; 
v___x_2192_ = ((size_t)0ULL);
v___x_2193_ = lean_usize_of_nat(v___x_2186_);
v___x_2194_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0(v_pu_2177_, v_f_2178_, v_a_2179_, v___x_2192_, v___x_2193_, v___x_2187_, v_a_2180_, v_a_2181_, v_a_2182_, v_a_2183_);
return v___x_2194_;
}
}
else
{
size_t v___x_2195_; size_t v___x_2196_; lean_object* v___x_2197_; 
v___x_2195_ = ((size_t)0ULL);
v___x_2196_ = lean_usize_of_nat(v___x_2186_);
v___x_2197_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0(v_pu_2177_, v_f_2178_, v_a_2179_, v___x_2195_, v___x_2196_, v___x_2187_, v_a_2180_, v_a_2181_, v_a_2182_, v_a_2183_);
return v___x_2197_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFunDecl___boxed(lean_object* v_pu_2198_, lean_object* v_f_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_, lean_object* v_a_2205_){
_start:
{
uint8_t v_pu_boxed_2206_; lean_object* v_res_2207_; 
v_pu_boxed_2206_ = lean_unbox(v_pu_2198_);
v_res_2207_ = l_Lean_Compiler_LCNF_Probe_filterByFunDecl(v_pu_boxed_2206_, v_f_2199_, v_a_2200_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
lean_dec(v_a_2204_);
lean_dec_ref(v_a_2203_);
lean_dec(v_a_2202_);
lean_dec_ref(v_a_2201_);
lean_dec_ref(v_a_2200_);
return v_res_2207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(uint8_t v_pu_2208_, lean_object* v_f_2209_, lean_object* v_a_2210_, lean_object* v_a_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_, lean_object* v_a_2214_){
_start:
{
switch(lean_obj_tag(v_a_2210_))
{
case 0:
{
lean_object* v_k_2216_; 
v_k_2216_ = lean_ctor_get(v_a_2210_, 1);
lean_inc_ref(v_k_2216_);
lean_dec_ref(v_a_2210_);
v_a_2210_ = v_k_2216_;
goto _start;
}
case 1:
{
lean_object* v_decl_2218_; lean_object* v_k_2219_; lean_object* v_value_2220_; lean_object* v___x_2221_; 
v_decl_2218_ = lean_ctor_get(v_a_2210_, 0);
lean_inc_ref(v_decl_2218_);
v_k_2219_ = lean_ctor_get(v_a_2210_, 1);
lean_inc_ref(v_k_2219_);
lean_dec_ref(v_a_2210_);
v_value_2220_ = lean_ctor_get(v_decl_2218_, 4);
lean_inc_ref(v_value_2220_);
lean_dec_ref(v_decl_2218_);
lean_inc_ref(v_f_2209_);
v___x_2221_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(v_pu_2208_, v_f_2209_, v_value_2220_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2221_) == 0)
{
lean_object* v_a_2222_; uint8_t v___x_2223_; 
v_a_2222_ = lean_ctor_get(v___x_2221_, 0);
lean_inc(v_a_2222_);
v___x_2223_ = lean_unbox(v_a_2222_);
lean_dec(v_a_2222_);
if (v___x_2223_ == 0)
{
lean_dec_ref(v___x_2221_);
v_a_2210_ = v_k_2219_;
goto _start;
}
else
{
lean_dec_ref(v_k_2219_);
lean_dec_ref(v_f_2209_);
return v___x_2221_;
}
}
else
{
lean_dec_ref(v_k_2219_);
lean_dec_ref(v_f_2209_);
return v___x_2221_;
}
}
case 2:
{
lean_object* v_decl_2225_; lean_object* v_k_2226_; lean_object* v_value_2227_; lean_object* v___x_2228_; 
v_decl_2225_ = lean_ctor_get(v_a_2210_, 0);
lean_inc_ref(v_decl_2225_);
v_k_2226_ = lean_ctor_get(v_a_2210_, 1);
lean_inc_ref(v_k_2226_);
lean_dec_ref(v_a_2210_);
v_value_2227_ = lean_ctor_get(v_decl_2225_, 4);
lean_inc_ref(v_value_2227_);
lean_dec_ref(v_decl_2225_);
lean_inc_ref(v_f_2209_);
v___x_2228_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(v_pu_2208_, v_f_2209_, v_value_2227_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
if (lean_obj_tag(v___x_2228_) == 0)
{
lean_object* v_a_2229_; uint8_t v___x_2230_; 
v_a_2229_ = lean_ctor_get(v___x_2228_, 0);
lean_inc(v_a_2229_);
v___x_2230_ = lean_unbox(v_a_2229_);
lean_dec(v_a_2229_);
if (v___x_2230_ == 0)
{
lean_dec_ref(v___x_2228_);
v_a_2210_ = v_k_2226_;
goto _start;
}
else
{
lean_dec_ref(v_k_2226_);
lean_dec_ref(v_f_2209_);
return v___x_2228_;
}
}
else
{
lean_dec_ref(v_k_2226_);
lean_dec_ref(v_f_2209_);
return v___x_2228_;
}
}
case 4:
{
lean_object* v_cases_2232_; lean_object* v___x_2233_; 
v_cases_2232_ = lean_ctor_get(v_a_2210_, 0);
lean_inc_ref_n(v_cases_2232_, 2);
lean_dec_ref(v_a_2210_);
lean_inc_ref(v_f_2209_);
lean_inc(v_a_2214_);
lean_inc_ref(v_a_2213_);
lean_inc(v_a_2212_);
lean_inc_ref(v_a_2211_);
v___x_2233_ = lean_apply_6(v_f_2209_, v_cases_2232_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_, lean_box(0));
if (lean_obj_tag(v___x_2233_) == 0)
{
lean_object* v_a_2234_; uint8_t v___x_2235_; 
v_a_2234_ = lean_ctor_get(v___x_2233_, 0);
lean_inc(v_a_2234_);
v___x_2235_ = lean_unbox(v_a_2234_);
lean_dec(v_a_2234_);
if (v___x_2235_ == 0)
{
lean_object* v_alts_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; uint8_t v___x_2239_; 
v_alts_2236_ = lean_ctor_get(v_cases_2232_, 3);
lean_inc_ref(v_alts_2236_);
lean_dec_ref(v_cases_2232_);
v___x_2237_ = lean_unsigned_to_nat(0u);
v___x_2238_ = lean_array_get_size(v_alts_2236_);
v___x_2239_ = lean_nat_dec_lt(v___x_2237_, v___x_2238_);
if (v___x_2239_ == 0)
{
lean_dec_ref(v_alts_2236_);
lean_dec_ref(v_f_2209_);
return v___x_2233_;
}
else
{
if (v___x_2239_ == 0)
{
lean_dec_ref(v_alts_2236_);
lean_dec_ref(v_f_2209_);
return v___x_2233_;
}
else
{
size_t v___x_2240_; size_t v___x_2241_; lean_object* v___x_2242_; 
lean_dec_ref(v___x_2233_);
v___x_2240_ = ((size_t)0ULL);
v___x_2241_ = lean_usize_of_nat(v___x_2238_);
v___x_2242_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0(v_pu_2208_, v_f_2209_, v_alts_2236_, v___x_2240_, v___x_2241_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_);
lean_dec_ref(v_alts_2236_);
return v___x_2242_;
}
}
}
else
{
lean_dec_ref(v_cases_2232_);
lean_dec_ref(v_f_2209_);
return v___x_2233_;
}
}
else
{
lean_dec_ref(v_cases_2232_);
lean_dec_ref(v_f_2209_);
return v___x_2233_;
}
}
case 7:
{
lean_object* v_k_2243_; 
v_k_2243_ = lean_ctor_get(v_a_2210_, 3);
lean_inc_ref(v_k_2243_);
lean_dec_ref(v_a_2210_);
v_a_2210_ = v_k_2243_;
goto _start;
}
case 8:
{
lean_object* v_k_2245_; 
v_k_2245_ = lean_ctor_get(v_a_2210_, 3);
lean_inc_ref(v_k_2245_);
lean_dec_ref(v_a_2210_);
v_a_2210_ = v_k_2245_;
goto _start;
}
case 9:
{
lean_object* v_k_2247_; 
v_k_2247_ = lean_ctor_get(v_a_2210_, 5);
lean_inc_ref(v_k_2247_);
lean_dec_ref(v_a_2210_);
v_a_2210_ = v_k_2247_;
goto _start;
}
case 10:
{
lean_object* v_k_2249_; 
v_k_2249_ = lean_ctor_get(v_a_2210_, 2);
lean_inc_ref(v_k_2249_);
lean_dec_ref(v_a_2210_);
v_a_2210_ = v_k_2249_;
goto _start;
}
case 11:
{
lean_object* v_k_2251_; 
v_k_2251_ = lean_ctor_get(v_a_2210_, 2);
lean_inc_ref(v_k_2251_);
lean_dec_ref(v_a_2210_);
v_a_2210_ = v_k_2251_;
goto _start;
}
case 12:
{
lean_object* v_k_2253_; 
v_k_2253_ = lean_ctor_get(v_a_2210_, 2);
lean_inc_ref(v_k_2253_);
lean_dec_ref(v_a_2210_);
v_a_2210_ = v_k_2253_;
goto _start;
}
case 13:
{
lean_object* v_k_2255_; 
v_k_2255_ = lean_ctor_get(v_a_2210_, 1);
lean_inc_ref(v_k_2255_);
lean_dec_ref(v_a_2210_);
v_a_2210_ = v_k_2255_;
goto _start;
}
default: 
{
uint8_t v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
lean_dec_ref(v_a_2210_);
lean_dec_ref(v_f_2209_);
v___x_2257_ = 0;
v___x_2258_ = lean_box(v___x_2257_);
v___x_2259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2258_);
return v___x_2259_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0(uint8_t v_pu_2260_, lean_object* v_f_2261_, lean_object* v_as_2262_, size_t v_i_2263_, size_t v_stop_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_){
_start:
{
uint8_t v___x_2270_; 
v___x_2270_ = lean_usize_dec_eq(v_i_2263_, v_stop_2264_);
if (v___x_2270_ == 0)
{
uint8_t v___x_2271_; lean_object* v___y_2273_; lean_object* v___x_2288_; 
v___x_2271_ = 1;
v___x_2288_ = lean_array_uget_borrowed(v_as_2262_, v_i_2263_);
switch(lean_obj_tag(v___x_2288_))
{
case 0:
{
lean_object* v_code_2289_; 
v_code_2289_ = lean_ctor_get(v___x_2288_, 2);
lean_inc_ref(v_code_2289_);
v___y_2273_ = v_code_2289_;
goto v___jp_2272_;
}
case 1:
{
lean_object* v_code_2290_; 
v_code_2290_ = lean_ctor_get(v___x_2288_, 1);
lean_inc_ref(v_code_2290_);
v___y_2273_ = v_code_2290_;
goto v___jp_2272_;
}
default: 
{
lean_object* v_code_2291_; 
v_code_2291_ = lean_ctor_get(v___x_2288_, 0);
lean_inc_ref(v_code_2291_);
v___y_2273_ = v_code_2291_;
goto v___jp_2272_;
}
}
v___jp_2272_:
{
lean_object* v___x_2274_; 
lean_inc_ref(v_f_2261_);
v___x_2274_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(v_pu_2260_, v_f_2261_, v___y_2273_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_);
if (lean_obj_tag(v___x_2274_) == 0)
{
lean_object* v_a_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2287_; 
v_a_2275_ = lean_ctor_get(v___x_2274_, 0);
v_isSharedCheck_2287_ = !lean_is_exclusive(v___x_2274_);
if (v_isSharedCheck_2287_ == 0)
{
v___x_2277_ = v___x_2274_;
v_isShared_2278_ = v_isSharedCheck_2287_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_a_2275_);
lean_dec(v___x_2274_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2287_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
uint8_t v___x_2279_; 
v___x_2279_ = lean_unbox(v_a_2275_);
lean_dec(v_a_2275_);
if (v___x_2279_ == 0)
{
size_t v___x_2280_; size_t v___x_2281_; 
lean_del_object(v___x_2277_);
v___x_2280_ = ((size_t)1ULL);
v___x_2281_ = lean_usize_add(v_i_2263_, v___x_2280_);
v_i_2263_ = v___x_2281_;
goto _start;
}
else
{
lean_object* v___x_2283_; lean_object* v___x_2285_; 
lean_dec_ref(v_f_2261_);
v___x_2283_ = lean_box(v___x_2271_);
if (v_isShared_2278_ == 0)
{
lean_ctor_set(v___x_2277_, 0, v___x_2283_);
v___x_2285_ = v___x_2277_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v___x_2283_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
return v___x_2285_;
}
}
}
}
else
{
lean_dec_ref(v_f_2261_);
return v___x_2274_;
}
}
}
else
{
uint8_t v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; 
lean_dec_ref(v_f_2261_);
v___x_2292_ = 0;
v___x_2293_ = lean_box(v___x_2292_);
v___x_2294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2293_);
return v___x_2294_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0___boxed(lean_object* v_pu_2295_, lean_object* v_f_2296_, lean_object* v_as_2297_, lean_object* v_i_2298_, lean_object* v_stop_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_){
_start:
{
uint8_t v_pu_boxed_2305_; size_t v_i_boxed_2306_; size_t v_stop_boxed_2307_; lean_object* v_res_2308_; 
v_pu_boxed_2305_ = lean_unbox(v_pu_2295_);
v_i_boxed_2306_ = lean_unbox_usize(v_i_2298_);
lean_dec(v_i_2298_);
v_stop_boxed_2307_ = lean_unbox_usize(v_stop_2299_);
lean_dec(v_stop_2299_);
v_res_2308_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0(v_pu_boxed_2305_, v_f_2296_, v_as_2297_, v_i_boxed_2306_, v_stop_boxed_2307_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
lean_dec(v___y_2303_);
lean_dec_ref(v___y_2302_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
lean_dec_ref(v_as_2297_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go___boxed(lean_object* v_pu_2309_, lean_object* v_f_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_, lean_object* v_a_2313_, lean_object* v_a_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_){
_start:
{
uint8_t v_pu_boxed_2317_; lean_object* v_res_2318_; 
v_pu_boxed_2317_ = lean_unbox(v_pu_2309_);
v_res_2318_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(v_pu_boxed_2317_, v_f_2310_, v_a_2311_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
lean_dec(v_a_2315_);
lean_dec_ref(v_a_2314_);
lean_dec(v_a_2313_);
lean_dec_ref(v_a_2312_);
return v_res_2318_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0(uint8_t v_pu_2319_, lean_object* v_f_2320_, lean_object* v_as_2321_, size_t v_i_2322_, size_t v_stop_2323_, lean_object* v_b_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_){
_start:
{
uint8_t v___x_2330_; 
v___x_2330_ = lean_usize_dec_eq(v_i_2322_, v_stop_2323_);
if (v___x_2330_ == 0)
{
lean_object* v___x_2331_; lean_object* v_value_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2331_ = lean_array_uget_borrowed(v_as_2321_, v_i_2322_);
v_value_2332_ = lean_ctor_get(v___x_2331_, 1);
v___x_2333_ = lean_box(v_pu_2319_);
lean_inc_ref(v_f_2320_);
v___x_2334_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go___boxed), 8, 2);
lean_closure_set(v___x_2334_, 0, v___x_2333_);
lean_closure_set(v___x_2334_, 1, v_f_2320_);
lean_inc_ref(v_value_2332_);
v___x_2335_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2332_, v___x_2334_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_);
if (lean_obj_tag(v___x_2335_) == 0)
{
lean_object* v_a_2336_; lean_object* v_a_2338_; uint8_t v___x_2342_; 
v_a_2336_ = lean_ctor_get(v___x_2335_, 0);
lean_inc(v_a_2336_);
lean_dec_ref(v___x_2335_);
v___x_2342_ = lean_unbox(v_a_2336_);
lean_dec(v_a_2336_);
if (v___x_2342_ == 0)
{
v_a_2338_ = v_b_2324_;
goto v___jp_2337_;
}
else
{
lean_object* v___x_2343_; 
lean_inc(v___x_2331_);
v___x_2343_ = lean_array_push(v_b_2324_, v___x_2331_);
v_a_2338_ = v___x_2343_;
goto v___jp_2337_;
}
v___jp_2337_:
{
size_t v___x_2339_; size_t v___x_2340_; 
v___x_2339_ = ((size_t)1ULL);
v___x_2340_ = lean_usize_add(v_i_2322_, v___x_2339_);
v_i_2322_ = v___x_2340_;
v_b_2324_ = v_a_2338_;
goto _start;
}
}
else
{
lean_object* v_a_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2351_; 
lean_dec_ref(v_b_2324_);
lean_dec_ref(v_f_2320_);
v_a_2344_ = lean_ctor_get(v___x_2335_, 0);
v_isSharedCheck_2351_ = !lean_is_exclusive(v___x_2335_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2346_ = v___x_2335_;
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_a_2344_);
lean_dec(v___x_2335_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2349_; 
if (v_isShared_2347_ == 0)
{
v___x_2349_ = v___x_2346_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_a_2344_);
v___x_2349_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
return v___x_2349_;
}
}
}
}
else
{
lean_object* v___x_2352_; 
lean_dec_ref(v_f_2320_);
v___x_2352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2352_, 0, v_b_2324_);
return v___x_2352_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0___boxed(lean_object* v_pu_2353_, lean_object* v_f_2354_, lean_object* v_as_2355_, lean_object* v_i_2356_, lean_object* v_stop_2357_, lean_object* v_b_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_){
_start:
{
uint8_t v_pu_boxed_2364_; size_t v_i_boxed_2365_; size_t v_stop_boxed_2366_; lean_object* v_res_2367_; 
v_pu_boxed_2364_ = lean_unbox(v_pu_2353_);
v_i_boxed_2365_ = lean_unbox_usize(v_i_2356_);
lean_dec(v_i_2356_);
v_stop_boxed_2366_ = lean_unbox_usize(v_stop_2357_);
lean_dec(v_stop_2357_);
v_res_2367_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0(v_pu_boxed_2364_, v_f_2354_, v_as_2355_, v_i_boxed_2365_, v_stop_boxed_2366_, v_b_2358_, v___y_2359_, v___y_2360_, v___y_2361_, v___y_2362_);
lean_dec(v___y_2362_);
lean_dec_ref(v___y_2361_);
lean_dec(v___y_2360_);
lean_dec_ref(v___y_2359_);
lean_dec_ref(v_as_2355_);
return v_res_2367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByCases(uint8_t v_pu_2368_, lean_object* v_f_2369_, lean_object* v_a_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_){
_start:
{
lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; uint8_t v___x_2379_; 
v___x_2376_ = lean_unsigned_to_nat(0u);
v___x_2377_ = lean_array_get_size(v_a_2370_);
v___x_2378_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0, &l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0);
v___x_2379_ = lean_nat_dec_lt(v___x_2376_, v___x_2377_);
if (v___x_2379_ == 0)
{
lean_object* v___x_2380_; 
lean_dec_ref(v_f_2369_);
v___x_2380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2378_);
return v___x_2380_;
}
else
{
uint8_t v___x_2381_; 
v___x_2381_ = lean_nat_dec_le(v___x_2377_, v___x_2377_);
if (v___x_2381_ == 0)
{
if (v___x_2379_ == 0)
{
lean_object* v___x_2382_; 
lean_dec_ref(v_f_2369_);
v___x_2382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2382_, 0, v___x_2378_);
return v___x_2382_;
}
else
{
size_t v___x_2383_; size_t v___x_2384_; lean_object* v___x_2385_; 
v___x_2383_ = ((size_t)0ULL);
v___x_2384_ = lean_usize_of_nat(v___x_2377_);
v___x_2385_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0(v_pu_2368_, v_f_2369_, v_a_2370_, v___x_2383_, v___x_2384_, v___x_2378_, v_a_2371_, v_a_2372_, v_a_2373_, v_a_2374_);
return v___x_2385_;
}
}
else
{
size_t v___x_2386_; size_t v___x_2387_; lean_object* v___x_2388_; 
v___x_2386_ = ((size_t)0ULL);
v___x_2387_ = lean_usize_of_nat(v___x_2377_);
v___x_2388_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0(v_pu_2368_, v_f_2369_, v_a_2370_, v___x_2386_, v___x_2387_, v___x_2378_, v_a_2371_, v_a_2372_, v_a_2373_, v_a_2374_);
return v___x_2388_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByCases___boxed(lean_object* v_pu_2389_, lean_object* v_f_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_){
_start:
{
uint8_t v_pu_boxed_2397_; lean_object* v_res_2398_; 
v_pu_boxed_2397_ = lean_unbox(v_pu_2389_);
v_res_2398_ = l_Lean_Compiler_LCNF_Probe_filterByCases(v_pu_boxed_2397_, v_f_2390_, v_a_2391_, v_a_2392_, v_a_2393_, v_a_2394_, v_a_2395_);
lean_dec(v_a_2395_);
lean_dec_ref(v_a_2394_);
lean_dec(v_a_2393_);
lean_dec_ref(v_a_2392_);
lean_dec_ref(v_a_2391_);
return v_res_2398_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(uint8_t v_pu_2399_, lean_object* v_f_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_){
_start:
{
switch(lean_obj_tag(v_a_2401_))
{
case 0:
{
lean_object* v_k_2407_; 
v_k_2407_ = lean_ctor_get(v_a_2401_, 1);
lean_inc_ref(v_k_2407_);
lean_dec_ref(v_a_2401_);
v_a_2401_ = v_k_2407_;
goto _start;
}
case 1:
{
lean_object* v_decl_2409_; lean_object* v_k_2410_; lean_object* v_value_2411_; lean_object* v___x_2412_; 
v_decl_2409_ = lean_ctor_get(v_a_2401_, 0);
lean_inc_ref(v_decl_2409_);
v_k_2410_ = lean_ctor_get(v_a_2401_, 1);
lean_inc_ref(v_k_2410_);
lean_dec_ref(v_a_2401_);
v_value_2411_ = lean_ctor_get(v_decl_2409_, 4);
lean_inc_ref(v_value_2411_);
lean_dec_ref(v_decl_2409_);
lean_inc_ref(v_f_2400_);
v___x_2412_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(v_pu_2399_, v_f_2400_, v_value_2411_, v_a_2402_, v_a_2403_, v_a_2404_, v_a_2405_);
if (lean_obj_tag(v___x_2412_) == 0)
{
lean_object* v_a_2413_; uint8_t v___x_2414_; 
v_a_2413_ = lean_ctor_get(v___x_2412_, 0);
lean_inc(v_a_2413_);
v___x_2414_ = lean_unbox(v_a_2413_);
lean_dec(v_a_2413_);
if (v___x_2414_ == 0)
{
lean_dec_ref(v___x_2412_);
v_a_2401_ = v_k_2410_;
goto _start;
}
else
{
lean_dec_ref(v_k_2410_);
lean_dec_ref(v_f_2400_);
return v___x_2412_;
}
}
else
{
lean_dec_ref(v_k_2410_);
lean_dec_ref(v_f_2400_);
return v___x_2412_;
}
}
case 2:
{
lean_object* v_decl_2416_; lean_object* v_k_2417_; lean_object* v_value_2418_; lean_object* v___x_2419_; 
v_decl_2416_ = lean_ctor_get(v_a_2401_, 0);
lean_inc_ref(v_decl_2416_);
v_k_2417_ = lean_ctor_get(v_a_2401_, 1);
lean_inc_ref(v_k_2417_);
lean_dec_ref(v_a_2401_);
v_value_2418_ = lean_ctor_get(v_decl_2416_, 4);
lean_inc_ref(v_value_2418_);
lean_dec_ref(v_decl_2416_);
lean_inc_ref(v_f_2400_);
v___x_2419_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(v_pu_2399_, v_f_2400_, v_value_2418_, v_a_2402_, v_a_2403_, v_a_2404_, v_a_2405_);
if (lean_obj_tag(v___x_2419_) == 0)
{
lean_object* v_a_2420_; uint8_t v___x_2421_; 
v_a_2420_ = lean_ctor_get(v___x_2419_, 0);
lean_inc(v_a_2420_);
v___x_2421_ = lean_unbox(v_a_2420_);
lean_dec(v_a_2420_);
if (v___x_2421_ == 0)
{
lean_dec_ref(v___x_2419_);
v_a_2401_ = v_k_2417_;
goto _start;
}
else
{
lean_dec_ref(v_k_2417_);
lean_dec_ref(v_f_2400_);
return v___x_2419_;
}
}
else
{
lean_dec_ref(v_k_2417_);
lean_dec_ref(v_f_2400_);
return v___x_2419_;
}
}
case 3:
{
lean_object* v_fvarId_2423_; lean_object* v_args_2424_; lean_object* v___x_2425_; 
v_fvarId_2423_ = lean_ctor_get(v_a_2401_, 0);
lean_inc(v_fvarId_2423_);
v_args_2424_ = lean_ctor_get(v_a_2401_, 1);
lean_inc_ref(v_args_2424_);
lean_dec_ref(v_a_2401_);
lean_inc(v_a_2405_);
lean_inc_ref(v_a_2404_);
lean_inc(v_a_2403_);
lean_inc_ref(v_a_2402_);
v___x_2425_ = lean_apply_7(v_f_2400_, v_fvarId_2423_, v_args_2424_, v_a_2402_, v_a_2403_, v_a_2404_, v_a_2405_, lean_box(0));
return v___x_2425_;
}
case 4:
{
lean_object* v_cases_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2445_; 
v_cases_2426_ = lean_ctor_get(v_a_2401_, 0);
v_isSharedCheck_2445_ = !lean_is_exclusive(v_a_2401_);
if (v_isSharedCheck_2445_ == 0)
{
v___x_2428_ = v_a_2401_;
v_isShared_2429_ = v_isSharedCheck_2445_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_cases_2426_);
lean_dec(v_a_2401_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2445_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v_alts_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; uint8_t v___x_2433_; 
v_alts_2430_ = lean_ctor_get(v_cases_2426_, 3);
lean_inc_ref(v_alts_2430_);
lean_dec_ref(v_cases_2426_);
v___x_2431_ = lean_unsigned_to_nat(0u);
v___x_2432_ = lean_array_get_size(v_alts_2430_);
v___x_2433_ = lean_nat_dec_lt(v___x_2431_, v___x_2432_);
if (v___x_2433_ == 0)
{
lean_object* v___x_2434_; lean_object* v___x_2436_; 
lean_dec_ref(v_alts_2430_);
lean_dec_ref(v_f_2400_);
v___x_2434_ = lean_box(v___x_2433_);
if (v_isShared_2429_ == 0)
{
lean_ctor_set_tag(v___x_2428_, 0);
lean_ctor_set(v___x_2428_, 0, v___x_2434_);
v___x_2436_ = v___x_2428_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v___x_2434_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
return v___x_2436_;
}
}
else
{
if (v___x_2433_ == 0)
{
lean_object* v___x_2438_; lean_object* v___x_2440_; 
lean_dec_ref(v_alts_2430_);
lean_dec_ref(v_f_2400_);
v___x_2438_ = lean_box(v___x_2433_);
if (v_isShared_2429_ == 0)
{
lean_ctor_set_tag(v___x_2428_, 0);
lean_ctor_set(v___x_2428_, 0, v___x_2438_);
v___x_2440_ = v___x_2428_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v___x_2438_);
v___x_2440_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
return v___x_2440_;
}
}
else
{
size_t v___x_2442_; size_t v___x_2443_; lean_object* v___x_2444_; 
lean_del_object(v___x_2428_);
v___x_2442_ = ((size_t)0ULL);
v___x_2443_ = lean_usize_of_nat(v___x_2432_);
v___x_2444_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0(v_pu_2399_, v_f_2400_, v_alts_2430_, v___x_2442_, v___x_2443_, v_a_2402_, v_a_2403_, v_a_2404_, v_a_2405_);
lean_dec_ref(v_alts_2430_);
return v___x_2444_;
}
}
}
}
case 7:
{
lean_object* v_k_2446_; 
v_k_2446_ = lean_ctor_get(v_a_2401_, 3);
lean_inc_ref(v_k_2446_);
lean_dec_ref(v_a_2401_);
v_a_2401_ = v_k_2446_;
goto _start;
}
case 8:
{
lean_object* v_k_2448_; 
v_k_2448_ = lean_ctor_get(v_a_2401_, 3);
lean_inc_ref(v_k_2448_);
lean_dec_ref(v_a_2401_);
v_a_2401_ = v_k_2448_;
goto _start;
}
case 9:
{
lean_object* v_k_2450_; 
v_k_2450_ = lean_ctor_get(v_a_2401_, 5);
lean_inc_ref(v_k_2450_);
lean_dec_ref(v_a_2401_);
v_a_2401_ = v_k_2450_;
goto _start;
}
case 10:
{
lean_object* v_k_2452_; 
v_k_2452_ = lean_ctor_get(v_a_2401_, 2);
lean_inc_ref(v_k_2452_);
lean_dec_ref(v_a_2401_);
v_a_2401_ = v_k_2452_;
goto _start;
}
case 11:
{
lean_object* v_k_2454_; 
v_k_2454_ = lean_ctor_get(v_a_2401_, 2);
lean_inc_ref(v_k_2454_);
lean_dec_ref(v_a_2401_);
v_a_2401_ = v_k_2454_;
goto _start;
}
case 12:
{
lean_object* v_k_2456_; 
v_k_2456_ = lean_ctor_get(v_a_2401_, 2);
lean_inc_ref(v_k_2456_);
lean_dec_ref(v_a_2401_);
v_a_2401_ = v_k_2456_;
goto _start;
}
case 13:
{
lean_object* v_k_2458_; 
v_k_2458_ = lean_ctor_get(v_a_2401_, 1);
lean_inc_ref(v_k_2458_);
lean_dec_ref(v_a_2401_);
v_a_2401_ = v_k_2458_;
goto _start;
}
default: 
{
uint8_t v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; 
lean_dec_ref(v_a_2401_);
lean_dec_ref(v_f_2400_);
v___x_2460_ = 0;
v___x_2461_ = lean_box(v___x_2460_);
v___x_2462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2461_);
return v___x_2462_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0(uint8_t v_pu_2463_, lean_object* v_f_2464_, lean_object* v_as_2465_, size_t v_i_2466_, size_t v_stop_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_){
_start:
{
uint8_t v___x_2473_; 
v___x_2473_ = lean_usize_dec_eq(v_i_2466_, v_stop_2467_);
if (v___x_2473_ == 0)
{
uint8_t v___x_2474_; lean_object* v___y_2476_; lean_object* v___x_2491_; 
v___x_2474_ = 1;
v___x_2491_ = lean_array_uget_borrowed(v_as_2465_, v_i_2466_);
switch(lean_obj_tag(v___x_2491_))
{
case 0:
{
lean_object* v_code_2492_; 
v_code_2492_ = lean_ctor_get(v___x_2491_, 2);
lean_inc_ref(v_code_2492_);
v___y_2476_ = v_code_2492_;
goto v___jp_2475_;
}
case 1:
{
lean_object* v_code_2493_; 
v_code_2493_ = lean_ctor_get(v___x_2491_, 1);
lean_inc_ref(v_code_2493_);
v___y_2476_ = v_code_2493_;
goto v___jp_2475_;
}
default: 
{
lean_object* v_code_2494_; 
v_code_2494_ = lean_ctor_get(v___x_2491_, 0);
lean_inc_ref(v_code_2494_);
v___y_2476_ = v_code_2494_;
goto v___jp_2475_;
}
}
v___jp_2475_:
{
lean_object* v___x_2477_; 
lean_inc_ref(v_f_2464_);
v___x_2477_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(v_pu_2463_, v_f_2464_, v___y_2476_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_);
if (lean_obj_tag(v___x_2477_) == 0)
{
lean_object* v_a_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2490_; 
v_a_2478_ = lean_ctor_get(v___x_2477_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2477_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2480_ = v___x_2477_;
v_isShared_2481_ = v_isSharedCheck_2490_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_a_2478_);
lean_dec(v___x_2477_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2490_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
uint8_t v___x_2482_; 
v___x_2482_ = lean_unbox(v_a_2478_);
lean_dec(v_a_2478_);
if (v___x_2482_ == 0)
{
size_t v___x_2483_; size_t v___x_2484_; 
lean_del_object(v___x_2480_);
v___x_2483_ = ((size_t)1ULL);
v___x_2484_ = lean_usize_add(v_i_2466_, v___x_2483_);
v_i_2466_ = v___x_2484_;
goto _start;
}
else
{
lean_object* v___x_2486_; lean_object* v___x_2488_; 
lean_dec_ref(v_f_2464_);
v___x_2486_ = lean_box(v___x_2474_);
if (v_isShared_2481_ == 0)
{
lean_ctor_set(v___x_2480_, 0, v___x_2486_);
v___x_2488_ = v___x_2480_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v___x_2486_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
}
else
{
lean_dec_ref(v_f_2464_);
return v___x_2477_;
}
}
}
else
{
uint8_t v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; 
lean_dec_ref(v_f_2464_);
v___x_2495_ = 0;
v___x_2496_ = lean_box(v___x_2495_);
v___x_2497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2496_);
return v___x_2497_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0___boxed(lean_object* v_pu_2498_, lean_object* v_f_2499_, lean_object* v_as_2500_, lean_object* v_i_2501_, lean_object* v_stop_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_){
_start:
{
uint8_t v_pu_boxed_2508_; size_t v_i_boxed_2509_; size_t v_stop_boxed_2510_; lean_object* v_res_2511_; 
v_pu_boxed_2508_ = lean_unbox(v_pu_2498_);
v_i_boxed_2509_ = lean_unbox_usize(v_i_2501_);
lean_dec(v_i_2501_);
v_stop_boxed_2510_ = lean_unbox_usize(v_stop_2502_);
lean_dec(v_stop_2502_);
v_res_2511_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0(v_pu_boxed_2508_, v_f_2499_, v_as_2500_, v_i_boxed_2509_, v_stop_boxed_2510_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
lean_dec(v___y_2506_);
lean_dec_ref(v___y_2505_);
lean_dec(v___y_2504_);
lean_dec_ref(v___y_2503_);
lean_dec_ref(v_as_2500_);
return v_res_2511_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go___boxed(lean_object* v_pu_2512_, lean_object* v_f_2513_, lean_object* v_a_2514_, lean_object* v_a_2515_, lean_object* v_a_2516_, lean_object* v_a_2517_, lean_object* v_a_2518_, lean_object* v_a_2519_){
_start:
{
uint8_t v_pu_boxed_2520_; lean_object* v_res_2521_; 
v_pu_boxed_2520_ = lean_unbox(v_pu_2512_);
v_res_2521_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(v_pu_boxed_2520_, v_f_2513_, v_a_2514_, v_a_2515_, v_a_2516_, v_a_2517_, v_a_2518_);
lean_dec(v_a_2518_);
lean_dec_ref(v_a_2517_);
lean_dec(v_a_2516_);
lean_dec_ref(v_a_2515_);
return v_res_2521_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0(uint8_t v_pu_2522_, lean_object* v_f_2523_, lean_object* v_as_2524_, size_t v_i_2525_, size_t v_stop_2526_, lean_object* v_b_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_){
_start:
{
uint8_t v___x_2533_; 
v___x_2533_ = lean_usize_dec_eq(v_i_2525_, v_stop_2526_);
if (v___x_2533_ == 0)
{
lean_object* v___x_2534_; lean_object* v_value_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; 
v___x_2534_ = lean_array_uget_borrowed(v_as_2524_, v_i_2525_);
v_value_2535_ = lean_ctor_get(v___x_2534_, 1);
v___x_2536_ = lean_box(v_pu_2522_);
lean_inc_ref(v_f_2523_);
v___x_2537_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go___boxed), 8, 2);
lean_closure_set(v___x_2537_, 0, v___x_2536_);
lean_closure_set(v___x_2537_, 1, v_f_2523_);
lean_inc_ref(v_value_2535_);
v___x_2538_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2535_, v___x_2537_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_);
if (lean_obj_tag(v___x_2538_) == 0)
{
lean_object* v_a_2539_; lean_object* v_a_2541_; uint8_t v___x_2545_; 
v_a_2539_ = lean_ctor_get(v___x_2538_, 0);
lean_inc(v_a_2539_);
lean_dec_ref(v___x_2538_);
v___x_2545_ = lean_unbox(v_a_2539_);
lean_dec(v_a_2539_);
if (v___x_2545_ == 0)
{
v_a_2541_ = v_b_2527_;
goto v___jp_2540_;
}
else
{
lean_object* v___x_2546_; 
lean_inc(v___x_2534_);
v___x_2546_ = lean_array_push(v_b_2527_, v___x_2534_);
v_a_2541_ = v___x_2546_;
goto v___jp_2540_;
}
v___jp_2540_:
{
size_t v___x_2542_; size_t v___x_2543_; 
v___x_2542_ = ((size_t)1ULL);
v___x_2543_ = lean_usize_add(v_i_2525_, v___x_2542_);
v_i_2525_ = v___x_2543_;
v_b_2527_ = v_a_2541_;
goto _start;
}
}
else
{
lean_object* v_a_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2554_; 
lean_dec_ref(v_b_2527_);
lean_dec_ref(v_f_2523_);
v_a_2547_ = lean_ctor_get(v___x_2538_, 0);
v_isSharedCheck_2554_ = !lean_is_exclusive(v___x_2538_);
if (v_isSharedCheck_2554_ == 0)
{
v___x_2549_ = v___x_2538_;
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_a_2547_);
lean_dec(v___x_2538_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v___x_2552_; 
if (v_isShared_2550_ == 0)
{
v___x_2552_ = v___x_2549_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v_a_2547_);
v___x_2552_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
return v___x_2552_;
}
}
}
}
else
{
lean_object* v___x_2555_; 
lean_dec_ref(v_f_2523_);
v___x_2555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2555_, 0, v_b_2527_);
return v___x_2555_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0___boxed(lean_object* v_pu_2556_, lean_object* v_f_2557_, lean_object* v_as_2558_, lean_object* v_i_2559_, lean_object* v_stop_2560_, lean_object* v_b_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_){
_start:
{
uint8_t v_pu_boxed_2567_; size_t v_i_boxed_2568_; size_t v_stop_boxed_2569_; lean_object* v_res_2570_; 
v_pu_boxed_2567_ = lean_unbox(v_pu_2556_);
v_i_boxed_2568_ = lean_unbox_usize(v_i_2559_);
lean_dec(v_i_2559_);
v_stop_boxed_2569_ = lean_unbox_usize(v_stop_2560_);
lean_dec(v_stop_2560_);
v_res_2570_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0(v_pu_boxed_2567_, v_f_2557_, v_as_2558_, v_i_boxed_2568_, v_stop_boxed_2569_, v_b_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_);
lean_dec(v___y_2565_);
lean_dec_ref(v___y_2564_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
lean_dec_ref(v_as_2558_);
return v_res_2570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJmp(uint8_t v_pu_2571_, lean_object* v_f_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_, lean_object* v_a_2577_){
_start:
{
lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; uint8_t v___x_2582_; 
v___x_2579_ = lean_unsigned_to_nat(0u);
v___x_2580_ = lean_array_get_size(v_a_2573_);
v___x_2581_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0, &l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0);
v___x_2582_ = lean_nat_dec_lt(v___x_2579_, v___x_2580_);
if (v___x_2582_ == 0)
{
lean_object* v___x_2583_; 
lean_dec_ref(v_f_2572_);
v___x_2583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2581_);
return v___x_2583_;
}
else
{
uint8_t v___x_2584_; 
v___x_2584_ = lean_nat_dec_le(v___x_2580_, v___x_2580_);
if (v___x_2584_ == 0)
{
if (v___x_2582_ == 0)
{
lean_object* v___x_2585_; 
lean_dec_ref(v_f_2572_);
v___x_2585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2585_, 0, v___x_2581_);
return v___x_2585_;
}
else
{
size_t v___x_2586_; size_t v___x_2587_; lean_object* v___x_2588_; 
v___x_2586_ = ((size_t)0ULL);
v___x_2587_ = lean_usize_of_nat(v___x_2580_);
v___x_2588_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0(v_pu_2571_, v_f_2572_, v_a_2573_, v___x_2586_, v___x_2587_, v___x_2581_, v_a_2574_, v_a_2575_, v_a_2576_, v_a_2577_);
return v___x_2588_;
}
}
else
{
size_t v___x_2589_; size_t v___x_2590_; lean_object* v___x_2591_; 
v___x_2589_ = ((size_t)0ULL);
v___x_2590_ = lean_usize_of_nat(v___x_2580_);
v___x_2591_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0(v_pu_2571_, v_f_2572_, v_a_2573_, v___x_2589_, v___x_2590_, v___x_2581_, v_a_2574_, v_a_2575_, v_a_2576_, v_a_2577_);
return v___x_2591_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJmp___boxed(lean_object* v_pu_2592_, lean_object* v_f_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_){
_start:
{
uint8_t v_pu_boxed_2600_; lean_object* v_res_2601_; 
v_pu_boxed_2600_ = lean_unbox(v_pu_2592_);
v_res_2601_ = l_Lean_Compiler_LCNF_Probe_filterByJmp(v_pu_boxed_2600_, v_f_2593_, v_a_2594_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_);
lean_dec(v_a_2598_);
lean_dec_ref(v_a_2597_);
lean_dec(v_a_2596_);
lean_dec_ref(v_a_2595_);
lean_dec_ref(v_a_2594_);
return v_res_2601_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(uint8_t v_pu_2602_, lean_object* v_f_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_, lean_object* v_a_2606_, lean_object* v_a_2607_, lean_object* v_a_2608_){
_start:
{
switch(lean_obj_tag(v_a_2604_))
{
case 0:
{
lean_object* v_k_2610_; 
v_k_2610_ = lean_ctor_get(v_a_2604_, 1);
lean_inc_ref(v_k_2610_);
lean_dec_ref(v_a_2604_);
v_a_2604_ = v_k_2610_;
goto _start;
}
case 1:
{
lean_object* v_decl_2612_; lean_object* v_k_2613_; lean_object* v_value_2614_; lean_object* v___x_2615_; 
v_decl_2612_ = lean_ctor_get(v_a_2604_, 0);
lean_inc_ref(v_decl_2612_);
v_k_2613_ = lean_ctor_get(v_a_2604_, 1);
lean_inc_ref(v_k_2613_);
lean_dec_ref(v_a_2604_);
v_value_2614_ = lean_ctor_get(v_decl_2612_, 4);
lean_inc_ref(v_value_2614_);
lean_dec_ref(v_decl_2612_);
lean_inc_ref(v_f_2603_);
v___x_2615_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(v_pu_2602_, v_f_2603_, v_value_2614_, v_a_2605_, v_a_2606_, v_a_2607_, v_a_2608_);
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v_a_2616_; uint8_t v___x_2617_; 
v_a_2616_ = lean_ctor_get(v___x_2615_, 0);
lean_inc(v_a_2616_);
v___x_2617_ = lean_unbox(v_a_2616_);
lean_dec(v_a_2616_);
if (v___x_2617_ == 0)
{
lean_dec_ref(v___x_2615_);
v_a_2604_ = v_k_2613_;
goto _start;
}
else
{
lean_dec_ref(v_k_2613_);
lean_dec_ref(v_f_2603_);
return v___x_2615_;
}
}
else
{
lean_dec_ref(v_k_2613_);
lean_dec_ref(v_f_2603_);
return v___x_2615_;
}
}
case 2:
{
lean_object* v_decl_2619_; lean_object* v_k_2620_; lean_object* v_value_2621_; lean_object* v___x_2622_; 
v_decl_2619_ = lean_ctor_get(v_a_2604_, 0);
lean_inc_ref(v_decl_2619_);
v_k_2620_ = lean_ctor_get(v_a_2604_, 1);
lean_inc_ref(v_k_2620_);
lean_dec_ref(v_a_2604_);
v_value_2621_ = lean_ctor_get(v_decl_2619_, 4);
lean_inc_ref(v_value_2621_);
lean_dec_ref(v_decl_2619_);
lean_inc_ref(v_f_2603_);
v___x_2622_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(v_pu_2602_, v_f_2603_, v_value_2621_, v_a_2605_, v_a_2606_, v_a_2607_, v_a_2608_);
if (lean_obj_tag(v___x_2622_) == 0)
{
lean_object* v_a_2623_; uint8_t v___x_2624_; 
v_a_2623_ = lean_ctor_get(v___x_2622_, 0);
lean_inc(v_a_2623_);
v___x_2624_ = lean_unbox(v_a_2623_);
lean_dec(v_a_2623_);
if (v___x_2624_ == 0)
{
lean_dec_ref(v___x_2622_);
v_a_2604_ = v_k_2620_;
goto _start;
}
else
{
lean_dec_ref(v_k_2620_);
lean_dec_ref(v_f_2603_);
return v___x_2622_;
}
}
else
{
lean_dec_ref(v_k_2620_);
lean_dec_ref(v_f_2603_);
return v___x_2622_;
}
}
case 4:
{
lean_object* v_cases_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2645_; 
v_cases_2626_ = lean_ctor_get(v_a_2604_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v_a_2604_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2628_ = v_a_2604_;
v_isShared_2629_ = v_isSharedCheck_2645_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_cases_2626_);
lean_dec(v_a_2604_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2645_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v_alts_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; uint8_t v___x_2633_; 
v_alts_2630_ = lean_ctor_get(v_cases_2626_, 3);
lean_inc_ref(v_alts_2630_);
lean_dec_ref(v_cases_2626_);
v___x_2631_ = lean_unsigned_to_nat(0u);
v___x_2632_ = lean_array_get_size(v_alts_2630_);
v___x_2633_ = lean_nat_dec_lt(v___x_2631_, v___x_2632_);
if (v___x_2633_ == 0)
{
lean_object* v___x_2634_; lean_object* v___x_2636_; 
lean_dec_ref(v_alts_2630_);
lean_dec_ref(v_f_2603_);
v___x_2634_ = lean_box(v___x_2633_);
if (v_isShared_2629_ == 0)
{
lean_ctor_set_tag(v___x_2628_, 0);
lean_ctor_set(v___x_2628_, 0, v___x_2634_);
v___x_2636_ = v___x_2628_;
goto v_reusejp_2635_;
}
else
{
lean_object* v_reuseFailAlloc_2637_; 
v_reuseFailAlloc_2637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2637_, 0, v___x_2634_);
v___x_2636_ = v_reuseFailAlloc_2637_;
goto v_reusejp_2635_;
}
v_reusejp_2635_:
{
return v___x_2636_;
}
}
else
{
if (v___x_2633_ == 0)
{
lean_object* v___x_2638_; lean_object* v___x_2640_; 
lean_dec_ref(v_alts_2630_);
lean_dec_ref(v_f_2603_);
v___x_2638_ = lean_box(v___x_2633_);
if (v_isShared_2629_ == 0)
{
lean_ctor_set_tag(v___x_2628_, 0);
lean_ctor_set(v___x_2628_, 0, v___x_2638_);
v___x_2640_ = v___x_2628_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v___x_2638_);
v___x_2640_ = v_reuseFailAlloc_2641_;
goto v_reusejp_2639_;
}
v_reusejp_2639_:
{
return v___x_2640_;
}
}
else
{
size_t v___x_2642_; size_t v___x_2643_; lean_object* v___x_2644_; 
lean_del_object(v___x_2628_);
v___x_2642_ = ((size_t)0ULL);
v___x_2643_ = lean_usize_of_nat(v___x_2632_);
v___x_2644_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0(v_pu_2602_, v_f_2603_, v_alts_2630_, v___x_2642_, v___x_2643_, v_a_2605_, v_a_2606_, v_a_2607_, v_a_2608_);
lean_dec_ref(v_alts_2630_);
return v___x_2644_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_2646_; lean_object* v___x_2647_; 
v_fvarId_2646_ = lean_ctor_get(v_a_2604_, 0);
lean_inc(v_fvarId_2646_);
lean_dec_ref(v_a_2604_);
lean_inc(v_a_2608_);
lean_inc_ref(v_a_2607_);
lean_inc(v_a_2606_);
lean_inc_ref(v_a_2605_);
v___x_2647_ = lean_apply_6(v_f_2603_, v_fvarId_2646_, v_a_2605_, v_a_2606_, v_a_2607_, v_a_2608_, lean_box(0));
return v___x_2647_;
}
case 7:
{
lean_object* v_k_2648_; 
v_k_2648_ = lean_ctor_get(v_a_2604_, 3);
lean_inc_ref(v_k_2648_);
lean_dec_ref(v_a_2604_);
v_a_2604_ = v_k_2648_;
goto _start;
}
case 8:
{
lean_object* v_k_2650_; 
v_k_2650_ = lean_ctor_get(v_a_2604_, 3);
lean_inc_ref(v_k_2650_);
lean_dec_ref(v_a_2604_);
v_a_2604_ = v_k_2650_;
goto _start;
}
case 9:
{
lean_object* v_k_2652_; 
v_k_2652_ = lean_ctor_get(v_a_2604_, 5);
lean_inc_ref(v_k_2652_);
lean_dec_ref(v_a_2604_);
v_a_2604_ = v_k_2652_;
goto _start;
}
case 10:
{
lean_object* v_k_2654_; 
v_k_2654_ = lean_ctor_get(v_a_2604_, 2);
lean_inc_ref(v_k_2654_);
lean_dec_ref(v_a_2604_);
v_a_2604_ = v_k_2654_;
goto _start;
}
case 11:
{
lean_object* v_k_2656_; 
v_k_2656_ = lean_ctor_get(v_a_2604_, 2);
lean_inc_ref(v_k_2656_);
lean_dec_ref(v_a_2604_);
v_a_2604_ = v_k_2656_;
goto _start;
}
case 12:
{
lean_object* v_k_2658_; 
v_k_2658_ = lean_ctor_get(v_a_2604_, 2);
lean_inc_ref(v_k_2658_);
lean_dec_ref(v_a_2604_);
v_a_2604_ = v_k_2658_;
goto _start;
}
case 13:
{
lean_object* v_k_2660_; 
v_k_2660_ = lean_ctor_get(v_a_2604_, 1);
lean_inc_ref(v_k_2660_);
lean_dec_ref(v_a_2604_);
v_a_2604_ = v_k_2660_;
goto _start;
}
default: 
{
uint8_t v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; 
lean_dec_ref(v_a_2604_);
lean_dec_ref(v_f_2603_);
v___x_2662_ = 0;
v___x_2663_ = lean_box(v___x_2662_);
v___x_2664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2663_);
return v___x_2664_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0(uint8_t v_pu_2665_, lean_object* v_f_2666_, lean_object* v_as_2667_, size_t v_i_2668_, size_t v_stop_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_){
_start:
{
uint8_t v___x_2675_; 
v___x_2675_ = lean_usize_dec_eq(v_i_2668_, v_stop_2669_);
if (v___x_2675_ == 0)
{
uint8_t v___x_2676_; lean_object* v___y_2678_; lean_object* v___x_2693_; 
v___x_2676_ = 1;
v___x_2693_ = lean_array_uget_borrowed(v_as_2667_, v_i_2668_);
switch(lean_obj_tag(v___x_2693_))
{
case 0:
{
lean_object* v_code_2694_; 
v_code_2694_ = lean_ctor_get(v___x_2693_, 2);
lean_inc_ref(v_code_2694_);
v___y_2678_ = v_code_2694_;
goto v___jp_2677_;
}
case 1:
{
lean_object* v_code_2695_; 
v_code_2695_ = lean_ctor_get(v___x_2693_, 1);
lean_inc_ref(v_code_2695_);
v___y_2678_ = v_code_2695_;
goto v___jp_2677_;
}
default: 
{
lean_object* v_code_2696_; 
v_code_2696_ = lean_ctor_get(v___x_2693_, 0);
lean_inc_ref(v_code_2696_);
v___y_2678_ = v_code_2696_;
goto v___jp_2677_;
}
}
v___jp_2677_:
{
lean_object* v___x_2679_; 
lean_inc_ref(v_f_2666_);
v___x_2679_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(v_pu_2665_, v_f_2666_, v___y_2678_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_);
if (lean_obj_tag(v___x_2679_) == 0)
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2692_; 
v_a_2680_ = lean_ctor_get(v___x_2679_, 0);
v_isSharedCheck_2692_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2692_ == 0)
{
v___x_2682_ = v___x_2679_;
v_isShared_2683_ = v_isSharedCheck_2692_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2679_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2692_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
uint8_t v___x_2684_; 
v___x_2684_ = lean_unbox(v_a_2680_);
lean_dec(v_a_2680_);
if (v___x_2684_ == 0)
{
size_t v___x_2685_; size_t v___x_2686_; 
lean_del_object(v___x_2682_);
v___x_2685_ = ((size_t)1ULL);
v___x_2686_ = lean_usize_add(v_i_2668_, v___x_2685_);
v_i_2668_ = v___x_2686_;
goto _start;
}
else
{
lean_object* v___x_2688_; lean_object* v___x_2690_; 
lean_dec_ref(v_f_2666_);
v___x_2688_ = lean_box(v___x_2676_);
if (v_isShared_2683_ == 0)
{
lean_ctor_set(v___x_2682_, 0, v___x_2688_);
v___x_2690_ = v___x_2682_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v___x_2688_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
return v___x_2690_;
}
}
}
}
else
{
lean_dec_ref(v_f_2666_);
return v___x_2679_;
}
}
}
else
{
uint8_t v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; 
lean_dec_ref(v_f_2666_);
v___x_2697_ = 0;
v___x_2698_ = lean_box(v___x_2697_);
v___x_2699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2699_, 0, v___x_2698_);
return v___x_2699_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0___boxed(lean_object* v_pu_2700_, lean_object* v_f_2701_, lean_object* v_as_2702_, lean_object* v_i_2703_, lean_object* v_stop_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_){
_start:
{
uint8_t v_pu_boxed_2710_; size_t v_i_boxed_2711_; size_t v_stop_boxed_2712_; lean_object* v_res_2713_; 
v_pu_boxed_2710_ = lean_unbox(v_pu_2700_);
v_i_boxed_2711_ = lean_unbox_usize(v_i_2703_);
lean_dec(v_i_2703_);
v_stop_boxed_2712_ = lean_unbox_usize(v_stop_2704_);
lean_dec(v_stop_2704_);
v_res_2713_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0(v_pu_boxed_2710_, v_f_2701_, v_as_2702_, v_i_boxed_2711_, v_stop_boxed_2712_, v___y_2705_, v___y_2706_, v___y_2707_, v___y_2708_);
lean_dec(v___y_2708_);
lean_dec_ref(v___y_2707_);
lean_dec(v___y_2706_);
lean_dec_ref(v___y_2705_);
lean_dec_ref(v_as_2702_);
return v_res_2713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go___boxed(lean_object* v_pu_2714_, lean_object* v_f_2715_, lean_object* v_a_2716_, lean_object* v_a_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_, lean_object* v_a_2721_){
_start:
{
uint8_t v_pu_boxed_2722_; lean_object* v_res_2723_; 
v_pu_boxed_2722_ = lean_unbox(v_pu_2714_);
v_res_2723_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(v_pu_boxed_2722_, v_f_2715_, v_a_2716_, v_a_2717_, v_a_2718_, v_a_2719_, v_a_2720_);
lean_dec(v_a_2720_);
lean_dec_ref(v_a_2719_);
lean_dec(v_a_2718_);
lean_dec_ref(v_a_2717_);
return v_res_2723_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0(uint8_t v_pu_2724_, lean_object* v_f_2725_, lean_object* v_as_2726_, size_t v_i_2727_, size_t v_stop_2728_, lean_object* v_b_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_){
_start:
{
uint8_t v___x_2735_; 
v___x_2735_ = lean_usize_dec_eq(v_i_2727_, v_stop_2728_);
if (v___x_2735_ == 0)
{
lean_object* v___x_2736_; lean_object* v_value_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; 
v___x_2736_ = lean_array_uget_borrowed(v_as_2726_, v_i_2727_);
v_value_2737_ = lean_ctor_get(v___x_2736_, 1);
v___x_2738_ = lean_box(v_pu_2724_);
lean_inc_ref(v_f_2725_);
v___x_2739_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go___boxed), 8, 2);
lean_closure_set(v___x_2739_, 0, v___x_2738_);
lean_closure_set(v___x_2739_, 1, v_f_2725_);
lean_inc_ref(v_value_2737_);
v___x_2740_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2737_, v___x_2739_, v___y_2730_, v___y_2731_, v___y_2732_, v___y_2733_);
if (lean_obj_tag(v___x_2740_) == 0)
{
lean_object* v_a_2741_; lean_object* v_a_2743_; uint8_t v___x_2747_; 
v_a_2741_ = lean_ctor_get(v___x_2740_, 0);
lean_inc(v_a_2741_);
lean_dec_ref(v___x_2740_);
v___x_2747_ = lean_unbox(v_a_2741_);
lean_dec(v_a_2741_);
if (v___x_2747_ == 0)
{
v_a_2743_ = v_b_2729_;
goto v___jp_2742_;
}
else
{
lean_object* v___x_2748_; 
lean_inc(v___x_2736_);
v___x_2748_ = lean_array_push(v_b_2729_, v___x_2736_);
v_a_2743_ = v___x_2748_;
goto v___jp_2742_;
}
v___jp_2742_:
{
size_t v___x_2744_; size_t v___x_2745_; 
v___x_2744_ = ((size_t)1ULL);
v___x_2745_ = lean_usize_add(v_i_2727_, v___x_2744_);
v_i_2727_ = v___x_2745_;
v_b_2729_ = v_a_2743_;
goto _start;
}
}
else
{
lean_object* v_a_2749_; lean_object* v___x_2751_; uint8_t v_isShared_2752_; uint8_t v_isSharedCheck_2756_; 
lean_dec_ref(v_b_2729_);
lean_dec_ref(v_f_2725_);
v_a_2749_ = lean_ctor_get(v___x_2740_, 0);
v_isSharedCheck_2756_ = !lean_is_exclusive(v___x_2740_);
if (v_isSharedCheck_2756_ == 0)
{
v___x_2751_ = v___x_2740_;
v_isShared_2752_ = v_isSharedCheck_2756_;
goto v_resetjp_2750_;
}
else
{
lean_inc(v_a_2749_);
lean_dec(v___x_2740_);
v___x_2751_ = lean_box(0);
v_isShared_2752_ = v_isSharedCheck_2756_;
goto v_resetjp_2750_;
}
v_resetjp_2750_:
{
lean_object* v___x_2754_; 
if (v_isShared_2752_ == 0)
{
v___x_2754_ = v___x_2751_;
goto v_reusejp_2753_;
}
else
{
lean_object* v_reuseFailAlloc_2755_; 
v_reuseFailAlloc_2755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2755_, 0, v_a_2749_);
v___x_2754_ = v_reuseFailAlloc_2755_;
goto v_reusejp_2753_;
}
v_reusejp_2753_:
{
return v___x_2754_;
}
}
}
}
else
{
lean_object* v___x_2757_; 
lean_dec_ref(v_f_2725_);
v___x_2757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2757_, 0, v_b_2729_);
return v___x_2757_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0___boxed(lean_object* v_pu_2758_, lean_object* v_f_2759_, lean_object* v_as_2760_, lean_object* v_i_2761_, lean_object* v_stop_2762_, lean_object* v_b_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_){
_start:
{
uint8_t v_pu_boxed_2769_; size_t v_i_boxed_2770_; size_t v_stop_boxed_2771_; lean_object* v_res_2772_; 
v_pu_boxed_2769_ = lean_unbox(v_pu_2758_);
v_i_boxed_2770_ = lean_unbox_usize(v_i_2761_);
lean_dec(v_i_2761_);
v_stop_boxed_2771_ = lean_unbox_usize(v_stop_2762_);
lean_dec(v_stop_2762_);
v_res_2772_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0(v_pu_boxed_2769_, v_f_2759_, v_as_2760_, v_i_boxed_2770_, v_stop_boxed_2771_, v_b_2763_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_);
lean_dec(v___y_2767_);
lean_dec_ref(v___y_2766_);
lean_dec(v___y_2765_);
lean_dec_ref(v___y_2764_);
lean_dec_ref(v_as_2760_);
return v_res_2772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByReturn(uint8_t v_pu_2773_, lean_object* v_f_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_, lean_object* v_a_2777_, lean_object* v_a_2778_, lean_object* v_a_2779_){
_start:
{
lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; uint8_t v___x_2784_; 
v___x_2781_ = lean_unsigned_to_nat(0u);
v___x_2782_ = lean_array_get_size(v_a_2775_);
v___x_2783_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0, &l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0);
v___x_2784_ = lean_nat_dec_lt(v___x_2781_, v___x_2782_);
if (v___x_2784_ == 0)
{
lean_object* v___x_2785_; 
lean_dec_ref(v_f_2774_);
v___x_2785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2785_, 0, v___x_2783_);
return v___x_2785_;
}
else
{
uint8_t v___x_2786_; 
v___x_2786_ = lean_nat_dec_le(v___x_2782_, v___x_2782_);
if (v___x_2786_ == 0)
{
if (v___x_2784_ == 0)
{
lean_object* v___x_2787_; 
lean_dec_ref(v_f_2774_);
v___x_2787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2783_);
return v___x_2787_;
}
else
{
size_t v___x_2788_; size_t v___x_2789_; lean_object* v___x_2790_; 
v___x_2788_ = ((size_t)0ULL);
v___x_2789_ = lean_usize_of_nat(v___x_2782_);
v___x_2790_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0(v_pu_2773_, v_f_2774_, v_a_2775_, v___x_2788_, v___x_2789_, v___x_2783_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_);
return v___x_2790_;
}
}
else
{
size_t v___x_2791_; size_t v___x_2792_; lean_object* v___x_2793_; 
v___x_2791_ = ((size_t)0ULL);
v___x_2792_ = lean_usize_of_nat(v___x_2782_);
v___x_2793_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0(v_pu_2773_, v_f_2774_, v_a_2775_, v___x_2791_, v___x_2792_, v___x_2783_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_);
return v___x_2793_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByReturn___boxed(lean_object* v_pu_2794_, lean_object* v_f_2795_, lean_object* v_a_2796_, lean_object* v_a_2797_, lean_object* v_a_2798_, lean_object* v_a_2799_, lean_object* v_a_2800_, lean_object* v_a_2801_){
_start:
{
uint8_t v_pu_boxed_2802_; lean_object* v_res_2803_; 
v_pu_boxed_2802_ = lean_unbox(v_pu_2794_);
v_res_2803_ = l_Lean_Compiler_LCNF_Probe_filterByReturn(v_pu_boxed_2802_, v_f_2795_, v_a_2796_, v_a_2797_, v_a_2798_, v_a_2799_, v_a_2800_);
lean_dec(v_a_2800_);
lean_dec_ref(v_a_2799_);
lean_dec(v_a_2798_);
lean_dec_ref(v_a_2797_);
lean_dec_ref(v_a_2796_);
return v_res_2803_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(uint8_t v_pu_2804_, lean_object* v_f_2805_, lean_object* v_a_2806_, lean_object* v_a_2807_, lean_object* v_a_2808_, lean_object* v_a_2809_, lean_object* v_a_2810_){
_start:
{
switch(lean_obj_tag(v_a_2806_))
{
case 0:
{
lean_object* v_k_2812_; 
v_k_2812_ = lean_ctor_get(v_a_2806_, 1);
lean_inc_ref(v_k_2812_);
lean_dec_ref(v_a_2806_);
v_a_2806_ = v_k_2812_;
goto _start;
}
case 1:
{
lean_object* v_decl_2814_; lean_object* v_k_2815_; lean_object* v_value_2816_; lean_object* v___x_2817_; 
v_decl_2814_ = lean_ctor_get(v_a_2806_, 0);
lean_inc_ref(v_decl_2814_);
v_k_2815_ = lean_ctor_get(v_a_2806_, 1);
lean_inc_ref(v_k_2815_);
lean_dec_ref(v_a_2806_);
v_value_2816_ = lean_ctor_get(v_decl_2814_, 4);
lean_inc_ref(v_value_2816_);
lean_dec_ref(v_decl_2814_);
lean_inc_ref(v_f_2805_);
v___x_2817_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(v_pu_2804_, v_f_2805_, v_value_2816_, v_a_2807_, v_a_2808_, v_a_2809_, v_a_2810_);
if (lean_obj_tag(v___x_2817_) == 0)
{
lean_object* v_a_2818_; uint8_t v___x_2819_; 
v_a_2818_ = lean_ctor_get(v___x_2817_, 0);
lean_inc(v_a_2818_);
v___x_2819_ = lean_unbox(v_a_2818_);
lean_dec(v_a_2818_);
if (v___x_2819_ == 0)
{
lean_dec_ref(v___x_2817_);
v_a_2806_ = v_k_2815_;
goto _start;
}
else
{
lean_dec_ref(v_k_2815_);
lean_dec_ref(v_f_2805_);
return v___x_2817_;
}
}
else
{
lean_dec_ref(v_k_2815_);
lean_dec_ref(v_f_2805_);
return v___x_2817_;
}
}
case 2:
{
lean_object* v_decl_2821_; lean_object* v_k_2822_; lean_object* v_value_2823_; lean_object* v___x_2824_; 
v_decl_2821_ = lean_ctor_get(v_a_2806_, 0);
lean_inc_ref(v_decl_2821_);
v_k_2822_ = lean_ctor_get(v_a_2806_, 1);
lean_inc_ref(v_k_2822_);
lean_dec_ref(v_a_2806_);
v_value_2823_ = lean_ctor_get(v_decl_2821_, 4);
lean_inc_ref(v_value_2823_);
lean_dec_ref(v_decl_2821_);
lean_inc_ref(v_f_2805_);
v___x_2824_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(v_pu_2804_, v_f_2805_, v_value_2823_, v_a_2807_, v_a_2808_, v_a_2809_, v_a_2810_);
if (lean_obj_tag(v___x_2824_) == 0)
{
lean_object* v_a_2825_; uint8_t v___x_2826_; 
v_a_2825_ = lean_ctor_get(v___x_2824_, 0);
lean_inc(v_a_2825_);
v___x_2826_ = lean_unbox(v_a_2825_);
lean_dec(v_a_2825_);
if (v___x_2826_ == 0)
{
lean_dec_ref(v___x_2824_);
v_a_2806_ = v_k_2822_;
goto _start;
}
else
{
lean_dec_ref(v_k_2822_);
lean_dec_ref(v_f_2805_);
return v___x_2824_;
}
}
else
{
lean_dec_ref(v_k_2822_);
lean_dec_ref(v_f_2805_);
return v___x_2824_;
}
}
case 4:
{
lean_object* v_cases_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2847_; 
v_cases_2828_ = lean_ctor_get(v_a_2806_, 0);
v_isSharedCheck_2847_ = !lean_is_exclusive(v_a_2806_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2830_ = v_a_2806_;
v_isShared_2831_ = v_isSharedCheck_2847_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_cases_2828_);
lean_dec(v_a_2806_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2847_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v_alts_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; uint8_t v___x_2835_; 
v_alts_2832_ = lean_ctor_get(v_cases_2828_, 3);
lean_inc_ref(v_alts_2832_);
lean_dec_ref(v_cases_2828_);
v___x_2833_ = lean_unsigned_to_nat(0u);
v___x_2834_ = lean_array_get_size(v_alts_2832_);
v___x_2835_ = lean_nat_dec_lt(v___x_2833_, v___x_2834_);
if (v___x_2835_ == 0)
{
lean_object* v___x_2836_; lean_object* v___x_2838_; 
lean_dec_ref(v_alts_2832_);
lean_dec_ref(v_f_2805_);
v___x_2836_ = lean_box(v___x_2835_);
if (v_isShared_2831_ == 0)
{
lean_ctor_set_tag(v___x_2830_, 0);
lean_ctor_set(v___x_2830_, 0, v___x_2836_);
v___x_2838_ = v___x_2830_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v___x_2836_);
v___x_2838_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
return v___x_2838_;
}
}
else
{
if (v___x_2835_ == 0)
{
lean_object* v___x_2840_; lean_object* v___x_2842_; 
lean_dec_ref(v_alts_2832_);
lean_dec_ref(v_f_2805_);
v___x_2840_ = lean_box(v___x_2835_);
if (v_isShared_2831_ == 0)
{
lean_ctor_set_tag(v___x_2830_, 0);
lean_ctor_set(v___x_2830_, 0, v___x_2840_);
v___x_2842_ = v___x_2830_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v___x_2840_);
v___x_2842_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
return v___x_2842_;
}
}
else
{
size_t v___x_2844_; size_t v___x_2845_; lean_object* v___x_2846_; 
lean_del_object(v___x_2830_);
v___x_2844_ = ((size_t)0ULL);
v___x_2845_ = lean_usize_of_nat(v___x_2834_);
v___x_2846_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0(v_pu_2804_, v_f_2805_, v_alts_2832_, v___x_2844_, v___x_2845_, v_a_2807_, v_a_2808_, v_a_2809_, v_a_2810_);
lean_dec_ref(v_alts_2832_);
return v___x_2846_;
}
}
}
}
case 6:
{
lean_object* v_type_2848_; lean_object* v___x_2849_; 
v_type_2848_ = lean_ctor_get(v_a_2806_, 0);
lean_inc_ref(v_type_2848_);
lean_dec_ref(v_a_2806_);
lean_inc(v_a_2810_);
lean_inc_ref(v_a_2809_);
lean_inc(v_a_2808_);
lean_inc_ref(v_a_2807_);
v___x_2849_ = lean_apply_6(v_f_2805_, v_type_2848_, v_a_2807_, v_a_2808_, v_a_2809_, v_a_2810_, lean_box(0));
return v___x_2849_;
}
case 7:
{
lean_object* v_k_2850_; 
v_k_2850_ = lean_ctor_get(v_a_2806_, 3);
lean_inc_ref(v_k_2850_);
lean_dec_ref(v_a_2806_);
v_a_2806_ = v_k_2850_;
goto _start;
}
case 8:
{
lean_object* v_k_2852_; 
v_k_2852_ = lean_ctor_get(v_a_2806_, 3);
lean_inc_ref(v_k_2852_);
lean_dec_ref(v_a_2806_);
v_a_2806_ = v_k_2852_;
goto _start;
}
case 9:
{
lean_object* v_k_2854_; 
v_k_2854_ = lean_ctor_get(v_a_2806_, 5);
lean_inc_ref(v_k_2854_);
lean_dec_ref(v_a_2806_);
v_a_2806_ = v_k_2854_;
goto _start;
}
case 10:
{
lean_object* v_k_2856_; 
v_k_2856_ = lean_ctor_get(v_a_2806_, 2);
lean_inc_ref(v_k_2856_);
lean_dec_ref(v_a_2806_);
v_a_2806_ = v_k_2856_;
goto _start;
}
case 11:
{
lean_object* v_k_2858_; 
v_k_2858_ = lean_ctor_get(v_a_2806_, 2);
lean_inc_ref(v_k_2858_);
lean_dec_ref(v_a_2806_);
v_a_2806_ = v_k_2858_;
goto _start;
}
case 12:
{
lean_object* v_k_2860_; 
v_k_2860_ = lean_ctor_get(v_a_2806_, 2);
lean_inc_ref(v_k_2860_);
lean_dec_ref(v_a_2806_);
v_a_2806_ = v_k_2860_;
goto _start;
}
case 13:
{
lean_object* v_k_2862_; 
v_k_2862_ = lean_ctor_get(v_a_2806_, 1);
lean_inc_ref(v_k_2862_);
lean_dec_ref(v_a_2806_);
v_a_2806_ = v_k_2862_;
goto _start;
}
default: 
{
uint8_t v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; 
lean_dec_ref(v_a_2806_);
lean_dec_ref(v_f_2805_);
v___x_2864_ = 0;
v___x_2865_ = lean_box(v___x_2864_);
v___x_2866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2865_);
return v___x_2866_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0(uint8_t v_pu_2867_, lean_object* v_f_2868_, lean_object* v_as_2869_, size_t v_i_2870_, size_t v_stop_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_){
_start:
{
uint8_t v___x_2877_; 
v___x_2877_ = lean_usize_dec_eq(v_i_2870_, v_stop_2871_);
if (v___x_2877_ == 0)
{
uint8_t v___x_2878_; lean_object* v___y_2880_; lean_object* v___x_2895_; 
v___x_2878_ = 1;
v___x_2895_ = lean_array_uget_borrowed(v_as_2869_, v_i_2870_);
switch(lean_obj_tag(v___x_2895_))
{
case 0:
{
lean_object* v_code_2896_; 
v_code_2896_ = lean_ctor_get(v___x_2895_, 2);
lean_inc_ref(v_code_2896_);
v___y_2880_ = v_code_2896_;
goto v___jp_2879_;
}
case 1:
{
lean_object* v_code_2897_; 
v_code_2897_ = lean_ctor_get(v___x_2895_, 1);
lean_inc_ref(v_code_2897_);
v___y_2880_ = v_code_2897_;
goto v___jp_2879_;
}
default: 
{
lean_object* v_code_2898_; 
v_code_2898_ = lean_ctor_get(v___x_2895_, 0);
lean_inc_ref(v_code_2898_);
v___y_2880_ = v_code_2898_;
goto v___jp_2879_;
}
}
v___jp_2879_:
{
lean_object* v___x_2881_; 
lean_inc_ref(v_f_2868_);
v___x_2881_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(v_pu_2867_, v_f_2868_, v___y_2880_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_);
if (lean_obj_tag(v___x_2881_) == 0)
{
lean_object* v_a_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2894_; 
v_a_2882_ = lean_ctor_get(v___x_2881_, 0);
v_isSharedCheck_2894_ = !lean_is_exclusive(v___x_2881_);
if (v_isSharedCheck_2894_ == 0)
{
v___x_2884_ = v___x_2881_;
v_isShared_2885_ = v_isSharedCheck_2894_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_a_2882_);
lean_dec(v___x_2881_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2894_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
uint8_t v___x_2886_; 
v___x_2886_ = lean_unbox(v_a_2882_);
lean_dec(v_a_2882_);
if (v___x_2886_ == 0)
{
size_t v___x_2887_; size_t v___x_2888_; 
lean_del_object(v___x_2884_);
v___x_2887_ = ((size_t)1ULL);
v___x_2888_ = lean_usize_add(v_i_2870_, v___x_2887_);
v_i_2870_ = v___x_2888_;
goto _start;
}
else
{
lean_object* v___x_2890_; lean_object* v___x_2892_; 
lean_dec_ref(v_f_2868_);
v___x_2890_ = lean_box(v___x_2878_);
if (v_isShared_2885_ == 0)
{
lean_ctor_set(v___x_2884_, 0, v___x_2890_);
v___x_2892_ = v___x_2884_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2893_; 
v_reuseFailAlloc_2893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2893_, 0, v___x_2890_);
v___x_2892_ = v_reuseFailAlloc_2893_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
return v___x_2892_;
}
}
}
}
else
{
lean_dec_ref(v_f_2868_);
return v___x_2881_;
}
}
}
else
{
uint8_t v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; 
lean_dec_ref(v_f_2868_);
v___x_2899_ = 0;
v___x_2900_ = lean_box(v___x_2899_);
v___x_2901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2901_, 0, v___x_2900_);
return v___x_2901_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0___boxed(lean_object* v_pu_2902_, lean_object* v_f_2903_, lean_object* v_as_2904_, lean_object* v_i_2905_, lean_object* v_stop_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_){
_start:
{
uint8_t v_pu_boxed_2912_; size_t v_i_boxed_2913_; size_t v_stop_boxed_2914_; lean_object* v_res_2915_; 
v_pu_boxed_2912_ = lean_unbox(v_pu_2902_);
v_i_boxed_2913_ = lean_unbox_usize(v_i_2905_);
lean_dec(v_i_2905_);
v_stop_boxed_2914_ = lean_unbox_usize(v_stop_2906_);
lean_dec(v_stop_2906_);
v_res_2915_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0(v_pu_boxed_2912_, v_f_2903_, v_as_2904_, v_i_boxed_2913_, v_stop_boxed_2914_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_);
lean_dec(v___y_2910_);
lean_dec_ref(v___y_2909_);
lean_dec(v___y_2908_);
lean_dec_ref(v___y_2907_);
lean_dec_ref(v_as_2904_);
return v_res_2915_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go___boxed(lean_object* v_pu_2916_, lean_object* v_f_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_, lean_object* v_a_2920_, lean_object* v_a_2921_, lean_object* v_a_2922_, lean_object* v_a_2923_){
_start:
{
uint8_t v_pu_boxed_2924_; lean_object* v_res_2925_; 
v_pu_boxed_2924_ = lean_unbox(v_pu_2916_);
v_res_2925_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(v_pu_boxed_2924_, v_f_2917_, v_a_2918_, v_a_2919_, v_a_2920_, v_a_2921_, v_a_2922_);
lean_dec(v_a_2922_);
lean_dec_ref(v_a_2921_);
lean_dec(v_a_2920_);
lean_dec_ref(v_a_2919_);
return v_res_2925_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0(uint8_t v_pu_2926_, lean_object* v_f_2927_, lean_object* v_as_2928_, size_t v_i_2929_, size_t v_stop_2930_, lean_object* v_b_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_){
_start:
{
uint8_t v___x_2937_; 
v___x_2937_ = lean_usize_dec_eq(v_i_2929_, v_stop_2930_);
if (v___x_2937_ == 0)
{
lean_object* v___x_2938_; lean_object* v_value_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; 
v___x_2938_ = lean_array_uget_borrowed(v_as_2928_, v_i_2929_);
v_value_2939_ = lean_ctor_get(v___x_2938_, 1);
v___x_2940_ = lean_box(v_pu_2926_);
lean_inc_ref(v_f_2927_);
v___x_2941_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go___boxed), 8, 2);
lean_closure_set(v___x_2941_, 0, v___x_2940_);
lean_closure_set(v___x_2941_, 1, v_f_2927_);
lean_inc_ref(v_value_2939_);
v___x_2942_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2939_, v___x_2941_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
if (lean_obj_tag(v___x_2942_) == 0)
{
lean_object* v_a_2943_; lean_object* v_a_2945_; uint8_t v___x_2949_; 
v_a_2943_ = lean_ctor_get(v___x_2942_, 0);
lean_inc(v_a_2943_);
lean_dec_ref(v___x_2942_);
v___x_2949_ = lean_unbox(v_a_2943_);
lean_dec(v_a_2943_);
if (v___x_2949_ == 0)
{
v_a_2945_ = v_b_2931_;
goto v___jp_2944_;
}
else
{
lean_object* v___x_2950_; 
lean_inc(v___x_2938_);
v___x_2950_ = lean_array_push(v_b_2931_, v___x_2938_);
v_a_2945_ = v___x_2950_;
goto v___jp_2944_;
}
v___jp_2944_:
{
size_t v___x_2946_; size_t v___x_2947_; 
v___x_2946_ = ((size_t)1ULL);
v___x_2947_ = lean_usize_add(v_i_2929_, v___x_2946_);
v_i_2929_ = v___x_2947_;
v_b_2931_ = v_a_2945_;
goto _start;
}
}
else
{
lean_object* v_a_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_2958_; 
lean_dec_ref(v_b_2931_);
lean_dec_ref(v_f_2927_);
v_a_2951_ = lean_ctor_get(v___x_2942_, 0);
v_isSharedCheck_2958_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_2958_ == 0)
{
v___x_2953_ = v___x_2942_;
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_a_2951_);
lean_dec(v___x_2942_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
lean_object* v___x_2956_; 
if (v_isShared_2954_ == 0)
{
v___x_2956_ = v___x_2953_;
goto v_reusejp_2955_;
}
else
{
lean_object* v_reuseFailAlloc_2957_; 
v_reuseFailAlloc_2957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2957_, 0, v_a_2951_);
v___x_2956_ = v_reuseFailAlloc_2957_;
goto v_reusejp_2955_;
}
v_reusejp_2955_:
{
return v___x_2956_;
}
}
}
}
else
{
lean_object* v___x_2959_; 
lean_dec_ref(v_f_2927_);
v___x_2959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2959_, 0, v_b_2931_);
return v___x_2959_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0___boxed(lean_object* v_pu_2960_, lean_object* v_f_2961_, lean_object* v_as_2962_, lean_object* v_i_2963_, lean_object* v_stop_2964_, lean_object* v_b_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_){
_start:
{
uint8_t v_pu_boxed_2971_; size_t v_i_boxed_2972_; size_t v_stop_boxed_2973_; lean_object* v_res_2974_; 
v_pu_boxed_2971_ = lean_unbox(v_pu_2960_);
v_i_boxed_2972_ = lean_unbox_usize(v_i_2963_);
lean_dec(v_i_2963_);
v_stop_boxed_2973_ = lean_unbox_usize(v_stop_2964_);
lean_dec(v_stop_2964_);
v_res_2974_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0(v_pu_boxed_2971_, v_f_2961_, v_as_2962_, v_i_boxed_2972_, v_stop_boxed_2973_, v_b_2965_, v___y_2966_, v___y_2967_, v___y_2968_, v___y_2969_);
lean_dec(v___y_2969_);
lean_dec_ref(v___y_2968_);
lean_dec(v___y_2967_);
lean_dec_ref(v___y_2966_);
lean_dec_ref(v_as_2962_);
return v_res_2974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByUnreach(uint8_t v_pu_2975_, lean_object* v_f_2976_, lean_object* v_a_2977_, lean_object* v_a_2978_, lean_object* v_a_2979_, lean_object* v_a_2980_, lean_object* v_a_2981_){
_start:
{
lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; uint8_t v___x_2986_; 
v___x_2983_ = lean_unsigned_to_nat(0u);
v___x_2984_ = lean_array_get_size(v_a_2977_);
v___x_2985_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0, &l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0);
v___x_2986_ = lean_nat_dec_lt(v___x_2983_, v___x_2984_);
if (v___x_2986_ == 0)
{
lean_object* v___x_2987_; 
lean_dec_ref(v_f_2976_);
v___x_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2987_, 0, v___x_2985_);
return v___x_2987_;
}
else
{
uint8_t v___x_2988_; 
v___x_2988_ = lean_nat_dec_le(v___x_2984_, v___x_2984_);
if (v___x_2988_ == 0)
{
if (v___x_2986_ == 0)
{
lean_object* v___x_2989_; 
lean_dec_ref(v_f_2976_);
v___x_2989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2989_, 0, v___x_2985_);
return v___x_2989_;
}
else
{
size_t v___x_2990_; size_t v___x_2991_; lean_object* v___x_2992_; 
v___x_2990_ = ((size_t)0ULL);
v___x_2991_ = lean_usize_of_nat(v___x_2984_);
v___x_2992_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0(v_pu_2975_, v_f_2976_, v_a_2977_, v___x_2990_, v___x_2991_, v___x_2985_, v_a_2978_, v_a_2979_, v_a_2980_, v_a_2981_);
return v___x_2992_;
}
}
else
{
size_t v___x_2993_; size_t v___x_2994_; lean_object* v___x_2995_; 
v___x_2993_ = ((size_t)0ULL);
v___x_2994_ = lean_usize_of_nat(v___x_2984_);
v___x_2995_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0(v_pu_2975_, v_f_2976_, v_a_2977_, v___x_2993_, v___x_2994_, v___x_2985_, v_a_2978_, v_a_2979_, v_a_2980_, v_a_2981_);
return v___x_2995_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByUnreach___boxed(lean_object* v_pu_2996_, lean_object* v_f_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_, lean_object* v_a_3001_, lean_object* v_a_3002_, lean_object* v_a_3003_){
_start:
{
uint8_t v_pu_boxed_3004_; lean_object* v_res_3005_; 
v_pu_boxed_3004_ = lean_unbox(v_pu_2996_);
v_res_3005_ = l_Lean_Compiler_LCNF_Probe_filterByUnreach(v_pu_boxed_3004_, v_f_2997_, v_a_2998_, v_a_2999_, v_a_3000_, v_a_3001_, v_a_3002_);
lean_dec(v_a_3002_);
lean_dec_ref(v_a_3001_);
lean_dec(v_a_3000_);
lean_dec_ref(v_a_2999_);
lean_dec_ref(v_a_2998_);
return v_res_3005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0(lean_object* v_decl_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_){
_start:
{
lean_object* v_toSignature_3012_; lean_object* v_name_3013_; lean_object* v___x_3014_; 
v_toSignature_3012_ = lean_ctor_get(v_decl_3006_, 0);
v_name_3013_ = lean_ctor_get(v_toSignature_3012_, 0);
lean_inc(v_name_3013_);
v___x_3014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3014_, 0, v_name_3013_);
return v___x_3014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0___boxed(lean_object* v_decl_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_){
_start:
{
lean_object* v_res_3021_; 
v_res_3021_ = l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0(v_decl_3015_, v___y_3016_, v___y_3017_, v___y_3018_, v___y_3019_);
lean_dec(v___y_3019_);
lean_dec_ref(v___y_3018_);
lean_dec(v___y_3017_);
lean_dec_ref(v___y_3016_);
lean_dec_ref(v_decl_3015_);
return v_res_3021_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0(void){
_start:
{
lean_object* v___f_3022_; 
v___f_3022_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0___boxed), 6, 0);
return v___f_3022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg(lean_object* v_a_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_){
_start:
{
lean_object* v___x_3029_; lean_object* v_toApplicative_3030_; lean_object* v_toFunctor_3031_; lean_object* v_toSeq_3032_; lean_object* v_toSeqLeft_3033_; lean_object* v_toSeqRight_3034_; lean_object* v___f_3035_; lean_object* v___f_3036_; lean_object* v___f_3037_; lean_object* v___f_3038_; lean_object* v___x_3039_; lean_object* v___f_3040_; lean_object* v___f_3041_; lean_object* v___f_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v_toApplicative_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3078_; 
v___x_3029_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_3030_ = lean_ctor_get(v___x_3029_, 0);
v_toFunctor_3031_ = lean_ctor_get(v_toApplicative_3030_, 0);
v_toSeq_3032_ = lean_ctor_get(v_toApplicative_3030_, 2);
v_toSeqLeft_3033_ = lean_ctor_get(v_toApplicative_3030_, 3);
v_toSeqRight_3034_ = lean_ctor_get(v_toApplicative_3030_, 4);
v___f_3035_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2);
v___f_3036_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3);
lean_inc_ref_n(v_toFunctor_3031_, 2);
v___f_3037_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3037_, 0, v_toFunctor_3031_);
v___f_3038_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3038_, 0, v_toFunctor_3031_);
v___x_3039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3039_, 0, v___f_3037_);
lean_ctor_set(v___x_3039_, 1, v___f_3038_);
lean_inc(v_toSeqRight_3034_);
v___f_3040_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3040_, 0, v_toSeqRight_3034_);
lean_inc(v_toSeqLeft_3033_);
v___f_3041_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3041_, 0, v_toSeqLeft_3033_);
lean_inc(v_toSeq_3032_);
v___f_3042_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3042_, 0, v_toSeq_3032_);
v___x_3043_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3043_, 0, v___x_3039_);
lean_ctor_set(v___x_3043_, 1, v___f_3035_);
lean_ctor_set(v___x_3043_, 2, v___f_3042_);
lean_ctor_set(v___x_3043_, 3, v___f_3041_);
lean_ctor_set(v___x_3043_, 4, v___f_3040_);
v___x_3044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3044_, 0, v___x_3043_);
lean_ctor_set(v___x_3044_, 1, v___f_3036_);
v___x_3045_ = l_StateRefT_x27_instMonad___redArg(v___x_3044_);
v_toApplicative_3046_ = lean_ctor_get(v___x_3045_, 0);
v_isSharedCheck_3078_ = !lean_is_exclusive(v___x_3045_);
if (v_isSharedCheck_3078_ == 0)
{
lean_object* v_unused_3079_; 
v_unused_3079_ = lean_ctor_get(v___x_3045_, 1);
lean_dec(v_unused_3079_);
v___x_3048_ = v___x_3045_;
v_isShared_3049_ = v_isSharedCheck_3078_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_toApplicative_3046_);
lean_dec(v___x_3045_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3078_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v_toFunctor_3050_; lean_object* v_toSeq_3051_; lean_object* v_toSeqLeft_3052_; lean_object* v_toSeqRight_3053_; lean_object* v___x_3055_; uint8_t v_isShared_3056_; uint8_t v_isSharedCheck_3076_; 
v_toFunctor_3050_ = lean_ctor_get(v_toApplicative_3046_, 0);
v_toSeq_3051_ = lean_ctor_get(v_toApplicative_3046_, 2);
v_toSeqLeft_3052_ = lean_ctor_get(v_toApplicative_3046_, 3);
v_toSeqRight_3053_ = lean_ctor_get(v_toApplicative_3046_, 4);
v_isSharedCheck_3076_ = !lean_is_exclusive(v_toApplicative_3046_);
if (v_isSharedCheck_3076_ == 0)
{
lean_object* v_unused_3077_; 
v_unused_3077_ = lean_ctor_get(v_toApplicative_3046_, 1);
lean_dec(v_unused_3077_);
v___x_3055_ = v_toApplicative_3046_;
v_isShared_3056_ = v_isSharedCheck_3076_;
goto v_resetjp_3054_;
}
else
{
lean_inc(v_toSeqRight_3053_);
lean_inc(v_toSeqLeft_3052_);
lean_inc(v_toSeq_3051_);
lean_inc(v_toFunctor_3050_);
lean_dec(v_toApplicative_3046_);
v___x_3055_ = lean_box(0);
v_isShared_3056_ = v_isSharedCheck_3076_;
goto v_resetjp_3054_;
}
v_resetjp_3054_:
{
lean_object* v___f_3057_; lean_object* v___f_3058_; lean_object* v___f_3059_; lean_object* v___f_3060_; lean_object* v___f_3061_; lean_object* v___x_3062_; lean_object* v___f_3063_; lean_object* v___f_3064_; lean_object* v___f_3065_; lean_object* v___x_3067_; 
v___f_3057_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0, &l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0);
v___f_3058_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4);
v___f_3059_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5);
lean_inc_ref(v_toFunctor_3050_);
v___f_3060_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3060_, 0, v_toFunctor_3050_);
v___f_3061_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3061_, 0, v_toFunctor_3050_);
v___x_3062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3062_, 0, v___f_3060_);
lean_ctor_set(v___x_3062_, 1, v___f_3061_);
v___f_3063_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3063_, 0, v_toSeqRight_3053_);
v___f_3064_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3064_, 0, v_toSeqLeft_3052_);
v___f_3065_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3065_, 0, v_toSeq_3051_);
if (v_isShared_3056_ == 0)
{
lean_ctor_set(v___x_3055_, 4, v___f_3063_);
lean_ctor_set(v___x_3055_, 3, v___f_3064_);
lean_ctor_set(v___x_3055_, 2, v___f_3065_);
lean_ctor_set(v___x_3055_, 1, v___f_3058_);
lean_ctor_set(v___x_3055_, 0, v___x_3062_);
v___x_3067_ = v___x_3055_;
goto v_reusejp_3066_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v___x_3062_);
lean_ctor_set(v_reuseFailAlloc_3075_, 1, v___f_3058_);
lean_ctor_set(v_reuseFailAlloc_3075_, 2, v___f_3065_);
lean_ctor_set(v_reuseFailAlloc_3075_, 3, v___f_3064_);
lean_ctor_set(v_reuseFailAlloc_3075_, 4, v___f_3063_);
v___x_3067_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3066_;
}
v_reusejp_3066_:
{
lean_object* v___x_3069_; 
if (v_isShared_3049_ == 0)
{
lean_ctor_set(v___x_3048_, 1, v___f_3059_);
lean_ctor_set(v___x_3048_, 0, v___x_3067_);
v___x_3069_ = v___x_3048_;
goto v_reusejp_3068_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v___x_3067_);
lean_ctor_set(v_reuseFailAlloc_3074_, 1, v___f_3059_);
v___x_3069_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3068_;
}
v_reusejp_3068_:
{
size_t v_sz_3070_; size_t v___x_3071_; lean_object* v___x_127__overap_3072_; lean_object* v___x_3073_; 
v_sz_3070_ = lean_array_size(v_a_3023_);
v___x_3071_ = ((size_t)0ULL);
v___x_127__overap_3072_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3069_, v___f_3057_, v_sz_3070_, v___x_3071_, v_a_3023_);
lean_inc(v_a_3027_);
lean_inc_ref(v_a_3026_);
lean_inc(v_a_3025_);
lean_inc_ref(v_a_3024_);
v___x_3073_ = lean_apply_5(v___x_127__overap_3072_, v_a_3024_, v_a_3025_, v_a_3026_, v_a_3027_, lean_box(0));
return v___x_3073_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___boxed(lean_object* v_a_3080_, lean_object* v_a_3081_, lean_object* v_a_3082_, lean_object* v_a_3083_, lean_object* v_a_3084_, lean_object* v_a_3085_){
_start:
{
lean_object* v_res_3086_; 
v_res_3086_ = l_Lean_Compiler_LCNF_Probe_declNames___redArg(v_a_3080_, v_a_3081_, v_a_3082_, v_a_3083_, v_a_3084_);
lean_dec(v_a_3084_);
lean_dec_ref(v_a_3083_);
lean_dec(v_a_3082_);
lean_dec_ref(v_a_3081_);
return v_res_3086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames(uint8_t v_pu_3087_, lean_object* v_a_3088_, lean_object* v_a_3089_, lean_object* v_a_3090_, lean_object* v_a_3091_, lean_object* v_a_3092_){
_start:
{
lean_object* v___x_3094_; lean_object* v_toApplicative_3095_; lean_object* v_toFunctor_3096_; lean_object* v_toSeq_3097_; lean_object* v_toSeqLeft_3098_; lean_object* v_toSeqRight_3099_; lean_object* v___f_3100_; lean_object* v___f_3101_; lean_object* v___f_3102_; lean_object* v___f_3103_; lean_object* v___x_3104_; lean_object* v___f_3105_; lean_object* v___f_3106_; lean_object* v___f_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v_toApplicative_3111_; lean_object* v___x_3113_; uint8_t v_isShared_3114_; uint8_t v_isSharedCheck_3143_; 
v___x_3094_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_3095_ = lean_ctor_get(v___x_3094_, 0);
v_toFunctor_3096_ = lean_ctor_get(v_toApplicative_3095_, 0);
v_toSeq_3097_ = lean_ctor_get(v_toApplicative_3095_, 2);
v_toSeqLeft_3098_ = lean_ctor_get(v_toApplicative_3095_, 3);
v_toSeqRight_3099_ = lean_ctor_get(v_toApplicative_3095_, 4);
v___f_3100_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2);
v___f_3101_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3);
lean_inc_ref_n(v_toFunctor_3096_, 2);
v___f_3102_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3102_, 0, v_toFunctor_3096_);
v___f_3103_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3103_, 0, v_toFunctor_3096_);
v___x_3104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3104_, 0, v___f_3102_);
lean_ctor_set(v___x_3104_, 1, v___f_3103_);
lean_inc(v_toSeqRight_3099_);
v___f_3105_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3105_, 0, v_toSeqRight_3099_);
lean_inc(v_toSeqLeft_3098_);
v___f_3106_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3106_, 0, v_toSeqLeft_3098_);
lean_inc(v_toSeq_3097_);
v___f_3107_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3107_, 0, v_toSeq_3097_);
v___x_3108_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3108_, 0, v___x_3104_);
lean_ctor_set(v___x_3108_, 1, v___f_3100_);
lean_ctor_set(v___x_3108_, 2, v___f_3107_);
lean_ctor_set(v___x_3108_, 3, v___f_3106_);
lean_ctor_set(v___x_3108_, 4, v___f_3105_);
v___x_3109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3109_, 0, v___x_3108_);
lean_ctor_set(v___x_3109_, 1, v___f_3101_);
v___x_3110_ = l_StateRefT_x27_instMonad___redArg(v___x_3109_);
v_toApplicative_3111_ = lean_ctor_get(v___x_3110_, 0);
v_isSharedCheck_3143_ = !lean_is_exclusive(v___x_3110_);
if (v_isSharedCheck_3143_ == 0)
{
lean_object* v_unused_3144_; 
v_unused_3144_ = lean_ctor_get(v___x_3110_, 1);
lean_dec(v_unused_3144_);
v___x_3113_ = v___x_3110_;
v_isShared_3114_ = v_isSharedCheck_3143_;
goto v_resetjp_3112_;
}
else
{
lean_inc(v_toApplicative_3111_);
lean_dec(v___x_3110_);
v___x_3113_ = lean_box(0);
v_isShared_3114_ = v_isSharedCheck_3143_;
goto v_resetjp_3112_;
}
v_resetjp_3112_:
{
lean_object* v_toFunctor_3115_; lean_object* v_toSeq_3116_; lean_object* v_toSeqLeft_3117_; lean_object* v_toSeqRight_3118_; lean_object* v___x_3120_; uint8_t v_isShared_3121_; uint8_t v_isSharedCheck_3141_; 
v_toFunctor_3115_ = lean_ctor_get(v_toApplicative_3111_, 0);
v_toSeq_3116_ = lean_ctor_get(v_toApplicative_3111_, 2);
v_toSeqLeft_3117_ = lean_ctor_get(v_toApplicative_3111_, 3);
v_toSeqRight_3118_ = lean_ctor_get(v_toApplicative_3111_, 4);
v_isSharedCheck_3141_ = !lean_is_exclusive(v_toApplicative_3111_);
if (v_isSharedCheck_3141_ == 0)
{
lean_object* v_unused_3142_; 
v_unused_3142_ = lean_ctor_get(v_toApplicative_3111_, 1);
lean_dec(v_unused_3142_);
v___x_3120_ = v_toApplicative_3111_;
v_isShared_3121_ = v_isSharedCheck_3141_;
goto v_resetjp_3119_;
}
else
{
lean_inc(v_toSeqRight_3118_);
lean_inc(v_toSeqLeft_3117_);
lean_inc(v_toSeq_3116_);
lean_inc(v_toFunctor_3115_);
lean_dec(v_toApplicative_3111_);
v___x_3120_ = lean_box(0);
v_isShared_3121_ = v_isSharedCheck_3141_;
goto v_resetjp_3119_;
}
v_resetjp_3119_:
{
lean_object* v___f_3122_; lean_object* v___f_3123_; lean_object* v___f_3124_; lean_object* v___f_3125_; lean_object* v___f_3126_; lean_object* v___x_3127_; lean_object* v___f_3128_; lean_object* v___f_3129_; lean_object* v___f_3130_; lean_object* v___x_3132_; 
v___f_3122_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0, &l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0);
v___f_3123_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4);
v___f_3124_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5);
lean_inc_ref(v_toFunctor_3115_);
v___f_3125_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3125_, 0, v_toFunctor_3115_);
v___f_3126_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3126_, 0, v_toFunctor_3115_);
v___x_3127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3127_, 0, v___f_3125_);
lean_ctor_set(v___x_3127_, 1, v___f_3126_);
v___f_3128_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3128_, 0, v_toSeqRight_3118_);
v___f_3129_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3129_, 0, v_toSeqLeft_3117_);
v___f_3130_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3130_, 0, v_toSeq_3116_);
if (v_isShared_3121_ == 0)
{
lean_ctor_set(v___x_3120_, 4, v___f_3128_);
lean_ctor_set(v___x_3120_, 3, v___f_3129_);
lean_ctor_set(v___x_3120_, 2, v___f_3130_);
lean_ctor_set(v___x_3120_, 1, v___f_3123_);
lean_ctor_set(v___x_3120_, 0, v___x_3127_);
v___x_3132_ = v___x_3120_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v___x_3127_);
lean_ctor_set(v_reuseFailAlloc_3140_, 1, v___f_3123_);
lean_ctor_set(v_reuseFailAlloc_3140_, 2, v___f_3130_);
lean_ctor_set(v_reuseFailAlloc_3140_, 3, v___f_3129_);
lean_ctor_set(v_reuseFailAlloc_3140_, 4, v___f_3128_);
v___x_3132_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
lean_object* v___x_3134_; 
if (v_isShared_3114_ == 0)
{
lean_ctor_set(v___x_3113_, 1, v___f_3124_);
lean_ctor_set(v___x_3113_, 0, v___x_3132_);
v___x_3134_ = v___x_3113_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v___x_3132_);
lean_ctor_set(v_reuseFailAlloc_3139_, 1, v___f_3124_);
v___x_3134_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
size_t v_sz_3135_; size_t v___x_3136_; lean_object* v___x_185__overap_3137_; lean_object* v___x_3138_; 
v_sz_3135_ = lean_array_size(v_a_3088_);
v___x_3136_ = ((size_t)0ULL);
v___x_185__overap_3137_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3134_, v___f_3122_, v_sz_3135_, v___x_3136_, v_a_3088_);
lean_inc(v_a_3092_);
lean_inc_ref(v_a_3091_);
lean_inc(v_a_3090_);
lean_inc_ref(v_a_3089_);
v___x_3138_ = lean_apply_5(v___x_185__overap_3137_, v_a_3089_, v_a_3090_, v_a_3091_, v_a_3092_, lean_box(0));
return v___x_3138_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___boxed(lean_object* v_pu_3145_, lean_object* v_a_3146_, lean_object* v_a_3147_, lean_object* v_a_3148_, lean_object* v_a_3149_, lean_object* v_a_3150_, lean_object* v_a_3151_){
_start:
{
uint8_t v_pu_boxed_3152_; lean_object* v_res_3153_; 
v_pu_boxed_3152_ = lean_unbox(v_pu_3145_);
v_res_3153_ = l_Lean_Compiler_LCNF_Probe_declNames(v_pu_boxed_3152_, v_a_3146_, v_a_3147_, v_a_3148_, v_a_3149_, v_a_3150_);
lean_dec(v_a_3150_);
lean_dec_ref(v_a_3149_);
lean_dec(v_a_3148_);
lean_dec_ref(v_a_3147_);
return v_res_3153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0(lean_object* v_inst_3154_, lean_object* v_x_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_){
_start:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; 
v___x_3161_ = lean_apply_1(v_inst_3154_, v_x_3155_);
v___x_3162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3161_);
return v___x_3162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0___boxed(lean_object* v_inst_3163_, lean_object* v_x_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_){
_start:
{
lean_object* v_res_3170_; 
v_res_3170_ = l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0(v_inst_3163_, v_x_3164_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_);
lean_dec(v___y_3168_);
lean_dec_ref(v___y_3167_);
lean_dec(v___y_3166_);
lean_dec_ref(v___y_3165_);
return v_res_3170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg(lean_object* v_inst_3171_, lean_object* v_a_3172_, lean_object* v_a_3173_, lean_object* v_a_3174_, lean_object* v_a_3175_, lean_object* v_a_3176_){
_start:
{
lean_object* v___x_3178_; lean_object* v_toApplicative_3179_; lean_object* v_toFunctor_3180_; lean_object* v_toSeq_3181_; lean_object* v_toSeqLeft_3182_; lean_object* v_toSeqRight_3183_; lean_object* v___f_3184_; lean_object* v___f_3185_; lean_object* v___f_3186_; lean_object* v___f_3187_; lean_object* v___x_3188_; lean_object* v___f_3189_; lean_object* v___f_3190_; lean_object* v___f_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v_toApplicative_3195_; lean_object* v___x_3197_; uint8_t v_isShared_3198_; uint8_t v_isSharedCheck_3227_; 
v___x_3178_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_3179_ = lean_ctor_get(v___x_3178_, 0);
v_toFunctor_3180_ = lean_ctor_get(v_toApplicative_3179_, 0);
v_toSeq_3181_ = lean_ctor_get(v_toApplicative_3179_, 2);
v_toSeqLeft_3182_ = lean_ctor_get(v_toApplicative_3179_, 3);
v_toSeqRight_3183_ = lean_ctor_get(v_toApplicative_3179_, 4);
v___f_3184_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2);
v___f_3185_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3);
lean_inc_ref_n(v_toFunctor_3180_, 2);
v___f_3186_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3186_, 0, v_toFunctor_3180_);
v___f_3187_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3187_, 0, v_toFunctor_3180_);
v___x_3188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3188_, 0, v___f_3186_);
lean_ctor_set(v___x_3188_, 1, v___f_3187_);
lean_inc(v_toSeqRight_3183_);
v___f_3189_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3189_, 0, v_toSeqRight_3183_);
lean_inc(v_toSeqLeft_3182_);
v___f_3190_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3190_, 0, v_toSeqLeft_3182_);
lean_inc(v_toSeq_3181_);
v___f_3191_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3191_, 0, v_toSeq_3181_);
v___x_3192_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3192_, 0, v___x_3188_);
lean_ctor_set(v___x_3192_, 1, v___f_3184_);
lean_ctor_set(v___x_3192_, 2, v___f_3191_);
lean_ctor_set(v___x_3192_, 3, v___f_3190_);
lean_ctor_set(v___x_3192_, 4, v___f_3189_);
v___x_3193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3193_, 0, v___x_3192_);
lean_ctor_set(v___x_3193_, 1, v___f_3185_);
v___x_3194_ = l_StateRefT_x27_instMonad___redArg(v___x_3193_);
v_toApplicative_3195_ = lean_ctor_get(v___x_3194_, 0);
v_isSharedCheck_3227_ = !lean_is_exclusive(v___x_3194_);
if (v_isSharedCheck_3227_ == 0)
{
lean_object* v_unused_3228_; 
v_unused_3228_ = lean_ctor_get(v___x_3194_, 1);
lean_dec(v_unused_3228_);
v___x_3197_ = v___x_3194_;
v_isShared_3198_ = v_isSharedCheck_3227_;
goto v_resetjp_3196_;
}
else
{
lean_inc(v_toApplicative_3195_);
lean_dec(v___x_3194_);
v___x_3197_ = lean_box(0);
v_isShared_3198_ = v_isSharedCheck_3227_;
goto v_resetjp_3196_;
}
v_resetjp_3196_:
{
lean_object* v_toFunctor_3199_; lean_object* v_toSeq_3200_; lean_object* v_toSeqLeft_3201_; lean_object* v_toSeqRight_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3225_; 
v_toFunctor_3199_ = lean_ctor_get(v_toApplicative_3195_, 0);
v_toSeq_3200_ = lean_ctor_get(v_toApplicative_3195_, 2);
v_toSeqLeft_3201_ = lean_ctor_get(v_toApplicative_3195_, 3);
v_toSeqRight_3202_ = lean_ctor_get(v_toApplicative_3195_, 4);
v_isSharedCheck_3225_ = !lean_is_exclusive(v_toApplicative_3195_);
if (v_isSharedCheck_3225_ == 0)
{
lean_object* v_unused_3226_; 
v_unused_3226_ = lean_ctor_get(v_toApplicative_3195_, 1);
lean_dec(v_unused_3226_);
v___x_3204_ = v_toApplicative_3195_;
v_isShared_3205_ = v_isSharedCheck_3225_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_toSeqRight_3202_);
lean_inc(v_toSeqLeft_3201_);
lean_inc(v_toSeq_3200_);
lean_inc(v_toFunctor_3199_);
lean_dec(v_toApplicative_3195_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3225_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
lean_object* v___f_3206_; lean_object* v___f_3207_; lean_object* v___f_3208_; lean_object* v___f_3209_; lean_object* v___f_3210_; lean_object* v___x_3211_; lean_object* v___f_3212_; lean_object* v___f_3213_; lean_object* v___f_3214_; lean_object* v___x_3216_; 
v___f_3206_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3206_, 0, v_inst_3171_);
v___f_3207_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4);
v___f_3208_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5);
lean_inc_ref(v_toFunctor_3199_);
v___f_3209_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3209_, 0, v_toFunctor_3199_);
v___f_3210_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3210_, 0, v_toFunctor_3199_);
v___x_3211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3211_, 0, v___f_3209_);
lean_ctor_set(v___x_3211_, 1, v___f_3210_);
v___f_3212_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3212_, 0, v_toSeqRight_3202_);
v___f_3213_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3213_, 0, v_toSeqLeft_3201_);
v___f_3214_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3214_, 0, v_toSeq_3200_);
if (v_isShared_3205_ == 0)
{
lean_ctor_set(v___x_3204_, 4, v___f_3212_);
lean_ctor_set(v___x_3204_, 3, v___f_3213_);
lean_ctor_set(v___x_3204_, 2, v___f_3214_);
lean_ctor_set(v___x_3204_, 1, v___f_3207_);
lean_ctor_set(v___x_3204_, 0, v___x_3211_);
v___x_3216_ = v___x_3204_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3224_; 
v_reuseFailAlloc_3224_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3224_, 0, v___x_3211_);
lean_ctor_set(v_reuseFailAlloc_3224_, 1, v___f_3207_);
lean_ctor_set(v_reuseFailAlloc_3224_, 2, v___f_3214_);
lean_ctor_set(v_reuseFailAlloc_3224_, 3, v___f_3213_);
lean_ctor_set(v_reuseFailAlloc_3224_, 4, v___f_3212_);
v___x_3216_ = v_reuseFailAlloc_3224_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
lean_object* v___x_3218_; 
if (v_isShared_3198_ == 0)
{
lean_ctor_set(v___x_3197_, 1, v___f_3208_);
lean_ctor_set(v___x_3197_, 0, v___x_3216_);
v___x_3218_ = v___x_3197_;
goto v_reusejp_3217_;
}
else
{
lean_object* v_reuseFailAlloc_3223_; 
v_reuseFailAlloc_3223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3223_, 0, v___x_3216_);
lean_ctor_set(v_reuseFailAlloc_3223_, 1, v___f_3208_);
v___x_3218_ = v_reuseFailAlloc_3223_;
goto v_reusejp_3217_;
}
v_reusejp_3217_:
{
size_t v_sz_3219_; size_t v___x_3220_; lean_object* v___x_129__overap_3221_; lean_object* v___x_3222_; 
v_sz_3219_ = lean_array_size(v_a_3172_);
v___x_3220_ = ((size_t)0ULL);
v___x_129__overap_3221_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3218_, v___f_3206_, v_sz_3219_, v___x_3220_, v_a_3172_);
lean_inc(v_a_3176_);
lean_inc_ref(v_a_3175_);
lean_inc(v_a_3174_);
lean_inc_ref(v_a_3173_);
v___x_3222_ = lean_apply_5(v___x_129__overap_3221_, v_a_3173_, v_a_3174_, v_a_3175_, v_a_3176_, lean_box(0));
return v___x_3222_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___boxed(lean_object* v_inst_3229_, lean_object* v_a_3230_, lean_object* v_a_3231_, lean_object* v_a_3232_, lean_object* v_a_3233_, lean_object* v_a_3234_, lean_object* v_a_3235_){
_start:
{
lean_object* v_res_3236_; 
v_res_3236_ = l_Lean_Compiler_LCNF_Probe_toString___redArg(v_inst_3229_, v_a_3230_, v_a_3231_, v_a_3232_, v_a_3233_, v_a_3234_);
lean_dec(v_a_3234_);
lean_dec_ref(v_a_3233_);
lean_dec(v_a_3232_);
lean_dec_ref(v_a_3231_);
return v_res_3236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString(lean_object* v_00_u03b1_3237_, lean_object* v_inst_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_, lean_object* v_a_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_){
_start:
{
lean_object* v___x_3245_; lean_object* v_toApplicative_3246_; lean_object* v_toFunctor_3247_; lean_object* v_toSeq_3248_; lean_object* v_toSeqLeft_3249_; lean_object* v_toSeqRight_3250_; lean_object* v___f_3251_; lean_object* v___f_3252_; lean_object* v___f_3253_; lean_object* v___f_3254_; lean_object* v___x_3255_; lean_object* v___f_3256_; lean_object* v___f_3257_; lean_object* v___f_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v_toApplicative_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3294_; 
v___x_3245_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_3246_ = lean_ctor_get(v___x_3245_, 0);
v_toFunctor_3247_ = lean_ctor_get(v_toApplicative_3246_, 0);
v_toSeq_3248_ = lean_ctor_get(v_toApplicative_3246_, 2);
v_toSeqLeft_3249_ = lean_ctor_get(v_toApplicative_3246_, 3);
v_toSeqRight_3250_ = lean_ctor_get(v_toApplicative_3246_, 4);
v___f_3251_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2);
v___f_3252_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3);
lean_inc_ref_n(v_toFunctor_3247_, 2);
v___f_3253_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3253_, 0, v_toFunctor_3247_);
v___f_3254_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3254_, 0, v_toFunctor_3247_);
v___x_3255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3255_, 0, v___f_3253_);
lean_ctor_set(v___x_3255_, 1, v___f_3254_);
lean_inc(v_toSeqRight_3250_);
v___f_3256_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3256_, 0, v_toSeqRight_3250_);
lean_inc(v_toSeqLeft_3249_);
v___f_3257_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3257_, 0, v_toSeqLeft_3249_);
lean_inc(v_toSeq_3248_);
v___f_3258_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3258_, 0, v_toSeq_3248_);
v___x_3259_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3255_);
lean_ctor_set(v___x_3259_, 1, v___f_3251_);
lean_ctor_set(v___x_3259_, 2, v___f_3258_);
lean_ctor_set(v___x_3259_, 3, v___f_3257_);
lean_ctor_set(v___x_3259_, 4, v___f_3256_);
v___x_3260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3260_, 0, v___x_3259_);
lean_ctor_set(v___x_3260_, 1, v___f_3252_);
v___x_3261_ = l_StateRefT_x27_instMonad___redArg(v___x_3260_);
v_toApplicative_3262_ = lean_ctor_get(v___x_3261_, 0);
v_isSharedCheck_3294_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3294_ == 0)
{
lean_object* v_unused_3295_; 
v_unused_3295_ = lean_ctor_get(v___x_3261_, 1);
lean_dec(v_unused_3295_);
v___x_3264_ = v___x_3261_;
v_isShared_3265_ = v_isSharedCheck_3294_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_toApplicative_3262_);
lean_dec(v___x_3261_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3294_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v_toFunctor_3266_; lean_object* v_toSeq_3267_; lean_object* v_toSeqLeft_3268_; lean_object* v_toSeqRight_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3292_; 
v_toFunctor_3266_ = lean_ctor_get(v_toApplicative_3262_, 0);
v_toSeq_3267_ = lean_ctor_get(v_toApplicative_3262_, 2);
v_toSeqLeft_3268_ = lean_ctor_get(v_toApplicative_3262_, 3);
v_toSeqRight_3269_ = lean_ctor_get(v_toApplicative_3262_, 4);
v_isSharedCheck_3292_ = !lean_is_exclusive(v_toApplicative_3262_);
if (v_isSharedCheck_3292_ == 0)
{
lean_object* v_unused_3293_; 
v_unused_3293_ = lean_ctor_get(v_toApplicative_3262_, 1);
lean_dec(v_unused_3293_);
v___x_3271_ = v_toApplicative_3262_;
v_isShared_3272_ = v_isSharedCheck_3292_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_toSeqRight_3269_);
lean_inc(v_toSeqLeft_3268_);
lean_inc(v_toSeq_3267_);
lean_inc(v_toFunctor_3266_);
lean_dec(v_toApplicative_3262_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3292_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___f_3273_; lean_object* v___f_3274_; lean_object* v___f_3275_; lean_object* v___f_3276_; lean_object* v___f_3277_; lean_object* v___x_3278_; lean_object* v___f_3279_; lean_object* v___f_3280_; lean_object* v___f_3281_; lean_object* v___x_3283_; 
v___f_3273_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3273_, 0, v_inst_3238_);
v___f_3274_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4);
v___f_3275_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5);
lean_inc_ref(v_toFunctor_3266_);
v___f_3276_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3276_, 0, v_toFunctor_3266_);
v___f_3277_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3277_, 0, v_toFunctor_3266_);
v___x_3278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3278_, 0, v___f_3276_);
lean_ctor_set(v___x_3278_, 1, v___f_3277_);
v___f_3279_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3279_, 0, v_toSeqRight_3269_);
v___f_3280_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3280_, 0, v_toSeqLeft_3268_);
v___f_3281_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3281_, 0, v_toSeq_3267_);
if (v_isShared_3272_ == 0)
{
lean_ctor_set(v___x_3271_, 4, v___f_3279_);
lean_ctor_set(v___x_3271_, 3, v___f_3280_);
lean_ctor_set(v___x_3271_, 2, v___f_3281_);
lean_ctor_set(v___x_3271_, 1, v___f_3274_);
lean_ctor_set(v___x_3271_, 0, v___x_3278_);
v___x_3283_ = v___x_3271_;
goto v_reusejp_3282_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v___x_3278_);
lean_ctor_set(v_reuseFailAlloc_3291_, 1, v___f_3274_);
lean_ctor_set(v_reuseFailAlloc_3291_, 2, v___f_3281_);
lean_ctor_set(v_reuseFailAlloc_3291_, 3, v___f_3280_);
lean_ctor_set(v_reuseFailAlloc_3291_, 4, v___f_3279_);
v___x_3283_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3282_;
}
v_reusejp_3282_:
{
lean_object* v___x_3285_; 
if (v_isShared_3265_ == 0)
{
lean_ctor_set(v___x_3264_, 1, v___f_3275_);
lean_ctor_set(v___x_3264_, 0, v___x_3283_);
v___x_3285_ = v___x_3264_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3290_; 
v_reuseFailAlloc_3290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3290_, 0, v___x_3283_);
lean_ctor_set(v_reuseFailAlloc_3290_, 1, v___f_3275_);
v___x_3285_ = v_reuseFailAlloc_3290_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
size_t v_sz_3286_; size_t v___x_3287_; lean_object* v___x_190__overap_3288_; lean_object* v___x_3289_; 
v_sz_3286_ = lean_array_size(v_a_3239_);
v___x_3287_ = ((size_t)0ULL);
v___x_190__overap_3288_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3285_, v___f_3273_, v_sz_3286_, v___x_3287_, v_a_3239_);
lean_inc(v_a_3243_);
lean_inc_ref(v_a_3242_);
lean_inc(v_a_3241_);
lean_inc_ref(v_a_3240_);
v___x_3289_ = lean_apply_5(v___x_190__overap_3288_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3243_, lean_box(0));
return v___x_3289_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___boxed(lean_object* v_00_u03b1_3296_, lean_object* v_inst_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_, lean_object* v_a_3302_, lean_object* v_a_3303_){
_start:
{
lean_object* v_res_3304_; 
v_res_3304_ = l_Lean_Compiler_LCNF_Probe_toString(v_00_u03b1_3296_, v_inst_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_);
lean_dec(v_a_3302_);
lean_dec_ref(v_a_3301_);
lean_dec(v_a_3300_);
lean_dec_ref(v_a_3299_);
return v_res_3304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___redArg(lean_object* v_data_3305_){
_start:
{
lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; 
v___x_3307_ = lean_array_get_size(v_data_3305_);
v___x_3308_ = lean_unsigned_to_nat(1u);
v___x_3309_ = lean_mk_empty_array_with_capacity(v___x_3308_);
v___x_3310_ = lean_array_push(v___x_3309_, v___x_3307_);
v___x_3311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3311_, 0, v___x_3310_);
return v___x_3311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___redArg___boxed(lean_object* v_data_3312_, lean_object* v_a_3313_){
_start:
{
lean_object* v_res_3314_; 
v_res_3314_ = l_Lean_Compiler_LCNF_Probe_count___redArg(v_data_3312_);
lean_dec_ref(v_data_3312_);
return v_res_3314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count(lean_object* v_00_u03b1_3315_, lean_object* v_data_3316_, lean_object* v_a_3317_, lean_object* v_a_3318_, lean_object* v_a_3319_, lean_object* v_a_3320_){
_start:
{
lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; 
v___x_3322_ = lean_array_get_size(v_data_3316_);
v___x_3323_ = lean_unsigned_to_nat(1u);
v___x_3324_ = lean_mk_empty_array_with_capacity(v___x_3323_);
v___x_3325_ = lean_array_push(v___x_3324_, v___x_3322_);
v___x_3326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3326_, 0, v___x_3325_);
return v___x_3326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___boxed(lean_object* v_00_u03b1_3327_, lean_object* v_data_3328_, lean_object* v_a_3329_, lean_object* v_a_3330_, lean_object* v_a_3331_, lean_object* v_a_3332_, lean_object* v_a_3333_){
_start:
{
lean_object* v_res_3334_; 
v_res_3334_ = l_Lean_Compiler_LCNF_Probe_count(v_00_u03b1_3327_, v_data_3328_, v_a_3329_, v_a_3330_, v_a_3331_, v_a_3332_);
lean_dec(v_a_3332_);
lean_dec_ref(v_a_3331_);
lean_dec(v_a_3330_);
lean_dec_ref(v_a_3329_);
lean_dec_ref(v_data_3328_);
return v_res_3334_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0(void){
_start:
{
lean_object* v___f_3335_; 
v___f_3335_ = lean_alloc_closure((void*)(l_Nat_add___boxed), 2, 0);
return v___f_3335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg(lean_object* v_data_3336_){
_start:
{
lean_object* v___y_3339_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; uint8_t v___x_3347_; 
v___x_3344_ = lean_unsigned_to_nat(0u);
v___x_3345_ = lean_array_get_size(v_data_3336_);
v___x_3346_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9, &l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9_once, _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9);
v___x_3347_ = lean_nat_dec_lt(v___x_3344_, v___x_3345_);
if (v___x_3347_ == 0)
{
lean_dec_ref(v_data_3336_);
v___y_3339_ = v___x_3344_;
goto v___jp_3338_;
}
else
{
lean_object* v___f_3348_; uint8_t v___x_3349_; 
v___f_3348_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0, &l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0);
v___x_3349_ = lean_nat_dec_le(v___x_3345_, v___x_3345_);
if (v___x_3349_ == 0)
{
if (v___x_3347_ == 0)
{
lean_dec_ref(v_data_3336_);
v___y_3339_ = v___x_3344_;
goto v___jp_3338_;
}
else
{
size_t v___x_3350_; size_t v___x_3351_; lean_object* v___x_3352_; 
v___x_3350_ = ((size_t)0ULL);
v___x_3351_ = lean_usize_of_nat(v___x_3345_);
v___x_3352_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3346_, v___f_3348_, v_data_3336_, v___x_3350_, v___x_3351_, v___x_3344_);
v___y_3339_ = v___x_3352_;
goto v___jp_3338_;
}
}
else
{
size_t v___x_3353_; size_t v___x_3354_; lean_object* v___x_3355_; 
v___x_3353_ = ((size_t)0ULL);
v___x_3354_ = lean_usize_of_nat(v___x_3345_);
v___x_3355_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3346_, v___f_3348_, v_data_3336_, v___x_3353_, v___x_3354_, v___x_3344_);
v___y_3339_ = v___x_3355_;
goto v___jp_3338_;
}
}
v___jp_3338_:
{
lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; 
v___x_3340_ = lean_unsigned_to_nat(1u);
v___x_3341_ = lean_mk_empty_array_with_capacity(v___x_3340_);
v___x_3342_ = lean_array_push(v___x_3341_, v___y_3339_);
v___x_3343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3343_, 0, v___x_3342_);
return v___x_3343_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg___boxed(lean_object* v_data_3356_, lean_object* v_a_3357_){
_start:
{
lean_object* v_res_3358_; 
v_res_3358_ = l_Lean_Compiler_LCNF_Probe_sum___redArg(v_data_3356_);
return v_res_3358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum(lean_object* v_data_3359_, lean_object* v_a_3360_, lean_object* v_a_3361_, lean_object* v_a_3362_, lean_object* v_a_3363_){
_start:
{
lean_object* v___y_3366_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; uint8_t v___x_3374_; 
v___x_3371_ = lean_unsigned_to_nat(0u);
v___x_3372_ = lean_array_get_size(v_data_3359_);
v___x_3373_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9, &l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9_once, _init_l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9);
v___x_3374_ = lean_nat_dec_lt(v___x_3371_, v___x_3372_);
if (v___x_3374_ == 0)
{
lean_dec_ref(v_data_3359_);
v___y_3366_ = v___x_3371_;
goto v___jp_3365_;
}
else
{
lean_object* v___f_3375_; uint8_t v___x_3376_; 
v___f_3375_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0, &l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0);
v___x_3376_ = lean_nat_dec_le(v___x_3372_, v___x_3372_);
if (v___x_3376_ == 0)
{
if (v___x_3374_ == 0)
{
lean_dec_ref(v_data_3359_);
v___y_3366_ = v___x_3371_;
goto v___jp_3365_;
}
else
{
size_t v___x_3377_; size_t v___x_3378_; lean_object* v___x_3379_; 
v___x_3377_ = ((size_t)0ULL);
v___x_3378_ = lean_usize_of_nat(v___x_3372_);
v___x_3379_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3373_, v___f_3375_, v_data_3359_, v___x_3377_, v___x_3378_, v___x_3371_);
v___y_3366_ = v___x_3379_;
goto v___jp_3365_;
}
}
else
{
size_t v___x_3380_; size_t v___x_3381_; lean_object* v___x_3382_; 
v___x_3380_ = ((size_t)0ULL);
v___x_3381_ = lean_usize_of_nat(v___x_3372_);
v___x_3382_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3373_, v___f_3375_, v_data_3359_, v___x_3380_, v___x_3381_, v___x_3371_);
v___y_3366_ = v___x_3382_;
goto v___jp_3365_;
}
}
v___jp_3365_:
{
lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; 
v___x_3367_ = lean_unsigned_to_nat(1u);
v___x_3368_ = lean_mk_empty_array_with_capacity(v___x_3367_);
v___x_3369_ = lean_array_push(v___x_3368_, v___y_3366_);
v___x_3370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3370_, 0, v___x_3369_);
return v___x_3370_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___boxed(lean_object* v_data_3383_, lean_object* v_a_3384_, lean_object* v_a_3385_, lean_object* v_a_3386_, lean_object* v_a_3387_, lean_object* v_a_3388_){
_start:
{
lean_object* v_res_3389_; 
v_res_3389_ = l_Lean_Compiler_LCNF_Probe_sum(v_data_3383_, v_a_3384_, v_a_3385_, v_a_3386_, v_a_3387_);
lean_dec(v_a_3387_);
lean_dec_ref(v_a_3386_);
lean_dec(v_a_3385_);
lean_dec_ref(v_a_3384_);
return v_res_3389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___redArg(lean_object* v_n_3390_, lean_object* v_data_3391_){
_start:
{
lean_object* v_lower_3394_; lean_object* v_upper_3395_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; uint8_t v___x_3402_; 
v___x_3399_ = lean_array_get_size(v_data_3391_);
v___x_3400_ = lean_nat_sub(v___x_3399_, v_n_3390_);
v___x_3401_ = lean_unsigned_to_nat(0u);
v___x_3402_ = lean_nat_dec_le(v___x_3400_, v___x_3401_);
if (v___x_3402_ == 0)
{
v_lower_3394_ = v___x_3400_;
v_upper_3395_ = v___x_3399_;
goto v___jp_3393_;
}
else
{
lean_dec(v___x_3400_);
v_lower_3394_ = v___x_3401_;
v_upper_3395_ = v___x_3399_;
goto v___jp_3393_;
}
v___jp_3393_:
{
lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; 
v___x_3396_ = l_Array_toSubarray___redArg(v_data_3391_, v_lower_3394_, v_upper_3395_);
v___x_3397_ = l_Subarray_copy___redArg(v___x_3396_);
v___x_3398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3398_, 0, v___x_3397_);
return v___x_3398_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___redArg___boxed(lean_object* v_n_3403_, lean_object* v_data_3404_, lean_object* v_a_3405_){
_start:
{
lean_object* v_res_3406_; 
v_res_3406_ = l_Lean_Compiler_LCNF_Probe_tail___redArg(v_n_3403_, v_data_3404_);
lean_dec(v_n_3403_);
return v_res_3406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail(lean_object* v_00_u03b1_3407_, lean_object* v_n_3408_, lean_object* v_data_3409_, lean_object* v_a_3410_, lean_object* v_a_3411_, lean_object* v_a_3412_, lean_object* v_a_3413_){
_start:
{
lean_object* v_lower_3416_; lean_object* v_upper_3417_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; uint8_t v___x_3424_; 
v___x_3421_ = lean_array_get_size(v_data_3409_);
v___x_3422_ = lean_nat_sub(v___x_3421_, v_n_3408_);
v___x_3423_ = lean_unsigned_to_nat(0u);
v___x_3424_ = lean_nat_dec_le(v___x_3422_, v___x_3423_);
if (v___x_3424_ == 0)
{
v_lower_3416_ = v___x_3422_;
v_upper_3417_ = v___x_3421_;
goto v___jp_3415_;
}
else
{
lean_dec(v___x_3422_);
v_lower_3416_ = v___x_3423_;
v_upper_3417_ = v___x_3421_;
goto v___jp_3415_;
}
v___jp_3415_:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; 
v___x_3418_ = l_Array_toSubarray___redArg(v_data_3409_, v_lower_3416_, v_upper_3417_);
v___x_3419_ = l_Subarray_copy___redArg(v___x_3418_);
v___x_3420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3420_, 0, v___x_3419_);
return v___x_3420_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___boxed(lean_object* v_00_u03b1_3425_, lean_object* v_n_3426_, lean_object* v_data_3427_, lean_object* v_a_3428_, lean_object* v_a_3429_, lean_object* v_a_3430_, lean_object* v_a_3431_, lean_object* v_a_3432_){
_start:
{
lean_object* v_res_3433_; 
v_res_3433_ = l_Lean_Compiler_LCNF_Probe_tail(v_00_u03b1_3425_, v_n_3426_, v_data_3427_, v_a_3428_, v_a_3429_, v_a_3430_, v_a_3431_);
lean_dec(v_a_3431_);
lean_dec_ref(v_a_3430_);
lean_dec(v_a_3429_);
lean_dec_ref(v_a_3428_);
lean_dec(v_n_3426_);
return v_res_3433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___redArg(lean_object* v_n_3434_, lean_object* v_data_3435_){
_start:
{
lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; 
v___x_3437_ = lean_unsigned_to_nat(0u);
v___x_3438_ = l_Array_toSubarray___redArg(v_data_3435_, v___x_3437_, v_n_3434_);
v___x_3439_ = l_Subarray_copy___redArg(v___x_3438_);
v___x_3440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3440_, 0, v___x_3439_);
return v___x_3440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___redArg___boxed(lean_object* v_n_3441_, lean_object* v_data_3442_, lean_object* v_a_3443_){
_start:
{
lean_object* v_res_3444_; 
v_res_3444_ = l_Lean_Compiler_LCNF_Probe_head___redArg(v_n_3441_, v_data_3442_);
return v_res_3444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head(lean_object* v_00_u03b1_3445_, lean_object* v_n_3446_, lean_object* v_data_3447_, lean_object* v_a_3448_, lean_object* v_a_3449_, lean_object* v_a_3450_, lean_object* v_a_3451_){
_start:
{
lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; 
v___x_3453_ = lean_unsigned_to_nat(0u);
v___x_3454_ = l_Array_toSubarray___redArg(v_data_3447_, v___x_3453_, v_n_3446_);
v___x_3455_ = l_Subarray_copy___redArg(v___x_3454_);
v___x_3456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3456_, 0, v___x_3455_);
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___boxed(lean_object* v_00_u03b1_3457_, lean_object* v_n_3458_, lean_object* v_data_3459_, lean_object* v_a_3460_, lean_object* v_a_3461_, lean_object* v_a_3462_, lean_object* v_a_3463_, lean_object* v_a_3464_){
_start:
{
lean_object* v_res_3465_; 
v_res_3465_ = l_Lean_Compiler_LCNF_Probe_head(v_00_u03b1_3457_, v_n_3458_, v_data_3459_, v_a_3460_, v_a_3461_, v_a_3462_, v_a_3463_);
lean_dec(v_a_3463_);
lean_dec_ref(v_a_3462_);
lean_dec(v_a_3461_);
lean_dec_ref(v_a_3460_);
return v_res_3465_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3466_; 
v___x_3466_ = lean_mk_string_unchecked("Compiler", 8, 8);
return v___x_3466_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3467_; 
v___x_3467_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_3467_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3468_; lean_object* v___x_3469_; 
v___x_3468_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1);
v___x_3469_ = l_Lean_Name_mkStr1(v___x_3468_);
return v___x_3469_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___f_3470_; 
v___f_3470_ = lean_alloc_closure((void*)(l_ReaderT_instMonadFunctor___lam__0), 4, 0);
return v___f_3470_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3471_; 
v___x_3471_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadFunctor___aux__1___boxed), 7, 3);
lean_closure_set(v___x_3471_, 0, lean_box(0));
lean_closure_set(v___x_3471_, 1, lean_box(0));
lean_closure_set(v___x_3471_, 2, lean_box(0));
return v___x_3471_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___f_3472_; 
v___f_3472_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___boxed), 6, 0);
return v___f_3472_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__6(void){
_start:
{
lean_object* v___x_3473_; 
v___x_3473_ = lean_mk_string_unchecked("#", 1, 1);
return v___x_3473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0(lean_object* v_probe_3474_, lean_object* v___x_3475_, lean_object* v___x_3476_, lean_object* v___f_3477_, lean_object* v_inst_3478_, lean_object* v___x_3479_, lean_object* v___x_3480_, lean_object* v_decls_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_){
_start:
{
lean_object* v___x_3487_; 
lean_inc(v___y_3485_);
lean_inc_ref(v___y_3484_);
lean_inc(v___y_3483_);
lean_inc_ref(v___y_3482_);
lean_inc_ref(v_decls_3481_);
v___x_3487_ = lean_apply_6(v_probe_3474_, v_decls_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_, lean_box(0));
if (lean_obj_tag(v___x_3487_) == 0)
{
lean_object* v_options_3488_; uint8_t v_hasTrace_3489_; 
v_options_3488_ = lean_ctor_get(v___y_3484_, 2);
v_hasTrace_3489_ = lean_ctor_get_uint8(v_options_3488_, sizeof(void*)*1);
if (v_hasTrace_3489_ == 0)
{
lean_object* v___x_3491_; uint8_t v_isShared_3492_; uint8_t v_isSharedCheck_3496_; 
lean_dec_ref(v___x_3480_);
lean_dec_ref(v___x_3479_);
lean_dec_ref(v_inst_3478_);
lean_dec(v___f_3477_);
lean_dec(v___x_3476_);
lean_dec_ref(v___x_3475_);
v_isSharedCheck_3496_ = !lean_is_exclusive(v___x_3487_);
if (v_isSharedCheck_3496_ == 0)
{
lean_object* v_unused_3497_; 
v_unused_3497_ = lean_ctor_get(v___x_3487_, 0);
lean_dec(v_unused_3497_);
v___x_3491_ = v___x_3487_;
v_isShared_3492_ = v_isSharedCheck_3496_;
goto v_resetjp_3490_;
}
else
{
lean_dec(v___x_3487_);
v___x_3491_ = lean_box(0);
v_isShared_3492_ = v_isSharedCheck_3496_;
goto v_resetjp_3490_;
}
v_resetjp_3490_:
{
lean_object* v___x_3494_; 
if (v_isShared_3492_ == 0)
{
lean_ctor_set(v___x_3491_, 0, v_decls_3481_);
v___x_3494_ = v___x_3491_;
goto v_reusejp_3493_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v_decls_3481_);
v___x_3494_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3493_;
}
v_reusejp_3493_:
{
return v___x_3494_;
}
}
}
else
{
lean_object* v_a_3498_; lean_object* v___x_3500_; uint8_t v_isShared_3501_; uint8_t v_isSharedCheck_3542_; 
v_a_3498_ = lean_ctor_get(v___x_3487_, 0);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3487_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3500_ = v___x_3487_;
v_isShared_3501_ = v_isSharedCheck_3542_;
goto v_resetjp_3499_;
}
else
{
lean_inc(v_a_3498_);
lean_dec(v___x_3487_);
v___x_3500_ = lean_box(0);
v_isShared_3501_ = v_isSharedCheck_3542_;
goto v_resetjp_3499_;
}
v_resetjp_3499_:
{
lean_object* v_inheritedTraceOptions_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; uint8_t v___x_3507_; 
v_inheritedTraceOptions_3502_ = lean_ctor_get(v___y_3484_, 13);
v___x_3503_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0);
v___x_3504_ = l_Lean_Name_mkStr2(v___x_3503_, v___x_3475_);
v___x_3505_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2);
lean_inc(v___x_3504_);
v___x_3506_ = l_Lean_Name_append(v___x_3505_, v___x_3504_);
v___x_3507_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3502_, v_options_3488_, v___x_3506_);
lean_dec(v___x_3506_);
if (v___x_3507_ == 0)
{
lean_object* v___x_3509_; 
lean_dec(v___x_3504_);
lean_dec(v_a_3498_);
lean_dec_ref(v___x_3480_);
lean_dec_ref(v___x_3479_);
lean_dec_ref(v_inst_3478_);
lean_dec(v___f_3477_);
lean_dec(v___x_3476_);
if (v_isShared_3501_ == 0)
{
lean_ctor_set(v___x_3500_, 0, v_decls_3481_);
v___x_3509_ = v___x_3500_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v_decls_3481_);
v___x_3509_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
return v___x_3509_;
}
}
else
{
lean_object* v___f_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v_toMonadRef_3516_; lean_object* v___f_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_1077__overap_3524_; lean_object* v___x_3525_; 
lean_del_object(v___x_3500_);
v___f_3511_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3);
v___x_3512_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__4, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__4_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__4);
v___x_3513_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_3514_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_3512_, v___x_3476_, v___x_3513_);
v___x_3515_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_3511_, v___f_3477_, v___x_3514_);
v_toMonadRef_3516_ = lean_ctor_get(v___x_3515_, 0);
lean_inc_ref(v_toMonadRef_3516_);
lean_dec_ref(v___x_3515_);
v___f_3517_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__5, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__5_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__5);
v___x_3518_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__6, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__6_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__6);
v___x_3519_ = lean_array_to_list(v_a_3498_);
v___x_3520_ = l_List_toString___redArg(v_inst_3478_, v___x_3519_);
v___x_3521_ = lean_string_append(v___x_3518_, v___x_3520_);
lean_dec_ref(v___x_3520_);
v___x_3522_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3522_, 0, v___x_3521_);
v___x_3523_ = l_Lean_MessageData_ofFormat(v___x_3522_);
v___x_1077__overap_3524_ = l_Lean_addTrace___redArg(v___x_3479_, v___x_3480_, v_toMonadRef_3516_, v___f_3517_, v___x_3504_, v___x_3523_);
lean_inc(v___y_3485_);
lean_inc_ref(v___y_3484_);
lean_inc(v___y_3483_);
lean_inc_ref(v___y_3482_);
v___x_3525_ = lean_apply_5(v___x_1077__overap_3524_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_, lean_box(0));
if (lean_obj_tag(v___x_3525_) == 0)
{
lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3532_; 
v_isSharedCheck_3532_ = !lean_is_exclusive(v___x_3525_);
if (v_isSharedCheck_3532_ == 0)
{
lean_object* v_unused_3533_; 
v_unused_3533_ = lean_ctor_get(v___x_3525_, 0);
lean_dec(v_unused_3533_);
v___x_3527_ = v___x_3525_;
v_isShared_3528_ = v_isSharedCheck_3532_;
goto v_resetjp_3526_;
}
else
{
lean_dec(v___x_3525_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3532_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
lean_object* v___x_3530_; 
if (v_isShared_3528_ == 0)
{
lean_ctor_set(v___x_3527_, 0, v_decls_3481_);
v___x_3530_ = v___x_3527_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v_decls_3481_);
v___x_3530_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
return v___x_3530_;
}
}
}
else
{
lean_object* v_a_3534_; lean_object* v___x_3536_; uint8_t v_isShared_3537_; uint8_t v_isSharedCheck_3541_; 
lean_dec_ref(v_decls_3481_);
v_a_3534_ = lean_ctor_get(v___x_3525_, 0);
v_isSharedCheck_3541_ = !lean_is_exclusive(v___x_3525_);
if (v_isSharedCheck_3541_ == 0)
{
v___x_3536_ = v___x_3525_;
v_isShared_3537_ = v_isSharedCheck_3541_;
goto v_resetjp_3535_;
}
else
{
lean_inc(v_a_3534_);
lean_dec(v___x_3525_);
v___x_3536_ = lean_box(0);
v_isShared_3537_ = v_isSharedCheck_3541_;
goto v_resetjp_3535_;
}
v_resetjp_3535_:
{
lean_object* v___x_3539_; 
if (v_isShared_3537_ == 0)
{
v___x_3539_ = v___x_3536_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v_a_3534_);
v___x_3539_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
return v___x_3539_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3543_; lean_object* v___x_3545_; uint8_t v_isShared_3546_; uint8_t v_isSharedCheck_3550_; 
lean_dec_ref(v_decls_3481_);
lean_dec_ref(v___x_3480_);
lean_dec_ref(v___x_3479_);
lean_dec_ref(v_inst_3478_);
lean_dec(v___f_3477_);
lean_dec(v___x_3476_);
lean_dec_ref(v___x_3475_);
v_a_3543_ = lean_ctor_get(v___x_3487_, 0);
v_isSharedCheck_3550_ = !lean_is_exclusive(v___x_3487_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3545_ = v___x_3487_;
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
else
{
lean_inc(v_a_3543_);
lean_dec(v___x_3487_);
v___x_3545_ = lean_box(0);
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
v_resetjp_3544_:
{
lean_object* v___x_3548_; 
if (v_isShared_3546_ == 0)
{
v___x_3548_ = v___x_3545_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v_a_3543_);
v___x_3548_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
return v___x_3548_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___boxed(lean_object* v_probe_3551_, lean_object* v___x_3552_, lean_object* v___x_3553_, lean_object* v___f_3554_, lean_object* v_inst_3555_, lean_object* v___x_3556_, lean_object* v___x_3557_, lean_object* v_decls_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_){
_start:
{
lean_object* v_res_3564_; 
v_res_3564_ = l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0(v_probe_3551_, v___x_3552_, v___x_3553_, v___f_3554_, v_inst_3555_, v___x_3556_, v___x_3557_, v_decls_3558_, v___y_3559_, v___y_3560_, v___y_3561_, v___y_3562_);
lean_dec(v___y_3562_);
lean_dec_ref(v___y_3561_);
lean_dec(v___y_3560_);
lean_dec_ref(v___y_3559_);
return v_res_3564_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0(void){
_start:
{
lean_object* v___f_3565_; 
v___f_3565_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___lam__0___boxed), 3, 0);
return v___f_3565_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1(void){
_start:
{
lean_object* v___x_3566_; 
v___x_3566_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 3);
lean_closure_set(v___x_3566_, 0, lean_box(0));
lean_closure_set(v___x_3566_, 1, lean_box(0));
lean_closure_set(v___x_3566_, 2, lean_box(0));
return v___x_3566_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2(void){
_start:
{
lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; 
v___x_3567_ = l_Lean_Core_instMonadTraceCoreM;
v___x_3568_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1);
v___x_3569_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_3568_, v___x_3567_);
return v___x_3569_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3(void){
_start:
{
lean_object* v___x_3570_; lean_object* v___f_3571_; lean_object* v___x_3572_; 
v___x_3570_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2);
v___f_3571_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0);
v___x_3572_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_3571_, v___x_3570_);
return v___x_3572_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4(void){
_start:
{
lean_object* v___x_3573_; 
v___x_3573_ = lean_mk_string_unchecked("probe", 5, 5);
return v___x_3573_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5(void){
_start:
{
lean_object* v___x_3574_; lean_object* v___x_3575_; 
v___x_3574_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4);
v___x_3575_ = l_Lean_Name_mkStr1(v___x_3574_);
return v___x_3575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg(lean_object* v_inst_3576_, uint8_t v_phase_3577_, lean_object* v_probe_3578_){
_start:
{
lean_object* v___x_3579_; lean_object* v_toApplicative_3580_; lean_object* v_toFunctor_3581_; lean_object* v_toSeq_3582_; lean_object* v_toSeqLeft_3583_; lean_object* v_toSeqRight_3584_; lean_object* v___f_3585_; lean_object* v___f_3586_; lean_object* v___f_3587_; lean_object* v___f_3588_; lean_object* v___x_3589_; lean_object* v___f_3590_; lean_object* v___f_3591_; lean_object* v___f_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v_toApplicative_3596_; lean_object* v___x_3598_; uint8_t v_isShared_3599_; uint8_t v_isSharedCheck_3632_; 
v___x_3579_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_3580_ = lean_ctor_get(v___x_3579_, 0);
v_toFunctor_3581_ = lean_ctor_get(v_toApplicative_3580_, 0);
v_toSeq_3582_ = lean_ctor_get(v_toApplicative_3580_, 2);
v_toSeqLeft_3583_ = lean_ctor_get(v_toApplicative_3580_, 3);
v_toSeqRight_3584_ = lean_ctor_get(v_toApplicative_3580_, 4);
v___f_3585_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2);
v___f_3586_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3);
lean_inc_ref_n(v_toFunctor_3581_, 2);
v___f_3587_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3587_, 0, v_toFunctor_3581_);
v___f_3588_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3588_, 0, v_toFunctor_3581_);
v___x_3589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3589_, 0, v___f_3587_);
lean_ctor_set(v___x_3589_, 1, v___f_3588_);
lean_inc(v_toSeqRight_3584_);
v___f_3590_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3590_, 0, v_toSeqRight_3584_);
lean_inc(v_toSeqLeft_3583_);
v___f_3591_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3591_, 0, v_toSeqLeft_3583_);
lean_inc(v_toSeq_3582_);
v___f_3592_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3592_, 0, v_toSeq_3582_);
v___x_3593_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3593_, 0, v___x_3589_);
lean_ctor_set(v___x_3593_, 1, v___f_3585_);
lean_ctor_set(v___x_3593_, 2, v___f_3592_);
lean_ctor_set(v___x_3593_, 3, v___f_3591_);
lean_ctor_set(v___x_3593_, 4, v___f_3590_);
v___x_3594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3594_, 0, v___x_3593_);
lean_ctor_set(v___x_3594_, 1, v___f_3586_);
v___x_3595_ = l_StateRefT_x27_instMonad___redArg(v___x_3594_);
v_toApplicative_3596_ = lean_ctor_get(v___x_3595_, 0);
v_isSharedCheck_3632_ = !lean_is_exclusive(v___x_3595_);
if (v_isSharedCheck_3632_ == 0)
{
lean_object* v_unused_3633_; 
v_unused_3633_ = lean_ctor_get(v___x_3595_, 1);
lean_dec(v_unused_3633_);
v___x_3598_ = v___x_3595_;
v_isShared_3599_ = v_isSharedCheck_3632_;
goto v_resetjp_3597_;
}
else
{
lean_inc(v_toApplicative_3596_);
lean_dec(v___x_3595_);
v___x_3598_ = lean_box(0);
v_isShared_3599_ = v_isSharedCheck_3632_;
goto v_resetjp_3597_;
}
v_resetjp_3597_:
{
lean_object* v_toFunctor_3600_; lean_object* v_toSeq_3601_; lean_object* v_toSeqLeft_3602_; lean_object* v_toSeqRight_3603_; lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3630_; 
v_toFunctor_3600_ = lean_ctor_get(v_toApplicative_3596_, 0);
v_toSeq_3601_ = lean_ctor_get(v_toApplicative_3596_, 2);
v_toSeqLeft_3602_ = lean_ctor_get(v_toApplicative_3596_, 3);
v_toSeqRight_3603_ = lean_ctor_get(v_toApplicative_3596_, 4);
v_isSharedCheck_3630_ = !lean_is_exclusive(v_toApplicative_3596_);
if (v_isSharedCheck_3630_ == 0)
{
lean_object* v_unused_3631_; 
v_unused_3631_ = lean_ctor_get(v_toApplicative_3596_, 1);
lean_dec(v_unused_3631_);
v___x_3605_ = v_toApplicative_3596_;
v_isShared_3606_ = v_isSharedCheck_3630_;
goto v_resetjp_3604_;
}
else
{
lean_inc(v_toSeqRight_3603_);
lean_inc(v_toSeqLeft_3602_);
lean_inc(v_toSeq_3601_);
lean_inc(v_toFunctor_3600_);
lean_dec(v_toApplicative_3596_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3630_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
lean_object* v___f_3607_; lean_object* v___f_3608_; lean_object* v___f_3609_; lean_object* v___f_3610_; lean_object* v___x_3611_; lean_object* v___f_3612_; lean_object* v___f_3613_; lean_object* v___f_3614_; lean_object* v___x_3616_; 
v___f_3607_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4);
v___f_3608_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5);
lean_inc_ref(v_toFunctor_3600_);
v___f_3609_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3609_, 0, v_toFunctor_3600_);
v___f_3610_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3610_, 0, v_toFunctor_3600_);
v___x_3611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3611_, 0, v___f_3609_);
lean_ctor_set(v___x_3611_, 1, v___f_3610_);
v___f_3612_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3612_, 0, v_toSeqRight_3603_);
v___f_3613_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3613_, 0, v_toSeqLeft_3602_);
v___f_3614_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3614_, 0, v_toSeq_3601_);
if (v_isShared_3606_ == 0)
{
lean_ctor_set(v___x_3605_, 4, v___f_3612_);
lean_ctor_set(v___x_3605_, 3, v___f_3613_);
lean_ctor_set(v___x_3605_, 2, v___f_3614_);
lean_ctor_set(v___x_3605_, 1, v___f_3607_);
lean_ctor_set(v___x_3605_, 0, v___x_3611_);
v___x_3616_ = v___x_3605_;
goto v_reusejp_3615_;
}
else
{
lean_object* v_reuseFailAlloc_3629_; 
v_reuseFailAlloc_3629_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3629_, 0, v___x_3611_);
lean_ctor_set(v_reuseFailAlloc_3629_, 1, v___f_3607_);
lean_ctor_set(v_reuseFailAlloc_3629_, 2, v___f_3614_);
lean_ctor_set(v_reuseFailAlloc_3629_, 3, v___f_3613_);
lean_ctor_set(v_reuseFailAlloc_3629_, 4, v___f_3612_);
v___x_3616_ = v_reuseFailAlloc_3629_;
goto v_reusejp_3615_;
}
v_reusejp_3615_:
{
lean_object* v___x_3618_; 
if (v_isShared_3599_ == 0)
{
lean_ctor_set(v___x_3598_, 1, v___f_3608_);
lean_ctor_set(v___x_3598_, 0, v___x_3616_);
v___x_3618_ = v___x_3598_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3628_; 
v_reuseFailAlloc_3628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3628_, 0, v___x_3616_);
lean_ctor_set(v_reuseFailAlloc_3628_, 1, v___f_3608_);
v___x_3618_ = v_reuseFailAlloc_3628_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
lean_object* v___f_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; uint8_t v___x_3623_; lean_object* v___x_3624_; lean_object* v___f_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; 
v___f_3619_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0);
v___x_3620_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1);
v___x_3621_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3);
v___x_3622_ = lean_unsigned_to_nat(0u);
v___x_3623_ = 0;
v___x_3624_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4);
v___f_3625_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___boxed), 13, 7);
lean_closure_set(v___f_3625_, 0, v_probe_3578_);
lean_closure_set(v___f_3625_, 1, v___x_3624_);
lean_closure_set(v___f_3625_, 2, v___x_3620_);
lean_closure_set(v___f_3625_, 3, v___f_3619_);
lean_closure_set(v___f_3625_, 4, v_inst_3576_);
lean_closure_set(v___f_3625_, 5, v___x_3618_);
lean_closure_set(v___f_3625_, 6, v___x_3621_);
v___x_3626_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5);
v___x_3627_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_3627_, 0, v___x_3622_);
lean_ctor_set(v___x_3627_, 1, v___x_3626_);
lean_ctor_set(v___x_3627_, 2, v___f_3625_);
lean_ctor_set_uint8(v___x_3627_, sizeof(void*)*3, v_phase_3577_);
lean_ctor_set_uint8(v___x_3627_, sizeof(void*)*3 + 1, v_phase_3577_);
lean_ctor_set_uint8(v___x_3627_, sizeof(void*)*3 + 2, v___x_3623_);
return v___x_3627_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___boxed(lean_object* v_inst_3634_, lean_object* v_phase_3635_, lean_object* v_probe_3636_){
_start:
{
uint8_t v_phase_boxed_3637_; lean_object* v_res_3638_; 
v_phase_boxed_3637_ = lean_unbox(v_phase_3635_);
v_res_3638_ = l_Lean_Compiler_LCNF_Probe_toPass___redArg(v_inst_3634_, v_phase_boxed_3637_, v_probe_3636_);
return v_res_3638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass(lean_object* v_00_u03b2_3639_, lean_object* v_inst_3640_, uint8_t v_phase_3641_, lean_object* v_probe_3642_){
_start:
{
lean_object* v___x_3643_; 
v___x_3643_ = l_Lean_Compiler_LCNF_Probe_toPass___redArg(v_inst_3640_, v_phase_3641_, v_probe_3642_);
return v___x_3643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___boxed(lean_object* v_00_u03b2_3644_, lean_object* v_inst_3645_, lean_object* v_phase_3646_, lean_object* v_probe_3647_){
_start:
{
uint8_t v_phase_boxed_3648_; lean_object* v_res_3649_; 
v_phase_boxed_3648_ = lean_unbox(v_phase_3646_);
v_res_3649_ = l_Lean_Compiler_LCNF_Probe_toPass(v_00_u03b2_3644_, v_inst_3645_, v_phase_boxed_3648_, v_probe_3647_);
return v_res_3649_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; 
v___x_3650_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4);
v___x_3651_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0);
v___x_3652_ = l_Lean_Name_mkStr2(v___x_3651_, v___x_3650_);
return v___x_3652_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3653_; 
v___x_3653_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_3653_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; 
v___x_3654_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3655_ = lean_box(0);
v___x_3656_ = l_Lean_Name_str___override(v___x_3655_, v___x_3654_);
return v___x_3656_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3657_; 
v___x_3657_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_3657_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; 
v___x_3658_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3659_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3660_ = l_Lean_Name_str___override(v___x_3659_, v___x_3658_);
return v___x_3660_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
v___x_3661_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0);
v___x_3662_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3663_ = l_Lean_Name_str___override(v___x_3662_, v___x_3661_);
return v___x_3663_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3664_; 
v___x_3664_ = lean_mk_string_unchecked("LCNF", 4, 4);
return v___x_3664_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; 
v___x_3665_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3666_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3667_ = l_Lean_Name_str___override(v___x_3666_, v___x_3665_);
return v___x_3667_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3668_; 
v___x_3668_ = lean_mk_string_unchecked("Probing", 7, 7);
return v___x_3668_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; 
v___x_3669_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3670_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3671_ = l_Lean_Name_str___override(v___x_3670_, v___x_3669_);
return v___x_3671_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; 
v___x_3672_ = lean_unsigned_to_nat(0u);
v___x_3673_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3674_ = l_Lean_Name_num___override(v___x_3673_, v___x_3672_);
return v___x_3674_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; 
v___x_3675_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3676_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3677_ = l_Lean_Name_str___override(v___x_3676_, v___x_3675_);
return v___x_3677_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; 
v___x_3678_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0);
v___x_3679_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3680_ = l_Lean_Name_str___override(v___x_3679_, v___x_3678_);
return v___x_3680_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; 
v___x_3681_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3682_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3683_ = l_Lean_Name_str___override(v___x_3682_, v___x_3681_);
return v___x_3683_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3684_; 
v___x_3684_ = lean_mk_string_unchecked("Probe", 5, 5);
return v___x_3684_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; 
v___x_3685_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3686_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3687_ = l_Lean_Name_str___override(v___x_3686_, v___x_3685_);
return v___x_3687_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3688_; 
v___x_3688_ = lean_mk_string_unchecked("initFn", 6, 6);
return v___x_3688_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; 
v___x_3689_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3690_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3691_ = l_Lean_Name_str___override(v___x_3690_, v___x_3689_);
return v___x_3691_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3692_; 
v___x_3692_ = lean_mk_string_unchecked("_@", 2, 2);
return v___x_3692_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; 
v___x_3693_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3694_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3695_ = l_Lean_Name_str___override(v___x_3694_, v___x_3693_);
return v___x_3695_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; 
v___x_3696_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3697_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3698_ = l_Lean_Name_str___override(v___x_3697_, v___x_3696_);
return v___x_3698_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; 
v___x_3699_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0);
v___x_3700_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3701_ = l_Lean_Name_str___override(v___x_3700_, v___x_3699_);
return v___x_3701_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; 
v___x_3702_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3703_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3704_ = l_Lean_Name_str___override(v___x_3703_, v___x_3702_);
return v___x_3704_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; 
v___x_3705_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3706_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3707_ = l_Lean_Name_str___override(v___x_3706_, v___x_3705_);
return v___x_3707_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; 
v___x_3708_ = lean_unsigned_to_nat(3680319895u);
v___x_3709_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3710_ = l_Lean_Name_num___override(v___x_3709_, v___x_3708_);
return v___x_3710_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3711_; 
v___x_3711_ = lean_mk_string_unchecked("_hygCtx", 7, 7);
return v___x_3711_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; 
v___x_3712_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3713_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3714_ = l_Lean_Name_str___override(v___x_3713_, v___x_3712_);
return v___x_3714_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3715_; 
v___x_3715_ = lean_mk_string_unchecked("_hyg", 4, 4);
return v___x_3715_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; 
v___x_3716_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3717_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3718_ = l_Lean_Name_str___override(v___x_3717_, v___x_3716_);
return v___x_3718_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; 
v___x_3719_ = lean_unsigned_to_nat(2u);
v___x_3720_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3721_ = l_Lean_Name_num___override(v___x_3720_, v___x_3719_);
return v___x_3721_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3723_; uint8_t v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; 
v___x_3723_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3724_ = 1;
v___x_3725_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_);
v___x_3726_ = l_Lean_registerTraceClass(v___x_3723_, v___x_3724_, v___x_3725_);
return v___x_3726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2____boxed(lean_object* v_a_3727_){
_start:
{
lean_object* v_res_3728_; 
v_res_3728_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_();
return v_res_3728_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Probing(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_3680319895____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Probing(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Probing(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Probing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Probing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Probing(builtin);
}
#ifdef __cplusplus
}
#endif
