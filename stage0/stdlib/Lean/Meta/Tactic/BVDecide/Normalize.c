// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Normalize
// Imports: public import Lean.Elab.Tactic.FalseOrByContra public import Lean.Meta.Tactic.BVDecide.Normalize.Basic public import Lean.Meta.Tactic.BVDecide.Normalize.ApplyControlFlow public import Lean.Meta.Tactic.BVDecide.Normalize.Simproc public import Lean.Meta.Tactic.BVDecide.Normalize.Rewrite public import Lean.Meta.Tactic.BVDecide.Normalize.AndFlatten public import Lean.Meta.Tactic.BVDecide.Normalize.EmbeddedConstraint public import Lean.Meta.Tactic.BVDecide.Normalize.AC public import Lean.Meta.Tactic.BVDecide.Normalize.Structures public import Lean.Meta.Tactic.BVDecide.Normalize.IntToBitVec public import Lean.Meta.Tactic.BVDecide.Normalize.Enums public import Lean.Meta.Tactic.BVDecide.Normalize.TypeAnalysis public import Lean.Meta.Tactic.BVDecide.Normalize.ShortCircuit
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_embeddedConstraintPass;
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_andFlatteningPass;
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass;
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass;
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass;
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass;
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_enumsPass;
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass;
extern lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_typeAnalysisPass;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_falseOrByContra(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Running pass: "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Preprocessing goal"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___boxed(lean_object**);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__1;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__5;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__6;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__8(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg___closed__0_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__1_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__2_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Running preprocessing pipeline on:\n"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__6;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Meta_Tactic_BVDecide_Normalize_embeddedConstraintPass;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = l_Lean_Meta_Tactic_BVDecide_Normalize_andFlatteningPass;
v___x_6_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v_passPipeline_9_; 
v___x_7_ = lean_box(0);
v___x_8_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass;
v_passPipeline_9_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_passPipeline_9_, 0, v___x_8_);
lean_ctor_set(v_passPipeline_9_, 1, v___x_7_);
return v_passPipeline_9_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__3(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_10_ = lean_box(0);
v___x_11_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass;
v___x_12_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_12_, 0, v___x_11_);
lean_ctor_set(v___x_12_, 1, v___x_10_);
return v___x_12_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__4(void){
_start:
{
lean_object* v___x_13_; lean_object* v_passPipeline_14_; lean_object* v___x_15_; 
v___x_13_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__3, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__3);
v_passPipeline_14_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2);
v___x_15_ = l_List_appendTR___redArg(v_passPipeline_14_, v___x_13_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg(lean_object* v_a_16_){
_start:
{
uint8_t v_acNf_18_; uint8_t v_andFlattening_19_; uint8_t v_embeddedConstraintSubst_20_; lean_object* v_passPipeline_22_; lean_object* v_passPipeline_28_; lean_object* v_passPipeline_31_; 
v_acNf_18_ = lean_ctor_get_uint8(v_a_16_, sizeof(void*)*2 + 2);
v_andFlattening_19_ = lean_ctor_get_uint8(v_a_16_, sizeof(void*)*2 + 3);
v_embeddedConstraintSubst_20_ = lean_ctor_get_uint8(v_a_16_, sizeof(void*)*2 + 4);
v_passPipeline_31_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__2);
if (v_acNf_18_ == 0)
{
v_passPipeline_28_ = v_passPipeline_31_;
goto v___jp_27_;
}
else
{
lean_object* v___x_32_; 
v___x_32_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__4, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__4_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__4);
v_passPipeline_28_ = v___x_32_;
goto v___jp_27_;
}
v___jp_21_:
{
if (v_embeddedConstraintSubst_20_ == 0)
{
lean_object* v___x_23_; 
v___x_23_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_23_, 0, v_passPipeline_22_);
return v___x_23_;
}
else
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__0, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__0);
v___x_25_ = l_List_appendTR___redArg(v_passPipeline_22_, v___x_24_);
v___x_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
return v___x_26_;
}
}
v___jp_27_:
{
if (v_embeddedConstraintSubst_20_ == 0)
{
lean_inc(v_passPipeline_28_);
v_passPipeline_22_ = v_passPipeline_28_;
goto v___jp_21_;
}
else
{
if (v_andFlattening_19_ == 0)
{
lean_inc(v_passPipeline_28_);
v_passPipeline_22_ = v_passPipeline_28_;
goto v___jp_21_;
}
else
{
lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_29_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__1, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___closed__1);
lean_inc(v_passPipeline_28_);
v___x_30_ = l_List_appendTR___redArg(v_passPipeline_28_, v___x_29_);
v_passPipeline_22_ = v___x_30_;
goto v___jp_21_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg___boxed(lean_object* v_a_33_, lean_object* v_a_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg(v_a_33_);
lean_dec_ref(v_a_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline(lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg(v_a_36_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___boxed(lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline(v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_);
lean_dec(v_a_53_);
lean_dec_ref(v_a_52_);
lean_dec(v_a_51_);
lean_dec_ref(v_a_50_);
lean_dec(v_a_49_);
lean_dec_ref(v_a_48_);
lean_dec(v_a_47_);
lean_dec_ref(v_a_46_);
return v_res_55_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = lean_unsigned_to_nat(32u);
v___x_57_ = lean_mk_empty_array_with_capacity(v___x_56_);
v___x_58_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_59_ = ((size_t)5ULL);
v___x_60_ = lean_unsigned_to_nat(0u);
v___x_61_ = lean_unsigned_to_nat(32u);
v___x_62_ = lean_mk_empty_array_with_capacity(v___x_61_);
v___x_63_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg___closed__0);
v___x_64_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_64_, 0, v___x_63_);
lean_ctor_set(v___x_64_, 1, v___x_62_);
lean_ctor_set(v___x_64_, 2, v___x_60_);
lean_ctor_set(v___x_64_, 3, v___x_60_);
lean_ctor_set_usize(v___x_64_, 4, v___x_59_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(lean_object* v___y_65_){
_start:
{
lean_object* v___x_67_; lean_object* v_traceState_68_; lean_object* v_traces_69_; lean_object* v___x_70_; lean_object* v_traceState_71_; lean_object* v_env_72_; lean_object* v_nextMacroScope_73_; lean_object* v_ngen_74_; lean_object* v_auxDeclNGen_75_; lean_object* v_cache_76_; lean_object* v_messages_77_; lean_object* v_infoState_78_; lean_object* v_snapshotTasks_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_98_; 
v___x_67_ = lean_st_ref_get(v___y_65_);
v_traceState_68_ = lean_ctor_get(v___x_67_, 4);
lean_inc_ref(v_traceState_68_);
lean_dec(v___x_67_);
v_traces_69_ = lean_ctor_get(v_traceState_68_, 0);
lean_inc_ref(v_traces_69_);
lean_dec_ref(v_traceState_68_);
v___x_70_ = lean_st_ref_take(v___y_65_);
v_traceState_71_ = lean_ctor_get(v___x_70_, 4);
v_env_72_ = lean_ctor_get(v___x_70_, 0);
v_nextMacroScope_73_ = lean_ctor_get(v___x_70_, 1);
v_ngen_74_ = lean_ctor_get(v___x_70_, 2);
v_auxDeclNGen_75_ = lean_ctor_get(v___x_70_, 3);
v_cache_76_ = lean_ctor_get(v___x_70_, 5);
v_messages_77_ = lean_ctor_get(v___x_70_, 6);
v_infoState_78_ = lean_ctor_get(v___x_70_, 7);
v_snapshotTasks_79_ = lean_ctor_get(v___x_70_, 8);
v_isSharedCheck_98_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_98_ == 0)
{
v___x_81_ = v___x_70_;
v_isShared_82_ = v_isSharedCheck_98_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_snapshotTasks_79_);
lean_inc(v_infoState_78_);
lean_inc(v_messages_77_);
lean_inc(v_cache_76_);
lean_inc(v_traceState_71_);
lean_inc(v_auxDeclNGen_75_);
lean_inc(v_ngen_74_);
lean_inc(v_nextMacroScope_73_);
lean_inc(v_env_72_);
lean_dec(v___x_70_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_98_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
uint64_t v_tid_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_96_; 
v_tid_83_ = lean_ctor_get_uint64(v_traceState_71_, sizeof(void*)*1);
v_isSharedCheck_96_ = !lean_is_exclusive(v_traceState_71_);
if (v_isSharedCheck_96_ == 0)
{
lean_object* v_unused_97_; 
v_unused_97_ = lean_ctor_get(v_traceState_71_, 0);
lean_dec(v_unused_97_);
v___x_85_ = v_traceState_71_;
v_isShared_86_ = v_isSharedCheck_96_;
goto v_resetjp_84_;
}
else
{
lean_dec(v_traceState_71_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_96_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___x_87_; lean_object* v___x_89_; 
v___x_87_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg___closed__1);
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 0, v___x_87_);
v___x_89_ = v___x_85_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v___x_87_);
lean_ctor_set_uint64(v_reuseFailAlloc_95_, sizeof(void*)*1, v_tid_83_);
v___x_89_ = v_reuseFailAlloc_95_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
lean_object* v___x_91_; 
if (v_isShared_82_ == 0)
{
lean_ctor_set(v___x_81_, 4, v___x_89_);
v___x_91_ = v___x_81_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v_env_72_);
lean_ctor_set(v_reuseFailAlloc_94_, 1, v_nextMacroScope_73_);
lean_ctor_set(v_reuseFailAlloc_94_, 2, v_ngen_74_);
lean_ctor_set(v_reuseFailAlloc_94_, 3, v_auxDeclNGen_75_);
lean_ctor_set(v_reuseFailAlloc_94_, 4, v___x_89_);
lean_ctor_set(v_reuseFailAlloc_94_, 5, v_cache_76_);
lean_ctor_set(v_reuseFailAlloc_94_, 6, v_messages_77_);
lean_ctor_set(v_reuseFailAlloc_94_, 7, v_infoState_78_);
lean_ctor_set(v_reuseFailAlloc_94_, 8, v_snapshotTasks_79_);
v___x_91_ = v_reuseFailAlloc_94_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_st_ref_set(v___y_65_, v___x_91_);
v___x_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_93_, 0, v_traces_69_);
return v___x_93_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg___boxed(lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v___y_99_);
lean_dec(v___y_99_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0(lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v___y_109_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___boxed(lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0(v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_, v___y_118_, v___y_119_);
lean_dec(v___y_119_);
lean_dec_ref(v___y_118_);
lean_dec(v___y_117_);
lean_dec_ref(v___y_116_);
lean_dec(v___y_115_);
lean_dec_ref(v___y_114_);
lean_dec(v___y_113_);
lean_dec_ref(v___y_112_);
return v_res_121_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(lean_object* v_opts_122_, lean_object* v_opt_123_){
_start:
{
lean_object* v_name_124_; lean_object* v_defValue_125_; lean_object* v_map_126_; lean_object* v___x_127_; 
v_name_124_ = lean_ctor_get(v_opt_123_, 0);
v_defValue_125_ = lean_ctor_get(v_opt_123_, 1);
v_map_126_ = lean_ctor_get(v_opts_122_, 0);
v___x_127_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_126_, v_name_124_);
if (lean_obj_tag(v___x_127_) == 0)
{
uint8_t v___x_128_; 
v___x_128_ = lean_unbox(v_defValue_125_);
return v___x_128_;
}
else
{
lean_object* v_val_129_; 
v_val_129_ = lean_ctor_get(v___x_127_, 0);
lean_inc(v_val_129_);
lean_dec_ref_known(v___x_127_, 1);
if (lean_obj_tag(v_val_129_) == 1)
{
uint8_t v_v_130_; 
v_v_130_ = lean_ctor_get_uint8(v_val_129_, 0);
lean_dec_ref_known(v_val_129_, 0);
return v_v_130_;
}
else
{
uint8_t v___x_131_; 
lean_dec(v_val_129_);
v___x_131_ = lean_unbox(v_defValue_125_);
return v___x_131_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1___boxed(lean_object* v_opts_132_, lean_object* v_opt_133_){
_start:
{
uint8_t v_res_134_; lean_object* v_r_135_; 
v_res_134_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_opts_132_, v_opt_133_);
lean_dec_ref(v_opt_133_);
lean_dec_ref(v_opts_132_);
v_r_135_ = lean_box(v_res_134_);
return v_r_135_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___closed__1(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___closed__0));
v___x_138_ = l_Lean_stringToMessageData(v___x_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0(lean_object* v___x_139_, lean_object* v_x_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_){
_start:
{
lean_object* v_name_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_160_; 
v_name_150_ = lean_ctor_get(v___x_139_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_160_ == 0)
{
lean_object* v_unused_161_; 
v_unused_161_ = lean_ctor_get(v___x_139_, 1);
lean_dec(v_unused_161_);
v___x_152_ = v___x_139_;
v_isShared_153_ = v_isSharedCheck_160_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_name_150_);
lean_dec(v___x_139_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_160_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_157_; 
v___x_154_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___closed__1);
v___x_155_ = l_Lean_MessageData_ofName(v_name_150_);
if (v_isShared_153_ == 0)
{
lean_ctor_set_tag(v___x_152_, 7);
lean_ctor_set(v___x_152_, 1, v___x_155_);
lean_ctor_set(v___x_152_, 0, v___x_154_);
v___x_157_ = v___x_152_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_154_);
lean_ctor_set(v_reuseFailAlloc_159_, 1, v___x_155_);
v___x_157_ = v_reuseFailAlloc_159_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
lean_object* v___x_158_; 
v___x_158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
return v___x_158_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___boxed(lean_object* v___x_162_, lean_object* v_x_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0(v___x_162_, v_x_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec_ref(v_x_163_);
return v_res_173_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5___closed__2(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_177_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5___closed__1));
v___x_178_ = l_Lean_MessageData_ofFormat(v___x_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5(lean_object* v_x_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5___closed__2);
v___x_190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_190_, 0, v___x_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5___boxed(lean_object* v_x_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__5(v_x_191_, v___y_192_, v___y_193_, v___y_194_, v___y_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
lean_dec(v___y_195_);
lean_dec_ref(v___y_194_);
lean_dec(v___y_193_);
lean_dec_ref(v___y_192_);
lean_dec_ref(v_x_191_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__5(lean_object* v_opts_202_, lean_object* v_opt_203_){
_start:
{
lean_object* v_name_204_; lean_object* v_defValue_205_; lean_object* v_map_206_; lean_object* v___x_207_; 
v_name_204_ = lean_ctor_get(v_opt_203_, 0);
v_defValue_205_ = lean_ctor_get(v_opt_203_, 1);
v_map_206_ = lean_ctor_get(v_opts_202_, 0);
v___x_207_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_206_, v_name_204_);
if (lean_obj_tag(v___x_207_) == 0)
{
lean_inc(v_defValue_205_);
return v_defValue_205_;
}
else
{
lean_object* v_val_208_; 
v_val_208_ = lean_ctor_get(v___x_207_, 0);
lean_inc(v_val_208_);
lean_dec_ref_known(v___x_207_, 1);
if (lean_obj_tag(v_val_208_) == 3)
{
lean_object* v_v_209_; 
v_v_209_ = lean_ctor_get(v_val_208_, 0);
lean_inc(v_v_209_);
lean_dec_ref_known(v_val_208_, 1);
return v_v_209_;
}
else
{
lean_dec(v_val_208_);
lean_inc(v_defValue_205_);
return v_defValue_205_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__5___boxed(lean_object* v_opts_210_, lean_object* v_opt_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__5(v_opts_210_, v_opt_211_);
lean_dec_ref(v_opt_211_);
lean_dec_ref(v_opts_210_);
return v_res_212_;
}
}
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__4(lean_object* v_e_213_){
_start:
{
if (lean_obj_tag(v_e_213_) == 0)
{
uint8_t v___x_214_; 
v___x_214_ = 2;
return v___x_214_;
}
else
{
lean_object* v_a_215_; uint8_t v___x_216_; 
v_a_215_ = lean_ctor_get(v_e_213_, 0);
v___x_216_ = lean_unbox(v_a_215_);
if (v___x_216_ == 0)
{
uint8_t v___x_217_; 
v___x_217_ = 1;
return v___x_217_;
}
else
{
uint8_t v___x_218_; 
v___x_218_ = 0;
return v___x_218_;
}
}
}
}
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__4___boxed(lean_object* v_e_219_){
_start:
{
uint8_t v_res_220_; lean_object* v_r_221_; 
v_res_220_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__4(v_e_219_);
lean_dec_ref(v_e_219_);
v_r_221_ = lean_box(v_res_220_);
return v_r_221_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2_spec__3(size_t v_sz_222_, size_t v_i_223_, lean_object* v_bs_224_){
_start:
{
uint8_t v___x_225_; 
v___x_225_ = lean_usize_dec_lt(v_i_223_, v_sz_222_);
if (v___x_225_ == 0)
{
return v_bs_224_;
}
else
{
lean_object* v_v_226_; lean_object* v_msg_227_; lean_object* v___x_228_; lean_object* v_bs_x27_229_; size_t v___x_230_; size_t v___x_231_; lean_object* v___x_232_; 
v_v_226_ = lean_array_uget_borrowed(v_bs_224_, v_i_223_);
v_msg_227_ = lean_ctor_get(v_v_226_, 1);
lean_inc_ref(v_msg_227_);
v___x_228_ = lean_unsigned_to_nat(0u);
v_bs_x27_229_ = lean_array_uset(v_bs_224_, v_i_223_, v___x_228_);
v___x_230_ = ((size_t)1ULL);
v___x_231_ = lean_usize_add(v_i_223_, v___x_230_);
v___x_232_ = lean_array_uset(v_bs_x27_229_, v_i_223_, v_msg_227_);
v_i_223_ = v___x_231_;
v_bs_224_ = v___x_232_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2_spec__3___boxed(lean_object* v_sz_234_, lean_object* v_i_235_, lean_object* v_bs_236_){
_start:
{
size_t v_sz_boxed_237_; size_t v_i_boxed_238_; lean_object* v_res_239_; 
v_sz_boxed_237_ = lean_unbox_usize(v_sz_234_);
lean_dec(v_sz_234_);
v_i_boxed_238_ = lean_unbox_usize(v_i_235_);
lean_dec(v_i_235_);
v_res_239_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2_spec__3(v_sz_boxed_237_, v_i_boxed_238_, v_bs_236_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3_spec__7(lean_object* v_msgData_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_){
_start:
{
lean_object* v___x_246_; lean_object* v_env_247_; lean_object* v___x_248_; lean_object* v_mctx_249_; lean_object* v_lctx_250_; lean_object* v_options_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_246_ = lean_st_ref_get(v___y_244_);
v_env_247_ = lean_ctor_get(v___x_246_, 0);
lean_inc_ref(v_env_247_);
lean_dec(v___x_246_);
v___x_248_ = lean_st_ref_get(v___y_242_);
v_mctx_249_ = lean_ctor_get(v___x_248_, 0);
lean_inc_ref(v_mctx_249_);
lean_dec(v___x_248_);
v_lctx_250_ = lean_ctor_get(v___y_241_, 2);
v_options_251_ = lean_ctor_get(v___y_243_, 2);
lean_inc_ref(v_options_251_);
lean_inc_ref(v_lctx_250_);
v___x_252_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_252_, 0, v_env_247_);
lean_ctor_set(v___x_252_, 1, v_mctx_249_);
lean_ctor_set(v___x_252_, 2, v_lctx_250_);
lean_ctor_set(v___x_252_, 3, v_options_251_);
v___x_253_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
lean_ctor_set(v___x_253_, 1, v_msgData_240_);
v___x_254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3_spec__7___boxed(lean_object* v_msgData_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3_spec__7(v_msgData_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
lean_dec(v___y_257_);
lean_dec_ref(v___y_256_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2___redArg(lean_object* v_oldTraces_262_, lean_object* v_data_263_, lean_object* v_ref_264_, lean_object* v_msg_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
lean_object* v_fileName_271_; lean_object* v_fileMap_272_; lean_object* v_options_273_; lean_object* v_currRecDepth_274_; lean_object* v_maxRecDepth_275_; lean_object* v_ref_276_; lean_object* v_currNamespace_277_; lean_object* v_openDecls_278_; lean_object* v_initHeartbeats_279_; lean_object* v_maxHeartbeats_280_; lean_object* v_quotContext_281_; lean_object* v_currMacroScope_282_; uint8_t v_diag_283_; lean_object* v_cancelTk_x3f_284_; uint8_t v_suppressElabErrors_285_; lean_object* v_inheritedTraceOptions_286_; lean_object* v___x_287_; lean_object* v_traceState_288_; lean_object* v_traces_289_; lean_object* v_ref_290_; lean_object* v___x_291_; lean_object* v___x_292_; size_t v_sz_293_; size_t v___x_294_; lean_object* v___x_295_; lean_object* v_msg_296_; lean_object* v___x_297_; lean_object* v_a_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_335_; 
v_fileName_271_ = lean_ctor_get(v___y_268_, 0);
v_fileMap_272_ = lean_ctor_get(v___y_268_, 1);
v_options_273_ = lean_ctor_get(v___y_268_, 2);
v_currRecDepth_274_ = lean_ctor_get(v___y_268_, 3);
v_maxRecDepth_275_ = lean_ctor_get(v___y_268_, 4);
v_ref_276_ = lean_ctor_get(v___y_268_, 5);
v_currNamespace_277_ = lean_ctor_get(v___y_268_, 6);
v_openDecls_278_ = lean_ctor_get(v___y_268_, 7);
v_initHeartbeats_279_ = lean_ctor_get(v___y_268_, 8);
v_maxHeartbeats_280_ = lean_ctor_get(v___y_268_, 9);
v_quotContext_281_ = lean_ctor_get(v___y_268_, 10);
v_currMacroScope_282_ = lean_ctor_get(v___y_268_, 11);
v_diag_283_ = lean_ctor_get_uint8(v___y_268_, sizeof(void*)*14);
v_cancelTk_x3f_284_ = lean_ctor_get(v___y_268_, 12);
v_suppressElabErrors_285_ = lean_ctor_get_uint8(v___y_268_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_286_ = lean_ctor_get(v___y_268_, 13);
v___x_287_ = lean_st_ref_get(v___y_269_);
v_traceState_288_ = lean_ctor_get(v___x_287_, 4);
lean_inc_ref(v_traceState_288_);
lean_dec(v___x_287_);
v_traces_289_ = lean_ctor_get(v_traceState_288_, 0);
lean_inc_ref(v_traces_289_);
lean_dec_ref(v_traceState_288_);
v_ref_290_ = l_Lean_replaceRef(v_ref_264_, v_ref_276_);
lean_inc_ref(v_inheritedTraceOptions_286_);
lean_inc(v_cancelTk_x3f_284_);
lean_inc(v_currMacroScope_282_);
lean_inc(v_quotContext_281_);
lean_inc(v_maxHeartbeats_280_);
lean_inc(v_initHeartbeats_279_);
lean_inc(v_openDecls_278_);
lean_inc(v_currNamespace_277_);
lean_inc(v_maxRecDepth_275_);
lean_inc(v_currRecDepth_274_);
lean_inc_ref(v_options_273_);
lean_inc_ref(v_fileMap_272_);
lean_inc_ref(v_fileName_271_);
v___x_291_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_291_, 0, v_fileName_271_);
lean_ctor_set(v___x_291_, 1, v_fileMap_272_);
lean_ctor_set(v___x_291_, 2, v_options_273_);
lean_ctor_set(v___x_291_, 3, v_currRecDepth_274_);
lean_ctor_set(v___x_291_, 4, v_maxRecDepth_275_);
lean_ctor_set(v___x_291_, 5, v_ref_290_);
lean_ctor_set(v___x_291_, 6, v_currNamespace_277_);
lean_ctor_set(v___x_291_, 7, v_openDecls_278_);
lean_ctor_set(v___x_291_, 8, v_initHeartbeats_279_);
lean_ctor_set(v___x_291_, 9, v_maxHeartbeats_280_);
lean_ctor_set(v___x_291_, 10, v_quotContext_281_);
lean_ctor_set(v___x_291_, 11, v_currMacroScope_282_);
lean_ctor_set(v___x_291_, 12, v_cancelTk_x3f_284_);
lean_ctor_set(v___x_291_, 13, v_inheritedTraceOptions_286_);
lean_ctor_set_uint8(v___x_291_, sizeof(void*)*14, v_diag_283_);
lean_ctor_set_uint8(v___x_291_, sizeof(void*)*14 + 1, v_suppressElabErrors_285_);
v___x_292_ = l_Lean_PersistentArray_toArray___redArg(v_traces_289_);
lean_dec_ref(v_traces_289_);
v_sz_293_ = lean_array_size(v___x_292_);
v___x_294_ = ((size_t)0ULL);
v___x_295_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2_spec__3(v_sz_293_, v___x_294_, v___x_292_);
v_msg_296_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_296_, 0, v_data_263_);
lean_ctor_set(v_msg_296_, 1, v_msg_265_);
lean_ctor_set(v_msg_296_, 2, v___x_295_);
v___x_297_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3_spec__7(v_msg_296_, v___y_266_, v___y_267_, v___x_291_, v___y_269_);
lean_dec_ref_known(v___x_291_, 14);
v_a_298_ = lean_ctor_get(v___x_297_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_335_ == 0)
{
v___x_300_ = v___x_297_;
v_isShared_301_ = v_isSharedCheck_335_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_a_298_);
lean_dec(v___x_297_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_335_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_302_; lean_object* v_traceState_303_; lean_object* v_env_304_; lean_object* v_nextMacroScope_305_; lean_object* v_ngen_306_; lean_object* v_auxDeclNGen_307_; lean_object* v_cache_308_; lean_object* v_messages_309_; lean_object* v_infoState_310_; lean_object* v_snapshotTasks_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_334_; 
v___x_302_ = lean_st_ref_take(v___y_269_);
v_traceState_303_ = lean_ctor_get(v___x_302_, 4);
v_env_304_ = lean_ctor_get(v___x_302_, 0);
v_nextMacroScope_305_ = lean_ctor_get(v___x_302_, 1);
v_ngen_306_ = lean_ctor_get(v___x_302_, 2);
v_auxDeclNGen_307_ = lean_ctor_get(v___x_302_, 3);
v_cache_308_ = lean_ctor_get(v___x_302_, 5);
v_messages_309_ = lean_ctor_get(v___x_302_, 6);
v_infoState_310_ = lean_ctor_get(v___x_302_, 7);
v_snapshotTasks_311_ = lean_ctor_get(v___x_302_, 8);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_334_ == 0)
{
v___x_313_ = v___x_302_;
v_isShared_314_ = v_isSharedCheck_334_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_snapshotTasks_311_);
lean_inc(v_infoState_310_);
lean_inc(v_messages_309_);
lean_inc(v_cache_308_);
lean_inc(v_traceState_303_);
lean_inc(v_auxDeclNGen_307_);
lean_inc(v_ngen_306_);
lean_inc(v_nextMacroScope_305_);
lean_inc(v_env_304_);
lean_dec(v___x_302_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_334_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
uint64_t v_tid_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_332_; 
v_tid_315_ = lean_ctor_get_uint64(v_traceState_303_, sizeof(void*)*1);
v_isSharedCheck_332_ = !lean_is_exclusive(v_traceState_303_);
if (v_isSharedCheck_332_ == 0)
{
lean_object* v_unused_333_; 
v_unused_333_ = lean_ctor_get(v_traceState_303_, 0);
lean_dec(v_unused_333_);
v___x_317_ = v_traceState_303_;
v_isShared_318_ = v_isSharedCheck_332_;
goto v_resetjp_316_;
}
else
{
lean_dec(v_traceState_303_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_332_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_322_; 
v___x_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_319_, 0, v_ref_264_);
lean_ctor_set(v___x_319_, 1, v_a_298_);
v___x_320_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_262_, v___x_319_);
if (v_isShared_318_ == 0)
{
lean_ctor_set(v___x_317_, 0, v___x_320_);
v___x_322_ = v___x_317_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v___x_320_);
lean_ctor_set_uint64(v_reuseFailAlloc_331_, sizeof(void*)*1, v_tid_315_);
v___x_322_ = v_reuseFailAlloc_331_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
lean_object* v___x_324_; 
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 4, v___x_322_);
v___x_324_ = v___x_313_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_env_304_);
lean_ctor_set(v_reuseFailAlloc_330_, 1, v_nextMacroScope_305_);
lean_ctor_set(v_reuseFailAlloc_330_, 2, v_ngen_306_);
lean_ctor_set(v_reuseFailAlloc_330_, 3, v_auxDeclNGen_307_);
lean_ctor_set(v_reuseFailAlloc_330_, 4, v___x_322_);
lean_ctor_set(v_reuseFailAlloc_330_, 5, v_cache_308_);
lean_ctor_set(v_reuseFailAlloc_330_, 6, v_messages_309_);
lean_ctor_set(v_reuseFailAlloc_330_, 7, v_infoState_310_);
lean_ctor_set(v_reuseFailAlloc_330_, 8, v_snapshotTasks_311_);
v___x_324_ = v_reuseFailAlloc_330_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_328_; 
v___x_325_ = lean_st_ref_set(v___y_269_, v___x_324_);
v___x_326_ = lean_box(0);
if (v_isShared_301_ == 0)
{
lean_ctor_set(v___x_300_, 0, v___x_326_);
v___x_328_ = v___x_300_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_326_);
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
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2___redArg___boxed(lean_object* v_oldTraces_336_, lean_object* v_data_337_, lean_object* v_ref_338_, lean_object* v_msg_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2___redArg(v_oldTraces_336_, v_data_337_, v_ref_338_, v_msg_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_);
lean_dec(v___y_343_);
lean_dec_ref(v___y_342_);
lean_dec(v___y_341_);
lean_dec_ref(v___y_340_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__3___redArg(lean_object* v_x_346_){
_start:
{
if (lean_obj_tag(v_x_346_) == 0)
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
v_a_348_ = lean_ctor_get(v_x_346_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v_x_346_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v_x_346_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v_x_346_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
lean_ctor_set_tag(v___x_350_, 1);
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_a_348_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
else
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
v_a_356_ = lean_ctor_get(v_x_346_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v_x_346_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v_x_346_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v_x_346_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
lean_ctor_set_tag(v___x_358_, 0);
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
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__3___redArg___boxed(lean_object* v_x_364_, lean_object* v___y_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__3___redArg(v_x_364_);
return v_res_366_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__0(void){
_start:
{
lean_object* v___x_367_; double v___x_368_; 
v___x_367_ = lean_unsigned_to_nat(0u);
v___x_368_ = lean_float_of_nat(v___x_367_);
return v___x_368_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__2(void){
_start:
{
lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__1));
v___x_371_ = l_Lean_stringToMessageData(v___x_370_);
return v___x_371_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__3(void){
_start:
{
lean_object* v___x_372_; double v___x_373_; 
v___x_372_ = lean_unsigned_to_nat(1000u);
v___x_373_ = lean_float_of_nat(v___x_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(lean_object* v_cls_374_, uint8_t v_collapsed_375_, lean_object* v_tag_376_, lean_object* v_opts_377_, uint8_t v_clsEnabled_378_, lean_object* v_oldTraces_379_, lean_object* v_msg_380_, lean_object* v_resStartStop_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
lean_object* v_fst_391_; lean_object* v_snd_392_; lean_object* v___y_394_; lean_object* v___y_395_; lean_object* v_data_396_; lean_object* v_fst_407_; lean_object* v_snd_408_; lean_object* v___x_409_; uint8_t v___x_410_; lean_object* v___y_412_; lean_object* v_a_413_; uint8_t v___y_428_; double v___y_459_; 
v_fst_391_ = lean_ctor_get(v_resStartStop_381_, 0);
lean_inc(v_fst_391_);
v_snd_392_ = lean_ctor_get(v_resStartStop_381_, 1);
lean_inc(v_snd_392_);
lean_dec_ref(v_resStartStop_381_);
v_fst_407_ = lean_ctor_get(v_snd_392_, 0);
lean_inc(v_fst_407_);
v_snd_408_ = lean_ctor_get(v_snd_392_, 1);
lean_inc(v_snd_408_);
lean_dec(v_snd_392_);
v___x_409_ = l_Lean_trace_profiler;
v___x_410_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_opts_377_, v___x_409_);
if (v___x_410_ == 0)
{
v___y_428_ = v___x_410_;
goto v___jp_427_;
}
else
{
lean_object* v___x_464_; uint8_t v___x_465_; 
v___x_464_ = l_Lean_trace_profiler_useHeartbeats;
v___x_465_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_opts_377_, v___x_464_);
if (v___x_465_ == 0)
{
lean_object* v___x_466_; lean_object* v___x_467_; double v___x_468_; double v___x_469_; double v___x_470_; 
v___x_466_ = l_Lean_trace_profiler_threshold;
v___x_467_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__5(v_opts_377_, v___x_466_);
v___x_468_ = lean_float_of_nat(v___x_467_);
v___x_469_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__3);
v___x_470_ = lean_float_div(v___x_468_, v___x_469_);
v___y_459_ = v___x_470_;
goto v___jp_458_;
}
else
{
lean_object* v___x_471_; lean_object* v___x_472_; double v___x_473_; 
v___x_471_ = l_Lean_trace_profiler_threshold;
v___x_472_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__5(v_opts_377_, v___x_471_);
v___x_473_ = lean_float_of_nat(v___x_472_);
v___y_459_ = v___x_473_;
goto v___jp_458_;
}
}
v___jp_393_:
{
lean_object* v___x_397_; 
lean_inc(v___y_395_);
v___x_397_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2___redArg(v_oldTraces_379_, v_data_396_, v___y_395_, v___y_394_, v___y_386_, v___y_387_, v___y_388_, v___y_389_);
if (lean_obj_tag(v___x_397_) == 0)
{
lean_object* v___x_398_; 
lean_dec_ref_known(v___x_397_, 1);
v___x_398_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__3___redArg(v_fst_391_);
return v___x_398_;
}
else
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_406_; 
lean_dec(v_fst_391_);
v_a_399_ = lean_ctor_get(v___x_397_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_397_);
if (v_isSharedCheck_406_ == 0)
{
v___x_401_ = v___x_397_;
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_397_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_a_399_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
}
v___jp_411_:
{
uint8_t v_result_414_; lean_object* v___x_415_; lean_object* v___x_416_; double v___x_417_; lean_object* v_data_418_; 
v_result_414_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__4(v_fst_391_);
v___x_415_ = lean_box(v_result_414_);
v___x_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
v___x_417_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__0);
lean_inc_ref(v_tag_376_);
lean_inc_ref(v___x_416_);
lean_inc(v_cls_374_);
v_data_418_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_418_, 0, v_cls_374_);
lean_ctor_set(v_data_418_, 1, v___x_416_);
lean_ctor_set(v_data_418_, 2, v_tag_376_);
lean_ctor_set_float(v_data_418_, sizeof(void*)*3, v___x_417_);
lean_ctor_set_float(v_data_418_, sizeof(void*)*3 + 8, v___x_417_);
lean_ctor_set_uint8(v_data_418_, sizeof(void*)*3 + 16, v_collapsed_375_);
if (v___x_410_ == 0)
{
lean_dec_ref_known(v___x_416_, 1);
lean_dec(v_snd_408_);
lean_dec(v_fst_407_);
lean_dec_ref(v_tag_376_);
lean_dec(v_cls_374_);
v___y_394_ = v_a_413_;
v___y_395_ = v___y_412_;
v_data_396_ = v_data_418_;
goto v___jp_393_;
}
else
{
lean_object* v_data_419_; double v___x_420_; double v___x_421_; 
lean_dec_ref_known(v_data_418_, 3);
v_data_419_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_419_, 0, v_cls_374_);
lean_ctor_set(v_data_419_, 1, v___x_416_);
lean_ctor_set(v_data_419_, 2, v_tag_376_);
v___x_420_ = lean_unbox_float(v_fst_407_);
lean_dec(v_fst_407_);
lean_ctor_set_float(v_data_419_, sizeof(void*)*3, v___x_420_);
v___x_421_ = lean_unbox_float(v_snd_408_);
lean_dec(v_snd_408_);
lean_ctor_set_float(v_data_419_, sizeof(void*)*3 + 8, v___x_421_);
lean_ctor_set_uint8(v_data_419_, sizeof(void*)*3 + 16, v_collapsed_375_);
v___y_394_ = v_a_413_;
v___y_395_ = v___y_412_;
v_data_396_ = v_data_419_;
goto v___jp_393_;
}
}
v___jp_422_:
{
lean_object* v_ref_423_; lean_object* v___x_424_; 
v_ref_423_ = lean_ctor_get(v___y_388_, 5);
lean_inc(v___y_389_);
lean_inc_ref(v___y_388_);
lean_inc(v___y_387_);
lean_inc_ref(v___y_386_);
lean_inc(v___y_385_);
lean_inc_ref(v___y_384_);
lean_inc(v___y_383_);
lean_inc_ref(v___y_382_);
lean_inc(v_fst_391_);
v___x_424_ = lean_apply_10(v_msg_380_, v_fst_391_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, lean_box(0));
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v_a_425_; 
v_a_425_ = lean_ctor_get(v___x_424_, 0);
lean_inc(v_a_425_);
lean_dec_ref_known(v___x_424_, 1);
v___y_412_ = v_ref_423_;
v_a_413_ = v_a_425_;
goto v___jp_411_;
}
else
{
lean_object* v___x_426_; 
lean_dec_ref_known(v___x_424_, 1);
v___x_426_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__2);
v___y_412_ = v_ref_423_;
v_a_413_ = v___x_426_;
goto v___jp_411_;
}
}
v___jp_427_:
{
if (v_clsEnabled_378_ == 0)
{
if (v___y_428_ == 0)
{
lean_object* v___x_429_; lean_object* v_traceState_430_; lean_object* v_env_431_; lean_object* v_nextMacroScope_432_; lean_object* v_ngen_433_; lean_object* v_auxDeclNGen_434_; lean_object* v_cache_435_; lean_object* v_messages_436_; lean_object* v_infoState_437_; lean_object* v_snapshotTasks_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_457_; 
lean_dec(v_snd_408_);
lean_dec(v_fst_407_);
lean_dec_ref(v_msg_380_);
lean_dec_ref(v_tag_376_);
lean_dec(v_cls_374_);
v___x_429_ = lean_st_ref_take(v___y_389_);
v_traceState_430_ = lean_ctor_get(v___x_429_, 4);
v_env_431_ = lean_ctor_get(v___x_429_, 0);
v_nextMacroScope_432_ = lean_ctor_get(v___x_429_, 1);
v_ngen_433_ = lean_ctor_get(v___x_429_, 2);
v_auxDeclNGen_434_ = lean_ctor_get(v___x_429_, 3);
v_cache_435_ = lean_ctor_get(v___x_429_, 5);
v_messages_436_ = lean_ctor_get(v___x_429_, 6);
v_infoState_437_ = lean_ctor_get(v___x_429_, 7);
v_snapshotTasks_438_ = lean_ctor_get(v___x_429_, 8);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_457_ == 0)
{
v___x_440_ = v___x_429_;
v_isShared_441_ = v_isSharedCheck_457_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_snapshotTasks_438_);
lean_inc(v_infoState_437_);
lean_inc(v_messages_436_);
lean_inc(v_cache_435_);
lean_inc(v_traceState_430_);
lean_inc(v_auxDeclNGen_434_);
lean_inc(v_ngen_433_);
lean_inc(v_nextMacroScope_432_);
lean_inc(v_env_431_);
lean_dec(v___x_429_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_457_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
uint64_t v_tid_442_; lean_object* v_traces_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_456_; 
v_tid_442_ = lean_ctor_get_uint64(v_traceState_430_, sizeof(void*)*1);
v_traces_443_ = lean_ctor_get(v_traceState_430_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v_traceState_430_);
if (v_isSharedCheck_456_ == 0)
{
v___x_445_ = v_traceState_430_;
v_isShared_446_ = v_isSharedCheck_456_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_traces_443_);
lean_dec(v_traceState_430_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_456_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_447_; lean_object* v___x_449_; 
v___x_447_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_379_, v_traces_443_);
lean_dec_ref(v_traces_443_);
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 0, v___x_447_);
v___x_449_ = v___x_445_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_447_);
lean_ctor_set_uint64(v_reuseFailAlloc_455_, sizeof(void*)*1, v_tid_442_);
v___x_449_ = v_reuseFailAlloc_455_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
lean_object* v___x_451_; 
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 4, v___x_449_);
v___x_451_ = v___x_440_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_env_431_);
lean_ctor_set(v_reuseFailAlloc_454_, 1, v_nextMacroScope_432_);
lean_ctor_set(v_reuseFailAlloc_454_, 2, v_ngen_433_);
lean_ctor_set(v_reuseFailAlloc_454_, 3, v_auxDeclNGen_434_);
lean_ctor_set(v_reuseFailAlloc_454_, 4, v___x_449_);
lean_ctor_set(v_reuseFailAlloc_454_, 5, v_cache_435_);
lean_ctor_set(v_reuseFailAlloc_454_, 6, v_messages_436_);
lean_ctor_set(v_reuseFailAlloc_454_, 7, v_infoState_437_);
lean_ctor_set(v_reuseFailAlloc_454_, 8, v_snapshotTasks_438_);
v___x_451_ = v_reuseFailAlloc_454_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_452_ = lean_st_ref_set(v___y_389_, v___x_451_);
v___x_453_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__3___redArg(v_fst_391_);
return v___x_453_;
}
}
}
}
}
else
{
goto v___jp_422_;
}
}
else
{
goto v___jp_422_;
}
}
v___jp_458_:
{
double v___x_460_; double v___x_461_; double v___x_462_; uint8_t v___x_463_; 
v___x_460_ = lean_unbox_float(v_snd_408_);
v___x_461_ = lean_unbox_float(v_fst_407_);
v___x_462_ = lean_float_sub(v___x_460_, v___x_461_);
v___x_463_ = lean_float_decLt(v___y_459_, v___x_462_);
v___y_428_ = v___x_463_;
goto v___jp_427_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___boxed(lean_object** _args){
lean_object* v_cls_474_ = _args[0];
lean_object* v_collapsed_475_ = _args[1];
lean_object* v_tag_476_ = _args[2];
lean_object* v_opts_477_ = _args[3];
lean_object* v_clsEnabled_478_ = _args[4];
lean_object* v_oldTraces_479_ = _args[5];
lean_object* v_msg_480_ = _args[6];
lean_object* v_resStartStop_481_ = _args[7];
lean_object* v___y_482_ = _args[8];
lean_object* v___y_483_ = _args[9];
lean_object* v___y_484_ = _args[10];
lean_object* v___y_485_ = _args[11];
lean_object* v___y_486_ = _args[12];
lean_object* v___y_487_ = _args[13];
lean_object* v___y_488_ = _args[14];
lean_object* v___y_489_ = _args[15];
lean_object* v___y_490_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_491_; uint8_t v_clsEnabled_boxed_492_; lean_object* v_res_493_; 
v_collapsed_boxed_491_ = lean_unbox(v_collapsed_475_);
v_clsEnabled_boxed_492_ = lean_unbox(v_clsEnabled_478_);
v_res_493_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_474_, v_collapsed_boxed_491_, v_tag_476_, v_opts_477_, v_clsEnabled_boxed_492_, v_oldTraces_479_, v_msg_480_, v_resStartStop_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
lean_dec_ref(v_opts_477_);
return v_res_493_;
}
}
static double _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0(void){
_start:
{
lean_object* v___x_494_; double v___x_495_; 
v___x_494_ = lean_unsigned_to_nat(1000000000u);
v___x_495_ = lean_float_of_nat(v___x_494_);
return v___x_495_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__1(void){
_start:
{
lean_object* v___x_496_; lean_object* v___f_497_; 
v___x_496_ = l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass;
v___f_497_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___boxed), 11, 1);
lean_closure_set(v___f_497_, 0, v___x_496_);
return v___f_497_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__4(void){
_start:
{
lean_object* v___x_501_; lean_object* v___f_502_; 
v___x_501_ = l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass;
v___f_502_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___boxed), 11, 1);
lean_closure_set(v___f_502_, 0, v___x_501_);
return v___f_502_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__5(void){
_start:
{
lean_object* v___x_503_; lean_object* v___f_504_; 
v___x_503_ = l_Lean_Meta_Tactic_BVDecide_Normalize_enumsPass;
v___f_504_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___boxed), 11, 1);
lean_closure_set(v___f_504_, 0, v___x_503_);
return v___f_504_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__6(void){
_start:
{
lean_object* v___x_505_; lean_object* v___f_506_; 
v___x_505_ = l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass;
v___f_506_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___boxed), 11, 1);
lean_closure_set(v___f_506_, 0, v___x_505_);
return v___f_506_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__7(void){
_start:
{
lean_object* v___x_507_; lean_object* v___f_508_; 
v___x_507_ = l_Lean_Meta_Tactic_BVDecide_Normalize_typeAnalysisPass;
v___f_508_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__0___boxed), 11, 1);
lean_closure_set(v___f_508_, 0, v___x_507_);
return v___f_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7(uint8_t v___x_509_, uint8_t v_hasTrace_510_, lean_object* v_cls_511_, lean_object* v___x_512_, lean_object* v___x_513_, lean_object* v_____r_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_){
_start:
{
lean_object* v___y_525_; lean_object* v___y_541_; lean_object* v___y_542_; lean_object* v___y_543_; lean_object* v___y_544_; lean_object* v___y_545_; uint8_t v___y_546_; lean_object* v___y_547_; lean_object* v___y_548_; lean_object* v___y_549_; lean_object* v___y_550_; lean_object* v___y_551_; lean_object* v___y_552_; uint8_t v___y_553_; lean_object* v___y_554_; lean_object* v_a_555_; lean_object* v___y_568_; lean_object* v___y_569_; lean_object* v___y_570_; lean_object* v___y_571_; lean_object* v___y_572_; uint8_t v___y_573_; lean_object* v___y_574_; lean_object* v___y_575_; lean_object* v___y_576_; lean_object* v___y_577_; lean_object* v___y_578_; lean_object* v___y_579_; uint8_t v___y_580_; lean_object* v___y_581_; lean_object* v_a_582_; lean_object* v___y_592_; lean_object* v___y_593_; lean_object* v___y_594_; lean_object* v___y_595_; lean_object* v___y_596_; lean_object* v___y_597_; uint8_t v___y_598_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v___y_601_; lean_object* v___y_602_; lean_object* v___y_603_; uint8_t v___y_604_; uint8_t v_structures_644_; uint8_t v_fixedInt_645_; uint8_t v_enums_646_; uint8_t v_shortCircuit_647_; lean_object* v___y_649_; lean_object* v___y_650_; lean_object* v___y_651_; lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v___y_654_; lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_689_; lean_object* v___y_690_; lean_object* v___y_691_; lean_object* v___y_692_; lean_object* v___y_693_; lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_709_; uint8_t v___y_710_; lean_object* v___y_711_; lean_object* v___y_712_; lean_object* v___y_713_; lean_object* v___y_714_; lean_object* v___y_715_; lean_object* v___y_716_; lean_object* v___y_717_; lean_object* v___y_718_; lean_object* v___y_719_; lean_object* v___y_720_; uint8_t v___y_721_; lean_object* v___y_722_; lean_object* v_a_723_; lean_object* v___y_736_; uint8_t v___y_737_; lean_object* v___y_738_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; lean_object* v___y_742_; lean_object* v___y_743_; lean_object* v___y_744_; lean_object* v___y_745_; lean_object* v___y_746_; lean_object* v___y_747_; uint8_t v___y_748_; lean_object* v___y_749_; lean_object* v_a_750_; lean_object* v___y_760_; uint8_t v___y_761_; lean_object* v___y_762_; lean_object* v___y_763_; lean_object* v___y_764_; lean_object* v___y_765_; lean_object* v___y_766_; lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v___y_770_; uint8_t v___y_771_; lean_object* v___y_772_; lean_object* v___y_813_; lean_object* v___y_814_; lean_object* v___y_815_; lean_object* v___y_816_; lean_object* v___y_817_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_820_; lean_object* v___y_836_; lean_object* v___y_837_; lean_object* v___y_838_; lean_object* v___y_839_; lean_object* v___y_840_; lean_object* v___y_841_; lean_object* v___y_842_; lean_object* v___y_843_; lean_object* v___y_844_; lean_object* v___y_856_; lean_object* v___y_857_; lean_object* v___y_858_; uint8_t v___y_859_; lean_object* v___y_860_; lean_object* v___y_861_; lean_object* v___y_862_; lean_object* v___y_863_; lean_object* v___y_864_; lean_object* v___y_865_; lean_object* v___y_866_; uint8_t v___y_867_; lean_object* v___y_868_; lean_object* v___y_869_; lean_object* v_a_870_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___y_882_; uint8_t v___y_883_; lean_object* v___y_884_; lean_object* v___y_885_; lean_object* v___y_886_; lean_object* v___y_887_; lean_object* v___y_888_; lean_object* v___y_889_; uint8_t v___y_890_; lean_object* v___y_891_; lean_object* v___y_892_; lean_object* v___y_893_; lean_object* v_a_894_; lean_object* v___y_907_; lean_object* v___y_908_; uint8_t v___y_909_; lean_object* v___y_910_; lean_object* v___y_911_; lean_object* v___y_912_; lean_object* v___y_913_; lean_object* v___y_914_; lean_object* v___y_915_; lean_object* v___y_916_; lean_object* v___y_917_; uint8_t v___y_918_; lean_object* v___y_919_; lean_object* v___y_960_; lean_object* v___y_961_; lean_object* v___y_962_; lean_object* v___y_963_; lean_object* v___y_964_; lean_object* v___y_965_; lean_object* v___y_966_; lean_object* v___y_967_; lean_object* v___y_983_; lean_object* v___y_984_; lean_object* v___y_985_; lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___y_988_; lean_object* v___y_989_; lean_object* v___y_990_; lean_object* v___y_991_; lean_object* v___y_1003_; lean_object* v___y_1004_; lean_object* v___y_1005_; lean_object* v___y_1006_; uint8_t v___y_1007_; lean_object* v___y_1008_; lean_object* v___y_1009_; lean_object* v___y_1010_; uint8_t v___y_1011_; lean_object* v___y_1012_; lean_object* v___y_1013_; lean_object* v___y_1014_; lean_object* v___y_1015_; lean_object* v___y_1016_; lean_object* v_a_1017_; lean_object* v___y_1030_; lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; uint8_t v___y_1034_; lean_object* v___y_1035_; lean_object* v___y_1036_; uint8_t v___y_1037_; lean_object* v___y_1038_; lean_object* v___y_1039_; lean_object* v___y_1040_; lean_object* v___y_1041_; lean_object* v___y_1042_; lean_object* v___y_1043_; lean_object* v_a_1044_; lean_object* v___y_1054_; lean_object* v___y_1055_; lean_object* v___y_1056_; lean_object* v___y_1057_; lean_object* v___y_1058_; uint8_t v___y_1059_; lean_object* v___y_1060_; lean_object* v___y_1061_; uint8_t v___y_1062_; lean_object* v___y_1063_; lean_object* v___y_1064_; lean_object* v___y_1065_; lean_object* v___y_1066_; lean_object* v___y_1107_; lean_object* v___y_1108_; lean_object* v___y_1109_; lean_object* v___y_1110_; lean_object* v___y_1111_; lean_object* v___y_1112_; lean_object* v___y_1113_; lean_object* v___y_1114_; lean_object* v___y_1130_; uint8_t v___y_1142_; lean_object* v___y_1143_; uint8_t v___y_1144_; lean_object* v___y_1145_; lean_object* v___y_1146_; lean_object* v___y_1147_; lean_object* v_a_1148_; uint8_t v___y_1158_; lean_object* v___y_1159_; uint8_t v___y_1160_; lean_object* v___y_1161_; lean_object* v___y_1162_; lean_object* v___y_1163_; lean_object* v_a_1164_; uint8_t v___y_1177_; lean_object* v___y_1178_; uint8_t v___y_1179_; lean_object* v___y_1180_; lean_object* v___y_1181_; 
v_structures_644_ = lean_ctor_get_uint8(v___y_515_, sizeof(void*)*2 + 5);
v_fixedInt_645_ = lean_ctor_get_uint8(v___y_515_, sizeof(void*)*2 + 6);
v_enums_646_ = lean_ctor_get_uint8(v___y_515_, sizeof(void*)*2 + 7);
v_shortCircuit_647_ = lean_ctor_get_uint8(v___y_515_, sizeof(void*)*2 + 9);
if (v_structures_644_ == 0)
{
if (v_enums_646_ == 0)
{
v___y_1107_ = v___y_515_;
v___y_1108_ = v___y_516_;
v___y_1109_ = v___y_517_;
v___y_1110_ = v___y_518_;
v___y_1111_ = v___y_519_;
v___y_1112_ = v___y_520_;
v___y_1113_ = v___y_521_;
v___y_1114_ = v___y_522_;
goto v___jp_1106_;
}
else
{
goto v___jp_1221_;
}
}
else
{
goto v___jp_1221_;
}
v___jp_524_:
{
if (lean_obj_tag(v___y_525_) == 0)
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_539_; 
v_a_526_ = lean_ctor_get(v___y_525_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___y_525_);
if (v_isSharedCheck_539_ == 0)
{
v___x_528_ = v___y_525_;
v_isShared_529_ = v_isSharedCheck_539_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___y_525_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_539_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
uint8_t v___x_530_; 
v___x_530_ = lean_unbox(v_a_526_);
lean_dec(v_a_526_);
if (v___x_530_ == 0)
{
lean_object* v___x_531_; lean_object* v___x_533_; 
v___x_531_ = lean_box(v___x_509_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 0, v___x_531_);
v___x_533_ = v___x_528_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v___x_531_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
else
{
lean_object* v___x_535_; lean_object* v___x_537_; 
v___x_535_ = lean_box(v_hasTrace_510_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 0, v___x_535_);
v___x_537_ = v___x_528_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v___x_535_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
else
{
return v___y_525_;
}
}
v___jp_540_:
{
lean_object* v___x_556_; double v___x_557_; double v___x_558_; double v___x_559_; double v___x_560_; double v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_556_ = lean_io_mono_nanos_now();
v___x_557_ = lean_float_of_nat(v___y_551_);
v___x_558_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0);
v___x_559_ = lean_float_div(v___x_557_, v___x_558_);
v___x_560_ = lean_float_of_nat(v___x_556_);
v___x_561_ = lean_float_div(v___x_560_, v___x_558_);
v___x_562_ = lean_box_float(v___x_559_);
v___x_563_ = lean_box_float(v___x_561_);
v___x_564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_564_, 0, v___x_562_);
lean_ctor_set(v___x_564_, 1, v___x_563_);
v___x_565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_565_, 0, v_a_555_);
lean_ctor_set(v___x_565_, 1, v___x_564_);
lean_inc_ref(v___y_544_);
v___x_566_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_511_, v___y_553_, v___x_512_, v___y_542_, v___y_546_, v___y_554_, v___y_544_, v___x_565_, v___y_550_, v___y_547_, v___y_548_, v___y_545_, v___y_543_, v___y_541_, v___y_549_, v___y_552_);
v___y_525_ = v___x_566_;
goto v___jp_524_;
}
v___jp_567_:
{
lean_object* v___x_583_; double v___x_584_; double v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_583_ = lean_io_get_num_heartbeats();
v___x_584_ = lean_float_of_nat(v___y_577_);
v___x_585_ = lean_float_of_nat(v___x_583_);
v___x_586_ = lean_box_float(v___x_584_);
v___x_587_ = lean_box_float(v___x_585_);
v___x_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_586_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
v___x_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_589_, 0, v_a_582_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
lean_inc_ref(v___y_571_);
v___x_590_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_511_, v___y_580_, v___x_512_, v___y_569_, v___y_573_, v___y_581_, v___y_571_, v___x_589_, v___y_578_, v___y_574_, v___y_575_, v___y_572_, v___y_570_, v___y_568_, v___y_576_, v___y_579_);
v___y_525_ = v___x_590_;
goto v___jp_524_;
}
v___jp_591_:
{
lean_object* v___x_605_; lean_object* v_a_606_; uint8_t v___x_607_; 
v___x_605_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v___y_603_);
v_a_606_ = lean_ctor_get(v___x_605_, 0);
lean_inc(v_a_606_);
lean_dec_ref(v___x_605_);
v___x_607_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v___y_594_, v___x_513_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_608_ = lean_io_mono_nanos_now();
lean_inc(v___y_603_);
lean_inc_ref(v___y_601_);
lean_inc(v___y_592_);
lean_inc_ref(v___y_593_);
lean_inc(v___y_597_);
lean_inc_ref(v___y_600_);
lean_inc(v___y_599_);
lean_inc_ref(v___y_602_);
v___x_609_ = lean_apply_9(v___y_595_, v___y_602_, v___y_599_, v___y_600_, v___y_597_, v___y_593_, v___y_592_, v___y_601_, v___y_603_, lean_box(0));
if (lean_obj_tag(v___x_609_) == 0)
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
v_a_610_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_609_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_609_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_613_ == 0)
{
lean_ctor_set_tag(v___x_612_, 1);
v___x_615_ = v___x_612_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_610_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
v___y_541_ = v___y_592_;
v___y_542_ = v___y_594_;
v___y_543_ = v___y_593_;
v___y_544_ = v___y_596_;
v___y_545_ = v___y_597_;
v___y_546_ = v___y_598_;
v___y_547_ = v___y_599_;
v___y_548_ = v___y_600_;
v___y_549_ = v___y_601_;
v___y_550_ = v___y_602_;
v___y_551_ = v___x_608_;
v___y_552_ = v___y_603_;
v___y_553_ = v___y_604_;
v___y_554_ = v_a_606_;
v_a_555_ = v___x_615_;
goto v___jp_540_;
}
}
}
else
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
v_a_618_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___x_609_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_609_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_623_; 
if (v_isShared_621_ == 0)
{
lean_ctor_set_tag(v___x_620_, 0);
v___x_623_ = v___x_620_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_a_618_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
v___y_541_ = v___y_592_;
v___y_542_ = v___y_594_;
v___y_543_ = v___y_593_;
v___y_544_ = v___y_596_;
v___y_545_ = v___y_597_;
v___y_546_ = v___y_598_;
v___y_547_ = v___y_599_;
v___y_548_ = v___y_600_;
v___y_549_ = v___y_601_;
v___y_550_ = v___y_602_;
v___y_551_ = v___x_608_;
v___y_552_ = v___y_603_;
v___y_553_ = v___y_604_;
v___y_554_ = v_a_606_;
v_a_555_ = v___x_623_;
goto v___jp_540_;
}
}
}
}
else
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = lean_io_get_num_heartbeats();
lean_inc(v___y_603_);
lean_inc_ref(v___y_601_);
lean_inc(v___y_592_);
lean_inc_ref(v___y_593_);
lean_inc(v___y_597_);
lean_inc_ref(v___y_600_);
lean_inc(v___y_599_);
lean_inc_ref(v___y_602_);
v___x_627_ = lean_apply_9(v___y_595_, v___y_602_, v___y_599_, v___y_600_, v___y_597_, v___y_593_, v___y_592_, v___y_601_, v___y_603_, lean_box(0));
if (lean_obj_tag(v___x_627_) == 0)
{
lean_object* v_a_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_635_; 
v_a_628_ = lean_ctor_get(v___x_627_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_627_);
if (v_isSharedCheck_635_ == 0)
{
v___x_630_ = v___x_627_;
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_a_628_);
lean_dec(v___x_627_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_633_; 
if (v_isShared_631_ == 0)
{
lean_ctor_set_tag(v___x_630_, 1);
v___x_633_ = v___x_630_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_a_628_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
v___y_568_ = v___y_592_;
v___y_569_ = v___y_594_;
v___y_570_ = v___y_593_;
v___y_571_ = v___y_596_;
v___y_572_ = v___y_597_;
v___y_573_ = v___y_598_;
v___y_574_ = v___y_599_;
v___y_575_ = v___y_600_;
v___y_576_ = v___y_601_;
v___y_577_ = v___x_626_;
v___y_578_ = v___y_602_;
v___y_579_ = v___y_603_;
v___y_580_ = v___y_604_;
v___y_581_ = v_a_606_;
v_a_582_ = v___x_633_;
goto v___jp_567_;
}
}
}
else
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_643_; 
v_a_636_ = lean_ctor_get(v___x_627_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_627_);
if (v_isSharedCheck_643_ == 0)
{
v___x_638_ = v___x_627_;
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_627_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_641_; 
if (v_isShared_639_ == 0)
{
lean_ctor_set_tag(v___x_638_, 0);
v___x_641_ = v___x_638_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_a_636_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
v___y_568_ = v___y_592_;
v___y_569_ = v___y_594_;
v___y_570_ = v___y_593_;
v___y_571_ = v___y_596_;
v___y_572_ = v___y_597_;
v___y_573_ = v___y_598_;
v___y_574_ = v___y_599_;
v___y_575_ = v___y_600_;
v___y_576_ = v___y_601_;
v___y_577_ = v___x_626_;
v___y_578_ = v___y_602_;
v___y_579_ = v___y_603_;
v___y_580_ = v___y_604_;
v___y_581_ = v_a_606_;
v_a_582_ = v___x_641_;
goto v___jp_567_;
}
}
}
}
}
v___jp_648_:
{
lean_object* v___x_657_; lean_object* v_a_658_; lean_object* v___x_659_; 
v___x_657_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg(v___y_649_);
v_a_658_ = lean_ctor_get(v___x_657_, 0);
lean_inc(v_a_658_);
lean_dec_ref(v___x_657_);
v___x_659_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(v_a_658_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_);
lean_dec(v_a_658_);
if (lean_obj_tag(v___x_659_) == 0)
{
lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_687_; 
v_a_660_ = lean_ctor_get(v___x_659_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_687_ == 0)
{
v___x_662_ = v___x_659_;
v_isShared_663_ = v_isSharedCheck_687_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v___x_659_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_687_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
uint8_t v___x_664_; 
v___x_664_ = lean_unbox(v_a_660_);
lean_dec(v_a_660_);
if (v___x_664_ == 0)
{
if (v_shortCircuit_647_ == 0)
{
lean_object* v___x_665_; lean_object* v___x_667_; 
lean_dec_ref(v___x_512_);
lean_dec(v_cls_511_);
v___x_665_ = lean_box(v___x_509_);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 0, v___x_665_);
v___x_667_ = v___x_662_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v___x_665_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
else
{
lean_object* v___x_669_; lean_object* v_options_670_; uint8_t v_hasTrace_671_; 
lean_del_object(v___x_662_);
v___x_669_ = l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass;
v_options_670_ = lean_ctor_get(v___y_655_, 2);
v_hasTrace_671_ = lean_ctor_get_uint8(v_options_670_, sizeof(void*)*1);
if (v_hasTrace_671_ == 0)
{
lean_object* v_run_x27_672_; lean_object* v___x_673_; 
lean_dec_ref(v___x_512_);
lean_dec(v_cls_511_);
v_run_x27_672_ = lean_ctor_get(v___x_669_, 1);
lean_inc_ref(v_run_x27_672_);
lean_inc(v___y_656_);
lean_inc_ref(v___y_655_);
lean_inc(v___y_654_);
lean_inc_ref(v___y_653_);
lean_inc(v___y_652_);
lean_inc_ref(v___y_651_);
lean_inc(v___y_650_);
lean_inc_ref(v___y_649_);
v___x_673_ = lean_apply_9(v_run_x27_672_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, lean_box(0));
v___y_525_ = v___x_673_;
goto v___jp_524_;
}
else
{
lean_object* v_run_x27_674_; lean_object* v_inheritedTraceOptions_675_; lean_object* v___f_676_; lean_object* v___x_677_; lean_object* v___x_678_; uint8_t v___x_679_; 
v_run_x27_674_ = lean_ctor_get(v___x_669_, 1);
v_inheritedTraceOptions_675_ = lean_ctor_get(v___y_655_, 13);
v___f_676_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__1);
v___x_677_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__3));
lean_inc(v_cls_511_);
v___x_678_ = l_Lean_Name_append(v___x_677_, v_cls_511_);
v___x_679_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_675_, v_options_670_, v___x_678_);
lean_dec(v___x_678_);
if (v___x_679_ == 0)
{
lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_680_ = l_Lean_trace_profiler;
v___x_681_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_options_670_, v___x_680_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; 
lean_dec_ref(v___x_512_);
lean_dec(v_cls_511_);
lean_inc_ref(v_run_x27_674_);
lean_inc(v___y_656_);
lean_inc_ref(v___y_655_);
lean_inc(v___y_654_);
lean_inc_ref(v___y_653_);
lean_inc(v___y_652_);
lean_inc_ref(v___y_651_);
lean_inc(v___y_650_);
lean_inc_ref(v___y_649_);
v___x_682_ = lean_apply_9(v_run_x27_674_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, lean_box(0));
v___y_525_ = v___x_682_;
goto v___jp_524_;
}
else
{
lean_inc_ref(v_run_x27_674_);
v___y_592_ = v___y_654_;
v___y_593_ = v___y_653_;
v___y_594_ = v_options_670_;
v___y_595_ = v_run_x27_674_;
v___y_596_ = v___f_676_;
v___y_597_ = v___y_652_;
v___y_598_ = v___x_679_;
v___y_599_ = v___y_650_;
v___y_600_ = v___y_651_;
v___y_601_ = v___y_655_;
v___y_602_ = v___y_649_;
v___y_603_ = v___y_656_;
v___y_604_ = v_hasTrace_671_;
goto v___jp_591_;
}
}
else
{
lean_inc_ref(v_run_x27_674_);
v___y_592_ = v___y_654_;
v___y_593_ = v___y_653_;
v___y_594_ = v_options_670_;
v___y_595_ = v_run_x27_674_;
v___y_596_ = v___f_676_;
v___y_597_ = v___y_652_;
v___y_598_ = v___x_679_;
v___y_599_ = v___y_650_;
v___y_600_ = v___y_651_;
v___y_601_ = v___y_655_;
v___y_602_ = v___y_649_;
v___y_603_ = v___y_656_;
v___y_604_ = v_hasTrace_671_;
goto v___jp_591_;
}
}
}
}
else
{
lean_object* v___x_683_; lean_object* v___x_685_; 
lean_dec_ref(v___x_512_);
lean_dec(v_cls_511_);
v___x_683_ = lean_box(v_hasTrace_510_);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 0, v___x_683_);
v___x_685_ = v___x_662_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_683_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
}
else
{
lean_dec_ref(v___x_512_);
lean_dec(v_cls_511_);
return v___x_659_;
}
}
v___jp_688_:
{
if (lean_obj_tag(v___y_697_) == 0)
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_707_; 
v_a_698_ = lean_ctor_get(v___y_697_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___y_697_);
if (v_isSharedCheck_707_ == 0)
{
v___x_700_ = v___y_697_;
v_isShared_701_ = v_isSharedCheck_707_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___y_697_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_707_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
uint8_t v___x_702_; 
v___x_702_ = lean_unbox(v_a_698_);
lean_dec(v_a_698_);
if (v___x_702_ == 0)
{
lean_del_object(v___x_700_);
v___y_649_ = v___y_693_;
v___y_650_ = v___y_689_;
v___y_651_ = v___y_695_;
v___y_652_ = v___y_692_;
v___y_653_ = v___y_694_;
v___y_654_ = v___y_696_;
v___y_655_ = v___y_691_;
v___y_656_ = v___y_690_;
goto v___jp_648_;
}
else
{
lean_object* v___x_703_; lean_object* v___x_705_; 
lean_dec_ref(v___x_512_);
lean_dec(v_cls_511_);
v___x_703_ = lean_box(v_hasTrace_510_);
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 0, v___x_703_);
v___x_705_ = v___x_700_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v___x_703_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
}
else
{
lean_dec_ref(v___x_512_);
lean_dec(v_cls_511_);
return v___y_697_;
}
}
v___jp_708_:
{
lean_object* v___x_724_; double v___x_725_; double v___x_726_; double v___x_727_; double v___x_728_; double v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_724_ = lean_io_mono_nanos_now();
v___x_725_ = lean_float_of_nat(v___y_715_);
v___x_726_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0);
v___x_727_ = lean_float_div(v___x_725_, v___x_726_);
v___x_728_ = lean_float_of_nat(v___x_724_);
v___x_729_ = lean_float_div(v___x_728_, v___x_726_);
v___x_730_ = lean_box_float(v___x_727_);
v___x_731_ = lean_box_float(v___x_729_);
v___x_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_732_, 0, v___x_730_);
lean_ctor_set(v___x_732_, 1, v___x_731_);
v___x_733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_733_, 0, v_a_723_);
lean_ctor_set(v___x_733_, 1, v___x_732_);
lean_inc_ref(v___y_718_);
lean_inc_ref(v___x_512_);
lean_inc(v_cls_511_);
v___x_734_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_511_, v___y_721_, v___x_512_, v___y_716_, v___y_710_, v___y_720_, v___y_718_, v___x_733_, v___y_711_, v___y_709_, v___y_719_, v___y_712_, v___y_714_, v___y_722_, v___y_713_, v___y_717_);
v___y_689_ = v___y_709_;
v___y_690_ = v___y_717_;
v___y_691_ = v___y_713_;
v___y_692_ = v___y_712_;
v___y_693_ = v___y_711_;
v___y_694_ = v___y_714_;
v___y_695_ = v___y_719_;
v___y_696_ = v___y_722_;
v___y_697_ = v___x_734_;
goto v___jp_688_;
}
v___jp_735_:
{
lean_object* v___x_751_; double v___x_752_; double v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_751_ = lean_io_get_num_heartbeats();
v___x_752_ = lean_float_of_nat(v___y_738_);
v___x_753_ = lean_float_of_nat(v___x_751_);
v___x_754_ = lean_box_float(v___x_752_);
v___x_755_ = lean_box_float(v___x_753_);
v___x_756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_756_, 0, v___x_754_);
lean_ctor_set(v___x_756_, 1, v___x_755_);
v___x_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_757_, 0, v_a_750_);
lean_ctor_set(v___x_757_, 1, v___x_756_);
lean_inc_ref(v___y_745_);
lean_inc_ref(v___x_512_);
lean_inc(v_cls_511_);
v___x_758_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_511_, v___y_748_, v___x_512_, v___y_743_, v___y_737_, v___y_747_, v___y_745_, v___x_757_, v___y_739_, v___y_736_, v___y_746_, v___y_740_, v___y_742_, v___y_749_, v___y_741_, v___y_744_);
v___y_689_ = v___y_736_;
v___y_690_ = v___y_744_;
v___y_691_ = v___y_741_;
v___y_692_ = v___y_740_;
v___y_693_ = v___y_739_;
v___y_694_ = v___y_742_;
v___y_695_ = v___y_746_;
v___y_696_ = v___y_749_;
v___y_697_ = v___x_758_;
goto v___jp_688_;
}
v___jp_759_:
{
lean_object* v___x_773_; lean_object* v_a_774_; uint8_t v___x_775_; 
v___x_773_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v___y_767_);
v_a_774_ = lean_ctor_get(v___x_773_, 0);
lean_inc(v_a_774_);
lean_dec_ref(v___x_773_);
v___x_775_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v___y_766_, v___x_513_);
if (v___x_775_ == 0)
{
lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_776_ = lean_io_mono_nanos_now();
lean_inc(v___y_767_);
lean_inc_ref(v___y_764_);
lean_inc(v___y_772_);
lean_inc_ref(v___y_765_);
lean_inc(v___y_763_);
lean_inc_ref(v___y_769_);
lean_inc(v___y_760_);
lean_inc_ref(v___y_762_);
v___x_777_ = lean_apply_9(v___y_768_, v___y_762_, v___y_760_, v___y_769_, v___y_763_, v___y_765_, v___y_772_, v___y_764_, v___y_767_, lean_box(0));
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_785_; 
v_a_778_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_785_ == 0)
{
v___x_780_ = v___x_777_;
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v___x_777_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_783_; 
if (v_isShared_781_ == 0)
{
lean_ctor_set_tag(v___x_780_, 1);
v___x_783_ = v___x_780_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_a_778_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
v___y_709_ = v___y_760_;
v___y_710_ = v___y_761_;
v___y_711_ = v___y_762_;
v___y_712_ = v___y_763_;
v___y_713_ = v___y_764_;
v___y_714_ = v___y_765_;
v___y_715_ = v___x_776_;
v___y_716_ = v___y_766_;
v___y_717_ = v___y_767_;
v___y_718_ = v___y_770_;
v___y_719_ = v___y_769_;
v___y_720_ = v_a_774_;
v___y_721_ = v___y_771_;
v___y_722_ = v___y_772_;
v_a_723_ = v___x_783_;
goto v___jp_708_;
}
}
}
else
{
lean_object* v_a_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_793_; 
v_a_786_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_793_ == 0)
{
v___x_788_ = v___x_777_;
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_a_786_);
lean_dec(v___x_777_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_791_; 
if (v_isShared_789_ == 0)
{
lean_ctor_set_tag(v___x_788_, 0);
v___x_791_ = v___x_788_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_786_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
v___y_709_ = v___y_760_;
v___y_710_ = v___y_761_;
v___y_711_ = v___y_762_;
v___y_712_ = v___y_763_;
v___y_713_ = v___y_764_;
v___y_714_ = v___y_765_;
v___y_715_ = v___x_776_;
v___y_716_ = v___y_766_;
v___y_717_ = v___y_767_;
v___y_718_ = v___y_770_;
v___y_719_ = v___y_769_;
v___y_720_ = v_a_774_;
v___y_721_ = v___y_771_;
v___y_722_ = v___y_772_;
v_a_723_ = v___x_791_;
goto v___jp_708_;
}
}
}
}
else
{
lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_794_ = lean_io_get_num_heartbeats();
lean_inc(v___y_767_);
lean_inc_ref(v___y_764_);
lean_inc(v___y_772_);
lean_inc_ref(v___y_765_);
lean_inc(v___y_763_);
lean_inc_ref(v___y_769_);
lean_inc(v___y_760_);
lean_inc_ref(v___y_762_);
v___x_795_ = lean_apply_9(v___y_768_, v___y_762_, v___y_760_, v___y_769_, v___y_763_, v___y_765_, v___y_772_, v___y_764_, v___y_767_, lean_box(0));
if (lean_obj_tag(v___x_795_) == 0)
{
lean_object* v_a_796_; lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_803_; 
v_a_796_ = lean_ctor_get(v___x_795_, 0);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_795_);
if (v_isSharedCheck_803_ == 0)
{
v___x_798_ = v___x_795_;
v_isShared_799_ = v_isSharedCheck_803_;
goto v_resetjp_797_;
}
else
{
lean_inc(v_a_796_);
lean_dec(v___x_795_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_803_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
lean_object* v___x_801_; 
if (v_isShared_799_ == 0)
{
lean_ctor_set_tag(v___x_798_, 1);
v___x_801_ = v___x_798_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_a_796_);
v___x_801_ = v_reuseFailAlloc_802_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
v___y_736_ = v___y_760_;
v___y_737_ = v___y_761_;
v___y_738_ = v___x_794_;
v___y_739_ = v___y_762_;
v___y_740_ = v___y_763_;
v___y_741_ = v___y_764_;
v___y_742_ = v___y_765_;
v___y_743_ = v___y_766_;
v___y_744_ = v___y_767_;
v___y_745_ = v___y_770_;
v___y_746_ = v___y_769_;
v___y_747_ = v_a_774_;
v___y_748_ = v___y_771_;
v___y_749_ = v___y_772_;
v_a_750_ = v___x_801_;
goto v___jp_735_;
}
}
}
else
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_811_; 
v_a_804_ = lean_ctor_get(v___x_795_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_795_);
if (v_isSharedCheck_811_ == 0)
{
v___x_806_ = v___x_795_;
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_795_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_809_; 
if (v_isShared_807_ == 0)
{
lean_ctor_set_tag(v___x_806_, 0);
v___x_809_ = v___x_806_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_a_804_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
v___y_736_ = v___y_760_;
v___y_737_ = v___y_761_;
v___y_738_ = v___x_794_;
v___y_739_ = v___y_762_;
v___y_740_ = v___y_763_;
v___y_741_ = v___y_764_;
v___y_742_ = v___y_765_;
v___y_743_ = v___y_766_;
v___y_744_ = v___y_767_;
v___y_745_ = v___y_770_;
v___y_746_ = v___y_769_;
v___y_747_ = v_a_774_;
v___y_748_ = v___y_771_;
v___y_749_ = v___y_772_;
v_a_750_ = v___x_809_;
goto v___jp_735_;
}
}
}
}
}
v___jp_812_:
{
if (v_fixedInt_645_ == 0)
{
v___y_649_ = v___y_813_;
v___y_650_ = v___y_814_;
v___y_651_ = v___y_815_;
v___y_652_ = v___y_816_;
v___y_653_ = v___y_817_;
v___y_654_ = v___y_818_;
v___y_655_ = v___y_819_;
v___y_656_ = v___y_820_;
goto v___jp_648_;
}
else
{
lean_object* v___x_821_; lean_object* v_options_822_; uint8_t v_hasTrace_823_; 
v___x_821_ = l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass;
v_options_822_ = lean_ctor_get(v___y_819_, 2);
v_hasTrace_823_ = lean_ctor_get_uint8(v_options_822_, sizeof(void*)*1);
if (v_hasTrace_823_ == 0)
{
lean_object* v_run_x27_824_; lean_object* v___x_825_; 
v_run_x27_824_ = lean_ctor_get(v___x_821_, 1);
lean_inc_ref(v_run_x27_824_);
lean_inc(v___y_820_);
lean_inc_ref(v___y_819_);
lean_inc(v___y_818_);
lean_inc_ref(v___y_817_);
lean_inc(v___y_816_);
lean_inc_ref(v___y_815_);
lean_inc(v___y_814_);
lean_inc_ref(v___y_813_);
v___x_825_ = lean_apply_9(v_run_x27_824_, v___y_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, lean_box(0));
v___y_689_ = v___y_814_;
v___y_690_ = v___y_820_;
v___y_691_ = v___y_819_;
v___y_692_ = v___y_816_;
v___y_693_ = v___y_813_;
v___y_694_ = v___y_817_;
v___y_695_ = v___y_815_;
v___y_696_ = v___y_818_;
v___y_697_ = v___x_825_;
goto v___jp_688_;
}
else
{
lean_object* v_run_x27_826_; lean_object* v_inheritedTraceOptions_827_; lean_object* v___f_828_; lean_object* v___x_829_; lean_object* v___x_830_; uint8_t v___x_831_; 
v_run_x27_826_ = lean_ctor_get(v___x_821_, 1);
v_inheritedTraceOptions_827_ = lean_ctor_get(v___y_819_, 13);
v___f_828_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__4);
v___x_829_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__3));
lean_inc(v_cls_511_);
v___x_830_ = l_Lean_Name_append(v___x_829_, v_cls_511_);
v___x_831_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_827_, v_options_822_, v___x_830_);
lean_dec(v___x_830_);
if (v___x_831_ == 0)
{
lean_object* v___x_832_; uint8_t v___x_833_; 
v___x_832_ = l_Lean_trace_profiler;
v___x_833_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_options_822_, v___x_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; 
lean_inc_ref(v_run_x27_826_);
lean_inc(v___y_820_);
lean_inc_ref(v___y_819_);
lean_inc(v___y_818_);
lean_inc_ref(v___y_817_);
lean_inc(v___y_816_);
lean_inc_ref(v___y_815_);
lean_inc(v___y_814_);
lean_inc_ref(v___y_813_);
v___x_834_ = lean_apply_9(v_run_x27_826_, v___y_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, lean_box(0));
v___y_689_ = v___y_814_;
v___y_690_ = v___y_820_;
v___y_691_ = v___y_819_;
v___y_692_ = v___y_816_;
v___y_693_ = v___y_813_;
v___y_694_ = v___y_817_;
v___y_695_ = v___y_815_;
v___y_696_ = v___y_818_;
v___y_697_ = v___x_834_;
goto v___jp_688_;
}
else
{
lean_inc_ref(v_run_x27_826_);
v___y_760_ = v___y_814_;
v___y_761_ = v___x_831_;
v___y_762_ = v___y_813_;
v___y_763_ = v___y_816_;
v___y_764_ = v___y_819_;
v___y_765_ = v___y_817_;
v___y_766_ = v_options_822_;
v___y_767_ = v___y_820_;
v___y_768_ = v_run_x27_826_;
v___y_769_ = v___y_815_;
v___y_770_ = v___f_828_;
v___y_771_ = v_hasTrace_823_;
v___y_772_ = v___y_818_;
goto v___jp_759_;
}
}
else
{
lean_inc_ref(v_run_x27_826_);
v___y_760_ = v___y_814_;
v___y_761_ = v___x_831_;
v___y_762_ = v___y_813_;
v___y_763_ = v___y_816_;
v___y_764_ = v___y_819_;
v___y_765_ = v___y_817_;
v___y_766_ = v_options_822_;
v___y_767_ = v___y_820_;
v___y_768_ = v_run_x27_826_;
v___y_769_ = v___y_815_;
v___y_770_ = v___f_828_;
v___y_771_ = v_hasTrace_823_;
v___y_772_ = v___y_818_;
goto v___jp_759_;
}
}
}
}
v___jp_835_:
{
if (lean_obj_tag(v___y_844_) == 0)
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_854_; 
v_a_845_ = lean_ctor_get(v___y_844_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v___y_844_);
if (v_isSharedCheck_854_ == 0)
{
v___x_847_ = v___y_844_;
v_isShared_848_ = v_isSharedCheck_854_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___y_844_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_854_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
uint8_t v___x_849_; 
v___x_849_ = lean_unbox(v_a_845_);
lean_dec(v_a_845_);
if (v___x_849_ == 0)
{
lean_del_object(v___x_847_);
v___y_813_ = v___y_839_;
v___y_814_ = v___y_836_;
v___y_815_ = v___y_837_;
v___y_816_ = v___y_840_;
v___y_817_ = v___y_842_;
v___y_818_ = v___y_838_;
v___y_819_ = v___y_841_;
v___y_820_ = v___y_843_;
goto v___jp_812_;
}
else
{
lean_object* v___x_850_; lean_object* v___x_852_; 
lean_dec_ref(v___x_512_);
lean_dec(v_cls_511_);
v___x_850_ = lean_box(v_hasTrace_510_);
if (v_isShared_848_ == 0)
{
lean_ctor_set(v___x_847_, 0, v___x_850_);
v___x_852_ = v___x_847_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v___x_850_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
}
}
else
{
lean_dec_ref(v___x_512_);
lean_dec(v_cls_511_);
return v___y_844_;
}
}
v___jp_855_:
{
lean_object* v___x_871_; double v___x_872_; double v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_871_ = lean_io_get_num_heartbeats();
v___x_872_ = lean_float_of_nat(v___y_865_);
v___x_873_ = lean_float_of_nat(v___x_871_);
v___x_874_ = lean_box_float(v___x_872_);
v___x_875_ = lean_box_float(v___x_873_);
v___x_876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_874_);
lean_ctor_set(v___x_876_, 1, v___x_875_);
v___x_877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_877_, 0, v_a_870_);
lean_ctor_set(v___x_877_, 1, v___x_876_);
lean_inc_ref(v___y_863_);
lean_inc_ref(v___x_512_);
lean_inc(v_cls_511_);
v___x_878_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_511_, v___y_867_, v___x_512_, v___y_860_, v___y_859_, v___y_856_, v___y_863_, v___x_877_, v___y_857_, v___y_861_, v___y_862_, v___y_864_, v___y_868_, v___y_858_, v___y_866_, v___y_869_);
v___y_836_ = v___y_861_;
v___y_837_ = v___y_862_;
v___y_838_ = v___y_858_;
v___y_839_ = v___y_857_;
v___y_840_ = v___y_864_;
v___y_841_ = v___y_866_;
v___y_842_ = v___y_868_;
v___y_843_ = v___y_869_;
v___y_844_ = v___x_878_;
goto v___jp_835_;
}
v___jp_879_:
{
lean_object* v___x_895_; double v___x_896_; double v___x_897_; double v___x_898_; double v___x_899_; double v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_895_ = lean_io_mono_nanos_now();
v___x_896_ = lean_float_of_nat(v___y_893_);
v___x_897_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0);
v___x_898_ = lean_float_div(v___x_896_, v___x_897_);
v___x_899_ = lean_float_of_nat(v___x_895_);
v___x_900_ = lean_float_div(v___x_899_, v___x_897_);
v___x_901_ = lean_box_float(v___x_898_);
v___x_902_ = lean_box_float(v___x_900_);
v___x_903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_903_, 0, v___x_901_);
lean_ctor_set(v___x_903_, 1, v___x_902_);
v___x_904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_904_, 0, v_a_894_);
lean_ctor_set(v___x_904_, 1, v___x_903_);
lean_inc_ref(v___y_887_);
lean_inc_ref(v___x_512_);
lean_inc(v_cls_511_);
v___x_905_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_511_, v___y_890_, v___x_512_, v___y_884_, v___y_883_, v___y_880_, v___y_887_, v___x_904_, v___y_881_, v___y_885_, v___y_886_, v___y_888_, v___y_891_, v___y_882_, v___y_889_, v___y_892_);
v___y_836_ = v___y_885_;
v___y_837_ = v___y_886_;
v___y_838_ = v___y_882_;
v___y_839_ = v___y_881_;
v___y_840_ = v___y_888_;
v___y_841_ = v___y_889_;
v___y_842_ = v___y_891_;
v___y_843_ = v___y_892_;
v___y_844_ = v___x_905_;
goto v___jp_835_;
}
v___jp_906_:
{
lean_object* v___x_920_; lean_object* v_a_921_; uint8_t v___x_922_; 
v___x_920_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v___y_919_);
v_a_921_ = lean_ctor_get(v___x_920_, 0);
lean_inc(v_a_921_);
lean_dec_ref(v___x_920_);
v___x_922_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v___y_910_, v___x_513_);
if (v___x_922_ == 0)
{
lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_923_ = lean_io_mono_nanos_now();
lean_inc(v___y_919_);
lean_inc_ref(v___y_916_);
lean_inc(v___y_908_);
lean_inc_ref(v___y_917_);
lean_inc(v___y_914_);
lean_inc_ref(v___y_912_);
lean_inc(v___y_911_);
lean_inc_ref(v___y_907_);
v___x_924_ = lean_apply_9(v___y_915_, v___y_907_, v___y_911_, v___y_912_, v___y_914_, v___y_917_, v___y_908_, v___y_916_, v___y_919_, lean_box(0));
if (lean_obj_tag(v___x_924_) == 0)
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
v_a_925_ = lean_ctor_get(v___x_924_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_924_);
if (v_isSharedCheck_932_ == 0)
{
v___x_927_ = v___x_924_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_924_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
lean_ctor_set_tag(v___x_927_, 1);
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_925_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
v___y_880_ = v_a_921_;
v___y_881_ = v___y_907_;
v___y_882_ = v___y_908_;
v___y_883_ = v___y_909_;
v___y_884_ = v___y_910_;
v___y_885_ = v___y_911_;
v___y_886_ = v___y_912_;
v___y_887_ = v___y_913_;
v___y_888_ = v___y_914_;
v___y_889_ = v___y_916_;
v___y_890_ = v___y_918_;
v___y_891_ = v___y_917_;
v___y_892_ = v___y_919_;
v___y_893_ = v___x_923_;
v_a_894_ = v___x_930_;
goto v___jp_879_;
}
}
}
else
{
lean_object* v_a_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_940_; 
v_a_933_ = lean_ctor_get(v___x_924_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v___x_924_);
if (v_isSharedCheck_940_ == 0)
{
v___x_935_ = v___x_924_;
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_a_933_);
lean_dec(v___x_924_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_938_; 
if (v_isShared_936_ == 0)
{
lean_ctor_set_tag(v___x_935_, 0);
v___x_938_ = v___x_935_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_a_933_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
v___y_880_ = v_a_921_;
v___y_881_ = v___y_907_;
v___y_882_ = v___y_908_;
v___y_883_ = v___y_909_;
v___y_884_ = v___y_910_;
v___y_885_ = v___y_911_;
v___y_886_ = v___y_912_;
v___y_887_ = v___y_913_;
v___y_888_ = v___y_914_;
v___y_889_ = v___y_916_;
v___y_890_ = v___y_918_;
v___y_891_ = v___y_917_;
v___y_892_ = v___y_919_;
v___y_893_ = v___x_923_;
v_a_894_ = v___x_938_;
goto v___jp_879_;
}
}
}
}
else
{
lean_object* v___x_941_; lean_object* v___x_942_; 
v___x_941_ = lean_io_get_num_heartbeats();
lean_inc(v___y_919_);
lean_inc_ref(v___y_916_);
lean_inc(v___y_908_);
lean_inc_ref(v___y_917_);
lean_inc(v___y_914_);
lean_inc_ref(v___y_912_);
lean_inc(v___y_911_);
lean_inc_ref(v___y_907_);
v___x_942_ = lean_apply_9(v___y_915_, v___y_907_, v___y_911_, v___y_912_, v___y_914_, v___y_917_, v___y_908_, v___y_916_, v___y_919_, lean_box(0));
if (lean_obj_tag(v___x_942_) == 0)
{
lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_950_; 
v_a_943_ = lean_ctor_get(v___x_942_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_942_);
if (v_isSharedCheck_950_ == 0)
{
v___x_945_ = v___x_942_;
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v___x_942_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_948_; 
if (v_isShared_946_ == 0)
{
lean_ctor_set_tag(v___x_945_, 1);
v___x_948_ = v___x_945_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v_a_943_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
v___y_856_ = v_a_921_;
v___y_857_ = v___y_907_;
v___y_858_ = v___y_908_;
v___y_859_ = v___y_909_;
v___y_860_ = v___y_910_;
v___y_861_ = v___y_911_;
v___y_862_ = v___y_912_;
v___y_863_ = v___y_913_;
v___y_864_ = v___y_914_;
v___y_865_ = v___x_941_;
v___y_866_ = v___y_916_;
v___y_867_ = v___y_918_;
v___y_868_ = v___y_917_;
v___y_869_ = v___y_919_;
v_a_870_ = v___x_948_;
goto v___jp_855_;
}
}
}
else
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_958_; 
v_a_951_ = lean_ctor_get(v___x_942_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_942_);
if (v_isSharedCheck_958_ == 0)
{
v___x_953_ = v___x_942_;
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_942_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_954_ == 0)
{
lean_ctor_set_tag(v___x_953_, 0);
v___x_956_ = v___x_953_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_951_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
v___y_856_ = v_a_921_;
v___y_857_ = v___y_907_;
v___y_858_ = v___y_908_;
v___y_859_ = v___y_909_;
v___y_860_ = v___y_910_;
v___y_861_ = v___y_911_;
v___y_862_ = v___y_912_;
v___y_863_ = v___y_913_;
v___y_864_ = v___y_914_;
v___y_865_ = v___x_941_;
v___y_866_ = v___y_916_;
v___y_867_ = v___y_918_;
v___y_868_ = v___y_917_;
v___y_869_ = v___y_919_;
v_a_870_ = v___x_956_;
goto v___jp_855_;
}
}
}
}
}
v___jp_959_:
{
if (v_enums_646_ == 0)
{
v___y_813_ = v___y_960_;
v___y_814_ = v___y_961_;
v___y_815_ = v___y_962_;
v___y_816_ = v___y_963_;
v___y_817_ = v___y_964_;
v___y_818_ = v___y_965_;
v___y_819_ = v___y_966_;
v___y_820_ = v___y_967_;
goto v___jp_812_;
}
else
{
lean_object* v___x_968_; lean_object* v_options_969_; uint8_t v_hasTrace_970_; 
v___x_968_ = l_Lean_Meta_Tactic_BVDecide_Normalize_enumsPass;
v_options_969_ = lean_ctor_get(v___y_966_, 2);
v_hasTrace_970_ = lean_ctor_get_uint8(v_options_969_, sizeof(void*)*1);
if (v_hasTrace_970_ == 0)
{
lean_object* v_run_x27_971_; lean_object* v___x_972_; 
v_run_x27_971_ = lean_ctor_get(v___x_968_, 1);
lean_inc_ref(v_run_x27_971_);
lean_inc(v___y_967_);
lean_inc_ref(v___y_966_);
lean_inc(v___y_965_);
lean_inc_ref(v___y_964_);
lean_inc(v___y_963_);
lean_inc_ref(v___y_962_);
lean_inc(v___y_961_);
lean_inc_ref(v___y_960_);
v___x_972_ = lean_apply_9(v_run_x27_971_, v___y_960_, v___y_961_, v___y_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, lean_box(0));
v___y_836_ = v___y_961_;
v___y_837_ = v___y_962_;
v___y_838_ = v___y_965_;
v___y_839_ = v___y_960_;
v___y_840_ = v___y_963_;
v___y_841_ = v___y_966_;
v___y_842_ = v___y_964_;
v___y_843_ = v___y_967_;
v___y_844_ = v___x_972_;
goto v___jp_835_;
}
else
{
lean_object* v_run_x27_973_; lean_object* v_inheritedTraceOptions_974_; lean_object* v___f_975_; lean_object* v___x_976_; lean_object* v___x_977_; uint8_t v___x_978_; 
v_run_x27_973_ = lean_ctor_get(v___x_968_, 1);
v_inheritedTraceOptions_974_ = lean_ctor_get(v___y_966_, 13);
v___f_975_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__5);
v___x_976_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__3));
lean_inc(v_cls_511_);
v___x_977_ = l_Lean_Name_append(v___x_976_, v_cls_511_);
v___x_978_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_974_, v_options_969_, v___x_977_);
lean_dec(v___x_977_);
if (v___x_978_ == 0)
{
lean_object* v___x_979_; uint8_t v___x_980_; 
v___x_979_ = l_Lean_trace_profiler;
v___x_980_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_options_969_, v___x_979_);
if (v___x_980_ == 0)
{
lean_object* v___x_981_; 
lean_inc_ref(v_run_x27_973_);
lean_inc(v___y_967_);
lean_inc_ref(v___y_966_);
lean_inc(v___y_965_);
lean_inc_ref(v___y_964_);
lean_inc(v___y_963_);
lean_inc_ref(v___y_962_);
lean_inc(v___y_961_);
lean_inc_ref(v___y_960_);
v___x_981_ = lean_apply_9(v_run_x27_973_, v___y_960_, v___y_961_, v___y_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, lean_box(0));
v___y_836_ = v___y_961_;
v___y_837_ = v___y_962_;
v___y_838_ = v___y_965_;
v___y_839_ = v___y_960_;
v___y_840_ = v___y_963_;
v___y_841_ = v___y_966_;
v___y_842_ = v___y_964_;
v___y_843_ = v___y_967_;
v___y_844_ = v___x_981_;
goto v___jp_835_;
}
else
{
lean_inc_ref(v_run_x27_973_);
v___y_907_ = v___y_960_;
v___y_908_ = v___y_965_;
v___y_909_ = v___x_978_;
v___y_910_ = v_options_969_;
v___y_911_ = v___y_961_;
v___y_912_ = v___y_962_;
v___y_913_ = v___f_975_;
v___y_914_ = v___y_963_;
v___y_915_ = v_run_x27_973_;
v___y_916_ = v___y_966_;
v___y_917_ = v___y_964_;
v___y_918_ = v_hasTrace_970_;
v___y_919_ = v___y_967_;
goto v___jp_906_;
}
}
else
{
lean_inc_ref(v_run_x27_973_);
v___y_907_ = v___y_960_;
v___y_908_ = v___y_965_;
v___y_909_ = v___x_978_;
v___y_910_ = v_options_969_;
v___y_911_ = v___y_961_;
v___y_912_ = v___y_962_;
v___y_913_ = v___f_975_;
v___y_914_ = v___y_963_;
v___y_915_ = v_run_x27_973_;
v___y_916_ = v___y_966_;
v___y_917_ = v___y_964_;
v___y_918_ = v_hasTrace_970_;
v___y_919_ = v___y_967_;
goto v___jp_906_;
}
}
}
}
v___jp_982_:
{
if (lean_obj_tag(v___y_991_) == 0)
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1001_; 
v_a_992_ = lean_ctor_get(v___y_991_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___y_991_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_994_ = v___y_991_;
v_isShared_995_ = v_isSharedCheck_1001_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___y_991_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1001_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
uint8_t v___x_996_; 
v___x_996_ = lean_unbox(v_a_992_);
lean_dec(v_a_992_);
if (v___x_996_ == 0)
{
lean_del_object(v___x_994_);
v___y_960_ = v___y_990_;
v___y_961_ = v___y_983_;
v___y_962_ = v___y_987_;
v___y_963_ = v___y_986_;
v___y_964_ = v___y_988_;
v___y_965_ = v___y_985_;
v___y_966_ = v___y_989_;
v___y_967_ = v___y_984_;
goto v___jp_959_;
}
else
{
lean_object* v___x_997_; lean_object* v___x_999_; 
lean_dec_ref(v___x_512_);
lean_dec(v_cls_511_);
v___x_997_ = lean_box(v_hasTrace_510_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 0, v___x_997_);
v___x_999_ = v___x_994_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v___x_997_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
}
}
else
{
lean_dec_ref(v___x_512_);
lean_dec(v_cls_511_);
return v___y_991_;
}
}
v___jp_1002_:
{
lean_object* v___x_1018_; double v___x_1019_; double v___x_1020_; double v___x_1021_; double v___x_1022_; double v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1018_ = lean_io_mono_nanos_now();
v___x_1019_ = lean_float_of_nat(v___y_1010_);
v___x_1020_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0);
v___x_1021_ = lean_float_div(v___x_1019_, v___x_1020_);
v___x_1022_ = lean_float_of_nat(v___x_1018_);
v___x_1023_ = lean_float_div(v___x_1022_, v___x_1020_);
v___x_1024_ = lean_box_float(v___x_1021_);
v___x_1025_ = lean_box_float(v___x_1023_);
v___x_1026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1024_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___x_1027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1027_, 0, v_a_1017_);
lean_ctor_set(v___x_1027_, 1, v___x_1026_);
lean_inc_ref(v___y_1005_);
lean_inc_ref(v___x_512_);
lean_inc(v_cls_511_);
v___x_1028_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_511_, v___y_1011_, v___x_512_, v___y_1014_, v___y_1007_, v___y_1012_, v___y_1005_, v___x_1027_, v___y_1013_, v___y_1003_, v___y_1015_, v___y_1006_, v___y_1008_, v___y_1016_, v___y_1009_, v___y_1004_);
v___y_983_ = v___y_1003_;
v___y_984_ = v___y_1004_;
v___y_985_ = v___y_1016_;
v___y_986_ = v___y_1006_;
v___y_987_ = v___y_1015_;
v___y_988_ = v___y_1008_;
v___y_989_ = v___y_1009_;
v___y_990_ = v___y_1013_;
v___y_991_ = v___x_1028_;
goto v___jp_982_;
}
v___jp_1029_:
{
lean_object* v___x_1045_; double v___x_1046_; double v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1045_ = lean_io_get_num_heartbeats();
v___x_1046_ = lean_float_of_nat(v___y_1043_);
v___x_1047_ = lean_float_of_nat(v___x_1045_);
v___x_1048_ = lean_box_float(v___x_1046_);
v___x_1049_ = lean_box_float(v___x_1047_);
v___x_1050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1048_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v___x_1051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1051_, 0, v_a_1044_);
lean_ctor_set(v___x_1051_, 1, v___x_1050_);
lean_inc_ref(v___y_1032_);
lean_inc_ref(v___x_512_);
lean_inc(v_cls_511_);
v___x_1052_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_511_, v___y_1037_, v___x_512_, v___y_1040_, v___y_1034_, v___y_1038_, v___y_1032_, v___x_1051_, v___y_1039_, v___y_1030_, v___y_1041_, v___y_1033_, v___y_1035_, v___y_1042_, v___y_1036_, v___y_1031_);
v___y_983_ = v___y_1030_;
v___y_984_ = v___y_1031_;
v___y_985_ = v___y_1042_;
v___y_986_ = v___y_1033_;
v___y_987_ = v___y_1041_;
v___y_988_ = v___y_1035_;
v___y_989_ = v___y_1036_;
v___y_990_ = v___y_1039_;
v___y_991_ = v___x_1052_;
goto v___jp_982_;
}
v___jp_1053_:
{
lean_object* v___x_1067_; lean_object* v_a_1068_; uint8_t v___x_1069_; 
v___x_1067_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v___y_1055_);
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_a_1068_);
lean_dec_ref(v___x_1067_);
v___x_1069_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v___y_1063_, v___x_513_);
if (v___x_1069_ == 0)
{
lean_object* v___x_1070_; lean_object* v___x_1071_; 
v___x_1070_ = lean_io_mono_nanos_now();
lean_inc(v___y_1055_);
lean_inc_ref(v___y_1060_);
lean_inc(v___y_1065_);
lean_inc_ref(v___y_1058_);
lean_inc(v___y_1057_);
lean_inc_ref(v___y_1064_);
lean_inc(v___y_1054_);
lean_inc_ref(v___y_1061_);
v___x_1071_ = lean_apply_9(v___y_1066_, v___y_1061_, v___y_1054_, v___y_1064_, v___y_1057_, v___y_1058_, v___y_1065_, v___y_1060_, v___y_1055_, lean_box(0));
if (lean_obj_tag(v___x_1071_) == 0)
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1079_; 
v_a_1072_ = lean_ctor_get(v___x_1071_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1071_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1074_ = v___x_1071_;
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_1071_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1077_; 
if (v_isShared_1075_ == 0)
{
lean_ctor_set_tag(v___x_1074_, 1);
v___x_1077_ = v___x_1074_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_a_1072_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
v___y_1003_ = v___y_1054_;
v___y_1004_ = v___y_1055_;
v___y_1005_ = v___y_1056_;
v___y_1006_ = v___y_1057_;
v___y_1007_ = v___y_1059_;
v___y_1008_ = v___y_1058_;
v___y_1009_ = v___y_1060_;
v___y_1010_ = v___x_1070_;
v___y_1011_ = v___y_1062_;
v___y_1012_ = v_a_1068_;
v___y_1013_ = v___y_1061_;
v___y_1014_ = v___y_1063_;
v___y_1015_ = v___y_1064_;
v___y_1016_ = v___y_1065_;
v_a_1017_ = v___x_1077_;
goto v___jp_1002_;
}
}
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1087_; 
v_a_1080_ = lean_ctor_get(v___x_1071_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1071_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1082_ = v___x_1071_;
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1071_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1085_; 
if (v_isShared_1083_ == 0)
{
lean_ctor_set_tag(v___x_1082_, 0);
v___x_1085_ = v___x_1082_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_a_1080_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
v___y_1003_ = v___y_1054_;
v___y_1004_ = v___y_1055_;
v___y_1005_ = v___y_1056_;
v___y_1006_ = v___y_1057_;
v___y_1007_ = v___y_1059_;
v___y_1008_ = v___y_1058_;
v___y_1009_ = v___y_1060_;
v___y_1010_ = v___x_1070_;
v___y_1011_ = v___y_1062_;
v___y_1012_ = v_a_1068_;
v___y_1013_ = v___y_1061_;
v___y_1014_ = v___y_1063_;
v___y_1015_ = v___y_1064_;
v___y_1016_ = v___y_1065_;
v_a_1017_ = v___x_1085_;
goto v___jp_1002_;
}
}
}
}
else
{
lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1088_ = lean_io_get_num_heartbeats();
lean_inc(v___y_1055_);
lean_inc_ref(v___y_1060_);
lean_inc(v___y_1065_);
lean_inc_ref(v___y_1058_);
lean_inc(v___y_1057_);
lean_inc_ref(v___y_1064_);
lean_inc(v___y_1054_);
lean_inc_ref(v___y_1061_);
v___x_1089_ = lean_apply_9(v___y_1066_, v___y_1061_, v___y_1054_, v___y_1064_, v___y_1057_, v___y_1058_, v___y_1065_, v___y_1060_, v___y_1055_, lean_box(0));
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
v_a_1090_ = lean_ctor_get(v___x_1089_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1089_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1092_ = v___x_1089_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1089_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1095_; 
if (v_isShared_1093_ == 0)
{
lean_ctor_set_tag(v___x_1092_, 1);
v___x_1095_ = v___x_1092_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_a_1090_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
v___y_1030_ = v___y_1054_;
v___y_1031_ = v___y_1055_;
v___y_1032_ = v___y_1056_;
v___y_1033_ = v___y_1057_;
v___y_1034_ = v___y_1059_;
v___y_1035_ = v___y_1058_;
v___y_1036_ = v___y_1060_;
v___y_1037_ = v___y_1062_;
v___y_1038_ = v_a_1068_;
v___y_1039_ = v___y_1061_;
v___y_1040_ = v___y_1063_;
v___y_1041_ = v___y_1064_;
v___y_1042_ = v___y_1065_;
v___y_1043_ = v___x_1088_;
v_a_1044_ = v___x_1095_;
goto v___jp_1029_;
}
}
}
else
{
lean_object* v_a_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1105_; 
v_a_1098_ = lean_ctor_get(v___x_1089_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_1089_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1100_ = v___x_1089_;
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_a_1098_);
lean_dec(v___x_1089_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___x_1103_; 
if (v_isShared_1101_ == 0)
{
lean_ctor_set_tag(v___x_1100_, 0);
v___x_1103_ = v___x_1100_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_a_1098_);
v___x_1103_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
v___y_1030_ = v___y_1054_;
v___y_1031_ = v___y_1055_;
v___y_1032_ = v___y_1056_;
v___y_1033_ = v___y_1057_;
v___y_1034_ = v___y_1059_;
v___y_1035_ = v___y_1058_;
v___y_1036_ = v___y_1060_;
v___y_1037_ = v___y_1062_;
v___y_1038_ = v_a_1068_;
v___y_1039_ = v___y_1061_;
v___y_1040_ = v___y_1063_;
v___y_1041_ = v___y_1064_;
v___y_1042_ = v___y_1065_;
v___y_1043_ = v___x_1088_;
v_a_1044_ = v___x_1103_;
goto v___jp_1029_;
}
}
}
}
}
v___jp_1106_:
{
if (v_structures_644_ == 0)
{
v___y_960_ = v___y_1107_;
v___y_961_ = v___y_1108_;
v___y_962_ = v___y_1109_;
v___y_963_ = v___y_1110_;
v___y_964_ = v___y_1111_;
v___y_965_ = v___y_1112_;
v___y_966_ = v___y_1113_;
v___y_967_ = v___y_1114_;
goto v___jp_959_;
}
else
{
lean_object* v___x_1115_; lean_object* v_options_1116_; uint8_t v_hasTrace_1117_; 
v___x_1115_ = l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass;
v_options_1116_ = lean_ctor_get(v___y_1113_, 2);
v_hasTrace_1117_ = lean_ctor_get_uint8(v_options_1116_, sizeof(void*)*1);
if (v_hasTrace_1117_ == 0)
{
lean_object* v_run_x27_1118_; lean_object* v___x_1119_; 
v_run_x27_1118_ = lean_ctor_get(v___x_1115_, 1);
lean_inc_ref(v_run_x27_1118_);
lean_inc(v___y_1114_);
lean_inc_ref(v___y_1113_);
lean_inc(v___y_1112_);
lean_inc_ref(v___y_1111_);
lean_inc(v___y_1110_);
lean_inc_ref(v___y_1109_);
lean_inc(v___y_1108_);
lean_inc_ref(v___y_1107_);
v___x_1119_ = lean_apply_9(v_run_x27_1118_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_, lean_box(0));
v___y_983_ = v___y_1108_;
v___y_984_ = v___y_1114_;
v___y_985_ = v___y_1112_;
v___y_986_ = v___y_1110_;
v___y_987_ = v___y_1109_;
v___y_988_ = v___y_1111_;
v___y_989_ = v___y_1113_;
v___y_990_ = v___y_1107_;
v___y_991_ = v___x_1119_;
goto v___jp_982_;
}
else
{
lean_object* v_run_x27_1120_; lean_object* v_inheritedTraceOptions_1121_; lean_object* v___f_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; uint8_t v___x_1125_; 
v_run_x27_1120_ = lean_ctor_get(v___x_1115_, 1);
v_inheritedTraceOptions_1121_ = lean_ctor_get(v___y_1113_, 13);
v___f_1122_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__6);
v___x_1123_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__3));
lean_inc(v_cls_511_);
v___x_1124_ = l_Lean_Name_append(v___x_1123_, v_cls_511_);
v___x_1125_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1121_, v_options_1116_, v___x_1124_);
lean_dec(v___x_1124_);
if (v___x_1125_ == 0)
{
lean_object* v___x_1126_; uint8_t v___x_1127_; 
v___x_1126_ = l_Lean_trace_profiler;
v___x_1127_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_options_1116_, v___x_1126_);
if (v___x_1127_ == 0)
{
lean_object* v___x_1128_; 
lean_inc_ref(v_run_x27_1120_);
lean_inc(v___y_1114_);
lean_inc_ref(v___y_1113_);
lean_inc(v___y_1112_);
lean_inc_ref(v___y_1111_);
lean_inc(v___y_1110_);
lean_inc_ref(v___y_1109_);
lean_inc(v___y_1108_);
lean_inc_ref(v___y_1107_);
v___x_1128_ = lean_apply_9(v_run_x27_1120_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_, lean_box(0));
v___y_983_ = v___y_1108_;
v___y_984_ = v___y_1114_;
v___y_985_ = v___y_1112_;
v___y_986_ = v___y_1110_;
v___y_987_ = v___y_1109_;
v___y_988_ = v___y_1111_;
v___y_989_ = v___y_1113_;
v___y_990_ = v___y_1107_;
v___y_991_ = v___x_1128_;
goto v___jp_982_;
}
else
{
lean_inc_ref(v_run_x27_1120_);
v___y_1054_ = v___y_1108_;
v___y_1055_ = v___y_1114_;
v___y_1056_ = v___f_1122_;
v___y_1057_ = v___y_1110_;
v___y_1058_ = v___y_1111_;
v___y_1059_ = v___x_1125_;
v___y_1060_ = v___y_1113_;
v___y_1061_ = v___y_1107_;
v___y_1062_ = v_hasTrace_1117_;
v___y_1063_ = v_options_1116_;
v___y_1064_ = v___y_1109_;
v___y_1065_ = v___y_1112_;
v___y_1066_ = v_run_x27_1120_;
goto v___jp_1053_;
}
}
else
{
lean_inc_ref(v_run_x27_1120_);
v___y_1054_ = v___y_1108_;
v___y_1055_ = v___y_1114_;
v___y_1056_ = v___f_1122_;
v___y_1057_ = v___y_1110_;
v___y_1058_ = v___y_1111_;
v___y_1059_ = v___x_1125_;
v___y_1060_ = v___y_1113_;
v___y_1061_ = v___y_1107_;
v___y_1062_ = v_hasTrace_1117_;
v___y_1063_ = v_options_1116_;
v___y_1064_ = v___y_1109_;
v___y_1065_ = v___y_1112_;
v___y_1066_ = v_run_x27_1120_;
goto v___jp_1053_;
}
}
}
}
v___jp_1129_:
{
if (lean_obj_tag(v___y_1130_) == 0)
{
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1140_; 
v_a_1131_ = lean_ctor_get(v___y_1130_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___y_1130_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1133_ = v___y_1130_;
v_isShared_1134_ = v_isSharedCheck_1140_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___y_1130_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1140_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
uint8_t v___x_1135_; 
v___x_1135_ = lean_unbox(v_a_1131_);
lean_dec(v_a_1131_);
if (v___x_1135_ == 0)
{
lean_del_object(v___x_1133_);
v___y_1107_ = v___y_515_;
v___y_1108_ = v___y_516_;
v___y_1109_ = v___y_517_;
v___y_1110_ = v___y_518_;
v___y_1111_ = v___y_519_;
v___y_1112_ = v___y_520_;
v___y_1113_ = v___y_521_;
v___y_1114_ = v___y_522_;
goto v___jp_1106_;
}
else
{
lean_object* v___x_1136_; lean_object* v___x_1138_; 
lean_dec_ref(v___x_512_);
lean_dec(v_cls_511_);
v___x_1136_ = lean_box(v_hasTrace_510_);
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 0, v___x_1136_);
v___x_1138_ = v___x_1133_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
}
else
{
lean_dec_ref(v___x_512_);
lean_dec(v_cls_511_);
return v___y_1130_;
}
}
v___jp_1141_:
{
lean_object* v___x_1149_; double v___x_1150_; double v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1149_ = lean_io_get_num_heartbeats();
v___x_1150_ = lean_float_of_nat(v___y_1146_);
v___x_1151_ = lean_float_of_nat(v___x_1149_);
v___x_1152_ = lean_box_float(v___x_1150_);
v___x_1153_ = lean_box_float(v___x_1151_);
v___x_1154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1152_);
lean_ctor_set(v___x_1154_, 1, v___x_1153_);
v___x_1155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1155_, 0, v_a_1148_);
lean_ctor_set(v___x_1155_, 1, v___x_1154_);
lean_inc_ref(v___y_1147_);
lean_inc_ref(v___x_512_);
lean_inc(v_cls_511_);
v___x_1156_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_511_, v___y_1142_, v___x_512_, v___y_1143_, v___y_1144_, v___y_1145_, v___y_1147_, v___x_1155_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
v___y_1130_ = v___x_1156_;
goto v___jp_1129_;
}
v___jp_1157_:
{
lean_object* v___x_1165_; double v___x_1166_; double v___x_1167_; double v___x_1168_; double v___x_1169_; double v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1165_ = lean_io_mono_nanos_now();
v___x_1166_ = lean_float_of_nat(v___y_1161_);
v___x_1167_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0);
v___x_1168_ = lean_float_div(v___x_1166_, v___x_1167_);
v___x_1169_ = lean_float_of_nat(v___x_1165_);
v___x_1170_ = lean_float_div(v___x_1169_, v___x_1167_);
v___x_1171_ = lean_box_float(v___x_1168_);
v___x_1172_ = lean_box_float(v___x_1170_);
v___x_1173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1171_);
lean_ctor_set(v___x_1173_, 1, v___x_1172_);
v___x_1174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1174_, 0, v_a_1164_);
lean_ctor_set(v___x_1174_, 1, v___x_1173_);
lean_inc_ref(v___y_1163_);
lean_inc_ref(v___x_512_);
lean_inc(v_cls_511_);
v___x_1175_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_511_, v___y_1158_, v___x_512_, v___y_1159_, v___y_1160_, v___y_1162_, v___y_1163_, v___x_1174_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
v___y_1130_ = v___x_1175_;
goto v___jp_1129_;
}
v___jp_1176_:
{
lean_object* v___x_1182_; lean_object* v_a_1183_; uint8_t v___x_1184_; 
v___x_1182_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v___y_522_);
v_a_1183_ = lean_ctor_get(v___x_1182_, 0);
lean_inc(v_a_1183_);
lean_dec_ref(v___x_1182_);
v___x_1184_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v___y_1178_, v___x_513_);
if (v___x_1184_ == 0)
{
lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1185_ = lean_io_mono_nanos_now();
lean_inc(v___y_522_);
lean_inc_ref(v___y_521_);
lean_inc(v___y_520_);
lean_inc_ref(v___y_519_);
lean_inc(v___y_518_);
lean_inc_ref(v___y_517_);
lean_inc(v___y_516_);
lean_inc_ref(v___y_515_);
v___x_1186_ = lean_apply_9(v___y_1180_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, lean_box(0));
if (lean_obj_tag(v___x_1186_) == 0)
{
lean_object* v_a_1187_; lean_object* v___x_1189_; uint8_t v_isShared_1190_; uint8_t v_isSharedCheck_1194_; 
v_a_1187_ = lean_ctor_get(v___x_1186_, 0);
v_isSharedCheck_1194_ = !lean_is_exclusive(v___x_1186_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1189_ = v___x_1186_;
v_isShared_1190_ = v_isSharedCheck_1194_;
goto v_resetjp_1188_;
}
else
{
lean_inc(v_a_1187_);
lean_dec(v___x_1186_);
v___x_1189_ = lean_box(0);
v_isShared_1190_ = v_isSharedCheck_1194_;
goto v_resetjp_1188_;
}
v_resetjp_1188_:
{
lean_object* v___x_1192_; 
if (v_isShared_1190_ == 0)
{
lean_ctor_set_tag(v___x_1189_, 1);
v___x_1192_ = v___x_1189_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v_a_1187_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
v___y_1158_ = v___y_1177_;
v___y_1159_ = v___y_1178_;
v___y_1160_ = v___y_1179_;
v___y_1161_ = v___x_1185_;
v___y_1162_ = v_a_1183_;
v___y_1163_ = v___y_1181_;
v_a_1164_ = v___x_1192_;
goto v___jp_1157_;
}
}
}
else
{
lean_object* v_a_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1202_; 
v_a_1195_ = lean_ctor_get(v___x_1186_, 0);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1186_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1197_ = v___x_1186_;
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_a_1195_);
lean_dec(v___x_1186_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1200_; 
if (v_isShared_1198_ == 0)
{
lean_ctor_set_tag(v___x_1197_, 0);
v___x_1200_ = v___x_1197_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_a_1195_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
v___y_1158_ = v___y_1177_;
v___y_1159_ = v___y_1178_;
v___y_1160_ = v___y_1179_;
v___y_1161_ = v___x_1185_;
v___y_1162_ = v_a_1183_;
v___y_1163_ = v___y_1181_;
v_a_1164_ = v___x_1200_;
goto v___jp_1157_;
}
}
}
}
else
{
lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1203_ = lean_io_get_num_heartbeats();
lean_inc(v___y_522_);
lean_inc_ref(v___y_521_);
lean_inc(v___y_520_);
lean_inc_ref(v___y_519_);
lean_inc(v___y_518_);
lean_inc_ref(v___y_517_);
lean_inc(v___y_516_);
lean_inc_ref(v___y_515_);
v___x_1204_ = lean_apply_9(v___y_1180_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, lean_box(0));
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1212_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1212_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1207_ = v___x_1204_;
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1204_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1210_; 
if (v_isShared_1208_ == 0)
{
lean_ctor_set_tag(v___x_1207_, 1);
v___x_1210_ = v___x_1207_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v_a_1205_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
v___y_1142_ = v___y_1177_;
v___y_1143_ = v___y_1178_;
v___y_1144_ = v___y_1179_;
v___y_1145_ = v_a_1183_;
v___y_1146_ = v___x_1203_;
v___y_1147_ = v___y_1181_;
v_a_1148_ = v___x_1210_;
goto v___jp_1141_;
}
}
}
else
{
lean_object* v_a_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1220_; 
v_a_1213_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1215_ = v___x_1204_;
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_a_1213_);
lean_dec(v___x_1204_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v___x_1218_; 
if (v_isShared_1216_ == 0)
{
lean_ctor_set_tag(v___x_1215_, 0);
v___x_1218_ = v___x_1215_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_a_1213_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
v___y_1142_ = v___y_1177_;
v___y_1143_ = v___y_1178_;
v___y_1144_ = v___y_1179_;
v___y_1145_ = v_a_1183_;
v___y_1146_ = v___x_1203_;
v___y_1147_ = v___y_1181_;
v_a_1148_ = v___x_1218_;
goto v___jp_1141_;
}
}
}
}
}
v___jp_1221_:
{
lean_object* v___x_1222_; lean_object* v_options_1223_; uint8_t v_hasTrace_1224_; 
v___x_1222_ = l_Lean_Meta_Tactic_BVDecide_Normalize_typeAnalysisPass;
v_options_1223_ = lean_ctor_get(v___y_521_, 2);
v_hasTrace_1224_ = lean_ctor_get_uint8(v_options_1223_, sizeof(void*)*1);
if (v_hasTrace_1224_ == 0)
{
lean_object* v_run_x27_1225_; lean_object* v___x_1226_; 
v_run_x27_1225_ = lean_ctor_get(v___x_1222_, 1);
lean_inc_ref(v_run_x27_1225_);
lean_inc(v___y_522_);
lean_inc_ref(v___y_521_);
lean_inc(v___y_520_);
lean_inc_ref(v___y_519_);
lean_inc(v___y_518_);
lean_inc_ref(v___y_517_);
lean_inc(v___y_516_);
lean_inc_ref(v___y_515_);
v___x_1226_ = lean_apply_9(v_run_x27_1225_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, lean_box(0));
v___y_1130_ = v___x_1226_;
goto v___jp_1129_;
}
else
{
lean_object* v_run_x27_1227_; lean_object* v_inheritedTraceOptions_1228_; lean_object* v___f_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; uint8_t v___x_1232_; 
v_run_x27_1227_ = lean_ctor_get(v___x_1222_, 1);
v_inheritedTraceOptions_1228_ = lean_ctor_get(v___y_521_, 13);
v___f_1229_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__7);
v___x_1230_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__3));
lean_inc(v_cls_511_);
v___x_1231_ = l_Lean_Name_append(v___x_1230_, v_cls_511_);
v___x_1232_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1228_, v_options_1223_, v___x_1231_);
lean_dec(v___x_1231_);
if (v___x_1232_ == 0)
{
lean_object* v___x_1233_; uint8_t v___x_1234_; 
v___x_1233_ = l_Lean_trace_profiler;
v___x_1234_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_options_1223_, v___x_1233_);
if (v___x_1234_ == 0)
{
lean_object* v___x_1235_; 
lean_inc_ref(v_run_x27_1227_);
lean_inc(v___y_522_);
lean_inc_ref(v___y_521_);
lean_inc(v___y_520_);
lean_inc_ref(v___y_519_);
lean_inc(v___y_518_);
lean_inc_ref(v___y_517_);
lean_inc(v___y_516_);
lean_inc_ref(v___y_515_);
v___x_1235_ = lean_apply_9(v_run_x27_1227_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, lean_box(0));
v___y_1130_ = v___x_1235_;
goto v___jp_1129_;
}
else
{
lean_inc_ref(v_run_x27_1227_);
v___y_1177_ = v_hasTrace_1224_;
v___y_1178_ = v_options_1223_;
v___y_1179_ = v___x_1232_;
v___y_1180_ = v_run_x27_1227_;
v___y_1181_ = v___f_1229_;
goto v___jp_1176_;
}
}
else
{
lean_inc_ref(v_run_x27_1227_);
v___y_1177_ = v_hasTrace_1224_;
v___y_1178_ = v_options_1223_;
v___y_1179_ = v___x_1232_;
v___y_1180_ = v_run_x27_1227_;
v___y_1181_ = v___f_1229_;
goto v___jp_1176_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___boxed(lean_object* v___x_1236_, lean_object* v_hasTrace_1237_, lean_object* v_cls_1238_, lean_object* v___x_1239_, lean_object* v___x_1240_, lean_object* v_____r_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_){
_start:
{
uint8_t v___x_380784__boxed_1251_; uint8_t v_hasTrace_boxed_1252_; lean_object* v_res_1253_; 
v___x_380784__boxed_1251_ = lean_unbox(v___x_1236_);
v_hasTrace_boxed_1252_ = lean_unbox(v_hasTrace_1237_);
v_res_1253_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7(v___x_380784__boxed_1251_, v_hasTrace_boxed_1252_, v_cls_1238_, v___x_1239_, v___x_1240_, v_____r_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_);
lean_dec(v___y_1249_);
lean_dec_ref(v___y_1248_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1246_);
lean_dec(v___y_1245_);
lean_dec_ref(v___y_1244_);
lean_dec(v___y_1243_);
lean_dec_ref(v___y_1242_);
lean_dec_ref(v___x_1240_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__8(uint8_t v___x_1254_, lean_object* v_cls_1255_, lean_object* v___x_1256_, lean_object* v___x_1257_, lean_object* v_____r_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_){
_start:
{
uint8_t v___y_1269_; lean_object* v___y_1270_; lean_object* v___y_1286_; lean_object* v___y_1287_; lean_object* v___y_1288_; lean_object* v___y_1289_; lean_object* v___y_1290_; uint8_t v___y_1291_; lean_object* v___y_1292_; lean_object* v___y_1293_; lean_object* v___y_1294_; uint8_t v___y_1295_; lean_object* v___y_1296_; lean_object* v___y_1297_; lean_object* v___y_1298_; lean_object* v___y_1299_; uint8_t v___y_1300_; lean_object* v_a_1301_; lean_object* v___y_1314_; lean_object* v___y_1315_; lean_object* v___y_1316_; lean_object* v___y_1317_; lean_object* v___y_1318_; uint8_t v___y_1319_; lean_object* v___y_1320_; lean_object* v___y_1321_; lean_object* v___y_1322_; lean_object* v___y_1323_; uint8_t v___y_1324_; lean_object* v___y_1325_; lean_object* v___y_1326_; lean_object* v___y_1327_; uint8_t v___y_1328_; lean_object* v_a_1329_; lean_object* v___y_1339_; lean_object* v___y_1340_; lean_object* v___y_1341_; lean_object* v___y_1342_; uint8_t v___y_1343_; lean_object* v___y_1344_; lean_object* v___y_1345_; lean_object* v___y_1346_; lean_object* v___y_1347_; uint8_t v___y_1348_; lean_object* v___y_1349_; lean_object* v___y_1350_; lean_object* v___y_1351_; uint8_t v___y_1352_; uint8_t v_structures_1392_; uint8_t v_fixedInt_1393_; uint8_t v_enums_1394_; uint8_t v_shortCircuit_1395_; lean_object* v___y_1397_; lean_object* v___y_1398_; lean_object* v___y_1399_; lean_object* v___y_1400_; lean_object* v___y_1401_; lean_object* v___y_1402_; lean_object* v___y_1403_; lean_object* v___y_1404_; lean_object* v___y_1438_; lean_object* v___y_1439_; lean_object* v___y_1440_; lean_object* v___y_1441_; lean_object* v___y_1442_; lean_object* v___y_1443_; lean_object* v___y_1444_; lean_object* v___y_1445_; lean_object* v___y_1446_; lean_object* v___y_1458_; uint8_t v___y_1459_; lean_object* v___y_1460_; lean_object* v___y_1461_; lean_object* v___y_1462_; uint8_t v___y_1463_; lean_object* v___y_1464_; lean_object* v___y_1465_; lean_object* v___y_1466_; lean_object* v___y_1467_; lean_object* v___y_1468_; lean_object* v___y_1469_; lean_object* v___y_1470_; lean_object* v___y_1471_; lean_object* v_a_1472_; uint8_t v___y_1485_; lean_object* v___y_1486_; lean_object* v___y_1487_; lean_object* v___y_1488_; uint8_t v___y_1489_; lean_object* v___y_1490_; lean_object* v___y_1491_; lean_object* v___y_1492_; lean_object* v___y_1493_; lean_object* v___y_1494_; lean_object* v___y_1495_; lean_object* v___y_1496_; lean_object* v___y_1497_; lean_object* v___y_1498_; lean_object* v_a_1499_; uint8_t v___y_1509_; lean_object* v___y_1510_; lean_object* v___y_1511_; lean_object* v___y_1512_; lean_object* v___y_1513_; uint8_t v___y_1514_; lean_object* v___y_1515_; lean_object* v___y_1516_; lean_object* v___y_1517_; lean_object* v___y_1518_; lean_object* v___y_1519_; lean_object* v___y_1520_; lean_object* v___y_1521_; lean_object* v___y_1562_; lean_object* v___y_1563_; lean_object* v___y_1564_; lean_object* v___y_1565_; lean_object* v___y_1566_; lean_object* v___y_1567_; lean_object* v___y_1568_; lean_object* v___y_1569_; lean_object* v___y_1585_; lean_object* v___y_1586_; lean_object* v___y_1587_; lean_object* v___y_1588_; lean_object* v___y_1589_; lean_object* v___y_1590_; lean_object* v___y_1591_; lean_object* v___y_1592_; lean_object* v___y_1593_; lean_object* v___y_1605_; lean_object* v___y_1606_; lean_object* v___y_1607_; lean_object* v___y_1608_; uint8_t v___y_1609_; uint8_t v___y_1610_; lean_object* v___y_1611_; lean_object* v___y_1612_; lean_object* v___y_1613_; lean_object* v___y_1614_; lean_object* v___y_1615_; lean_object* v___y_1616_; lean_object* v___y_1617_; lean_object* v___y_1618_; lean_object* v_a_1619_; lean_object* v___y_1629_; lean_object* v___y_1630_; lean_object* v___y_1631_; uint8_t v___y_1632_; uint8_t v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1635_; lean_object* v___y_1636_; lean_object* v___y_1637_; lean_object* v___y_1638_; lean_object* v___y_1639_; lean_object* v___y_1640_; lean_object* v___y_1641_; lean_object* v___y_1642_; lean_object* v_a_1643_; lean_object* v___y_1656_; lean_object* v___y_1657_; uint8_t v___y_1658_; lean_object* v___y_1659_; uint8_t v___y_1660_; lean_object* v___y_1661_; lean_object* v___y_1662_; lean_object* v___y_1663_; lean_object* v___y_1664_; lean_object* v___y_1665_; lean_object* v___y_1666_; lean_object* v___y_1667_; lean_object* v___y_1668_; lean_object* v___y_1709_; lean_object* v___y_1710_; lean_object* v___y_1711_; lean_object* v___y_1712_; lean_object* v___y_1713_; lean_object* v___y_1714_; lean_object* v___y_1715_; lean_object* v___y_1716_; lean_object* v___y_1732_; lean_object* v___y_1733_; lean_object* v___y_1734_; lean_object* v___y_1735_; lean_object* v___y_1736_; lean_object* v___y_1737_; lean_object* v___y_1738_; lean_object* v___y_1739_; lean_object* v___y_1740_; lean_object* v___y_1752_; lean_object* v___y_1753_; uint8_t v___y_1754_; uint8_t v___y_1755_; lean_object* v___y_1756_; lean_object* v___y_1757_; lean_object* v___y_1758_; lean_object* v___y_1759_; lean_object* v___y_1760_; lean_object* v___y_1761_; lean_object* v___y_1762_; lean_object* v___y_1763_; lean_object* v___y_1764_; lean_object* v___y_1765_; lean_object* v_a_1766_; lean_object* v___y_1779_; lean_object* v___y_1780_; uint8_t v___y_1781_; uint8_t v___y_1782_; lean_object* v___y_1783_; lean_object* v___y_1784_; lean_object* v___y_1785_; lean_object* v___y_1786_; lean_object* v___y_1787_; lean_object* v___y_1788_; lean_object* v___y_1789_; lean_object* v___y_1790_; lean_object* v___y_1791_; lean_object* v___y_1792_; lean_object* v_a_1793_; lean_object* v___y_1803_; lean_object* v___y_1804_; lean_object* v___y_1805_; uint8_t v___y_1806_; uint8_t v___y_1807_; lean_object* v___y_1808_; lean_object* v___y_1809_; lean_object* v___y_1810_; lean_object* v___y_1811_; lean_object* v___y_1812_; lean_object* v___y_1813_; lean_object* v___y_1814_; lean_object* v___y_1815_; lean_object* v___y_1856_; lean_object* v___y_1857_; lean_object* v___y_1858_; lean_object* v___y_1859_; lean_object* v___y_1860_; lean_object* v___y_1861_; lean_object* v___y_1862_; lean_object* v___y_1863_; lean_object* v___y_1879_; uint8_t v___y_1891_; lean_object* v___y_1892_; lean_object* v___y_1893_; lean_object* v___y_1894_; lean_object* v___y_1895_; uint8_t v___y_1896_; lean_object* v_a_1897_; uint8_t v___y_1907_; lean_object* v___y_1908_; lean_object* v___y_1909_; lean_object* v___y_1910_; lean_object* v___y_1911_; uint8_t v___y_1912_; lean_object* v_a_1913_; uint8_t v___y_1926_; lean_object* v___y_1927_; lean_object* v___y_1928_; uint8_t v___y_1929_; lean_object* v___y_1930_; 
v_structures_1392_ = lean_ctor_get_uint8(v___y_1259_, sizeof(void*)*2 + 5);
v_fixedInt_1393_ = lean_ctor_get_uint8(v___y_1259_, sizeof(void*)*2 + 6);
v_enums_1394_ = lean_ctor_get_uint8(v___y_1259_, sizeof(void*)*2 + 7);
v_shortCircuit_1395_ = lean_ctor_get_uint8(v___y_1259_, sizeof(void*)*2 + 9);
if (v_structures_1392_ == 0)
{
if (v_enums_1394_ == 0)
{
v___y_1856_ = v___y_1259_;
v___y_1857_ = v___y_1260_;
v___y_1858_ = v___y_1261_;
v___y_1859_ = v___y_1262_;
v___y_1860_ = v___y_1263_;
v___y_1861_ = v___y_1264_;
v___y_1862_ = v___y_1265_;
v___y_1863_ = v___y_1266_;
goto v___jp_1855_;
}
else
{
goto v___jp_1970_;
}
}
else
{
goto v___jp_1970_;
}
v___jp_1268_:
{
if (lean_obj_tag(v___y_1270_) == 0)
{
lean_object* v_a_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1284_; 
v_a_1271_ = lean_ctor_get(v___y_1270_, 0);
v_isSharedCheck_1284_ = !lean_is_exclusive(v___y_1270_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1273_ = v___y_1270_;
v_isShared_1274_ = v_isSharedCheck_1284_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_a_1271_);
lean_dec(v___y_1270_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1284_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
uint8_t v___x_1275_; 
v___x_1275_ = lean_unbox(v_a_1271_);
lean_dec(v_a_1271_);
if (v___x_1275_ == 0)
{
lean_object* v___x_1276_; lean_object* v___x_1278_; 
v___x_1276_ = lean_box(v___y_1269_);
if (v_isShared_1274_ == 0)
{
lean_ctor_set(v___x_1273_, 0, v___x_1276_);
v___x_1278_ = v___x_1273_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v___x_1276_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
else
{
lean_object* v___x_1280_; lean_object* v___x_1282_; 
v___x_1280_ = lean_box(v___x_1254_);
if (v_isShared_1274_ == 0)
{
lean_ctor_set(v___x_1273_, 0, v___x_1280_);
v___x_1282_ = v___x_1273_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v___x_1280_);
v___x_1282_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
return v___x_1282_;
}
}
}
}
else
{
return v___y_1270_;
}
}
v___jp_1285_:
{
lean_object* v___x_1302_; double v___x_1303_; double v___x_1304_; double v___x_1305_; double v___x_1306_; double v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1302_ = lean_io_mono_nanos_now();
v___x_1303_ = lean_float_of_nat(v___y_1299_);
v___x_1304_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0);
v___x_1305_ = lean_float_div(v___x_1303_, v___x_1304_);
v___x_1306_ = lean_float_of_nat(v___x_1302_);
v___x_1307_ = lean_float_div(v___x_1306_, v___x_1304_);
v___x_1308_ = lean_box_float(v___x_1305_);
v___x_1309_ = lean_box_float(v___x_1307_);
v___x_1310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1308_);
lean_ctor_set(v___x_1310_, 1, v___x_1309_);
v___x_1311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1311_, 0, v_a_1301_);
lean_ctor_set(v___x_1311_, 1, v___x_1310_);
lean_inc_ref(v___y_1293_);
v___x_1312_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_1255_, v___y_1300_, v___x_1256_, v___y_1286_, v___y_1291_, v___y_1287_, v___y_1293_, v___x_1311_, v___y_1292_, v___y_1289_, v___y_1290_, v___y_1297_, v___y_1298_, v___y_1296_, v___y_1288_, v___y_1294_);
v___y_1269_ = v___y_1295_;
v___y_1270_ = v___x_1312_;
goto v___jp_1268_;
}
v___jp_1313_:
{
lean_object* v___x_1330_; double v___x_1331_; double v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1330_ = lean_io_get_num_heartbeats();
v___x_1331_ = lean_float_of_nat(v___y_1323_);
v___x_1332_ = lean_float_of_nat(v___x_1330_);
v___x_1333_ = lean_box_float(v___x_1331_);
v___x_1334_ = lean_box_float(v___x_1332_);
v___x_1335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1333_);
lean_ctor_set(v___x_1335_, 1, v___x_1334_);
v___x_1336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1336_, 0, v_a_1329_);
lean_ctor_set(v___x_1336_, 1, v___x_1335_);
lean_inc_ref(v___y_1321_);
v___x_1337_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_1255_, v___y_1328_, v___x_1256_, v___y_1314_, v___y_1319_, v___y_1315_, v___y_1321_, v___x_1336_, v___y_1320_, v___y_1317_, v___y_1318_, v___y_1326_, v___y_1327_, v___y_1325_, v___y_1316_, v___y_1322_);
v___y_1269_ = v___y_1324_;
v___y_1270_ = v___x_1337_;
goto v___jp_1268_;
}
v___jp_1338_:
{
lean_object* v___x_1353_; lean_object* v_a_1354_; uint8_t v___x_1355_; 
v___x_1353_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v___y_1347_);
v_a_1354_ = lean_ctor_get(v___x_1353_, 0);
lean_inc(v_a_1354_);
lean_dec_ref(v___x_1353_);
v___x_1355_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v___y_1339_, v___x_1257_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1356_ = lean_io_mono_nanos_now();
lean_inc(v___y_1347_);
lean_inc_ref(v___y_1340_);
lean_inc(v___y_1349_);
lean_inc_ref(v___y_1351_);
lean_inc(v___y_1350_);
lean_inc_ref(v___y_1342_);
lean_inc(v___y_1341_);
lean_inc_ref(v___y_1345_);
v___x_1357_ = lean_apply_9(v___y_1344_, v___y_1345_, v___y_1341_, v___y_1342_, v___y_1350_, v___y_1351_, v___y_1349_, v___y_1340_, v___y_1347_, lean_box(0));
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v_a_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1365_; 
v_a_1358_ = lean_ctor_get(v___x_1357_, 0);
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1360_ = v___x_1357_;
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_a_1358_);
lean_dec(v___x_1357_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1363_; 
if (v_isShared_1361_ == 0)
{
lean_ctor_set_tag(v___x_1360_, 1);
v___x_1363_ = v___x_1360_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v_a_1358_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
v___y_1286_ = v___y_1339_;
v___y_1287_ = v_a_1354_;
v___y_1288_ = v___y_1340_;
v___y_1289_ = v___y_1341_;
v___y_1290_ = v___y_1342_;
v___y_1291_ = v___y_1343_;
v___y_1292_ = v___y_1345_;
v___y_1293_ = v___y_1346_;
v___y_1294_ = v___y_1347_;
v___y_1295_ = v___y_1348_;
v___y_1296_ = v___y_1349_;
v___y_1297_ = v___y_1350_;
v___y_1298_ = v___y_1351_;
v___y_1299_ = v___x_1356_;
v___y_1300_ = v___y_1352_;
v_a_1301_ = v___x_1363_;
goto v___jp_1285_;
}
}
}
else
{
lean_object* v_a_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1373_; 
v_a_1366_ = lean_ctor_get(v___x_1357_, 0);
v_isSharedCheck_1373_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1368_ = v___x_1357_;
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_a_1366_);
lean_dec(v___x_1357_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v___x_1371_; 
if (v_isShared_1369_ == 0)
{
lean_ctor_set_tag(v___x_1368_, 0);
v___x_1371_ = v___x_1368_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_a_1366_);
v___x_1371_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
v___y_1286_ = v___y_1339_;
v___y_1287_ = v_a_1354_;
v___y_1288_ = v___y_1340_;
v___y_1289_ = v___y_1341_;
v___y_1290_ = v___y_1342_;
v___y_1291_ = v___y_1343_;
v___y_1292_ = v___y_1345_;
v___y_1293_ = v___y_1346_;
v___y_1294_ = v___y_1347_;
v___y_1295_ = v___y_1348_;
v___y_1296_ = v___y_1349_;
v___y_1297_ = v___y_1350_;
v___y_1298_ = v___y_1351_;
v___y_1299_ = v___x_1356_;
v___y_1300_ = v___y_1352_;
v_a_1301_ = v___x_1371_;
goto v___jp_1285_;
}
}
}
}
else
{
lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1374_ = lean_io_get_num_heartbeats();
lean_inc(v___y_1347_);
lean_inc_ref(v___y_1340_);
lean_inc(v___y_1349_);
lean_inc_ref(v___y_1351_);
lean_inc(v___y_1350_);
lean_inc_ref(v___y_1342_);
lean_inc(v___y_1341_);
lean_inc_ref(v___y_1345_);
v___x_1375_ = lean_apply_9(v___y_1344_, v___y_1345_, v___y_1341_, v___y_1342_, v___y_1350_, v___y_1351_, v___y_1349_, v___y_1340_, v___y_1347_, lean_box(0));
if (lean_obj_tag(v___x_1375_) == 0)
{
lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1383_; 
v_a_1376_ = lean_ctor_get(v___x_1375_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1375_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1378_ = v___x_1375_;
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v___x_1375_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1381_; 
if (v_isShared_1379_ == 0)
{
lean_ctor_set_tag(v___x_1378_, 1);
v___x_1381_ = v___x_1378_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_a_1376_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
v___y_1314_ = v___y_1339_;
v___y_1315_ = v_a_1354_;
v___y_1316_ = v___y_1340_;
v___y_1317_ = v___y_1341_;
v___y_1318_ = v___y_1342_;
v___y_1319_ = v___y_1343_;
v___y_1320_ = v___y_1345_;
v___y_1321_ = v___y_1346_;
v___y_1322_ = v___y_1347_;
v___y_1323_ = v___x_1374_;
v___y_1324_ = v___y_1348_;
v___y_1325_ = v___y_1349_;
v___y_1326_ = v___y_1350_;
v___y_1327_ = v___y_1351_;
v___y_1328_ = v___y_1352_;
v_a_1329_ = v___x_1381_;
goto v___jp_1313_;
}
}
}
else
{
lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1391_; 
v_a_1384_ = lean_ctor_get(v___x_1375_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v___x_1375_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1386_ = v___x_1375_;
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_dec(v___x_1375_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1389_; 
if (v_isShared_1387_ == 0)
{
lean_ctor_set_tag(v___x_1386_, 0);
v___x_1389_ = v___x_1386_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v_a_1384_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
v___y_1314_ = v___y_1339_;
v___y_1315_ = v_a_1354_;
v___y_1316_ = v___y_1340_;
v___y_1317_ = v___y_1341_;
v___y_1318_ = v___y_1342_;
v___y_1319_ = v___y_1343_;
v___y_1320_ = v___y_1345_;
v___y_1321_ = v___y_1346_;
v___y_1322_ = v___y_1347_;
v___y_1323_ = v___x_1374_;
v___y_1324_ = v___y_1348_;
v___y_1325_ = v___y_1349_;
v___y_1326_ = v___y_1350_;
v___y_1327_ = v___y_1351_;
v___y_1328_ = v___y_1352_;
v_a_1329_ = v___x_1389_;
goto v___jp_1313_;
}
}
}
}
}
v___jp_1396_:
{
lean_object* v___x_1405_; lean_object* v_a_1406_; lean_object* v___x_1407_; 
v___x_1405_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg(v___y_1397_);
v_a_1406_ = lean_ctor_get(v___x_1405_, 0);
lean_inc(v_a_1406_);
lean_dec_ref(v___x_1405_);
v___x_1407_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(v_a_1406_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
lean_dec(v_a_1406_);
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v_a_1408_; uint8_t v___x_1409_; 
v_a_1408_ = lean_ctor_get(v___x_1407_, 0);
lean_inc(v_a_1408_);
v___x_1409_ = lean_unbox(v_a_1408_);
if (v___x_1409_ == 0)
{
if (v_shortCircuit_1395_ == 0)
{
lean_dec(v_a_1408_);
lean_dec_ref(v___x_1256_);
lean_dec(v_cls_1255_);
return v___x_1407_;
}
else
{
lean_object* v___x_1410_; lean_object* v_options_1411_; uint8_t v_hasTrace_1412_; 
lean_dec_ref_known(v___x_1407_, 1);
v___x_1410_ = l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass;
v_options_1411_ = lean_ctor_get(v___y_1403_, 2);
v_hasTrace_1412_ = lean_ctor_get_uint8(v_options_1411_, sizeof(void*)*1);
if (v_hasTrace_1412_ == 0)
{
lean_object* v_run_x27_1413_; lean_object* v___x_1414_; uint8_t v___x_1415_; 
lean_dec_ref(v___x_1256_);
lean_dec(v_cls_1255_);
v_run_x27_1413_ = lean_ctor_get(v___x_1410_, 1);
lean_inc_ref(v_run_x27_1413_);
lean_inc(v___y_1404_);
lean_inc_ref(v___y_1403_);
lean_inc(v___y_1402_);
lean_inc_ref(v___y_1401_);
lean_inc(v___y_1400_);
lean_inc_ref(v___y_1399_);
lean_inc(v___y_1398_);
lean_inc_ref(v___y_1397_);
v___x_1414_ = lean_apply_9(v_run_x27_1413_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_, lean_box(0));
v___x_1415_ = lean_unbox(v_a_1408_);
lean_dec(v_a_1408_);
v___y_1269_ = v___x_1415_;
v___y_1270_ = v___x_1414_;
goto v___jp_1268_;
}
else
{
lean_object* v_run_x27_1416_; lean_object* v_inheritedTraceOptions_1417_; lean_object* v___f_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; uint8_t v___x_1421_; 
v_run_x27_1416_ = lean_ctor_get(v___x_1410_, 1);
v_inheritedTraceOptions_1417_ = lean_ctor_get(v___y_1403_, 13);
v___f_1418_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__1);
v___x_1419_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__3));
lean_inc(v_cls_1255_);
v___x_1420_ = l_Lean_Name_append(v___x_1419_, v_cls_1255_);
v___x_1421_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1417_, v_options_1411_, v___x_1420_);
lean_dec(v___x_1420_);
if (v___x_1421_ == 0)
{
lean_object* v___x_1422_; uint8_t v___x_1423_; 
v___x_1422_ = l_Lean_trace_profiler;
v___x_1423_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_options_1411_, v___x_1422_);
if (v___x_1423_ == 0)
{
lean_object* v___x_1424_; uint8_t v___x_1425_; 
lean_dec_ref(v___x_1256_);
lean_dec(v_cls_1255_);
lean_inc_ref(v_run_x27_1416_);
lean_inc(v___y_1404_);
lean_inc_ref(v___y_1403_);
lean_inc(v___y_1402_);
lean_inc_ref(v___y_1401_);
lean_inc(v___y_1400_);
lean_inc_ref(v___y_1399_);
lean_inc(v___y_1398_);
lean_inc_ref(v___y_1397_);
v___x_1424_ = lean_apply_9(v_run_x27_1416_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_, lean_box(0));
v___x_1425_ = lean_unbox(v_a_1408_);
lean_dec(v_a_1408_);
v___y_1269_ = v___x_1425_;
v___y_1270_ = v___x_1424_;
goto v___jp_1268_;
}
else
{
uint8_t v___x_1426_; 
v___x_1426_ = lean_unbox(v_a_1408_);
lean_dec(v_a_1408_);
lean_inc_ref(v_run_x27_1416_);
v___y_1339_ = v_options_1411_;
v___y_1340_ = v___y_1403_;
v___y_1341_ = v___y_1398_;
v___y_1342_ = v___y_1399_;
v___y_1343_ = v___x_1421_;
v___y_1344_ = v_run_x27_1416_;
v___y_1345_ = v___y_1397_;
v___y_1346_ = v___f_1418_;
v___y_1347_ = v___y_1404_;
v___y_1348_ = v___x_1426_;
v___y_1349_ = v___y_1402_;
v___y_1350_ = v___y_1400_;
v___y_1351_ = v___y_1401_;
v___y_1352_ = v_hasTrace_1412_;
goto v___jp_1338_;
}
}
else
{
uint8_t v___x_1427_; 
v___x_1427_ = lean_unbox(v_a_1408_);
lean_dec(v_a_1408_);
lean_inc_ref(v_run_x27_1416_);
v___y_1339_ = v_options_1411_;
v___y_1340_ = v___y_1403_;
v___y_1341_ = v___y_1398_;
v___y_1342_ = v___y_1399_;
v___y_1343_ = v___x_1421_;
v___y_1344_ = v_run_x27_1416_;
v___y_1345_ = v___y_1397_;
v___y_1346_ = v___f_1418_;
v___y_1347_ = v___y_1404_;
v___y_1348_ = v___x_1427_;
v___y_1349_ = v___y_1402_;
v___y_1350_ = v___y_1400_;
v___y_1351_ = v___y_1401_;
v___y_1352_ = v_hasTrace_1412_;
goto v___jp_1338_;
}
}
}
}
else
{
lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1435_; 
lean_dec(v_a_1408_);
lean_dec_ref(v___x_1256_);
lean_dec(v_cls_1255_);
v_isSharedCheck_1435_ = !lean_is_exclusive(v___x_1407_);
if (v_isSharedCheck_1435_ == 0)
{
lean_object* v_unused_1436_; 
v_unused_1436_ = lean_ctor_get(v___x_1407_, 0);
lean_dec(v_unused_1436_);
v___x_1429_ = v___x_1407_;
v_isShared_1430_ = v_isSharedCheck_1435_;
goto v_resetjp_1428_;
}
else
{
lean_dec(v___x_1407_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1435_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1431_; lean_object* v___x_1433_; 
v___x_1431_ = lean_box(v___x_1254_);
if (v_isShared_1430_ == 0)
{
lean_ctor_set(v___x_1429_, 0, v___x_1431_);
v___x_1433_ = v___x_1429_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v___x_1431_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
}
}
else
{
lean_dec_ref(v___x_1256_);
lean_dec(v_cls_1255_);
return v___x_1407_;
}
}
v___jp_1437_:
{
if (lean_obj_tag(v___y_1446_) == 0)
{
lean_object* v_a_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1456_; 
v_a_1447_ = lean_ctor_get(v___y_1446_, 0);
v_isSharedCheck_1456_ = !lean_is_exclusive(v___y_1446_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1449_ = v___y_1446_;
v_isShared_1450_ = v_isSharedCheck_1456_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_a_1447_);
lean_dec(v___y_1446_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1456_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
uint8_t v___x_1451_; 
v___x_1451_ = lean_unbox(v_a_1447_);
lean_dec(v_a_1447_);
if (v___x_1451_ == 0)
{
lean_del_object(v___x_1449_);
v___y_1397_ = v___y_1443_;
v___y_1398_ = v___y_1439_;
v___y_1399_ = v___y_1438_;
v___y_1400_ = v___y_1442_;
v___y_1401_ = v___y_1440_;
v___y_1402_ = v___y_1445_;
v___y_1403_ = v___y_1444_;
v___y_1404_ = v___y_1441_;
goto v___jp_1396_;
}
else
{
lean_object* v___x_1452_; lean_object* v___x_1454_; 
lean_dec_ref(v___x_1256_);
lean_dec(v_cls_1255_);
v___x_1452_ = lean_box(v___x_1254_);
if (v_isShared_1450_ == 0)
{
lean_ctor_set(v___x_1449_, 0, v___x_1452_);
v___x_1454_ = v___x_1449_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1452_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
}
}
else
{
lean_dec_ref(v___x_1256_);
lean_dec(v_cls_1255_);
return v___y_1446_;
}
}
v___jp_1457_:
{
lean_object* v___x_1473_; double v___x_1474_; double v___x_1475_; double v___x_1476_; double v___x_1477_; double v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1473_ = lean_io_mono_nanos_now();
v___x_1474_ = lean_float_of_nat(v___y_1458_);
v___x_1475_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0);
v___x_1476_ = lean_float_div(v___x_1474_, v___x_1475_);
v___x_1477_ = lean_float_of_nat(v___x_1473_);
v___x_1478_ = lean_float_div(v___x_1477_, v___x_1475_);
v___x_1479_ = lean_box_float(v___x_1476_);
v___x_1480_ = lean_box_float(v___x_1478_);
v___x_1481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1479_);
lean_ctor_set(v___x_1481_, 1, v___x_1480_);
v___x_1482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1482_, 0, v_a_1472_);
lean_ctor_set(v___x_1482_, 1, v___x_1481_);
lean_inc_ref(v___y_1462_);
lean_inc_ref(v___x_1256_);
lean_inc(v_cls_1255_);
v___x_1483_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_1255_, v___y_1459_, v___x_1256_, v___y_1461_, v___y_1463_, v___y_1471_, v___y_1462_, v___x_1482_, v___y_1469_, v___y_1466_, v___y_1465_, v___y_1460_, v___y_1467_, v___y_1470_, v___y_1464_, v___y_1468_);
v___y_1438_ = v___y_1465_;
v___y_1439_ = v___y_1466_;
v___y_1440_ = v___y_1467_;
v___y_1441_ = v___y_1468_;
v___y_1442_ = v___y_1460_;
v___y_1443_ = v___y_1469_;
v___y_1444_ = v___y_1464_;
v___y_1445_ = v___y_1470_;
v___y_1446_ = v___x_1483_;
goto v___jp_1437_;
}
v___jp_1484_:
{
lean_object* v___x_1500_; double v___x_1501_; double v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
v___x_1500_ = lean_io_get_num_heartbeats();
v___x_1501_ = lean_float_of_nat(v___y_1493_);
v___x_1502_ = lean_float_of_nat(v___x_1500_);
v___x_1503_ = lean_box_float(v___x_1501_);
v___x_1504_ = lean_box_float(v___x_1502_);
v___x_1505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1505_, 0, v___x_1503_);
lean_ctor_set(v___x_1505_, 1, v___x_1504_);
v___x_1506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1506_, 0, v_a_1499_);
lean_ctor_set(v___x_1506_, 1, v___x_1505_);
lean_inc_ref(v___y_1488_);
lean_inc_ref(v___x_1256_);
lean_inc(v_cls_1255_);
v___x_1507_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_1255_, v___y_1485_, v___x_1256_, v___y_1487_, v___y_1489_, v___y_1498_, v___y_1488_, v___x_1506_, v___y_1496_, v___y_1492_, v___y_1491_, v___y_1486_, v___y_1494_, v___y_1497_, v___y_1490_, v___y_1495_);
v___y_1438_ = v___y_1491_;
v___y_1439_ = v___y_1492_;
v___y_1440_ = v___y_1494_;
v___y_1441_ = v___y_1495_;
v___y_1442_ = v___y_1486_;
v___y_1443_ = v___y_1496_;
v___y_1444_ = v___y_1490_;
v___y_1445_ = v___y_1497_;
v___y_1446_ = v___x_1507_;
goto v___jp_1437_;
}
v___jp_1508_:
{
lean_object* v___x_1522_; lean_object* v_a_1523_; uint8_t v___x_1524_; 
v___x_1522_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v___y_1518_);
v_a_1523_ = lean_ctor_get(v___x_1522_, 0);
lean_inc(v_a_1523_);
lean_dec_ref(v___x_1522_);
v___x_1524_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v___y_1511_, v___x_1257_);
if (v___x_1524_ == 0)
{
lean_object* v___x_1525_; lean_object* v___x_1526_; 
v___x_1525_ = lean_io_mono_nanos_now();
lean_inc(v___y_1518_);
lean_inc_ref(v___y_1513_);
lean_inc(v___y_1521_);
lean_inc_ref(v___y_1517_);
lean_inc(v___y_1510_);
lean_inc_ref(v___y_1515_);
lean_inc(v___y_1516_);
lean_inc_ref(v___y_1519_);
v___x_1526_ = lean_apply_9(v___y_1520_, v___y_1519_, v___y_1516_, v___y_1515_, v___y_1510_, v___y_1517_, v___y_1521_, v___y_1513_, v___y_1518_, lean_box(0));
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1534_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1534_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1534_ == 0)
{
v___x_1529_ = v___x_1526_;
v_isShared_1530_ = v_isSharedCheck_1534_;
goto v_resetjp_1528_;
}
else
{
lean_inc(v_a_1527_);
lean_dec(v___x_1526_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1534_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
lean_object* v___x_1532_; 
if (v_isShared_1530_ == 0)
{
lean_ctor_set_tag(v___x_1529_, 1);
v___x_1532_ = v___x_1529_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v_a_1527_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
v___y_1458_ = v___x_1525_;
v___y_1459_ = v___y_1509_;
v___y_1460_ = v___y_1510_;
v___y_1461_ = v___y_1511_;
v___y_1462_ = v___y_1512_;
v___y_1463_ = v___y_1514_;
v___y_1464_ = v___y_1513_;
v___y_1465_ = v___y_1515_;
v___y_1466_ = v___y_1516_;
v___y_1467_ = v___y_1517_;
v___y_1468_ = v___y_1518_;
v___y_1469_ = v___y_1519_;
v___y_1470_ = v___y_1521_;
v___y_1471_ = v_a_1523_;
v_a_1472_ = v___x_1532_;
goto v___jp_1457_;
}
}
}
else
{
lean_object* v_a_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1542_; 
v_a_1535_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1537_ = v___x_1526_;
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
else
{
lean_inc(v_a_1535_);
lean_dec(v___x_1526_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
lean_object* v___x_1540_; 
if (v_isShared_1538_ == 0)
{
lean_ctor_set_tag(v___x_1537_, 0);
v___x_1540_ = v___x_1537_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_a_1535_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
v___y_1458_ = v___x_1525_;
v___y_1459_ = v___y_1509_;
v___y_1460_ = v___y_1510_;
v___y_1461_ = v___y_1511_;
v___y_1462_ = v___y_1512_;
v___y_1463_ = v___y_1514_;
v___y_1464_ = v___y_1513_;
v___y_1465_ = v___y_1515_;
v___y_1466_ = v___y_1516_;
v___y_1467_ = v___y_1517_;
v___y_1468_ = v___y_1518_;
v___y_1469_ = v___y_1519_;
v___y_1470_ = v___y_1521_;
v___y_1471_ = v_a_1523_;
v_a_1472_ = v___x_1540_;
goto v___jp_1457_;
}
}
}
}
else
{
lean_object* v___x_1543_; lean_object* v___x_1544_; 
v___x_1543_ = lean_io_get_num_heartbeats();
lean_inc(v___y_1518_);
lean_inc_ref(v___y_1513_);
lean_inc(v___y_1521_);
lean_inc_ref(v___y_1517_);
lean_inc(v___y_1510_);
lean_inc_ref(v___y_1515_);
lean_inc(v___y_1516_);
lean_inc_ref(v___y_1519_);
v___x_1544_ = lean_apply_9(v___y_1520_, v___y_1519_, v___y_1516_, v___y_1515_, v___y_1510_, v___y_1517_, v___y_1521_, v___y_1513_, v___y_1518_, lean_box(0));
if (lean_obj_tag(v___x_1544_) == 0)
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1552_; 
v_a_1545_ = lean_ctor_get(v___x_1544_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1547_ = v___x_1544_;
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v___x_1544_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1550_; 
if (v_isShared_1548_ == 0)
{
lean_ctor_set_tag(v___x_1547_, 1);
v___x_1550_ = v___x_1547_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v_a_1545_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
v___y_1485_ = v___y_1509_;
v___y_1486_ = v___y_1510_;
v___y_1487_ = v___y_1511_;
v___y_1488_ = v___y_1512_;
v___y_1489_ = v___y_1514_;
v___y_1490_ = v___y_1513_;
v___y_1491_ = v___y_1515_;
v___y_1492_ = v___y_1516_;
v___y_1493_ = v___x_1543_;
v___y_1494_ = v___y_1517_;
v___y_1495_ = v___y_1518_;
v___y_1496_ = v___y_1519_;
v___y_1497_ = v___y_1521_;
v___y_1498_ = v_a_1523_;
v_a_1499_ = v___x_1550_;
goto v___jp_1484_;
}
}
}
else
{
lean_object* v_a_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1560_; 
v_a_1553_ = lean_ctor_get(v___x_1544_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1555_ = v___x_1544_;
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_a_1553_);
lean_dec(v___x_1544_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1558_; 
if (v_isShared_1556_ == 0)
{
lean_ctor_set_tag(v___x_1555_, 0);
v___x_1558_ = v___x_1555_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v_a_1553_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
v___y_1485_ = v___y_1509_;
v___y_1486_ = v___y_1510_;
v___y_1487_ = v___y_1511_;
v___y_1488_ = v___y_1512_;
v___y_1489_ = v___y_1514_;
v___y_1490_ = v___y_1513_;
v___y_1491_ = v___y_1515_;
v___y_1492_ = v___y_1516_;
v___y_1493_ = v___x_1543_;
v___y_1494_ = v___y_1517_;
v___y_1495_ = v___y_1518_;
v___y_1496_ = v___y_1519_;
v___y_1497_ = v___y_1521_;
v___y_1498_ = v_a_1523_;
v_a_1499_ = v___x_1558_;
goto v___jp_1484_;
}
}
}
}
}
v___jp_1561_:
{
if (v_fixedInt_1393_ == 0)
{
v___y_1397_ = v___y_1562_;
v___y_1398_ = v___y_1563_;
v___y_1399_ = v___y_1564_;
v___y_1400_ = v___y_1565_;
v___y_1401_ = v___y_1566_;
v___y_1402_ = v___y_1567_;
v___y_1403_ = v___y_1568_;
v___y_1404_ = v___y_1569_;
goto v___jp_1396_;
}
else
{
lean_object* v___x_1570_; lean_object* v_options_1571_; uint8_t v_hasTrace_1572_; 
v___x_1570_ = l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass;
v_options_1571_ = lean_ctor_get(v___y_1568_, 2);
v_hasTrace_1572_ = lean_ctor_get_uint8(v_options_1571_, sizeof(void*)*1);
if (v_hasTrace_1572_ == 0)
{
lean_object* v_run_x27_1573_; lean_object* v___x_1574_; 
v_run_x27_1573_ = lean_ctor_get(v___x_1570_, 1);
lean_inc_ref(v_run_x27_1573_);
lean_inc(v___y_1569_);
lean_inc_ref(v___y_1568_);
lean_inc(v___y_1567_);
lean_inc_ref(v___y_1566_);
lean_inc(v___y_1565_);
lean_inc_ref(v___y_1564_);
lean_inc(v___y_1563_);
lean_inc_ref(v___y_1562_);
v___x_1574_ = lean_apply_9(v_run_x27_1573_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_, lean_box(0));
v___y_1438_ = v___y_1564_;
v___y_1439_ = v___y_1563_;
v___y_1440_ = v___y_1566_;
v___y_1441_ = v___y_1569_;
v___y_1442_ = v___y_1565_;
v___y_1443_ = v___y_1562_;
v___y_1444_ = v___y_1568_;
v___y_1445_ = v___y_1567_;
v___y_1446_ = v___x_1574_;
goto v___jp_1437_;
}
else
{
lean_object* v_run_x27_1575_; lean_object* v_inheritedTraceOptions_1576_; lean_object* v___f_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; uint8_t v___x_1580_; 
v_run_x27_1575_ = lean_ctor_get(v___x_1570_, 1);
v_inheritedTraceOptions_1576_ = lean_ctor_get(v___y_1568_, 13);
v___f_1577_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__4);
v___x_1578_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__3));
lean_inc(v_cls_1255_);
v___x_1579_ = l_Lean_Name_append(v___x_1578_, v_cls_1255_);
v___x_1580_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1576_, v_options_1571_, v___x_1579_);
lean_dec(v___x_1579_);
if (v___x_1580_ == 0)
{
lean_object* v___x_1581_; uint8_t v___x_1582_; 
v___x_1581_ = l_Lean_trace_profiler;
v___x_1582_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_options_1571_, v___x_1581_);
if (v___x_1582_ == 0)
{
lean_object* v___x_1583_; 
lean_inc_ref(v_run_x27_1575_);
lean_inc(v___y_1569_);
lean_inc_ref(v___y_1568_);
lean_inc(v___y_1567_);
lean_inc_ref(v___y_1566_);
lean_inc(v___y_1565_);
lean_inc_ref(v___y_1564_);
lean_inc(v___y_1563_);
lean_inc_ref(v___y_1562_);
v___x_1583_ = lean_apply_9(v_run_x27_1575_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_, lean_box(0));
v___y_1438_ = v___y_1564_;
v___y_1439_ = v___y_1563_;
v___y_1440_ = v___y_1566_;
v___y_1441_ = v___y_1569_;
v___y_1442_ = v___y_1565_;
v___y_1443_ = v___y_1562_;
v___y_1444_ = v___y_1568_;
v___y_1445_ = v___y_1567_;
v___y_1446_ = v___x_1583_;
goto v___jp_1437_;
}
else
{
lean_inc_ref(v_run_x27_1575_);
v___y_1509_ = v_hasTrace_1572_;
v___y_1510_ = v___y_1565_;
v___y_1511_ = v_options_1571_;
v___y_1512_ = v___f_1577_;
v___y_1513_ = v___y_1568_;
v___y_1514_ = v___x_1580_;
v___y_1515_ = v___y_1564_;
v___y_1516_ = v___y_1563_;
v___y_1517_ = v___y_1566_;
v___y_1518_ = v___y_1569_;
v___y_1519_ = v___y_1562_;
v___y_1520_ = v_run_x27_1575_;
v___y_1521_ = v___y_1567_;
goto v___jp_1508_;
}
}
else
{
lean_inc_ref(v_run_x27_1575_);
v___y_1509_ = v_hasTrace_1572_;
v___y_1510_ = v___y_1565_;
v___y_1511_ = v_options_1571_;
v___y_1512_ = v___f_1577_;
v___y_1513_ = v___y_1568_;
v___y_1514_ = v___x_1580_;
v___y_1515_ = v___y_1564_;
v___y_1516_ = v___y_1563_;
v___y_1517_ = v___y_1566_;
v___y_1518_ = v___y_1569_;
v___y_1519_ = v___y_1562_;
v___y_1520_ = v_run_x27_1575_;
v___y_1521_ = v___y_1567_;
goto v___jp_1508_;
}
}
}
}
v___jp_1584_:
{
if (lean_obj_tag(v___y_1593_) == 0)
{
lean_object* v_a_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1603_; 
v_a_1594_ = lean_ctor_get(v___y_1593_, 0);
v_isSharedCheck_1603_ = !lean_is_exclusive(v___y_1593_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1596_ = v___y_1593_;
v_isShared_1597_ = v_isSharedCheck_1603_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_a_1594_);
lean_dec(v___y_1593_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1603_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
uint8_t v___x_1598_; 
v___x_1598_ = lean_unbox(v_a_1594_);
lean_dec(v_a_1594_);
if (v___x_1598_ == 0)
{
lean_del_object(v___x_1596_);
v___y_1562_ = v___y_1592_;
v___y_1563_ = v___y_1587_;
v___y_1564_ = v___y_1591_;
v___y_1565_ = v___y_1588_;
v___y_1566_ = v___y_1589_;
v___y_1567_ = v___y_1585_;
v___y_1568_ = v___y_1586_;
v___y_1569_ = v___y_1590_;
goto v___jp_1561_;
}
else
{
lean_object* v___x_1599_; lean_object* v___x_1601_; 
lean_dec_ref(v___x_1256_);
lean_dec(v_cls_1255_);
v___x_1599_ = lean_box(v___x_1254_);
if (v_isShared_1597_ == 0)
{
lean_ctor_set(v___x_1596_, 0, v___x_1599_);
v___x_1601_ = v___x_1596_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v___x_1599_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
}
}
else
{
lean_dec_ref(v___x_1256_);
lean_dec(v_cls_1255_);
return v___y_1593_;
}
}
v___jp_1604_:
{
lean_object* v___x_1620_; double v___x_1621_; double v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1620_ = lean_io_get_num_heartbeats();
v___x_1621_ = lean_float_of_nat(v___y_1608_);
v___x_1622_ = lean_float_of_nat(v___x_1620_);
v___x_1623_ = lean_box_float(v___x_1621_);
v___x_1624_ = lean_box_float(v___x_1622_);
v___x_1625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1625_, 0, v___x_1623_);
lean_ctor_set(v___x_1625_, 1, v___x_1624_);
v___x_1626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1626_, 0, v_a_1619_);
lean_ctor_set(v___x_1626_, 1, v___x_1625_);
lean_inc_ref(v___y_1612_);
lean_inc_ref(v___x_1256_);
lean_inc(v_cls_1255_);
v___x_1627_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_1255_, v___y_1610_, v___x_1256_, v___y_1605_, v___y_1609_, v___y_1606_, v___y_1612_, v___x_1626_, v___y_1618_, v___y_1615_, v___y_1613_, v___y_1616_, v___y_1611_, v___y_1614_, v___y_1607_, v___y_1617_);
v___y_1585_ = v___y_1614_;
v___y_1586_ = v___y_1607_;
v___y_1587_ = v___y_1615_;
v___y_1588_ = v___y_1616_;
v___y_1589_ = v___y_1611_;
v___y_1590_ = v___y_1617_;
v___y_1591_ = v___y_1613_;
v___y_1592_ = v___y_1618_;
v___y_1593_ = v___x_1627_;
goto v___jp_1584_;
}
v___jp_1628_:
{
lean_object* v___x_1644_; double v___x_1645_; double v___x_1646_; double v___x_1647_; double v___x_1648_; double v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; 
v___x_1644_ = lean_io_mono_nanos_now();
v___x_1645_ = lean_float_of_nat(v___y_1640_);
v___x_1646_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0);
v___x_1647_ = lean_float_div(v___x_1645_, v___x_1646_);
v___x_1648_ = lean_float_of_nat(v___x_1644_);
v___x_1649_ = lean_float_div(v___x_1648_, v___x_1646_);
v___x_1650_ = lean_box_float(v___x_1647_);
v___x_1651_ = lean_box_float(v___x_1649_);
v___x_1652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1652_, 0, v___x_1650_);
lean_ctor_set(v___x_1652_, 1, v___x_1651_);
v___x_1653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1653_, 0, v_a_1643_);
lean_ctor_set(v___x_1653_, 1, v___x_1652_);
lean_inc_ref(v___y_1635_);
lean_inc_ref(v___x_1256_);
lean_inc(v_cls_1255_);
v___x_1654_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_1255_, v___y_1633_, v___x_1256_, v___y_1629_, v___y_1632_, v___y_1630_, v___y_1635_, v___x_1653_, v___y_1642_, v___y_1638_, v___y_1636_, v___y_1639_, v___y_1634_, v___y_1637_, v___y_1631_, v___y_1641_);
v___y_1585_ = v___y_1637_;
v___y_1586_ = v___y_1631_;
v___y_1587_ = v___y_1638_;
v___y_1588_ = v___y_1639_;
v___y_1589_ = v___y_1634_;
v___y_1590_ = v___y_1641_;
v___y_1591_ = v___y_1636_;
v___y_1592_ = v___y_1642_;
v___y_1593_ = v___x_1654_;
goto v___jp_1584_;
}
v___jp_1655_:
{
lean_object* v___x_1669_; lean_object* v_a_1670_; uint8_t v___x_1671_; 
v___x_1669_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v___y_1668_);
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
lean_inc(v_a_1670_);
lean_dec_ref(v___x_1669_);
v___x_1671_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v___y_1656_, v___x_1257_);
if (v___x_1671_ == 0)
{
lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1672_ = lean_io_mono_nanos_now();
lean_inc(v___y_1668_);
lean_inc_ref(v___y_1657_);
lean_inc(v___y_1663_);
lean_inc_ref(v___y_1659_);
lean_inc(v___y_1666_);
lean_inc_ref(v___y_1661_);
lean_inc(v___y_1664_);
lean_inc_ref(v___y_1667_);
v___x_1673_ = lean_apply_9(v___y_1665_, v___y_1667_, v___y_1664_, v___y_1661_, v___y_1666_, v___y_1659_, v___y_1663_, v___y_1657_, v___y_1668_, lean_box(0));
if (lean_obj_tag(v___x_1673_) == 0)
{
lean_object* v_a_1674_; lean_object* v___x_1676_; uint8_t v_isShared_1677_; uint8_t v_isSharedCheck_1681_; 
v_a_1674_ = lean_ctor_get(v___x_1673_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1676_ = v___x_1673_;
v_isShared_1677_ = v_isSharedCheck_1681_;
goto v_resetjp_1675_;
}
else
{
lean_inc(v_a_1674_);
lean_dec(v___x_1673_);
v___x_1676_ = lean_box(0);
v_isShared_1677_ = v_isSharedCheck_1681_;
goto v_resetjp_1675_;
}
v_resetjp_1675_:
{
lean_object* v___x_1679_; 
if (v_isShared_1677_ == 0)
{
lean_ctor_set_tag(v___x_1676_, 1);
v___x_1679_ = v___x_1676_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v_a_1674_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
v___y_1629_ = v___y_1656_;
v___y_1630_ = v_a_1670_;
v___y_1631_ = v___y_1657_;
v___y_1632_ = v___y_1658_;
v___y_1633_ = v___y_1660_;
v___y_1634_ = v___y_1659_;
v___y_1635_ = v___y_1662_;
v___y_1636_ = v___y_1661_;
v___y_1637_ = v___y_1663_;
v___y_1638_ = v___y_1664_;
v___y_1639_ = v___y_1666_;
v___y_1640_ = v___x_1672_;
v___y_1641_ = v___y_1668_;
v___y_1642_ = v___y_1667_;
v_a_1643_ = v___x_1679_;
goto v___jp_1628_;
}
}
}
else
{
lean_object* v_a_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1689_; 
v_a_1682_ = lean_ctor_get(v___x_1673_, 0);
v_isSharedCheck_1689_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1684_ = v___x_1673_;
v_isShared_1685_ = v_isSharedCheck_1689_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_a_1682_);
lean_dec(v___x_1673_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1689_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v___x_1687_; 
if (v_isShared_1685_ == 0)
{
lean_ctor_set_tag(v___x_1684_, 0);
v___x_1687_ = v___x_1684_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v_a_1682_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
v___y_1629_ = v___y_1656_;
v___y_1630_ = v_a_1670_;
v___y_1631_ = v___y_1657_;
v___y_1632_ = v___y_1658_;
v___y_1633_ = v___y_1660_;
v___y_1634_ = v___y_1659_;
v___y_1635_ = v___y_1662_;
v___y_1636_ = v___y_1661_;
v___y_1637_ = v___y_1663_;
v___y_1638_ = v___y_1664_;
v___y_1639_ = v___y_1666_;
v___y_1640_ = v___x_1672_;
v___y_1641_ = v___y_1668_;
v___y_1642_ = v___y_1667_;
v_a_1643_ = v___x_1687_;
goto v___jp_1628_;
}
}
}
}
else
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1690_ = lean_io_get_num_heartbeats();
lean_inc(v___y_1668_);
lean_inc_ref(v___y_1657_);
lean_inc(v___y_1663_);
lean_inc_ref(v___y_1659_);
lean_inc(v___y_1666_);
lean_inc_ref(v___y_1661_);
lean_inc(v___y_1664_);
lean_inc_ref(v___y_1667_);
v___x_1691_ = lean_apply_9(v___y_1665_, v___y_1667_, v___y_1664_, v___y_1661_, v___y_1666_, v___y_1659_, v___y_1663_, v___y_1657_, v___y_1668_, lean_box(0));
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v_a_1692_; lean_object* v___x_1694_; uint8_t v_isShared_1695_; uint8_t v_isSharedCheck_1699_; 
v_a_1692_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1694_ = v___x_1691_;
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
else
{
lean_inc(v_a_1692_);
lean_dec(v___x_1691_);
v___x_1694_ = lean_box(0);
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
v_resetjp_1693_:
{
lean_object* v___x_1697_; 
if (v_isShared_1695_ == 0)
{
lean_ctor_set_tag(v___x_1694_, 1);
v___x_1697_ = v___x_1694_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v_a_1692_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
v___y_1605_ = v___y_1656_;
v___y_1606_ = v_a_1670_;
v___y_1607_ = v___y_1657_;
v___y_1608_ = v___x_1690_;
v___y_1609_ = v___y_1658_;
v___y_1610_ = v___y_1660_;
v___y_1611_ = v___y_1659_;
v___y_1612_ = v___y_1662_;
v___y_1613_ = v___y_1661_;
v___y_1614_ = v___y_1663_;
v___y_1615_ = v___y_1664_;
v___y_1616_ = v___y_1666_;
v___y_1617_ = v___y_1668_;
v___y_1618_ = v___y_1667_;
v_a_1619_ = v___x_1697_;
goto v___jp_1604_;
}
}
}
else
{
lean_object* v_a_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1707_; 
v_a_1700_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1707_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1702_ = v___x_1691_;
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_a_1700_);
lean_dec(v___x_1691_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___x_1705_; 
if (v_isShared_1703_ == 0)
{
lean_ctor_set_tag(v___x_1702_, 0);
v___x_1705_ = v___x_1702_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_a_1700_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
v___y_1605_ = v___y_1656_;
v___y_1606_ = v_a_1670_;
v___y_1607_ = v___y_1657_;
v___y_1608_ = v___x_1690_;
v___y_1609_ = v___y_1658_;
v___y_1610_ = v___y_1660_;
v___y_1611_ = v___y_1659_;
v___y_1612_ = v___y_1662_;
v___y_1613_ = v___y_1661_;
v___y_1614_ = v___y_1663_;
v___y_1615_ = v___y_1664_;
v___y_1616_ = v___y_1666_;
v___y_1617_ = v___y_1668_;
v___y_1618_ = v___y_1667_;
v_a_1619_ = v___x_1705_;
goto v___jp_1604_;
}
}
}
}
}
v___jp_1708_:
{
if (v_enums_1394_ == 0)
{
v___y_1562_ = v___y_1709_;
v___y_1563_ = v___y_1710_;
v___y_1564_ = v___y_1711_;
v___y_1565_ = v___y_1712_;
v___y_1566_ = v___y_1713_;
v___y_1567_ = v___y_1714_;
v___y_1568_ = v___y_1715_;
v___y_1569_ = v___y_1716_;
goto v___jp_1561_;
}
else
{
lean_object* v___x_1717_; lean_object* v_options_1718_; uint8_t v_hasTrace_1719_; 
v___x_1717_ = l_Lean_Meta_Tactic_BVDecide_Normalize_enumsPass;
v_options_1718_ = lean_ctor_get(v___y_1715_, 2);
v_hasTrace_1719_ = lean_ctor_get_uint8(v_options_1718_, sizeof(void*)*1);
if (v_hasTrace_1719_ == 0)
{
lean_object* v_run_x27_1720_; lean_object* v___x_1721_; 
v_run_x27_1720_ = lean_ctor_get(v___x_1717_, 1);
lean_inc_ref(v_run_x27_1720_);
lean_inc(v___y_1716_);
lean_inc_ref(v___y_1715_);
lean_inc(v___y_1714_);
lean_inc_ref(v___y_1713_);
lean_inc(v___y_1712_);
lean_inc_ref(v___y_1711_);
lean_inc(v___y_1710_);
lean_inc_ref(v___y_1709_);
v___x_1721_ = lean_apply_9(v_run_x27_1720_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, lean_box(0));
v___y_1585_ = v___y_1714_;
v___y_1586_ = v___y_1715_;
v___y_1587_ = v___y_1710_;
v___y_1588_ = v___y_1712_;
v___y_1589_ = v___y_1713_;
v___y_1590_ = v___y_1716_;
v___y_1591_ = v___y_1711_;
v___y_1592_ = v___y_1709_;
v___y_1593_ = v___x_1721_;
goto v___jp_1584_;
}
else
{
lean_object* v_run_x27_1722_; lean_object* v_inheritedTraceOptions_1723_; lean_object* v___f_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; uint8_t v___x_1727_; 
v_run_x27_1722_ = lean_ctor_get(v___x_1717_, 1);
v_inheritedTraceOptions_1723_ = lean_ctor_get(v___y_1715_, 13);
v___f_1724_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__5);
v___x_1725_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__3));
lean_inc(v_cls_1255_);
v___x_1726_ = l_Lean_Name_append(v___x_1725_, v_cls_1255_);
v___x_1727_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1723_, v_options_1718_, v___x_1726_);
lean_dec(v___x_1726_);
if (v___x_1727_ == 0)
{
lean_object* v___x_1728_; uint8_t v___x_1729_; 
v___x_1728_ = l_Lean_trace_profiler;
v___x_1729_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_options_1718_, v___x_1728_);
if (v___x_1729_ == 0)
{
lean_object* v___x_1730_; 
lean_inc_ref(v_run_x27_1722_);
lean_inc(v___y_1716_);
lean_inc_ref(v___y_1715_);
lean_inc(v___y_1714_);
lean_inc_ref(v___y_1713_);
lean_inc(v___y_1712_);
lean_inc_ref(v___y_1711_);
lean_inc(v___y_1710_);
lean_inc_ref(v___y_1709_);
v___x_1730_ = lean_apply_9(v_run_x27_1722_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, lean_box(0));
v___y_1585_ = v___y_1714_;
v___y_1586_ = v___y_1715_;
v___y_1587_ = v___y_1710_;
v___y_1588_ = v___y_1712_;
v___y_1589_ = v___y_1713_;
v___y_1590_ = v___y_1716_;
v___y_1591_ = v___y_1711_;
v___y_1592_ = v___y_1709_;
v___y_1593_ = v___x_1730_;
goto v___jp_1584_;
}
else
{
lean_inc_ref(v_run_x27_1722_);
v___y_1656_ = v_options_1718_;
v___y_1657_ = v___y_1715_;
v___y_1658_ = v___x_1727_;
v___y_1659_ = v___y_1713_;
v___y_1660_ = v_hasTrace_1719_;
v___y_1661_ = v___y_1711_;
v___y_1662_ = v___f_1724_;
v___y_1663_ = v___y_1714_;
v___y_1664_ = v___y_1710_;
v___y_1665_ = v_run_x27_1722_;
v___y_1666_ = v___y_1712_;
v___y_1667_ = v___y_1709_;
v___y_1668_ = v___y_1716_;
goto v___jp_1655_;
}
}
else
{
lean_inc_ref(v_run_x27_1722_);
v___y_1656_ = v_options_1718_;
v___y_1657_ = v___y_1715_;
v___y_1658_ = v___x_1727_;
v___y_1659_ = v___y_1713_;
v___y_1660_ = v_hasTrace_1719_;
v___y_1661_ = v___y_1711_;
v___y_1662_ = v___f_1724_;
v___y_1663_ = v___y_1714_;
v___y_1664_ = v___y_1710_;
v___y_1665_ = v_run_x27_1722_;
v___y_1666_ = v___y_1712_;
v___y_1667_ = v___y_1709_;
v___y_1668_ = v___y_1716_;
goto v___jp_1655_;
}
}
}
}
v___jp_1731_:
{
if (lean_obj_tag(v___y_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1750_; 
v_a_1741_ = lean_ctor_get(v___y_1740_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___y_1740_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1743_ = v___y_1740_;
v_isShared_1744_ = v_isSharedCheck_1750_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_a_1741_);
lean_dec(v___y_1740_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1750_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
uint8_t v___x_1745_; 
v___x_1745_ = lean_unbox(v_a_1741_);
lean_dec(v_a_1741_);
if (v___x_1745_ == 0)
{
lean_del_object(v___x_1743_);
v___y_1709_ = v___y_1738_;
v___y_1710_ = v___y_1733_;
v___y_1711_ = v___y_1737_;
v___y_1712_ = v___y_1736_;
v___y_1713_ = v___y_1735_;
v___y_1714_ = v___y_1732_;
v___y_1715_ = v___y_1739_;
v___y_1716_ = v___y_1734_;
goto v___jp_1708_;
}
else
{
lean_object* v___x_1746_; lean_object* v___x_1748_; 
lean_dec_ref(v___x_1256_);
lean_dec(v_cls_1255_);
v___x_1746_ = lean_box(v___x_1254_);
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 0, v___x_1746_);
v___x_1748_ = v___x_1743_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v___x_1746_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
return v___x_1748_;
}
}
}
}
else
{
lean_dec_ref(v___x_1256_);
lean_dec(v_cls_1255_);
return v___y_1740_;
}
}
v___jp_1751_:
{
lean_object* v___x_1767_; double v___x_1768_; double v___x_1769_; double v___x_1770_; double v___x_1771_; double v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1767_ = lean_io_mono_nanos_now();
v___x_1768_ = lean_float_of_nat(v___y_1756_);
v___x_1769_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0);
v___x_1770_ = lean_float_div(v___x_1768_, v___x_1769_);
v___x_1771_ = lean_float_of_nat(v___x_1767_);
v___x_1772_ = lean_float_div(v___x_1771_, v___x_1769_);
v___x_1773_ = lean_box_float(v___x_1770_);
v___x_1774_ = lean_box_float(v___x_1772_);
v___x_1775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1775_, 0, v___x_1773_);
lean_ctor_set(v___x_1775_, 1, v___x_1774_);
v___x_1776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1776_, 0, v_a_1766_);
lean_ctor_set(v___x_1776_, 1, v___x_1775_);
lean_inc_ref(v___y_1758_);
lean_inc_ref(v___x_1256_);
lean_inc(v_cls_1255_);
v___x_1777_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_1255_, v___y_1754_, v___x_1256_, v___y_1761_, v___y_1755_, v___y_1757_, v___y_1758_, v___x_1776_, v___y_1763_, v___y_1759_, v___y_1764_, v___y_1762_, v___y_1760_, v___y_1752_, v___y_1765_, v___y_1753_);
v___y_1732_ = v___y_1752_;
v___y_1733_ = v___y_1759_;
v___y_1734_ = v___y_1753_;
v___y_1735_ = v___y_1760_;
v___y_1736_ = v___y_1762_;
v___y_1737_ = v___y_1764_;
v___y_1738_ = v___y_1763_;
v___y_1739_ = v___y_1765_;
v___y_1740_ = v___x_1777_;
goto v___jp_1731_;
}
v___jp_1778_:
{
lean_object* v___x_1794_; double v___x_1795_; double v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1794_ = lean_io_get_num_heartbeats();
v___x_1795_ = lean_float_of_nat(v___y_1787_);
v___x_1796_ = lean_float_of_nat(v___x_1794_);
v___x_1797_ = lean_box_float(v___x_1795_);
v___x_1798_ = lean_box_float(v___x_1796_);
v___x_1799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1797_);
lean_ctor_set(v___x_1799_, 1, v___x_1798_);
v___x_1800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1800_, 0, v_a_1793_);
lean_ctor_set(v___x_1800_, 1, v___x_1799_);
lean_inc_ref(v___y_1784_);
lean_inc_ref(v___x_1256_);
lean_inc(v_cls_1255_);
v___x_1801_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_1255_, v___y_1781_, v___x_1256_, v___y_1788_, v___y_1782_, v___y_1783_, v___y_1784_, v___x_1800_, v___y_1790_, v___y_1785_, v___y_1791_, v___y_1789_, v___y_1786_, v___y_1779_, v___y_1792_, v___y_1780_);
v___y_1732_ = v___y_1779_;
v___y_1733_ = v___y_1785_;
v___y_1734_ = v___y_1780_;
v___y_1735_ = v___y_1786_;
v___y_1736_ = v___y_1789_;
v___y_1737_ = v___y_1791_;
v___y_1738_ = v___y_1790_;
v___y_1739_ = v___y_1792_;
v___y_1740_ = v___x_1801_;
goto v___jp_1731_;
}
v___jp_1802_:
{
lean_object* v___x_1816_; lean_object* v_a_1817_; uint8_t v___x_1818_; 
v___x_1816_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v___y_1804_);
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
lean_inc(v_a_1817_);
lean_dec_ref(v___x_1816_);
v___x_1818_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v___y_1812_, v___x_1257_);
if (v___x_1818_ == 0)
{
lean_object* v___x_1819_; lean_object* v___x_1820_; 
v___x_1819_ = lean_io_mono_nanos_now();
lean_inc(v___y_1804_);
lean_inc_ref(v___y_1815_);
lean_inc(v___y_1803_);
lean_inc_ref(v___y_1810_);
lean_inc(v___y_1811_);
lean_inc_ref(v___y_1814_);
lean_inc(v___y_1809_);
lean_inc_ref(v___y_1813_);
v___x_1820_ = lean_apply_9(v___y_1805_, v___y_1813_, v___y_1809_, v___y_1814_, v___y_1811_, v___y_1810_, v___y_1803_, v___y_1815_, v___y_1804_, lean_box(0));
if (lean_obj_tag(v___x_1820_) == 0)
{
lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1828_; 
v_a_1821_ = lean_ctor_get(v___x_1820_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1820_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1823_ = v___x_1820_;
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_dec(v___x_1820_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1826_; 
if (v_isShared_1824_ == 0)
{
lean_ctor_set_tag(v___x_1823_, 1);
v___x_1826_ = v___x_1823_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1821_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
v___y_1752_ = v___y_1803_;
v___y_1753_ = v___y_1804_;
v___y_1754_ = v___y_1806_;
v___y_1755_ = v___y_1807_;
v___y_1756_ = v___x_1819_;
v___y_1757_ = v_a_1817_;
v___y_1758_ = v___y_1808_;
v___y_1759_ = v___y_1809_;
v___y_1760_ = v___y_1810_;
v___y_1761_ = v___y_1812_;
v___y_1762_ = v___y_1811_;
v___y_1763_ = v___y_1813_;
v___y_1764_ = v___y_1814_;
v___y_1765_ = v___y_1815_;
v_a_1766_ = v___x_1826_;
goto v___jp_1751_;
}
}
}
else
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1836_; 
v_a_1829_ = lean_ctor_get(v___x_1820_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v___x_1820_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1831_ = v___x_1820_;
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1820_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1834_; 
if (v_isShared_1832_ == 0)
{
lean_ctor_set_tag(v___x_1831_, 0);
v___x_1834_ = v___x_1831_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_a_1829_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
v___y_1752_ = v___y_1803_;
v___y_1753_ = v___y_1804_;
v___y_1754_ = v___y_1806_;
v___y_1755_ = v___y_1807_;
v___y_1756_ = v___x_1819_;
v___y_1757_ = v_a_1817_;
v___y_1758_ = v___y_1808_;
v___y_1759_ = v___y_1809_;
v___y_1760_ = v___y_1810_;
v___y_1761_ = v___y_1812_;
v___y_1762_ = v___y_1811_;
v___y_1763_ = v___y_1813_;
v___y_1764_ = v___y_1814_;
v___y_1765_ = v___y_1815_;
v_a_1766_ = v___x_1834_;
goto v___jp_1751_;
}
}
}
}
else
{
lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1837_ = lean_io_get_num_heartbeats();
lean_inc(v___y_1804_);
lean_inc_ref(v___y_1815_);
lean_inc(v___y_1803_);
lean_inc_ref(v___y_1810_);
lean_inc(v___y_1811_);
lean_inc_ref(v___y_1814_);
lean_inc(v___y_1809_);
lean_inc_ref(v___y_1813_);
v___x_1838_ = lean_apply_9(v___y_1805_, v___y_1813_, v___y_1809_, v___y_1814_, v___y_1811_, v___y_1810_, v___y_1803_, v___y_1815_, v___y_1804_, lean_box(0));
if (lean_obj_tag(v___x_1838_) == 0)
{
lean_object* v_a_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1846_; 
v_a_1839_ = lean_ctor_get(v___x_1838_, 0);
v_isSharedCheck_1846_ = !lean_is_exclusive(v___x_1838_);
if (v_isSharedCheck_1846_ == 0)
{
v___x_1841_ = v___x_1838_;
v_isShared_1842_ = v_isSharedCheck_1846_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_a_1839_);
lean_dec(v___x_1838_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1846_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1844_; 
if (v_isShared_1842_ == 0)
{
lean_ctor_set_tag(v___x_1841_, 1);
v___x_1844_ = v___x_1841_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v_a_1839_);
v___x_1844_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
v___y_1779_ = v___y_1803_;
v___y_1780_ = v___y_1804_;
v___y_1781_ = v___y_1806_;
v___y_1782_ = v___y_1807_;
v___y_1783_ = v_a_1817_;
v___y_1784_ = v___y_1808_;
v___y_1785_ = v___y_1809_;
v___y_1786_ = v___y_1810_;
v___y_1787_ = v___x_1837_;
v___y_1788_ = v___y_1812_;
v___y_1789_ = v___y_1811_;
v___y_1790_ = v___y_1813_;
v___y_1791_ = v___y_1814_;
v___y_1792_ = v___y_1815_;
v_a_1793_ = v___x_1844_;
goto v___jp_1778_;
}
}
}
else
{
lean_object* v_a_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1854_; 
v_a_1847_ = lean_ctor_get(v___x_1838_, 0);
v_isSharedCheck_1854_ = !lean_is_exclusive(v___x_1838_);
if (v_isSharedCheck_1854_ == 0)
{
v___x_1849_ = v___x_1838_;
v_isShared_1850_ = v_isSharedCheck_1854_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_a_1847_);
lean_dec(v___x_1838_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1854_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
lean_object* v___x_1852_; 
if (v_isShared_1850_ == 0)
{
lean_ctor_set_tag(v___x_1849_, 0);
v___x_1852_ = v___x_1849_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v_a_1847_);
v___x_1852_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
v___y_1779_ = v___y_1803_;
v___y_1780_ = v___y_1804_;
v___y_1781_ = v___y_1806_;
v___y_1782_ = v___y_1807_;
v___y_1783_ = v_a_1817_;
v___y_1784_ = v___y_1808_;
v___y_1785_ = v___y_1809_;
v___y_1786_ = v___y_1810_;
v___y_1787_ = v___x_1837_;
v___y_1788_ = v___y_1812_;
v___y_1789_ = v___y_1811_;
v___y_1790_ = v___y_1813_;
v___y_1791_ = v___y_1814_;
v___y_1792_ = v___y_1815_;
v_a_1793_ = v___x_1852_;
goto v___jp_1778_;
}
}
}
}
}
v___jp_1855_:
{
if (v_structures_1392_ == 0)
{
v___y_1709_ = v___y_1856_;
v___y_1710_ = v___y_1857_;
v___y_1711_ = v___y_1858_;
v___y_1712_ = v___y_1859_;
v___y_1713_ = v___y_1860_;
v___y_1714_ = v___y_1861_;
v___y_1715_ = v___y_1862_;
v___y_1716_ = v___y_1863_;
goto v___jp_1708_;
}
else
{
lean_object* v___x_1864_; lean_object* v_options_1865_; uint8_t v_hasTrace_1866_; 
v___x_1864_ = l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass;
v_options_1865_ = lean_ctor_get(v___y_1862_, 2);
v_hasTrace_1866_ = lean_ctor_get_uint8(v_options_1865_, sizeof(void*)*1);
if (v_hasTrace_1866_ == 0)
{
lean_object* v_run_x27_1867_; lean_object* v___x_1868_; 
v_run_x27_1867_ = lean_ctor_get(v___x_1864_, 1);
lean_inc_ref(v_run_x27_1867_);
lean_inc(v___y_1863_);
lean_inc_ref(v___y_1862_);
lean_inc(v___y_1861_);
lean_inc_ref(v___y_1860_);
lean_inc(v___y_1859_);
lean_inc_ref(v___y_1858_);
lean_inc(v___y_1857_);
lean_inc_ref(v___y_1856_);
v___x_1868_ = lean_apply_9(v_run_x27_1867_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, lean_box(0));
v___y_1732_ = v___y_1861_;
v___y_1733_ = v___y_1857_;
v___y_1734_ = v___y_1863_;
v___y_1735_ = v___y_1860_;
v___y_1736_ = v___y_1859_;
v___y_1737_ = v___y_1858_;
v___y_1738_ = v___y_1856_;
v___y_1739_ = v___y_1862_;
v___y_1740_ = v___x_1868_;
goto v___jp_1731_;
}
else
{
lean_object* v_run_x27_1869_; lean_object* v_inheritedTraceOptions_1870_; lean_object* v___f_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; uint8_t v___x_1874_; 
v_run_x27_1869_ = lean_ctor_get(v___x_1864_, 1);
v_inheritedTraceOptions_1870_ = lean_ctor_get(v___y_1862_, 13);
v___f_1871_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__6);
v___x_1872_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__3));
lean_inc(v_cls_1255_);
v___x_1873_ = l_Lean_Name_append(v___x_1872_, v_cls_1255_);
v___x_1874_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1870_, v_options_1865_, v___x_1873_);
lean_dec(v___x_1873_);
if (v___x_1874_ == 0)
{
lean_object* v___x_1875_; uint8_t v___x_1876_; 
v___x_1875_ = l_Lean_trace_profiler;
v___x_1876_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_options_1865_, v___x_1875_);
if (v___x_1876_ == 0)
{
lean_object* v___x_1877_; 
lean_inc_ref(v_run_x27_1869_);
lean_inc(v___y_1863_);
lean_inc_ref(v___y_1862_);
lean_inc(v___y_1861_);
lean_inc_ref(v___y_1860_);
lean_inc(v___y_1859_);
lean_inc_ref(v___y_1858_);
lean_inc(v___y_1857_);
lean_inc_ref(v___y_1856_);
v___x_1877_ = lean_apply_9(v_run_x27_1869_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, lean_box(0));
v___y_1732_ = v___y_1861_;
v___y_1733_ = v___y_1857_;
v___y_1734_ = v___y_1863_;
v___y_1735_ = v___y_1860_;
v___y_1736_ = v___y_1859_;
v___y_1737_ = v___y_1858_;
v___y_1738_ = v___y_1856_;
v___y_1739_ = v___y_1862_;
v___y_1740_ = v___x_1877_;
goto v___jp_1731_;
}
else
{
lean_inc_ref(v_run_x27_1869_);
v___y_1803_ = v___y_1861_;
v___y_1804_ = v___y_1863_;
v___y_1805_ = v_run_x27_1869_;
v___y_1806_ = v_hasTrace_1866_;
v___y_1807_ = v___x_1874_;
v___y_1808_ = v___f_1871_;
v___y_1809_ = v___y_1857_;
v___y_1810_ = v___y_1860_;
v___y_1811_ = v___y_1859_;
v___y_1812_ = v_options_1865_;
v___y_1813_ = v___y_1856_;
v___y_1814_ = v___y_1858_;
v___y_1815_ = v___y_1862_;
goto v___jp_1802_;
}
}
else
{
lean_inc_ref(v_run_x27_1869_);
v___y_1803_ = v___y_1861_;
v___y_1804_ = v___y_1863_;
v___y_1805_ = v_run_x27_1869_;
v___y_1806_ = v_hasTrace_1866_;
v___y_1807_ = v___x_1874_;
v___y_1808_ = v___f_1871_;
v___y_1809_ = v___y_1857_;
v___y_1810_ = v___y_1860_;
v___y_1811_ = v___y_1859_;
v___y_1812_ = v_options_1865_;
v___y_1813_ = v___y_1856_;
v___y_1814_ = v___y_1858_;
v___y_1815_ = v___y_1862_;
goto v___jp_1802_;
}
}
}
}
v___jp_1878_:
{
if (lean_obj_tag(v___y_1879_) == 0)
{
lean_object* v_a_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1889_; 
v_a_1880_ = lean_ctor_get(v___y_1879_, 0);
v_isSharedCheck_1889_ = !lean_is_exclusive(v___y_1879_);
if (v_isSharedCheck_1889_ == 0)
{
v___x_1882_ = v___y_1879_;
v_isShared_1883_ = v_isSharedCheck_1889_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_a_1880_);
lean_dec(v___y_1879_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1889_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
uint8_t v___x_1884_; 
v___x_1884_ = lean_unbox(v_a_1880_);
lean_dec(v_a_1880_);
if (v___x_1884_ == 0)
{
lean_del_object(v___x_1882_);
v___y_1856_ = v___y_1259_;
v___y_1857_ = v___y_1260_;
v___y_1858_ = v___y_1261_;
v___y_1859_ = v___y_1262_;
v___y_1860_ = v___y_1263_;
v___y_1861_ = v___y_1264_;
v___y_1862_ = v___y_1265_;
v___y_1863_ = v___y_1266_;
goto v___jp_1855_;
}
else
{
lean_object* v___x_1885_; lean_object* v___x_1887_; 
lean_dec_ref(v___x_1256_);
lean_dec(v_cls_1255_);
v___x_1885_ = lean_box(v___x_1254_);
if (v_isShared_1883_ == 0)
{
lean_ctor_set(v___x_1882_, 0, v___x_1885_);
v___x_1887_ = v___x_1882_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v___x_1885_);
v___x_1887_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
return v___x_1887_;
}
}
}
}
else
{
lean_dec_ref(v___x_1256_);
lean_dec(v_cls_1255_);
return v___y_1879_;
}
}
v___jp_1890_:
{
lean_object* v___x_1898_; double v___x_1899_; double v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1898_ = lean_io_get_num_heartbeats();
v___x_1899_ = lean_float_of_nat(v___y_1895_);
v___x_1900_ = lean_float_of_nat(v___x_1898_);
v___x_1901_ = lean_box_float(v___x_1899_);
v___x_1902_ = lean_box_float(v___x_1900_);
v___x_1903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1901_);
lean_ctor_set(v___x_1903_, 1, v___x_1902_);
v___x_1904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1904_, 0, v_a_1897_);
lean_ctor_set(v___x_1904_, 1, v___x_1903_);
lean_inc_ref(v___y_1893_);
lean_inc_ref(v___x_1256_);
lean_inc(v_cls_1255_);
v___x_1905_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_1255_, v___y_1891_, v___x_1256_, v___y_1892_, v___y_1896_, v___y_1894_, v___y_1893_, v___x_1904_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
v___y_1879_ = v___x_1905_;
goto v___jp_1878_;
}
v___jp_1906_:
{
lean_object* v___x_1914_; double v___x_1915_; double v___x_1916_; double v___x_1917_; double v___x_1918_; double v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
v___x_1914_ = lean_io_mono_nanos_now();
v___x_1915_ = lean_float_of_nat(v___y_1909_);
v___x_1916_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0);
v___x_1917_ = lean_float_div(v___x_1915_, v___x_1916_);
v___x_1918_ = lean_float_of_nat(v___x_1914_);
v___x_1919_ = lean_float_div(v___x_1918_, v___x_1916_);
v___x_1920_ = lean_box_float(v___x_1917_);
v___x_1921_ = lean_box_float(v___x_1919_);
v___x_1922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1920_);
lean_ctor_set(v___x_1922_, 1, v___x_1921_);
v___x_1923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1923_, 0, v_a_1913_);
lean_ctor_set(v___x_1923_, 1, v___x_1922_);
lean_inc_ref(v___y_1910_);
lean_inc_ref(v___x_1256_);
lean_inc(v_cls_1255_);
v___x_1924_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_1255_, v___y_1907_, v___x_1256_, v___y_1908_, v___y_1912_, v___y_1911_, v___y_1910_, v___x_1923_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
v___y_1879_ = v___x_1924_;
goto v___jp_1878_;
}
v___jp_1925_:
{
lean_object* v___x_1931_; lean_object* v_a_1932_; uint8_t v___x_1933_; 
v___x_1931_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v___y_1266_);
v_a_1932_ = lean_ctor_get(v___x_1931_, 0);
lean_inc(v_a_1932_);
lean_dec_ref(v___x_1931_);
v___x_1933_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v___y_1927_, v___x_1257_);
if (v___x_1933_ == 0)
{
lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1934_ = lean_io_mono_nanos_now();
lean_inc(v___y_1266_);
lean_inc_ref(v___y_1265_);
lean_inc(v___y_1264_);
lean_inc_ref(v___y_1263_);
lean_inc(v___y_1262_);
lean_inc_ref(v___y_1261_);
lean_inc(v___y_1260_);
lean_inc_ref(v___y_1259_);
v___x_1935_ = lean_apply_9(v___y_1930_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_, lean_box(0));
if (lean_obj_tag(v___x_1935_) == 0)
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1943_; 
v_a_1936_ = lean_ctor_get(v___x_1935_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1938_ = v___x_1935_;
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1935_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1939_ == 0)
{
lean_ctor_set_tag(v___x_1938_, 1);
v___x_1941_ = v___x_1938_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_a_1936_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
v___y_1907_ = v___y_1926_;
v___y_1908_ = v___y_1927_;
v___y_1909_ = v___x_1934_;
v___y_1910_ = v___y_1928_;
v___y_1911_ = v_a_1932_;
v___y_1912_ = v___y_1929_;
v_a_1913_ = v___x_1941_;
goto v___jp_1906_;
}
}
}
else
{
lean_object* v_a_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1951_; 
v_a_1944_ = lean_ctor_get(v___x_1935_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1946_ = v___x_1935_;
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_a_1944_);
lean_dec(v___x_1935_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1949_; 
if (v_isShared_1947_ == 0)
{
lean_ctor_set_tag(v___x_1946_, 0);
v___x_1949_ = v___x_1946_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_a_1944_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
v___y_1907_ = v___y_1926_;
v___y_1908_ = v___y_1927_;
v___y_1909_ = v___x_1934_;
v___y_1910_ = v___y_1928_;
v___y_1911_ = v_a_1932_;
v___y_1912_ = v___y_1929_;
v_a_1913_ = v___x_1949_;
goto v___jp_1906_;
}
}
}
}
else
{
lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1952_ = lean_io_get_num_heartbeats();
lean_inc(v___y_1266_);
lean_inc_ref(v___y_1265_);
lean_inc(v___y_1264_);
lean_inc_ref(v___y_1263_);
lean_inc(v___y_1262_);
lean_inc_ref(v___y_1261_);
lean_inc(v___y_1260_);
lean_inc_ref(v___y_1259_);
v___x_1953_ = lean_apply_9(v___y_1930_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_, lean_box(0));
if (lean_obj_tag(v___x_1953_) == 0)
{
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
v_a_1954_ = lean_ctor_get(v___x_1953_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1953_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v___x_1953_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v___x_1953_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1959_; 
if (v_isShared_1957_ == 0)
{
lean_ctor_set_tag(v___x_1956_, 1);
v___x_1959_ = v___x_1956_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_a_1954_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
v___y_1891_ = v___y_1926_;
v___y_1892_ = v___y_1927_;
v___y_1893_ = v___y_1928_;
v___y_1894_ = v_a_1932_;
v___y_1895_ = v___x_1952_;
v___y_1896_ = v___y_1929_;
v_a_1897_ = v___x_1959_;
goto v___jp_1890_;
}
}
}
else
{
lean_object* v_a_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1969_; 
v_a_1962_ = lean_ctor_get(v___x_1953_, 0);
v_isSharedCheck_1969_ = !lean_is_exclusive(v___x_1953_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1964_ = v___x_1953_;
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_a_1962_);
lean_dec(v___x_1953_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1967_; 
if (v_isShared_1965_ == 0)
{
lean_ctor_set_tag(v___x_1964_, 0);
v___x_1967_ = v___x_1964_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v_a_1962_);
v___x_1967_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
v___y_1891_ = v___y_1926_;
v___y_1892_ = v___y_1927_;
v___y_1893_ = v___y_1928_;
v___y_1894_ = v_a_1932_;
v___y_1895_ = v___x_1952_;
v___y_1896_ = v___y_1929_;
v_a_1897_ = v___x_1967_;
goto v___jp_1890_;
}
}
}
}
}
v___jp_1970_:
{
lean_object* v___x_1971_; lean_object* v_options_1972_; uint8_t v_hasTrace_1973_; 
v___x_1971_ = l_Lean_Meta_Tactic_BVDecide_Normalize_typeAnalysisPass;
v_options_1972_ = lean_ctor_get(v___y_1265_, 2);
v_hasTrace_1973_ = lean_ctor_get_uint8(v_options_1972_, sizeof(void*)*1);
if (v_hasTrace_1973_ == 0)
{
lean_object* v_run_x27_1974_; lean_object* v___x_1975_; 
v_run_x27_1974_ = lean_ctor_get(v___x_1971_, 1);
lean_inc_ref(v_run_x27_1974_);
lean_inc(v___y_1266_);
lean_inc_ref(v___y_1265_);
lean_inc(v___y_1264_);
lean_inc_ref(v___y_1263_);
lean_inc(v___y_1262_);
lean_inc_ref(v___y_1261_);
lean_inc(v___y_1260_);
lean_inc_ref(v___y_1259_);
v___x_1975_ = lean_apply_9(v_run_x27_1974_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_, lean_box(0));
v___y_1879_ = v___x_1975_;
goto v___jp_1878_;
}
else
{
lean_object* v_run_x27_1976_; lean_object* v_inheritedTraceOptions_1977_; lean_object* v___f_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; uint8_t v___x_1981_; 
v_run_x27_1976_ = lean_ctor_get(v___x_1971_, 1);
v_inheritedTraceOptions_1977_ = lean_ctor_get(v___y_1265_, 13);
v___f_1978_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__7);
v___x_1979_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__3));
lean_inc(v_cls_1255_);
v___x_1980_ = l_Lean_Name_append(v___x_1979_, v_cls_1255_);
v___x_1981_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1977_, v_options_1972_, v___x_1980_);
lean_dec(v___x_1980_);
if (v___x_1981_ == 0)
{
lean_object* v___x_1982_; uint8_t v___x_1983_; 
v___x_1982_ = l_Lean_trace_profiler;
v___x_1983_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_options_1972_, v___x_1982_);
if (v___x_1983_ == 0)
{
lean_object* v___x_1984_; 
lean_inc_ref(v_run_x27_1976_);
lean_inc(v___y_1266_);
lean_inc_ref(v___y_1265_);
lean_inc(v___y_1264_);
lean_inc_ref(v___y_1263_);
lean_inc(v___y_1262_);
lean_inc_ref(v___y_1261_);
lean_inc(v___y_1260_);
lean_inc_ref(v___y_1259_);
v___x_1984_ = lean_apply_9(v_run_x27_1976_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_, lean_box(0));
v___y_1879_ = v___x_1984_;
goto v___jp_1878_;
}
else
{
lean_inc_ref(v_run_x27_1976_);
v___y_1926_ = v_hasTrace_1973_;
v___y_1927_ = v_options_1972_;
v___y_1928_ = v___f_1978_;
v___y_1929_ = v___x_1981_;
v___y_1930_ = v_run_x27_1976_;
goto v___jp_1925_;
}
}
else
{
lean_inc_ref(v_run_x27_1976_);
v___y_1926_ = v_hasTrace_1973_;
v___y_1927_ = v_options_1972_;
v___y_1928_ = v___f_1978_;
v___y_1929_ = v___x_1981_;
v___y_1930_ = v_run_x27_1976_;
goto v___jp_1925_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__8___boxed(lean_object* v___x_1985_, lean_object* v_cls_1986_, lean_object* v___x_1987_, lean_object* v___x_1988_, lean_object* v_____r_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_){
_start:
{
uint8_t v___x_382254__boxed_1999_; lean_object* v_res_2000_; 
v___x_382254__boxed_1999_ = lean_unbox(v___x_1985_);
v_res_2000_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__8(v___x_382254__boxed_1999_, v_cls_1986_, v___x_1987_, v___x_1988_, v_____r_1989_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_, v___y_1996_, v___y_1997_);
lean_dec(v___y_1997_);
lean_dec_ref(v___y_1996_);
lean_dec(v___y_1995_);
lean_dec_ref(v___y_1994_);
lean_dec(v___y_1993_);
lean_dec_ref(v___y_1992_);
lean_dec(v___y_1991_);
lean_dec_ref(v___y_1990_);
lean_dec_ref(v___x_1988_);
return v_res_2000_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg(lean_object* v_cls_2004_, lean_object* v_msg_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_){
_start:
{
lean_object* v_ref_2011_; lean_object* v___x_2012_; lean_object* v_a_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2057_; 
v_ref_2011_ = lean_ctor_get(v___y_2008_, 5);
v___x_2012_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3_spec__7(v_msg_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
v_a_2013_ = lean_ctor_get(v___x_2012_, 0);
v_isSharedCheck_2057_ = !lean_is_exclusive(v___x_2012_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2015_ = v___x_2012_;
v_isShared_2016_ = v_isSharedCheck_2057_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_a_2013_);
lean_dec(v___x_2012_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2057_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2017_; lean_object* v_traceState_2018_; lean_object* v_env_2019_; lean_object* v_nextMacroScope_2020_; lean_object* v_ngen_2021_; lean_object* v_auxDeclNGen_2022_; lean_object* v_cache_2023_; lean_object* v_messages_2024_; lean_object* v_infoState_2025_; lean_object* v_snapshotTasks_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2056_; 
v___x_2017_ = lean_st_ref_take(v___y_2009_);
v_traceState_2018_ = lean_ctor_get(v___x_2017_, 4);
v_env_2019_ = lean_ctor_get(v___x_2017_, 0);
v_nextMacroScope_2020_ = lean_ctor_get(v___x_2017_, 1);
v_ngen_2021_ = lean_ctor_get(v___x_2017_, 2);
v_auxDeclNGen_2022_ = lean_ctor_get(v___x_2017_, 3);
v_cache_2023_ = lean_ctor_get(v___x_2017_, 5);
v_messages_2024_ = lean_ctor_get(v___x_2017_, 6);
v_infoState_2025_ = lean_ctor_get(v___x_2017_, 7);
v_snapshotTasks_2026_ = lean_ctor_get(v___x_2017_, 8);
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_2017_);
if (v_isSharedCheck_2056_ == 0)
{
v___x_2028_ = v___x_2017_;
v_isShared_2029_ = v_isSharedCheck_2056_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_snapshotTasks_2026_);
lean_inc(v_infoState_2025_);
lean_inc(v_messages_2024_);
lean_inc(v_cache_2023_);
lean_inc(v_traceState_2018_);
lean_inc(v_auxDeclNGen_2022_);
lean_inc(v_ngen_2021_);
lean_inc(v_nextMacroScope_2020_);
lean_inc(v_env_2019_);
lean_dec(v___x_2017_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2056_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
uint64_t v_tid_2030_; lean_object* v_traces_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2055_; 
v_tid_2030_ = lean_ctor_get_uint64(v_traceState_2018_, sizeof(void*)*1);
v_traces_2031_ = lean_ctor_get(v_traceState_2018_, 0);
v_isSharedCheck_2055_ = !lean_is_exclusive(v_traceState_2018_);
if (v_isSharedCheck_2055_ == 0)
{
v___x_2033_ = v_traceState_2018_;
v_isShared_2034_ = v_isSharedCheck_2055_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_traces_2031_);
lean_dec(v_traceState_2018_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2055_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
lean_object* v___x_2035_; double v___x_2036_; uint8_t v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2045_; 
v___x_2035_ = lean_box(0);
v___x_2036_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2___closed__0);
v___x_2037_ = 0;
v___x_2038_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg___closed__0));
v___x_2039_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2039_, 0, v_cls_2004_);
lean_ctor_set(v___x_2039_, 1, v___x_2035_);
lean_ctor_set(v___x_2039_, 2, v___x_2038_);
lean_ctor_set_float(v___x_2039_, sizeof(void*)*3, v___x_2036_);
lean_ctor_set_float(v___x_2039_, sizeof(void*)*3 + 8, v___x_2036_);
lean_ctor_set_uint8(v___x_2039_, sizeof(void*)*3 + 16, v___x_2037_);
v___x_2040_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg___closed__1));
v___x_2041_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2039_);
lean_ctor_set(v___x_2041_, 1, v_a_2013_);
lean_ctor_set(v___x_2041_, 2, v___x_2040_);
lean_inc(v_ref_2011_);
v___x_2042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2042_, 0, v_ref_2011_);
lean_ctor_set(v___x_2042_, 1, v___x_2041_);
v___x_2043_ = l_Lean_PersistentArray_push___redArg(v_traces_2031_, v___x_2042_);
if (v_isShared_2034_ == 0)
{
lean_ctor_set(v___x_2033_, 0, v___x_2043_);
v___x_2045_ = v___x_2033_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v___x_2043_);
lean_ctor_set_uint64(v_reuseFailAlloc_2054_, sizeof(void*)*1, v_tid_2030_);
v___x_2045_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
lean_object* v___x_2047_; 
if (v_isShared_2029_ == 0)
{
lean_ctor_set(v___x_2028_, 4, v___x_2045_);
v___x_2047_ = v___x_2028_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_env_2019_);
lean_ctor_set(v_reuseFailAlloc_2053_, 1, v_nextMacroScope_2020_);
lean_ctor_set(v_reuseFailAlloc_2053_, 2, v_ngen_2021_);
lean_ctor_set(v_reuseFailAlloc_2053_, 3, v_auxDeclNGen_2022_);
lean_ctor_set(v_reuseFailAlloc_2053_, 4, v___x_2045_);
lean_ctor_set(v_reuseFailAlloc_2053_, 5, v_cache_2023_);
lean_ctor_set(v_reuseFailAlloc_2053_, 6, v_messages_2024_);
lean_ctor_set(v_reuseFailAlloc_2053_, 7, v_infoState_2025_);
lean_ctor_set(v_reuseFailAlloc_2053_, 8, v_snapshotTasks_2026_);
v___x_2047_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2051_; 
v___x_2048_ = lean_st_ref_set(v___y_2009_, v___x_2047_);
v___x_2049_ = lean_box(0);
if (v_isShared_2016_ == 0)
{
lean_ctor_set(v___x_2015_, 0, v___x_2049_);
v___x_2051_ = v___x_2015_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v___x_2049_);
v___x_2051_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
return v___x_2051_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg___boxed(lean_object* v_cls_2058_, lean_object* v_msg_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_){
_start:
{
lean_object* v_res_2065_; 
v_res_2065_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg(v_cls_2058_, v_msg_2059_, v___y_2060_, v___y_2061_, v___y_2062_, v___y_2063_);
lean_dec(v___y_2063_);
lean_dec_ref(v___y_2062_);
lean_dec(v___y_2061_);
lean_dec_ref(v___y_2060_);
return v_res_2065_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4(void){
_start:
{
lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2073_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__3));
v___x_2074_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__3));
v___x_2075_ = l_Lean_Name_append(v___x_2074_, v___x_2073_);
return v___x_2075_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__6(void){
_start:
{
lean_object* v___x_2077_; lean_object* v___x_2078_; 
v___x_2077_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__5));
v___x_2078_ = l_Lean_stringToMessageData(v___x_2077_);
return v___x_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize(lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_){
_start:
{
uint8_t v___y_2090_; uint8_t v___y_2091_; lean_object* v___y_2092_; lean_object* v___y_2108_; lean_object* v___y_2109_; uint8_t v___y_2110_; lean_object* v___y_2111_; lean_object* v___y_2112_; lean_object* v___y_2113_; lean_object* v___y_2114_; lean_object* v___y_2115_; uint8_t v___y_2116_; lean_object* v___y_2117_; lean_object* v___y_2118_; uint8_t v___y_2119_; lean_object* v___y_2120_; lean_object* v___y_2121_; uint8_t v___y_2122_; lean_object* v___y_2123_; lean_object* v___y_2124_; lean_object* v___y_2125_; lean_object* v_a_2126_; lean_object* v___y_2136_; uint8_t v___y_2137_; lean_object* v___y_2138_; lean_object* v___y_2139_; lean_object* v___y_2140_; lean_object* v___y_2141_; lean_object* v___y_2142_; uint8_t v___y_2143_; lean_object* v___y_2144_; lean_object* v___y_2145_; uint8_t v___y_2146_; lean_object* v___y_2147_; lean_object* v___y_2148_; uint8_t v___y_2149_; lean_object* v___y_2150_; lean_object* v___y_2151_; lean_object* v___y_2152_; lean_object* v___y_2153_; lean_object* v_a_2154_; lean_object* v___y_2167_; uint8_t v___y_2168_; lean_object* v___y_2169_; lean_object* v___y_2170_; lean_object* v___y_2171_; lean_object* v___y_2172_; lean_object* v___y_2173_; lean_object* v___y_2174_; uint8_t v___y_2175_; lean_object* v___y_2176_; uint8_t v___y_2177_; lean_object* v___y_2178_; lean_object* v___y_2179_; uint8_t v___y_2180_; lean_object* v___y_2181_; lean_object* v___y_2182_; lean_object* v___y_2183_; lean_object* v___y_2225_; lean_object* v___y_2226_; lean_object* v___y_2227_; lean_object* v___y_2228_; lean_object* v___y_2229_; lean_object* v___y_2230_; lean_object* v___y_2231_; lean_object* v___y_2232_; lean_object* v___y_2233_; lean_object* v___y_2270_; lean_object* v___y_2271_; lean_object* v___y_2272_; lean_object* v___y_2273_; lean_object* v___y_2274_; lean_object* v___y_2275_; lean_object* v___y_2276_; lean_object* v___y_2277_; uint8_t v___y_2278_; lean_object* v___y_2279_; lean_object* v___y_2280_; lean_object* v___y_2292_; lean_object* v___y_2293_; lean_object* v___y_2294_; lean_object* v___y_2295_; lean_object* v___y_2296_; lean_object* v___y_2297_; uint8_t v___y_2298_; lean_object* v___y_2299_; lean_object* v___y_2300_; uint8_t v___y_2301_; uint8_t v___y_2302_; lean_object* v___y_2303_; lean_object* v___y_2304_; lean_object* v___y_2305_; lean_object* v___y_2306_; lean_object* v___y_2307_; lean_object* v___y_2308_; lean_object* v___y_2309_; lean_object* v_a_2310_; lean_object* v___y_2320_; lean_object* v___y_2321_; lean_object* v___y_2322_; lean_object* v___y_2323_; lean_object* v___y_2324_; lean_object* v___y_2325_; lean_object* v___y_2326_; uint8_t v___y_2327_; lean_object* v___y_2328_; lean_object* v___y_2329_; uint8_t v___y_2330_; uint8_t v___y_2331_; lean_object* v___y_2332_; lean_object* v___y_2333_; lean_object* v___y_2334_; lean_object* v___y_2335_; lean_object* v___y_2336_; lean_object* v___y_2337_; lean_object* v_a_2338_; lean_object* v___y_2351_; lean_object* v___y_2352_; lean_object* v___y_2353_; lean_object* v___y_2354_; lean_object* v___y_2355_; uint8_t v___y_2356_; lean_object* v___y_2357_; lean_object* v___y_2358_; uint8_t v___y_2359_; uint8_t v___y_2360_; lean_object* v___y_2361_; lean_object* v___y_2362_; lean_object* v___y_2363_; lean_object* v___y_2364_; lean_object* v___y_2365_; lean_object* v___y_2366_; lean_object* v___y_2367_; lean_object* v___y_2409_; uint8_t v_fixedInt_2410_; lean_object* v___y_2411_; lean_object* v___y_2412_; lean_object* v___y_2413_; lean_object* v___y_2414_; lean_object* v___y_2415_; lean_object* v___y_2416_; lean_object* v___y_2417_; lean_object* v___y_2418_; lean_object* v___y_2435_; uint8_t v___y_2436_; lean_object* v___y_2437_; lean_object* v___y_2438_; lean_object* v___y_2439_; lean_object* v___y_2440_; lean_object* v___y_2441_; lean_object* v___y_2442_; lean_object* v___y_2443_; lean_object* v___y_2444_; lean_object* v___y_2445_; lean_object* v___y_2458_; uint8_t v___y_2459_; lean_object* v___y_2460_; uint8_t v___y_2461_; lean_object* v___y_2462_; lean_object* v___y_2463_; lean_object* v___y_2464_; lean_object* v___y_2465_; lean_object* v___y_2466_; lean_object* v___y_2467_; lean_object* v___y_2468_; lean_object* v___y_2469_; lean_object* v___y_2470_; lean_object* v___y_2471_; lean_object* v___y_2472_; lean_object* v___y_2473_; lean_object* v___y_2474_; uint8_t v___y_2475_; lean_object* v_a_2476_; lean_object* v___y_2486_; uint8_t v___y_2487_; lean_object* v___y_2488_; uint8_t v___y_2489_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2493_; lean_object* v___y_2494_; lean_object* v___y_2495_; lean_object* v___y_2496_; lean_object* v___y_2497_; lean_object* v___y_2498_; lean_object* v___y_2499_; lean_object* v___y_2500_; lean_object* v___y_2501_; lean_object* v___y_2502_; uint8_t v___y_2503_; lean_object* v_a_2504_; lean_object* v___y_2517_; uint8_t v___y_2518_; lean_object* v___y_2519_; uint8_t v___y_2520_; lean_object* v___y_2521_; lean_object* v___y_2522_; lean_object* v___y_2523_; lean_object* v___y_2524_; lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___y_2528_; lean_object* v___y_2529_; lean_object* v___y_2530_; lean_object* v___y_2531_; lean_object* v___y_2532_; uint8_t v___y_2533_; lean_object* v___y_2575_; uint8_t v_fixedInt_2576_; uint8_t v_enums_2577_; lean_object* v___y_2578_; lean_object* v___y_2579_; lean_object* v___y_2580_; lean_object* v___y_2581_; lean_object* v___y_2582_; lean_object* v___y_2583_; lean_object* v___y_2584_; lean_object* v___y_2585_; lean_object* v___y_2602_; lean_object* v___y_2603_; lean_object* v___y_2604_; lean_object* v___y_2605_; lean_object* v___y_2606_; lean_object* v___y_2607_; uint8_t v___y_2608_; lean_object* v___y_2609_; lean_object* v___y_2610_; lean_object* v___y_2611_; lean_object* v___y_2612_; lean_object* v___y_2626_; lean_object* v___y_2627_; lean_object* v___y_2628_; lean_object* v___y_2629_; uint8_t v___y_2630_; lean_object* v___y_2631_; uint8_t v___y_2632_; uint8_t v___y_2633_; lean_object* v___y_2634_; lean_object* v___y_2635_; lean_object* v___y_2636_; lean_object* v___y_2637_; lean_object* v___y_2638_; lean_object* v___y_2639_; lean_object* v___y_2640_; lean_object* v___y_2641_; lean_object* v___y_2642_; lean_object* v___y_2643_; lean_object* v_a_2644_; lean_object* v___y_2654_; lean_object* v___y_2655_; lean_object* v___y_2656_; lean_object* v___y_2657_; uint8_t v___y_2658_; lean_object* v___y_2659_; uint8_t v___y_2660_; uint8_t v___y_2661_; lean_object* v___y_2662_; lean_object* v___y_2663_; lean_object* v___y_2664_; lean_object* v___y_2665_; lean_object* v___y_2666_; lean_object* v___y_2667_; lean_object* v___y_2668_; lean_object* v___y_2669_; lean_object* v___y_2670_; lean_object* v___y_2671_; lean_object* v_a_2672_; lean_object* v___y_2685_; lean_object* v___y_2686_; lean_object* v___y_2687_; lean_object* v___y_2688_; uint8_t v___y_2689_; lean_object* v___y_2690_; uint8_t v___y_2691_; uint8_t v___y_2692_; lean_object* v___y_2693_; lean_object* v___y_2694_; lean_object* v___y_2695_; lean_object* v___y_2696_; lean_object* v___y_2697_; lean_object* v___y_2698_; lean_object* v___y_2699_; lean_object* v___y_2700_; lean_object* v___y_2701_; uint8_t v___y_2743_; lean_object* v___y_2744_; lean_object* v___y_2745_; lean_object* v___y_2746_; lean_object* v___y_2747_; lean_object* v___y_2748_; lean_object* v___y_2749_; lean_object* v___y_2750_; lean_object* v___y_2751_; lean_object* v___y_2752_; lean_object* v___y_2782_; lean_object* v___y_2783_; lean_object* v___y_2784_; lean_object* v___y_2785_; lean_object* v___y_2786_; lean_object* v___y_2787_; lean_object* v___y_2788_; lean_object* v___y_2789_; lean_object* v___y_2790_; uint8_t v___y_2791_; lean_object* v___y_2792_; uint8_t v___y_2793_; lean_object* v___y_2794_; lean_object* v___y_2795_; lean_object* v___y_2796_; lean_object* v___y_2797_; uint8_t v___y_2798_; lean_object* v_a_2799_; lean_object* v___y_2809_; lean_object* v___y_2810_; lean_object* v___y_2811_; lean_object* v___y_2812_; lean_object* v___y_2813_; lean_object* v___y_2814_; lean_object* v___y_2815_; lean_object* v___y_2816_; uint8_t v___y_2817_; lean_object* v___y_2818_; uint8_t v___y_2819_; lean_object* v___y_2820_; lean_object* v___y_2821_; lean_object* v___y_2822_; lean_object* v___y_2823_; lean_object* v___y_2824_; uint8_t v___y_2825_; lean_object* v_a_2826_; lean_object* v___y_2839_; lean_object* v___y_2840_; lean_object* v___y_2841_; lean_object* v___y_2842_; lean_object* v___y_2843_; lean_object* v___y_2844_; lean_object* v___y_2845_; lean_object* v___y_2846_; lean_object* v___y_2847_; uint8_t v___y_2848_; lean_object* v___y_2849_; uint8_t v___y_2850_; lean_object* v___y_2851_; lean_object* v___y_2852_; lean_object* v___y_2853_; uint8_t v___y_2854_; lean_object* v___y_2896_; lean_object* v___y_2897_; lean_object* v___y_2898_; lean_object* v___y_2899_; lean_object* v___y_2900_; lean_object* v___y_2901_; lean_object* v___y_2902_; lean_object* v___y_2903_; lean_object* v___y_2920_; lean_object* v___y_2921_; lean_object* v___y_2922_; lean_object* v___y_2923_; lean_object* v___y_2924_; lean_object* v___y_2925_; lean_object* v___y_2926_; lean_object* v___y_2927_; lean_object* v_options_2931_; lean_object* v_inheritedTraceOptions_2932_; uint8_t v_hasTrace_2933_; lean_object* v_cls_2934_; lean_object* v___y_2936_; lean_object* v___y_2937_; lean_object* v___y_2938_; lean_object* v___y_2939_; lean_object* v___y_2940_; lean_object* v___y_2941_; lean_object* v___y_2942_; lean_object* v___y_2943_; lean_object* v___y_2944_; lean_object* v_snd_2945_; lean_object* v_g_2974_; lean_object* v___y_2975_; lean_object* v___y_2976_; lean_object* v___y_2977_; lean_object* v___y_2978_; lean_object* v___y_2979_; lean_object* v___y_2980_; lean_object* v___y_2981_; lean_object* v___y_2982_; 
v_options_2931_ = lean_ctor_get(v_a_2086_, 2);
v_inheritedTraceOptions_2932_ = lean_ctor_get(v_a_2086_, 13);
v_hasTrace_2933_ = lean_ctor_get_uint8(v_options_2931_, sizeof(void*)*1);
v_cls_2934_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__3));
if (v_hasTrace_2933_ == 0)
{
lean_object* v___x_3023_; lean_object* v_goal_3024_; 
v___x_3023_ = lean_st_ref_get(v_a_2081_);
v_goal_3024_ = lean_ctor_get(v___x_3023_, 3);
lean_inc(v_goal_3024_);
lean_dec(v___x_3023_);
v_g_2974_ = v_goal_3024_;
v___y_2975_ = v_a_2080_;
v___y_2976_ = v_a_2081_;
v___y_2977_ = v_a_2082_;
v___y_2978_ = v_a_2083_;
v___y_2979_ = v_a_2084_;
v___y_2980_ = v_a_2085_;
v___y_2981_ = v_a_2086_;
v___y_2982_ = v_a_2087_;
goto v___jp_2973_;
}
else
{
lean_object* v___f_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; uint8_t v___x_3028_; lean_object* v___y_3030_; lean_object* v___y_3031_; lean_object* v_a_3032_; lean_object* v___y_3042_; lean_object* v___y_3043_; uint8_t v_a_3044_; lean_object* v___y_3048_; lean_object* v___y_3049_; lean_object* v_a_3050_; lean_object* v___y_3053_; lean_object* v___y_3054_; lean_object* v___y_3055_; lean_object* v___y_3060_; lean_object* v___y_3061_; lean_object* v___y_3062_; lean_object* v___y_3063_; lean_object* v_snd_3064_; lean_object* v___y_3085_; lean_object* v___y_3086_; lean_object* v_a_3087_; lean_object* v___y_3100_; lean_object* v___y_3101_; uint8_t v_a_3102_; lean_object* v___y_3106_; lean_object* v___y_3107_; lean_object* v_a_3108_; lean_object* v___y_3111_; lean_object* v___y_3112_; lean_object* v___y_3113_; lean_object* v___y_3118_; lean_object* v___y_3119_; lean_object* v___y_3120_; lean_object* v___y_3121_; lean_object* v_snd_3122_; 
v___f_3025_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__7));
v___x_3026_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg___closed__0));
v___x_3027_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4);
v___x_3028_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2932_, v_options_2931_, v___x_3027_);
if (v___x_3028_ == 0)
{
lean_object* v___x_3203_; uint8_t v___x_3204_; 
v___x_3203_ = l_Lean_trace_profiler;
v___x_3204_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_options_2931_, v___x_3203_);
if (v___x_3204_ == 0)
{
lean_object* v___x_3205_; lean_object* v_goal_3206_; 
v___x_3205_ = lean_st_ref_get(v_a_2081_);
v_goal_3206_ = lean_ctor_get(v___x_3205_, 3);
lean_inc(v_goal_3206_);
lean_dec(v___x_3205_);
v_g_2974_ = v_goal_3206_;
v___y_2975_ = v_a_2080_;
v___y_2976_ = v_a_2081_;
v___y_2977_ = v_a_2082_;
v___y_2978_ = v_a_2083_;
v___y_2979_ = v_a_2084_;
v___y_2980_ = v_a_2085_;
v___y_2981_ = v_a_2086_;
v___y_2982_ = v_a_2087_;
goto v___jp_2973_;
}
else
{
goto v___jp_3142_;
}
}
else
{
goto v___jp_3142_;
}
v___jp_3029_:
{
lean_object* v___x_3033_; double v___x_3034_; double v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; 
v___x_3033_ = lean_io_get_num_heartbeats();
v___x_3034_ = lean_float_of_nat(v___y_3030_);
v___x_3035_ = lean_float_of_nat(v___x_3033_);
v___x_3036_ = lean_box_float(v___x_3034_);
v___x_3037_ = lean_box_float(v___x_3035_);
v___x_3038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3038_, 0, v___x_3036_);
lean_ctor_set(v___x_3038_, 1, v___x_3037_);
v___x_3039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3039_, 0, v_a_3032_);
lean_ctor_set(v___x_3039_, 1, v___x_3038_);
v___x_3040_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_2934_, v_hasTrace_2933_, v___x_3026_, v_options_2931_, v___x_3028_, v___y_3031_, v___f_3025_, v___x_3039_, v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_);
return v___x_3040_;
}
v___jp_3041_:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; 
v___x_3045_ = lean_box(v_a_3044_);
v___x_3046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3046_, 0, v___x_3045_);
v___y_3030_ = v___y_3042_;
v___y_3031_ = v___y_3043_;
v_a_3032_ = v___x_3046_;
goto v___jp_3029_;
}
v___jp_3047_:
{
lean_object* v___x_3051_; 
v___x_3051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3051_, 0, v_a_3050_);
v___y_3030_ = v___y_3048_;
v___y_3031_ = v___y_3049_;
v_a_3032_ = v___x_3051_;
goto v___jp_3029_;
}
v___jp_3052_:
{
if (lean_obj_tag(v___y_3055_) == 0)
{
lean_object* v_a_3056_; uint8_t v___x_3057_; 
v_a_3056_ = lean_ctor_get(v___y_3055_, 0);
lean_inc(v_a_3056_);
lean_dec_ref_known(v___y_3055_, 1);
v___x_3057_ = lean_unbox(v_a_3056_);
lean_dec(v_a_3056_);
v___y_3042_ = v___y_3053_;
v___y_3043_ = v___y_3054_;
v_a_3044_ = v___x_3057_;
goto v___jp_3041_;
}
else
{
lean_object* v_a_3058_; 
v_a_3058_ = lean_ctor_get(v___y_3055_, 0);
lean_inc(v_a_3058_);
lean_dec_ref_known(v___y_3055_, 1);
v___y_3048_ = v___y_3053_;
v___y_3049_ = v___y_3054_;
v_a_3050_ = v_a_3058_;
goto v___jp_3047_;
}
}
v___jp_3059_:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___x_3065_ = lean_st_ref_set(v_a_2081_, v_snd_3064_);
v___x_3066_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal(v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_);
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3081_; 
v_isSharedCheck_3081_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3081_ == 0)
{
lean_object* v_unused_3082_; 
v_unused_3082_ = lean_ctor_get(v___x_3066_, 0);
lean_dec(v_unused_3082_);
v___x_3068_ = v___x_3066_;
v_isShared_3069_ = v_isSharedCheck_3081_;
goto v_resetjp_3067_;
}
else
{
lean_dec(v___x_3066_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3081_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
if (v___x_3028_ == 0)
{
lean_object* v___x_3070_; lean_object* v___x_3071_; 
lean_del_object(v___x_3068_);
lean_dec(v___y_3060_);
v___x_3070_ = lean_box(0);
lean_inc(v_a_2087_);
lean_inc_ref(v_a_2086_);
lean_inc(v_a_2085_);
lean_inc_ref(v_a_2084_);
lean_inc(v_a_2083_);
lean_inc_ref(v_a_2082_);
lean_inc(v_a_2081_);
lean_inc_ref(v_a_2080_);
v___x_3071_ = lean_apply_10(v___y_3062_, v___x_3070_, v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_, lean_box(0));
v___y_3053_ = v___y_3061_;
v___y_3054_ = v___y_3063_;
v___y_3055_ = v___x_3071_;
goto v___jp_3052_;
}
else
{
lean_object* v___x_3072_; lean_object* v___x_3074_; 
v___x_3072_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__6);
if (v_isShared_3069_ == 0)
{
lean_ctor_set_tag(v___x_3068_, 1);
lean_ctor_set(v___x_3068_, 0, v___y_3060_);
v___x_3074_ = v___x_3068_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v___y_3060_);
v___x_3074_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
lean_object* v___x_3075_; lean_object* v___x_3076_; 
v___x_3075_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3075_, 0, v___x_3072_);
lean_ctor_set(v___x_3075_, 1, v___x_3074_);
v___x_3076_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg(v_cls_2934_, v___x_3075_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_);
if (lean_obj_tag(v___x_3076_) == 0)
{
lean_object* v_a_3077_; lean_object* v___x_3078_; 
v_a_3077_ = lean_ctor_get(v___x_3076_, 0);
lean_inc(v_a_3077_);
lean_dec_ref_known(v___x_3076_, 1);
lean_inc(v_a_2087_);
lean_inc_ref(v_a_2086_);
lean_inc(v_a_2085_);
lean_inc_ref(v_a_2084_);
lean_inc(v_a_2083_);
lean_inc_ref(v_a_2082_);
lean_inc(v_a_2081_);
lean_inc_ref(v_a_2080_);
v___x_3078_ = lean_apply_10(v___y_3062_, v_a_3077_, v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_, lean_box(0));
v___y_3053_ = v___y_3061_;
v___y_3054_ = v___y_3063_;
v___y_3055_ = v___x_3078_;
goto v___jp_3052_;
}
else
{
lean_object* v_a_3079_; 
lean_dec_ref(v___y_3062_);
v_a_3079_ = lean_ctor_get(v___x_3076_, 0);
lean_inc(v_a_3079_);
lean_dec_ref_known(v___x_3076_, 1);
v___y_3048_ = v___y_3061_;
v___y_3049_ = v___y_3063_;
v_a_3050_ = v_a_3079_;
goto v___jp_3047_;
}
}
}
}
}
else
{
lean_object* v_a_3083_; 
lean_dec_ref(v___y_3062_);
lean_dec(v___y_3060_);
v_a_3083_ = lean_ctor_get(v___x_3066_, 0);
lean_inc(v_a_3083_);
lean_dec_ref_known(v___x_3066_, 1);
v___y_3048_ = v___y_3061_;
v___y_3049_ = v___y_3063_;
v_a_3050_ = v_a_3083_;
goto v___jp_3047_;
}
}
v___jp_3084_:
{
lean_object* v___x_3088_; double v___x_3089_; double v___x_3090_; double v___x_3091_; double v___x_3092_; double v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; 
v___x_3088_ = lean_io_mono_nanos_now();
v___x_3089_ = lean_float_of_nat(v___y_3085_);
v___x_3090_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0);
v___x_3091_ = lean_float_div(v___x_3089_, v___x_3090_);
v___x_3092_ = lean_float_of_nat(v___x_3088_);
v___x_3093_ = lean_float_div(v___x_3092_, v___x_3090_);
v___x_3094_ = lean_box_float(v___x_3091_);
v___x_3095_ = lean_box_float(v___x_3093_);
v___x_3096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3094_);
lean_ctor_set(v___x_3096_, 1, v___x_3095_);
v___x_3097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3097_, 0, v_a_3087_);
lean_ctor_set(v___x_3097_, 1, v___x_3096_);
v___x_3098_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v_cls_2934_, v_hasTrace_2933_, v___x_3026_, v_options_2931_, v___x_3028_, v___y_3086_, v___f_3025_, v___x_3097_, v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_);
return v___x_3098_;
}
v___jp_3099_:
{
lean_object* v___x_3103_; lean_object* v___x_3104_; 
v___x_3103_ = lean_box(v_a_3102_);
v___x_3104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3104_, 0, v___x_3103_);
v___y_3085_ = v___y_3100_;
v___y_3086_ = v___y_3101_;
v_a_3087_ = v___x_3104_;
goto v___jp_3084_;
}
v___jp_3105_:
{
lean_object* v___x_3109_; 
v___x_3109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3109_, 0, v_a_3108_);
v___y_3085_ = v___y_3106_;
v___y_3086_ = v___y_3107_;
v_a_3087_ = v___x_3109_;
goto v___jp_3084_;
}
v___jp_3110_:
{
if (lean_obj_tag(v___y_3113_) == 0)
{
lean_object* v_a_3114_; uint8_t v___x_3115_; 
v_a_3114_ = lean_ctor_get(v___y_3113_, 0);
lean_inc(v_a_3114_);
lean_dec_ref_known(v___y_3113_, 1);
v___x_3115_ = lean_unbox(v_a_3114_);
lean_dec(v_a_3114_);
v___y_3100_ = v___y_3111_;
v___y_3101_ = v___y_3112_;
v_a_3102_ = v___x_3115_;
goto v___jp_3099_;
}
else
{
lean_object* v_a_3116_; 
v_a_3116_ = lean_ctor_get(v___y_3113_, 0);
lean_inc(v_a_3116_);
lean_dec_ref_known(v___y_3113_, 1);
v___y_3106_ = v___y_3111_;
v___y_3107_ = v___y_3112_;
v_a_3108_ = v_a_3116_;
goto v___jp_3105_;
}
}
v___jp_3117_:
{
lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3123_ = lean_st_ref_set(v_a_2081_, v_snd_3122_);
v___x_3124_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal(v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_);
if (lean_obj_tag(v___x_3124_) == 0)
{
lean_object* v___x_3126_; uint8_t v_isShared_3127_; uint8_t v_isSharedCheck_3139_; 
v_isSharedCheck_3139_ = !lean_is_exclusive(v___x_3124_);
if (v_isSharedCheck_3139_ == 0)
{
lean_object* v_unused_3140_; 
v_unused_3140_ = lean_ctor_get(v___x_3124_, 0);
lean_dec(v_unused_3140_);
v___x_3126_ = v___x_3124_;
v_isShared_3127_ = v_isSharedCheck_3139_;
goto v_resetjp_3125_;
}
else
{
lean_dec(v___x_3124_);
v___x_3126_ = lean_box(0);
v_isShared_3127_ = v_isSharedCheck_3139_;
goto v_resetjp_3125_;
}
v_resetjp_3125_:
{
if (v___x_3028_ == 0)
{
lean_object* v___x_3128_; lean_object* v___x_3129_; 
lean_del_object(v___x_3126_);
lean_dec(v___y_3118_);
v___x_3128_ = lean_box(0);
lean_inc(v_a_2087_);
lean_inc_ref(v_a_2086_);
lean_inc(v_a_2085_);
lean_inc_ref(v_a_2084_);
lean_inc(v_a_2083_);
lean_inc_ref(v_a_2082_);
lean_inc(v_a_2081_);
lean_inc_ref(v_a_2080_);
v___x_3129_ = lean_apply_10(v___y_3119_, v___x_3128_, v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_, lean_box(0));
v___y_3111_ = v___y_3120_;
v___y_3112_ = v___y_3121_;
v___y_3113_ = v___x_3129_;
goto v___jp_3110_;
}
else
{
lean_object* v___x_3130_; lean_object* v___x_3132_; 
v___x_3130_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__6);
if (v_isShared_3127_ == 0)
{
lean_ctor_set_tag(v___x_3126_, 1);
lean_ctor_set(v___x_3126_, 0, v___y_3118_);
v___x_3132_ = v___x_3126_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v___y_3118_);
v___x_3132_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
lean_object* v___x_3133_; lean_object* v___x_3134_; 
v___x_3133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3130_);
lean_ctor_set(v___x_3133_, 1, v___x_3132_);
v___x_3134_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg(v_cls_2934_, v___x_3133_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_);
if (lean_obj_tag(v___x_3134_) == 0)
{
lean_object* v_a_3135_; lean_object* v___x_3136_; 
v_a_3135_ = lean_ctor_get(v___x_3134_, 0);
lean_inc(v_a_3135_);
lean_dec_ref_known(v___x_3134_, 1);
lean_inc(v_a_2087_);
lean_inc_ref(v_a_2086_);
lean_inc(v_a_2085_);
lean_inc_ref(v_a_2084_);
lean_inc(v_a_2083_);
lean_inc_ref(v_a_2082_);
lean_inc(v_a_2081_);
lean_inc_ref(v_a_2080_);
v___x_3136_ = lean_apply_10(v___y_3119_, v_a_3135_, v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_, lean_box(0));
v___y_3111_ = v___y_3120_;
v___y_3112_ = v___y_3121_;
v___y_3113_ = v___x_3136_;
goto v___jp_3110_;
}
else
{
lean_object* v_a_3137_; 
lean_dec_ref(v___y_3119_);
v_a_3137_ = lean_ctor_get(v___x_3134_, 0);
lean_inc(v_a_3137_);
lean_dec_ref_known(v___x_3134_, 1);
v___y_3106_ = v___y_3120_;
v___y_3107_ = v___y_3121_;
v_a_3108_ = v_a_3137_;
goto v___jp_3105_;
}
}
}
}
}
else
{
lean_object* v_a_3141_; 
lean_dec_ref(v___y_3119_);
lean_dec(v___y_3118_);
v_a_3141_ = lean_ctor_get(v___x_3124_, 0);
lean_inc(v_a_3141_);
lean_dec_ref_known(v___x_3124_, 1);
v___y_3106_ = v___y_3120_;
v___y_3107_ = v___y_3121_;
v_a_3108_ = v_a_3141_;
goto v___jp_3105_;
}
}
v___jp_3142_:
{
lean_object* v___x_3143_; lean_object* v_a_3144_; lean_object* v___x_3145_; uint8_t v___x_3146_; 
v___x_3143_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v_a_2087_);
v_a_3144_ = lean_ctor_get(v___x_3143_, 0);
lean_inc(v_a_3144_);
lean_dec_ref(v___x_3143_);
v___x_3145_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3146_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_options_2931_, v___x_3145_);
if (v___x_3146_ == 0)
{
lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v_goal_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; 
v___x_3147_ = lean_io_mono_nanos_now();
v___x_3148_ = lean_st_ref_get(v_a_2081_);
v_goal_3149_ = lean_ctor_get(v___x_3148_, 3);
lean_inc(v_goal_3149_);
lean_dec(v___x_3148_);
v___x_3150_ = lean_box(0);
v___x_3151_ = l_Lean_MVarId_falseOrByContra(v_goal_3149_, v___x_3150_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_);
if (lean_obj_tag(v___x_3151_) == 0)
{
lean_object* v_a_3152_; 
v_a_3152_ = lean_ctor_get(v___x_3151_, 0);
lean_inc(v_a_3152_);
lean_dec_ref_known(v___x_3151_, 1);
if (lean_obj_tag(v_a_3152_) == 1)
{
lean_object* v_val_3153_; lean_object* v___x_3154_; lean_object* v_rewriteCache_3155_; lean_object* v_acNfCache_3156_; lean_object* v_typeAnalysis_3157_; lean_object* v_goal_3158_; lean_object* v_hypotheses_3159_; lean_object* v___x_3161_; uint8_t v_isShared_3162_; uint8_t v_isSharedCheck_3173_; 
v_val_3153_ = lean_ctor_get(v_a_3152_, 0);
lean_inc(v_val_3153_);
lean_dec_ref_known(v_a_3152_, 1);
v___x_3154_ = lean_st_ref_take(v_a_2081_);
v_rewriteCache_3155_ = lean_ctor_get(v___x_3154_, 0);
v_acNfCache_3156_ = lean_ctor_get(v___x_3154_, 1);
v_typeAnalysis_3157_ = lean_ctor_get(v___x_3154_, 2);
v_goal_3158_ = lean_ctor_get(v___x_3154_, 3);
v_hypotheses_3159_ = lean_ctor_get(v___x_3154_, 4);
v_isSharedCheck_3173_ = !lean_is_exclusive(v___x_3154_);
if (v_isSharedCheck_3173_ == 0)
{
v___x_3161_ = v___x_3154_;
v_isShared_3162_ = v_isSharedCheck_3173_;
goto v_resetjp_3160_;
}
else
{
lean_inc(v_hypotheses_3159_);
lean_inc(v_goal_3158_);
lean_inc(v_typeAnalysis_3157_);
lean_inc(v_acNfCache_3156_);
lean_inc(v_rewriteCache_3155_);
lean_dec(v___x_3154_);
v___x_3161_ = lean_box(0);
v_isShared_3162_ = v_isSharedCheck_3173_;
goto v_resetjp_3160_;
}
v_resetjp_3160_:
{
lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___f_3165_; uint8_t v___x_3166_; 
v___x_3163_ = lean_box(v___x_3146_);
v___x_3164_ = lean_box(v_hasTrace_2933_);
v___f_3165_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___boxed), 15, 5);
lean_closure_set(v___f_3165_, 0, v___x_3163_);
lean_closure_set(v___f_3165_, 1, v___x_3164_);
lean_closure_set(v___f_3165_, 2, v_cls_2934_);
lean_closure_set(v___f_3165_, 3, v___x_3026_);
lean_closure_set(v___f_3165_, 4, v___x_3145_);
v___x_3166_ = l_Lean_instBEqMVarId_beq(v_val_3153_, v_goal_3158_);
lean_dec(v_goal_3158_);
if (v___x_3166_ == 0)
{
lean_object* v___x_3168_; 
lean_inc(v_val_3153_);
if (v_isShared_3162_ == 0)
{
lean_ctor_set(v___x_3161_, 3, v_val_3153_);
v___x_3168_ = v___x_3161_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v_rewriteCache_3155_);
lean_ctor_set(v_reuseFailAlloc_3169_, 1, v_acNfCache_3156_);
lean_ctor_set(v_reuseFailAlloc_3169_, 2, v_typeAnalysis_3157_);
lean_ctor_set(v_reuseFailAlloc_3169_, 3, v_val_3153_);
lean_ctor_set(v_reuseFailAlloc_3169_, 4, v_hypotheses_3159_);
v___x_3168_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
lean_ctor_set_uint8(v___x_3168_, sizeof(void*)*5, v_hasTrace_2933_);
v___y_3118_ = v_val_3153_;
v___y_3119_ = v___f_3165_;
v___y_3120_ = v___x_3147_;
v___y_3121_ = v_a_3144_;
v_snd_3122_ = v___x_3168_;
goto v___jp_3117_;
}
}
else
{
lean_object* v___x_3171_; 
lean_inc(v_val_3153_);
if (v_isShared_3162_ == 0)
{
lean_ctor_set(v___x_3161_, 3, v_val_3153_);
v___x_3171_ = v___x_3161_;
goto v_reusejp_3170_;
}
else
{
lean_object* v_reuseFailAlloc_3172_; 
v_reuseFailAlloc_3172_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_3172_, 0, v_rewriteCache_3155_);
lean_ctor_set(v_reuseFailAlloc_3172_, 1, v_acNfCache_3156_);
lean_ctor_set(v_reuseFailAlloc_3172_, 2, v_typeAnalysis_3157_);
lean_ctor_set(v_reuseFailAlloc_3172_, 3, v_val_3153_);
lean_ctor_set(v_reuseFailAlloc_3172_, 4, v_hypotheses_3159_);
v___x_3171_ = v_reuseFailAlloc_3172_;
goto v_reusejp_3170_;
}
v_reusejp_3170_:
{
lean_ctor_set_uint8(v___x_3171_, sizeof(void*)*5, v___x_3146_);
v___y_3118_ = v_val_3153_;
v___y_3119_ = v___f_3165_;
v___y_3120_ = v___x_3147_;
v___y_3121_ = v_a_3144_;
v_snd_3122_ = v___x_3171_;
goto v___jp_3117_;
}
}
}
}
else
{
lean_dec(v_a_3152_);
v___y_3100_ = v___x_3147_;
v___y_3101_ = v_a_3144_;
v_a_3102_ = v_hasTrace_2933_;
goto v___jp_3099_;
}
}
else
{
lean_object* v_a_3174_; 
v_a_3174_ = lean_ctor_get(v___x_3151_, 0);
lean_inc(v_a_3174_);
lean_dec_ref_known(v___x_3151_, 1);
v___y_3106_ = v___x_3147_;
v___y_3107_ = v_a_3144_;
v_a_3108_ = v_a_3174_;
goto v___jp_3105_;
}
}
else
{
lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v_goal_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; 
v___x_3175_ = lean_io_get_num_heartbeats();
v___x_3176_ = lean_st_ref_get(v_a_2081_);
v_goal_3177_ = lean_ctor_get(v___x_3176_, 3);
lean_inc(v_goal_3177_);
lean_dec(v___x_3176_);
v___x_3178_ = lean_box(0);
v___x_3179_ = l_Lean_MVarId_falseOrByContra(v_goal_3177_, v___x_3178_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_);
if (lean_obj_tag(v___x_3179_) == 0)
{
lean_object* v_a_3180_; 
v_a_3180_ = lean_ctor_get(v___x_3179_, 0);
lean_inc(v_a_3180_);
lean_dec_ref_known(v___x_3179_, 1);
if (lean_obj_tag(v_a_3180_) == 1)
{
lean_object* v_val_3181_; lean_object* v___x_3182_; lean_object* v_rewriteCache_3183_; lean_object* v_acNfCache_3184_; lean_object* v_typeAnalysis_3185_; lean_object* v_goal_3186_; lean_object* v_hypotheses_3187_; lean_object* v___x_3189_; uint8_t v_isShared_3190_; uint8_t v_isSharedCheck_3201_; 
v_val_3181_ = lean_ctor_get(v_a_3180_, 0);
lean_inc(v_val_3181_);
lean_dec_ref_known(v_a_3180_, 1);
v___x_3182_ = lean_st_ref_take(v_a_2081_);
v_rewriteCache_3183_ = lean_ctor_get(v___x_3182_, 0);
v_acNfCache_3184_ = lean_ctor_get(v___x_3182_, 1);
v_typeAnalysis_3185_ = lean_ctor_get(v___x_3182_, 2);
v_goal_3186_ = lean_ctor_get(v___x_3182_, 3);
v_hypotheses_3187_ = lean_ctor_get(v___x_3182_, 4);
v_isSharedCheck_3201_ = !lean_is_exclusive(v___x_3182_);
if (v_isSharedCheck_3201_ == 0)
{
v___x_3189_ = v___x_3182_;
v_isShared_3190_ = v_isSharedCheck_3201_;
goto v_resetjp_3188_;
}
else
{
lean_inc(v_hypotheses_3187_);
lean_inc(v_goal_3186_);
lean_inc(v_typeAnalysis_3185_);
lean_inc(v_acNfCache_3184_);
lean_inc(v_rewriteCache_3183_);
lean_dec(v___x_3182_);
v___x_3189_ = lean_box(0);
v_isShared_3190_ = v_isSharedCheck_3201_;
goto v_resetjp_3188_;
}
v_resetjp_3188_:
{
lean_object* v___x_3191_; lean_object* v___f_3192_; uint8_t v___x_3193_; 
v___x_3191_ = lean_box(v___x_3146_);
v___f_3192_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__8___boxed), 14, 4);
lean_closure_set(v___f_3192_, 0, v___x_3191_);
lean_closure_set(v___f_3192_, 1, v_cls_2934_);
lean_closure_set(v___f_3192_, 2, v___x_3026_);
lean_closure_set(v___f_3192_, 3, v___x_3145_);
v___x_3193_ = l_Lean_instBEqMVarId_beq(v_val_3181_, v_goal_3186_);
lean_dec(v_goal_3186_);
if (v___x_3193_ == 0)
{
lean_object* v___x_3195_; 
lean_inc(v_val_3181_);
if (v_isShared_3190_ == 0)
{
lean_ctor_set(v___x_3189_, 3, v_val_3181_);
v___x_3195_ = v___x_3189_;
goto v_reusejp_3194_;
}
else
{
lean_object* v_reuseFailAlloc_3196_; 
v_reuseFailAlloc_3196_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_3196_, 0, v_rewriteCache_3183_);
lean_ctor_set(v_reuseFailAlloc_3196_, 1, v_acNfCache_3184_);
lean_ctor_set(v_reuseFailAlloc_3196_, 2, v_typeAnalysis_3185_);
lean_ctor_set(v_reuseFailAlloc_3196_, 3, v_val_3181_);
lean_ctor_set(v_reuseFailAlloc_3196_, 4, v_hypotheses_3187_);
v___x_3195_ = v_reuseFailAlloc_3196_;
goto v_reusejp_3194_;
}
v_reusejp_3194_:
{
lean_ctor_set_uint8(v___x_3195_, sizeof(void*)*5, v___x_3146_);
v___y_3060_ = v_val_3181_;
v___y_3061_ = v___x_3175_;
v___y_3062_ = v___f_3192_;
v___y_3063_ = v_a_3144_;
v_snd_3064_ = v___x_3195_;
goto v___jp_3059_;
}
}
else
{
uint8_t v___x_3197_; lean_object* v___x_3199_; 
v___x_3197_ = 0;
lean_inc(v_val_3181_);
if (v_isShared_3190_ == 0)
{
lean_ctor_set(v___x_3189_, 3, v_val_3181_);
v___x_3199_ = v___x_3189_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v_rewriteCache_3183_);
lean_ctor_set(v_reuseFailAlloc_3200_, 1, v_acNfCache_3184_);
lean_ctor_set(v_reuseFailAlloc_3200_, 2, v_typeAnalysis_3185_);
lean_ctor_set(v_reuseFailAlloc_3200_, 3, v_val_3181_);
lean_ctor_set(v_reuseFailAlloc_3200_, 4, v_hypotheses_3187_);
v___x_3199_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
lean_ctor_set_uint8(v___x_3199_, sizeof(void*)*5, v___x_3197_);
v___y_3060_ = v_val_3181_;
v___y_3061_ = v___x_3175_;
v___y_3062_ = v___f_3192_;
v___y_3063_ = v_a_3144_;
v_snd_3064_ = v___x_3199_;
goto v___jp_3059_;
}
}
}
}
else
{
lean_dec(v_a_3180_);
v___y_3042_ = v___x_3175_;
v___y_3043_ = v_a_3144_;
v_a_3044_ = v___x_3146_;
goto v___jp_3041_;
}
}
else
{
lean_object* v_a_3202_; 
v_a_3202_ = lean_ctor_get(v___x_3179_, 0);
lean_inc(v_a_3202_);
lean_dec_ref_known(v___x_3179_, 1);
v___y_3048_ = v___x_3175_;
v___y_3049_ = v_a_3144_;
v_a_3050_ = v_a_3202_;
goto v___jp_3047_;
}
}
}
}
v___jp_2089_:
{
if (lean_obj_tag(v___y_2092_) == 0)
{
lean_object* v_a_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2106_; 
v_a_2093_ = lean_ctor_get(v___y_2092_, 0);
v_isSharedCheck_2106_ = !lean_is_exclusive(v___y_2092_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2095_ = v___y_2092_;
v_isShared_2096_ = v_isSharedCheck_2106_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_a_2093_);
lean_dec(v___y_2092_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2106_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
uint8_t v___x_2097_; 
v___x_2097_ = lean_unbox(v_a_2093_);
lean_dec(v_a_2093_);
if (v___x_2097_ == 0)
{
lean_object* v___x_2098_; lean_object* v___x_2100_; 
v___x_2098_ = lean_box(v___y_2090_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 0, v___x_2098_);
v___x_2100_ = v___x_2095_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v___x_2098_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
else
{
lean_object* v___x_2102_; lean_object* v___x_2104_; 
v___x_2102_ = lean_box(v___y_2091_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 0, v___x_2102_);
v___x_2104_ = v___x_2095_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v___x_2102_);
v___x_2104_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
return v___x_2104_;
}
}
}
}
else
{
return v___y_2092_;
}
}
v___jp_2107_:
{
lean_object* v___x_2127_; double v___x_2128_; double v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___x_2127_ = lean_io_get_num_heartbeats();
v___x_2128_ = lean_float_of_nat(v___y_2108_);
v___x_2129_ = lean_float_of_nat(v___x_2127_);
v___x_2130_ = lean_box_float(v___x_2128_);
v___x_2131_ = lean_box_float(v___x_2129_);
v___x_2132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2130_);
lean_ctor_set(v___x_2132_, 1, v___x_2131_);
v___x_2133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2133_, 0, v_a_2126_);
lean_ctor_set(v___x_2133_, 1, v___x_2132_);
lean_inc_ref(v___y_2125_);
lean_inc_ref(v___y_2114_);
lean_inc(v___y_2117_);
v___x_2134_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v___y_2117_, v___y_2110_, v___y_2114_, v___y_2109_, v___y_2122_, v___y_2115_, v___y_2125_, v___x_2133_, v___y_2112_, v___y_2111_, v___y_2123_, v___y_2124_, v___y_2121_, v___y_2113_, v___y_2120_, v___y_2118_);
v___y_2090_ = v___y_2116_;
v___y_2091_ = v___y_2119_;
v___y_2092_ = v___x_2134_;
goto v___jp_2089_;
}
v___jp_2135_:
{
lean_object* v___x_2155_; double v___x_2156_; double v___x_2157_; double v___x_2158_; double v___x_2159_; double v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; 
v___x_2155_ = lean_io_mono_nanos_now();
v___x_2156_ = lean_float_of_nat(v___y_2151_);
v___x_2157_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0);
v___x_2158_ = lean_float_div(v___x_2156_, v___x_2157_);
v___x_2159_ = lean_float_of_nat(v___x_2155_);
v___x_2160_ = lean_float_div(v___x_2159_, v___x_2157_);
v___x_2161_ = lean_box_float(v___x_2158_);
v___x_2162_ = lean_box_float(v___x_2160_);
v___x_2163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2163_, 0, v___x_2161_);
lean_ctor_set(v___x_2163_, 1, v___x_2162_);
v___x_2164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2164_, 0, v_a_2154_);
lean_ctor_set(v___x_2164_, 1, v___x_2163_);
lean_inc_ref(v___y_2153_);
lean_inc_ref(v___y_2141_);
lean_inc(v___y_2144_);
v___x_2165_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v___y_2144_, v___y_2137_, v___y_2141_, v___y_2136_, v___y_2149_, v___y_2142_, v___y_2153_, v___x_2164_, v___y_2139_, v___y_2138_, v___y_2150_, v___y_2152_, v___y_2148_, v___y_2140_, v___y_2147_, v___y_2145_);
v___y_2090_ = v___y_2143_;
v___y_2091_ = v___y_2146_;
v___y_2092_ = v___x_2165_;
goto v___jp_2089_;
}
v___jp_2166_:
{
lean_object* v___x_2184_; lean_object* v_a_2185_; lean_object* v___x_2186_; uint8_t v___x_2187_; 
v___x_2184_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v___y_2176_);
v_a_2185_ = lean_ctor_get(v___x_2184_, 0);
lean_inc(v_a_2185_);
lean_dec_ref(v___x_2184_);
v___x_2186_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2187_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v___y_2167_, v___x_2186_);
if (v___x_2187_ == 0)
{
lean_object* v___x_2188_; lean_object* v___x_2189_; 
v___x_2188_ = lean_io_mono_nanos_now();
lean_inc(v___y_2176_);
lean_inc_ref(v___y_2179_);
lean_inc(v___y_2172_);
lean_inc_ref(v___y_2178_);
lean_inc(v___y_2182_);
lean_inc_ref(v___y_2181_);
lean_inc(v___y_2170_);
lean_inc_ref(v___y_2171_);
v___x_2189_ = lean_apply_9(v___y_2169_, v___y_2171_, v___y_2170_, v___y_2181_, v___y_2182_, v___y_2178_, v___y_2172_, v___y_2179_, v___y_2176_, lean_box(0));
if (lean_obj_tag(v___x_2189_) == 0)
{
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2197_; 
v_a_2190_ = lean_ctor_get(v___x_2189_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2189_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2192_ = v___x_2189_;
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2189_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2195_; 
if (v_isShared_2193_ == 0)
{
lean_ctor_set_tag(v___x_2192_, 1);
v___x_2195_ = v___x_2192_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_a_2190_);
v___x_2195_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
v___y_2136_ = v___y_2167_;
v___y_2137_ = v___y_2168_;
v___y_2138_ = v___y_2170_;
v___y_2139_ = v___y_2171_;
v___y_2140_ = v___y_2172_;
v___y_2141_ = v___y_2173_;
v___y_2142_ = v_a_2185_;
v___y_2143_ = v___y_2175_;
v___y_2144_ = v___y_2174_;
v___y_2145_ = v___y_2176_;
v___y_2146_ = v___y_2177_;
v___y_2147_ = v___y_2179_;
v___y_2148_ = v___y_2178_;
v___y_2149_ = v___y_2180_;
v___y_2150_ = v___y_2181_;
v___y_2151_ = v___x_2188_;
v___y_2152_ = v___y_2182_;
v___y_2153_ = v___y_2183_;
v_a_2154_ = v___x_2195_;
goto v___jp_2135_;
}
}
}
else
{
lean_object* v_a_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2205_; 
v_a_2198_ = lean_ctor_get(v___x_2189_, 0);
v_isSharedCheck_2205_ = !lean_is_exclusive(v___x_2189_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2200_ = v___x_2189_;
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_a_2198_);
lean_dec(v___x_2189_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v___x_2203_; 
if (v_isShared_2201_ == 0)
{
lean_ctor_set_tag(v___x_2200_, 0);
v___x_2203_ = v___x_2200_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_a_2198_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
v___y_2136_ = v___y_2167_;
v___y_2137_ = v___y_2168_;
v___y_2138_ = v___y_2170_;
v___y_2139_ = v___y_2171_;
v___y_2140_ = v___y_2172_;
v___y_2141_ = v___y_2173_;
v___y_2142_ = v_a_2185_;
v___y_2143_ = v___y_2175_;
v___y_2144_ = v___y_2174_;
v___y_2145_ = v___y_2176_;
v___y_2146_ = v___y_2177_;
v___y_2147_ = v___y_2179_;
v___y_2148_ = v___y_2178_;
v___y_2149_ = v___y_2180_;
v___y_2150_ = v___y_2181_;
v___y_2151_ = v___x_2188_;
v___y_2152_ = v___y_2182_;
v___y_2153_ = v___y_2183_;
v_a_2154_ = v___x_2203_;
goto v___jp_2135_;
}
}
}
}
else
{
lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2206_ = lean_io_get_num_heartbeats();
lean_inc(v___y_2176_);
lean_inc_ref(v___y_2179_);
lean_inc(v___y_2172_);
lean_inc_ref(v___y_2178_);
lean_inc(v___y_2182_);
lean_inc_ref(v___y_2181_);
lean_inc(v___y_2170_);
lean_inc_ref(v___y_2171_);
v___x_2207_ = lean_apply_9(v___y_2169_, v___y_2171_, v___y_2170_, v___y_2181_, v___y_2182_, v___y_2178_, v___y_2172_, v___y_2179_, v___y_2176_, lean_box(0));
if (lean_obj_tag(v___x_2207_) == 0)
{
lean_object* v_a_2208_; lean_object* v___x_2210_; uint8_t v_isShared_2211_; uint8_t v_isSharedCheck_2215_; 
v_a_2208_ = lean_ctor_get(v___x_2207_, 0);
v_isSharedCheck_2215_ = !lean_is_exclusive(v___x_2207_);
if (v_isSharedCheck_2215_ == 0)
{
v___x_2210_ = v___x_2207_;
v_isShared_2211_ = v_isSharedCheck_2215_;
goto v_resetjp_2209_;
}
else
{
lean_inc(v_a_2208_);
lean_dec(v___x_2207_);
v___x_2210_ = lean_box(0);
v_isShared_2211_ = v_isSharedCheck_2215_;
goto v_resetjp_2209_;
}
v_resetjp_2209_:
{
lean_object* v___x_2213_; 
if (v_isShared_2211_ == 0)
{
lean_ctor_set_tag(v___x_2210_, 1);
v___x_2213_ = v___x_2210_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v_a_2208_);
v___x_2213_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
v___y_2108_ = v___x_2206_;
v___y_2109_ = v___y_2167_;
v___y_2110_ = v___y_2168_;
v___y_2111_ = v___y_2170_;
v___y_2112_ = v___y_2171_;
v___y_2113_ = v___y_2172_;
v___y_2114_ = v___y_2173_;
v___y_2115_ = v_a_2185_;
v___y_2116_ = v___y_2175_;
v___y_2117_ = v___y_2174_;
v___y_2118_ = v___y_2176_;
v___y_2119_ = v___y_2177_;
v___y_2120_ = v___y_2179_;
v___y_2121_ = v___y_2178_;
v___y_2122_ = v___y_2180_;
v___y_2123_ = v___y_2181_;
v___y_2124_ = v___y_2182_;
v___y_2125_ = v___y_2183_;
v_a_2126_ = v___x_2213_;
goto v___jp_2107_;
}
}
}
else
{
lean_object* v_a_2216_; lean_object* v___x_2218_; uint8_t v_isShared_2219_; uint8_t v_isSharedCheck_2223_; 
v_a_2216_ = lean_ctor_get(v___x_2207_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2207_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2218_ = v___x_2207_;
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
else
{
lean_inc(v_a_2216_);
lean_dec(v___x_2207_);
v___x_2218_ = lean_box(0);
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
v_resetjp_2217_:
{
lean_object* v___x_2221_; 
if (v_isShared_2219_ == 0)
{
lean_ctor_set_tag(v___x_2218_, 0);
v___x_2221_ = v___x_2218_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v_a_2216_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
v___y_2108_ = v___x_2206_;
v___y_2109_ = v___y_2167_;
v___y_2110_ = v___y_2168_;
v___y_2111_ = v___y_2170_;
v___y_2112_ = v___y_2171_;
v___y_2113_ = v___y_2172_;
v___y_2114_ = v___y_2173_;
v___y_2115_ = v_a_2185_;
v___y_2116_ = v___y_2175_;
v___y_2117_ = v___y_2174_;
v___y_2118_ = v___y_2176_;
v___y_2119_ = v___y_2177_;
v___y_2120_ = v___y_2179_;
v___y_2121_ = v___y_2178_;
v___y_2122_ = v___y_2180_;
v___y_2123_ = v___y_2181_;
v___y_2124_ = v___y_2182_;
v___y_2125_ = v___y_2183_;
v_a_2126_ = v___x_2221_;
goto v___jp_2107_;
}
}
}
}
}
v___jp_2224_:
{
lean_object* v___x_2234_; lean_object* v_a_2235_; lean_object* v___x_2236_; 
v___x_2234_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_0__Lean_Meta_Tactic_BVDecide_Normalize_passPipeline___redArg(v___y_2226_);
v_a_2235_ = lean_ctor_get(v___x_2234_, 0);
lean_inc(v_a_2235_);
lean_dec_ref(v___x_2234_);
v___x_2236_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(v_a_2235_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_);
lean_dec(v_a_2235_);
if (lean_obj_tag(v___x_2236_) == 0)
{
lean_object* v_a_2237_; uint8_t v___x_2238_; uint8_t v___x_2239_; 
v_a_2237_ = lean_ctor_get(v___x_2236_, 0);
lean_inc(v_a_2237_);
v___x_2238_ = 1;
v___x_2239_ = lean_unbox(v_a_2237_);
if (v___x_2239_ == 0)
{
uint8_t v_shortCircuit_2240_; 
v_shortCircuit_2240_ = lean_ctor_get_uint8(v___y_2225_, sizeof(void*)*2 + 9);
if (v_shortCircuit_2240_ == 0)
{
lean_dec(v_a_2237_);
return v___x_2236_;
}
else
{
lean_object* v___x_2241_; lean_object* v_options_2242_; uint8_t v_hasTrace_2243_; 
lean_dec_ref_known(v___x_2236_, 1);
v___x_2241_ = l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass;
v_options_2242_ = lean_ctor_get(v___y_2232_, 2);
v_hasTrace_2243_ = lean_ctor_get_uint8(v_options_2242_, sizeof(void*)*1);
if (v_hasTrace_2243_ == 0)
{
lean_object* v_run_x27_2244_; lean_object* v___x_2245_; uint8_t v___x_2246_; 
v_run_x27_2244_ = lean_ctor_get(v___x_2241_, 1);
lean_inc_ref(v_run_x27_2244_);
lean_inc(v___y_2233_);
lean_inc_ref(v___y_2232_);
lean_inc(v___y_2231_);
lean_inc_ref(v___y_2230_);
lean_inc(v___y_2229_);
lean_inc_ref(v___y_2228_);
lean_inc(v___y_2227_);
lean_inc_ref(v___y_2226_);
v___x_2245_ = lean_apply_9(v_run_x27_2244_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, lean_box(0));
v___x_2246_ = lean_unbox(v_a_2237_);
lean_dec(v_a_2237_);
v___y_2090_ = v___x_2246_;
v___y_2091_ = v___x_2238_;
v___y_2092_ = v___x_2245_;
goto v___jp_2089_;
}
else
{
lean_object* v_run_x27_2247_; lean_object* v_inheritedTraceOptions_2248_; lean_object* v___f_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; uint8_t v___x_2253_; 
v_run_x27_2247_ = lean_ctor_get(v___x_2241_, 1);
v_inheritedTraceOptions_2248_ = lean_ctor_get(v___y_2232_, 13);
v___f_2249_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__1);
v___x_2250_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__3));
v___x_2251_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg___closed__0));
v___x_2252_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4);
v___x_2253_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2248_, v_options_2242_, v___x_2252_);
if (v___x_2253_ == 0)
{
lean_object* v___x_2254_; uint8_t v___x_2255_; 
v___x_2254_ = l_Lean_trace_profiler;
v___x_2255_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_options_2242_, v___x_2254_);
if (v___x_2255_ == 0)
{
lean_object* v___x_2256_; uint8_t v___x_2257_; 
lean_inc_ref(v_run_x27_2247_);
lean_inc(v___y_2233_);
lean_inc_ref(v___y_2232_);
lean_inc(v___y_2231_);
lean_inc_ref(v___y_2230_);
lean_inc(v___y_2229_);
lean_inc_ref(v___y_2228_);
lean_inc(v___y_2227_);
lean_inc_ref(v___y_2226_);
v___x_2256_ = lean_apply_9(v_run_x27_2247_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, lean_box(0));
v___x_2257_ = lean_unbox(v_a_2237_);
lean_dec(v_a_2237_);
v___y_2090_ = v___x_2257_;
v___y_2091_ = v___x_2238_;
v___y_2092_ = v___x_2256_;
goto v___jp_2089_;
}
else
{
uint8_t v___x_2258_; 
v___x_2258_ = lean_unbox(v_a_2237_);
lean_dec(v_a_2237_);
lean_inc_ref(v_run_x27_2247_);
v___y_2167_ = v_options_2242_;
v___y_2168_ = v_hasTrace_2243_;
v___y_2169_ = v_run_x27_2247_;
v___y_2170_ = v___y_2227_;
v___y_2171_ = v___y_2226_;
v___y_2172_ = v___y_2231_;
v___y_2173_ = v___x_2251_;
v___y_2174_ = v___x_2250_;
v___y_2175_ = v___x_2258_;
v___y_2176_ = v___y_2233_;
v___y_2177_ = v___x_2238_;
v___y_2178_ = v___y_2230_;
v___y_2179_ = v___y_2232_;
v___y_2180_ = v___x_2253_;
v___y_2181_ = v___y_2228_;
v___y_2182_ = v___y_2229_;
v___y_2183_ = v___f_2249_;
goto v___jp_2166_;
}
}
else
{
uint8_t v___x_2259_; 
v___x_2259_ = lean_unbox(v_a_2237_);
lean_dec(v_a_2237_);
lean_inc_ref(v_run_x27_2247_);
v___y_2167_ = v_options_2242_;
v___y_2168_ = v_hasTrace_2243_;
v___y_2169_ = v_run_x27_2247_;
v___y_2170_ = v___y_2227_;
v___y_2171_ = v___y_2226_;
v___y_2172_ = v___y_2231_;
v___y_2173_ = v___x_2251_;
v___y_2174_ = v___x_2250_;
v___y_2175_ = v___x_2259_;
v___y_2176_ = v___y_2233_;
v___y_2177_ = v___x_2238_;
v___y_2178_ = v___y_2230_;
v___y_2179_ = v___y_2232_;
v___y_2180_ = v___x_2253_;
v___y_2181_ = v___y_2228_;
v___y_2182_ = v___y_2229_;
v___y_2183_ = v___f_2249_;
goto v___jp_2166_;
}
}
}
}
else
{
lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2267_; 
lean_dec(v_a_2237_);
v_isSharedCheck_2267_ = !lean_is_exclusive(v___x_2236_);
if (v_isSharedCheck_2267_ == 0)
{
lean_object* v_unused_2268_; 
v_unused_2268_ = lean_ctor_get(v___x_2236_, 0);
lean_dec(v_unused_2268_);
v___x_2261_ = v___x_2236_;
v_isShared_2262_ = v_isSharedCheck_2267_;
goto v_resetjp_2260_;
}
else
{
lean_dec(v___x_2236_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2267_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2263_; lean_object* v___x_2265_; 
v___x_2263_ = lean_box(v___x_2238_);
if (v_isShared_2262_ == 0)
{
lean_ctor_set(v___x_2261_, 0, v___x_2263_);
v___x_2265_ = v___x_2261_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v___x_2263_);
v___x_2265_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
return v___x_2265_;
}
}
}
}
else
{
return v___x_2236_;
}
}
v___jp_2269_:
{
if (lean_obj_tag(v___y_2280_) == 0)
{
lean_object* v_a_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2290_; 
v_a_2281_ = lean_ctor_get(v___y_2280_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v___y_2280_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2283_ = v___y_2280_;
v_isShared_2284_ = v_isSharedCheck_2290_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_a_2281_);
lean_dec(v___y_2280_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2290_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
uint8_t v___x_2285_; 
v___x_2285_ = lean_unbox(v_a_2281_);
lean_dec(v_a_2281_);
if (v___x_2285_ == 0)
{
lean_del_object(v___x_2283_);
v___y_2225_ = v___y_2276_;
v___y_2226_ = v___y_2277_;
v___y_2227_ = v___y_2271_;
v___y_2228_ = v___y_2279_;
v___y_2229_ = v___y_2275_;
v___y_2230_ = v___y_2273_;
v___y_2231_ = v___y_2270_;
v___y_2232_ = v___y_2272_;
v___y_2233_ = v___y_2274_;
goto v___jp_2224_;
}
else
{
lean_object* v___x_2286_; lean_object* v___x_2288_; 
v___x_2286_ = lean_box(v___y_2278_);
if (v_isShared_2284_ == 0)
{
lean_ctor_set(v___x_2283_, 0, v___x_2286_);
v___x_2288_ = v___x_2283_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v___x_2286_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
return v___x_2288_;
}
}
}
}
else
{
return v___y_2280_;
}
}
v___jp_2291_:
{
lean_object* v___x_2311_; double v___x_2312_; double v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2311_ = lean_io_get_num_heartbeats();
v___x_2312_ = lean_float_of_nat(v___y_2305_);
v___x_2313_ = lean_float_of_nat(v___x_2311_);
v___x_2314_ = lean_box_float(v___x_2312_);
v___x_2315_ = lean_box_float(v___x_2313_);
v___x_2316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2314_);
lean_ctor_set(v___x_2316_, 1, v___x_2315_);
v___x_2317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2317_, 0, v_a_2310_);
lean_ctor_set(v___x_2317_, 1, v___x_2316_);
lean_inc_ref(v___y_2297_);
lean_inc_ref(v___y_2292_);
lean_inc(v___y_2295_);
v___x_2318_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v___y_2295_, v___y_2301_, v___y_2292_, v___y_2306_, v___y_2302_, v___y_2294_, v___y_2297_, v___x_2317_, v___y_2308_, v___y_2300_, v___y_2309_, v___y_2307_, v___y_2304_, v___y_2299_, v___y_2303_, v___y_2293_);
v___y_2270_ = v___y_2299_;
v___y_2271_ = v___y_2300_;
v___y_2272_ = v___y_2303_;
v___y_2273_ = v___y_2304_;
v___y_2274_ = v___y_2293_;
v___y_2275_ = v___y_2307_;
v___y_2276_ = v___y_2296_;
v___y_2277_ = v___y_2308_;
v___y_2278_ = v___y_2298_;
v___y_2279_ = v___y_2309_;
v___y_2280_ = v___x_2318_;
goto v___jp_2269_;
}
v___jp_2319_:
{
lean_object* v___x_2339_; double v___x_2340_; double v___x_2341_; double v___x_2342_; double v___x_2343_; double v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v___x_2339_ = lean_io_mono_nanos_now();
v___x_2340_ = lean_float_of_nat(v___y_2320_);
v___x_2341_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0);
v___x_2342_ = lean_float_div(v___x_2340_, v___x_2341_);
v___x_2343_ = lean_float_of_nat(v___x_2339_);
v___x_2344_ = lean_float_div(v___x_2343_, v___x_2341_);
v___x_2345_ = lean_box_float(v___x_2342_);
v___x_2346_ = lean_box_float(v___x_2344_);
v___x_2347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2347_, 0, v___x_2345_);
lean_ctor_set(v___x_2347_, 1, v___x_2346_);
v___x_2348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2348_, 0, v_a_2338_);
lean_ctor_set(v___x_2348_, 1, v___x_2347_);
lean_inc_ref(v___y_2326_);
lean_inc_ref(v___y_2321_);
lean_inc(v___y_2324_);
v___x_2349_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v___y_2324_, v___y_2330_, v___y_2321_, v___y_2334_, v___y_2331_, v___y_2323_, v___y_2326_, v___x_2348_, v___y_2336_, v___y_2329_, v___y_2337_, v___y_2335_, v___y_2333_, v___y_2328_, v___y_2332_, v___y_2322_);
v___y_2270_ = v___y_2328_;
v___y_2271_ = v___y_2329_;
v___y_2272_ = v___y_2332_;
v___y_2273_ = v___y_2333_;
v___y_2274_ = v___y_2322_;
v___y_2275_ = v___y_2335_;
v___y_2276_ = v___y_2325_;
v___y_2277_ = v___y_2336_;
v___y_2278_ = v___y_2327_;
v___y_2279_ = v___y_2337_;
v___y_2280_ = v___x_2349_;
goto v___jp_2269_;
}
v___jp_2350_:
{
lean_object* v___x_2368_; lean_object* v_a_2369_; lean_object* v___x_2370_; uint8_t v___x_2371_; 
v___x_2368_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v___y_2352_);
v_a_2369_ = lean_ctor_get(v___x_2368_, 0);
lean_inc(v_a_2369_);
lean_dec_ref(v___x_2368_);
v___x_2370_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2371_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v___y_2364_, v___x_2370_);
if (v___x_2371_ == 0)
{
lean_object* v___x_2372_; lean_object* v___x_2373_; 
v___x_2372_ = lean_io_mono_nanos_now();
lean_inc(v___y_2352_);
lean_inc_ref(v___y_2361_);
lean_inc(v___y_2358_);
lean_inc_ref(v___y_2362_);
lean_inc(v___y_2363_);
lean_inc_ref(v___y_2367_);
lean_inc(v___y_2357_);
lean_inc_ref(v___y_2366_);
v___x_2373_ = lean_apply_9(v___y_2365_, v___y_2366_, v___y_2357_, v___y_2367_, v___y_2363_, v___y_2362_, v___y_2358_, v___y_2361_, v___y_2352_, lean_box(0));
if (lean_obj_tag(v___x_2373_) == 0)
{
lean_object* v_a_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2381_; 
v_a_2374_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2381_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2381_ == 0)
{
v___x_2376_ = v___x_2373_;
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_a_2374_);
lean_dec(v___x_2373_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v___x_2379_; 
if (v_isShared_2377_ == 0)
{
lean_ctor_set_tag(v___x_2376_, 1);
v___x_2379_ = v___x_2376_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v_a_2374_);
v___x_2379_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
v___y_2320_ = v___x_2372_;
v___y_2321_ = v___y_2351_;
v___y_2322_ = v___y_2352_;
v___y_2323_ = v_a_2369_;
v___y_2324_ = v___y_2353_;
v___y_2325_ = v___y_2355_;
v___y_2326_ = v___y_2354_;
v___y_2327_ = v___y_2356_;
v___y_2328_ = v___y_2358_;
v___y_2329_ = v___y_2357_;
v___y_2330_ = v___y_2360_;
v___y_2331_ = v___y_2359_;
v___y_2332_ = v___y_2361_;
v___y_2333_ = v___y_2362_;
v___y_2334_ = v___y_2364_;
v___y_2335_ = v___y_2363_;
v___y_2336_ = v___y_2366_;
v___y_2337_ = v___y_2367_;
v_a_2338_ = v___x_2379_;
goto v___jp_2319_;
}
}
}
else
{
lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2389_; 
v_a_2382_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2389_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2389_ == 0)
{
v___x_2384_ = v___x_2373_;
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_dec(v___x_2373_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2387_; 
if (v_isShared_2385_ == 0)
{
lean_ctor_set_tag(v___x_2384_, 0);
v___x_2387_ = v___x_2384_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_a_2382_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
v___y_2320_ = v___x_2372_;
v___y_2321_ = v___y_2351_;
v___y_2322_ = v___y_2352_;
v___y_2323_ = v_a_2369_;
v___y_2324_ = v___y_2353_;
v___y_2325_ = v___y_2355_;
v___y_2326_ = v___y_2354_;
v___y_2327_ = v___y_2356_;
v___y_2328_ = v___y_2358_;
v___y_2329_ = v___y_2357_;
v___y_2330_ = v___y_2360_;
v___y_2331_ = v___y_2359_;
v___y_2332_ = v___y_2361_;
v___y_2333_ = v___y_2362_;
v___y_2334_ = v___y_2364_;
v___y_2335_ = v___y_2363_;
v___y_2336_ = v___y_2366_;
v___y_2337_ = v___y_2367_;
v_a_2338_ = v___x_2387_;
goto v___jp_2319_;
}
}
}
}
else
{
lean_object* v___x_2390_; lean_object* v___x_2391_; 
v___x_2390_ = lean_io_get_num_heartbeats();
lean_inc(v___y_2352_);
lean_inc_ref(v___y_2361_);
lean_inc(v___y_2358_);
lean_inc_ref(v___y_2362_);
lean_inc(v___y_2363_);
lean_inc_ref(v___y_2367_);
lean_inc(v___y_2357_);
lean_inc_ref(v___y_2366_);
v___x_2391_ = lean_apply_9(v___y_2365_, v___y_2366_, v___y_2357_, v___y_2367_, v___y_2363_, v___y_2362_, v___y_2358_, v___y_2361_, v___y_2352_, lean_box(0));
if (lean_obj_tag(v___x_2391_) == 0)
{
lean_object* v_a_2392_; lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2399_; 
v_a_2392_ = lean_ctor_get(v___x_2391_, 0);
v_isSharedCheck_2399_ = !lean_is_exclusive(v___x_2391_);
if (v_isSharedCheck_2399_ == 0)
{
v___x_2394_ = v___x_2391_;
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
else
{
lean_inc(v_a_2392_);
lean_dec(v___x_2391_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
lean_object* v___x_2397_; 
if (v_isShared_2395_ == 0)
{
lean_ctor_set_tag(v___x_2394_, 1);
v___x_2397_ = v___x_2394_;
goto v_reusejp_2396_;
}
else
{
lean_object* v_reuseFailAlloc_2398_; 
v_reuseFailAlloc_2398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2398_, 0, v_a_2392_);
v___x_2397_ = v_reuseFailAlloc_2398_;
goto v_reusejp_2396_;
}
v_reusejp_2396_:
{
v___y_2292_ = v___y_2351_;
v___y_2293_ = v___y_2352_;
v___y_2294_ = v_a_2369_;
v___y_2295_ = v___y_2353_;
v___y_2296_ = v___y_2355_;
v___y_2297_ = v___y_2354_;
v___y_2298_ = v___y_2356_;
v___y_2299_ = v___y_2358_;
v___y_2300_ = v___y_2357_;
v___y_2301_ = v___y_2360_;
v___y_2302_ = v___y_2359_;
v___y_2303_ = v___y_2361_;
v___y_2304_ = v___y_2362_;
v___y_2305_ = v___x_2390_;
v___y_2306_ = v___y_2364_;
v___y_2307_ = v___y_2363_;
v___y_2308_ = v___y_2366_;
v___y_2309_ = v___y_2367_;
v_a_2310_ = v___x_2397_;
goto v___jp_2291_;
}
}
}
else
{
lean_object* v_a_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2407_; 
v_a_2400_ = lean_ctor_get(v___x_2391_, 0);
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2391_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2402_ = v___x_2391_;
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_a_2400_);
lean_dec(v___x_2391_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2405_; 
if (v_isShared_2403_ == 0)
{
lean_ctor_set_tag(v___x_2402_, 0);
v___x_2405_ = v___x_2402_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v_a_2400_);
v___x_2405_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
v___y_2292_ = v___y_2351_;
v___y_2293_ = v___y_2352_;
v___y_2294_ = v_a_2369_;
v___y_2295_ = v___y_2353_;
v___y_2296_ = v___y_2355_;
v___y_2297_ = v___y_2354_;
v___y_2298_ = v___y_2356_;
v___y_2299_ = v___y_2358_;
v___y_2300_ = v___y_2357_;
v___y_2301_ = v___y_2360_;
v___y_2302_ = v___y_2359_;
v___y_2303_ = v___y_2361_;
v___y_2304_ = v___y_2362_;
v___y_2305_ = v___x_2390_;
v___y_2306_ = v___y_2364_;
v___y_2307_ = v___y_2363_;
v___y_2308_ = v___y_2366_;
v___y_2309_ = v___y_2367_;
v_a_2310_ = v___x_2405_;
goto v___jp_2291_;
}
}
}
}
}
v___jp_2408_:
{
if (v_fixedInt_2410_ == 0)
{
v___y_2225_ = v___y_2409_;
v___y_2226_ = v___y_2411_;
v___y_2227_ = v___y_2412_;
v___y_2228_ = v___y_2413_;
v___y_2229_ = v___y_2414_;
v___y_2230_ = v___y_2415_;
v___y_2231_ = v___y_2416_;
v___y_2232_ = v___y_2417_;
v___y_2233_ = v___y_2418_;
goto v___jp_2224_;
}
else
{
lean_object* v___x_2419_; lean_object* v_options_2420_; uint8_t v_hasTrace_2421_; 
v___x_2419_ = l_Lean_Meta_Tactic_BVDecide_Normalize_intToBitVecPass;
v_options_2420_ = lean_ctor_get(v___y_2417_, 2);
v_hasTrace_2421_ = lean_ctor_get_uint8(v_options_2420_, sizeof(void*)*1);
if (v_hasTrace_2421_ == 0)
{
lean_object* v_run_x27_2422_; lean_object* v___x_2423_; 
v_run_x27_2422_ = lean_ctor_get(v___x_2419_, 1);
lean_inc_ref(v_run_x27_2422_);
lean_inc(v___y_2418_);
lean_inc_ref(v___y_2417_);
lean_inc(v___y_2416_);
lean_inc_ref(v___y_2415_);
lean_inc(v___y_2414_);
lean_inc_ref(v___y_2413_);
lean_inc(v___y_2412_);
lean_inc_ref(v___y_2411_);
v___x_2423_ = lean_apply_9(v_run_x27_2422_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_, lean_box(0));
v___y_2270_ = v___y_2416_;
v___y_2271_ = v___y_2412_;
v___y_2272_ = v___y_2417_;
v___y_2273_ = v___y_2415_;
v___y_2274_ = v___y_2418_;
v___y_2275_ = v___y_2414_;
v___y_2276_ = v___y_2409_;
v___y_2277_ = v___y_2411_;
v___y_2278_ = v_fixedInt_2410_;
v___y_2279_ = v___y_2413_;
v___y_2280_ = v___x_2423_;
goto v___jp_2269_;
}
else
{
lean_object* v_run_x27_2424_; lean_object* v_inheritedTraceOptions_2425_; lean_object* v___f_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; uint8_t v___x_2430_; 
v_run_x27_2424_ = lean_ctor_get(v___x_2419_, 1);
v_inheritedTraceOptions_2425_ = lean_ctor_get(v___y_2417_, 13);
v___f_2426_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__4);
v___x_2427_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__3));
v___x_2428_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg___closed__0));
v___x_2429_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4);
v___x_2430_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2425_, v_options_2420_, v___x_2429_);
if (v___x_2430_ == 0)
{
lean_object* v___x_2431_; uint8_t v___x_2432_; 
v___x_2431_ = l_Lean_trace_profiler;
v___x_2432_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_options_2420_, v___x_2431_);
if (v___x_2432_ == 0)
{
lean_object* v___x_2433_; 
lean_inc_ref(v_run_x27_2424_);
lean_inc(v___y_2418_);
lean_inc_ref(v___y_2417_);
lean_inc(v___y_2416_);
lean_inc_ref(v___y_2415_);
lean_inc(v___y_2414_);
lean_inc_ref(v___y_2413_);
lean_inc(v___y_2412_);
lean_inc_ref(v___y_2411_);
v___x_2433_ = lean_apply_9(v_run_x27_2424_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_, lean_box(0));
v___y_2270_ = v___y_2416_;
v___y_2271_ = v___y_2412_;
v___y_2272_ = v___y_2417_;
v___y_2273_ = v___y_2415_;
v___y_2274_ = v___y_2418_;
v___y_2275_ = v___y_2414_;
v___y_2276_ = v___y_2409_;
v___y_2277_ = v___y_2411_;
v___y_2278_ = v_fixedInt_2410_;
v___y_2279_ = v___y_2413_;
v___y_2280_ = v___x_2433_;
goto v___jp_2269_;
}
else
{
lean_inc_ref(v_run_x27_2424_);
v___y_2351_ = v___x_2428_;
v___y_2352_ = v___y_2418_;
v___y_2353_ = v___x_2427_;
v___y_2354_ = v___f_2426_;
v___y_2355_ = v___y_2409_;
v___y_2356_ = v_fixedInt_2410_;
v___y_2357_ = v___y_2412_;
v___y_2358_ = v___y_2416_;
v___y_2359_ = v___x_2430_;
v___y_2360_ = v_hasTrace_2421_;
v___y_2361_ = v___y_2417_;
v___y_2362_ = v___y_2415_;
v___y_2363_ = v___y_2414_;
v___y_2364_ = v_options_2420_;
v___y_2365_ = v_run_x27_2424_;
v___y_2366_ = v___y_2411_;
v___y_2367_ = v___y_2413_;
goto v___jp_2350_;
}
}
else
{
lean_inc_ref(v_run_x27_2424_);
v___y_2351_ = v___x_2428_;
v___y_2352_ = v___y_2418_;
v___y_2353_ = v___x_2427_;
v___y_2354_ = v___f_2426_;
v___y_2355_ = v___y_2409_;
v___y_2356_ = v_fixedInt_2410_;
v___y_2357_ = v___y_2412_;
v___y_2358_ = v___y_2416_;
v___y_2359_ = v___x_2430_;
v___y_2360_ = v_hasTrace_2421_;
v___y_2361_ = v___y_2417_;
v___y_2362_ = v___y_2415_;
v___y_2363_ = v___y_2414_;
v___y_2364_ = v_options_2420_;
v___y_2365_ = v_run_x27_2424_;
v___y_2366_ = v___y_2411_;
v___y_2367_ = v___y_2413_;
goto v___jp_2350_;
}
}
}
}
v___jp_2434_:
{
if (lean_obj_tag(v___y_2445_) == 0)
{
lean_object* v_a_2446_; lean_object* v___x_2448_; uint8_t v_isShared_2449_; uint8_t v_isSharedCheck_2456_; 
v_a_2446_ = lean_ctor_get(v___y_2445_, 0);
v_isSharedCheck_2456_ = !lean_is_exclusive(v___y_2445_);
if (v_isSharedCheck_2456_ == 0)
{
v___x_2448_ = v___y_2445_;
v_isShared_2449_ = v_isSharedCheck_2456_;
goto v_resetjp_2447_;
}
else
{
lean_inc(v_a_2446_);
lean_dec(v___y_2445_);
v___x_2448_ = lean_box(0);
v_isShared_2449_ = v_isSharedCheck_2456_;
goto v_resetjp_2447_;
}
v_resetjp_2447_:
{
uint8_t v___x_2450_; 
v___x_2450_ = lean_unbox(v_a_2446_);
lean_dec(v_a_2446_);
if (v___x_2450_ == 0)
{
uint8_t v_fixedInt_2451_; 
lean_del_object(v___x_2448_);
v_fixedInt_2451_ = lean_ctor_get_uint8(v___y_2441_, sizeof(void*)*2 + 6);
v___y_2409_ = v___y_2441_;
v_fixedInt_2410_ = v_fixedInt_2451_;
v___y_2411_ = v___y_2437_;
v___y_2412_ = v___y_2444_;
v___y_2413_ = v___y_2442_;
v___y_2414_ = v___y_2435_;
v___y_2415_ = v___y_2440_;
v___y_2416_ = v___y_2443_;
v___y_2417_ = v___y_2439_;
v___y_2418_ = v___y_2438_;
goto v___jp_2408_;
}
else
{
lean_object* v___x_2452_; lean_object* v___x_2454_; 
v___x_2452_ = lean_box(v___y_2436_);
if (v_isShared_2449_ == 0)
{
lean_ctor_set(v___x_2448_, 0, v___x_2452_);
v___x_2454_ = v___x_2448_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2455_; 
v_reuseFailAlloc_2455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2455_, 0, v___x_2452_);
v___x_2454_ = v_reuseFailAlloc_2455_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
return v___x_2454_;
}
}
}
}
else
{
return v___y_2445_;
}
}
v___jp_2457_:
{
lean_object* v___x_2477_; double v___x_2478_; double v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; 
v___x_2477_ = lean_io_get_num_heartbeats();
v___x_2478_ = lean_float_of_nat(v___y_2467_);
v___x_2479_ = lean_float_of_nat(v___x_2477_);
v___x_2480_ = lean_box_float(v___x_2478_);
v___x_2481_ = lean_box_float(v___x_2479_);
v___x_2482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2480_);
lean_ctor_set(v___x_2482_, 1, v___x_2481_);
v___x_2483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2483_, 0, v_a_2476_);
lean_ctor_set(v___x_2483_, 1, v___x_2482_);
lean_inc_ref(v___y_2465_);
lean_inc_ref(v___y_2471_);
lean_inc(v___y_2460_);
v___x_2484_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v___y_2460_, v___y_2475_, v___y_2471_, v___y_2458_, v___y_2461_, v___y_2473_, v___y_2465_, v___x_2483_, v___y_2469_, v___y_2474_, v___y_2472_, v___y_2468_, v___y_2463_, v___y_2466_, v___y_2462_, v___y_2470_);
v___y_2435_ = v___y_2468_;
v___y_2436_ = v___y_2459_;
v___y_2437_ = v___y_2469_;
v___y_2438_ = v___y_2470_;
v___y_2439_ = v___y_2462_;
v___y_2440_ = v___y_2463_;
v___y_2441_ = v___y_2464_;
v___y_2442_ = v___y_2472_;
v___y_2443_ = v___y_2466_;
v___y_2444_ = v___y_2474_;
v___y_2445_ = v___x_2484_;
goto v___jp_2434_;
}
v___jp_2485_:
{
lean_object* v___x_2505_; double v___x_2506_; double v___x_2507_; double v___x_2508_; double v___x_2509_; double v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; 
v___x_2505_ = lean_io_mono_nanos_now();
v___x_2506_ = lean_float_of_nat(v___y_2491_);
v___x_2507_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0);
v___x_2508_ = lean_float_div(v___x_2506_, v___x_2507_);
v___x_2509_ = lean_float_of_nat(v___x_2505_);
v___x_2510_ = lean_float_div(v___x_2509_, v___x_2507_);
v___x_2511_ = lean_box_float(v___x_2508_);
v___x_2512_ = lean_box_float(v___x_2510_);
v___x_2513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2513_, 0, v___x_2511_);
lean_ctor_set(v___x_2513_, 1, v___x_2512_);
v___x_2514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2514_, 0, v_a_2504_);
lean_ctor_set(v___x_2514_, 1, v___x_2513_);
lean_inc_ref(v___y_2494_);
lean_inc_ref(v___y_2499_);
lean_inc(v___y_2488_);
v___x_2515_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v___y_2488_, v___y_2503_, v___y_2499_, v___y_2486_, v___y_2489_, v___y_2501_, v___y_2494_, v___x_2514_, v___y_2497_, v___y_2502_, v___y_2500_, v___y_2496_, v___y_2492_, v___y_2495_, v___y_2490_, v___y_2498_);
v___y_2435_ = v___y_2496_;
v___y_2436_ = v___y_2487_;
v___y_2437_ = v___y_2497_;
v___y_2438_ = v___y_2498_;
v___y_2439_ = v___y_2490_;
v___y_2440_ = v___y_2492_;
v___y_2441_ = v___y_2493_;
v___y_2442_ = v___y_2500_;
v___y_2443_ = v___y_2495_;
v___y_2444_ = v___y_2502_;
v___y_2445_ = v___x_2515_;
goto v___jp_2434_;
}
v___jp_2516_:
{
lean_object* v___x_2534_; lean_object* v_a_2535_; lean_object* v___x_2536_; uint8_t v___x_2537_; 
v___x_2534_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v___y_2529_);
v_a_2535_ = lean_ctor_get(v___x_2534_, 0);
lean_inc(v_a_2535_);
lean_dec_ref(v___x_2534_);
v___x_2536_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2537_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v___y_2517_, v___x_2536_);
if (v___x_2537_ == 0)
{
lean_object* v___x_2538_; lean_object* v___x_2539_; 
v___x_2538_ = lean_io_mono_nanos_now();
lean_inc(v___y_2529_);
lean_inc_ref(v___y_2521_);
lean_inc(v___y_2525_);
lean_inc_ref(v___y_2522_);
lean_inc(v___y_2526_);
lean_inc_ref(v___y_2531_);
lean_inc(v___y_2532_);
lean_inc_ref(v___y_2528_);
v___x_2539_ = lean_apply_9(v___y_2527_, v___y_2528_, v___y_2532_, v___y_2531_, v___y_2526_, v___y_2522_, v___y_2525_, v___y_2521_, v___y_2529_, lean_box(0));
if (lean_obj_tag(v___x_2539_) == 0)
{
lean_object* v_a_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2547_; 
v_a_2540_ = lean_ctor_get(v___x_2539_, 0);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2539_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2542_ = v___x_2539_;
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_a_2540_);
lean_dec(v___x_2539_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v___x_2545_; 
if (v_isShared_2543_ == 0)
{
lean_ctor_set_tag(v___x_2542_, 1);
v___x_2545_ = v___x_2542_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v_a_2540_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
v___y_2486_ = v___y_2517_;
v___y_2487_ = v___y_2518_;
v___y_2488_ = v___y_2519_;
v___y_2489_ = v___y_2520_;
v___y_2490_ = v___y_2521_;
v___y_2491_ = v___x_2538_;
v___y_2492_ = v___y_2522_;
v___y_2493_ = v___y_2524_;
v___y_2494_ = v___y_2523_;
v___y_2495_ = v___y_2525_;
v___y_2496_ = v___y_2526_;
v___y_2497_ = v___y_2528_;
v___y_2498_ = v___y_2529_;
v___y_2499_ = v___y_2530_;
v___y_2500_ = v___y_2531_;
v___y_2501_ = v_a_2535_;
v___y_2502_ = v___y_2532_;
v___y_2503_ = v___y_2533_;
v_a_2504_ = v___x_2545_;
goto v___jp_2485_;
}
}
}
else
{
lean_object* v_a_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2555_; 
v_a_2548_ = lean_ctor_get(v___x_2539_, 0);
v_isSharedCheck_2555_ = !lean_is_exclusive(v___x_2539_);
if (v_isSharedCheck_2555_ == 0)
{
v___x_2550_ = v___x_2539_;
v_isShared_2551_ = v_isSharedCheck_2555_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_a_2548_);
lean_dec(v___x_2539_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2555_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
lean_object* v___x_2553_; 
if (v_isShared_2551_ == 0)
{
lean_ctor_set_tag(v___x_2550_, 0);
v___x_2553_ = v___x_2550_;
goto v_reusejp_2552_;
}
else
{
lean_object* v_reuseFailAlloc_2554_; 
v_reuseFailAlloc_2554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2554_, 0, v_a_2548_);
v___x_2553_ = v_reuseFailAlloc_2554_;
goto v_reusejp_2552_;
}
v_reusejp_2552_:
{
v___y_2486_ = v___y_2517_;
v___y_2487_ = v___y_2518_;
v___y_2488_ = v___y_2519_;
v___y_2489_ = v___y_2520_;
v___y_2490_ = v___y_2521_;
v___y_2491_ = v___x_2538_;
v___y_2492_ = v___y_2522_;
v___y_2493_ = v___y_2524_;
v___y_2494_ = v___y_2523_;
v___y_2495_ = v___y_2525_;
v___y_2496_ = v___y_2526_;
v___y_2497_ = v___y_2528_;
v___y_2498_ = v___y_2529_;
v___y_2499_ = v___y_2530_;
v___y_2500_ = v___y_2531_;
v___y_2501_ = v_a_2535_;
v___y_2502_ = v___y_2532_;
v___y_2503_ = v___y_2533_;
v_a_2504_ = v___x_2553_;
goto v___jp_2485_;
}
}
}
}
else
{
lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2556_ = lean_io_get_num_heartbeats();
lean_inc(v___y_2529_);
lean_inc_ref(v___y_2521_);
lean_inc(v___y_2525_);
lean_inc_ref(v___y_2522_);
lean_inc(v___y_2526_);
lean_inc_ref(v___y_2531_);
lean_inc(v___y_2532_);
lean_inc_ref(v___y_2528_);
v___x_2557_ = lean_apply_9(v___y_2527_, v___y_2528_, v___y_2532_, v___y_2531_, v___y_2526_, v___y_2522_, v___y_2525_, v___y_2521_, v___y_2529_, lean_box(0));
if (lean_obj_tag(v___x_2557_) == 0)
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2565_; 
v_a_2558_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2565_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2560_ = v___x_2557_;
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v___x_2557_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2563_; 
if (v_isShared_2561_ == 0)
{
lean_ctor_set_tag(v___x_2560_, 1);
v___x_2563_ = v___x_2560_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v_a_2558_);
v___x_2563_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
v___y_2458_ = v___y_2517_;
v___y_2459_ = v___y_2518_;
v___y_2460_ = v___y_2519_;
v___y_2461_ = v___y_2520_;
v___y_2462_ = v___y_2521_;
v___y_2463_ = v___y_2522_;
v___y_2464_ = v___y_2524_;
v___y_2465_ = v___y_2523_;
v___y_2466_ = v___y_2525_;
v___y_2467_ = v___x_2556_;
v___y_2468_ = v___y_2526_;
v___y_2469_ = v___y_2528_;
v___y_2470_ = v___y_2529_;
v___y_2471_ = v___y_2530_;
v___y_2472_ = v___y_2531_;
v___y_2473_ = v_a_2535_;
v___y_2474_ = v___y_2532_;
v___y_2475_ = v___y_2533_;
v_a_2476_ = v___x_2563_;
goto v___jp_2457_;
}
}
}
else
{
lean_object* v_a_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2573_; 
v_a_2566_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2573_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2573_ == 0)
{
v___x_2568_ = v___x_2557_;
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_a_2566_);
lean_dec(v___x_2557_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
lean_object* v___x_2571_; 
if (v_isShared_2569_ == 0)
{
lean_ctor_set_tag(v___x_2568_, 0);
v___x_2571_ = v___x_2568_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v_a_2566_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
v___y_2458_ = v___y_2517_;
v___y_2459_ = v___y_2518_;
v___y_2460_ = v___y_2519_;
v___y_2461_ = v___y_2520_;
v___y_2462_ = v___y_2521_;
v___y_2463_ = v___y_2522_;
v___y_2464_ = v___y_2524_;
v___y_2465_ = v___y_2523_;
v___y_2466_ = v___y_2525_;
v___y_2467_ = v___x_2556_;
v___y_2468_ = v___y_2526_;
v___y_2469_ = v___y_2528_;
v___y_2470_ = v___y_2529_;
v___y_2471_ = v___y_2530_;
v___y_2472_ = v___y_2531_;
v___y_2473_ = v_a_2535_;
v___y_2474_ = v___y_2532_;
v___y_2475_ = v___y_2533_;
v_a_2476_ = v___x_2571_;
goto v___jp_2457_;
}
}
}
}
}
v___jp_2574_:
{
if (v_enums_2577_ == 0)
{
v___y_2409_ = v___y_2575_;
v_fixedInt_2410_ = v_fixedInt_2576_;
v___y_2411_ = v___y_2578_;
v___y_2412_ = v___y_2579_;
v___y_2413_ = v___y_2580_;
v___y_2414_ = v___y_2581_;
v___y_2415_ = v___y_2582_;
v___y_2416_ = v___y_2583_;
v___y_2417_ = v___y_2584_;
v___y_2418_ = v___y_2585_;
goto v___jp_2408_;
}
else
{
lean_object* v___x_2586_; lean_object* v_options_2587_; uint8_t v_hasTrace_2588_; 
v___x_2586_ = l_Lean_Meta_Tactic_BVDecide_Normalize_enumsPass;
v_options_2587_ = lean_ctor_get(v___y_2584_, 2);
v_hasTrace_2588_ = lean_ctor_get_uint8(v_options_2587_, sizeof(void*)*1);
if (v_hasTrace_2588_ == 0)
{
lean_object* v_run_x27_2589_; lean_object* v___x_2590_; 
v_run_x27_2589_ = lean_ctor_get(v___x_2586_, 1);
lean_inc_ref(v_run_x27_2589_);
lean_inc(v___y_2585_);
lean_inc_ref(v___y_2584_);
lean_inc(v___y_2583_);
lean_inc_ref(v___y_2582_);
lean_inc(v___y_2581_);
lean_inc_ref(v___y_2580_);
lean_inc(v___y_2579_);
lean_inc_ref(v___y_2578_);
v___x_2590_ = lean_apply_9(v_run_x27_2589_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_, lean_box(0));
v___y_2435_ = v___y_2581_;
v___y_2436_ = v_enums_2577_;
v___y_2437_ = v___y_2578_;
v___y_2438_ = v___y_2585_;
v___y_2439_ = v___y_2584_;
v___y_2440_ = v___y_2582_;
v___y_2441_ = v___y_2575_;
v___y_2442_ = v___y_2580_;
v___y_2443_ = v___y_2583_;
v___y_2444_ = v___y_2579_;
v___y_2445_ = v___x_2590_;
goto v___jp_2434_;
}
else
{
lean_object* v_run_x27_2591_; lean_object* v_inheritedTraceOptions_2592_; lean_object* v___f_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; uint8_t v___x_2597_; 
v_run_x27_2591_ = lean_ctor_get(v___x_2586_, 1);
v_inheritedTraceOptions_2592_ = lean_ctor_get(v___y_2584_, 13);
v___f_2593_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__5);
v___x_2594_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__3));
v___x_2595_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg___closed__0));
v___x_2596_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4);
v___x_2597_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2592_, v_options_2587_, v___x_2596_);
if (v___x_2597_ == 0)
{
lean_object* v___x_2598_; uint8_t v___x_2599_; 
v___x_2598_ = l_Lean_trace_profiler;
v___x_2599_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_options_2587_, v___x_2598_);
if (v___x_2599_ == 0)
{
lean_object* v___x_2600_; 
lean_inc_ref(v_run_x27_2591_);
lean_inc(v___y_2585_);
lean_inc_ref(v___y_2584_);
lean_inc(v___y_2583_);
lean_inc_ref(v___y_2582_);
lean_inc(v___y_2581_);
lean_inc_ref(v___y_2580_);
lean_inc(v___y_2579_);
lean_inc_ref(v___y_2578_);
v___x_2600_ = lean_apply_9(v_run_x27_2591_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_, lean_box(0));
v___y_2435_ = v___y_2581_;
v___y_2436_ = v_enums_2577_;
v___y_2437_ = v___y_2578_;
v___y_2438_ = v___y_2585_;
v___y_2439_ = v___y_2584_;
v___y_2440_ = v___y_2582_;
v___y_2441_ = v___y_2575_;
v___y_2442_ = v___y_2580_;
v___y_2443_ = v___y_2583_;
v___y_2444_ = v___y_2579_;
v___y_2445_ = v___x_2600_;
goto v___jp_2434_;
}
else
{
lean_inc_ref(v_run_x27_2591_);
v___y_2517_ = v_options_2587_;
v___y_2518_ = v_enums_2577_;
v___y_2519_ = v___x_2594_;
v___y_2520_ = v___x_2597_;
v___y_2521_ = v___y_2584_;
v___y_2522_ = v___y_2582_;
v___y_2523_ = v___f_2593_;
v___y_2524_ = v___y_2575_;
v___y_2525_ = v___y_2583_;
v___y_2526_ = v___y_2581_;
v___y_2527_ = v_run_x27_2591_;
v___y_2528_ = v___y_2578_;
v___y_2529_ = v___y_2585_;
v___y_2530_ = v___x_2595_;
v___y_2531_ = v___y_2580_;
v___y_2532_ = v___y_2579_;
v___y_2533_ = v_hasTrace_2588_;
goto v___jp_2516_;
}
}
else
{
lean_inc_ref(v_run_x27_2591_);
v___y_2517_ = v_options_2587_;
v___y_2518_ = v_enums_2577_;
v___y_2519_ = v___x_2594_;
v___y_2520_ = v___x_2597_;
v___y_2521_ = v___y_2584_;
v___y_2522_ = v___y_2582_;
v___y_2523_ = v___f_2593_;
v___y_2524_ = v___y_2575_;
v___y_2525_ = v___y_2583_;
v___y_2526_ = v___y_2581_;
v___y_2527_ = v_run_x27_2591_;
v___y_2528_ = v___y_2578_;
v___y_2529_ = v___y_2585_;
v___y_2530_ = v___x_2595_;
v___y_2531_ = v___y_2580_;
v___y_2532_ = v___y_2579_;
v___y_2533_ = v_hasTrace_2588_;
goto v___jp_2516_;
}
}
}
}
v___jp_2601_:
{
if (lean_obj_tag(v___y_2612_) == 0)
{
lean_object* v_a_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2624_; 
v_a_2613_ = lean_ctor_get(v___y_2612_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___y_2612_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2615_ = v___y_2612_;
v_isShared_2616_ = v_isSharedCheck_2624_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_a_2613_);
lean_dec(v___y_2612_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2624_;
goto v_resetjp_2614_;
}
v_resetjp_2614_:
{
uint8_t v___x_2617_; 
v___x_2617_ = lean_unbox(v_a_2613_);
lean_dec(v_a_2613_);
if (v___x_2617_ == 0)
{
uint8_t v_fixedInt_2618_; uint8_t v_enums_2619_; 
lean_del_object(v___x_2615_);
v_fixedInt_2618_ = lean_ctor_get_uint8(v___y_2606_, sizeof(void*)*2 + 6);
v_enums_2619_ = lean_ctor_get_uint8(v___y_2606_, sizeof(void*)*2 + 7);
v___y_2575_ = v___y_2606_;
v_fixedInt_2576_ = v_fixedInt_2618_;
v_enums_2577_ = v_enums_2619_;
v___y_2578_ = v___y_2603_;
v___y_2579_ = v___y_2610_;
v___y_2580_ = v___y_2611_;
v___y_2581_ = v___y_2609_;
v___y_2582_ = v___y_2602_;
v___y_2583_ = v___y_2607_;
v___y_2584_ = v___y_2605_;
v___y_2585_ = v___y_2604_;
goto v___jp_2574_;
}
else
{
lean_object* v___x_2620_; lean_object* v___x_2622_; 
v___x_2620_ = lean_box(v___y_2608_);
if (v_isShared_2616_ == 0)
{
lean_ctor_set(v___x_2615_, 0, v___x_2620_);
v___x_2622_ = v___x_2615_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v___x_2620_);
v___x_2622_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
return v___x_2622_;
}
}
}
}
else
{
return v___y_2612_;
}
}
v___jp_2625_:
{
lean_object* v___x_2645_; double v___x_2646_; double v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; 
v___x_2645_ = lean_io_get_num_heartbeats();
v___x_2646_ = lean_float_of_nat(v___y_2627_);
v___x_2647_ = lean_float_of_nat(v___x_2645_);
v___x_2648_ = lean_box_float(v___x_2646_);
v___x_2649_ = lean_box_float(v___x_2647_);
v___x_2650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2650_, 0, v___x_2648_);
lean_ctor_set(v___x_2650_, 1, v___x_2649_);
v___x_2651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2651_, 0, v_a_2644_);
lean_ctor_set(v___x_2651_, 1, v___x_2650_);
lean_inc_ref(v___y_2626_);
lean_inc_ref(v___y_2639_);
lean_inc(v___y_2638_);
v___x_2652_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v___y_2638_, v___y_2632_, v___y_2639_, v___y_2640_, v___y_2633_, v___y_2641_, v___y_2626_, v___x_2651_, v___y_2634_, v___y_2631_, v___y_2643_, v___y_2642_, v___y_2635_, v___y_2629_, v___y_2637_, v___y_2636_);
v___y_2602_ = v___y_2635_;
v___y_2603_ = v___y_2634_;
v___y_2604_ = v___y_2636_;
v___y_2605_ = v___y_2637_;
v___y_2606_ = v___y_2628_;
v___y_2607_ = v___y_2629_;
v___y_2608_ = v___y_2630_;
v___y_2609_ = v___y_2642_;
v___y_2610_ = v___y_2631_;
v___y_2611_ = v___y_2643_;
v___y_2612_ = v___x_2652_;
goto v___jp_2601_;
}
v___jp_2653_:
{
lean_object* v___x_2673_; double v___x_2674_; double v___x_2675_; double v___x_2676_; double v___x_2677_; double v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; 
v___x_2673_ = lean_io_mono_nanos_now();
v___x_2674_ = lean_float_of_nat(v___y_2655_);
v___x_2675_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0);
v___x_2676_ = lean_float_div(v___x_2674_, v___x_2675_);
v___x_2677_ = lean_float_of_nat(v___x_2673_);
v___x_2678_ = lean_float_div(v___x_2677_, v___x_2675_);
v___x_2679_ = lean_box_float(v___x_2676_);
v___x_2680_ = lean_box_float(v___x_2678_);
v___x_2681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2679_);
lean_ctor_set(v___x_2681_, 1, v___x_2680_);
v___x_2682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2682_, 0, v_a_2672_);
lean_ctor_set(v___x_2682_, 1, v___x_2681_);
lean_inc_ref(v___y_2654_);
lean_inc_ref(v___y_2667_);
lean_inc(v___y_2666_);
v___x_2683_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v___y_2666_, v___y_2660_, v___y_2667_, v___y_2668_, v___y_2661_, v___y_2669_, v___y_2654_, v___x_2682_, v___y_2662_, v___y_2659_, v___y_2671_, v___y_2670_, v___y_2663_, v___y_2657_, v___y_2665_, v___y_2664_);
v___y_2602_ = v___y_2663_;
v___y_2603_ = v___y_2662_;
v___y_2604_ = v___y_2664_;
v___y_2605_ = v___y_2665_;
v___y_2606_ = v___y_2656_;
v___y_2607_ = v___y_2657_;
v___y_2608_ = v___y_2658_;
v___y_2609_ = v___y_2670_;
v___y_2610_ = v___y_2659_;
v___y_2611_ = v___y_2671_;
v___y_2612_ = v___x_2683_;
goto v___jp_2601_;
}
v___jp_2684_:
{
lean_object* v___x_2702_; lean_object* v_a_2703_; lean_object* v___x_2704_; uint8_t v___x_2705_; 
v___x_2702_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v___y_2695_);
v_a_2703_ = lean_ctor_get(v___x_2702_, 0);
lean_inc(v_a_2703_);
lean_dec_ref(v___x_2702_);
v___x_2704_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2705_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v___y_2699_, v___x_2704_);
if (v___x_2705_ == 0)
{
lean_object* v___x_2706_; lean_object* v___x_2707_; 
v___x_2706_ = lean_io_mono_nanos_now();
lean_inc(v___y_2695_);
lean_inc_ref(v___y_2698_);
lean_inc(v___y_2688_);
lean_inc_ref(v___y_2694_);
lean_inc(v___y_2700_);
lean_inc_ref(v___y_2701_);
lean_inc(v___y_2690_);
lean_inc_ref(v___y_2693_);
v___x_2707_ = lean_apply_9(v___y_2687_, v___y_2693_, v___y_2690_, v___y_2701_, v___y_2700_, v___y_2694_, v___y_2688_, v___y_2698_, v___y_2695_, lean_box(0));
if (lean_obj_tag(v___x_2707_) == 0)
{
lean_object* v_a_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2715_; 
v_a_2708_ = lean_ctor_get(v___x_2707_, 0);
v_isSharedCheck_2715_ = !lean_is_exclusive(v___x_2707_);
if (v_isSharedCheck_2715_ == 0)
{
v___x_2710_ = v___x_2707_;
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_a_2708_);
lean_dec(v___x_2707_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2713_; 
if (v_isShared_2711_ == 0)
{
lean_ctor_set_tag(v___x_2710_, 1);
v___x_2713_ = v___x_2710_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v_a_2708_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
v___y_2654_ = v___y_2685_;
v___y_2655_ = v___x_2706_;
v___y_2656_ = v___y_2686_;
v___y_2657_ = v___y_2688_;
v___y_2658_ = v___y_2689_;
v___y_2659_ = v___y_2690_;
v___y_2660_ = v___y_2691_;
v___y_2661_ = v___y_2692_;
v___y_2662_ = v___y_2693_;
v___y_2663_ = v___y_2694_;
v___y_2664_ = v___y_2695_;
v___y_2665_ = v___y_2698_;
v___y_2666_ = v___y_2697_;
v___y_2667_ = v___y_2696_;
v___y_2668_ = v___y_2699_;
v___y_2669_ = v_a_2703_;
v___y_2670_ = v___y_2700_;
v___y_2671_ = v___y_2701_;
v_a_2672_ = v___x_2713_;
goto v___jp_2653_;
}
}
}
else
{
lean_object* v_a_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2723_; 
v_a_2716_ = lean_ctor_get(v___x_2707_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2707_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2718_ = v___x_2707_;
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_a_2716_);
lean_dec(v___x_2707_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2721_; 
if (v_isShared_2719_ == 0)
{
lean_ctor_set_tag(v___x_2718_, 0);
v___x_2721_ = v___x_2718_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_a_2716_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
v___y_2654_ = v___y_2685_;
v___y_2655_ = v___x_2706_;
v___y_2656_ = v___y_2686_;
v___y_2657_ = v___y_2688_;
v___y_2658_ = v___y_2689_;
v___y_2659_ = v___y_2690_;
v___y_2660_ = v___y_2691_;
v___y_2661_ = v___y_2692_;
v___y_2662_ = v___y_2693_;
v___y_2663_ = v___y_2694_;
v___y_2664_ = v___y_2695_;
v___y_2665_ = v___y_2698_;
v___y_2666_ = v___y_2697_;
v___y_2667_ = v___y_2696_;
v___y_2668_ = v___y_2699_;
v___y_2669_ = v_a_2703_;
v___y_2670_ = v___y_2700_;
v___y_2671_ = v___y_2701_;
v_a_2672_ = v___x_2721_;
goto v___jp_2653_;
}
}
}
}
else
{
lean_object* v___x_2724_; lean_object* v___x_2725_; 
v___x_2724_ = lean_io_get_num_heartbeats();
lean_inc(v___y_2695_);
lean_inc_ref(v___y_2698_);
lean_inc(v___y_2688_);
lean_inc_ref(v___y_2694_);
lean_inc(v___y_2700_);
lean_inc_ref(v___y_2701_);
lean_inc(v___y_2690_);
lean_inc_ref(v___y_2693_);
v___x_2725_ = lean_apply_9(v___y_2687_, v___y_2693_, v___y_2690_, v___y_2701_, v___y_2700_, v___y_2694_, v___y_2688_, v___y_2698_, v___y_2695_, lean_box(0));
if (lean_obj_tag(v___x_2725_) == 0)
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
v_a_2726_ = lean_ctor_get(v___x_2725_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2725_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___x_2725_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2725_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
lean_ctor_set_tag(v___x_2728_, 1);
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
v___y_2626_ = v___y_2685_;
v___y_2627_ = v___x_2724_;
v___y_2628_ = v___y_2686_;
v___y_2629_ = v___y_2688_;
v___y_2630_ = v___y_2689_;
v___y_2631_ = v___y_2690_;
v___y_2632_ = v___y_2691_;
v___y_2633_ = v___y_2692_;
v___y_2634_ = v___y_2693_;
v___y_2635_ = v___y_2694_;
v___y_2636_ = v___y_2695_;
v___y_2637_ = v___y_2698_;
v___y_2638_ = v___y_2697_;
v___y_2639_ = v___y_2696_;
v___y_2640_ = v___y_2699_;
v___y_2641_ = v_a_2703_;
v___y_2642_ = v___y_2700_;
v___y_2643_ = v___y_2701_;
v_a_2644_ = v___x_2731_;
goto v___jp_2625_;
}
}
}
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2741_; 
v_a_2734_ = lean_ctor_get(v___x_2725_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2725_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2736_ = v___x_2725_;
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2725_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___x_2739_; 
if (v_isShared_2737_ == 0)
{
lean_ctor_set_tag(v___x_2736_, 0);
v___x_2739_ = v___x_2736_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_a_2734_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
v___y_2626_ = v___y_2685_;
v___y_2627_ = v___x_2724_;
v___y_2628_ = v___y_2686_;
v___y_2629_ = v___y_2688_;
v___y_2630_ = v___y_2689_;
v___y_2631_ = v___y_2690_;
v___y_2632_ = v___y_2691_;
v___y_2633_ = v___y_2692_;
v___y_2634_ = v___y_2693_;
v___y_2635_ = v___y_2694_;
v___y_2636_ = v___y_2695_;
v___y_2637_ = v___y_2698_;
v___y_2638_ = v___y_2697_;
v___y_2639_ = v___y_2696_;
v___y_2640_ = v___y_2699_;
v___y_2641_ = v_a_2703_;
v___y_2642_ = v___y_2700_;
v___y_2643_ = v___y_2701_;
v_a_2644_ = v___x_2739_;
goto v___jp_2625_;
}
}
}
}
}
v___jp_2742_:
{
if (lean_obj_tag(v___y_2752_) == 0)
{
lean_object* v_a_2753_; lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2780_; 
v_a_2753_ = lean_ctor_get(v___y_2752_, 0);
v_isSharedCheck_2780_ = !lean_is_exclusive(v___y_2752_);
if (v_isSharedCheck_2780_ == 0)
{
v___x_2755_ = v___y_2752_;
v_isShared_2756_ = v_isSharedCheck_2780_;
goto v_resetjp_2754_;
}
else
{
lean_inc(v_a_2753_);
lean_dec(v___y_2752_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2780_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
uint8_t v___x_2757_; 
v___x_2757_ = lean_unbox(v_a_2753_);
lean_dec(v_a_2753_);
if (v___x_2757_ == 0)
{
uint8_t v_structures_2758_; 
lean_del_object(v___x_2755_);
v_structures_2758_ = lean_ctor_get_uint8(v___y_2749_, sizeof(void*)*2 + 5);
if (v_structures_2758_ == 0)
{
uint8_t v_fixedInt_2759_; uint8_t v_enums_2760_; 
v_fixedInt_2759_ = lean_ctor_get_uint8(v___y_2749_, sizeof(void*)*2 + 6);
v_enums_2760_ = lean_ctor_get_uint8(v___y_2749_, sizeof(void*)*2 + 7);
v___y_2575_ = v___y_2749_;
v_fixedInt_2576_ = v_fixedInt_2759_;
v_enums_2577_ = v_enums_2760_;
v___y_2578_ = v___y_2749_;
v___y_2579_ = v___y_2746_;
v___y_2580_ = v___y_2751_;
v___y_2581_ = v___y_2750_;
v___y_2582_ = v___y_2748_;
v___y_2583_ = v___y_2745_;
v___y_2584_ = v___y_2747_;
v___y_2585_ = v___y_2744_;
goto v___jp_2574_;
}
else
{
lean_object* v___x_2761_; lean_object* v_options_2762_; uint8_t v_hasTrace_2763_; 
v___x_2761_ = l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass;
v_options_2762_ = lean_ctor_get(v___y_2747_, 2);
v_hasTrace_2763_ = lean_ctor_get_uint8(v_options_2762_, sizeof(void*)*1);
if (v_hasTrace_2763_ == 0)
{
lean_object* v_run_x27_2764_; lean_object* v___x_2765_; 
v_run_x27_2764_ = lean_ctor_get(v___x_2761_, 1);
lean_inc_ref(v_run_x27_2764_);
lean_inc(v___y_2744_);
lean_inc_ref(v___y_2747_);
lean_inc(v___y_2745_);
lean_inc_ref(v___y_2748_);
lean_inc(v___y_2750_);
lean_inc_ref(v___y_2751_);
lean_inc(v___y_2746_);
lean_inc_ref(v___y_2749_);
v___x_2765_ = lean_apply_9(v_run_x27_2764_, v___y_2749_, v___y_2746_, v___y_2751_, v___y_2750_, v___y_2748_, v___y_2745_, v___y_2747_, v___y_2744_, lean_box(0));
v___y_2602_ = v___y_2748_;
v___y_2603_ = v___y_2749_;
v___y_2604_ = v___y_2744_;
v___y_2605_ = v___y_2747_;
v___y_2606_ = v___y_2749_;
v___y_2607_ = v___y_2745_;
v___y_2608_ = v_structures_2758_;
v___y_2609_ = v___y_2750_;
v___y_2610_ = v___y_2746_;
v___y_2611_ = v___y_2751_;
v___y_2612_ = v___x_2765_;
goto v___jp_2601_;
}
else
{
lean_object* v_run_x27_2766_; lean_object* v_inheritedTraceOptions_2767_; lean_object* v___f_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; uint8_t v___x_2772_; 
v_run_x27_2766_ = lean_ctor_get(v___x_2761_, 1);
v_inheritedTraceOptions_2767_ = lean_ctor_get(v___y_2747_, 13);
v___f_2768_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__6);
v___x_2769_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__3));
v___x_2770_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg___closed__0));
v___x_2771_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4);
v___x_2772_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2767_, v_options_2762_, v___x_2771_);
if (v___x_2772_ == 0)
{
lean_object* v___x_2773_; uint8_t v___x_2774_; 
v___x_2773_ = l_Lean_trace_profiler;
v___x_2774_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_options_2762_, v___x_2773_);
if (v___x_2774_ == 0)
{
lean_object* v___x_2775_; 
lean_inc_ref(v_run_x27_2766_);
lean_inc(v___y_2744_);
lean_inc_ref(v___y_2747_);
lean_inc(v___y_2745_);
lean_inc_ref(v___y_2748_);
lean_inc(v___y_2750_);
lean_inc_ref(v___y_2751_);
lean_inc(v___y_2746_);
lean_inc_ref(v___y_2749_);
v___x_2775_ = lean_apply_9(v_run_x27_2766_, v___y_2749_, v___y_2746_, v___y_2751_, v___y_2750_, v___y_2748_, v___y_2745_, v___y_2747_, v___y_2744_, lean_box(0));
v___y_2602_ = v___y_2748_;
v___y_2603_ = v___y_2749_;
v___y_2604_ = v___y_2744_;
v___y_2605_ = v___y_2747_;
v___y_2606_ = v___y_2749_;
v___y_2607_ = v___y_2745_;
v___y_2608_ = v_structures_2758_;
v___y_2609_ = v___y_2750_;
v___y_2610_ = v___y_2746_;
v___y_2611_ = v___y_2751_;
v___y_2612_ = v___x_2775_;
goto v___jp_2601_;
}
else
{
lean_inc_ref(v_run_x27_2766_);
v___y_2685_ = v___f_2768_;
v___y_2686_ = v___y_2749_;
v___y_2687_ = v_run_x27_2766_;
v___y_2688_ = v___y_2745_;
v___y_2689_ = v_structures_2758_;
v___y_2690_ = v___y_2746_;
v___y_2691_ = v_hasTrace_2763_;
v___y_2692_ = v___x_2772_;
v___y_2693_ = v___y_2749_;
v___y_2694_ = v___y_2748_;
v___y_2695_ = v___y_2744_;
v___y_2696_ = v___x_2770_;
v___y_2697_ = v___x_2769_;
v___y_2698_ = v___y_2747_;
v___y_2699_ = v_options_2762_;
v___y_2700_ = v___y_2750_;
v___y_2701_ = v___y_2751_;
goto v___jp_2684_;
}
}
else
{
lean_inc_ref(v_run_x27_2766_);
v___y_2685_ = v___f_2768_;
v___y_2686_ = v___y_2749_;
v___y_2687_ = v_run_x27_2766_;
v___y_2688_ = v___y_2745_;
v___y_2689_ = v_structures_2758_;
v___y_2690_ = v___y_2746_;
v___y_2691_ = v_hasTrace_2763_;
v___y_2692_ = v___x_2772_;
v___y_2693_ = v___y_2749_;
v___y_2694_ = v___y_2748_;
v___y_2695_ = v___y_2744_;
v___y_2696_ = v___x_2770_;
v___y_2697_ = v___x_2769_;
v___y_2698_ = v___y_2747_;
v___y_2699_ = v_options_2762_;
v___y_2700_ = v___y_2750_;
v___y_2701_ = v___y_2751_;
goto v___jp_2684_;
}
}
}
}
else
{
lean_object* v___x_2776_; lean_object* v___x_2778_; 
v___x_2776_ = lean_box(v___y_2743_);
if (v_isShared_2756_ == 0)
{
lean_ctor_set(v___x_2755_, 0, v___x_2776_);
v___x_2778_ = v___x_2755_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v___x_2776_);
v___x_2778_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
return v___x_2778_;
}
}
}
}
else
{
return v___y_2752_;
}
}
v___jp_2781_:
{
lean_object* v___x_2800_; double v___x_2801_; double v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; 
v___x_2800_ = lean_io_get_num_heartbeats();
v___x_2801_ = lean_float_of_nat(v___y_2782_);
v___x_2802_ = lean_float_of_nat(v___x_2800_);
v___x_2803_ = lean_box_float(v___x_2801_);
v___x_2804_ = lean_box_float(v___x_2802_);
v___x_2805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2805_, 0, v___x_2803_);
lean_ctor_set(v___x_2805_, 1, v___x_2804_);
v___x_2806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2806_, 0, v_a_2799_);
lean_ctor_set(v___x_2806_, 1, v___x_2805_);
lean_inc_ref(v___y_2787_);
lean_inc_ref(v___y_2783_);
lean_inc(v___y_2786_);
v___x_2807_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v___y_2786_, v___y_2798_, v___y_2783_, v___y_2794_, v___y_2791_, v___y_2797_, v___y_2787_, v___x_2806_, v___y_2789_, v___y_2795_, v___y_2792_, v___y_2790_, v___y_2788_, v___y_2785_, v___y_2796_, v___y_2784_);
v___y_2743_ = v___y_2793_;
v___y_2744_ = v___y_2784_;
v___y_2745_ = v___y_2785_;
v___y_2746_ = v___y_2795_;
v___y_2747_ = v___y_2796_;
v___y_2748_ = v___y_2788_;
v___y_2749_ = v___y_2789_;
v___y_2750_ = v___y_2790_;
v___y_2751_ = v___y_2792_;
v___y_2752_ = v___x_2807_;
goto v___jp_2742_;
}
v___jp_2808_:
{
lean_object* v___x_2827_; double v___x_2828_; double v___x_2829_; double v___x_2830_; double v___x_2831_; double v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; 
v___x_2827_ = lean_io_mono_nanos_now();
v___x_2828_ = lean_float_of_nat(v___y_2822_);
v___x_2829_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__0);
v___x_2830_ = lean_float_div(v___x_2828_, v___x_2829_);
v___x_2831_ = lean_float_of_nat(v___x_2827_);
v___x_2832_ = lean_float_div(v___x_2831_, v___x_2829_);
v___x_2833_ = lean_box_float(v___x_2830_);
v___x_2834_ = lean_box_float(v___x_2832_);
v___x_2835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2833_);
lean_ctor_set(v___x_2835_, 1, v___x_2834_);
v___x_2836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2836_, 0, v_a_2826_);
lean_ctor_set(v___x_2836_, 1, v___x_2835_);
lean_inc_ref(v___y_2813_);
lean_inc_ref(v___y_2809_);
lean_inc(v___y_2812_);
v___x_2837_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2(v___y_2812_, v___y_2825_, v___y_2809_, v___y_2820_, v___y_2817_, v___y_2824_, v___y_2813_, v___x_2836_, v___y_2815_, v___y_2821_, v___y_2818_, v___y_2816_, v___y_2814_, v___y_2811_, v___y_2823_, v___y_2810_);
v___y_2743_ = v___y_2819_;
v___y_2744_ = v___y_2810_;
v___y_2745_ = v___y_2811_;
v___y_2746_ = v___y_2821_;
v___y_2747_ = v___y_2823_;
v___y_2748_ = v___y_2814_;
v___y_2749_ = v___y_2815_;
v___y_2750_ = v___y_2816_;
v___y_2751_ = v___y_2818_;
v___y_2752_ = v___x_2837_;
goto v___jp_2742_;
}
v___jp_2838_:
{
lean_object* v___x_2855_; lean_object* v_a_2856_; lean_object* v___x_2857_; uint8_t v___x_2858_; 
v___x_2855_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__0___redArg(v___y_2841_);
v_a_2856_ = lean_ctor_get(v___x_2855_, 0);
lean_inc(v_a_2856_);
lean_dec_ref(v___x_2855_);
v___x_2857_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2858_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v___y_2851_, v___x_2857_);
if (v___x_2858_ == 0)
{
lean_object* v___x_2859_; lean_object* v___x_2860_; 
v___x_2859_ = lean_io_mono_nanos_now();
lean_inc(v___y_2841_);
lean_inc_ref(v___y_2853_);
lean_inc(v___y_2840_);
lean_inc_ref(v___y_2843_);
lean_inc(v___y_2847_);
lean_inc_ref(v___y_2849_);
lean_inc(v___y_2852_);
lean_inc_ref(v___y_2846_);
v___x_2860_ = lean_apply_9(v___y_2842_, v___y_2846_, v___y_2852_, v___y_2849_, v___y_2847_, v___y_2843_, v___y_2840_, v___y_2853_, v___y_2841_, lean_box(0));
if (lean_obj_tag(v___x_2860_) == 0)
{
lean_object* v_a_2861_; lean_object* v___x_2863_; uint8_t v_isShared_2864_; uint8_t v_isSharedCheck_2868_; 
v_a_2861_ = lean_ctor_get(v___x_2860_, 0);
v_isSharedCheck_2868_ = !lean_is_exclusive(v___x_2860_);
if (v_isSharedCheck_2868_ == 0)
{
v___x_2863_ = v___x_2860_;
v_isShared_2864_ = v_isSharedCheck_2868_;
goto v_resetjp_2862_;
}
else
{
lean_inc(v_a_2861_);
lean_dec(v___x_2860_);
v___x_2863_ = lean_box(0);
v_isShared_2864_ = v_isSharedCheck_2868_;
goto v_resetjp_2862_;
}
v_resetjp_2862_:
{
lean_object* v___x_2866_; 
if (v_isShared_2864_ == 0)
{
lean_ctor_set_tag(v___x_2863_, 1);
v___x_2866_ = v___x_2863_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v_a_2861_);
v___x_2866_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
v___y_2809_ = v___y_2839_;
v___y_2810_ = v___y_2841_;
v___y_2811_ = v___y_2840_;
v___y_2812_ = v___y_2844_;
v___y_2813_ = v___y_2845_;
v___y_2814_ = v___y_2843_;
v___y_2815_ = v___y_2846_;
v___y_2816_ = v___y_2847_;
v___y_2817_ = v___y_2848_;
v___y_2818_ = v___y_2849_;
v___y_2819_ = v___y_2850_;
v___y_2820_ = v___y_2851_;
v___y_2821_ = v___y_2852_;
v___y_2822_ = v___x_2859_;
v___y_2823_ = v___y_2853_;
v___y_2824_ = v_a_2856_;
v___y_2825_ = v___y_2854_;
v_a_2826_ = v___x_2866_;
goto v___jp_2808_;
}
}
}
else
{
lean_object* v_a_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2876_; 
v_a_2869_ = lean_ctor_get(v___x_2860_, 0);
v_isSharedCheck_2876_ = !lean_is_exclusive(v___x_2860_);
if (v_isSharedCheck_2876_ == 0)
{
v___x_2871_ = v___x_2860_;
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_a_2869_);
lean_dec(v___x_2860_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2874_; 
if (v_isShared_2872_ == 0)
{
lean_ctor_set_tag(v___x_2871_, 0);
v___x_2874_ = v___x_2871_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v_a_2869_);
v___x_2874_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
v___y_2809_ = v___y_2839_;
v___y_2810_ = v___y_2841_;
v___y_2811_ = v___y_2840_;
v___y_2812_ = v___y_2844_;
v___y_2813_ = v___y_2845_;
v___y_2814_ = v___y_2843_;
v___y_2815_ = v___y_2846_;
v___y_2816_ = v___y_2847_;
v___y_2817_ = v___y_2848_;
v___y_2818_ = v___y_2849_;
v___y_2819_ = v___y_2850_;
v___y_2820_ = v___y_2851_;
v___y_2821_ = v___y_2852_;
v___y_2822_ = v___x_2859_;
v___y_2823_ = v___y_2853_;
v___y_2824_ = v_a_2856_;
v___y_2825_ = v___y_2854_;
v_a_2826_ = v___x_2874_;
goto v___jp_2808_;
}
}
}
}
else
{
lean_object* v___x_2877_; lean_object* v___x_2878_; 
v___x_2877_ = lean_io_get_num_heartbeats();
lean_inc(v___y_2841_);
lean_inc_ref(v___y_2853_);
lean_inc(v___y_2840_);
lean_inc_ref(v___y_2843_);
lean_inc(v___y_2847_);
lean_inc_ref(v___y_2849_);
lean_inc(v___y_2852_);
lean_inc_ref(v___y_2846_);
v___x_2878_ = lean_apply_9(v___y_2842_, v___y_2846_, v___y_2852_, v___y_2849_, v___y_2847_, v___y_2843_, v___y_2840_, v___y_2853_, v___y_2841_, lean_box(0));
if (lean_obj_tag(v___x_2878_) == 0)
{
lean_object* v_a_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2886_; 
v_a_2879_ = lean_ctor_get(v___x_2878_, 0);
v_isSharedCheck_2886_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2881_ = v___x_2878_;
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
else
{
lean_inc(v_a_2879_);
lean_dec(v___x_2878_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
lean_object* v___x_2884_; 
if (v_isShared_2882_ == 0)
{
lean_ctor_set_tag(v___x_2881_, 1);
v___x_2884_ = v___x_2881_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_a_2879_);
v___x_2884_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
v___y_2782_ = v___x_2877_;
v___y_2783_ = v___y_2839_;
v___y_2784_ = v___y_2841_;
v___y_2785_ = v___y_2840_;
v___y_2786_ = v___y_2844_;
v___y_2787_ = v___y_2845_;
v___y_2788_ = v___y_2843_;
v___y_2789_ = v___y_2846_;
v___y_2790_ = v___y_2847_;
v___y_2791_ = v___y_2848_;
v___y_2792_ = v___y_2849_;
v___y_2793_ = v___y_2850_;
v___y_2794_ = v___y_2851_;
v___y_2795_ = v___y_2852_;
v___y_2796_ = v___y_2853_;
v___y_2797_ = v_a_2856_;
v___y_2798_ = v___y_2854_;
v_a_2799_ = v___x_2884_;
goto v___jp_2781_;
}
}
}
else
{
lean_object* v_a_2887_; lean_object* v___x_2889_; uint8_t v_isShared_2890_; uint8_t v_isSharedCheck_2894_; 
v_a_2887_ = lean_ctor_get(v___x_2878_, 0);
v_isSharedCheck_2894_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2894_ == 0)
{
v___x_2889_ = v___x_2878_;
v_isShared_2890_ = v_isSharedCheck_2894_;
goto v_resetjp_2888_;
}
else
{
lean_inc(v_a_2887_);
lean_dec(v___x_2878_);
v___x_2889_ = lean_box(0);
v_isShared_2890_ = v_isSharedCheck_2894_;
goto v_resetjp_2888_;
}
v_resetjp_2888_:
{
lean_object* v___x_2892_; 
if (v_isShared_2890_ == 0)
{
lean_ctor_set_tag(v___x_2889_, 0);
v___x_2892_ = v___x_2889_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2893_; 
v_reuseFailAlloc_2893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2893_, 0, v_a_2887_);
v___x_2892_ = v_reuseFailAlloc_2893_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
v___y_2782_ = v___x_2877_;
v___y_2783_ = v___y_2839_;
v___y_2784_ = v___y_2841_;
v___y_2785_ = v___y_2840_;
v___y_2786_ = v___y_2844_;
v___y_2787_ = v___y_2845_;
v___y_2788_ = v___y_2843_;
v___y_2789_ = v___y_2846_;
v___y_2790_ = v___y_2847_;
v___y_2791_ = v___y_2848_;
v___y_2792_ = v___y_2849_;
v___y_2793_ = v___y_2850_;
v___y_2794_ = v___y_2851_;
v___y_2795_ = v___y_2852_;
v___y_2796_ = v___y_2853_;
v___y_2797_ = v_a_2856_;
v___y_2798_ = v___y_2854_;
v_a_2799_ = v___x_2892_;
goto v___jp_2781_;
}
}
}
}
}
v___jp_2895_:
{
lean_object* v___x_2904_; lean_object* v_options_2905_; lean_object* v_run_x27_2906_; lean_object* v_inheritedTraceOptions_2907_; uint8_t v_hasTrace_2908_; uint8_t v___x_2909_; 
v___x_2904_ = l_Lean_Meta_Tactic_BVDecide_Normalize_typeAnalysisPass;
v_options_2905_ = lean_ctor_get(v___y_2900_, 2);
v_run_x27_2906_ = lean_ctor_get(v___x_2904_, 1);
v_inheritedTraceOptions_2907_ = lean_ctor_get(v___y_2900_, 13);
v_hasTrace_2908_ = lean_ctor_get_uint8(v_options_2905_, sizeof(void*)*1);
v___x_2909_ = 1;
if (v_hasTrace_2908_ == 0)
{
lean_object* v___x_2910_; 
lean_inc_ref(v_run_x27_2906_);
lean_inc(v___y_2898_);
lean_inc_ref(v___y_2900_);
lean_inc(v___y_2897_);
lean_inc_ref(v___y_2899_);
lean_inc(v___y_2902_);
lean_inc_ref(v___y_2903_);
lean_inc(v___y_2896_);
lean_inc_ref(v___y_2901_);
v___x_2910_ = lean_apply_9(v_run_x27_2906_, v___y_2901_, v___y_2896_, v___y_2903_, v___y_2902_, v___y_2899_, v___y_2897_, v___y_2900_, v___y_2898_, lean_box(0));
v___y_2743_ = v___x_2909_;
v___y_2744_ = v___y_2898_;
v___y_2745_ = v___y_2897_;
v___y_2746_ = v___y_2896_;
v___y_2747_ = v___y_2900_;
v___y_2748_ = v___y_2899_;
v___y_2749_ = v___y_2901_;
v___y_2750_ = v___y_2902_;
v___y_2751_ = v___y_2903_;
v___y_2752_ = v___x_2910_;
goto v___jp_2742_;
}
else
{
lean_object* v___f_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; uint8_t v___x_2915_; 
v___f_2911_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___lam__7___closed__7);
v___x_2912_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__3));
v___x_2913_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg___closed__0));
v___x_2914_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4);
v___x_2915_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2907_, v_options_2905_, v___x_2914_);
if (v___x_2915_ == 0)
{
lean_object* v___x_2916_; uint8_t v___x_2917_; 
v___x_2916_ = l_Lean_trace_profiler;
v___x_2917_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__1(v_options_2905_, v___x_2916_);
if (v___x_2917_ == 0)
{
lean_object* v___x_2918_; 
lean_inc_ref(v_run_x27_2906_);
lean_inc(v___y_2898_);
lean_inc_ref(v___y_2900_);
lean_inc(v___y_2897_);
lean_inc_ref(v___y_2899_);
lean_inc(v___y_2902_);
lean_inc_ref(v___y_2903_);
lean_inc(v___y_2896_);
lean_inc_ref(v___y_2901_);
v___x_2918_ = lean_apply_9(v_run_x27_2906_, v___y_2901_, v___y_2896_, v___y_2903_, v___y_2902_, v___y_2899_, v___y_2897_, v___y_2900_, v___y_2898_, lean_box(0));
v___y_2743_ = v___x_2909_;
v___y_2744_ = v___y_2898_;
v___y_2745_ = v___y_2897_;
v___y_2746_ = v___y_2896_;
v___y_2747_ = v___y_2900_;
v___y_2748_ = v___y_2899_;
v___y_2749_ = v___y_2901_;
v___y_2750_ = v___y_2902_;
v___y_2751_ = v___y_2903_;
v___y_2752_ = v___x_2918_;
goto v___jp_2742_;
}
else
{
lean_inc_ref(v_run_x27_2906_);
v___y_2839_ = v___x_2913_;
v___y_2840_ = v___y_2897_;
v___y_2841_ = v___y_2898_;
v___y_2842_ = v_run_x27_2906_;
v___y_2843_ = v___y_2899_;
v___y_2844_ = v___x_2912_;
v___y_2845_ = v___f_2911_;
v___y_2846_ = v___y_2901_;
v___y_2847_ = v___y_2902_;
v___y_2848_ = v___x_2915_;
v___y_2849_ = v___y_2903_;
v___y_2850_ = v___x_2909_;
v___y_2851_ = v_options_2905_;
v___y_2852_ = v___y_2896_;
v___y_2853_ = v___y_2900_;
v___y_2854_ = v_hasTrace_2908_;
goto v___jp_2838_;
}
}
else
{
lean_inc_ref(v_run_x27_2906_);
v___y_2839_ = v___x_2913_;
v___y_2840_ = v___y_2897_;
v___y_2841_ = v___y_2898_;
v___y_2842_ = v_run_x27_2906_;
v___y_2843_ = v___y_2899_;
v___y_2844_ = v___x_2912_;
v___y_2845_ = v___f_2911_;
v___y_2846_ = v___y_2901_;
v___y_2847_ = v___y_2902_;
v___y_2848_ = v___x_2915_;
v___y_2849_ = v___y_2903_;
v___y_2850_ = v___x_2909_;
v___y_2851_ = v_options_2905_;
v___y_2852_ = v___y_2896_;
v___y_2853_ = v___y_2900_;
v___y_2854_ = v_hasTrace_2908_;
goto v___jp_2838_;
}
}
}
v___jp_2919_:
{
uint8_t v_structures_2928_; 
v_structures_2928_ = lean_ctor_get_uint8(v___y_2920_, sizeof(void*)*2 + 5);
if (v_structures_2928_ == 0)
{
uint8_t v_enums_2929_; 
v_enums_2929_ = lean_ctor_get_uint8(v___y_2920_, sizeof(void*)*2 + 7);
if (v_enums_2929_ == 0)
{
uint8_t v_fixedInt_2930_; 
v_fixedInt_2930_ = lean_ctor_get_uint8(v___y_2920_, sizeof(void*)*2 + 6);
v___y_2409_ = v___y_2920_;
v_fixedInt_2410_ = v_fixedInt_2930_;
v___y_2411_ = v___y_2920_;
v___y_2412_ = v___y_2921_;
v___y_2413_ = v___y_2922_;
v___y_2414_ = v___y_2923_;
v___y_2415_ = v___y_2924_;
v___y_2416_ = v___y_2925_;
v___y_2417_ = v___y_2926_;
v___y_2418_ = v___y_2927_;
goto v___jp_2408_;
}
else
{
v___y_2896_ = v___y_2921_;
v___y_2897_ = v___y_2925_;
v___y_2898_ = v___y_2927_;
v___y_2899_ = v___y_2924_;
v___y_2900_ = v___y_2926_;
v___y_2901_ = v___y_2920_;
v___y_2902_ = v___y_2923_;
v___y_2903_ = v___y_2922_;
goto v___jp_2895_;
}
}
else
{
v___y_2896_ = v___y_2921_;
v___y_2897_ = v___y_2925_;
v___y_2898_ = v___y_2927_;
v___y_2899_ = v___y_2924_;
v___y_2900_ = v___y_2926_;
v___y_2901_ = v___y_2920_;
v___y_2902_ = v___y_2923_;
v___y_2903_ = v___y_2922_;
goto v___jp_2895_;
}
}
v___jp_2935_:
{
lean_object* v___x_2946_; lean_object* v___x_2947_; 
v___x_2946_ = lean_st_ref_set(v___y_2938_, v_snd_2945_);
v___x_2947_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal(v___y_2942_, v___y_2938_, v___y_2939_, v___y_2944_, v___y_2943_, v___y_2940_, v___y_2937_, v___y_2936_);
if (lean_obj_tag(v___x_2947_) == 0)
{
lean_object* v_options_2948_; uint8_t v_hasTrace_2949_; 
lean_dec_ref_known(v___x_2947_, 1);
v_options_2948_ = lean_ctor_get(v___y_2937_, 2);
v_hasTrace_2949_ = lean_ctor_get_uint8(v_options_2948_, sizeof(void*)*1);
if (v_hasTrace_2949_ == 0)
{
lean_dec(v___y_2941_);
v___y_2920_ = v___y_2942_;
v___y_2921_ = v___y_2938_;
v___y_2922_ = v___y_2939_;
v___y_2923_ = v___y_2944_;
v___y_2924_ = v___y_2943_;
v___y_2925_ = v___y_2940_;
v___y_2926_ = v___y_2937_;
v___y_2927_ = v___y_2936_;
goto v___jp_2919_;
}
else
{
lean_object* v_inheritedTraceOptions_2950_; lean_object* v___x_2951_; uint8_t v___x_2952_; 
v_inheritedTraceOptions_2950_ = lean_ctor_get(v___y_2937_, 13);
v___x_2951_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__4);
v___x_2952_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2950_, v_options_2948_, v___x_2951_);
if (v___x_2952_ == 0)
{
lean_dec(v___y_2941_);
v___y_2920_ = v___y_2942_;
v___y_2921_ = v___y_2938_;
v___y_2922_ = v___y_2939_;
v___y_2923_ = v___y_2944_;
v___y_2924_ = v___y_2943_;
v___y_2925_ = v___y_2940_;
v___y_2926_ = v___y_2937_;
v___y_2927_ = v___y_2936_;
goto v___jp_2919_;
}
else
{
lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; 
v___x_2953_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___closed__6);
v___x_2954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2954_, 0, v___y_2941_);
v___x_2955_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2955_, 0, v___x_2953_);
lean_ctor_set(v___x_2955_, 1, v___x_2954_);
v___x_2956_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg(v_cls_2934_, v___x_2955_, v___y_2943_, v___y_2940_, v___y_2937_, v___y_2936_);
if (lean_obj_tag(v___x_2956_) == 0)
{
lean_dec_ref_known(v___x_2956_, 1);
v___y_2920_ = v___y_2942_;
v___y_2921_ = v___y_2938_;
v___y_2922_ = v___y_2939_;
v___y_2923_ = v___y_2944_;
v___y_2924_ = v___y_2943_;
v___y_2925_ = v___y_2940_;
v___y_2926_ = v___y_2937_;
v___y_2927_ = v___y_2936_;
goto v___jp_2919_;
}
else
{
lean_object* v_a_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2964_; 
v_a_2957_ = lean_ctor_get(v___x_2956_, 0);
v_isSharedCheck_2964_ = !lean_is_exclusive(v___x_2956_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2959_ = v___x_2956_;
v_isShared_2960_ = v_isSharedCheck_2964_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_a_2957_);
lean_dec(v___x_2956_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_2964_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2962_; 
if (v_isShared_2960_ == 0)
{
v___x_2962_ = v___x_2959_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v_a_2957_);
v___x_2962_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
return v___x_2962_;
}
}
}
}
}
}
else
{
lean_object* v_a_2965_; lean_object* v___x_2967_; uint8_t v_isShared_2968_; uint8_t v_isSharedCheck_2972_; 
lean_dec(v___y_2941_);
v_a_2965_ = lean_ctor_get(v___x_2947_, 0);
v_isSharedCheck_2972_ = !lean_is_exclusive(v___x_2947_);
if (v_isSharedCheck_2972_ == 0)
{
v___x_2967_ = v___x_2947_;
v_isShared_2968_ = v_isSharedCheck_2972_;
goto v_resetjp_2966_;
}
else
{
lean_inc(v_a_2965_);
lean_dec(v___x_2947_);
v___x_2967_ = lean_box(0);
v_isShared_2968_ = v_isSharedCheck_2972_;
goto v_resetjp_2966_;
}
v_resetjp_2966_:
{
lean_object* v___x_2970_; 
if (v_isShared_2968_ == 0)
{
v___x_2970_ = v___x_2967_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v_a_2965_);
v___x_2970_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
return v___x_2970_;
}
}
}
}
v___jp_2973_:
{
lean_object* v___x_2983_; lean_object* v___x_2984_; 
v___x_2983_ = lean_box(0);
v___x_2984_ = l_Lean_MVarId_falseOrByContra(v_g_2974_, v___x_2983_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_);
if (lean_obj_tag(v___x_2984_) == 0)
{
lean_object* v_a_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_3014_; 
v_a_2985_ = lean_ctor_get(v___x_2984_, 0);
v_isSharedCheck_3014_ = !lean_is_exclusive(v___x_2984_);
if (v_isSharedCheck_3014_ == 0)
{
v___x_2987_ = v___x_2984_;
v_isShared_2988_ = v_isSharedCheck_3014_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_a_2985_);
lean_dec(v___x_2984_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_3014_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
if (lean_obj_tag(v_a_2985_) == 1)
{
lean_object* v_val_2989_; lean_object* v___x_2990_; lean_object* v_rewriteCache_2991_; lean_object* v_acNfCache_2992_; lean_object* v_typeAnalysis_2993_; lean_object* v_goal_2994_; lean_object* v_hypotheses_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3008_; 
lean_del_object(v___x_2987_);
v_val_2989_ = lean_ctor_get(v_a_2985_, 0);
lean_inc(v_val_2989_);
lean_dec_ref_known(v_a_2985_, 1);
v___x_2990_ = lean_st_ref_take(v___y_2976_);
v_rewriteCache_2991_ = lean_ctor_get(v___x_2990_, 0);
v_acNfCache_2992_ = lean_ctor_get(v___x_2990_, 1);
v_typeAnalysis_2993_ = lean_ctor_get(v___x_2990_, 2);
v_goal_2994_ = lean_ctor_get(v___x_2990_, 3);
v_hypotheses_2995_ = lean_ctor_get(v___x_2990_, 4);
v_isSharedCheck_3008_ = !lean_is_exclusive(v___x_2990_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_2997_ = v___x_2990_;
v_isShared_2998_ = v_isSharedCheck_3008_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_hypotheses_2995_);
lean_inc(v_goal_2994_);
lean_inc(v_typeAnalysis_2993_);
lean_inc(v_acNfCache_2992_);
lean_inc(v_rewriteCache_2991_);
lean_dec(v___x_2990_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3008_;
goto v_resetjp_2996_;
}
v_resetjp_2996_:
{
uint8_t v___x_2999_; 
v___x_2999_ = l_Lean_instBEqMVarId_beq(v_val_2989_, v_goal_2994_);
lean_dec(v_goal_2994_);
if (v___x_2999_ == 0)
{
uint8_t v___x_3000_; lean_object* v___x_3002_; 
v___x_3000_ = 1;
lean_inc(v_val_2989_);
if (v_isShared_2998_ == 0)
{
lean_ctor_set(v___x_2997_, 3, v_val_2989_);
v___x_3002_ = v___x_2997_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3003_; 
v_reuseFailAlloc_3003_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_3003_, 0, v_rewriteCache_2991_);
lean_ctor_set(v_reuseFailAlloc_3003_, 1, v_acNfCache_2992_);
lean_ctor_set(v_reuseFailAlloc_3003_, 2, v_typeAnalysis_2993_);
lean_ctor_set(v_reuseFailAlloc_3003_, 3, v_val_2989_);
lean_ctor_set(v_reuseFailAlloc_3003_, 4, v_hypotheses_2995_);
v___x_3002_ = v_reuseFailAlloc_3003_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
lean_ctor_set_uint8(v___x_3002_, sizeof(void*)*5, v___x_3000_);
v___y_2936_ = v___y_2982_;
v___y_2937_ = v___y_2981_;
v___y_2938_ = v___y_2976_;
v___y_2939_ = v___y_2977_;
v___y_2940_ = v___y_2980_;
v___y_2941_ = v_val_2989_;
v___y_2942_ = v___y_2975_;
v___y_2943_ = v___y_2979_;
v___y_2944_ = v___y_2978_;
v_snd_2945_ = v___x_3002_;
goto v___jp_2935_;
}
}
else
{
uint8_t v___x_3004_; lean_object* v___x_3006_; 
v___x_3004_ = 0;
lean_inc(v_val_2989_);
if (v_isShared_2998_ == 0)
{
lean_ctor_set(v___x_2997_, 3, v_val_2989_);
v___x_3006_ = v___x_2997_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_rewriteCache_2991_);
lean_ctor_set(v_reuseFailAlloc_3007_, 1, v_acNfCache_2992_);
lean_ctor_set(v_reuseFailAlloc_3007_, 2, v_typeAnalysis_2993_);
lean_ctor_set(v_reuseFailAlloc_3007_, 3, v_val_2989_);
lean_ctor_set(v_reuseFailAlloc_3007_, 4, v_hypotheses_2995_);
v___x_3006_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
lean_ctor_set_uint8(v___x_3006_, sizeof(void*)*5, v___x_3004_);
v___y_2936_ = v___y_2982_;
v___y_2937_ = v___y_2981_;
v___y_2938_ = v___y_2976_;
v___y_2939_ = v___y_2977_;
v___y_2940_ = v___y_2980_;
v___y_2941_ = v_val_2989_;
v___y_2942_ = v___y_2975_;
v___y_2943_ = v___y_2979_;
v___y_2944_ = v___y_2978_;
v_snd_2945_ = v___x_3006_;
goto v___jp_2935_;
}
}
}
}
else
{
uint8_t v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3012_; 
lean_dec(v_a_2985_);
v___x_3009_ = 1;
v___x_3010_ = lean_box(v___x_3009_);
if (v_isShared_2988_ == 0)
{
lean_ctor_set(v___x_2987_, 0, v___x_3010_);
v___x_3012_ = v___x_2987_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v___x_3010_);
v___x_3012_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
return v___x_3012_;
}
}
}
}
else
{
lean_object* v_a_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3022_; 
v_a_3015_ = lean_ctor_get(v___x_2984_, 0);
v_isSharedCheck_3022_ = !lean_is_exclusive(v___x_2984_);
if (v_isSharedCheck_3022_ == 0)
{
v___x_3017_ = v___x_2984_;
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_a_3015_);
lean_dec(v___x_2984_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v___x_3020_; 
if (v_isShared_3018_ == 0)
{
v___x_3020_ = v___x_3017_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v_a_3015_);
v___x_3020_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
return v___x_3020_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize___boxed(lean_object* v_a_3207_, lean_object* v_a_3208_, lean_object* v_a_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_, lean_object* v_a_3212_, lean_object* v_a_3213_, lean_object* v_a_3214_, lean_object* v_a_3215_){
_start:
{
lean_object* v_res_3216_; 
v_res_3216_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize(v_a_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_, v_a_3214_);
lean_dec(v_a_3214_);
lean_dec_ref(v_a_3213_);
lean_dec(v_a_3212_);
lean_dec_ref(v_a_3211_);
lean_dec(v_a_3210_);
lean_dec_ref(v_a_3209_);
lean_dec(v_a_3208_);
lean_dec_ref(v_a_3207_);
return v_res_3216_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__3(lean_object* v_00_u03b1_3217_, lean_object* v_x_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_){
_start:
{
lean_object* v___x_3228_; 
v___x_3228_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__3___redArg(v_x_3218_);
return v___x_3228_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__3___boxed(lean_object* v_00_u03b1_3229_, lean_object* v_x_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_){
_start:
{
lean_object* v_res_3240_; 
v_res_3240_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__3(v_00_u03b1_3229_, v_x_3230_, v___y_3231_, v___y_3232_, v___y_3233_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_);
lean_dec(v___y_3238_);
lean_dec_ref(v___y_3237_);
lean_dec(v___y_3236_);
lean_dec_ref(v___y_3235_);
lean_dec(v___y_3234_);
lean_dec_ref(v___y_3233_);
lean_dec(v___y_3232_);
lean_dec_ref(v___y_3231_);
return v_res_3240_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3(lean_object* v_cls_3241_, lean_object* v_msg_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_){
_start:
{
lean_object* v___x_3252_; 
v___x_3252_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___redArg(v_cls_3241_, v_msg_3242_, v___y_3247_, v___y_3248_, v___y_3249_, v___y_3250_);
return v___x_3252_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3___boxed(lean_object* v_cls_3253_, lean_object* v_msg_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_){
_start:
{
lean_object* v_res_3264_; 
v_res_3264_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__3(v_cls_3253_, v_msg_3254_, v___y_3255_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_, v___y_3262_);
lean_dec(v___y_3262_);
lean_dec_ref(v___y_3261_);
lean_dec(v___y_3260_);
lean_dec_ref(v___y_3259_);
lean_dec(v___y_3258_);
lean_dec_ref(v___y_3257_);
lean_dec(v___y_3256_);
lean_dec_ref(v___y_3255_);
return v_res_3264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2(lean_object* v_oldTraces_3265_, lean_object* v_data_3266_, lean_object* v_ref_3267_, lean_object* v_msg_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_){
_start:
{
lean_object* v___x_3278_; 
v___x_3278_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2___redArg(v_oldTraces_3265_, v_data_3266_, v_ref_3267_, v_msg_3268_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_);
return v___x_3278_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2___boxed(lean_object* v_oldTraces_3279_, lean_object* v_data_3280_, lean_object* v_ref_3281_, lean_object* v_msg_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_){
_start:
{
lean_object* v_res_3292_; 
v_res_3292_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvNormalize_spec__2_spec__2(v_oldTraces_3279_, v_data_3280_, v_ref_3281_, v_msg_3282_, v___y_3283_, v___y_3284_, v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_, v___y_3290_);
lean_dec(v___y_3290_);
lean_dec_ref(v___y_3289_);
lean_dec(v___y_3288_);
lean_dec_ref(v___y_3287_);
lean_dec(v___y_3286_);
lean_dec_ref(v___y_3285_);
lean_dec(v___y_3284_);
lean_dec_ref(v___y_3283_);
return v_res_3292_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_FalseOrByContra(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_AndFlatten(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_EmbeddedConstraint(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_AC(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Structures(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Enums(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_TypeAnalysis(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_FalseOrByContra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_AndFlatten(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_EmbeddedConstraint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_AC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Structures(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Enums(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_TypeAnalysis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_FalseOrByContra(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_AndFlatten(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_EmbeddedConstraint(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_AC(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Structures(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Enums(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_TypeAnalysis(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_FalseOrByContra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_AndFlatten(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_EmbeddedConstraint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_AC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Structures(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_IntToBitVec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Enums(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_TypeAnalysis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Normalize(builtin);
}
#ifdef __cplusplus
}
#endif
