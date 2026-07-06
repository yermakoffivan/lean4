// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Prover.Basic
// Imports: public import Lean.Meta.Tactic.BVDecide.Reflect public import Lean.Meta.Tactic.BVDecide.Counterexample public import Lean.Meta.Tactic.BVDecide.LRAT.Cert import Lean.Meta.Sym.SymM import Lean.Meta.Sym.Util
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
double lean_float_of_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVPred_toString(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_Gate_toString(uint8_t);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_LemmaM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ShareCommon_shareCommon___redArg(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bv_decide"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__0_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 443, .m_capacity = 443, .m_length = 442, .m_data = "None of the hypotheses are in the supported BitVec fragment after applying preprocessing.\nThere are three potential reasons for this:\n1. If you are using custom BitVec constructs simplify them to built-in ones.\n2. If your problem is using only built-in ones it might currently be out of reach.\n   Consider expressing it in terms of different operations that are better supported.\n3. The original goal was reduced to False and is thus invalid."};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_reflectBV(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_reflectBV___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__8___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Reflecting goal into BVLogicalExpr"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__15___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12_spec__17(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12_spec__17___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__14(lean_object*);
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__14___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__13___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__0_value;
static const lean_string_object l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__1 = (const lean_object*)&l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__1_value;
static const lean_string_object l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "!"};
static const lean_object* l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__2 = (const lean_object*)&l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__2_value;
static const lean_string_object l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__3 = (const lean_object*)&l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__3_value;
static const lean_string_object l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__4 = (const lean_object*)&l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__4_value;
static const lean_string_object l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__5 = (const lean_object*)&l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__5_value;
static const lean_string_object l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "(if "};
static const lean_object* l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__6 = (const lean_object*)&l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5_spec__15_spec__19___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__20_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__20___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__21___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___redArg___closed__0_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__1;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__3_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Reflected bv logical expression: "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__5;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__2_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__20(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__21(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5_spec__15_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__20_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3___redArg___lam__0(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_){
_start:
{
lean_object* v___x_11_; 
lean_inc(v___y_5_);
lean_inc_ref(v___y_4_);
lean_inc(v___y_3_);
lean_inc_ref(v___y_2_);
v___x_11_ = lean_apply_9(v_x_1_, v___y_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, lean_box(0));
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3___redArg___lam__0___boxed(lean_object* v_x_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3___redArg___lam__0(v_x_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3___redArg(lean_object* v_mvarId_23_, lean_object* v_x_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v___f_34_; lean_object* v___x_35_; 
lean_inc(v___y_28_);
lean_inc_ref(v___y_27_);
lean_inc(v___y_26_);
lean_inc_ref(v___y_25_);
v___f_34_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_34_, 0, v_x_24_);
lean_closure_set(v___f_34_, 1, v___y_25_);
lean_closure_set(v___f_34_, 2, v___y_26_);
lean_closure_set(v___f_34_, 3, v___y_27_);
lean_closure_set(v___f_34_, 4, v___y_28_);
v___x_35_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_23_, v___f_34_, v___y_29_, v___y_30_, v___y_31_, v___y_32_);
if (lean_obj_tag(v___x_35_) == 0)
{
return v___x_35_;
}
else
{
lean_object* v_a_36_; lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_43_; 
v_a_36_ = lean_ctor_get(v___x_35_, 0);
v_isSharedCheck_43_ = !lean_is_exclusive(v___x_35_);
if (v_isSharedCheck_43_ == 0)
{
v___x_38_ = v___x_35_;
v_isShared_39_ = v_isSharedCheck_43_;
goto v_resetjp_37_;
}
else
{
lean_inc(v_a_36_);
lean_dec(v___x_35_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_43_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
lean_object* v___x_41_; 
if (v_isShared_39_ == 0)
{
v___x_41_ = v___x_38_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v_a_36_);
v___x_41_ = v_reuseFailAlloc_42_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
return v___x_41_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3___redArg___boxed(lean_object* v_mvarId_44_, lean_object* v_x_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3___redArg(v_mvarId_44_, v_x_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
lean_dec(v___y_49_);
lean_dec_ref(v___y_48_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3(lean_object* v_00_u03b1_56_, lean_object* v_mvarId_57_, lean_object* v_x_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3___redArg(v_mvarId_57_, v_x_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3___boxed(lean_object* v_00_u03b1_69_, lean_object* v_mvarId_70_, lean_object* v_x_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3(v_00_u03b1_69_, v_mvarId_70_, v_x_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
lean_dec(v___y_75_);
lean_dec_ref(v___y_74_);
lean_dec(v___y_73_);
lean_dec_ref(v___y_72_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__1___redArg(lean_object* v_a_82_, lean_object* v_b_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_array_86_; lean_object* v_start_87_; lean_object* v_stop_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_103_; 
v_array_86_ = lean_ctor_get(v_a_82_, 0);
v_start_87_ = lean_ctor_get(v_a_82_, 1);
v_stop_88_ = lean_ctor_get(v_a_82_, 2);
v_isSharedCheck_103_ = !lean_is_exclusive(v_a_82_);
if (v_isSharedCheck_103_ == 0)
{
v___x_90_ = v_a_82_;
v_isShared_91_ = v_isSharedCheck_103_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_stop_88_);
lean_inc(v_start_87_);
lean_inc(v_array_86_);
lean_dec(v_a_82_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_103_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
uint8_t v___x_92_; 
v___x_92_ = lean_nat_dec_lt(v_start_87_, v_stop_88_);
if (v___x_92_ == 0)
{
lean_object* v___x_93_; 
lean_del_object(v___x_90_);
lean_dec(v_stop_88_);
lean_dec(v_start_87_);
lean_dec_ref(v_array_86_);
v___x_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_93_, 0, v_b_83_);
return v___x_93_;
}
else
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lean_array_fget_borrowed(v_array_86_, v_start_87_);
lean_inc(v___x_94_);
v___x_95_ = l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_and___redArg(v_b_83_, v___x_94_, v___y_84_);
if (lean_obj_tag(v___x_95_) == 0)
{
lean_object* v_a_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_100_; 
v_a_96_ = lean_ctor_get(v___x_95_, 0);
lean_inc(v_a_96_);
lean_dec_ref_known(v___x_95_, 1);
v___x_97_ = lean_unsigned_to_nat(1u);
v___x_98_ = lean_nat_add(v_start_87_, v___x_97_);
lean_dec(v_start_87_);
if (v_isShared_91_ == 0)
{
lean_ctor_set(v___x_90_, 1, v___x_98_);
v___x_100_ = v___x_90_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_array_86_);
lean_ctor_set(v_reuseFailAlloc_102_, 1, v___x_98_);
lean_ctor_set(v_reuseFailAlloc_102_, 2, v_stop_88_);
v___x_100_ = v_reuseFailAlloc_102_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
v_a_82_ = v___x_100_;
v_b_83_ = v_a_96_;
goto _start;
}
}
else
{
lean_del_object(v___x_90_);
lean_dec(v_stop_88_);
lean_dec(v_start_87_);
lean_dec_ref(v_array_86_);
return v___x_95_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__1___redArg___boxed(lean_object* v_a_104_, lean_object* v_b_105_, lean_object* v___y_106_, lean_object* v___y_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__1___redArg(v_a_104_, v_b_105_, v___y_106_);
lean_dec(v___y_106_);
return v_res_108_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__2(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_112_ = lean_box(0);
v___x_113_ = lean_unsigned_to_nat(16u);
v___x_114_ = lean_mk_array(v___x_113_, v___x_112_);
return v___x_114_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__3(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__2);
v___x_116_ = lean_unsigned_to_nat(0u);
v___x_117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v___x_115_);
return v___x_117_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__4(void){
_start:
{
lean_object* v___x_118_; lean_object* v_sats_119_; lean_object* v___x_120_; 
v___x_118_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__3);
v_sats_119_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__1));
v___x_120_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_120_, 0, v_sats_119_);
lean_ctor_set(v___x_120_, 1, v___x_118_);
lean_ctor_set(v___x_120_, 2, v___x_118_);
lean_ctor_set(v___x_120_, 3, v___x_118_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0(lean_object* v_as_121_, size_t v_sz_122_, size_t v_i_123_, lean_object* v_b_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_){
_start:
{
lean_object* v_a_135_; uint8_t v___x_139_; 
v___x_139_ = lean_usize_dec_lt(v_i_123_, v_sz_122_);
if (v___x_139_ == 0)
{
lean_object* v___x_140_; 
v___x_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_140_, 0, v_b_124_);
return v___x_140_;
}
else
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__0));
v___x_142_ = l_Lean_Core_checkSystem(v___x_141_, v___y_131_, v___y_132_);
if (lean_obj_tag(v___x_142_) == 0)
{
lean_object* v_a_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
lean_dec_ref_known(v___x_142_, 1);
v_a_143_ = lean_array_uget_borrowed(v_as_121_, v_i_123_);
lean_inc(v_a_143_);
v___x_144_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_of___boxed), 11, 1);
lean_closure_set(v___x_144_, 0, v_a_143_);
v___x_145_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__4);
v___x_146_ = l_Lean_Meta_Tactic_BVDecide_LemmaM_run___redArg(v___x_144_, v___x_145_, v___y_125_, v___y_126_, v___y_127_, v___y_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_);
if (lean_obj_tag(v___x_146_) == 0)
{
lean_object* v_a_147_; lean_object* v_fst_148_; 
v_a_147_ = lean_ctor_get(v___x_146_, 0);
lean_inc(v_a_147_);
lean_dec_ref_known(v___x_146_, 1);
v_fst_148_ = lean_ctor_get(v_a_147_, 0);
lean_inc(v_fst_148_);
if (lean_obj_tag(v_fst_148_) == 1)
{
lean_object* v_snd_149_; lean_object* v_val_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v_snd_149_ = lean_ctor_get(v_a_147_, 1);
lean_inc(v_snd_149_);
lean_dec(v_a_147_);
v_val_150_ = lean_ctor_get(v_fst_148_, 0);
lean_inc(v_val_150_);
lean_dec_ref_known(v_fst_148_, 1);
v___x_151_ = l_Array_append___redArg(v_b_124_, v_snd_149_);
lean_dec(v_snd_149_);
v___x_152_ = lean_array_push(v___x_151_, v_val_150_);
v_a_135_ = v___x_152_;
goto v___jp_134_;
}
else
{
lean_dec(v_fst_148_);
lean_dec(v_a_147_);
v_a_135_ = v_b_124_;
goto v___jp_134_;
}
}
else
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_160_; 
lean_dec_ref(v_b_124_);
v_a_153_ = lean_ctor_get(v___x_146_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_146_);
if (v_isSharedCheck_160_ == 0)
{
v___x_155_ = v___x_146_;
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v___x_146_);
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
else
{
lean_object* v_a_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_168_; 
lean_dec_ref(v_b_124_);
v_a_161_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_168_ == 0)
{
v___x_163_ = v___x_142_;
v_isShared_164_ = v_isSharedCheck_168_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_a_161_);
lean_dec(v___x_142_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_168_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v___x_166_; 
if (v_isShared_164_ == 0)
{
v___x_166_ = v___x_163_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v_a_161_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
}
}
v___jp_134_:
{
size_t v___x_136_; size_t v___x_137_; 
v___x_136_ = ((size_t)1ULL);
v___x_137_ = lean_usize_add(v_i_123_, v___x_136_);
v_i_123_ = v___x_137_;
v_b_124_ = v_a_135_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___boxed(lean_object* v_as_169_, lean_object* v_sz_170_, lean_object* v_i_171_, lean_object* v_b_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_){
_start:
{
size_t v_sz_boxed_182_; size_t v_i_boxed_183_; lean_object* v_res_184_; 
v_sz_boxed_182_ = lean_unbox_usize(v_sz_170_);
lean_dec(v_sz_170_);
v_i_boxed_183_ = lean_unbox_usize(v_i_171_);
lean_dec(v_i_171_);
v_res_184_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0(v_as_169_, v_sz_boxed_182_, v_i_boxed_183_, v_b_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_, v___y_180_);
lean_dec(v___y_180_);
lean_dec_ref(v___y_179_);
lean_dec(v___y_178_);
lean_dec_ref(v___y_177_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
lean_dec_ref(v_as_169_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2_spec__2(lean_object* v_msgData_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_){
_start:
{
lean_object* v___x_191_; lean_object* v_env_192_; lean_object* v___x_193_; lean_object* v_mctx_194_; lean_object* v_lctx_195_; lean_object* v_options_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_191_ = lean_st_ref_get(v___y_189_);
v_env_192_ = lean_ctor_get(v___x_191_, 0);
lean_inc_ref(v_env_192_);
lean_dec(v___x_191_);
v___x_193_ = lean_st_ref_get(v___y_187_);
v_mctx_194_ = lean_ctor_get(v___x_193_, 0);
lean_inc_ref(v_mctx_194_);
lean_dec(v___x_193_);
v_lctx_195_ = lean_ctor_get(v___y_186_, 2);
v_options_196_ = lean_ctor_get(v___y_188_, 2);
lean_inc_ref(v_options_196_);
lean_inc_ref(v_lctx_195_);
v___x_197_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_197_, 0, v_env_192_);
lean_ctor_set(v___x_197_, 1, v_mctx_194_);
lean_ctor_set(v___x_197_, 2, v_lctx_195_);
lean_ctor_set(v___x_197_, 3, v_options_196_);
v___x_198_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
lean_ctor_set(v___x_198_, 1, v_msgData_185_);
v___x_199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_199_, 0, v___x_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2_spec__2___boxed(lean_object* v_msgData_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2_spec__2(v_msgData_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
lean_dec(v___y_202_);
lean_dec_ref(v___y_201_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2___redArg(lean_object* v_msg_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_){
_start:
{
lean_object* v_ref_213_; lean_object* v___x_214_; lean_object* v_a_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_223_; 
v_ref_213_ = lean_ctor_get(v___y_210_, 5);
v___x_214_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2_spec__2(v_msg_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_);
v_a_215_ = lean_ctor_get(v___x_214_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_214_);
if (v_isSharedCheck_223_ == 0)
{
v___x_217_ = v___x_214_;
v_isShared_218_ = v_isSharedCheck_223_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_a_215_);
lean_dec(v___x_214_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_223_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_219_; lean_object* v___x_221_; 
lean_inc(v_ref_213_);
v___x_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_219_, 0, v_ref_213_);
lean_ctor_set(v___x_219_, 1, v_a_215_);
if (v_isShared_218_ == 0)
{
lean_ctor_set_tag(v___x_217_, 1);
lean_ctor_set(v___x_217_, 0, v___x_219_);
v___x_221_ = v___x_217_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v___x_219_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2___redArg___boxed(lean_object* v_msg_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2___redArg(v_msg_224_, v___y_225_, v___y_226_, v___y_227_, v___y_228_);
lean_dec(v___y_228_);
lean_dec_ref(v___y_227_);
lean_dec(v___y_226_);
lean_dec_ref(v___y_225_);
return v_res_230_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0___closed__2(void){
_start:
{
lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_234_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0___closed__1));
v___x_235_ = l_Lean_MessageData_ofFormat(v___x_234_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0(lean_object* v_sats_236_, lean_object* v___x_237_, lean_object* v_unusedHypotheses_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
size_t v_sz_248_; size_t v___x_249_; lean_object* v___x_250_; 
v_sz_248_ = lean_array_size(v___y_239_);
v___x_249_ = ((size_t)0ULL);
v___x_250_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0(v___y_239_, v_sz_248_, v___x_249_, v_sats_236_, v___y_239_, v___y_240_, v___y_241_, v___y_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_);
if (lean_obj_tag(v___x_250_) == 0)
{
lean_object* v_a_251_; lean_object* v___x_252_; uint8_t v___x_253_; 
v_a_251_ = lean_ctor_get(v___x_250_, 0);
lean_inc(v_a_251_);
lean_dec_ref_known(v___x_250_, 1);
v___x_252_ = lean_array_get_size(v_a_251_);
v___x_253_ = lean_nat_dec_eq(v___x_252_, v___x_237_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_254_ = lean_array_fget(v_a_251_, v___x_237_);
v___x_255_ = lean_unsigned_to_nat(1u);
v___x_256_ = l_Array_toSubarray___redArg(v_a_251_, v___x_255_, v___x_252_);
v___x_257_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__1___redArg(v___x_256_, v___x_254_, v___y_242_);
if (lean_obj_tag(v___x_257_) == 0)
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_270_; 
v_a_258_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_270_ == 0)
{
v___x_260_ = v___x_257_;
v_isShared_261_ = v_isSharedCheck_270_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_257_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_270_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v_bvExpr_262_; lean_object* v_expr_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_268_; 
v_bvExpr_262_ = lean_ctor_get(v_a_258_, 0);
v_expr_263_ = lean_ctor_get(v_a_258_, 2);
lean_inc_ref(v_expr_263_);
lean_inc_ref(v_bvExpr_262_);
v___x_264_ = l_Lean_ShareCommon_shareCommon___redArg(v_bvExpr_262_);
v___x_265_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse___boxed), 11, 1);
lean_closure_set(v___x_265_, 0, v_a_258_);
v___x_266_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_266_, 0, v___x_264_);
lean_ctor_set(v___x_266_, 1, v___x_265_);
lean_ctor_set(v___x_266_, 2, v_unusedHypotheses_238_);
lean_ctor_set(v___x_266_, 3, v_expr_263_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 0, v___x_266_);
v___x_268_ = v___x_260_;
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
else
{
lean_object* v_a_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_278_; 
lean_dec_ref(v_unusedHypotheses_238_);
v_a_271_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_278_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_278_ == 0)
{
v___x_273_ = v___x_257_;
v_isShared_274_ = v_isSharedCheck_278_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_a_271_);
lean_dec(v___x_257_);
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
else
{
lean_object* v___x_279_; lean_object* v___x_280_; 
lean_dec(v_a_251_);
lean_dec_ref(v_unusedHypotheses_238_);
v___x_279_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0___closed__2, &l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0___closed__2);
v___x_280_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2___redArg(v___x_279_, v___y_243_, v___y_244_, v___y_245_, v___y_246_);
return v___x_280_;
}
}
else
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
lean_dec_ref(v_unusedHypotheses_238_);
v_a_281_ = lean_ctor_get(v___x_250_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_250_);
if (v_isSharedCheck_288_ == 0)
{
v___x_283_ = v___x_250_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_250_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0___boxed(lean_object* v_sats_289_, lean_object* v___x_290_, lean_object* v_unusedHypotheses_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0(v_sats_289_, v___x_290_, v_unusedHypotheses_291_, v___y_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_, v___y_299_);
lean_dec(v___y_299_);
lean_dec_ref(v___y_298_);
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_294_);
lean_dec(v___y_293_);
lean_dec_ref(v___y_292_);
lean_dec(v___x_290_);
return v_res_301_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__0(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_302_ = lean_box(0);
v___x_303_ = lean_unsigned_to_nat(16u);
v___x_304_ = lean_mk_array(v___x_303_, v___x_302_);
return v___x_304_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__1(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v_unusedHypotheses_307_; 
v___x_305_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__0, &l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__0);
v___x_306_ = lean_unsigned_to_nat(0u);
v_unusedHypotheses_307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_unusedHypotheses_307_, 0, v___x_306_);
lean_ctor_set(v_unusedHypotheses_307_, 1, v___x_305_);
return v_unusedHypotheses_307_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__2(void){
_start:
{
lean_object* v_unusedHypotheses_308_; lean_object* v___x_309_; lean_object* v_sats_310_; lean_object* v___f_311_; 
v_unusedHypotheses_308_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__1, &l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__1);
v___x_309_ = lean_unsigned_to_nat(0u);
v_sats_310_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__0___closed__1));
v___f_311_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_reflectBV___lam__0___boxed), 12, 3);
lean_closure_set(v___f_311_, 0, v_sats_310_);
lean_closure_set(v___f_311_, 1, v___x_309_);
lean_closure_set(v___f_311_, 2, v_unusedHypotheses_308_);
return v___f_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_reflectBV(lean_object* v_g_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_){
_start:
{
lean_object* v___f_322_; lean_object* v___x_323_; 
v___f_322_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__2, &l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_reflectBV___closed__2);
v___x_323_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3___redArg(v_g_312_, v___f_322_, v_a_313_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_, v_a_320_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_reflectBV___boxed(lean_object* v_g_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Lean_Meta_Tactic_BVDecide_reflectBV(v_g_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_);
lean_dec(v_a_332_);
lean_dec_ref(v_a_331_);
lean_dec(v_a_330_);
lean_dec_ref(v_a_329_);
lean_dec(v_a_328_);
lean_dec_ref(v_a_327_);
lean_dec(v_a_326_);
lean_dec_ref(v_a_325_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__1(lean_object* v_inst_335_, lean_object* v_R_336_, lean_object* v_a_337_, lean_object* v_b_338_, lean_object* v_c_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__1___redArg(v_a_337_, v_b_338_, v___y_343_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__1___boxed(lean_object* v_inst_350_, lean_object* v_R_351_, lean_object* v_a_352_, lean_object* v_b_353_, lean_object* v_c_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__1(v_inst_350_, v_R_351_, v_a_352_, v_b_353_, v_c_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_);
lean_dec(v___y_362_);
lean_dec_ref(v___y_361_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2(lean_object* v_00_u03b1_365_, lean_object* v_msg_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2___redArg(v_msg_366_, v___y_371_, v___y_372_, v___y_373_, v___y_374_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2___boxed(lean_object* v_00_u03b1_377_, lean_object* v_msg_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2(v_00_u03b1_377_, v_msg_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
lean_dec(v___y_380_);
lean_dec_ref(v___y_379_);
return v_res_388_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_389_ = lean_unsigned_to_nat(32u);
v___x_390_ = lean_mk_empty_array_with_capacity(v___x_389_);
v___x_391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
return v___x_391_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg___closed__1(void){
_start:
{
size_t v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_392_ = ((size_t)5ULL);
v___x_393_ = lean_unsigned_to_nat(0u);
v___x_394_ = lean_unsigned_to_nat(32u);
v___x_395_ = lean_mk_empty_array_with_capacity(v___x_394_);
v___x_396_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg___closed__0);
v___x_397_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_397_, 0, v___x_396_);
lean_ctor_set(v___x_397_, 1, v___x_395_);
lean_ctor_set(v___x_397_, 2, v___x_393_);
lean_ctor_set(v___x_397_, 3, v___x_393_);
lean_ctor_set_usize(v___x_397_, 4, v___x_392_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg(lean_object* v___y_398_){
_start:
{
lean_object* v___x_400_; lean_object* v_traceState_401_; lean_object* v_traces_402_; lean_object* v___x_403_; lean_object* v_traceState_404_; lean_object* v_env_405_; lean_object* v_nextMacroScope_406_; lean_object* v_ngen_407_; lean_object* v_auxDeclNGen_408_; lean_object* v_cache_409_; lean_object* v_messages_410_; lean_object* v_infoState_411_; lean_object* v_snapshotTasks_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_431_; 
v___x_400_ = lean_st_ref_get(v___y_398_);
v_traceState_401_ = lean_ctor_get(v___x_400_, 4);
lean_inc_ref(v_traceState_401_);
lean_dec(v___x_400_);
v_traces_402_ = lean_ctor_get(v_traceState_401_, 0);
lean_inc_ref(v_traces_402_);
lean_dec_ref(v_traceState_401_);
v___x_403_ = lean_st_ref_take(v___y_398_);
v_traceState_404_ = lean_ctor_get(v___x_403_, 4);
v_env_405_ = lean_ctor_get(v___x_403_, 0);
v_nextMacroScope_406_ = lean_ctor_get(v___x_403_, 1);
v_ngen_407_ = lean_ctor_get(v___x_403_, 2);
v_auxDeclNGen_408_ = lean_ctor_get(v___x_403_, 3);
v_cache_409_ = lean_ctor_get(v___x_403_, 5);
v_messages_410_ = lean_ctor_get(v___x_403_, 6);
v_infoState_411_ = lean_ctor_get(v___x_403_, 7);
v_snapshotTasks_412_ = lean_ctor_get(v___x_403_, 8);
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_431_ == 0)
{
v___x_414_ = v___x_403_;
v_isShared_415_ = v_isSharedCheck_431_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_snapshotTasks_412_);
lean_inc(v_infoState_411_);
lean_inc(v_messages_410_);
lean_inc(v_cache_409_);
lean_inc(v_traceState_404_);
lean_inc(v_auxDeclNGen_408_);
lean_inc(v_ngen_407_);
lean_inc(v_nextMacroScope_406_);
lean_inc(v_env_405_);
lean_dec(v___x_403_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_431_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
uint64_t v_tid_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_429_; 
v_tid_416_ = lean_ctor_get_uint64(v_traceState_404_, sizeof(void*)*1);
v_isSharedCheck_429_ = !lean_is_exclusive(v_traceState_404_);
if (v_isSharedCheck_429_ == 0)
{
lean_object* v_unused_430_; 
v_unused_430_ = lean_ctor_get(v_traceState_404_, 0);
lean_dec(v_unused_430_);
v___x_418_ = v_traceState_404_;
v_isShared_419_ = v_isSharedCheck_429_;
goto v_resetjp_417_;
}
else
{
lean_dec(v_traceState_404_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_429_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_420_; lean_object* v___x_422_; 
v___x_420_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg___closed__1);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v___x_420_);
v___x_422_ = v___x_418_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v___x_420_);
lean_ctor_set_uint64(v_reuseFailAlloc_428_, sizeof(void*)*1, v_tid_416_);
v___x_422_ = v_reuseFailAlloc_428_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
lean_object* v___x_424_; 
if (v_isShared_415_ == 0)
{
lean_ctor_set(v___x_414_, 4, v___x_422_);
v___x_424_ = v___x_414_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_env_405_);
lean_ctor_set(v_reuseFailAlloc_427_, 1, v_nextMacroScope_406_);
lean_ctor_set(v_reuseFailAlloc_427_, 2, v_ngen_407_);
lean_ctor_set(v_reuseFailAlloc_427_, 3, v_auxDeclNGen_408_);
lean_ctor_set(v_reuseFailAlloc_427_, 4, v___x_422_);
lean_ctor_set(v_reuseFailAlloc_427_, 5, v_cache_409_);
lean_ctor_set(v_reuseFailAlloc_427_, 6, v_messages_410_);
lean_ctor_set(v_reuseFailAlloc_427_, 7, v_infoState_411_);
lean_ctor_set(v_reuseFailAlloc_427_, 8, v_snapshotTasks_412_);
v___x_424_ = v_reuseFailAlloc_427_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = lean_st_ref_set(v___y_398_, v___x_424_);
v___x_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_426_, 0, v_traces_402_);
return v___x_426_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg___boxed(lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg(v___y_432_);
lean_dec(v___y_432_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7(lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg(v___y_442_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___boxed(lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7(v___y_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_);
lean_dec(v___y_452_);
lean_dec_ref(v___y_451_);
lean_dec(v___y_450_);
lean_dec_ref(v___y_449_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
return v_res_454_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__8(lean_object* v_opts_455_, lean_object* v_opt_456_){
_start:
{
lean_object* v_name_457_; lean_object* v_defValue_458_; lean_object* v_map_459_; lean_object* v___x_460_; 
v_name_457_ = lean_ctor_get(v_opt_456_, 0);
v_defValue_458_ = lean_ctor_get(v_opt_456_, 1);
v_map_459_ = lean_ctor_get(v_opts_455_, 0);
v___x_460_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_459_, v_name_457_);
if (lean_obj_tag(v___x_460_) == 0)
{
uint8_t v___x_461_; 
v___x_461_ = lean_unbox(v_defValue_458_);
return v___x_461_;
}
else
{
lean_object* v_val_462_; 
v_val_462_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_val_462_);
lean_dec_ref_known(v___x_460_, 1);
if (lean_obj_tag(v_val_462_) == 1)
{
uint8_t v_v_463_; 
v_v_463_ = lean_ctor_get_uint8(v_val_462_, 0);
lean_dec_ref_known(v_val_462_, 0);
return v_v_463_;
}
else
{
uint8_t v___x_464_; 
lean_dec(v_val_462_);
v___x_464_ = lean_unbox(v_defValue_458_);
return v___x_464_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__8___boxed(lean_object* v_opts_465_, lean_object* v_opt_466_){
_start:
{
uint8_t v_res_467_; lean_object* v_r_468_; 
v_res_467_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__8(v_opts_465_, v_opt_466_);
lean_dec_ref(v_opt_466_);
lean_dec_ref(v_opts_465_);
v_r_468_ = lean_box(v_res_467_);
return v_r_468_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_472_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0___closed__1));
v___x_473_ = l_Lean_MessageData_ofFormat(v___x_472_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0(lean_object* v_x_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0___closed__2, &l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0___closed__2);
v___x_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_485_, 0, v___x_484_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0___boxed(lean_object* v_x_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__0(v_x_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_);
lean_dec(v___y_494_);
lean_dec_ref(v___y_493_);
lean_dec(v___y_492_);
lean_dec_ref(v___y_491_);
lean_dec(v___y_490_);
lean_dec_ref(v___y_489_);
lean_dec(v___y_488_);
lean_dec_ref(v___y_487_);
lean_dec_ref(v_x_486_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__15(lean_object* v_opts_497_, lean_object* v_opt_498_){
_start:
{
lean_object* v_name_499_; lean_object* v_defValue_500_; lean_object* v_map_501_; lean_object* v___x_502_; 
v_name_499_ = lean_ctor_get(v_opt_498_, 0);
v_defValue_500_ = lean_ctor_get(v_opt_498_, 1);
v_map_501_ = lean_ctor_get(v_opts_497_, 0);
v___x_502_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_501_, v_name_499_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_inc(v_defValue_500_);
return v_defValue_500_;
}
else
{
lean_object* v_val_503_; 
v_val_503_ = lean_ctor_get(v___x_502_, 0);
lean_inc(v_val_503_);
lean_dec_ref_known(v___x_502_, 1);
if (lean_obj_tag(v_val_503_) == 3)
{
lean_object* v_v_504_; 
v_v_504_ = lean_ctor_get(v_val_503_, 0);
lean_inc(v_v_504_);
lean_dec_ref_known(v_val_503_, 1);
return v_v_504_;
}
else
{
lean_dec(v_val_503_);
lean_inc(v_defValue_500_);
return v_defValue_500_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__15___boxed(lean_object* v_opts_505_, lean_object* v_opt_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__15(v_opts_505_, v_opt_506_);
lean_dec_ref(v_opt_506_);
lean_dec_ref(v_opts_505_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12_spec__17(size_t v_sz_508_, size_t v_i_509_, lean_object* v_bs_510_){
_start:
{
uint8_t v___x_511_; 
v___x_511_ = lean_usize_dec_lt(v_i_509_, v_sz_508_);
if (v___x_511_ == 0)
{
return v_bs_510_;
}
else
{
lean_object* v_v_512_; lean_object* v_msg_513_; lean_object* v___x_514_; lean_object* v_bs_x27_515_; size_t v___x_516_; size_t v___x_517_; lean_object* v___x_518_; 
v_v_512_ = lean_array_uget_borrowed(v_bs_510_, v_i_509_);
v_msg_513_ = lean_ctor_get(v_v_512_, 1);
lean_inc_ref(v_msg_513_);
v___x_514_ = lean_unsigned_to_nat(0u);
v_bs_x27_515_ = lean_array_uset(v_bs_510_, v_i_509_, v___x_514_);
v___x_516_ = ((size_t)1ULL);
v___x_517_ = lean_usize_add(v_i_509_, v___x_516_);
v___x_518_ = lean_array_uset(v_bs_x27_515_, v_i_509_, v_msg_513_);
v_i_509_ = v___x_517_;
v_bs_510_ = v___x_518_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12_spec__17___boxed(lean_object* v_sz_520_, lean_object* v_i_521_, lean_object* v_bs_522_){
_start:
{
size_t v_sz_boxed_523_; size_t v_i_boxed_524_; lean_object* v_res_525_; 
v_sz_boxed_523_ = lean_unbox_usize(v_sz_520_);
lean_dec(v_sz_520_);
v_i_boxed_524_ = lean_unbox_usize(v_i_521_);
lean_dec(v_i_521_);
v_res_525_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12_spec__17(v_sz_boxed_523_, v_i_boxed_524_, v_bs_522_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12___redArg(lean_object* v_oldTraces_526_, lean_object* v_data_527_, lean_object* v_ref_528_, lean_object* v_msg_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_){
_start:
{
lean_object* v_fileName_535_; lean_object* v_fileMap_536_; lean_object* v_options_537_; lean_object* v_currRecDepth_538_; lean_object* v_maxRecDepth_539_; lean_object* v_ref_540_; lean_object* v_currNamespace_541_; lean_object* v_openDecls_542_; lean_object* v_initHeartbeats_543_; lean_object* v_maxHeartbeats_544_; lean_object* v_quotContext_545_; lean_object* v_currMacroScope_546_; uint8_t v_diag_547_; lean_object* v_cancelTk_x3f_548_; uint8_t v_suppressElabErrors_549_; lean_object* v_inheritedTraceOptions_550_; lean_object* v___x_551_; lean_object* v_traceState_552_; lean_object* v_traces_553_; lean_object* v_ref_554_; lean_object* v___x_555_; lean_object* v___x_556_; size_t v_sz_557_; size_t v___x_558_; lean_object* v___x_559_; lean_object* v_msg_560_; lean_object* v___x_561_; lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_599_; 
v_fileName_535_ = lean_ctor_get(v___y_532_, 0);
v_fileMap_536_ = lean_ctor_get(v___y_532_, 1);
v_options_537_ = lean_ctor_get(v___y_532_, 2);
v_currRecDepth_538_ = lean_ctor_get(v___y_532_, 3);
v_maxRecDepth_539_ = lean_ctor_get(v___y_532_, 4);
v_ref_540_ = lean_ctor_get(v___y_532_, 5);
v_currNamespace_541_ = lean_ctor_get(v___y_532_, 6);
v_openDecls_542_ = lean_ctor_get(v___y_532_, 7);
v_initHeartbeats_543_ = lean_ctor_get(v___y_532_, 8);
v_maxHeartbeats_544_ = lean_ctor_get(v___y_532_, 9);
v_quotContext_545_ = lean_ctor_get(v___y_532_, 10);
v_currMacroScope_546_ = lean_ctor_get(v___y_532_, 11);
v_diag_547_ = lean_ctor_get_uint8(v___y_532_, sizeof(void*)*14);
v_cancelTk_x3f_548_ = lean_ctor_get(v___y_532_, 12);
v_suppressElabErrors_549_ = lean_ctor_get_uint8(v___y_532_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_550_ = lean_ctor_get(v___y_532_, 13);
v___x_551_ = lean_st_ref_get(v___y_533_);
v_traceState_552_ = lean_ctor_get(v___x_551_, 4);
lean_inc_ref(v_traceState_552_);
lean_dec(v___x_551_);
v_traces_553_ = lean_ctor_get(v_traceState_552_, 0);
lean_inc_ref(v_traces_553_);
lean_dec_ref(v_traceState_552_);
v_ref_554_ = l_Lean_replaceRef(v_ref_528_, v_ref_540_);
lean_inc_ref(v_inheritedTraceOptions_550_);
lean_inc(v_cancelTk_x3f_548_);
lean_inc(v_currMacroScope_546_);
lean_inc(v_quotContext_545_);
lean_inc(v_maxHeartbeats_544_);
lean_inc(v_initHeartbeats_543_);
lean_inc(v_openDecls_542_);
lean_inc(v_currNamespace_541_);
lean_inc(v_maxRecDepth_539_);
lean_inc(v_currRecDepth_538_);
lean_inc_ref(v_options_537_);
lean_inc_ref(v_fileMap_536_);
lean_inc_ref(v_fileName_535_);
v___x_555_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_555_, 0, v_fileName_535_);
lean_ctor_set(v___x_555_, 1, v_fileMap_536_);
lean_ctor_set(v___x_555_, 2, v_options_537_);
lean_ctor_set(v___x_555_, 3, v_currRecDepth_538_);
lean_ctor_set(v___x_555_, 4, v_maxRecDepth_539_);
lean_ctor_set(v___x_555_, 5, v_ref_554_);
lean_ctor_set(v___x_555_, 6, v_currNamespace_541_);
lean_ctor_set(v___x_555_, 7, v_openDecls_542_);
lean_ctor_set(v___x_555_, 8, v_initHeartbeats_543_);
lean_ctor_set(v___x_555_, 9, v_maxHeartbeats_544_);
lean_ctor_set(v___x_555_, 10, v_quotContext_545_);
lean_ctor_set(v___x_555_, 11, v_currMacroScope_546_);
lean_ctor_set(v___x_555_, 12, v_cancelTk_x3f_548_);
lean_ctor_set(v___x_555_, 13, v_inheritedTraceOptions_550_);
lean_ctor_set_uint8(v___x_555_, sizeof(void*)*14, v_diag_547_);
lean_ctor_set_uint8(v___x_555_, sizeof(void*)*14 + 1, v_suppressElabErrors_549_);
v___x_556_ = l_Lean_PersistentArray_toArray___redArg(v_traces_553_);
lean_dec_ref(v_traces_553_);
v_sz_557_ = lean_array_size(v___x_556_);
v___x_558_ = ((size_t)0ULL);
v___x_559_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12_spec__17(v_sz_557_, v___x_558_, v___x_556_);
v_msg_560_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_560_, 0, v_data_527_);
lean_ctor_set(v_msg_560_, 1, v_msg_529_);
lean_ctor_set(v_msg_560_, 2, v___x_559_);
v___x_561_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2_spec__2(v_msg_560_, v___y_530_, v___y_531_, v___x_555_, v___y_533_);
lean_dec_ref_known(v___x_555_, 14);
v_a_562_ = lean_ctor_get(v___x_561_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_599_ == 0)
{
v___x_564_ = v___x_561_;
v_isShared_565_ = v_isSharedCheck_599_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_561_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_599_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_566_; lean_object* v_traceState_567_; lean_object* v_env_568_; lean_object* v_nextMacroScope_569_; lean_object* v_ngen_570_; lean_object* v_auxDeclNGen_571_; lean_object* v_cache_572_; lean_object* v_messages_573_; lean_object* v_infoState_574_; lean_object* v_snapshotTasks_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_598_; 
v___x_566_ = lean_st_ref_take(v___y_533_);
v_traceState_567_ = lean_ctor_get(v___x_566_, 4);
v_env_568_ = lean_ctor_get(v___x_566_, 0);
v_nextMacroScope_569_ = lean_ctor_get(v___x_566_, 1);
v_ngen_570_ = lean_ctor_get(v___x_566_, 2);
v_auxDeclNGen_571_ = lean_ctor_get(v___x_566_, 3);
v_cache_572_ = lean_ctor_get(v___x_566_, 5);
v_messages_573_ = lean_ctor_get(v___x_566_, 6);
v_infoState_574_ = lean_ctor_get(v___x_566_, 7);
v_snapshotTasks_575_ = lean_ctor_get(v___x_566_, 8);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_566_);
if (v_isSharedCheck_598_ == 0)
{
v___x_577_ = v___x_566_;
v_isShared_578_ = v_isSharedCheck_598_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_snapshotTasks_575_);
lean_inc(v_infoState_574_);
lean_inc(v_messages_573_);
lean_inc(v_cache_572_);
lean_inc(v_traceState_567_);
lean_inc(v_auxDeclNGen_571_);
lean_inc(v_ngen_570_);
lean_inc(v_nextMacroScope_569_);
lean_inc(v_env_568_);
lean_dec(v___x_566_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_598_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
uint64_t v_tid_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_596_; 
v_tid_579_ = lean_ctor_get_uint64(v_traceState_567_, sizeof(void*)*1);
v_isSharedCheck_596_ = !lean_is_exclusive(v_traceState_567_);
if (v_isSharedCheck_596_ == 0)
{
lean_object* v_unused_597_; 
v_unused_597_ = lean_ctor_get(v_traceState_567_, 0);
lean_dec(v_unused_597_);
v___x_581_ = v_traceState_567_;
v_isShared_582_ = v_isSharedCheck_596_;
goto v_resetjp_580_;
}
else
{
lean_dec(v_traceState_567_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_596_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_586_; 
v___x_583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_583_, 0, v_ref_528_);
lean_ctor_set(v___x_583_, 1, v_a_562_);
v___x_584_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_526_, v___x_583_);
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 0, v___x_584_);
v___x_586_ = v___x_581_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v___x_584_);
lean_ctor_set_uint64(v_reuseFailAlloc_595_, sizeof(void*)*1, v_tid_579_);
v___x_586_ = v_reuseFailAlloc_595_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
lean_object* v___x_588_; 
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 4, v___x_586_);
v___x_588_ = v___x_577_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v_env_568_);
lean_ctor_set(v_reuseFailAlloc_594_, 1, v_nextMacroScope_569_);
lean_ctor_set(v_reuseFailAlloc_594_, 2, v_ngen_570_);
lean_ctor_set(v_reuseFailAlloc_594_, 3, v_auxDeclNGen_571_);
lean_ctor_set(v_reuseFailAlloc_594_, 4, v___x_586_);
lean_ctor_set(v_reuseFailAlloc_594_, 5, v_cache_572_);
lean_ctor_set(v_reuseFailAlloc_594_, 6, v_messages_573_);
lean_ctor_set(v_reuseFailAlloc_594_, 7, v_infoState_574_);
lean_ctor_set(v_reuseFailAlloc_594_, 8, v_snapshotTasks_575_);
v___x_588_ = v_reuseFailAlloc_594_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_592_; 
v___x_589_ = lean_st_ref_set(v___y_533_, v___x_588_);
v___x_590_ = lean_box(0);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 0, v___x_590_);
v___x_592_ = v___x_564_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v___x_590_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12___redArg___boxed(lean_object* v_oldTraces_600_, lean_object* v_data_601_, lean_object* v_ref_602_, lean_object* v_msg_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12___redArg(v_oldTraces_600_, v_data_601_, v_ref_602_, v_msg_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_);
lean_dec(v___y_607_);
lean_dec_ref(v___y_606_);
lean_dec(v___y_605_);
lean_dec_ref(v___y_604_);
return v_res_609_;
}
}
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__14(lean_object* v_e_610_){
_start:
{
if (lean_obj_tag(v_e_610_) == 0)
{
uint8_t v___x_611_; 
v___x_611_ = 2;
return v___x_611_;
}
else
{
uint8_t v___x_612_; 
v___x_612_ = 0;
return v___x_612_;
}
}
}
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__14___boxed(lean_object* v_e_613_){
_start:
{
uint8_t v_res_614_; lean_object* v_r_615_; 
v_res_614_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__14(v_e_613_);
lean_dec_ref(v_e_613_);
v_r_615_ = lean_box(v_res_614_);
return v_r_615_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__13___redArg(lean_object* v_x_616_){
_start:
{
if (lean_obj_tag(v_x_616_) == 0)
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
v_a_618_ = lean_ctor_get(v_x_616_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v_x_616_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v_x_616_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v_x_616_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_623_; 
if (v_isShared_621_ == 0)
{
lean_ctor_set_tag(v___x_620_, 1);
v___x_623_ = v___x_620_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_a_618_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
else
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
v_a_626_ = lean_ctor_get(v_x_616_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v_x_616_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v_x_616_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v_x_616_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
lean_ctor_set_tag(v___x_628_, 0);
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_a_626_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__13___redArg___boxed(lean_object* v_x_634_, lean_object* v___y_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__13___redArg(v_x_634_);
return v_res_636_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__0(void){
_start:
{
lean_object* v___x_637_; double v___x_638_; 
v___x_637_ = lean_unsigned_to_nat(0u);
v___x_638_ = lean_float_of_nat(v___x_637_);
return v___x_638_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__2(void){
_start:
{
lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_640_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__1));
v___x_641_ = l_Lean_stringToMessageData(v___x_640_);
return v___x_641_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__3(void){
_start:
{
lean_object* v___x_642_; double v___x_643_; 
v___x_642_ = lean_unsigned_to_nat(1000u);
v___x_643_ = lean_float_of_nat(v___x_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9(lean_object* v_cls_644_, uint8_t v_collapsed_645_, lean_object* v_tag_646_, lean_object* v_opts_647_, uint8_t v_clsEnabled_648_, lean_object* v_oldTraces_649_, lean_object* v_msg_650_, lean_object* v_resStartStop_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_){
_start:
{
lean_object* v_fst_661_; lean_object* v_snd_662_; lean_object* v___y_664_; lean_object* v___y_665_; lean_object* v_data_666_; lean_object* v_fst_677_; lean_object* v_snd_678_; lean_object* v___x_679_; uint8_t v___x_680_; lean_object* v___y_682_; lean_object* v_a_683_; uint8_t v___y_698_; double v___y_729_; 
v_fst_661_ = lean_ctor_get(v_resStartStop_651_, 0);
lean_inc(v_fst_661_);
v_snd_662_ = lean_ctor_get(v_resStartStop_651_, 1);
lean_inc(v_snd_662_);
lean_dec_ref(v_resStartStop_651_);
v_fst_677_ = lean_ctor_get(v_snd_662_, 0);
lean_inc(v_fst_677_);
v_snd_678_ = lean_ctor_get(v_snd_662_, 1);
lean_inc(v_snd_678_);
lean_dec(v_snd_662_);
v___x_679_ = l_Lean_trace_profiler;
v___x_680_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__8(v_opts_647_, v___x_679_);
if (v___x_680_ == 0)
{
v___y_698_ = v___x_680_;
goto v___jp_697_;
}
else
{
lean_object* v___x_734_; uint8_t v___x_735_; 
v___x_734_ = l_Lean_trace_profiler_useHeartbeats;
v___x_735_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__8(v_opts_647_, v___x_734_);
if (v___x_735_ == 0)
{
lean_object* v___x_736_; lean_object* v___x_737_; double v___x_738_; double v___x_739_; double v___x_740_; 
v___x_736_ = l_Lean_trace_profiler_threshold;
v___x_737_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__15(v_opts_647_, v___x_736_);
v___x_738_ = lean_float_of_nat(v___x_737_);
v___x_739_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__3);
v___x_740_ = lean_float_div(v___x_738_, v___x_739_);
v___y_729_ = v___x_740_;
goto v___jp_728_;
}
else
{
lean_object* v___x_741_; lean_object* v___x_742_; double v___x_743_; 
v___x_741_ = l_Lean_trace_profiler_threshold;
v___x_742_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__15(v_opts_647_, v___x_741_);
v___x_743_ = lean_float_of_nat(v___x_742_);
v___y_729_ = v___x_743_;
goto v___jp_728_;
}
}
v___jp_663_:
{
lean_object* v___x_667_; 
lean_inc(v___y_665_);
v___x_667_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12___redArg(v_oldTraces_649_, v_data_666_, v___y_665_, v___y_664_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_667_) == 0)
{
lean_object* v___x_668_; 
lean_dec_ref_known(v___x_667_, 1);
v___x_668_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__13___redArg(v_fst_661_);
return v___x_668_;
}
else
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_676_; 
lean_dec(v_fst_661_);
v_a_669_ = lean_ctor_get(v___x_667_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_676_ == 0)
{
v___x_671_ = v___x_667_;
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_667_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_674_; 
if (v_isShared_672_ == 0)
{
v___x_674_ = v___x_671_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_a_669_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
v___jp_681_:
{
uint8_t v_result_684_; lean_object* v___x_685_; lean_object* v___x_686_; double v___x_687_; lean_object* v_data_688_; 
v_result_684_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__14(v_fst_661_);
v___x_685_ = lean_box(v_result_684_);
v___x_686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_686_, 0, v___x_685_);
v___x_687_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__0);
lean_inc_ref(v_tag_646_);
lean_inc_ref(v___x_686_);
lean_inc(v_cls_644_);
v_data_688_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_688_, 0, v_cls_644_);
lean_ctor_set(v_data_688_, 1, v___x_686_);
lean_ctor_set(v_data_688_, 2, v_tag_646_);
lean_ctor_set_float(v_data_688_, sizeof(void*)*3, v___x_687_);
lean_ctor_set_float(v_data_688_, sizeof(void*)*3 + 8, v___x_687_);
lean_ctor_set_uint8(v_data_688_, sizeof(void*)*3 + 16, v_collapsed_645_);
if (v___x_680_ == 0)
{
lean_dec_ref_known(v___x_686_, 1);
lean_dec(v_snd_678_);
lean_dec(v_fst_677_);
lean_dec_ref(v_tag_646_);
lean_dec(v_cls_644_);
v___y_664_ = v_a_683_;
v___y_665_ = v___y_682_;
v_data_666_ = v_data_688_;
goto v___jp_663_;
}
else
{
lean_object* v_data_689_; double v___x_690_; double v___x_691_; 
lean_dec_ref_known(v_data_688_, 3);
v_data_689_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_689_, 0, v_cls_644_);
lean_ctor_set(v_data_689_, 1, v___x_686_);
lean_ctor_set(v_data_689_, 2, v_tag_646_);
v___x_690_ = lean_unbox_float(v_fst_677_);
lean_dec(v_fst_677_);
lean_ctor_set_float(v_data_689_, sizeof(void*)*3, v___x_690_);
v___x_691_ = lean_unbox_float(v_snd_678_);
lean_dec(v_snd_678_);
lean_ctor_set_float(v_data_689_, sizeof(void*)*3 + 8, v___x_691_);
lean_ctor_set_uint8(v_data_689_, sizeof(void*)*3 + 16, v_collapsed_645_);
v___y_664_ = v_a_683_;
v___y_665_ = v___y_682_;
v_data_666_ = v_data_689_;
goto v___jp_663_;
}
}
v___jp_692_:
{
lean_object* v_ref_693_; lean_object* v___x_694_; 
v_ref_693_ = lean_ctor_get(v___y_658_, 5);
lean_inc(v___y_659_);
lean_inc_ref(v___y_658_);
lean_inc(v___y_657_);
lean_inc_ref(v___y_656_);
lean_inc(v___y_655_);
lean_inc_ref(v___y_654_);
lean_inc(v___y_653_);
lean_inc_ref(v___y_652_);
lean_inc(v_fst_661_);
v___x_694_ = lean_apply_10(v_msg_650_, v_fst_661_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, lean_box(0));
if (lean_obj_tag(v___x_694_) == 0)
{
lean_object* v_a_695_; 
v_a_695_ = lean_ctor_get(v___x_694_, 0);
lean_inc(v_a_695_);
lean_dec_ref_known(v___x_694_, 1);
v___y_682_ = v_ref_693_;
v_a_683_ = v_a_695_;
goto v___jp_681_;
}
else
{
lean_object* v___x_696_; 
lean_dec_ref_known(v___x_694_, 1);
v___x_696_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__2);
v___y_682_ = v_ref_693_;
v_a_683_ = v___x_696_;
goto v___jp_681_;
}
}
v___jp_697_:
{
if (v_clsEnabled_648_ == 0)
{
if (v___y_698_ == 0)
{
lean_object* v___x_699_; lean_object* v_traceState_700_; lean_object* v_env_701_; lean_object* v_nextMacroScope_702_; lean_object* v_ngen_703_; lean_object* v_auxDeclNGen_704_; lean_object* v_cache_705_; lean_object* v_messages_706_; lean_object* v_infoState_707_; lean_object* v_snapshotTasks_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_727_; 
lean_dec(v_snd_678_);
lean_dec(v_fst_677_);
lean_dec_ref(v_msg_650_);
lean_dec_ref(v_tag_646_);
lean_dec(v_cls_644_);
v___x_699_ = lean_st_ref_take(v___y_659_);
v_traceState_700_ = lean_ctor_get(v___x_699_, 4);
v_env_701_ = lean_ctor_get(v___x_699_, 0);
v_nextMacroScope_702_ = lean_ctor_get(v___x_699_, 1);
v_ngen_703_ = lean_ctor_get(v___x_699_, 2);
v_auxDeclNGen_704_ = lean_ctor_get(v___x_699_, 3);
v_cache_705_ = lean_ctor_get(v___x_699_, 5);
v_messages_706_ = lean_ctor_get(v___x_699_, 6);
v_infoState_707_ = lean_ctor_get(v___x_699_, 7);
v_snapshotTasks_708_ = lean_ctor_get(v___x_699_, 8);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_727_ == 0)
{
v___x_710_ = v___x_699_;
v_isShared_711_ = v_isSharedCheck_727_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_snapshotTasks_708_);
lean_inc(v_infoState_707_);
lean_inc(v_messages_706_);
lean_inc(v_cache_705_);
lean_inc(v_traceState_700_);
lean_inc(v_auxDeclNGen_704_);
lean_inc(v_ngen_703_);
lean_inc(v_nextMacroScope_702_);
lean_inc(v_env_701_);
lean_dec(v___x_699_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_727_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
uint64_t v_tid_712_; lean_object* v_traces_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_726_; 
v_tid_712_ = lean_ctor_get_uint64(v_traceState_700_, sizeof(void*)*1);
v_traces_713_ = lean_ctor_get(v_traceState_700_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v_traceState_700_);
if (v_isSharedCheck_726_ == 0)
{
v___x_715_ = v_traceState_700_;
v_isShared_716_ = v_isSharedCheck_726_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_traces_713_);
lean_dec(v_traceState_700_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_726_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_717_; lean_object* v___x_719_; 
v___x_717_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_649_, v_traces_713_);
lean_dec_ref(v_traces_713_);
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 0, v___x_717_);
v___x_719_ = v___x_715_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v___x_717_);
lean_ctor_set_uint64(v_reuseFailAlloc_725_, sizeof(void*)*1, v_tid_712_);
v___x_719_ = v_reuseFailAlloc_725_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
lean_object* v___x_721_; 
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 4, v___x_719_);
v___x_721_ = v___x_710_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_env_701_);
lean_ctor_set(v_reuseFailAlloc_724_, 1, v_nextMacroScope_702_);
lean_ctor_set(v_reuseFailAlloc_724_, 2, v_ngen_703_);
lean_ctor_set(v_reuseFailAlloc_724_, 3, v_auxDeclNGen_704_);
lean_ctor_set(v_reuseFailAlloc_724_, 4, v___x_719_);
lean_ctor_set(v_reuseFailAlloc_724_, 5, v_cache_705_);
lean_ctor_set(v_reuseFailAlloc_724_, 6, v_messages_706_);
lean_ctor_set(v_reuseFailAlloc_724_, 7, v_infoState_707_);
lean_ctor_set(v_reuseFailAlloc_724_, 8, v_snapshotTasks_708_);
v___x_721_ = v_reuseFailAlloc_724_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = lean_st_ref_set(v___y_659_, v___x_721_);
v___x_723_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__13___redArg(v_fst_661_);
return v___x_723_;
}
}
}
}
}
else
{
goto v___jp_692_;
}
}
else
{
goto v___jp_692_;
}
}
v___jp_728_:
{
double v___x_730_; double v___x_731_; double v___x_732_; uint8_t v___x_733_; 
v___x_730_ = lean_unbox_float(v_snd_678_);
v___x_731_ = lean_unbox_float(v_fst_677_);
v___x_732_ = lean_float_sub(v___x_730_, v___x_731_);
v___x_733_ = lean_float_decLt(v___y_729_, v___x_732_);
v___y_698_ = v___x_733_;
goto v___jp_697_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___boxed(lean_object** _args){
lean_object* v_cls_744_ = _args[0];
lean_object* v_collapsed_745_ = _args[1];
lean_object* v_tag_746_ = _args[2];
lean_object* v_opts_747_ = _args[3];
lean_object* v_clsEnabled_748_ = _args[4];
lean_object* v_oldTraces_749_ = _args[5];
lean_object* v_msg_750_ = _args[6];
lean_object* v_resStartStop_751_ = _args[7];
lean_object* v___y_752_ = _args[8];
lean_object* v___y_753_ = _args[9];
lean_object* v___y_754_ = _args[10];
lean_object* v___y_755_ = _args[11];
lean_object* v___y_756_ = _args[12];
lean_object* v___y_757_ = _args[13];
lean_object* v___y_758_ = _args[14];
lean_object* v___y_759_ = _args[15];
lean_object* v___y_760_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_761_; uint8_t v_clsEnabled_boxed_762_; lean_object* v_res_763_; 
v_collapsed_boxed_761_ = lean_unbox(v_collapsed_745_);
v_clsEnabled_boxed_762_ = lean_unbox(v_clsEnabled_748_);
v_res_763_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9(v_cls_744_, v_collapsed_boxed_761_, v_tag_746_, v_opts_747_, v_clsEnabled_boxed_762_, v_oldTraces_749_, v_msg_750_, v_resStartStop_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
lean_dec(v___y_759_);
lean_dec_ref(v___y_758_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
lean_dec_ref(v_opts_747_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__3(lean_object* v_x_764_, lean_object* v_x_765_){
_start:
{
if (lean_obj_tag(v_x_765_) == 0)
{
lean_inc(v_x_764_);
return v_x_764_;
}
else
{
lean_object* v_key_766_; lean_object* v_value_767_; lean_object* v_tail_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v_key_766_ = lean_ctor_get(v_x_765_, 0);
v_value_767_ = lean_ctor_get(v_x_765_, 1);
v_tail_768_ = lean_ctor_get(v_x_765_, 2);
v___x_769_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__3(v_x_764_, v_tail_768_);
lean_inc(v_value_767_);
lean_inc(v_key_766_);
v___x_770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_770_, 0, v_key_766_);
lean_ctor_set(v___x_770_, 1, v_value_767_);
v___x_771_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_771_, 0, v___x_770_);
lean_ctor_set(v___x_771_, 1, v___x_769_);
return v___x_771_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__3___boxed(lean_object* v_x_772_, lean_object* v_x_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__3(v_x_772_, v_x_773_);
lean_dec(v_x_773_);
lean_dec(v_x_772_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__4(lean_object* v_as_775_, size_t v_i_776_, size_t v_stop_777_, lean_object* v_b_778_){
_start:
{
uint8_t v___x_779_; 
v___x_779_ = lean_usize_dec_eq(v_i_776_, v_stop_777_);
if (v___x_779_ == 0)
{
size_t v___x_780_; size_t v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_780_ = ((size_t)1ULL);
v___x_781_ = lean_usize_sub(v_i_776_, v___x_780_);
v___x_782_ = lean_array_uget_borrowed(v_as_775_, v___x_781_);
v___x_783_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__3(v_b_778_, v___x_782_);
lean_dec(v_b_778_);
v_i_776_ = v___x_781_;
v_b_778_ = v___x_783_;
goto _start;
}
else
{
return v_b_778_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__4___boxed(lean_object* v_as_785_, lean_object* v_i_786_, lean_object* v_stop_787_, lean_object* v_b_788_){
_start:
{
size_t v_i_boxed_789_; size_t v_stop_boxed_790_; lean_object* v_res_791_; 
v_i_boxed_789_ = lean_unbox_usize(v_i_786_);
lean_dec(v_i_786_);
v_stop_boxed_790_ = lean_unbox_usize(v_stop_787_);
lean_dec(v_stop_787_);
v_res_791_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__4(v_as_785_, v_i_boxed_789_, v_stop_boxed_790_, v_b_788_);
lean_dec_ref(v_as_785_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5(lean_object* v_x_799_){
_start:
{
switch(lean_obj_tag(v_x_799_))
{
case 0:
{
lean_object* v_a_800_; lean_object* v___x_801_; 
v_a_800_ = lean_ctor_get(v_x_799_, 0);
lean_inc(v_a_800_);
lean_dec_ref_known(v_x_799_, 1);
v___x_801_ = l_Std_Tactic_BVDecide_BVPred_toString(v_a_800_);
return v___x_801_;
}
case 1:
{
uint8_t v_a_802_; 
v_a_802_ = lean_ctor_get_uint8(v_x_799_, 0);
lean_dec_ref_known(v_x_799_, 0);
if (v_a_802_ == 0)
{
lean_object* v___x_803_; 
v___x_803_ = ((lean_object*)(l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__0));
return v___x_803_;
}
else
{
lean_object* v___x_804_; 
v___x_804_ = ((lean_object*)(l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__1));
return v___x_804_;
}
}
case 2:
{
lean_object* v_a_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v_a_805_ = lean_ctor_get(v_x_799_, 0);
lean_inc_ref(v_a_805_);
lean_dec_ref_known(v_x_799_, 1);
v___x_806_ = ((lean_object*)(l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__2));
v___x_807_ = l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5(v_a_805_);
v___x_808_ = lean_string_append(v___x_806_, v___x_807_);
lean_dec_ref(v___x_807_);
return v___x_808_;
}
case 3:
{
uint8_t v_a_809_; lean_object* v_a_810_; lean_object* v_a_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v_a_809_ = lean_ctor_get_uint8(v_x_799_, sizeof(void*)*2);
v_a_810_ = lean_ctor_get(v_x_799_, 0);
lean_inc_ref(v_a_810_);
v_a_811_ = lean_ctor_get(v_x_799_, 1);
lean_inc_ref(v_a_811_);
lean_dec_ref_known(v_x_799_, 2);
v___x_812_ = ((lean_object*)(l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__3));
v___x_813_ = l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5(v_a_810_);
v___x_814_ = lean_string_append(v___x_812_, v___x_813_);
lean_dec_ref(v___x_813_);
v___x_815_ = ((lean_object*)(l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__4));
v___x_816_ = lean_string_append(v___x_814_, v___x_815_);
v___x_817_ = l_Std_Tactic_BVDecide_Gate_toString(v_a_809_);
v___x_818_ = lean_string_append(v___x_816_, v___x_817_);
lean_dec_ref(v___x_817_);
v___x_819_ = lean_string_append(v___x_818_, v___x_815_);
v___x_820_ = l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5(v_a_811_);
v___x_821_ = lean_string_append(v___x_819_, v___x_820_);
lean_dec_ref(v___x_820_);
v___x_822_ = ((lean_object*)(l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__5));
v___x_823_ = lean_string_append(v___x_821_, v___x_822_);
return v___x_823_;
}
default: 
{
lean_object* v_a_824_; lean_object* v_a_825_; lean_object* v_a_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v_a_824_ = lean_ctor_get(v_x_799_, 0);
lean_inc_ref(v_a_824_);
v_a_825_ = lean_ctor_get(v_x_799_, 1);
lean_inc_ref(v_a_825_);
v_a_826_ = lean_ctor_get(v_x_799_, 2);
lean_inc_ref(v_a_826_);
lean_dec_ref_known(v_x_799_, 3);
v___x_827_ = ((lean_object*)(l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__6));
v___x_828_ = l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5(v_a_824_);
v___x_829_ = lean_string_append(v___x_827_, v___x_828_);
lean_dec_ref(v___x_828_);
v___x_830_ = ((lean_object*)(l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__4));
v___x_831_ = lean_string_append(v___x_829_, v___x_830_);
v___x_832_ = l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5(v_a_825_);
v___x_833_ = lean_string_append(v___x_831_, v___x_832_);
lean_dec_ref(v___x_832_);
v___x_834_ = lean_string_append(v___x_833_, v___x_830_);
v___x_835_ = l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5(v_a_826_);
v___x_836_ = lean_string_append(v___x_834_, v___x_835_);
lean_dec_ref(v___x_835_);
v___x_837_ = ((lean_object*)(l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5___closed__5));
v___x_838_ = lean_string_append(v___x_836_, v___x_837_);
return v___x_838_;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__4___redArg(lean_object* v_a_839_, lean_object* v_x_840_){
_start:
{
if (lean_obj_tag(v_x_840_) == 0)
{
uint8_t v___x_841_; 
v___x_841_ = 0;
return v___x_841_;
}
else
{
lean_object* v_key_842_; lean_object* v_tail_843_; uint8_t v___x_844_; 
v_key_842_ = lean_ctor_get(v_x_840_, 0);
v_tail_843_ = lean_ctor_get(v_x_840_, 2);
v___x_844_ = lean_nat_dec_eq(v_key_842_, v_a_839_);
if (v___x_844_ == 0)
{
v_x_840_ = v_tail_843_;
goto _start;
}
else
{
return v___x_844_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_a_846_, lean_object* v_x_847_){
_start:
{
uint8_t v_res_848_; lean_object* v_r_849_; 
v_res_848_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__4___redArg(v_a_846_, v_x_847_);
lean_dec(v_x_847_);
lean_dec(v_a_846_);
v_r_849_ = lean_box(v_res_848_);
return v_r_849_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__6___redArg(lean_object* v_a_850_, lean_object* v_b_851_, lean_object* v_x_852_){
_start:
{
if (lean_obj_tag(v_x_852_) == 0)
{
lean_dec(v_b_851_);
lean_dec(v_a_850_);
return v_x_852_;
}
else
{
lean_object* v_key_853_; lean_object* v_value_854_; lean_object* v_tail_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_867_; 
v_key_853_ = lean_ctor_get(v_x_852_, 0);
v_value_854_ = lean_ctor_get(v_x_852_, 1);
v_tail_855_ = lean_ctor_get(v_x_852_, 2);
v_isSharedCheck_867_ = !lean_is_exclusive(v_x_852_);
if (v_isSharedCheck_867_ == 0)
{
v___x_857_ = v_x_852_;
v_isShared_858_ = v_isSharedCheck_867_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_tail_855_);
lean_inc(v_value_854_);
lean_inc(v_key_853_);
lean_dec(v_x_852_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_867_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
uint8_t v___x_859_; 
v___x_859_ = lean_nat_dec_eq(v_key_853_, v_a_850_);
if (v___x_859_ == 0)
{
lean_object* v___x_860_; lean_object* v___x_862_; 
v___x_860_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__6___redArg(v_a_850_, v_b_851_, v_tail_855_);
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 2, v___x_860_);
v___x_862_ = v___x_857_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_key_853_);
lean_ctor_set(v_reuseFailAlloc_863_, 1, v_value_854_);
lean_ctor_set(v_reuseFailAlloc_863_, 2, v___x_860_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
else
{
lean_object* v___x_865_; 
lean_dec(v_value_854_);
lean_dec(v_key_853_);
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 1, v_b_851_);
lean_ctor_set(v___x_857_, 0, v_a_850_);
v___x_865_ = v___x_857_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v_a_850_);
lean_ctor_set(v_reuseFailAlloc_866_, 1, v_b_851_);
lean_ctor_set(v_reuseFailAlloc_866_, 2, v_tail_855_);
v___x_865_ = v_reuseFailAlloc_866_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
return v___x_865_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5_spec__15_spec__19___redArg(lean_object* v_x_868_, lean_object* v_x_869_){
_start:
{
if (lean_obj_tag(v_x_869_) == 0)
{
return v_x_868_;
}
else
{
lean_object* v_key_870_; lean_object* v_value_871_; lean_object* v_tail_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_895_; 
v_key_870_ = lean_ctor_get(v_x_869_, 0);
v_value_871_ = lean_ctor_get(v_x_869_, 1);
v_tail_872_ = lean_ctor_get(v_x_869_, 2);
v_isSharedCheck_895_ = !lean_is_exclusive(v_x_869_);
if (v_isSharedCheck_895_ == 0)
{
v___x_874_ = v_x_869_;
v_isShared_875_ = v_isSharedCheck_895_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_tail_872_);
lean_inc(v_value_871_);
lean_inc(v_key_870_);
lean_dec(v_x_869_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_895_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_876_; uint64_t v___x_877_; uint64_t v___x_878_; uint64_t v___x_879_; uint64_t v_fold_880_; uint64_t v___x_881_; uint64_t v___x_882_; uint64_t v___x_883_; size_t v___x_884_; size_t v___x_885_; size_t v___x_886_; size_t v___x_887_; size_t v___x_888_; lean_object* v___x_889_; lean_object* v___x_891_; 
v___x_876_ = lean_array_get_size(v_x_868_);
v___x_877_ = lean_uint64_of_nat(v_key_870_);
v___x_878_ = 32ULL;
v___x_879_ = lean_uint64_shift_right(v___x_877_, v___x_878_);
v_fold_880_ = lean_uint64_xor(v___x_877_, v___x_879_);
v___x_881_ = 16ULL;
v___x_882_ = lean_uint64_shift_right(v_fold_880_, v___x_881_);
v___x_883_ = lean_uint64_xor(v_fold_880_, v___x_882_);
v___x_884_ = lean_uint64_to_usize(v___x_883_);
v___x_885_ = lean_usize_of_nat(v___x_876_);
v___x_886_ = ((size_t)1ULL);
v___x_887_ = lean_usize_sub(v___x_885_, v___x_886_);
v___x_888_ = lean_usize_land(v___x_884_, v___x_887_);
v___x_889_ = lean_array_uget_borrowed(v_x_868_, v___x_888_);
lean_inc(v___x_889_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 2, v___x_889_);
v___x_891_ = v___x_874_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_key_870_);
lean_ctor_set(v_reuseFailAlloc_894_, 1, v_value_871_);
lean_ctor_set(v_reuseFailAlloc_894_, 2, v___x_889_);
v___x_891_ = v_reuseFailAlloc_894_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
lean_object* v___x_892_; 
v___x_892_ = lean_array_uset(v_x_868_, v___x_888_, v___x_891_);
v_x_868_ = v___x_892_;
v_x_869_ = v_tail_872_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5_spec__15___redArg(lean_object* v_i_896_, lean_object* v_source_897_, lean_object* v_target_898_){
_start:
{
lean_object* v___x_899_; uint8_t v___x_900_; 
v___x_899_ = lean_array_get_size(v_source_897_);
v___x_900_ = lean_nat_dec_lt(v_i_896_, v___x_899_);
if (v___x_900_ == 0)
{
lean_dec_ref(v_source_897_);
lean_dec(v_i_896_);
return v_target_898_;
}
else
{
lean_object* v_es_901_; lean_object* v___x_902_; lean_object* v_source_903_; lean_object* v_target_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v_es_901_ = lean_array_fget(v_source_897_, v_i_896_);
v___x_902_ = lean_box(0);
v_source_903_ = lean_array_fset(v_source_897_, v_i_896_, v___x_902_);
v_target_904_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5_spec__15_spec__19___redArg(v_target_898_, v_es_901_);
v___x_905_ = lean_unsigned_to_nat(1u);
v___x_906_ = lean_nat_add(v_i_896_, v___x_905_);
lean_dec(v_i_896_);
v_i_896_ = v___x_906_;
v_source_897_ = v_source_903_;
v_target_898_ = v_target_904_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5___redArg(lean_object* v_data_908_){
_start:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v_nbuckets_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_909_ = lean_array_get_size(v_data_908_);
v___x_910_ = lean_unsigned_to_nat(2u);
v_nbuckets_911_ = lean_nat_mul(v___x_909_, v___x_910_);
v___x_912_ = lean_unsigned_to_nat(0u);
v___x_913_ = lean_box(0);
v___x_914_ = lean_mk_array(v_nbuckets_911_, v___x_913_);
v___x_915_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5_spec__15___redArg(v___x_912_, v_data_908_, v___x_914_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1___redArg(lean_object* v_m_916_, lean_object* v_a_917_, lean_object* v_b_918_){
_start:
{
lean_object* v_size_919_; lean_object* v_buckets_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_963_; 
v_size_919_ = lean_ctor_get(v_m_916_, 0);
v_buckets_920_ = lean_ctor_get(v_m_916_, 1);
v_isSharedCheck_963_ = !lean_is_exclusive(v_m_916_);
if (v_isSharedCheck_963_ == 0)
{
v___x_922_ = v_m_916_;
v_isShared_923_ = v_isSharedCheck_963_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_buckets_920_);
lean_inc(v_size_919_);
lean_dec(v_m_916_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_963_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_924_; uint64_t v___x_925_; uint64_t v___x_926_; uint64_t v___x_927_; uint64_t v_fold_928_; uint64_t v___x_929_; uint64_t v___x_930_; uint64_t v___x_931_; size_t v___x_932_; size_t v___x_933_; size_t v___x_934_; size_t v___x_935_; size_t v___x_936_; lean_object* v_bkt_937_; uint8_t v___x_938_; 
v___x_924_ = lean_array_get_size(v_buckets_920_);
v___x_925_ = lean_uint64_of_nat(v_a_917_);
v___x_926_ = 32ULL;
v___x_927_ = lean_uint64_shift_right(v___x_925_, v___x_926_);
v_fold_928_ = lean_uint64_xor(v___x_925_, v___x_927_);
v___x_929_ = 16ULL;
v___x_930_ = lean_uint64_shift_right(v_fold_928_, v___x_929_);
v___x_931_ = lean_uint64_xor(v_fold_928_, v___x_930_);
v___x_932_ = lean_uint64_to_usize(v___x_931_);
v___x_933_ = lean_usize_of_nat(v___x_924_);
v___x_934_ = ((size_t)1ULL);
v___x_935_ = lean_usize_sub(v___x_933_, v___x_934_);
v___x_936_ = lean_usize_land(v___x_932_, v___x_935_);
v_bkt_937_ = lean_array_uget_borrowed(v_buckets_920_, v___x_936_);
v___x_938_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__4___redArg(v_a_917_, v_bkt_937_);
if (v___x_938_ == 0)
{
lean_object* v___x_939_; lean_object* v_size_x27_940_; lean_object* v___x_941_; lean_object* v_buckets_x27_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; uint8_t v___x_948_; 
v___x_939_ = lean_unsigned_to_nat(1u);
v_size_x27_940_ = lean_nat_add(v_size_919_, v___x_939_);
lean_dec(v_size_919_);
lean_inc(v_bkt_937_);
v___x_941_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_941_, 0, v_a_917_);
lean_ctor_set(v___x_941_, 1, v_b_918_);
lean_ctor_set(v___x_941_, 2, v_bkt_937_);
v_buckets_x27_942_ = lean_array_uset(v_buckets_920_, v___x_936_, v___x_941_);
v___x_943_ = lean_unsigned_to_nat(4u);
v___x_944_ = lean_nat_mul(v_size_x27_940_, v___x_943_);
v___x_945_ = lean_unsigned_to_nat(3u);
v___x_946_ = lean_nat_div(v___x_944_, v___x_945_);
lean_dec(v___x_944_);
v___x_947_ = lean_array_get_size(v_buckets_x27_942_);
v___x_948_ = lean_nat_dec_le(v___x_946_, v___x_947_);
lean_dec(v___x_946_);
if (v___x_948_ == 0)
{
lean_object* v_val_949_; lean_object* v___x_951_; 
v_val_949_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5___redArg(v_buckets_x27_942_);
if (v_isShared_923_ == 0)
{
lean_ctor_set(v___x_922_, 1, v_val_949_);
lean_ctor_set(v___x_922_, 0, v_size_x27_940_);
v___x_951_ = v___x_922_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_size_x27_940_);
lean_ctor_set(v_reuseFailAlloc_952_, 1, v_val_949_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
else
{
lean_object* v___x_954_; 
if (v_isShared_923_ == 0)
{
lean_ctor_set(v___x_922_, 1, v_buckets_x27_942_);
lean_ctor_set(v___x_922_, 0, v_size_x27_940_);
v___x_954_ = v___x_922_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_size_x27_940_);
lean_ctor_set(v_reuseFailAlloc_955_, 1, v_buckets_x27_942_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
else
{
lean_object* v___x_956_; lean_object* v_buckets_x27_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_961_; 
lean_inc(v_bkt_937_);
v___x_956_ = lean_box(0);
v_buckets_x27_957_ = lean_array_uset(v_buckets_920_, v___x_936_, v___x_956_);
v___x_958_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__6___redArg(v_a_917_, v_b_918_, v_bkt_937_);
v___x_959_ = lean_array_uset(v_buckets_x27_957_, v___x_936_, v___x_958_);
if (v_isShared_923_ == 0)
{
lean_ctor_set(v___x_922_, 1, v___x_959_);
v___x_961_ = v___x_922_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_size_919_);
lean_ctor_set(v_reuseFailAlloc_962_, 1, v___x_959_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__2___redArg(lean_object* v_as_x27_964_, lean_object* v_b_965_){
_start:
{
if (lean_obj_tag(v_as_x27_964_) == 0)
{
return v_b_965_;
}
else
{
lean_object* v_head_966_; lean_object* v_tail_967_; lean_object* v_fst_968_; lean_object* v_snd_969_; lean_object* v_r_970_; 
v_head_966_ = lean_ctor_get(v_as_x27_964_, 0);
v_tail_967_ = lean_ctor_get(v_as_x27_964_, 1);
v_fst_968_ = lean_ctor_get(v_head_966_, 0);
v_snd_969_ = lean_ctor_get(v_head_966_, 1);
lean_inc(v_snd_969_);
lean_inc(v_fst_968_);
v_r_970_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1___redArg(v_b_965_, v_fst_968_, v_snd_969_);
v_as_x27_964_ = v_tail_967_;
v_b_965_ = v_r_970_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__2___redArg___boxed(lean_object* v_as_x27_972_, lean_object* v_b_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__2___redArg(v_as_x27_972_, v_b_973_);
lean_dec(v_as_x27_972_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1(lean_object* v_m_975_, lean_object* v_l_976_){
_start:
{
lean_object* v___x_977_; 
v___x_977_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__2___redArg(v_l_976_, v_m_975_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1___boxed(lean_object* v_m_978_, lean_object* v_l_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1(v_m_978_, v_l_979_);
lean_dec(v_l_979_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__20_spec__23___redArg(lean_object* v_x_981_, lean_object* v_x_982_, lean_object* v_x_983_, lean_object* v_x_984_){
_start:
{
lean_object* v_ks_985_; lean_object* v_vs_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_1010_; 
v_ks_985_ = lean_ctor_get(v_x_981_, 0);
v_vs_986_ = lean_ctor_get(v_x_981_, 1);
v_isSharedCheck_1010_ = !lean_is_exclusive(v_x_981_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_988_ = v_x_981_;
v_isShared_989_ = v_isSharedCheck_1010_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_vs_986_);
lean_inc(v_ks_985_);
lean_dec(v_x_981_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_1010_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_990_; uint8_t v___x_991_; 
v___x_990_ = lean_array_get_size(v_ks_985_);
v___x_991_ = lean_nat_dec_lt(v_x_982_, v___x_990_);
if (v___x_991_ == 0)
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_995_; 
lean_dec(v_x_982_);
v___x_992_ = lean_array_push(v_ks_985_, v_x_983_);
v___x_993_ = lean_array_push(v_vs_986_, v_x_984_);
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 1, v___x_993_);
lean_ctor_set(v___x_988_, 0, v___x_992_);
v___x_995_ = v___x_988_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v___x_992_);
lean_ctor_set(v_reuseFailAlloc_996_, 1, v___x_993_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
else
{
lean_object* v_k_x27_997_; uint8_t v___x_998_; 
v_k_x27_997_ = lean_array_fget_borrowed(v_ks_985_, v_x_982_);
v___x_998_ = l_Lean_instBEqMVarId_beq(v_x_983_, v_k_x27_997_);
if (v___x_998_ == 0)
{
lean_object* v___x_1000_; 
if (v_isShared_989_ == 0)
{
v___x_1000_ = v___x_988_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_ks_985_);
lean_ctor_set(v_reuseFailAlloc_1004_, 1, v_vs_986_);
v___x_1000_ = v_reuseFailAlloc_1004_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_1001_ = lean_unsigned_to_nat(1u);
v___x_1002_ = lean_nat_add(v_x_982_, v___x_1001_);
lean_dec(v_x_982_);
v_x_981_ = v___x_1000_;
v_x_982_ = v___x_1002_;
goto _start;
}
}
else
{
lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1008_; 
v___x_1005_ = lean_array_fset(v_ks_985_, v_x_982_, v_x_983_);
v___x_1006_ = lean_array_fset(v_vs_986_, v_x_982_, v_x_984_);
lean_dec(v_x_982_);
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 1, v___x_1006_);
lean_ctor_set(v___x_988_, 0, v___x_1005_);
v___x_1008_ = v___x_988_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v___x_1005_);
lean_ctor_set(v_reuseFailAlloc_1009_, 1, v___x_1006_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__20___redArg(lean_object* v_n_1011_, lean_object* v_k_1012_, lean_object* v_v_1013_){
_start:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1014_ = lean_unsigned_to_nat(0u);
v___x_1015_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__20_spec__23___redArg(v_n_1011_, v___x_1014_, v_k_1012_, v_v_1013_);
return v___x_1015_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___x_1016_; 
v___x_1016_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10___redArg(lean_object* v_x_1017_, size_t v_x_1018_, size_t v_x_1019_, lean_object* v_x_1020_, lean_object* v_x_1021_){
_start:
{
if (lean_obj_tag(v_x_1017_) == 0)
{
lean_object* v_es_1022_; size_t v___x_1023_; size_t v___x_1024_; lean_object* v_j_1025_; lean_object* v___x_1026_; uint8_t v___x_1027_; 
v_es_1022_ = lean_ctor_get(v_x_1017_, 0);
v___x_1023_ = ((size_t)31ULL);
v___x_1024_ = lean_usize_land(v_x_1018_, v___x_1023_);
v_j_1025_ = lean_usize_to_nat(v___x_1024_);
v___x_1026_ = lean_array_get_size(v_es_1022_);
v___x_1027_ = lean_nat_dec_lt(v_j_1025_, v___x_1026_);
if (v___x_1027_ == 0)
{
lean_dec(v_j_1025_);
lean_dec(v_x_1021_);
lean_dec(v_x_1020_);
return v_x_1017_;
}
else
{
lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1066_; 
lean_inc_ref(v_es_1022_);
v_isSharedCheck_1066_ = !lean_is_exclusive(v_x_1017_);
if (v_isSharedCheck_1066_ == 0)
{
lean_object* v_unused_1067_; 
v_unused_1067_ = lean_ctor_get(v_x_1017_, 0);
lean_dec(v_unused_1067_);
v___x_1029_ = v_x_1017_;
v_isShared_1030_ = v_isSharedCheck_1066_;
goto v_resetjp_1028_;
}
else
{
lean_dec(v_x_1017_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1066_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v_v_1031_; lean_object* v___x_1032_; lean_object* v_xs_x27_1033_; lean_object* v___y_1035_; 
v_v_1031_ = lean_array_fget(v_es_1022_, v_j_1025_);
v___x_1032_ = lean_box(0);
v_xs_x27_1033_ = lean_array_fset(v_es_1022_, v_j_1025_, v___x_1032_);
switch(lean_obj_tag(v_v_1031_))
{
case 0:
{
lean_object* v_key_1040_; lean_object* v_val_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1051_; 
v_key_1040_ = lean_ctor_get(v_v_1031_, 0);
v_val_1041_ = lean_ctor_get(v_v_1031_, 1);
v_isSharedCheck_1051_ = !lean_is_exclusive(v_v_1031_);
if (v_isSharedCheck_1051_ == 0)
{
v___x_1043_ = v_v_1031_;
v_isShared_1044_ = v_isSharedCheck_1051_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_val_1041_);
lean_inc(v_key_1040_);
lean_dec(v_v_1031_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1051_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
uint8_t v___x_1045_; 
v___x_1045_ = l_Lean_instBEqMVarId_beq(v_x_1020_, v_key_1040_);
if (v___x_1045_ == 0)
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
lean_del_object(v___x_1043_);
v___x_1046_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1040_, v_val_1041_, v_x_1020_, v_x_1021_);
v___x_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1046_);
v___y_1035_ = v___x_1047_;
goto v___jp_1034_;
}
else
{
lean_object* v___x_1049_; 
lean_dec(v_val_1041_);
lean_dec(v_key_1040_);
if (v_isShared_1044_ == 0)
{
lean_ctor_set(v___x_1043_, 1, v_x_1021_);
lean_ctor_set(v___x_1043_, 0, v_x_1020_);
v___x_1049_ = v___x_1043_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v_x_1020_);
lean_ctor_set(v_reuseFailAlloc_1050_, 1, v_x_1021_);
v___x_1049_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
v___y_1035_ = v___x_1049_;
goto v___jp_1034_;
}
}
}
}
case 1:
{
lean_object* v_node_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1064_; 
v_node_1052_ = lean_ctor_get(v_v_1031_, 0);
v_isSharedCheck_1064_ = !lean_is_exclusive(v_v_1031_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1054_ = v_v_1031_;
v_isShared_1055_ = v_isSharedCheck_1064_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_node_1052_);
lean_dec(v_v_1031_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1064_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
size_t v___x_1056_; size_t v___x_1057_; size_t v___x_1058_; size_t v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1062_; 
v___x_1056_ = ((size_t)5ULL);
v___x_1057_ = lean_usize_shift_right(v_x_1018_, v___x_1056_);
v___x_1058_ = ((size_t)1ULL);
v___x_1059_ = lean_usize_add(v_x_1019_, v___x_1058_);
v___x_1060_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10___redArg(v_node_1052_, v___x_1057_, v___x_1059_, v_x_1020_, v_x_1021_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 0, v___x_1060_);
v___x_1062_ = v___x_1054_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v___x_1060_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
v___y_1035_ = v___x_1062_;
goto v___jp_1034_;
}
}
}
default: 
{
lean_object* v___x_1065_; 
v___x_1065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1065_, 0, v_x_1020_);
lean_ctor_set(v___x_1065_, 1, v_x_1021_);
v___y_1035_ = v___x_1065_;
goto v___jp_1034_;
}
}
v___jp_1034_:
{
lean_object* v___x_1036_; lean_object* v___x_1038_; 
v___x_1036_ = lean_array_fset(v_xs_x27_1033_, v_j_1025_, v___y_1035_);
lean_dec(v_j_1025_);
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 0, v___x_1036_);
v___x_1038_ = v___x_1029_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v___x_1036_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
}
}
else
{
lean_object* v_ks_1068_; lean_object* v_vs_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1089_; 
v_ks_1068_ = lean_ctor_get(v_x_1017_, 0);
v_vs_1069_ = lean_ctor_get(v_x_1017_, 1);
v_isSharedCheck_1089_ = !lean_is_exclusive(v_x_1017_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1071_ = v_x_1017_;
v_isShared_1072_ = v_isSharedCheck_1089_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_vs_1069_);
lean_inc(v_ks_1068_);
lean_dec(v_x_1017_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1089_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_ks_1068_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v_vs_1069_);
v___x_1074_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
lean_object* v_newNode_1075_; uint8_t v___y_1077_; size_t v___x_1083_; uint8_t v___x_1084_; 
v_newNode_1075_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__20___redArg(v___x_1074_, v_x_1020_, v_x_1021_);
v___x_1083_ = ((size_t)7ULL);
v___x_1084_ = lean_usize_dec_le(v___x_1083_, v_x_1019_);
if (v___x_1084_ == 0)
{
lean_object* v___x_1085_; lean_object* v___x_1086_; uint8_t v___x_1087_; 
v___x_1085_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1075_);
v___x_1086_ = lean_unsigned_to_nat(4u);
v___x_1087_ = lean_nat_dec_lt(v___x_1085_, v___x_1086_);
lean_dec(v___x_1085_);
v___y_1077_ = v___x_1087_;
goto v___jp_1076_;
}
else
{
v___y_1077_ = v___x_1084_;
goto v___jp_1076_;
}
v___jp_1076_:
{
if (v___y_1077_ == 0)
{
lean_object* v_ks_1078_; lean_object* v_vs_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; 
v_ks_1078_ = lean_ctor_get(v_newNode_1075_, 0);
lean_inc_ref(v_ks_1078_);
v_vs_1079_ = lean_ctor_get(v_newNode_1075_, 1);
lean_inc_ref(v_vs_1079_);
lean_dec_ref(v_newNode_1075_);
v___x_1080_ = lean_unsigned_to_nat(0u);
v___x_1081_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10___redArg___closed__0);
v___x_1082_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__21___redArg(v_x_1019_, v_ks_1078_, v_vs_1079_, v___x_1080_, v___x_1081_);
lean_dec_ref(v_vs_1079_);
lean_dec_ref(v_ks_1078_);
return v___x_1082_;
}
else
{
return v_newNode_1075_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__21___redArg(size_t v_depth_1090_, lean_object* v_keys_1091_, lean_object* v_vals_1092_, lean_object* v_i_1093_, lean_object* v_entries_1094_){
_start:
{
lean_object* v___x_1095_; uint8_t v___x_1096_; 
v___x_1095_ = lean_array_get_size(v_keys_1091_);
v___x_1096_ = lean_nat_dec_lt(v_i_1093_, v___x_1095_);
if (v___x_1096_ == 0)
{
lean_dec(v_i_1093_);
return v_entries_1094_;
}
else
{
lean_object* v_k_1097_; lean_object* v_v_1098_; uint64_t v___x_1099_; size_t v_h_1100_; size_t v___x_1101_; lean_object* v___x_1102_; size_t v___x_1103_; size_t v___x_1104_; size_t v___x_1105_; size_t v_h_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v_k_1097_ = lean_array_fget_borrowed(v_keys_1091_, v_i_1093_);
v_v_1098_ = lean_array_fget_borrowed(v_vals_1092_, v_i_1093_);
v___x_1099_ = l_Lean_instHashableMVarId_hash(v_k_1097_);
v_h_1100_ = lean_uint64_to_usize(v___x_1099_);
v___x_1101_ = ((size_t)5ULL);
v___x_1102_ = lean_unsigned_to_nat(1u);
v___x_1103_ = ((size_t)1ULL);
v___x_1104_ = lean_usize_sub(v_depth_1090_, v___x_1103_);
v___x_1105_ = lean_usize_mul(v___x_1101_, v___x_1104_);
v_h_1106_ = lean_usize_shift_right(v_h_1100_, v___x_1105_);
v___x_1107_ = lean_nat_add(v_i_1093_, v___x_1102_);
lean_dec(v_i_1093_);
lean_inc(v_v_1098_);
lean_inc(v_k_1097_);
v___x_1108_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10___redArg(v_entries_1094_, v_h_1106_, v_depth_1090_, v_k_1097_, v_v_1098_);
v_i_1093_ = v___x_1107_;
v_entries_1094_ = v___x_1108_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__21___redArg___boxed(lean_object* v_depth_1110_, lean_object* v_keys_1111_, lean_object* v_vals_1112_, lean_object* v_i_1113_, lean_object* v_entries_1114_){
_start:
{
size_t v_depth_boxed_1115_; lean_object* v_res_1116_; 
v_depth_boxed_1115_ = lean_unbox_usize(v_depth_1110_);
lean_dec(v_depth_1110_);
v_res_1116_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__21___redArg(v_depth_boxed_1115_, v_keys_1111_, v_vals_1112_, v_i_1113_, v_entries_1114_);
lean_dec_ref(v_vals_1112_);
lean_dec_ref(v_keys_1111_);
return v_res_1116_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10___redArg___boxed(lean_object* v_x_1117_, lean_object* v_x_1118_, lean_object* v_x_1119_, lean_object* v_x_1120_, lean_object* v_x_1121_){
_start:
{
size_t v_x_41050__boxed_1122_; size_t v_x_41051__boxed_1123_; lean_object* v_res_1124_; 
v_x_41050__boxed_1122_ = lean_unbox_usize(v_x_1118_);
lean_dec(v_x_1118_);
v_x_41051__boxed_1123_ = lean_unbox_usize(v_x_1119_);
lean_dec(v_x_1119_);
v_res_1124_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10___redArg(v_x_1117_, v_x_41050__boxed_1122_, v_x_41051__boxed_1123_, v_x_1120_, v_x_1121_);
return v_res_1124_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4___redArg(lean_object* v_x_1125_, lean_object* v_x_1126_, lean_object* v_x_1127_){
_start:
{
uint64_t v___x_1128_; size_t v___x_1129_; size_t v___x_1130_; lean_object* v___x_1131_; 
v___x_1128_ = l_Lean_instHashableMVarId_hash(v_x_1126_);
v___x_1129_ = lean_uint64_to_usize(v___x_1128_);
v___x_1130_ = ((size_t)1ULL);
v___x_1131_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10___redArg(v_x_1125_, v___x_1129_, v___x_1130_, v_x_1126_, v_x_1127_);
return v___x_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2___redArg(lean_object* v_mvarId_1132_, lean_object* v_val_1133_, lean_object* v___y_1134_){
_start:
{
lean_object* v___x_1136_; lean_object* v_mctx_1137_; lean_object* v_cache_1138_; lean_object* v_zetaDeltaFVarIds_1139_; lean_object* v_postponed_1140_; lean_object* v_diag_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1169_; 
v___x_1136_ = lean_st_ref_take(v___y_1134_);
v_mctx_1137_ = lean_ctor_get(v___x_1136_, 0);
v_cache_1138_ = lean_ctor_get(v___x_1136_, 1);
v_zetaDeltaFVarIds_1139_ = lean_ctor_get(v___x_1136_, 2);
v_postponed_1140_ = lean_ctor_get(v___x_1136_, 3);
v_diag_1141_ = lean_ctor_get(v___x_1136_, 4);
v_isSharedCheck_1169_ = !lean_is_exclusive(v___x_1136_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1143_ = v___x_1136_;
v_isShared_1144_ = v_isSharedCheck_1169_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_diag_1141_);
lean_inc(v_postponed_1140_);
lean_inc(v_zetaDeltaFVarIds_1139_);
lean_inc(v_cache_1138_);
lean_inc(v_mctx_1137_);
lean_dec(v___x_1136_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1169_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v_depth_1145_; lean_object* v_levelAssignDepth_1146_; lean_object* v_lmvarCounter_1147_; lean_object* v_mvarCounter_1148_; lean_object* v_lDecls_1149_; lean_object* v_decls_1150_; lean_object* v_userNames_1151_; lean_object* v_lAssignment_1152_; lean_object* v_eAssignment_1153_; lean_object* v_dAssignment_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1168_; 
v_depth_1145_ = lean_ctor_get(v_mctx_1137_, 0);
v_levelAssignDepth_1146_ = lean_ctor_get(v_mctx_1137_, 1);
v_lmvarCounter_1147_ = lean_ctor_get(v_mctx_1137_, 2);
v_mvarCounter_1148_ = lean_ctor_get(v_mctx_1137_, 3);
v_lDecls_1149_ = lean_ctor_get(v_mctx_1137_, 4);
v_decls_1150_ = lean_ctor_get(v_mctx_1137_, 5);
v_userNames_1151_ = lean_ctor_get(v_mctx_1137_, 6);
v_lAssignment_1152_ = lean_ctor_get(v_mctx_1137_, 7);
v_eAssignment_1153_ = lean_ctor_get(v_mctx_1137_, 8);
v_dAssignment_1154_ = lean_ctor_get(v_mctx_1137_, 9);
v_isSharedCheck_1168_ = !lean_is_exclusive(v_mctx_1137_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1156_ = v_mctx_1137_;
v_isShared_1157_ = v_isSharedCheck_1168_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_dAssignment_1154_);
lean_inc(v_eAssignment_1153_);
lean_inc(v_lAssignment_1152_);
lean_inc(v_userNames_1151_);
lean_inc(v_decls_1150_);
lean_inc(v_lDecls_1149_);
lean_inc(v_mvarCounter_1148_);
lean_inc(v_lmvarCounter_1147_);
lean_inc(v_levelAssignDepth_1146_);
lean_inc(v_depth_1145_);
lean_dec(v_mctx_1137_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1168_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1158_; lean_object* v___x_1160_; 
v___x_1158_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4___redArg(v_eAssignment_1153_, v_mvarId_1132_, v_val_1133_);
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 8, v___x_1158_);
v___x_1160_ = v___x_1156_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_depth_1145_);
lean_ctor_set(v_reuseFailAlloc_1167_, 1, v_levelAssignDepth_1146_);
lean_ctor_set(v_reuseFailAlloc_1167_, 2, v_lmvarCounter_1147_);
lean_ctor_set(v_reuseFailAlloc_1167_, 3, v_mvarCounter_1148_);
lean_ctor_set(v_reuseFailAlloc_1167_, 4, v_lDecls_1149_);
lean_ctor_set(v_reuseFailAlloc_1167_, 5, v_decls_1150_);
lean_ctor_set(v_reuseFailAlloc_1167_, 6, v_userNames_1151_);
lean_ctor_set(v_reuseFailAlloc_1167_, 7, v_lAssignment_1152_);
lean_ctor_set(v_reuseFailAlloc_1167_, 8, v___x_1158_);
lean_ctor_set(v_reuseFailAlloc_1167_, 9, v_dAssignment_1154_);
v___x_1160_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
lean_object* v___x_1162_; 
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 0, v___x_1160_);
v___x_1162_ = v___x_1143_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v___x_1160_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v_cache_1138_);
lean_ctor_set(v_reuseFailAlloc_1166_, 2, v_zetaDeltaFVarIds_1139_);
lean_ctor_set(v_reuseFailAlloc_1166_, 3, v_postponed_1140_);
lean_ctor_set(v_reuseFailAlloc_1166_, 4, v_diag_1141_);
v___x_1162_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; 
v___x_1163_ = lean_st_ref_set(v___y_1134_, v___x_1162_);
v___x_1164_ = lean_box(0);
v___x_1165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1165_, 0, v___x_1164_);
return v___x_1165_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2___redArg___boxed(lean_object* v_mvarId_1170_, lean_object* v_val_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
lean_object* v_res_1174_; 
v_res_1174_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2___redArg(v_mvarId_1170_, v_val_1171_, v___y_1172_);
lean_dec(v___y_1172_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__0(lean_object* v_a_1175_, lean_object* v_a_1176_){
_start:
{
if (lean_obj_tag(v_a_1175_) == 0)
{
lean_object* v___x_1177_; 
v___x_1177_ = l_List_reverse___redArg(v_a_1176_);
return v___x_1177_;
}
else
{
lean_object* v_head_1178_; lean_object* v_snd_1179_; lean_object* v_tail_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1203_; 
v_head_1178_ = lean_ctor_get(v_a_1175_, 0);
lean_inc(v_head_1178_);
v_snd_1179_ = lean_ctor_get(v_head_1178_, 1);
lean_inc(v_snd_1179_);
v_tail_1180_ = lean_ctor_get(v_a_1175_, 1);
v_isSharedCheck_1203_ = !lean_is_exclusive(v_a_1175_);
if (v_isSharedCheck_1203_ == 0)
{
lean_object* v_unused_1204_; 
v_unused_1204_ = lean_ctor_get(v_a_1175_, 0);
lean_dec(v_unused_1204_);
v___x_1182_ = v_a_1175_;
v_isShared_1183_ = v_isSharedCheck_1203_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_tail_1180_);
lean_dec(v_a_1175_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1203_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v_fst_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1201_; 
v_fst_1184_ = lean_ctor_get(v_head_1178_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v_head_1178_);
if (v_isSharedCheck_1201_ == 0)
{
lean_object* v_unused_1202_; 
v_unused_1202_ = lean_ctor_get(v_head_1178_, 1);
lean_dec(v_unused_1202_);
v___x_1186_ = v_head_1178_;
v_isShared_1187_ = v_isSharedCheck_1201_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_fst_1184_);
lean_dec(v_head_1178_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1201_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v_width_1188_; lean_object* v_atomNumber_1189_; uint8_t v_synthetic_1190_; lean_object* v___x_1191_; lean_object* v___x_1193_; 
v_width_1188_ = lean_ctor_get(v_snd_1179_, 0);
lean_inc(v_width_1188_);
v_atomNumber_1189_ = lean_ctor_get(v_snd_1179_, 1);
lean_inc(v_atomNumber_1189_);
v_synthetic_1190_ = lean_ctor_get_uint8(v_snd_1179_, sizeof(void*)*2);
lean_dec(v_snd_1179_);
v___x_1191_ = lean_box(v_synthetic_1190_);
if (v_isShared_1187_ == 0)
{
lean_ctor_set(v___x_1186_, 1, v___x_1191_);
v___x_1193_ = v___x_1186_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_fst_1184_);
lean_ctor_set(v_reuseFailAlloc_1200_, 1, v___x_1191_);
v___x_1193_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1197_; 
v___x_1194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1194_, 0, v_width_1188_);
lean_ctor_set(v___x_1194_, 1, v___x_1193_);
v___x_1195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1195_, 0, v_atomNumber_1189_);
lean_ctor_set(v___x_1195_, 1, v___x_1194_);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 1, v_a_1176_);
lean_ctor_set(v___x_1182_, 0, v___x_1195_);
v___x_1197_ = v___x_1182_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v___x_1195_);
lean_ctor_set(v_reuseFailAlloc_1199_, 1, v_a_1176_);
v___x_1197_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
v_a_1175_ = v_tail_1180_;
v_a_1176_ = v___x_1197_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___redArg(lean_object* v_cls_1208_, lean_object* v_msg_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_){
_start:
{
lean_object* v_ref_1215_; lean_object* v___x_1216_; lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1261_; 
v_ref_1215_ = lean_ctor_get(v___y_1212_, 5);
v___x_1216_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__2_spec__2(v_msg_1209_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_);
v_a_1217_ = lean_ctor_get(v___x_1216_, 0);
v_isSharedCheck_1261_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1219_ = v___x_1216_;
v_isShared_1220_ = v_isSharedCheck_1261_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1216_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1261_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1221_; lean_object* v_traceState_1222_; lean_object* v_env_1223_; lean_object* v_nextMacroScope_1224_; lean_object* v_ngen_1225_; lean_object* v_auxDeclNGen_1226_; lean_object* v_cache_1227_; lean_object* v_messages_1228_; lean_object* v_infoState_1229_; lean_object* v_snapshotTasks_1230_; lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1260_; 
v___x_1221_ = lean_st_ref_take(v___y_1213_);
v_traceState_1222_ = lean_ctor_get(v___x_1221_, 4);
v_env_1223_ = lean_ctor_get(v___x_1221_, 0);
v_nextMacroScope_1224_ = lean_ctor_get(v___x_1221_, 1);
v_ngen_1225_ = lean_ctor_get(v___x_1221_, 2);
v_auxDeclNGen_1226_ = lean_ctor_get(v___x_1221_, 3);
v_cache_1227_ = lean_ctor_get(v___x_1221_, 5);
v_messages_1228_ = lean_ctor_get(v___x_1221_, 6);
v_infoState_1229_ = lean_ctor_get(v___x_1221_, 7);
v_snapshotTasks_1230_ = lean_ctor_get(v___x_1221_, 8);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1221_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1232_ = v___x_1221_;
v_isShared_1233_ = v_isSharedCheck_1260_;
goto v_resetjp_1231_;
}
else
{
lean_inc(v_snapshotTasks_1230_);
lean_inc(v_infoState_1229_);
lean_inc(v_messages_1228_);
lean_inc(v_cache_1227_);
lean_inc(v_traceState_1222_);
lean_inc(v_auxDeclNGen_1226_);
lean_inc(v_ngen_1225_);
lean_inc(v_nextMacroScope_1224_);
lean_inc(v_env_1223_);
lean_dec(v___x_1221_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1260_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
uint64_t v_tid_1234_; lean_object* v_traces_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1259_; 
v_tid_1234_ = lean_ctor_get_uint64(v_traceState_1222_, sizeof(void*)*1);
v_traces_1235_ = lean_ctor_get(v_traceState_1222_, 0);
v_isSharedCheck_1259_ = !lean_is_exclusive(v_traceState_1222_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1237_ = v_traceState_1222_;
v_isShared_1238_ = v_isSharedCheck_1259_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_traces_1235_);
lean_dec(v_traceState_1222_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1259_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v___x_1239_; double v___x_1240_; uint8_t v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1249_; 
v___x_1239_ = lean_box(0);
v___x_1240_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9___closed__0);
v___x_1241_ = 0;
v___x_1242_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___redArg___closed__0));
v___x_1243_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1243_, 0, v_cls_1208_);
lean_ctor_set(v___x_1243_, 1, v___x_1239_);
lean_ctor_set(v___x_1243_, 2, v___x_1242_);
lean_ctor_set_float(v___x_1243_, sizeof(void*)*3, v___x_1240_);
lean_ctor_set_float(v___x_1243_, sizeof(void*)*3 + 8, v___x_1240_);
lean_ctor_set_uint8(v___x_1243_, sizeof(void*)*3 + 16, v___x_1241_);
v___x_1244_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___redArg___closed__1));
v___x_1245_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1243_);
lean_ctor_set(v___x_1245_, 1, v_a_1217_);
lean_ctor_set(v___x_1245_, 2, v___x_1244_);
lean_inc(v_ref_1215_);
v___x_1246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1246_, 0, v_ref_1215_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v___x_1247_ = l_Lean_PersistentArray_push___redArg(v_traces_1235_, v___x_1246_);
if (v_isShared_1238_ == 0)
{
lean_ctor_set(v___x_1237_, 0, v___x_1247_);
v___x_1249_ = v___x_1237_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v___x_1247_);
lean_ctor_set_uint64(v_reuseFailAlloc_1258_, sizeof(void*)*1, v_tid_1234_);
v___x_1249_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
lean_object* v___x_1251_; 
if (v_isShared_1233_ == 0)
{
lean_ctor_set(v___x_1232_, 4, v___x_1249_);
v___x_1251_ = v___x_1232_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v_env_1223_);
lean_ctor_set(v_reuseFailAlloc_1257_, 1, v_nextMacroScope_1224_);
lean_ctor_set(v_reuseFailAlloc_1257_, 2, v_ngen_1225_);
lean_ctor_set(v_reuseFailAlloc_1257_, 3, v_auxDeclNGen_1226_);
lean_ctor_set(v_reuseFailAlloc_1257_, 4, v___x_1249_);
lean_ctor_set(v_reuseFailAlloc_1257_, 5, v_cache_1227_);
lean_ctor_set(v_reuseFailAlloc_1257_, 6, v_messages_1228_);
lean_ctor_set(v_reuseFailAlloc_1257_, 7, v_infoState_1229_);
lean_ctor_set(v_reuseFailAlloc_1257_, 8, v_snapshotTasks_1230_);
v___x_1251_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1255_; 
v___x_1252_ = lean_st_ref_set(v___y_1213_, v___x_1251_);
v___x_1253_ = lean_box(0);
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 0, v___x_1253_);
v___x_1255_ = v___x_1219_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v___x_1253_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___redArg___boxed(lean_object* v_cls_1262_, lean_object* v_msg_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___redArg(v_cls_1262_, v_msg_1263_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_);
lean_dec(v___y_1267_);
lean_dec_ref(v___y_1266_);
lean_dec(v___y_1265_);
lean_dec_ref(v___y_1264_);
return v_res_1269_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1270_ = lean_box(0);
v___x_1271_ = lean_unsigned_to_nat(16u);
v___x_1272_ = lean_mk_array(v___x_1271_, v___x_1270_);
return v___x_1272_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1273_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__0, &l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__0);
v___x_1274_ = lean_unsigned_to_nat(0u);
v___x_1275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
lean_ctor_set(v___x_1275_, 1, v___x_1273_);
return v___x_1275_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1280_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__4));
v___x_1281_ = l_Lean_stringToMessageData(v___x_1280_);
return v___x_1281_;
}
}
static double _init_l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__6(void){
_start:
{
lean_object* v___x_1282_; double v___x_1283_; 
v___x_1282_ = lean_unsigned_to_nat(1000000000u);
v___x_1283_ = lean_float_of_nat(v___x_1282_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1(lean_object* v_unsatProver_1284_, lean_object* v_g_1285_, lean_object* v_cls_1286_, uint8_t v___x_1287_, lean_object* v___x_1288_, lean_object* v___f_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_){
_start:
{
lean_object* v___y_1300_; lean_object* v___y_1301_; lean_object* v___y_1302_; lean_object* v___y_1303_; lean_object* v___y_1304_; lean_object* v___y_1305_; lean_object* v___y_1306_; lean_object* v___y_1307_; lean_object* v___y_1308_; lean_object* v___y_1309_; lean_object* v___y_1370_; lean_object* v___y_1371_; lean_object* v___y_1372_; lean_object* v___y_1373_; lean_object* v___y_1374_; lean_object* v___y_1375_; lean_object* v___y_1376_; lean_object* v___y_1377_; lean_object* v___y_1378_; lean_object* v_options_1389_; lean_object* v_inheritedTraceOptions_1390_; uint8_t v_hasTrace_1391_; lean_object* v___y_1393_; 
v_options_1389_ = lean_ctor_get(v___y_1296_, 2);
v_inheritedTraceOptions_1390_ = lean_ctor_get(v___y_1296_, 13);
v_hasTrace_1391_ = lean_ctor_get_uint8(v_options_1389_, sizeof(void*)*1);
if (v_hasTrace_1391_ == 0)
{
lean_object* v___x_1422_; 
lean_dec_ref(v___f_1289_);
lean_dec_ref(v___x_1288_);
lean_inc(v_g_1285_);
v___x_1422_ = l_Lean_Meta_Tactic_BVDecide_reflectBV(v_g_1285_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_);
v___y_1393_ = v___x_1422_;
goto v___jp_1392_;
}
else
{
lean_object* v___x_1423_; lean_object* v___x_1424_; uint8_t v___x_1425_; lean_object* v___y_1427_; lean_object* v___y_1428_; lean_object* v_a_1429_; lean_object* v___y_1442_; lean_object* v___y_1443_; lean_object* v_a_1444_; 
v___x_1423_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__3));
lean_inc(v_cls_1286_);
v___x_1424_ = l_Lean_Name_append(v___x_1423_, v_cls_1286_);
v___x_1425_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1390_, v_options_1389_, v___x_1424_);
lean_dec(v___x_1424_);
if (v___x_1425_ == 0)
{
lean_object* v___x_1494_; uint8_t v___x_1495_; 
v___x_1494_ = l_Lean_trace_profiler;
v___x_1495_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__8(v_options_1389_, v___x_1494_);
if (v___x_1495_ == 0)
{
lean_object* v___x_1496_; 
lean_dec_ref(v___f_1289_);
lean_dec_ref(v___x_1288_);
lean_inc(v_g_1285_);
v___x_1496_ = l_Lean_Meta_Tactic_BVDecide_reflectBV(v_g_1285_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_);
v___y_1393_ = v___x_1496_;
goto v___jp_1392_;
}
else
{
goto v___jp_1453_;
}
}
else
{
goto v___jp_1453_;
}
v___jp_1426_:
{
lean_object* v___x_1430_; double v___x_1431_; double v___x_1432_; double v___x_1433_; double v___x_1434_; double v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1430_ = lean_io_mono_nanos_now();
v___x_1431_ = lean_float_of_nat(v___y_1427_);
v___x_1432_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__6, &l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__6);
v___x_1433_ = lean_float_div(v___x_1431_, v___x_1432_);
v___x_1434_ = lean_float_of_nat(v___x_1430_);
v___x_1435_ = lean_float_div(v___x_1434_, v___x_1432_);
v___x_1436_ = lean_box_float(v___x_1433_);
v___x_1437_ = lean_box_float(v___x_1435_);
v___x_1438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1436_);
lean_ctor_set(v___x_1438_, 1, v___x_1437_);
v___x_1439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1439_, 0, v_a_1429_);
lean_ctor_set(v___x_1439_, 1, v___x_1438_);
lean_inc(v_cls_1286_);
v___x_1440_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9(v_cls_1286_, v___x_1287_, v___x_1288_, v_options_1389_, v___x_1425_, v___y_1428_, v___f_1289_, v___x_1439_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_);
v___y_1393_ = v___x_1440_;
goto v___jp_1392_;
}
v___jp_1441_:
{
lean_object* v___x_1445_; double v___x_1446_; double v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1445_ = lean_io_get_num_heartbeats();
v___x_1446_ = lean_float_of_nat(v___y_1443_);
v___x_1447_ = lean_float_of_nat(v___x_1445_);
v___x_1448_ = lean_box_float(v___x_1446_);
v___x_1449_ = lean_box_float(v___x_1447_);
v___x_1450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1450_, 0, v___x_1448_);
lean_ctor_set(v___x_1450_, 1, v___x_1449_);
v___x_1451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1451_, 0, v_a_1444_);
lean_ctor_set(v___x_1451_, 1, v___x_1450_);
lean_inc(v_cls_1286_);
v___x_1452_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9(v_cls_1286_, v___x_1287_, v___x_1288_, v_options_1389_, v___x_1425_, v___y_1442_, v___f_1289_, v___x_1451_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_);
v___y_1393_ = v___x_1452_;
goto v___jp_1392_;
}
v___jp_1453_:
{
lean_object* v___x_1454_; lean_object* v_a_1455_; lean_object* v___x_1456_; uint8_t v___x_1457_; 
v___x_1454_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__7___redArg(v___y_1297_);
v_a_1455_ = lean_ctor_get(v___x_1454_, 0);
lean_inc(v_a_1455_);
lean_dec_ref(v___x_1454_);
v___x_1456_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1457_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__8(v_options_1389_, v___x_1456_);
if (v___x_1457_ == 0)
{
lean_object* v___x_1458_; lean_object* v___x_1459_; 
v___x_1458_ = lean_io_mono_nanos_now();
lean_inc(v_g_1285_);
v___x_1459_ = l_Lean_Meta_Tactic_BVDecide_reflectBV(v_g_1285_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_);
if (lean_obj_tag(v___x_1459_) == 0)
{
lean_object* v_a_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1467_; 
v_a_1460_ = lean_ctor_get(v___x_1459_, 0);
v_isSharedCheck_1467_ = !lean_is_exclusive(v___x_1459_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1462_ = v___x_1459_;
v_isShared_1463_ = v_isSharedCheck_1467_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_a_1460_);
lean_dec(v___x_1459_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1467_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v___x_1465_; 
if (v_isShared_1463_ == 0)
{
lean_ctor_set_tag(v___x_1462_, 1);
v___x_1465_ = v___x_1462_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v_a_1460_);
v___x_1465_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
v___y_1427_ = v___x_1458_;
v___y_1428_ = v_a_1455_;
v_a_1429_ = v___x_1465_;
goto v___jp_1426_;
}
}
}
else
{
lean_object* v_a_1468_; lean_object* v___x_1470_; uint8_t v_isShared_1471_; uint8_t v_isSharedCheck_1475_; 
v_a_1468_ = lean_ctor_get(v___x_1459_, 0);
v_isSharedCheck_1475_ = !lean_is_exclusive(v___x_1459_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1470_ = v___x_1459_;
v_isShared_1471_ = v_isSharedCheck_1475_;
goto v_resetjp_1469_;
}
else
{
lean_inc(v_a_1468_);
lean_dec(v___x_1459_);
v___x_1470_ = lean_box(0);
v_isShared_1471_ = v_isSharedCheck_1475_;
goto v_resetjp_1469_;
}
v_resetjp_1469_:
{
lean_object* v___x_1473_; 
if (v_isShared_1471_ == 0)
{
lean_ctor_set_tag(v___x_1470_, 0);
v___x_1473_ = v___x_1470_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v_a_1468_);
v___x_1473_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
v___y_1427_ = v___x_1458_;
v___y_1428_ = v_a_1455_;
v_a_1429_ = v___x_1473_;
goto v___jp_1426_;
}
}
}
}
else
{
lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___x_1476_ = lean_io_get_num_heartbeats();
lean_inc(v_g_1285_);
v___x_1477_ = l_Lean_Meta_Tactic_BVDecide_reflectBV(v_g_1285_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_);
if (lean_obj_tag(v___x_1477_) == 0)
{
lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1485_; 
v_a_1478_ = lean_ctor_get(v___x_1477_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1480_ = v___x_1477_;
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_a_1478_);
lean_dec(v___x_1477_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1483_; 
if (v_isShared_1481_ == 0)
{
lean_ctor_set_tag(v___x_1480_, 1);
v___x_1483_ = v___x_1480_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_a_1478_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
v___y_1442_ = v_a_1455_;
v___y_1443_ = v___x_1476_;
v_a_1444_ = v___x_1483_;
goto v___jp_1441_;
}
}
}
else
{
lean_object* v_a_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1493_; 
v_a_1486_ = lean_ctor_get(v___x_1477_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1488_ = v___x_1477_;
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_a_1486_);
lean_dec(v___x_1477_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1491_; 
if (v_isShared_1489_ == 0)
{
lean_ctor_set_tag(v___x_1488_, 0);
v___x_1491_ = v___x_1488_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_a_1486_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
v___y_1442_ = v_a_1455_;
v___y_1443_ = v___x_1476_;
v_a_1444_ = v___x_1491_;
goto v___jp_1441_;
}
}
}
}
}
}
v___jp_1299_:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1310_ = lean_box(0);
v___x_1311_ = l_List_mapTR_loop___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__0(v___y_1309_, v___x_1310_);
v___x_1312_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__1, &l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__1);
v___x_1313_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__2___redArg(v___x_1311_, v___x_1312_);
lean_dec(v___x_1311_);
lean_inc(v___y_1301_);
lean_inc_ref(v___y_1308_);
lean_inc(v___y_1300_);
lean_inc_ref(v___y_1307_);
lean_inc_ref(v___y_1305_);
lean_inc(v_g_1285_);
v___x_1314_ = lean_apply_8(v_unsatProver_1284_, v_g_1285_, v___y_1305_, v___x_1313_, v___y_1307_, v___y_1300_, v___y_1308_, v___y_1301_, lean_box(0));
if (lean_obj_tag(v___x_1314_) == 0)
{
lean_object* v_a_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1360_; 
v_a_1315_ = lean_ctor_get(v___x_1314_, 0);
v_isSharedCheck_1360_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1317_ = v___x_1314_;
v_isShared_1318_ = v_isSharedCheck_1360_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_a_1315_);
lean_dec(v___x_1314_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1360_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
if (lean_obj_tag(v_a_1315_) == 0)
{
lean_object* v_a_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1329_; 
lean_dec_ref(v___y_1305_);
lean_dec(v_g_1285_);
v_a_1319_ = lean_ctor_get(v_a_1315_, 0);
v_isSharedCheck_1329_ = !lean_is_exclusive(v_a_1315_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1321_ = v_a_1315_;
v_isShared_1322_ = v_isSharedCheck_1329_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_a_1319_);
lean_dec(v_a_1315_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1329_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___x_1324_; 
if (v_isShared_1322_ == 0)
{
v___x_1324_ = v___x_1321_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v_a_1319_);
v___x_1324_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
lean_object* v___x_1326_; 
if (v_isShared_1318_ == 0)
{
lean_ctor_set(v___x_1317_, 0, v___x_1324_);
v___x_1326_ = v___x_1317_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v___x_1324_);
v___x_1326_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
return v___x_1326_;
}
}
}
}
else
{
lean_object* v_a_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1359_; 
lean_del_object(v___x_1317_);
v_a_1330_ = lean_ctor_get(v_a_1315_, 0);
v_isSharedCheck_1359_ = !lean_is_exclusive(v_a_1315_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1332_ = v_a_1315_;
v_isShared_1333_ = v_isSharedCheck_1359_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_a_1330_);
lean_dec(v_a_1315_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1359_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v_proof_1334_; lean_object* v_cert_1335_; lean_object* v_proveFalse_1336_; lean_object* v___x_1337_; 
v_proof_1334_ = lean_ctor_get(v_a_1330_, 0);
lean_inc_ref(v_proof_1334_);
v_cert_1335_ = lean_ctor_get(v_a_1330_, 1);
lean_inc(v_cert_1335_);
lean_dec(v_a_1330_);
v_proveFalse_1336_ = lean_ctor_get(v___y_1305_, 1);
lean_inc_ref(v_proveFalse_1336_);
lean_dec_ref(v___y_1305_);
lean_inc(v___y_1301_);
lean_inc_ref(v___y_1308_);
lean_inc(v___y_1300_);
lean_inc_ref(v___y_1307_);
lean_inc(v___y_1302_);
lean_inc_ref(v___y_1303_);
lean_inc(v___y_1306_);
lean_inc_ref(v___y_1304_);
v___x_1337_ = lean_apply_10(v_proveFalse_1336_, v_proof_1334_, v___y_1304_, v___y_1306_, v___y_1303_, v___y_1302_, v___y_1307_, v___y_1300_, v___y_1308_, v___y_1301_, lean_box(0));
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_object* v_a_1338_; lean_object* v___x_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1349_; 
v_a_1338_ = lean_ctor_get(v___x_1337_, 0);
lean_inc(v_a_1338_);
lean_dec_ref_known(v___x_1337_, 1);
v___x_1339_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2___redArg(v_g_1285_, v_a_1338_, v___y_1300_);
v_isSharedCheck_1349_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1349_ == 0)
{
lean_object* v_unused_1350_; 
v_unused_1350_ = lean_ctor_get(v___x_1339_, 0);
lean_dec(v_unused_1350_);
v___x_1341_ = v___x_1339_;
v_isShared_1342_ = v_isSharedCheck_1349_;
goto v_resetjp_1340_;
}
else
{
lean_dec(v___x_1339_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1349_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v___x_1344_; 
if (v_isShared_1333_ == 0)
{
lean_ctor_set(v___x_1332_, 0, v_cert_1335_);
v___x_1344_ = v___x_1332_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_cert_1335_);
v___x_1344_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
lean_object* v___x_1346_; 
if (v_isShared_1342_ == 0)
{
lean_ctor_set(v___x_1341_, 0, v___x_1344_);
v___x_1346_ = v___x_1341_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v___x_1344_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
return v___x_1346_;
}
}
}
}
else
{
lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
lean_dec(v_cert_1335_);
lean_del_object(v___x_1332_);
lean_dec(v_g_1285_);
v_a_1351_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1353_ = v___x_1337_;
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_dec(v___x_1337_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1351_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1368_; 
lean_dec_ref(v___y_1305_);
lean_dec(v_g_1285_);
v_a_1361_ = lean_ctor_get(v___x_1314_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1363_ = v___x_1314_;
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_a_1361_);
lean_dec(v___x_1314_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1366_; 
if (v_isShared_1364_ == 0)
{
v___x_1366_ = v___x_1363_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v_a_1361_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
return v___x_1366_;
}
}
}
}
v___jp_1369_:
{
lean_object* v___x_1379_; lean_object* v_atoms_1380_; lean_object* v_buckets_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; uint8_t v___x_1385_; 
v___x_1379_ = lean_st_ref_get(v___y_1372_);
v_atoms_1380_ = lean_ctor_get(v___x_1379_, 0);
lean_inc_ref(v_atoms_1380_);
lean_dec(v___x_1379_);
v_buckets_1381_ = lean_ctor_get(v_atoms_1380_, 1);
lean_inc_ref(v_buckets_1381_);
lean_dec_ref(v_atoms_1380_);
v___x_1382_ = lean_box(0);
v___x_1383_ = lean_array_get_size(v_buckets_1381_);
v___x_1384_ = lean_unsigned_to_nat(0u);
v___x_1385_ = lean_nat_dec_lt(v___x_1384_, v___x_1383_);
if (v___x_1385_ == 0)
{
lean_dec_ref(v_buckets_1381_);
v___y_1300_ = v___y_1376_;
v___y_1301_ = v___y_1378_;
v___y_1302_ = v___y_1374_;
v___y_1303_ = v___y_1373_;
v___y_1304_ = v___y_1371_;
v___y_1305_ = v___y_1370_;
v___y_1306_ = v___y_1372_;
v___y_1307_ = v___y_1375_;
v___y_1308_ = v___y_1377_;
v___y_1309_ = v___x_1382_;
goto v___jp_1299_;
}
else
{
size_t v___x_1386_; size_t v___x_1387_; lean_object* v___x_1388_; 
v___x_1386_ = lean_usize_of_nat(v___x_1383_);
v___x_1387_ = ((size_t)0ULL);
v___x_1388_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__4(v_buckets_1381_, v___x_1386_, v___x_1387_, v___x_1382_);
lean_dec_ref(v_buckets_1381_);
v___y_1300_ = v___y_1376_;
v___y_1301_ = v___y_1378_;
v___y_1302_ = v___y_1374_;
v___y_1303_ = v___y_1373_;
v___y_1304_ = v___y_1371_;
v___y_1305_ = v___y_1370_;
v___y_1306_ = v___y_1372_;
v___y_1307_ = v___y_1375_;
v___y_1308_ = v___y_1377_;
v___y_1309_ = v___x_1388_;
goto v___jp_1299_;
}
}
v___jp_1392_:
{
if (lean_obj_tag(v___y_1393_) == 0)
{
if (v_hasTrace_1391_ == 0)
{
lean_object* v_a_1394_; 
lean_dec(v_cls_1286_);
v_a_1394_ = lean_ctor_get(v___y_1393_, 0);
lean_inc(v_a_1394_);
lean_dec_ref_known(v___y_1393_, 1);
v___y_1370_ = v_a_1394_;
v___y_1371_ = v___y_1290_;
v___y_1372_ = v___y_1291_;
v___y_1373_ = v___y_1292_;
v___y_1374_ = v___y_1293_;
v___y_1375_ = v___y_1294_;
v___y_1376_ = v___y_1295_;
v___y_1377_ = v___y_1296_;
v___y_1378_ = v___y_1297_;
goto v___jp_1369_;
}
else
{
lean_object* v_a_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; uint8_t v___x_1398_; 
v_a_1395_ = lean_ctor_get(v___y_1393_, 0);
lean_inc(v_a_1395_);
lean_dec_ref_known(v___y_1393_, 1);
v___x_1396_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__3));
lean_inc(v_cls_1286_);
v___x_1397_ = l_Lean_Name_append(v___x_1396_, v_cls_1286_);
v___x_1398_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1390_, v_options_1389_, v___x_1397_);
lean_dec(v___x_1397_);
if (v___x_1398_ == 0)
{
lean_dec(v_cls_1286_);
v___y_1370_ = v_a_1395_;
v___y_1371_ = v___y_1290_;
v___y_1372_ = v___y_1291_;
v___y_1373_ = v___y_1292_;
v___y_1374_ = v___y_1293_;
v___y_1375_ = v___y_1294_;
v___y_1376_ = v___y_1295_;
v___y_1377_ = v___y_1296_;
v___y_1378_ = v___y_1297_;
goto v___jp_1369_;
}
else
{
lean_object* v_bvExpr_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v_bvExpr_1399_ = lean_ctor_get(v_a_1395_, 0);
v___x_1400_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__5, &l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___closed__5);
lean_inc_ref(v_bvExpr_1399_);
v___x_1401_ = l_Std_Tactic_BVDecide_BoolExpr_toString___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__5(v_bvExpr_1399_);
v___x_1402_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1401_);
v___x_1403_ = l_Lean_MessageData_ofFormat(v___x_1402_);
v___x_1404_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1400_);
lean_ctor_set(v___x_1404_, 1, v___x_1403_);
v___x_1405_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___redArg(v_cls_1286_, v___x_1404_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_);
if (lean_obj_tag(v___x_1405_) == 0)
{
lean_dec_ref_known(v___x_1405_, 1);
v___y_1370_ = v_a_1395_;
v___y_1371_ = v___y_1290_;
v___y_1372_ = v___y_1291_;
v___y_1373_ = v___y_1292_;
v___y_1374_ = v___y_1293_;
v___y_1375_ = v___y_1294_;
v___y_1376_ = v___y_1295_;
v___y_1377_ = v___y_1296_;
v___y_1378_ = v___y_1297_;
goto v___jp_1369_;
}
else
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1413_; 
lean_dec(v_a_1395_);
lean_dec(v_g_1285_);
lean_dec_ref(v_unsatProver_1284_);
v_a_1406_ = lean_ctor_get(v___x_1405_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1408_ = v___x_1405_;
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1405_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
}
}
else
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
lean_dec(v_cls_1286_);
lean_dec(v_g_1285_);
lean_dec_ref(v_unsatProver_1284_);
v_a_1414_ = lean_ctor_get(v___y_1393_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___y_1393_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1416_ = v___y_1393_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___y_1393_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_a_1414_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___boxed(lean_object* v_unsatProver_1497_, lean_object* v_g_1498_, lean_object* v_cls_1499_, lean_object* v___x_1500_, lean_object* v___x_1501_, lean_object* v___f_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
uint8_t v___x_41453__boxed_1512_; lean_object* v_res_1513_; 
v___x_41453__boxed_1512_ = lean_unbox(v___x_1500_);
v_res_1513_ = l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1(v_unsatProver_1497_, v_g_1498_, v_cls_1499_, v___x_41453__boxed_1512_, v___x_1501_, v___f_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_);
lean_dec(v___y_1510_);
lean_dec_ref(v___y_1509_);
lean_dec(v___y_1508_);
lean_dec_ref(v___y_1507_);
lean_dec(v___y_1506_);
lean_dec_ref(v___y_1505_);
lean_dec(v___y_1504_);
lean_dec_ref(v___y_1503_);
return v_res_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg(lean_object* v_g_1522_, lean_object* v_unsatProver_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_){
_start:
{
lean_object* v___f_1533_; lean_object* v_cls_1534_; uint8_t v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___f_1538_; lean_object* v___x_1539_; 
v___f_1533_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__0));
v_cls_1534_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___closed__4));
v___x_1535_ = 1;
v___x_1536_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___redArg___closed__0));
v___x_1537_ = lean_box(v___x_1535_);
lean_inc(v_g_1522_);
v___f_1538_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___lam__1___boxed), 15, 6);
lean_closure_set(v___f_1538_, 0, v_unsatProver_1523_);
lean_closure_set(v___f_1538_, 1, v_g_1522_);
lean_closure_set(v___f_1538_, 2, v_cls_1534_);
lean_closure_set(v___f_1538_, 3, v___x_1537_);
lean_closure_set(v___f_1538_, 4, v___x_1536_);
lean_closure_set(v___f_1538_, 5, v___f_1533_);
v___x_1539_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_reflectBV_spec__3___redArg(v_g_1522_, v___f_1538_, v_a_1524_, v_a_1525_, v_a_1526_, v_a_1527_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_);
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg___boxed(lean_object* v_g_1540_, lean_object* v_unsatProver_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg(v_g_1540_, v_unsatProver_1541_, v_a_1542_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_, v_a_1547_, v_a_1548_, v_a_1549_);
lean_dec(v_a_1549_);
lean_dec_ref(v_a_1548_);
lean_dec(v_a_1547_);
lean_dec_ref(v_a_1546_);
lean_dec(v_a_1545_);
lean_dec_ref(v_a_1544_);
lean_dec(v_a_1543_);
lean_dec_ref(v_a_1542_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection(lean_object* v_00_u03b1_1552_, lean_object* v_g_1553_, lean_object* v_unsatProver_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_){
_start:
{
lean_object* v___x_1564_; 
v___x_1564_ = l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___redArg(v_g_1553_, v_unsatProver_1554_, v_a_1555_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_);
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection___boxed(lean_object* v_00_u03b1_1565_, lean_object* v_g_1566_, lean_object* v_unsatProver_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_){
_start:
{
lean_object* v_res_1577_; 
v_res_1577_ = l_Lean_Meta_Tactic_BVDecide_closeWithBVReflection(v_00_u03b1_1565_, v_g_1566_, v_unsatProver_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_, v_a_1574_, v_a_1575_);
lean_dec(v_a_1575_);
lean_dec_ref(v_a_1574_);
lean_dec(v_a_1573_);
lean_dec_ref(v_a_1572_);
lean_dec(v_a_1571_);
lean_dec_ref(v_a_1570_);
lean_dec(v_a_1569_);
lean_dec_ref(v_a_1568_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2(lean_object* v_mvarId_1578_, lean_object* v_val_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_){
_start:
{
lean_object* v___x_1589_; 
v___x_1589_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2___redArg(v_mvarId_1578_, v_val_1579_, v___y_1585_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2___boxed(lean_object* v_mvarId_1590_, lean_object* v_val_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_){
_start:
{
lean_object* v_res_1601_; 
v_res_1601_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2(v_mvarId_1590_, v_val_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
lean_dec(v___y_1599_);
lean_dec_ref(v___y_1598_);
lean_dec(v___y_1597_);
lean_dec_ref(v___y_1596_);
lean_dec(v___y_1595_);
lean_dec_ref(v___y_1594_);
lean_dec(v___y_1593_);
lean_dec_ref(v___y_1592_);
return v_res_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6(lean_object* v_cls_1602_, lean_object* v_msg_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_){
_start:
{
lean_object* v___x_1613_; 
v___x_1613_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___redArg(v_cls_1602_, v_msg_1603_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6___boxed(lean_object* v_cls_1614_, lean_object* v_msg_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_){
_start:
{
lean_object* v_res_1625_; 
v_res_1625_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__6(v_cls_1614_, v_msg_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_);
lean_dec(v___y_1623_);
lean_dec_ref(v___y_1622_);
lean_dec(v___y_1621_);
lean_dec_ref(v___y_1620_);
lean_dec(v___y_1619_);
lean_dec_ref(v___y_1618_);
lean_dec(v___y_1617_);
lean_dec_ref(v___y_1616_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__13(lean_object* v_00_u03b1_1626_, lean_object* v_x_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
lean_object* v___x_1637_; 
v___x_1637_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__13___redArg(v_x_1627_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__13___boxed(lean_object* v_00_u03b1_1638_, lean_object* v_x_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__13(v_00_u03b1_1638_, v_x_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec(v___y_1641_);
lean_dec_ref(v___y_1640_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1(lean_object* v_00_u03b2_1650_, lean_object* v_m_1651_, lean_object* v_a_1652_, lean_object* v_b_1653_){
_start:
{
lean_object* v___x_1654_; 
v___x_1654_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1___redArg(v_m_1651_, v_a_1652_, v_b_1653_);
return v___x_1654_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__2(lean_object* v_as_1655_, lean_object* v_as_x27_1656_, lean_object* v_b_1657_, lean_object* v_a_1658_){
_start:
{
lean_object* v___x_1659_; 
v___x_1659_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__2___redArg(v_as_x27_1656_, v_b_1657_);
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__2___boxed(lean_object* v_as_1660_, lean_object* v_as_x27_1661_, lean_object* v_b_1662_, lean_object* v_a_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__2(v_as_1660_, v_as_x27_1661_, v_b_1662_, v_a_1663_);
lean_dec(v_as_x27_1661_);
lean_dec(v_as_1660_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4(lean_object* v_00_u03b2_1665_, lean_object* v_x_1666_, lean_object* v_x_1667_, lean_object* v_x_1668_){
_start:
{
lean_object* v___x_1669_; 
v___x_1669_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4___redArg(v_x_1666_, v_x_1667_, v_x_1668_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12(lean_object* v_oldTraces_1670_, lean_object* v_data_1671_, lean_object* v_ref_1672_, lean_object* v_msg_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_){
_start:
{
lean_object* v___x_1683_; 
v___x_1683_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12___redArg(v_oldTraces_1670_, v_data_1671_, v_ref_1672_, v_msg_1673_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12___boxed(lean_object* v_oldTraces_1684_, lean_object* v_data_1685_, lean_object* v_ref_1686_, lean_object* v_msg_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_){
_start:
{
lean_object* v_res_1697_; 
v_res_1697_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__9_spec__12(v_oldTraces_1684_, v_data_1685_, v_ref_1686_, v_msg_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_);
lean_dec(v___y_1695_);
lean_dec_ref(v___y_1694_);
lean_dec(v___y_1693_);
lean_dec_ref(v___y_1692_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
return v_res_1697_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__4(lean_object* v_00_u03b2_1698_, lean_object* v_a_1699_, lean_object* v_x_1700_){
_start:
{
uint8_t v___x_1701_; 
v___x_1701_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__4___redArg(v_a_1699_, v_x_1700_);
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__4___boxed(lean_object* v_00_u03b2_1702_, lean_object* v_a_1703_, lean_object* v_x_1704_){
_start:
{
uint8_t v_res_1705_; lean_object* v_r_1706_; 
v_res_1705_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__4(v_00_u03b2_1702_, v_a_1703_, v_x_1704_);
lean_dec(v_x_1704_);
lean_dec(v_a_1703_);
v_r_1706_ = lean_box(v_res_1705_);
return v_r_1706_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5(lean_object* v_00_u03b2_1707_, lean_object* v_data_1708_){
_start:
{
lean_object* v___x_1709_; 
v___x_1709_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5___redArg(v_data_1708_);
return v___x_1709_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__6(lean_object* v_00_u03b2_1710_, lean_object* v_a_1711_, lean_object* v_b_1712_, lean_object* v_x_1713_){
_start:
{
lean_object* v___x_1714_; 
v___x_1714_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__6___redArg(v_a_1711_, v_b_1712_, v_x_1713_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10(lean_object* v_00_u03b2_1715_, lean_object* v_x_1716_, size_t v_x_1717_, size_t v_x_1718_, lean_object* v_x_1719_, lean_object* v_x_1720_){
_start:
{
lean_object* v___x_1721_; 
v___x_1721_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10___redArg(v_x_1716_, v_x_1717_, v_x_1718_, v_x_1719_, v_x_1720_);
return v___x_1721_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10___boxed(lean_object* v_00_u03b2_1722_, lean_object* v_x_1723_, lean_object* v_x_1724_, lean_object* v_x_1725_, lean_object* v_x_1726_, lean_object* v_x_1727_){
_start:
{
size_t v_x_42084__boxed_1728_; size_t v_x_42085__boxed_1729_; lean_object* v_res_1730_; 
v_x_42084__boxed_1728_ = lean_unbox_usize(v_x_1724_);
lean_dec(v_x_1724_);
v_x_42085__boxed_1729_ = lean_unbox_usize(v_x_1725_);
lean_dec(v_x_1725_);
v_res_1730_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10(v_00_u03b2_1722_, v_x_1723_, v_x_42084__boxed_1728_, v_x_42085__boxed_1729_, v_x_1726_, v_x_1727_);
return v_res_1730_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5_spec__15(lean_object* v_00_u03b2_1731_, lean_object* v_i_1732_, lean_object* v_source_1733_, lean_object* v_target_1734_){
_start:
{
lean_object* v___x_1735_; 
v___x_1735_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5_spec__15___redArg(v_i_1732_, v_source_1733_, v_target_1734_);
return v___x_1735_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__20(lean_object* v_00_u03b2_1736_, lean_object* v_n_1737_, lean_object* v_k_1738_, lean_object* v_v_1739_){
_start:
{
lean_object* v___x_1740_; 
v___x_1740_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__20___redArg(v_n_1737_, v_k_1738_, v_v_1739_);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__21(lean_object* v_00_u03b2_1741_, size_t v_depth_1742_, lean_object* v_keys_1743_, lean_object* v_vals_1744_, lean_object* v_heq_1745_, lean_object* v_i_1746_, lean_object* v_entries_1747_){
_start:
{
lean_object* v___x_1748_; 
v___x_1748_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__21___redArg(v_depth_1742_, v_keys_1743_, v_vals_1744_, v_i_1746_, v_entries_1747_);
return v___x_1748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__21___boxed(lean_object* v_00_u03b2_1749_, lean_object* v_depth_1750_, lean_object* v_keys_1751_, lean_object* v_vals_1752_, lean_object* v_heq_1753_, lean_object* v_i_1754_, lean_object* v_entries_1755_){
_start:
{
size_t v_depth_boxed_1756_; lean_object* v_res_1757_; 
v_depth_boxed_1756_ = lean_unbox_usize(v_depth_1750_);
lean_dec(v_depth_1750_);
v_res_1757_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__21(v_00_u03b2_1749_, v_depth_boxed_1756_, v_keys_1751_, v_vals_1752_, v_heq_1753_, v_i_1754_, v_entries_1755_);
lean_dec_ref(v_vals_1752_);
lean_dec_ref(v_keys_1751_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5_spec__15_spec__19(lean_object* v_00_u03b2_1758_, lean_object* v_x_1759_, lean_object* v_x_1760_){
_start:
{
lean_object* v___x_1761_; 
v___x_1761_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__1_spec__1_spec__5_spec__15_spec__19___redArg(v_x_1759_, v_x_1760_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__20_spec__23(lean_object* v_00_u03b2_1762_, lean_object* v_x_1763_, lean_object* v_x_1764_, lean_object* v_x_1765_, lean_object* v_x_1766_){
_start:
{
lean_object* v___x_1767_; 
v___x_1767_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_closeWithBVReflection_spec__2_spec__4_spec__10_spec__20_spec__23___redArg(v_x_1763_, v_x_1764_, v_x_1765_, v_x_1766_);
return v___x_1767_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Counterexample(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_LRAT_Cert(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Prover_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Counterexample(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_LRAT_Cert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Prover_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Counterexample(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_LRAT_Cert(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Prover_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Reflect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Counterexample(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_LRAT_Cert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Prover_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Prover_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Prover_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
