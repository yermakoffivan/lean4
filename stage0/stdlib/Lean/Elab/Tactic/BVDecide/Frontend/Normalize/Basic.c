// Lean compiler output
// Module: Lean.Elab.Tactic.BVDecide.Frontend.Normalize.Basic
// Imports: public import Lean.Elab.Tactic.BVDecide.Frontend.Attr public import Lean.Meta.Sym.SymM import Lean.Meta.Sym.Util
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
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_TraceResult_toEmoji(uint8_t);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_instBEqFVarId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instHashableFVarId_hash___boxed(lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_preprocessMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getPropHyps(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadExceptOfEIO(lean_object*);
lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(lean_object*);
lean_object* l_Lean_instMonadAlwaysExceptReaderT___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instExceptToTraceResultOption___lam__0___boxed(lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KVMap_instValueBool;
lean_object* l_Lean_Option_get___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_ConfigT_getConfig___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_ConfigT_getConfig___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_ConfigT_getConfig(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_ConfigT_getConfig___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_simpleEnum_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_simpleEnum_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_enumWithDefault_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_enumWithDefault_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_getTypeAnalysis___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_getTypeAnalysis___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_getTypeAnalysis(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_getTypeAnalysis___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_modifyTypeAnalysis___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_modifyTypeAnalysis___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_modifyTypeAnalysis(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_modifyTypeAnalysis___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingStructure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingStructure___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingEnum___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingEnum___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingEnum(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingEnum___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingMatcher___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingMatcher___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markUninterestingConst___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markUninterestingConst___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markUninterestingConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markUninterestingConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqFVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableFVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkAcNf___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkAcNf___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkAcNf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkAcNf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_rewriteFinished___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_rewriteFinished___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_rewriteFinished(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_rewriteFinished___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_acNfFinished___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_acNfFinished___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_acNfFinished(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_acNfFinished___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_getRelevantFVars___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_getRelevantFVars___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_getRelevantFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_getRelevantFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_modifyRelevantFVars___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_modifyRelevantFVars___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_modifyRelevantFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_modifyRelevantFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___redArg___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Running pass: "};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " on\n"};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__1;
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__6_value;
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__9;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__10;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__11;
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__12_value;
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__13_value;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__14;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__15;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__16;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__17;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__18;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__19;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__20;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__21;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__22;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__23;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__24;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__25;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__26;
static const lean_closure_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instExceptToTraceResultOption___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__27 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__27_value;
static const lean_string_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__28 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__28_value;
static const lean_string_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__29 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__29_value;
static const lean_string_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__30 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__30_value;
static const lean_ctor_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__28_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__31_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__29_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__31_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__30_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__31 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__31_value;
static const lean_string_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__32 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__32_value;
static const lean_string_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__33 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__33_value;
static const lean_ctor_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__33_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__34 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__34_value;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__36;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__7___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__2;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__3 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__3_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__4;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___boxed(lean_object**);
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__1_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__2_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Fixpoint iteration solved the goal"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__3_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__4;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bv_decide"};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Rerunning pipeline on:\n"};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__2;
static const lean_string_object l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Pipeline reached a fixpoint"};
static const lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_ConfigT_getConfig___redArg(lean_object* v_inst_1_, lean_object* v_a_2_){
_start:
{
lean_object* v_toApplicative_3_; lean_object* v_toPure_4_; lean_object* v___x_5_; 
v_toApplicative_3_ = lean_ctor_get(v_inst_1_, 0);
lean_inc_ref(v_toApplicative_3_);
lean_dec_ref(v_inst_1_);
v_toPure_4_ = lean_ctor_get(v_toApplicative_3_, 1);
lean_inc(v_toPure_4_);
lean_dec_ref(v_toApplicative_3_);
lean_inc_ref(v_a_2_);
v___x_5_ = lean_apply_2(v_toPure_4_, lean_box(0), v_a_2_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_ConfigT_getConfig___redArg___boxed(lean_object* v_inst_6_, lean_object* v_a_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_ConfigT_getConfig___redArg(v_inst_6_, v_a_7_);
lean_dec_ref(v_a_7_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_ConfigT_getConfig(lean_object* v_m_9_, lean_object* v_inst_10_, lean_object* v_a_11_){
_start:
{
lean_object* v_toApplicative_12_; lean_object* v_toPure_13_; lean_object* v___x_14_; 
v_toApplicative_12_ = lean_ctor_get(v_inst_10_, 0);
lean_inc_ref(v_toApplicative_12_);
lean_dec_ref(v_inst_10_);
v_toPure_13_ = lean_ctor_get(v_toApplicative_12_, 1);
lean_inc(v_toPure_13_);
lean_dec_ref(v_toApplicative_12_);
lean_inc_ref(v_a_11_);
v___x_14_ = lean_apply_2(v_toPure_13_, lean_box(0), v_a_11_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_ConfigT_getConfig___boxed(lean_object* v_m_15_, lean_object* v_inst_16_, lean_object* v_a_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_ConfigT_getConfig(v_m_15_, v_inst_16_, v_a_17_);
lean_dec_ref(v_a_17_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_ctorIdx(lean_object* v_x_19_){
_start:
{
if (lean_obj_tag(v_x_19_) == 0)
{
lean_object* v___x_20_; 
v___x_20_ = lean_unsigned_to_nat(0u);
return v___x_20_;
}
else
{
lean_object* v___x_21_; 
v___x_21_ = lean_unsigned_to_nat(1u);
return v___x_21_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_ctorIdx___boxed(lean_object* v_x_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_ctorIdx(v_x_22_);
lean_dec_ref(v_x_22_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_ctorElim___redArg(lean_object* v_t_24_, lean_object* v_k_25_){
_start:
{
lean_object* v_info_26_; lean_object* v_ctors_27_; lean_object* v___x_28_; 
v_info_26_ = lean_ctor_get(v_t_24_, 0);
lean_inc_ref(v_info_26_);
v_ctors_27_ = lean_ctor_get(v_t_24_, 1);
lean_inc_ref(v_ctors_27_);
lean_dec_ref(v_t_24_);
v___x_28_ = lean_apply_2(v_k_25_, v_info_26_, v_ctors_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_ctorElim(lean_object* v_motive_29_, lean_object* v_ctorIdx_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_k_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_ctorElim___redArg(v_t_31_, v_k_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_ctorElim___boxed(lean_object* v_motive_35_, lean_object* v_ctorIdx_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_k_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_ctorElim(v_motive_35_, v_ctorIdx_36_, v_t_37_, v_h_38_, v_k_39_);
lean_dec(v_ctorIdx_36_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_simpleEnum_elim___redArg(lean_object* v_t_41_, lean_object* v_simpleEnum_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_ctorElim___redArg(v_t_41_, v_simpleEnum_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_simpleEnum_elim(lean_object* v_motive_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_simpleEnum_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_ctorElim___redArg(v_t_45_, v_simpleEnum_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_enumWithDefault_elim___redArg(lean_object* v_t_49_, lean_object* v_enumWithDefault_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_ctorElim___redArg(v_t_49_, v_enumWithDefault_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_enumWithDefault_elim(lean_object* v_motive_52_, lean_object* v_t_53_, lean_object* v_h_54_, lean_object* v_enumWithDefault_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_MatchKind_ctorElim___redArg(v_t_53_, v_enumWithDefault_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_getTypeAnalysis___redArg(lean_object* v_a_57_){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_st_ref_get(v_a_57_);
v___x_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_getTypeAnalysis___redArg___boxed(lean_object* v_a_61_, lean_object* v_a_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_getTypeAnalysis___redArg(v_a_61_);
lean_dec(v_a_61_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_getTypeAnalysis(lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_st_ref_get(v_a_65_);
v___x_72_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_getTypeAnalysis___boxed(lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_getTypeAnalysis(v_a_73_, v_a_74_, v_a_75_, v_a_76_, v_a_77_, v_a_78_);
lean_dec(v_a_78_);
lean_dec_ref(v_a_77_);
lean_dec(v_a_76_);
lean_dec_ref(v_a_75_);
lean_dec(v_a_74_);
lean_dec_ref(v_a_73_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_modifyTypeAnalysis___redArg(lean_object* v_f_81_, lean_object* v_a_82_){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_84_ = lean_st_ref_take(v_a_82_);
v___x_85_ = lean_apply_1(v_f_81_, v___x_84_);
v___x_86_ = lean_st_ref_set(v_a_82_, v___x_85_);
v___x_87_ = lean_box(0);
v___x_88_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_modifyTypeAnalysis___redArg___boxed(lean_object* v_f_89_, lean_object* v_a_90_, lean_object* v_a_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_modifyTypeAnalysis___redArg(v_f_89_, v_a_90_);
lean_dec(v_a_90_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_modifyTypeAnalysis(lean_object* v_f_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_101_ = lean_st_ref_take(v_a_95_);
v___x_102_ = lean_apply_1(v_f_93_, v___x_101_);
v___x_103_ = lean_st_ref_set(v_a_95_, v___x_102_);
v___x_104_ = lean_box(0);
v___x_105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_modifyTypeAnalysis___boxed(lean_object* v_f_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_modifyTypeAnalysis(v_f_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_);
lean_dec(v_a_112_);
lean_dec_ref(v_a_111_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
lean_dec(v_a_108_);
lean_dec_ref(v_a_107_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg(lean_object* v_n_120_, lean_object* v_a_121_){
_start:
{
lean_object* v___x_123_; lean_object* v_interestingStructures_124_; lean_object* v_uninteresting_125_; lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_123_ = lean_st_ref_get(v_a_121_);
v_interestingStructures_124_ = lean_ctor_get(v___x_123_, 0);
lean_inc_ref(v_interestingStructures_124_);
v_uninteresting_125_ = lean_ctor_get(v___x_123_, 3);
lean_inc_ref(v_uninteresting_125_);
lean_dec(v___x_123_);
v___x_126_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__0));
v___x_127_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__1));
lean_inc(v_n_120_);
v___x_128_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_126_, v___x_127_, v_uninteresting_125_, v_n_120_);
lean_dec_ref(v_uninteresting_125_);
if (v___x_128_ == 0)
{
uint8_t v___x_129_; 
v___x_129_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_126_, v___x_127_, v_interestingStructures_124_, v_n_120_);
lean_dec_ref(v_interestingStructures_124_);
if (v___x_129_ == 0)
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = lean_box(0);
v___x_131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_131_, 0, v___x_130_);
return v___x_131_;
}
else
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_132_ = lean_box(v___x_129_);
v___x_133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
v___x_134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
return v___x_134_;
}
}
else
{
lean_object* v___x_135_; lean_object* v___x_136_; 
lean_dec_ref(v_interestingStructures_124_);
lean_dec(v_n_120_);
v___x_135_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__2));
v___x_136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
return v___x_136_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___boxed(lean_object* v_n_137_, lean_object* v_a_138_, lean_object* v_a_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg(v_n_137_, v_a_138_);
lean_dec(v_a_138_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure(lean_object* v_n_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v___x_149_; lean_object* v_interestingStructures_150_; lean_object* v_uninteresting_151_; lean_object* v___x_152_; lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_149_ = lean_st_ref_get(v_a_143_);
v_interestingStructures_150_ = lean_ctor_get(v___x_149_, 0);
lean_inc_ref(v_interestingStructures_150_);
v_uninteresting_151_ = lean_ctor_get(v___x_149_, 3);
lean_inc_ref(v_uninteresting_151_);
lean_dec(v___x_149_);
v___x_152_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__0));
v___x_153_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__1));
lean_inc(v_n_141_);
v___x_154_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_152_, v___x_153_, v_uninteresting_151_, v_n_141_);
lean_dec_ref(v_uninteresting_151_);
if (v___x_154_ == 0)
{
uint8_t v___x_155_; 
v___x_155_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_152_, v___x_153_, v_interestingStructures_150_, v_n_141_);
lean_dec_ref(v_interestingStructures_150_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lean_box(0);
v___x_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
return v___x_157_;
}
else
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_158_ = lean_box(v___x_155_);
v___x_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_159_, 0, v___x_158_);
v___x_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
return v___x_160_;
}
}
else
{
lean_object* v___x_161_; lean_object* v___x_162_; 
lean_dec_ref(v_interestingStructures_150_);
lean_dec(v_n_141_);
v___x_161_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__2));
v___x_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
return v___x_162_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___boxed(lean_object* v_n_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure(v_n_163_, v_a_164_, v_a_165_, v_a_166_, v_a_167_, v_a_168_, v_a_169_);
lean_dec(v_a_169_);
lean_dec_ref(v_a_168_);
lean_dec(v_a_167_);
lean_dec_ref(v_a_166_);
lean_dec(v_a_165_);
lean_dec_ref(v_a_164_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingStructure___redArg(lean_object* v_n_172_, lean_object* v_a_173_){
_start:
{
lean_object* v___x_175_; lean_object* v_interestingStructures_176_; lean_object* v_interestingEnums_177_; lean_object* v_interestingMatchers_178_; lean_object* v_uninteresting_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_192_; 
v___x_175_ = lean_st_ref_take(v_a_173_);
v_interestingStructures_176_ = lean_ctor_get(v___x_175_, 0);
v_interestingEnums_177_ = lean_ctor_get(v___x_175_, 1);
v_interestingMatchers_178_ = lean_ctor_get(v___x_175_, 2);
v_uninteresting_179_ = lean_ctor_get(v___x_175_, 3);
v_isSharedCheck_192_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_192_ == 0)
{
v___x_181_ = v___x_175_;
v_isShared_182_ = v_isSharedCheck_192_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_uninteresting_179_);
lean_inc(v_interestingMatchers_178_);
lean_inc(v_interestingEnums_177_);
lean_inc(v_interestingStructures_176_);
lean_dec(v___x_175_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_192_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_188_; 
v___x_183_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__0));
v___x_184_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__1));
v___x_185_ = lean_box(0);
v___x_186_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_183_, v___x_184_, v_interestingStructures_176_, v_n_172_, v___x_185_);
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 0, v___x_186_);
v___x_188_ = v___x_181_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v___x_186_);
lean_ctor_set(v_reuseFailAlloc_191_, 1, v_interestingEnums_177_);
lean_ctor_set(v_reuseFailAlloc_191_, 2, v_interestingMatchers_178_);
lean_ctor_set(v_reuseFailAlloc_191_, 3, v_uninteresting_179_);
v___x_188_ = v_reuseFailAlloc_191_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lean_st_ref_set(v_a_173_, v___x_188_);
v___x_190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_190_, 0, v___x_185_);
return v___x_190_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingStructure___redArg___boxed(lean_object* v_n_193_, lean_object* v_a_194_, lean_object* v_a_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingStructure___redArg(v_n_193_, v_a_194_);
lean_dec(v_a_194_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingStructure(lean_object* v_n_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_){
_start:
{
lean_object* v___x_205_; lean_object* v_interestingStructures_206_; lean_object* v_interestingEnums_207_; lean_object* v_interestingMatchers_208_; lean_object* v_uninteresting_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_222_; 
v___x_205_ = lean_st_ref_take(v_a_199_);
v_interestingStructures_206_ = lean_ctor_get(v___x_205_, 0);
v_interestingEnums_207_ = lean_ctor_get(v___x_205_, 1);
v_interestingMatchers_208_ = lean_ctor_get(v___x_205_, 2);
v_uninteresting_209_ = lean_ctor_get(v___x_205_, 3);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_222_ == 0)
{
v___x_211_ = v___x_205_;
v_isShared_212_ = v_isSharedCheck_222_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_uninteresting_209_);
lean_inc(v_interestingMatchers_208_);
lean_inc(v_interestingEnums_207_);
lean_inc(v_interestingStructures_206_);
lean_dec(v___x_205_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_222_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_218_; 
v___x_213_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__0));
v___x_214_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__1));
v___x_215_ = lean_box(0);
v___x_216_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_213_, v___x_214_, v_interestingStructures_206_, v_n_197_, v___x_215_);
if (v_isShared_212_ == 0)
{
lean_ctor_set(v___x_211_, 0, v___x_216_);
v___x_218_ = v___x_211_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v___x_216_);
lean_ctor_set(v_reuseFailAlloc_221_, 1, v_interestingEnums_207_);
lean_ctor_set(v_reuseFailAlloc_221_, 2, v_interestingMatchers_208_);
lean_ctor_set(v_reuseFailAlloc_221_, 3, v_uninteresting_209_);
v___x_218_ = v_reuseFailAlloc_221_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = lean_st_ref_set(v_a_199_, v___x_218_);
v___x_220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_220_, 0, v___x_215_);
return v___x_220_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingStructure___boxed(lean_object* v_n_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingStructure(v_n_223_, v_a_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
lean_dec(v_a_229_);
lean_dec_ref(v_a_228_);
lean_dec(v_a_227_);
lean_dec_ref(v_a_226_);
lean_dec(v_a_225_);
lean_dec_ref(v_a_224_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingEnum___redArg(lean_object* v_n_232_, lean_object* v_a_233_){
_start:
{
lean_object* v___x_235_; lean_object* v_interestingStructures_236_; lean_object* v_interestingEnums_237_; lean_object* v_interestingMatchers_238_; lean_object* v_uninteresting_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_252_; 
v___x_235_ = lean_st_ref_take(v_a_233_);
v_interestingStructures_236_ = lean_ctor_get(v___x_235_, 0);
v_interestingEnums_237_ = lean_ctor_get(v___x_235_, 1);
v_interestingMatchers_238_ = lean_ctor_get(v___x_235_, 2);
v_uninteresting_239_ = lean_ctor_get(v___x_235_, 3);
v_isSharedCheck_252_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_252_ == 0)
{
v___x_241_ = v___x_235_;
v_isShared_242_ = v_isSharedCheck_252_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_uninteresting_239_);
lean_inc(v_interestingMatchers_238_);
lean_inc(v_interestingEnums_237_);
lean_inc(v_interestingStructures_236_);
lean_dec(v___x_235_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_252_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_248_; 
v___x_243_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__0));
v___x_244_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__1));
v___x_245_ = lean_box(0);
v___x_246_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_243_, v___x_244_, v_interestingEnums_237_, v_n_232_, v___x_245_);
if (v_isShared_242_ == 0)
{
lean_ctor_set(v___x_241_, 1, v___x_246_);
v___x_248_ = v___x_241_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v_interestingStructures_236_);
lean_ctor_set(v_reuseFailAlloc_251_, 1, v___x_246_);
lean_ctor_set(v_reuseFailAlloc_251_, 2, v_interestingMatchers_238_);
lean_ctor_set(v_reuseFailAlloc_251_, 3, v_uninteresting_239_);
v___x_248_ = v_reuseFailAlloc_251_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_249_ = lean_st_ref_set(v_a_233_, v___x_248_);
v___x_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_250_, 0, v___x_245_);
return v___x_250_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingEnum___redArg___boxed(lean_object* v_n_253_, lean_object* v_a_254_, lean_object* v_a_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingEnum___redArg(v_n_253_, v_a_254_);
lean_dec(v_a_254_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingEnum(lean_object* v_n_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_){
_start:
{
lean_object* v___x_265_; lean_object* v_interestingStructures_266_; lean_object* v_interestingEnums_267_; lean_object* v_interestingMatchers_268_; lean_object* v_uninteresting_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_282_; 
v___x_265_ = lean_st_ref_take(v_a_259_);
v_interestingStructures_266_ = lean_ctor_get(v___x_265_, 0);
v_interestingEnums_267_ = lean_ctor_get(v___x_265_, 1);
v_interestingMatchers_268_ = lean_ctor_get(v___x_265_, 2);
v_uninteresting_269_ = lean_ctor_get(v___x_265_, 3);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_265_);
if (v_isSharedCheck_282_ == 0)
{
v___x_271_ = v___x_265_;
v_isShared_272_ = v_isSharedCheck_282_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_uninteresting_269_);
lean_inc(v_interestingMatchers_268_);
lean_inc(v_interestingEnums_267_);
lean_inc(v_interestingStructures_266_);
lean_dec(v___x_265_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_282_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_278_; 
v___x_273_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__0));
v___x_274_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__1));
v___x_275_ = lean_box(0);
v___x_276_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_273_, v___x_274_, v_interestingEnums_267_, v_n_257_, v___x_275_);
if (v_isShared_272_ == 0)
{
lean_ctor_set(v___x_271_, 1, v___x_276_);
v___x_278_ = v___x_271_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_interestingStructures_266_);
lean_ctor_set(v_reuseFailAlloc_281_, 1, v___x_276_);
lean_ctor_set(v_reuseFailAlloc_281_, 2, v_interestingMatchers_268_);
lean_ctor_set(v_reuseFailAlloc_281_, 3, v_uninteresting_269_);
v___x_278_ = v_reuseFailAlloc_281_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_279_ = lean_st_ref_set(v_a_259_, v___x_278_);
v___x_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_280_, 0, v___x_275_);
return v___x_280_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingEnum___boxed(lean_object* v_n_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingEnum(v_n_283_, v_a_284_, v_a_285_, v_a_286_, v_a_287_, v_a_288_, v_a_289_);
lean_dec(v_a_289_);
lean_dec_ref(v_a_288_);
lean_dec(v_a_287_);
lean_dec_ref(v_a_286_);
lean_dec(v_a_285_);
lean_dec_ref(v_a_284_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingMatcher___redArg(lean_object* v_n_292_, lean_object* v_k_293_, lean_object* v_a_294_){
_start:
{
lean_object* v___x_296_; lean_object* v_interestingStructures_297_; lean_object* v_interestingEnums_298_; lean_object* v_interestingMatchers_299_; lean_object* v_uninteresting_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_313_; 
v___x_296_ = lean_st_ref_take(v_a_294_);
v_interestingStructures_297_ = lean_ctor_get(v___x_296_, 0);
v_interestingEnums_298_ = lean_ctor_get(v___x_296_, 1);
v_interestingMatchers_299_ = lean_ctor_get(v___x_296_, 2);
v_uninteresting_300_ = lean_ctor_get(v___x_296_, 3);
v_isSharedCheck_313_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_313_ == 0)
{
v___x_302_ = v___x_296_;
v_isShared_303_ = v_isSharedCheck_313_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_uninteresting_300_);
lean_inc(v_interestingMatchers_299_);
lean_inc(v_interestingEnums_298_);
lean_inc(v_interestingStructures_297_);
lean_dec(v___x_296_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_313_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_308_; 
v___x_304_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__0));
v___x_305_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__1));
v___x_306_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_304_, v___x_305_, v_interestingMatchers_299_, v_n_292_, v_k_293_);
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 2, v___x_306_);
v___x_308_ = v___x_302_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v_interestingStructures_297_);
lean_ctor_set(v_reuseFailAlloc_312_, 1, v_interestingEnums_298_);
lean_ctor_set(v_reuseFailAlloc_312_, 2, v___x_306_);
lean_ctor_set(v_reuseFailAlloc_312_, 3, v_uninteresting_300_);
v___x_308_ = v_reuseFailAlloc_312_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_309_ = lean_st_ref_set(v_a_294_, v___x_308_);
v___x_310_ = lean_box(0);
v___x_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
return v___x_311_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingMatcher___redArg___boxed(lean_object* v_n_314_, lean_object* v_k_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingMatcher___redArg(v_n_314_, v_k_315_, v_a_316_);
lean_dec(v_a_316_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingMatcher(lean_object* v_n_319_, lean_object* v_k_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_){
_start:
{
lean_object* v___x_328_; lean_object* v_interestingStructures_329_; lean_object* v_interestingEnums_330_; lean_object* v_interestingMatchers_331_; lean_object* v_uninteresting_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_345_; 
v___x_328_ = lean_st_ref_take(v_a_322_);
v_interestingStructures_329_ = lean_ctor_get(v___x_328_, 0);
v_interestingEnums_330_ = lean_ctor_get(v___x_328_, 1);
v_interestingMatchers_331_ = lean_ctor_get(v___x_328_, 2);
v_uninteresting_332_ = lean_ctor_get(v___x_328_, 3);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_328_);
if (v_isSharedCheck_345_ == 0)
{
v___x_334_ = v___x_328_;
v_isShared_335_ = v_isSharedCheck_345_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_uninteresting_332_);
lean_inc(v_interestingMatchers_331_);
lean_inc(v_interestingEnums_330_);
lean_inc(v_interestingStructures_329_);
lean_dec(v___x_328_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_345_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_340_; 
v___x_336_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__0));
v___x_337_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__1));
v___x_338_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_336_, v___x_337_, v_interestingMatchers_331_, v_n_319_, v_k_320_);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 2, v___x_338_);
v___x_340_ = v___x_334_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_interestingStructures_329_);
lean_ctor_set(v_reuseFailAlloc_344_, 1, v_interestingEnums_330_);
lean_ctor_set(v_reuseFailAlloc_344_, 2, v___x_338_);
lean_ctor_set(v_reuseFailAlloc_344_, 3, v_uninteresting_332_);
v___x_340_ = v_reuseFailAlloc_344_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_341_ = lean_st_ref_set(v_a_322_, v___x_340_);
v___x_342_ = lean_box(0);
v___x_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
return v___x_343_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingMatcher___boxed(lean_object* v_n_346_, lean_object* v_k_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markInterestingMatcher(v_n_346_, v_k_347_, v_a_348_, v_a_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_);
lean_dec(v_a_353_);
lean_dec_ref(v_a_352_);
lean_dec(v_a_351_);
lean_dec_ref(v_a_350_);
lean_dec(v_a_349_);
lean_dec_ref(v_a_348_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markUninterestingConst___redArg(lean_object* v_n_356_, lean_object* v_a_357_){
_start:
{
lean_object* v___x_359_; lean_object* v_interestingStructures_360_; lean_object* v_interestingEnums_361_; lean_object* v_interestingMatchers_362_; lean_object* v_uninteresting_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_376_; 
v___x_359_ = lean_st_ref_take(v_a_357_);
v_interestingStructures_360_ = lean_ctor_get(v___x_359_, 0);
v_interestingEnums_361_ = lean_ctor_get(v___x_359_, 1);
v_interestingMatchers_362_ = lean_ctor_get(v___x_359_, 2);
v_uninteresting_363_ = lean_ctor_get(v___x_359_, 3);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_376_ == 0)
{
v___x_365_ = v___x_359_;
v_isShared_366_ = v_isSharedCheck_376_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_uninteresting_363_);
lean_inc(v_interestingMatchers_362_);
lean_inc(v_interestingEnums_361_);
lean_inc(v_interestingStructures_360_);
lean_dec(v___x_359_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_376_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_367_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__0));
v___x_368_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__1));
v___x_369_ = lean_box(0);
v___x_370_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_367_, v___x_368_, v_uninteresting_363_, v_n_356_, v___x_369_);
if (v_isShared_366_ == 0)
{
lean_ctor_set(v___x_365_, 3, v___x_370_);
v___x_372_ = v___x_365_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_interestingStructures_360_);
lean_ctor_set(v_reuseFailAlloc_375_, 1, v_interestingEnums_361_);
lean_ctor_set(v_reuseFailAlloc_375_, 2, v_interestingMatchers_362_);
lean_ctor_set(v_reuseFailAlloc_375_, 3, v___x_370_);
v___x_372_ = v_reuseFailAlloc_375_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = lean_st_ref_set(v_a_357_, v___x_372_);
v___x_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_374_, 0, v___x_369_);
return v___x_374_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markUninterestingConst___redArg___boxed(lean_object* v_n_377_, lean_object* v_a_378_, lean_object* v_a_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markUninterestingConst___redArg(v_n_377_, v_a_378_);
lean_dec(v_a_378_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markUninterestingConst(lean_object* v_n_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_){
_start:
{
lean_object* v___x_389_; lean_object* v_interestingStructures_390_; lean_object* v_interestingEnums_391_; lean_object* v_interestingMatchers_392_; lean_object* v_uninteresting_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_406_; 
v___x_389_ = lean_st_ref_take(v_a_383_);
v_interestingStructures_390_ = lean_ctor_get(v___x_389_, 0);
v_interestingEnums_391_ = lean_ctor_get(v___x_389_, 1);
v_interestingMatchers_392_ = lean_ctor_get(v___x_389_, 2);
v_uninteresting_393_ = lean_ctor_get(v___x_389_, 3);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_406_ == 0)
{
v___x_395_ = v___x_389_;
v_isShared_396_ = v_isSharedCheck_406_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_uninteresting_393_);
lean_inc(v_interestingMatchers_392_);
lean_inc(v_interestingEnums_391_);
lean_inc(v_interestingStructures_390_);
lean_dec(v___x_389_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_406_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_402_; 
v___x_397_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__0));
v___x_398_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_lookupInterestingStructure___redArg___closed__1));
v___x_399_ = lean_box(0);
v___x_400_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_397_, v___x_398_, v_uninteresting_393_, v_n_381_, v___x_399_);
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 3, v___x_400_);
v___x_402_ = v___x_395_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_interestingStructures_390_);
lean_ctor_set(v_reuseFailAlloc_405_, 1, v_interestingEnums_391_);
lean_ctor_set(v_reuseFailAlloc_405_, 2, v_interestingMatchers_392_);
lean_ctor_set(v_reuseFailAlloc_405_, 3, v___x_400_);
v___x_402_ = v_reuseFailAlloc_405_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_403_ = lean_st_ref_set(v_a_383_, v___x_402_);
v___x_404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_404_, 0, v___x_399_);
return v___x_404_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markUninterestingConst___boxed(lean_object* v_n_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_markUninterestingConst(v_n_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_);
lean_dec(v_a_413_);
lean_dec_ref(v_a_412_);
lean_dec(v_a_411_);
lean_dec_ref(v_a_410_);
lean_dec(v_a_409_);
lean_dec_ref(v_a_408_);
return v_res_415_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_416_ = lean_box(0);
v___x_417_ = lean_unsigned_to_nat(16u);
v___x_418_ = lean_mk_array(v___x_417_, v___x_416_);
return v___x_418_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_419_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__0);
v___x_420_ = lean_unsigned_to_nat(0u);
v___x_421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
lean_ctor_set(v___x_421_, 1, v___x_419_);
return v___x_421_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_422_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__1);
v___x_423_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_423_, 0, v___x_422_);
lean_ctor_set(v___x_423_, 1, v___x_422_);
lean_ctor_set(v___x_423_, 2, v___x_422_);
lean_ctor_set(v___x_423_, 3, v___x_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg(lean_object* v_cfg_424_, lean_object* v_x_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_431_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__2);
v___x_432_ = lean_st_mk_ref(v___x_431_);
lean_inc(v_a_429_);
lean_inc_ref(v_a_428_);
lean_inc(v_a_427_);
lean_inc_ref(v_a_426_);
lean_inc(v___x_432_);
v___x_433_ = lean_apply_7(v_x_425_, v_cfg_424_, v___x_432_, v_a_426_, v_a_427_, v_a_428_, v_a_429_, lean_box(0));
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_442_; 
v_a_434_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_442_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_442_ == 0)
{
v___x_436_ = v___x_433_;
v_isShared_437_ = v_isSharedCheck_442_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_433_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_442_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_438_; lean_object* v___x_440_; 
v___x_438_ = lean_st_ref_get(v___x_432_);
lean_dec(v___x_432_);
lean_dec(v___x_438_);
if (v_isShared_437_ == 0)
{
v___x_440_ = v___x_436_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_a_434_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
else
{
lean_dec(v___x_432_);
return v___x_433_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___boxed(lean_object* v_cfg_443_, lean_object* v_x_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg(v_cfg_443_, v_x_444_, v_a_445_, v_a_446_, v_a_447_, v_a_448_);
lean_dec(v_a_448_);
lean_dec_ref(v_a_447_);
lean_dec(v_a_446_);
lean_dec_ref(v_a_445_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run(lean_object* v_00_u03b1_451_, lean_object* v_cfg_452_, lean_object* v_x_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_459_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___redArg___closed__2);
v___x_460_ = lean_st_mk_ref(v___x_459_);
lean_inc(v_a_457_);
lean_inc_ref(v_a_456_);
lean_inc(v_a_455_);
lean_inc_ref(v_a_454_);
lean_inc(v___x_460_);
v___x_461_ = lean_apply_7(v_x_453_, v_cfg_452_, v___x_460_, v_a_454_, v_a_455_, v_a_456_, v_a_457_, lean_box(0));
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v_a_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_470_; 
v_a_462_ = lean_ctor_get(v___x_461_, 0);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_470_ == 0)
{
v___x_464_ = v___x_461_;
v_isShared_465_ = v_isSharedCheck_470_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_a_462_);
lean_dec(v___x_461_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_470_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v___x_466_; lean_object* v___x_468_; 
v___x_466_ = lean_st_ref_get(v___x_460_);
lean_dec(v___x_460_);
lean_dec(v___x_466_);
if (v_isShared_465_ == 0)
{
v___x_468_ = v___x_464_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_a_462_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
else
{
lean_dec(v___x_460_);
return v___x_461_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run___boxed(lean_object* v_00_u03b1_471_, lean_object* v_cfg_472_, lean_object* v_x_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisM_run(v_00_u03b1_471_, v_cfg_472_, v_x_473_, v_a_474_, v_a_475_, v_a_476_, v_a_477_);
lean_dec(v_a_477_);
lean_dec_ref(v_a_476_);
lean_dec(v_a_475_);
lean_dec_ref(v_a_474_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg(lean_object* v_fvar_482_, lean_object* v_a_483_){
_start:
{
lean_object* v___x_485_; lean_object* v_rewriteCache_486_; lean_object* v___x_487_; lean_object* v___x_488_; uint8_t v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_485_ = lean_st_ref_get(v_a_483_);
v_rewriteCache_486_ = lean_ctor_get(v___x_485_, 0);
lean_inc_ref(v_rewriteCache_486_);
lean_dec(v___x_485_);
v___x_487_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__0));
v___x_488_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__1));
v___x_489_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_487_, v___x_488_, v_rewriteCache_486_, v_fvar_482_);
lean_dec_ref(v_rewriteCache_486_);
v___x_490_ = lean_box(v___x_489_);
v___x_491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_491_, 0, v___x_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___boxed(lean_object* v_fvar_492_, lean_object* v_a_493_, lean_object* v_a_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg(v_fvar_492_, v_a_493_);
lean_dec(v_a_493_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten(lean_object* v_fvar_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_){
_start:
{
lean_object* v___x_506_; lean_object* v_rewriteCache_507_; lean_object* v___x_508_; lean_object* v___x_509_; uint8_t v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_506_ = lean_st_ref_get(v_a_498_);
v_rewriteCache_507_ = lean_ctor_get(v___x_506_, 0);
lean_inc_ref(v_rewriteCache_507_);
lean_dec(v___x_506_);
v___x_508_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__0));
v___x_509_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__1));
v___x_510_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_508_, v___x_509_, v_rewriteCache_507_, v_fvar_496_);
lean_dec_ref(v_rewriteCache_507_);
v___x_511_ = lean_box(v___x_510_);
v___x_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___boxed(lean_object* v_fvar_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten(v_fvar_513_, v_a_514_, v_a_515_, v_a_516_, v_a_517_, v_a_518_, v_a_519_, v_a_520_, v_a_521_);
lean_dec(v_a_521_);
lean_dec_ref(v_a_520_);
lean_dec(v_a_519_);
lean_dec_ref(v_a_518_);
lean_dec(v_a_517_);
lean_dec_ref(v_a_516_);
lean_dec(v_a_515_);
lean_dec_ref(v_a_514_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkAcNf___redArg(lean_object* v_fvar_524_, lean_object* v_a_525_){
_start:
{
lean_object* v___x_527_; lean_object* v_acNfCache_528_; lean_object* v___x_529_; lean_object* v___x_530_; uint8_t v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_527_ = lean_st_ref_get(v_a_525_);
v_acNfCache_528_ = lean_ctor_get(v___x_527_, 1);
lean_inc_ref(v_acNfCache_528_);
lean_dec(v___x_527_);
v___x_529_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__0));
v___x_530_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__1));
v___x_531_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_529_, v___x_530_, v_acNfCache_528_, v_fvar_524_);
lean_dec_ref(v_acNfCache_528_);
v___x_532_ = lean_box(v___x_531_);
v___x_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkAcNf___redArg___boxed(lean_object* v_fvar_534_, lean_object* v_a_535_, lean_object* v_a_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkAcNf___redArg(v_fvar_534_, v_a_535_);
lean_dec(v_a_535_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkAcNf(lean_object* v_fvar_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_){
_start:
{
lean_object* v___x_548_; lean_object* v_acNfCache_549_; lean_object* v___x_550_; lean_object* v___x_551_; uint8_t v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_548_ = lean_st_ref_get(v_a_540_);
v_acNfCache_549_ = lean_ctor_get(v___x_548_, 1);
lean_inc_ref(v_acNfCache_549_);
lean_dec(v___x_548_);
v___x_550_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__0));
v___x_551_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__1));
v___x_552_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_550_, v___x_551_, v_acNfCache_549_, v_fvar_538_);
lean_dec_ref(v_acNfCache_549_);
v___x_553_ = lean_box(v___x_552_);
v___x_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_554_, 0, v___x_553_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkAcNf___boxed(lean_object* v_fvar_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkAcNf(v_fvar_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_, v_a_560_, v_a_561_, v_a_562_, v_a_563_);
lean_dec(v_a_563_);
lean_dec_ref(v_a_562_);
lean_dec(v_a_561_);
lean_dec_ref(v_a_560_);
lean_dec(v_a_559_);
lean_dec_ref(v_a_558_);
lean_dec(v_a_557_);
lean_dec_ref(v_a_556_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_rewriteFinished___redArg(lean_object* v_fvar_566_, lean_object* v_a_567_){
_start:
{
lean_object* v___x_569_; lean_object* v_rewriteCache_570_; lean_object* v_acNfCache_571_; lean_object* v_relevantFVars_572_; lean_object* v_goal_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_586_; 
v___x_569_ = lean_st_ref_take(v_a_567_);
v_rewriteCache_570_ = lean_ctor_get(v___x_569_, 0);
v_acNfCache_571_ = lean_ctor_get(v___x_569_, 1);
v_relevantFVars_572_ = lean_ctor_get(v___x_569_, 2);
v_goal_573_ = lean_ctor_get(v___x_569_, 3);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_586_ == 0)
{
v___x_575_ = v___x_569_;
v_isShared_576_ = v_isSharedCheck_586_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_goal_573_);
lean_inc(v_relevantFVars_572_);
lean_inc(v_acNfCache_571_);
lean_inc(v_rewriteCache_570_);
lean_dec(v___x_569_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_586_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_582_; 
v___x_577_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__0));
v___x_578_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__1));
v___x_579_ = lean_box(0);
v___x_580_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_577_, v___x_578_, v_rewriteCache_570_, v_fvar_566_, v___x_579_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 0, v___x_580_);
v___x_582_ = v___x_575_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v___x_580_);
lean_ctor_set(v_reuseFailAlloc_585_, 1, v_acNfCache_571_);
lean_ctor_set(v_reuseFailAlloc_585_, 2, v_relevantFVars_572_);
lean_ctor_set(v_reuseFailAlloc_585_, 3, v_goal_573_);
v___x_582_ = v_reuseFailAlloc_585_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_583_ = lean_st_ref_set(v_a_567_, v___x_582_);
v___x_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_584_, 0, v___x_579_);
return v___x_584_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_rewriteFinished___redArg___boxed(lean_object* v_fvar_587_, lean_object* v_a_588_, lean_object* v_a_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_rewriteFinished___redArg(v_fvar_587_, v_a_588_);
lean_dec(v_a_588_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_rewriteFinished(lean_object* v_fvar_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_){
_start:
{
lean_object* v___x_601_; lean_object* v_rewriteCache_602_; lean_object* v_acNfCache_603_; lean_object* v_relevantFVars_604_; lean_object* v_goal_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_618_; 
v___x_601_ = lean_st_ref_take(v_a_593_);
v_rewriteCache_602_ = lean_ctor_get(v___x_601_, 0);
v_acNfCache_603_ = lean_ctor_get(v___x_601_, 1);
v_relevantFVars_604_ = lean_ctor_get(v___x_601_, 2);
v_goal_605_ = lean_ctor_get(v___x_601_, 3);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_618_ == 0)
{
v___x_607_ = v___x_601_;
v_isShared_608_ = v_isSharedCheck_618_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_goal_605_);
lean_inc(v_relevantFVars_604_);
lean_inc(v_acNfCache_603_);
lean_inc(v_rewriteCache_602_);
lean_dec(v___x_601_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_618_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_614_; 
v___x_609_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__0));
v___x_610_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__1));
v___x_611_ = lean_box(0);
v___x_612_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_609_, v___x_610_, v_rewriteCache_602_, v_fvar_591_, v___x_611_);
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 0, v___x_612_);
v___x_614_ = v___x_607_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v___x_612_);
lean_ctor_set(v_reuseFailAlloc_617_, 1, v_acNfCache_603_);
lean_ctor_set(v_reuseFailAlloc_617_, 2, v_relevantFVars_604_);
lean_ctor_set(v_reuseFailAlloc_617_, 3, v_goal_605_);
v___x_614_ = v_reuseFailAlloc_617_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_615_ = lean_st_ref_set(v_a_593_, v___x_614_);
v___x_616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_616_, 0, v___x_611_);
return v___x_616_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_rewriteFinished___boxed(lean_object* v_fvar_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_rewriteFinished(v_fvar_619_, v_a_620_, v_a_621_, v_a_622_, v_a_623_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
lean_dec(v_a_627_);
lean_dec_ref(v_a_626_);
lean_dec(v_a_625_);
lean_dec_ref(v_a_624_);
lean_dec(v_a_623_);
lean_dec_ref(v_a_622_);
lean_dec(v_a_621_);
lean_dec_ref(v_a_620_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_acNfFinished___redArg(lean_object* v_fvar_630_, lean_object* v_a_631_){
_start:
{
lean_object* v___x_633_; lean_object* v_rewriteCache_634_; lean_object* v_acNfCache_635_; lean_object* v_relevantFVars_636_; lean_object* v_goal_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_650_; 
v___x_633_ = lean_st_ref_take(v_a_631_);
v_rewriteCache_634_ = lean_ctor_get(v___x_633_, 0);
v_acNfCache_635_ = lean_ctor_get(v___x_633_, 1);
v_relevantFVars_636_ = lean_ctor_get(v___x_633_, 2);
v_goal_637_ = lean_ctor_get(v___x_633_, 3);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_650_ == 0)
{
v___x_639_ = v___x_633_;
v_isShared_640_ = v_isSharedCheck_650_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_goal_637_);
lean_inc(v_relevantFVars_636_);
lean_inc(v_acNfCache_635_);
lean_inc(v_rewriteCache_634_);
lean_dec(v___x_633_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_650_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_646_; 
v___x_641_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__0));
v___x_642_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__1));
v___x_643_ = lean_box(0);
v___x_644_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_641_, v___x_642_, v_acNfCache_635_, v_fvar_630_, v___x_643_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 1, v___x_644_);
v___x_646_ = v___x_639_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_rewriteCache_634_);
lean_ctor_set(v_reuseFailAlloc_649_, 1, v___x_644_);
lean_ctor_set(v_reuseFailAlloc_649_, 2, v_relevantFVars_636_);
lean_ctor_set(v_reuseFailAlloc_649_, 3, v_goal_637_);
v___x_646_ = v_reuseFailAlloc_649_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = lean_st_ref_set(v_a_631_, v___x_646_);
v___x_648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_648_, 0, v___x_643_);
return v___x_648_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_acNfFinished___redArg___boxed(lean_object* v_fvar_651_, lean_object* v_a_652_, lean_object* v_a_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_acNfFinished___redArg(v_fvar_651_, v_a_652_);
lean_dec(v_a_652_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_acNfFinished(lean_object* v_fvar_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_){
_start:
{
lean_object* v___x_665_; lean_object* v_rewriteCache_666_; lean_object* v_acNfCache_667_; lean_object* v_relevantFVars_668_; lean_object* v_goal_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_682_; 
v___x_665_ = lean_st_ref_take(v_a_657_);
v_rewriteCache_666_ = lean_ctor_get(v___x_665_, 0);
v_acNfCache_667_ = lean_ctor_get(v___x_665_, 1);
v_relevantFVars_668_ = lean_ctor_get(v___x_665_, 2);
v_goal_669_ = lean_ctor_get(v___x_665_, 3);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_682_ == 0)
{
v___x_671_ = v___x_665_;
v_isShared_672_ = v_isSharedCheck_682_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_goal_669_);
lean_inc(v_relevantFVars_668_);
lean_inc(v_acNfCache_667_);
lean_inc(v_rewriteCache_666_);
lean_dec(v___x_665_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_682_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_678_; 
v___x_673_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__0));
v___x_674_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_checkRewritten___redArg___closed__1));
v___x_675_ = lean_box(0);
v___x_676_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_673_, v___x_674_, v_acNfCache_667_, v_fvar_655_, v___x_675_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 1, v___x_676_);
v___x_678_ = v___x_671_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_rewriteCache_666_);
lean_ctor_set(v_reuseFailAlloc_681_, 1, v___x_676_);
lean_ctor_set(v_reuseFailAlloc_681_, 2, v_relevantFVars_668_);
lean_ctor_set(v_reuseFailAlloc_681_, 3, v_goal_669_);
v___x_678_ = v_reuseFailAlloc_681_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_679_ = lean_st_ref_set(v_a_657_, v___x_678_);
v___x_680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_680_, 0, v___x_675_);
return v___x_680_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_acNfFinished___boxed(lean_object* v_fvar_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_acNfFinished(v_fvar_683_, v_a_684_, v_a_685_, v_a_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_, v_a_691_);
lean_dec(v_a_691_);
lean_dec_ref(v_a_690_);
lean_dec(v_a_689_);
lean_dec_ref(v_a_688_);
lean_dec(v_a_687_);
lean_dec_ref(v_a_686_);
lean_dec(v_a_685_);
lean_dec_ref(v_a_684_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_getRelevantFVars___redArg(lean_object* v_a_694_){
_start:
{
lean_object* v___x_696_; lean_object* v_relevantFVars_697_; lean_object* v___x_698_; 
v___x_696_ = lean_st_ref_get(v_a_694_);
v_relevantFVars_697_ = lean_ctor_get(v___x_696_, 2);
lean_inc_ref(v_relevantFVars_697_);
lean_dec(v___x_696_);
v___x_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_698_, 0, v_relevantFVars_697_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_getRelevantFVars___redArg___boxed(lean_object* v_a_699_, lean_object* v_a_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_getRelevantFVars___redArg(v_a_699_);
lean_dec(v_a_699_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_getRelevantFVars(lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_){
_start:
{
lean_object* v___x_711_; lean_object* v_relevantFVars_712_; lean_object* v___x_713_; 
v___x_711_ = lean_st_ref_get(v_a_703_);
v_relevantFVars_712_ = lean_ctor_get(v___x_711_, 2);
lean_inc_ref(v_relevantFVars_712_);
lean_dec(v___x_711_);
v___x_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_713_, 0, v_relevantFVars_712_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_getRelevantFVars___boxed(lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_getRelevantFVars(v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_);
lean_dec(v_a_721_);
lean_dec_ref(v_a_720_);
lean_dec(v_a_719_);
lean_dec_ref(v_a_718_);
lean_dec(v_a_717_);
lean_dec_ref(v_a_716_);
lean_dec(v_a_715_);
lean_dec_ref(v_a_714_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_modifyRelevantFVars___redArg(lean_object* v_f_724_, lean_object* v_a_725_){
_start:
{
lean_object* v___x_727_; lean_object* v_rewriteCache_728_; lean_object* v_acNfCache_729_; lean_object* v_relevantFVars_730_; lean_object* v_goal_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_742_; 
v___x_727_ = lean_st_ref_take(v_a_725_);
v_rewriteCache_728_ = lean_ctor_get(v___x_727_, 0);
v_acNfCache_729_ = lean_ctor_get(v___x_727_, 1);
v_relevantFVars_730_ = lean_ctor_get(v___x_727_, 2);
v_goal_731_ = lean_ctor_get(v___x_727_, 3);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_742_ == 0)
{
v___x_733_ = v___x_727_;
v_isShared_734_ = v_isSharedCheck_742_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_goal_731_);
lean_inc(v_relevantFVars_730_);
lean_inc(v_acNfCache_729_);
lean_inc(v_rewriteCache_728_);
lean_dec(v___x_727_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_742_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_735_; lean_object* v___x_737_; 
v___x_735_ = lean_apply_1(v_f_724_, v_relevantFVars_730_);
if (v_isShared_734_ == 0)
{
lean_ctor_set(v___x_733_, 2, v___x_735_);
v___x_737_ = v___x_733_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_rewriteCache_728_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v_acNfCache_729_);
lean_ctor_set(v_reuseFailAlloc_741_, 2, v___x_735_);
lean_ctor_set(v_reuseFailAlloc_741_, 3, v_goal_731_);
v___x_737_ = v_reuseFailAlloc_741_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_738_ = lean_st_ref_set(v_a_725_, v___x_737_);
v___x_739_ = lean_box(0);
v___x_740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_740_, 0, v___x_739_);
return v___x_740_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_modifyRelevantFVars___redArg___boxed(lean_object* v_f_743_, lean_object* v_a_744_, lean_object* v_a_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_modifyRelevantFVars___redArg(v_f_743_, v_a_744_);
lean_dec(v_a_744_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_modifyRelevantFVars(lean_object* v_f_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_){
_start:
{
lean_object* v___x_757_; lean_object* v_rewriteCache_758_; lean_object* v_acNfCache_759_; lean_object* v_relevantFVars_760_; lean_object* v_goal_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_772_; 
v___x_757_ = lean_st_ref_take(v_a_749_);
v_rewriteCache_758_ = lean_ctor_get(v___x_757_, 0);
v_acNfCache_759_ = lean_ctor_get(v___x_757_, 1);
v_relevantFVars_760_ = lean_ctor_get(v___x_757_, 2);
v_goal_761_ = lean_ctor_get(v___x_757_, 3);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_772_ == 0)
{
v___x_763_ = v___x_757_;
v_isShared_764_ = v_isSharedCheck_772_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_goal_761_);
lean_inc(v_relevantFVars_760_);
lean_inc(v_acNfCache_759_);
lean_inc(v_rewriteCache_758_);
lean_dec(v___x_757_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_772_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_765_; lean_object* v___x_767_; 
v___x_765_ = lean_apply_1(v_f_747_, v_relevantFVars_760_);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 2, v___x_765_);
v___x_767_ = v___x_763_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_rewriteCache_758_);
lean_ctor_set(v_reuseFailAlloc_771_, 1, v_acNfCache_759_);
lean_ctor_set(v_reuseFailAlloc_771_, 2, v___x_765_);
lean_ctor_set(v_reuseFailAlloc_771_, 3, v_goal_761_);
v___x_767_ = v_reuseFailAlloc_771_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_768_ = lean_st_ref_set(v_a_749_, v___x_767_);
v___x_769_ = lean_box(0);
v___x_770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_770_, 0, v___x_769_);
return v___x_770_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_modifyRelevantFVars___boxed(lean_object* v_f_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_, lean_object* v_a_782_){
_start:
{
lean_object* v_res_783_; 
v_res_783_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_modifyRelevantFVars(v_f_773_, v_a_774_, v_a_775_, v_a_776_, v_a_777_, v_a_778_, v_a_779_, v_a_780_, v_a_781_);
lean_dec(v_a_781_);
lean_dec_ref(v_a_780_);
lean_dec(v_a_779_);
lean_dec_ref(v_a_778_);
lean_dec(v_a_777_);
lean_dec_ref(v_a_776_);
lean_dec(v_a_775_);
lean_dec_ref(v_a_774_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0___redArg___lam__0(lean_object* v_x_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
lean_object* v___x_792_; 
lean_inc(v___y_786_);
lean_inc_ref(v___y_785_);
v___x_792_ = lean_apply_7(v_x_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_, lean_box(0));
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0___redArg___lam__0___boxed(lean_object* v_x_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0___redArg___lam__0(v_x_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0___redArg(lean_object* v_mvarId_802_, lean_object* v_x_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
lean_object* v___f_811_; lean_object* v___x_812_; 
lean_inc(v___y_805_);
lean_inc_ref(v___y_804_);
v___f_811_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_811_, 0, v_x_803_);
lean_closure_set(v___f_811_, 1, v___y_804_);
lean_closure_set(v___f_811_, 2, v___y_805_);
v___x_812_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_802_, v___f_811_, v___y_806_, v___y_807_, v___y_808_, v___y_809_);
if (lean_obj_tag(v___x_812_) == 0)
{
return v___x_812_;
}
else
{
lean_object* v_a_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_820_; 
v_a_813_ = lean_ctor_get(v___x_812_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_812_);
if (v_isSharedCheck_820_ == 0)
{
v___x_815_ = v___x_812_;
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_a_813_);
lean_dec(v___x_812_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___x_818_; 
if (v_isShared_816_ == 0)
{
v___x_818_ = v___x_815_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_a_813_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0___redArg___boxed(lean_object* v_mvarId_821_, lean_object* v_x_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0___redArg(v_mvarId_821_, v_x_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_);
lean_dec(v___y_828_);
lean_dec_ref(v___y_827_);
lean_dec(v___y_826_);
lean_dec_ref(v___y_825_);
lean_dec(v___y_824_);
lean_dec_ref(v___y_823_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0(lean_object* v_00_u03b1_831_, lean_object* v_mvarId_832_, lean_object* v_x_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
lean_object* v___x_841_; 
v___x_841_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0___redArg(v_mvarId_832_, v_x_833_, v___y_834_, v___y_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_);
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0___boxed(lean_object* v_00_u03b1_842_, lean_object* v_mvarId_843_, lean_object* v_x_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0(v_00_u03b1_842_, v_mvarId_843_, v_x_844_, v___y_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_);
lean_dec(v___y_850_);
lean_dec_ref(v___y_849_);
lean_dec(v___y_848_);
lean_dec_ref(v___y_847_);
lean_dec(v___y_846_);
lean_dec_ref(v___y_845_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___redArg___lam__0(lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
lean_object* v___x_860_; 
v___x_860_ = l_Lean_Meta_getPropHyps(v___y_855_, v___y_856_, v___y_857_, v___y_858_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___redArg___lam__0___boxed(lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___redArg___lam__0(v___y_861_, v___y_862_, v___y_863_, v___y_864_, v___y_865_, v___y_866_);
lean_dec(v___y_866_);
lean_dec_ref(v___y_865_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___redArg(lean_object* v_cfg_870_, lean_object* v_goal_871_, lean_object* v_x_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_){
_start:
{
lean_object* v___x_880_; 
v___x_880_ = l_Lean_Meta_Sym_preprocessMVar(v_goal_871_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_);
if (lean_obj_tag(v___x_880_) == 0)
{
lean_object* v_a_881_; lean_object* v___f_882_; lean_object* v___x_883_; 
v_a_881_ = lean_ctor_get(v___x_880_, 0);
lean_inc_n(v_a_881_, 2);
lean_dec_ref_known(v___x_880_, 1);
v___f_882_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___redArg___closed__0));
v___x_883_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run_spec__0___redArg(v_a_881_, v___f_882_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_);
if (lean_obj_tag(v___x_883_) == 0)
{
lean_object* v_a_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v_a_884_ = lean_ctor_get(v___x_883_, 0);
lean_inc(v_a_884_);
lean_dec_ref_known(v___x_883_, 1);
v___x_885_ = lean_array_get_size(v_a_884_);
v___x_886_ = lean_unsigned_to_nat(0u);
v___x_887_ = lean_unsigned_to_nat(4u);
v___x_888_ = lean_nat_mul(v___x_885_, v___x_887_);
v___x_889_ = lean_unsigned_to_nat(3u);
v___x_890_ = lean_nat_div(v___x_888_, v___x_889_);
lean_dec(v___x_888_);
v___x_891_ = l_Nat_nextPowerOfTwo(v___x_890_);
lean_dec(v___x_890_);
v___x_892_ = lean_box(0);
v___x_893_ = lean_mk_array(v___x_891_, v___x_892_);
v___x_894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_894_, 0, v___x_886_);
lean_ctor_set(v___x_894_, 1, v___x_893_);
lean_inc_ref(v___x_894_);
v___x_895_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
lean_ctor_set(v___x_895_, 1, v___x_894_);
lean_ctor_set(v___x_895_, 2, v_a_884_);
lean_ctor_set(v___x_895_, 3, v_a_881_);
v___x_896_ = lean_st_mk_ref(v___x_895_);
lean_inc(v_a_878_);
lean_inc_ref(v_a_877_);
lean_inc(v_a_876_);
lean_inc_ref(v_a_875_);
lean_inc(v_a_874_);
lean_inc_ref(v_a_873_);
lean_inc(v___x_896_);
v___x_897_ = lean_apply_9(v_x_872_, v_cfg_870_, v___x_896_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, lean_box(0));
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_908_; 
v_a_898_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_908_ == 0)
{
v___x_900_ = v___x_897_;
v_isShared_901_ = v_isSharedCheck_908_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_897_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_908_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_902_; lean_object* v_relevantFVars_903_; lean_object* v___x_904_; lean_object* v___x_906_; 
v___x_902_ = lean_st_ref_get(v___x_896_);
lean_dec(v___x_896_);
v_relevantFVars_903_ = lean_ctor_get(v___x_902_, 2);
lean_inc_ref(v_relevantFVars_903_);
lean_dec(v___x_902_);
v___x_904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_904_, 0, v_a_898_);
lean_ctor_set(v___x_904_, 1, v_relevantFVars_903_);
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 0, v___x_904_);
v___x_906_ = v___x_900_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v___x_904_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
else
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
lean_dec(v___x_896_);
v_a_909_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v___x_897_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_897_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
}
else
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
lean_dec(v_a_881_);
lean_dec_ref(v_x_872_);
lean_dec_ref(v_cfg_870_);
v_a_917_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_924_ == 0)
{
v___x_919_ = v___x_883_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_883_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_922_; 
if (v_isShared_920_ == 0)
{
v___x_922_ = v___x_919_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v_a_917_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
}
}
else
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
lean_dec_ref(v_x_872_);
lean_dec_ref(v_cfg_870_);
v_a_925_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_932_ == 0)
{
v___x_927_ = v___x_880_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_880_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
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
return v___x_930_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___redArg___boxed(lean_object* v_cfg_933_, lean_object* v_goal_934_, lean_object* v_x_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_){
_start:
{
lean_object* v_res_943_; 
v_res_943_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___redArg(v_cfg_933_, v_goal_934_, v_x_935_, v_a_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_);
lean_dec(v_a_941_);
lean_dec_ref(v_a_940_);
lean_dec(v_a_939_);
lean_dec_ref(v_a_938_);
lean_dec(v_a_937_);
lean_dec_ref(v_a_936_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run(lean_object* v_00_u03b1_944_, lean_object* v_cfg_945_, lean_object* v_goal_946_, lean_object* v_x_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_){
_start:
{
lean_object* v___x_955_; 
v___x_955_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___redArg(v_cfg_945_, v_goal_946_, v_x_947_, v_a_948_, v_a_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run___boxed(lean_object* v_00_u03b1_956_, lean_object* v_cfg_957_, lean_object* v_goal_958_, lean_object* v_x_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_, lean_object* v_a_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessM_run(v_00_u03b1_956_, v_cfg_957_, v_goal_958_, v_x_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
return v_res_967_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__1(void){
_start:
{
lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_969_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__0));
v___x_970_ = l_Lean_stringToMessageData(v___x_969_);
return v___x_970_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__3(void){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__2));
v___x_973_ = l_Lean_stringToMessageData(v___x_972_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0(lean_object* v_name_974_, lean_object* v_goal_975_, lean_object* v_x_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_){
_start:
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_984_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__1);
v___x_985_ = l_Lean_MessageData_ofName(v_name_974_);
v___x_986_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_984_);
lean_ctor_set(v___x_986_, 1, v___x_985_);
v___x_987_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__3);
v___x_988_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_986_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
v___x_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_989_, 0, v_goal_975_);
v___x_990_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_988_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_991_, 0, v___x_990_);
return v___x_991_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___boxed(lean_object* v_name_992_, lean_object* v_goal_993_, lean_object* v_x_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0(v_name_992_, v_goal_993_, v_x_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec(v___y_996_);
lean_dec_ref(v___y_995_);
lean_dec_ref(v_x_994_);
return v_res_1002_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__0(void){
_start:
{
lean_object* v___x_1003_; 
v___x_1003_ = l_instMonadEIO(lean_box(0));
return v___x_1003_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__1(void){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__0);
v___x_1005_ = l_StateRefT_x27_instMonad___redArg(v___x_1004_);
return v___x_1005_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__8(void){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1012_ = l_Lean_Core_instMonadTraceCoreM;
v___x_1013_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__7));
v___x_1014_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_1013_, v___x_1012_);
return v___x_1014_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__9(void){
_start:
{
lean_object* v___x_1015_; lean_object* v___f_1016_; lean_object* v___x_1017_; 
v___x_1015_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__8, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__8_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__8);
v___f_1016_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__6));
v___x_1017_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_1016_, v___x_1015_);
return v___x_1017_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__10(void){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1018_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__9, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__9_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__9);
v___x_1019_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__7));
v___x_1020_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_1019_, v___x_1018_);
return v___x_1020_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__11(void){
_start:
{
lean_object* v___x_1021_; lean_object* v___f_1022_; lean_object* v___x_1023_; 
v___x_1021_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__10, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__10_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__10);
v___f_1022_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__6));
v___x_1023_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_1022_, v___x_1021_);
return v___x_1023_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__14(void){
_start:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1026_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1027_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__7));
v___x_1028_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__13));
v___x_1029_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_1028_, v___x_1027_, v___x_1026_);
return v___x_1029_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__15(void){
_start:
{
lean_object* v___x_1030_; lean_object* v___f_1031_; lean_object* v___f_1032_; lean_object* v___x_1033_; 
v___x_1030_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__14, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__14_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__14);
v___f_1031_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__6));
v___f_1032_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__12));
v___x_1033_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1032_, v___f_1031_, v___x_1030_);
return v___x_1033_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__16(void){
_start:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1034_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__15, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__15_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__15);
v___x_1035_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__7));
v___x_1036_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__13));
v___x_1037_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_1036_, v___x_1035_, v___x_1034_);
return v___x_1037_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__17(void){
_start:
{
lean_object* v___x_1038_; lean_object* v___f_1039_; lean_object* v___f_1040_; lean_object* v___x_1041_; 
v___x_1038_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__16, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__16_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__16);
v___f_1039_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__6));
v___f_1040_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__12));
v___x_1041_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1040_, v___f_1039_, v___x_1038_);
return v___x_1041_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__18(void){
_start:
{
lean_object* v___x_1042_; 
v___x_1042_ = l_instMonadExceptOfEIO(lean_box(0));
return v___x_1042_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__19(void){
_start:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__18, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__18_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__18);
v___x_1044_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_1043_);
return v___x_1044_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__20(void){
_start:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__19, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__19_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__19);
v___x_1046_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_1045_);
return v___x_1046_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__21(void){
_start:
{
lean_object* v___x_1047_; lean_object* v___x_1048_; 
v___x_1047_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__20, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__20_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__20);
v___x_1048_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_1047_);
return v___x_1048_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__22(void){
_start:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1049_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__21, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__21_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__21);
v___x_1050_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_1049_);
return v___x_1050_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__23(void){
_start:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1051_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__22, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__22_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__22);
v___x_1052_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_1051_);
return v___x_1052_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__24(void){
_start:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___x_1053_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__23, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__23_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__23);
v___x_1054_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_1053_);
return v___x_1054_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__25(void){
_start:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___f_1057_; 
v___x_1055_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__7));
v___x_1056_ = l_Lean_Meta_instAddMessageContextMetaM;
v___f_1057_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1057_, 0, v___x_1056_);
lean_closure_set(v___f_1057_, 1, v___x_1055_);
return v___f_1057_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__26(void){
_start:
{
lean_object* v___f_1058_; lean_object* v___f_1059_; lean_object* v___f_1060_; 
v___f_1058_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__6));
v___f_1059_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__25, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__25_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__25);
v___f_1060_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1060_, 0, v___f_1059_);
lean_closure_set(v___f_1060_, 1, v___f_1058_);
return v___f_1060_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35(void){
_start:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1073_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__31));
v___x_1074_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__34));
v___x_1075_ = l_Lean_Name_append(v___x_1074_, v___x_1073_);
return v___x_1075_;
}
}
static double _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__36(void){
_start:
{
lean_object* v___x_1076_; double v___x_1077_; 
v___x_1076_ = lean_unsigned_to_nat(1000000000u);
v___x_1077_ = lean_float_of_nat(v___x_1076_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run(lean_object* v_pass_1078_, lean_object* v_goal_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_){
_start:
{
lean_object* v___x_1087_; lean_object* v_toApplicative_1088_; lean_object* v_toFunctor_1089_; lean_object* v_toSeq_1090_; lean_object* v_toSeqLeft_1091_; lean_object* v_toSeqRight_1092_; lean_object* v___f_1093_; lean_object* v___f_1094_; lean_object* v___f_1095_; lean_object* v___f_1096_; lean_object* v___x_1097_; lean_object* v___f_1098_; lean_object* v___f_1099_; lean_object* v___f_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v_toApplicative_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1243_; 
v___x_1087_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__1);
v_toApplicative_1088_ = lean_ctor_get(v___x_1087_, 0);
v_toFunctor_1089_ = lean_ctor_get(v_toApplicative_1088_, 0);
v_toSeq_1090_ = lean_ctor_get(v_toApplicative_1088_, 2);
v_toSeqLeft_1091_ = lean_ctor_get(v_toApplicative_1088_, 3);
v_toSeqRight_1092_ = lean_ctor_get(v_toApplicative_1088_, 4);
v___f_1093_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__2));
v___f_1094_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__3));
lean_inc_ref_n(v_toFunctor_1089_, 2);
v___f_1095_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1095_, 0, v_toFunctor_1089_);
v___f_1096_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1096_, 0, v_toFunctor_1089_);
v___x_1097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___f_1095_);
lean_ctor_set(v___x_1097_, 1, v___f_1096_);
lean_inc(v_toSeqRight_1092_);
v___f_1098_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1098_, 0, v_toSeqRight_1092_);
lean_inc(v_toSeqLeft_1091_);
v___f_1099_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1099_, 0, v_toSeqLeft_1091_);
lean_inc(v_toSeq_1090_);
v___f_1100_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1100_, 0, v_toSeq_1090_);
v___x_1101_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1097_);
lean_ctor_set(v___x_1101_, 1, v___f_1093_);
lean_ctor_set(v___x_1101_, 2, v___f_1100_);
lean_ctor_set(v___x_1101_, 3, v___f_1099_);
lean_ctor_set(v___x_1101_, 4, v___f_1098_);
v___x_1102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
lean_ctor_set(v___x_1102_, 1, v___f_1094_);
v___x_1103_ = l_StateRefT_x27_instMonad___redArg(v___x_1102_);
v_toApplicative_1104_ = lean_ctor_get(v___x_1103_, 0);
v_isSharedCheck_1243_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1243_ == 0)
{
lean_object* v_unused_1244_; 
v_unused_1244_ = lean_ctor_get(v___x_1103_, 1);
lean_dec(v_unused_1244_);
v___x_1106_ = v___x_1103_;
v_isShared_1107_ = v_isSharedCheck_1243_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_toApplicative_1104_);
lean_dec(v___x_1103_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1243_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v_toFunctor_1108_; lean_object* v_toSeq_1109_; lean_object* v_toSeqLeft_1110_; lean_object* v_toSeqRight_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1241_; 
v_toFunctor_1108_ = lean_ctor_get(v_toApplicative_1104_, 0);
v_toSeq_1109_ = lean_ctor_get(v_toApplicative_1104_, 2);
v_toSeqLeft_1110_ = lean_ctor_get(v_toApplicative_1104_, 3);
v_toSeqRight_1111_ = lean_ctor_get(v_toApplicative_1104_, 4);
v_isSharedCheck_1241_ = !lean_is_exclusive(v_toApplicative_1104_);
if (v_isSharedCheck_1241_ == 0)
{
lean_object* v_unused_1242_; 
v_unused_1242_ = lean_ctor_get(v_toApplicative_1104_, 1);
lean_dec(v_unused_1242_);
v___x_1113_ = v_toApplicative_1104_;
v_isShared_1114_ = v_isSharedCheck_1241_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_toSeqRight_1111_);
lean_inc(v_toSeqLeft_1110_);
lean_inc(v_toSeq_1109_);
lean_inc(v_toFunctor_1108_);
lean_dec(v_toApplicative_1104_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1241_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___f_1115_; lean_object* v___f_1116_; lean_object* v___f_1117_; lean_object* v___f_1118_; lean_object* v___x_1119_; lean_object* v___f_1120_; lean_object* v___f_1121_; lean_object* v___f_1122_; lean_object* v___x_1124_; 
v___f_1115_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__4));
v___f_1116_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__5));
lean_inc_ref(v_toFunctor_1108_);
v___f_1117_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1117_, 0, v_toFunctor_1108_);
v___f_1118_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1118_, 0, v_toFunctor_1108_);
v___x_1119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___f_1117_);
lean_ctor_set(v___x_1119_, 1, v___f_1118_);
v___f_1120_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1120_, 0, v_toSeqRight_1111_);
v___f_1121_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1121_, 0, v_toSeqLeft_1110_);
v___f_1122_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1122_, 0, v_toSeq_1109_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 4, v___f_1120_);
lean_ctor_set(v___x_1113_, 3, v___f_1121_);
lean_ctor_set(v___x_1113_, 2, v___f_1122_);
lean_ctor_set(v___x_1113_, 1, v___f_1115_);
lean_ctor_set(v___x_1113_, 0, v___x_1119_);
v___x_1124_ = v___x_1113_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v___x_1119_);
lean_ctor_set(v_reuseFailAlloc_1240_, 1, v___f_1115_);
lean_ctor_set(v_reuseFailAlloc_1240_, 2, v___f_1122_);
lean_ctor_set(v_reuseFailAlloc_1240_, 3, v___f_1121_);
lean_ctor_set(v_reuseFailAlloc_1240_, 4, v___f_1120_);
v___x_1124_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
lean_object* v___x_1126_; 
if (v_isShared_1107_ == 0)
{
lean_ctor_set(v___x_1106_, 1, v___f_1116_);
lean_ctor_set(v___x_1106_, 0, v___x_1124_);
v___x_1126_ = v___x_1106_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v___x_1124_);
lean_ctor_set(v_reuseFailAlloc_1239_, 1, v___f_1116_);
v___x_1126_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v_toMonadRef_1131_; lean_object* v___x_1132_; lean_object* v_options_1133_; uint8_t v_hasTrace_1134_; 
v___x_1127_ = l_StateRefT_x27_instMonad___redArg(v___x_1126_);
v___x_1128_ = l_ReaderT_instMonad___redArg(v___x_1127_);
v___x_1129_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__11, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__11_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__11);
v___x_1130_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__17, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__17_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__17);
v_toMonadRef_1131_ = lean_ctor_get(v___x_1130_, 0);
v___x_1132_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__24, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__24_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__24);
v_options_1133_ = lean_ctor_get(v_a_1084_, 2);
v_hasTrace_1134_ = lean_ctor_get_uint8(v_options_1133_, sizeof(void*)*1);
if (v_hasTrace_1134_ == 0)
{
lean_object* v_run_x27_1135_; lean_object* v___x_1136_; 
lean_dec_ref(v___x_1128_);
v_run_x27_1135_ = lean_ctor_get(v_pass_1078_, 1);
lean_inc(v_run_x27_1135_);
lean_dec_ref(v_pass_1078_);
lean_inc(v_a_1085_);
lean_inc_ref(v_a_1084_);
lean_inc(v_a_1083_);
lean_inc_ref(v_a_1082_);
lean_inc(v_a_1081_);
lean_inc_ref(v_a_1080_);
v___x_1136_ = lean_apply_8(v_run_x27_1135_, v_goal_1079_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_, lean_box(0));
return v___x_1136_;
}
else
{
lean_object* v_name_1137_; lean_object* v_run_x27_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1238_; 
v_name_1137_ = lean_ctor_get(v_pass_1078_, 0);
v_run_x27_1138_ = lean_ctor_get(v_pass_1078_, 1);
v_isSharedCheck_1238_ = !lean_is_exclusive(v_pass_1078_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1140_ = v_pass_1078_;
v_isShared_1141_ = v_isSharedCheck_1238_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_run_x27_1138_);
lean_inc(v_name_1137_);
lean_dec(v_pass_1078_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1238_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v_inheritedTraceOptions_1142_; lean_object* v___f_1143_; lean_object* v___f_1144_; lean_object* v___f_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; uint8_t v___x_1149_; lean_object* v___y_1151_; lean_object* v___y_1152_; lean_object* v_a_1153_; lean_object* v___y_1169_; lean_object* v___y_1170_; lean_object* v_a_1171_; 
v_inheritedTraceOptions_1142_ = lean_ctor_get(v_a_1084_, 13);
lean_inc(v_goal_1079_);
v___f_1143_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___boxed), 10, 2);
lean_closure_set(v___f_1143_, 0, v_name_1137_);
lean_closure_set(v___f_1143_, 1, v_goal_1079_);
v___f_1144_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__26, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__26_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__26);
v___f_1145_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__27));
v___x_1146_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__31));
v___x_1147_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__32));
v___x_1148_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35);
v___x_1149_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1142_, v_options_1133_, v___x_1148_);
if (v___x_1149_ == 0)
{
lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; uint8_t v___x_1236_; 
v___x_1233_ = l_Lean_KVMap_instValueBool;
v___x_1234_ = l_Lean_trace_profiler;
v___x_1235_ = l_Lean_Option_get___redArg(v___x_1233_, v_options_1133_, v___x_1234_);
v___x_1236_ = lean_unbox(v___x_1235_);
lean_dec(v___x_1235_);
if (v___x_1236_ == 0)
{
lean_object* v___x_1237_; 
lean_dec_ref(v___f_1143_);
lean_del_object(v___x_1140_);
lean_dec_ref(v___x_1128_);
lean_inc(v_a_1085_);
lean_inc_ref(v_a_1084_);
lean_inc(v_a_1083_);
lean_inc_ref(v_a_1082_);
lean_inc(v_a_1081_);
lean_inc_ref(v_a_1080_);
v___x_1237_ = lean_apply_8(v_run_x27_1138_, v_goal_1079_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_, lean_box(0));
return v___x_1237_;
}
else
{
goto v___jp_1181_;
}
}
else
{
goto v___jp_1181_;
}
v___jp_1150_:
{
lean_object* v___x_1154_; double v___x_1155_; double v___x_1156_; double v___x_1157_; double v___x_1158_; double v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1163_; 
v___x_1154_ = lean_io_mono_nanos_now();
v___x_1155_ = lean_float_of_nat(v___y_1151_);
v___x_1156_ = lean_float_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__36, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__36_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__36);
v___x_1157_ = lean_float_div(v___x_1155_, v___x_1156_);
v___x_1158_ = lean_float_of_nat(v___x_1154_);
v___x_1159_ = lean_float_div(v___x_1158_, v___x_1156_);
v___x_1160_ = lean_box_float(v___x_1157_);
v___x_1161_ = lean_box_float(v___x_1159_);
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 1, v___x_1161_);
lean_ctor_set(v___x_1140_, 0, v___x_1160_);
v___x_1163_ = v___x_1140_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v___x_1160_);
lean_ctor_set(v_reuseFailAlloc_1167_, 1, v___x_1161_);
v___x_1163_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
lean_object* v___x_1164_; lean_object* v___x_9546__overap_1165_; lean_object* v___x_1166_; 
v___x_1164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1164_, 0, v_a_1153_);
lean_ctor_set(v___x_1164_, 1, v___x_1163_);
lean_inc_ref(v_toMonadRef_1131_);
v___x_9546__overap_1165_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_box(0), lean_box(0), v___x_1128_, v___x_1129_, v_toMonadRef_1131_, v___f_1144_, lean_box(0), v___x_1132_, v___f_1145_, v___x_1146_, v_hasTrace_1134_, v___x_1147_, v_options_1133_, v___x_1149_, v___y_1152_, v___f_1143_, v___x_1164_);
lean_inc(v_a_1085_);
lean_inc_ref(v_a_1084_);
lean_inc(v_a_1083_);
lean_inc_ref(v_a_1082_);
lean_inc(v_a_1081_);
lean_inc_ref(v_a_1080_);
v___x_1166_ = lean_apply_7(v___x_9546__overap_1165_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_, lean_box(0));
return v___x_1166_;
}
}
v___jp_1168_:
{
lean_object* v___x_1172_; double v___x_1173_; double v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_9567__overap_1179_; lean_object* v___x_1180_; 
v___x_1172_ = lean_io_get_num_heartbeats();
v___x_1173_ = lean_float_of_nat(v___y_1169_);
v___x_1174_ = lean_float_of_nat(v___x_1172_);
v___x_1175_ = lean_box_float(v___x_1173_);
v___x_1176_ = lean_box_float(v___x_1174_);
v___x_1177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1175_);
lean_ctor_set(v___x_1177_, 1, v___x_1176_);
v___x_1178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1178_, 0, v_a_1171_);
lean_ctor_set(v___x_1178_, 1, v___x_1177_);
lean_inc_ref(v_toMonadRef_1131_);
v___x_9567__overap_1179_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_box(0), lean_box(0), v___x_1128_, v___x_1129_, v_toMonadRef_1131_, v___f_1144_, lean_box(0), v___x_1132_, v___f_1145_, v___x_1146_, v_hasTrace_1134_, v___x_1147_, v_options_1133_, v___x_1149_, v___y_1170_, v___f_1143_, v___x_1178_);
lean_inc(v_a_1085_);
lean_inc_ref(v_a_1084_);
lean_inc(v_a_1083_);
lean_inc_ref(v_a_1082_);
lean_inc(v_a_1081_);
lean_inc_ref(v_a_1080_);
v___x_1180_ = lean_apply_7(v___x_9567__overap_1179_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_, lean_box(0));
return v___x_1180_;
}
v___jp_1181_:
{
lean_object* v___x_9523__overap_1182_; lean_object* v___x_1183_; 
lean_inc_ref(v___x_1128_);
v___x_9523__overap_1182_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_box(0), v___x_1128_, v___x_1129_);
lean_inc(v_a_1085_);
lean_inc_ref(v_a_1084_);
lean_inc(v_a_1083_);
lean_inc_ref(v_a_1082_);
lean_inc(v_a_1081_);
lean_inc_ref(v_a_1080_);
v___x_1183_ = lean_apply_7(v___x_9523__overap_1182_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_, lean_box(0));
if (lean_obj_tag(v___x_1183_) == 0)
{
lean_object* v_a_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; uint8_t v___x_1188_; 
v_a_1184_ = lean_ctor_get(v___x_1183_, 0);
lean_inc(v_a_1184_);
lean_dec_ref_known(v___x_1183_, 1);
v___x_1185_ = l_Lean_KVMap_instValueBool;
v___x_1186_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1187_ = l_Lean_Option_get___redArg(v___x_1185_, v_options_1133_, v___x_1186_);
v___x_1188_ = lean_unbox(v___x_1187_);
lean_dec(v___x_1187_);
if (v___x_1188_ == 0)
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1189_ = lean_io_mono_nanos_now();
lean_inc(v_a_1085_);
lean_inc_ref(v_a_1084_);
lean_inc(v_a_1083_);
lean_inc_ref(v_a_1082_);
lean_inc(v_a_1081_);
lean_inc_ref(v_a_1080_);
v___x_1190_ = lean_apply_8(v_run_x27_1138_, v_goal_1079_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_, lean_box(0));
if (lean_obj_tag(v___x_1190_) == 0)
{
lean_object* v_a_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1198_; 
v_a_1191_ = lean_ctor_get(v___x_1190_, 0);
v_isSharedCheck_1198_ = !lean_is_exclusive(v___x_1190_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1193_ = v___x_1190_;
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_a_1191_);
lean_dec(v___x_1190_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1196_; 
if (v_isShared_1194_ == 0)
{
lean_ctor_set_tag(v___x_1193_, 1);
v___x_1196_ = v___x_1193_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_a_1191_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
v___y_1151_ = v___x_1189_;
v___y_1152_ = v_a_1184_;
v_a_1153_ = v___x_1196_;
goto v___jp_1150_;
}
}
}
else
{
lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1206_; 
v_a_1199_ = lean_ctor_get(v___x_1190_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1190_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1201_ = v___x_1190_;
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v___x_1190_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1204_; 
if (v_isShared_1202_ == 0)
{
lean_ctor_set_tag(v___x_1201_, 0);
v___x_1204_ = v___x_1201_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_a_1199_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
v___y_1151_ = v___x_1189_;
v___y_1152_ = v_a_1184_;
v_a_1153_ = v___x_1204_;
goto v___jp_1150_;
}
}
}
}
else
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
lean_del_object(v___x_1140_);
v___x_1207_ = lean_io_get_num_heartbeats();
lean_inc(v_a_1085_);
lean_inc_ref(v_a_1084_);
lean_inc(v_a_1083_);
lean_inc_ref(v_a_1082_);
lean_inc(v_a_1081_);
lean_inc_ref(v_a_1080_);
v___x_1208_ = lean_apply_8(v_run_x27_1138_, v_goal_1079_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_, lean_box(0));
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1216_; 
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1211_ = v___x_1208_;
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1208_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1214_; 
if (v_isShared_1212_ == 0)
{
lean_ctor_set_tag(v___x_1211_, 1);
v___x_1214_ = v___x_1211_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_a_1209_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
v___y_1169_ = v___x_1207_;
v___y_1170_ = v_a_1184_;
v_a_1171_ = v___x_1214_;
goto v___jp_1168_;
}
}
}
else
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
v_a_1217_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1208_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1208_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
lean_ctor_set_tag(v___x_1219_, 0);
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
v___y_1169_ = v___x_1207_;
v___y_1170_ = v_a_1184_;
v_a_1171_ = v___x_1222_;
goto v___jp_1168_;
}
}
}
}
}
else
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1232_; 
lean_dec_ref(v___f_1143_);
lean_del_object(v___x_1140_);
lean_dec(v_run_x27_1138_);
lean_dec_ref(v___x_1128_);
lean_dec(v_goal_1079_);
v_a_1225_ = lean_ctor_get(v___x_1183_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1227_ = v___x_1183_;
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1183_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___x_1230_; 
if (v_isShared_1228_ == 0)
{
v___x_1230_ = v___x_1227_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_a_1225_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
return v___x_1230_;
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
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___boxed(lean_object* v_pass_1245_, lean_object* v_goal_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_){
_start:
{
lean_object* v_res_1254_; 
v_res_1254_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run(v_pass_1245_, v_goal_1246_, v_a_1247_, v_a_1248_, v_a_1249_, v_a_1250_, v_a_1251_, v_a_1252_);
lean_dec(v_a_1252_);
lean_dec_ref(v_a_1251_);
lean_dec(v_a_1250_);
lean_dec_ref(v_a_1249_);
lean_dec(v_a_1248_);
lean_dec_ref(v_a_1247_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___lam__0(lean_object* v_name_1255_, lean_object* v_goal_1256_, lean_object* v_x_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_){
_start:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1267_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__1);
v___x_1268_ = l_Lean_MessageData_ofName(v_name_1255_);
v___x_1269_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1267_);
lean_ctor_set(v___x_1269_, 1, v___x_1268_);
v___x_1270_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___lam__0___closed__3);
v___x_1271_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1269_);
lean_ctor_set(v___x_1271_, 1, v___x_1270_);
v___x_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1272_, 0, v_goal_1256_);
v___x_1273_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1271_);
lean_ctor_set(v___x_1273_, 1, v___x_1272_);
v___x_1274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1273_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___lam__0___boxed(lean_object* v_name_1275_, lean_object* v_goal_1276_, lean_object* v_x_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_){
_start:
{
lean_object* v_res_1287_; 
v_res_1287_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___lam__0(v_name_1275_, v_goal_1276_, v_x_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
lean_dec(v___y_1285_);
lean_dec_ref(v___y_1284_);
lean_dec(v___y_1283_);
lean_dec_ref(v___y_1282_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_dec_ref(v_x_1277_);
return v_res_1287_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__0(void){
_start:
{
lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1288_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__11, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__11_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__11);
v___x_1289_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__7));
v___x_1290_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_1289_, v___x_1288_);
return v___x_1290_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__1(void){
_start:
{
lean_object* v___x_1291_; lean_object* v___f_1292_; lean_object* v___x_1293_; 
v___x_1291_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__0, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__0_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__0);
v___f_1292_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__6));
v___x_1293_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_1292_, v___x_1291_);
return v___x_1293_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__2(void){
_start:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; 
v___x_1294_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__17, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__17_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__17);
v___x_1295_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__7));
v___x_1296_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__13));
v___x_1297_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_1296_, v___x_1295_, v___x_1294_);
return v___x_1297_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__3(void){
_start:
{
lean_object* v___x_1298_; lean_object* v___f_1299_; lean_object* v___f_1300_; lean_object* v___x_1301_; 
v___x_1298_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__2);
v___f_1299_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__6));
v___f_1300_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__12));
v___x_1301_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1300_, v___f_1299_, v___x_1298_);
return v___x_1301_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__4(void){
_start:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1302_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__24, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__24_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__24);
v___x_1303_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_1302_);
return v___x_1303_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__5(void){
_start:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1304_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__4, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__4_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__4);
v___x_1305_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_1304_);
return v___x_1305_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__6(void){
_start:
{
lean_object* v___x_1306_; lean_object* v___f_1307_; lean_object* v___f_1308_; 
v___x_1306_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__7));
v___f_1307_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__26, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__26_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__26);
v___f_1308_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1308_, 0, v___f_1307_);
lean_closure_set(v___f_1308_, 1, v___x_1306_);
return v___f_1308_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__7(void){
_start:
{
lean_object* v___f_1309_; lean_object* v___f_1310_; lean_object* v___f_1311_; 
v___f_1309_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__6));
v___f_1310_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__6, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__6_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__6);
v___f_1311_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1311_, 0, v___f_1310_);
lean_closure_set(v___f_1311_, 1, v___f_1309_);
return v___f_1311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run(lean_object* v_pass_1312_, lean_object* v_goal_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_){
_start:
{
lean_object* v___x_1323_; lean_object* v_toApplicative_1324_; lean_object* v_toFunctor_1325_; lean_object* v_toSeq_1326_; lean_object* v_toSeqLeft_1327_; lean_object* v_toSeqRight_1328_; lean_object* v___f_1329_; lean_object* v___f_1330_; lean_object* v___f_1331_; lean_object* v___f_1332_; lean_object* v___x_1333_; lean_object* v___f_1334_; lean_object* v___f_1335_; lean_object* v___f_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v_toApplicative_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1481_; 
v___x_1323_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__1);
v_toApplicative_1324_ = lean_ctor_get(v___x_1323_, 0);
v_toFunctor_1325_ = lean_ctor_get(v_toApplicative_1324_, 0);
v_toSeq_1326_ = lean_ctor_get(v_toApplicative_1324_, 2);
v_toSeqLeft_1327_ = lean_ctor_get(v_toApplicative_1324_, 3);
v_toSeqRight_1328_ = lean_ctor_get(v_toApplicative_1324_, 4);
v___f_1329_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__2));
v___f_1330_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__3));
lean_inc_ref_n(v_toFunctor_1325_, 2);
v___f_1331_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1331_, 0, v_toFunctor_1325_);
v___f_1332_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1332_, 0, v_toFunctor_1325_);
v___x_1333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1333_, 0, v___f_1331_);
lean_ctor_set(v___x_1333_, 1, v___f_1332_);
lean_inc(v_toSeqRight_1328_);
v___f_1334_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1334_, 0, v_toSeqRight_1328_);
lean_inc(v_toSeqLeft_1327_);
v___f_1335_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1335_, 0, v_toSeqLeft_1327_);
lean_inc(v_toSeq_1326_);
v___f_1336_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1336_, 0, v_toSeq_1326_);
v___x_1337_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1333_);
lean_ctor_set(v___x_1337_, 1, v___f_1329_);
lean_ctor_set(v___x_1337_, 2, v___f_1336_);
lean_ctor_set(v___x_1337_, 3, v___f_1335_);
lean_ctor_set(v___x_1337_, 4, v___f_1334_);
v___x_1338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1337_);
lean_ctor_set(v___x_1338_, 1, v___f_1330_);
v___x_1339_ = l_StateRefT_x27_instMonad___redArg(v___x_1338_);
v_toApplicative_1340_ = lean_ctor_get(v___x_1339_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1481_ == 0)
{
lean_object* v_unused_1482_; 
v_unused_1482_ = lean_ctor_get(v___x_1339_, 1);
lean_dec(v_unused_1482_);
v___x_1342_ = v___x_1339_;
v_isShared_1343_ = v_isSharedCheck_1481_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_toApplicative_1340_);
lean_dec(v___x_1339_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1481_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v_toFunctor_1344_; lean_object* v_toSeq_1345_; lean_object* v_toSeqLeft_1346_; lean_object* v_toSeqRight_1347_; lean_object* v___x_1349_; uint8_t v_isShared_1350_; uint8_t v_isSharedCheck_1479_; 
v_toFunctor_1344_ = lean_ctor_get(v_toApplicative_1340_, 0);
v_toSeq_1345_ = lean_ctor_get(v_toApplicative_1340_, 2);
v_toSeqLeft_1346_ = lean_ctor_get(v_toApplicative_1340_, 3);
v_toSeqRight_1347_ = lean_ctor_get(v_toApplicative_1340_, 4);
v_isSharedCheck_1479_ = !lean_is_exclusive(v_toApplicative_1340_);
if (v_isSharedCheck_1479_ == 0)
{
lean_object* v_unused_1480_; 
v_unused_1480_ = lean_ctor_get(v_toApplicative_1340_, 1);
lean_dec(v_unused_1480_);
v___x_1349_ = v_toApplicative_1340_;
v_isShared_1350_ = v_isSharedCheck_1479_;
goto v_resetjp_1348_;
}
else
{
lean_inc(v_toSeqRight_1347_);
lean_inc(v_toSeqLeft_1346_);
lean_inc(v_toSeq_1345_);
lean_inc(v_toFunctor_1344_);
lean_dec(v_toApplicative_1340_);
v___x_1349_ = lean_box(0);
v_isShared_1350_ = v_isSharedCheck_1479_;
goto v_resetjp_1348_;
}
v_resetjp_1348_:
{
lean_object* v___f_1351_; lean_object* v___f_1352_; lean_object* v___f_1353_; lean_object* v___f_1354_; lean_object* v___x_1355_; lean_object* v___f_1356_; lean_object* v___f_1357_; lean_object* v___f_1358_; lean_object* v___x_1360_; 
v___f_1351_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__4));
v___f_1352_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__5));
lean_inc_ref(v_toFunctor_1344_);
v___f_1353_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1353_, 0, v_toFunctor_1344_);
v___f_1354_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1354_, 0, v_toFunctor_1344_);
v___x_1355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1355_, 0, v___f_1353_);
lean_ctor_set(v___x_1355_, 1, v___f_1354_);
v___f_1356_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1356_, 0, v_toSeqRight_1347_);
v___f_1357_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1357_, 0, v_toSeqLeft_1346_);
v___f_1358_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1358_, 0, v_toSeq_1345_);
if (v_isShared_1350_ == 0)
{
lean_ctor_set(v___x_1349_, 4, v___f_1356_);
lean_ctor_set(v___x_1349_, 3, v___f_1357_);
lean_ctor_set(v___x_1349_, 2, v___f_1358_);
lean_ctor_set(v___x_1349_, 1, v___f_1351_);
lean_ctor_set(v___x_1349_, 0, v___x_1355_);
v___x_1360_ = v___x_1349_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v___x_1355_);
lean_ctor_set(v_reuseFailAlloc_1478_, 1, v___f_1351_);
lean_ctor_set(v_reuseFailAlloc_1478_, 2, v___f_1358_);
lean_ctor_set(v_reuseFailAlloc_1478_, 3, v___f_1357_);
lean_ctor_set(v_reuseFailAlloc_1478_, 4, v___f_1356_);
v___x_1360_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
lean_object* v___x_1362_; 
if (v_isShared_1343_ == 0)
{
lean_ctor_set(v___x_1342_, 1, v___f_1352_);
lean_ctor_set(v___x_1342_, 0, v___x_1360_);
v___x_1362_ = v___x_1342_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v___x_1360_);
lean_ctor_set(v_reuseFailAlloc_1477_, 1, v___f_1352_);
v___x_1362_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v_toMonadRef_1369_; lean_object* v___x_1370_; lean_object* v_options_1371_; uint8_t v_hasTrace_1372_; 
v___x_1363_ = l_StateRefT_x27_instMonad___redArg(v___x_1362_);
v___x_1364_ = l_ReaderT_instMonad___redArg(v___x_1363_);
v___x_1365_ = l_StateRefT_x27_instMonad___redArg(v___x_1364_);
v___x_1366_ = l_ReaderT_instMonad___redArg(v___x_1365_);
v___x_1367_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__1, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__1_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__1);
v___x_1368_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__3, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__3_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__3);
v_toMonadRef_1369_ = lean_ctor_get(v___x_1368_, 0);
v___x_1370_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__5, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__5_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__5);
v_options_1371_ = lean_ctor_get(v_a_1320_, 2);
v_hasTrace_1372_ = lean_ctor_get_uint8(v_options_1371_, sizeof(void*)*1);
if (v_hasTrace_1372_ == 0)
{
lean_object* v_run_x27_1373_; lean_object* v___x_1374_; 
lean_dec_ref(v___x_1366_);
v_run_x27_1373_ = lean_ctor_get(v_pass_1312_, 1);
lean_inc(v_run_x27_1373_);
lean_dec_ref(v_pass_1312_);
lean_inc(v_a_1321_);
lean_inc_ref(v_a_1320_);
lean_inc(v_a_1319_);
lean_inc_ref(v_a_1318_);
lean_inc(v_a_1317_);
lean_inc_ref(v_a_1316_);
lean_inc(v_a_1315_);
lean_inc_ref(v_a_1314_);
v___x_1374_ = lean_apply_10(v_run_x27_1373_, v_goal_1313_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_, lean_box(0));
return v___x_1374_;
}
else
{
lean_object* v_name_1375_; lean_object* v_run_x27_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1476_; 
v_name_1375_ = lean_ctor_get(v_pass_1312_, 0);
v_run_x27_1376_ = lean_ctor_get(v_pass_1312_, 1);
v_isSharedCheck_1476_ = !lean_is_exclusive(v_pass_1312_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1378_ = v_pass_1312_;
v_isShared_1379_ = v_isSharedCheck_1476_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_run_x27_1376_);
lean_inc(v_name_1375_);
lean_dec(v_pass_1312_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1476_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v_inheritedTraceOptions_1380_; lean_object* v___f_1381_; lean_object* v___f_1382_; lean_object* v___f_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; uint8_t v___x_1387_; lean_object* v___y_1389_; lean_object* v___y_1390_; lean_object* v_a_1391_; lean_object* v___y_1407_; lean_object* v___y_1408_; lean_object* v_a_1409_; 
v_inheritedTraceOptions_1380_ = lean_ctor_get(v_a_1320_, 13);
lean_inc(v_goal_1313_);
v___f_1381_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___lam__0___boxed), 12, 2);
lean_closure_set(v___f_1381_, 0, v_name_1375_);
lean_closure_set(v___f_1381_, 1, v_goal_1313_);
v___f_1382_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__7, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__7_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___closed__7);
v___f_1383_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__27));
v___x_1384_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__31));
v___x_1385_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__32));
v___x_1386_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35);
v___x_1387_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1380_, v_options_1371_, v___x_1386_);
if (v___x_1387_ == 0)
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; uint8_t v___x_1474_; 
v___x_1471_ = l_Lean_KVMap_instValueBool;
v___x_1472_ = l_Lean_trace_profiler;
v___x_1473_ = l_Lean_Option_get___redArg(v___x_1471_, v_options_1371_, v___x_1472_);
v___x_1474_ = lean_unbox(v___x_1473_);
lean_dec(v___x_1473_);
if (v___x_1474_ == 0)
{
lean_object* v___x_1475_; 
lean_dec_ref(v___f_1381_);
lean_del_object(v___x_1378_);
lean_dec_ref(v___x_1366_);
lean_inc(v_a_1321_);
lean_inc_ref(v_a_1320_);
lean_inc(v_a_1319_);
lean_inc_ref(v_a_1318_);
lean_inc(v_a_1317_);
lean_inc_ref(v_a_1316_);
lean_inc(v_a_1315_);
lean_inc_ref(v_a_1314_);
v___x_1475_ = lean_apply_10(v_run_x27_1376_, v_goal_1313_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_, lean_box(0));
return v___x_1475_;
}
else
{
goto v___jp_1419_;
}
}
else
{
goto v___jp_1419_;
}
v___jp_1388_:
{
lean_object* v___x_1392_; double v___x_1393_; double v___x_1394_; double v___x_1395_; double v___x_1396_; double v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1401_; 
v___x_1392_ = lean_io_mono_nanos_now();
v___x_1393_ = lean_float_of_nat(v___y_1389_);
v___x_1394_ = lean_float_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__36, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__36_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__36);
v___x_1395_ = lean_float_div(v___x_1393_, v___x_1394_);
v___x_1396_ = lean_float_of_nat(v___x_1392_);
v___x_1397_ = lean_float_div(v___x_1396_, v___x_1394_);
v___x_1398_ = lean_box_float(v___x_1395_);
v___x_1399_ = lean_box_float(v___x_1397_);
if (v_isShared_1379_ == 0)
{
lean_ctor_set(v___x_1378_, 1, v___x_1399_);
lean_ctor_set(v___x_1378_, 0, v___x_1398_);
v___x_1401_ = v___x_1378_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v___x_1398_);
lean_ctor_set(v_reuseFailAlloc_1405_, 1, v___x_1399_);
v___x_1401_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
lean_object* v___x_1402_; lean_object* v___x_17003__overap_1403_; lean_object* v___x_1404_; 
v___x_1402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1402_, 0, v_a_1391_);
lean_ctor_set(v___x_1402_, 1, v___x_1401_);
lean_inc_ref(v_toMonadRef_1369_);
v___x_17003__overap_1403_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_box(0), lean_box(0), v___x_1366_, v___x_1367_, v_toMonadRef_1369_, v___f_1382_, lean_box(0), v___x_1370_, v___f_1383_, v___x_1384_, v_hasTrace_1372_, v___x_1385_, v_options_1371_, v___x_1387_, v___y_1390_, v___f_1381_, v___x_1402_);
lean_inc(v_a_1321_);
lean_inc_ref(v_a_1320_);
lean_inc(v_a_1319_);
lean_inc_ref(v_a_1318_);
lean_inc(v_a_1317_);
lean_inc_ref(v_a_1316_);
lean_inc(v_a_1315_);
lean_inc_ref(v_a_1314_);
v___x_1404_ = lean_apply_9(v___x_17003__overap_1403_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_, lean_box(0));
return v___x_1404_;
}
}
v___jp_1406_:
{
lean_object* v___x_1410_; double v___x_1411_; double v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_17024__overap_1417_; lean_object* v___x_1418_; 
v___x_1410_ = lean_io_get_num_heartbeats();
v___x_1411_ = lean_float_of_nat(v___y_1407_);
v___x_1412_ = lean_float_of_nat(v___x_1410_);
v___x_1413_ = lean_box_float(v___x_1411_);
v___x_1414_ = lean_box_float(v___x_1412_);
v___x_1415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1415_, 0, v___x_1413_);
lean_ctor_set(v___x_1415_, 1, v___x_1414_);
v___x_1416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1416_, 0, v_a_1409_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
lean_inc_ref(v_toMonadRef_1369_);
v___x_17024__overap_1417_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_box(0), lean_box(0), v___x_1366_, v___x_1367_, v_toMonadRef_1369_, v___f_1382_, lean_box(0), v___x_1370_, v___f_1383_, v___x_1384_, v_hasTrace_1372_, v___x_1385_, v_options_1371_, v___x_1387_, v___y_1408_, v___f_1381_, v___x_1416_);
lean_inc(v_a_1321_);
lean_inc_ref(v_a_1320_);
lean_inc(v_a_1319_);
lean_inc_ref(v_a_1318_);
lean_inc(v_a_1317_);
lean_inc_ref(v_a_1316_);
lean_inc(v_a_1315_);
lean_inc_ref(v_a_1314_);
v___x_1418_ = lean_apply_9(v___x_17024__overap_1417_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_, lean_box(0));
return v___x_1418_;
}
v___jp_1419_:
{
lean_object* v___x_16980__overap_1420_; lean_object* v___x_1421_; 
lean_inc_ref(v___x_1366_);
v___x_16980__overap_1420_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_box(0), v___x_1366_, v___x_1367_);
lean_inc(v_a_1321_);
lean_inc_ref(v_a_1320_);
lean_inc(v_a_1319_);
lean_inc_ref(v_a_1318_);
lean_inc(v_a_1317_);
lean_inc_ref(v_a_1316_);
lean_inc(v_a_1315_);
lean_inc_ref(v_a_1314_);
v___x_1421_ = lean_apply_9(v___x_16980__overap_1420_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_, lean_box(0));
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; uint8_t v___x_1426_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
lean_inc(v_a_1422_);
lean_dec_ref_known(v___x_1421_, 1);
v___x_1423_ = l_Lean_KVMap_instValueBool;
v___x_1424_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1425_ = l_Lean_Option_get___redArg(v___x_1423_, v_options_1371_, v___x_1424_);
v___x_1426_ = lean_unbox(v___x_1425_);
lean_dec(v___x_1425_);
if (v___x_1426_ == 0)
{
lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1427_ = lean_io_mono_nanos_now();
lean_inc(v_a_1321_);
lean_inc_ref(v_a_1320_);
lean_inc(v_a_1319_);
lean_inc_ref(v_a_1318_);
lean_inc(v_a_1317_);
lean_inc_ref(v_a_1316_);
lean_inc(v_a_1315_);
lean_inc_ref(v_a_1314_);
v___x_1428_ = lean_apply_10(v_run_x27_1376_, v_goal_1313_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_, lean_box(0));
if (lean_obj_tag(v___x_1428_) == 0)
{
lean_object* v_a_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1436_; 
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
v_isSharedCheck_1436_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1431_ = v___x_1428_;
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_a_1429_);
lean_dec(v___x_1428_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1434_; 
if (v_isShared_1432_ == 0)
{
lean_ctor_set_tag(v___x_1431_, 1);
v___x_1434_ = v___x_1431_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_a_1429_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
v___y_1389_ = v___x_1427_;
v___y_1390_ = v_a_1422_;
v_a_1391_ = v___x_1434_;
goto v___jp_1388_;
}
}
}
else
{
lean_object* v_a_1437_; lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1444_; 
v_a_1437_ = lean_ctor_get(v___x_1428_, 0);
v_isSharedCheck_1444_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1439_ = v___x_1428_;
v_isShared_1440_ = v_isSharedCheck_1444_;
goto v_resetjp_1438_;
}
else
{
lean_inc(v_a_1437_);
lean_dec(v___x_1428_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1444_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___x_1442_; 
if (v_isShared_1440_ == 0)
{
lean_ctor_set_tag(v___x_1439_, 0);
v___x_1442_ = v___x_1439_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v_a_1437_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
v___y_1389_ = v___x_1427_;
v___y_1390_ = v_a_1422_;
v_a_1391_ = v___x_1442_;
goto v___jp_1388_;
}
}
}
}
else
{
lean_object* v___x_1445_; lean_object* v___x_1446_; 
lean_del_object(v___x_1378_);
v___x_1445_ = lean_io_get_num_heartbeats();
lean_inc(v_a_1321_);
lean_inc_ref(v_a_1320_);
lean_inc(v_a_1319_);
lean_inc_ref(v_a_1318_);
lean_inc(v_a_1317_);
lean_inc_ref(v_a_1316_);
lean_inc(v_a_1315_);
lean_inc_ref(v_a_1314_);
v___x_1446_ = lean_apply_10(v_run_x27_1376_, v_goal_1313_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_, lean_box(0));
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v_a_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1454_; 
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1449_ = v___x_1446_;
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_a_1447_);
lean_dec(v___x_1446_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1452_; 
if (v_isShared_1450_ == 0)
{
lean_ctor_set_tag(v___x_1449_, 1);
v___x_1452_ = v___x_1449_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_a_1447_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
v___y_1407_ = v___x_1445_;
v___y_1408_ = v_a_1422_;
v_a_1409_ = v___x_1452_;
goto v___jp_1406_;
}
}
}
else
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1462_; 
v_a_1455_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1457_ = v___x_1446_;
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1446_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
lean_ctor_set_tag(v___x_1457_, 0);
v___x_1460_ = v___x_1457_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v_a_1455_);
v___x_1460_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
v___y_1407_ = v___x_1445_;
v___y_1408_ = v_a_1422_;
v_a_1409_ = v___x_1460_;
goto v___jp_1406_;
}
}
}
}
}
else
{
lean_object* v_a_1463_; lean_object* v___x_1465_; uint8_t v_isShared_1466_; uint8_t v_isSharedCheck_1470_; 
lean_dec_ref(v___f_1381_);
lean_del_object(v___x_1378_);
lean_dec(v_run_x27_1376_);
lean_dec_ref(v___x_1366_);
lean_dec(v_goal_1313_);
v_a_1463_ = lean_ctor_get(v___x_1421_, 0);
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1465_ = v___x_1421_;
v_isShared_1466_ = v_isSharedCheck_1470_;
goto v_resetjp_1464_;
}
else
{
lean_inc(v_a_1463_);
lean_dec(v___x_1421_);
v___x_1465_ = lean_box(0);
v_isShared_1466_ = v_isSharedCheck_1470_;
goto v_resetjp_1464_;
}
v_resetjp_1464_:
{
lean_object* v___x_1468_; 
if (v_isShared_1466_ == 0)
{
v___x_1468_ = v___x_1465_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v_a_1463_);
v___x_1468_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
return v___x_1468_;
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
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___boxed(lean_object* v_pass_1483_, lean_object* v_goal_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_){
_start:
{
lean_object* v_res_1494_; 
v_res_1494_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run(v_pass_1483_, v_goal_1484_, v_a_1485_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_);
lean_dec(v_a_1492_);
lean_dec_ref(v_a_1491_);
lean_dec(v_a_1490_);
lean_dec_ref(v_a_1489_);
lean_dec(v_a_1488_);
lean_dec_ref(v_a_1487_);
lean_dec(v_a_1486_);
lean_dec_ref(v_a_1485_);
return v_res_1494_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1495_ = lean_unsigned_to_nat(32u);
v___x_1496_ = lean_mk_empty_array_with_capacity(v___x_1495_);
v___x_1497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1497_, 0, v___x_1496_);
return v___x_1497_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1498_ = ((size_t)5ULL);
v___x_1499_ = lean_unsigned_to_nat(0u);
v___x_1500_ = lean_unsigned_to_nat(32u);
v___x_1501_ = lean_mk_empty_array_with_capacity(v___x_1500_);
v___x_1502_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg___closed__0);
v___x_1503_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1503_, 0, v___x_1502_);
lean_ctor_set(v___x_1503_, 1, v___x_1501_);
lean_ctor_set(v___x_1503_, 2, v___x_1499_);
lean_ctor_set(v___x_1503_, 3, v___x_1499_);
lean_ctor_set_usize(v___x_1503_, 4, v___x_1498_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg(lean_object* v___y_1504_){
_start:
{
lean_object* v___x_1506_; lean_object* v_traceState_1507_; lean_object* v_traces_1508_; lean_object* v___x_1509_; lean_object* v_traceState_1510_; lean_object* v_env_1511_; lean_object* v_nextMacroScope_1512_; lean_object* v_ngen_1513_; lean_object* v_auxDeclNGen_1514_; lean_object* v_cache_1515_; lean_object* v_messages_1516_; lean_object* v_infoState_1517_; lean_object* v_snapshotTasks_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1537_; 
v___x_1506_ = lean_st_ref_get(v___y_1504_);
v_traceState_1507_ = lean_ctor_get(v___x_1506_, 4);
lean_inc_ref(v_traceState_1507_);
lean_dec(v___x_1506_);
v_traces_1508_ = lean_ctor_get(v_traceState_1507_, 0);
lean_inc_ref(v_traces_1508_);
lean_dec_ref(v_traceState_1507_);
v___x_1509_ = lean_st_ref_take(v___y_1504_);
v_traceState_1510_ = lean_ctor_get(v___x_1509_, 4);
v_env_1511_ = lean_ctor_get(v___x_1509_, 0);
v_nextMacroScope_1512_ = lean_ctor_get(v___x_1509_, 1);
v_ngen_1513_ = lean_ctor_get(v___x_1509_, 2);
v_auxDeclNGen_1514_ = lean_ctor_get(v___x_1509_, 3);
v_cache_1515_ = lean_ctor_get(v___x_1509_, 5);
v_messages_1516_ = lean_ctor_get(v___x_1509_, 6);
v_infoState_1517_ = lean_ctor_get(v___x_1509_, 7);
v_snapshotTasks_1518_ = lean_ctor_get(v___x_1509_, 8);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1520_ = v___x_1509_;
v_isShared_1521_ = v_isSharedCheck_1537_;
goto v_resetjp_1519_;
}
else
{
lean_inc(v_snapshotTasks_1518_);
lean_inc(v_infoState_1517_);
lean_inc(v_messages_1516_);
lean_inc(v_cache_1515_);
lean_inc(v_traceState_1510_);
lean_inc(v_auxDeclNGen_1514_);
lean_inc(v_ngen_1513_);
lean_inc(v_nextMacroScope_1512_);
lean_inc(v_env_1511_);
lean_dec(v___x_1509_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1537_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
uint64_t v_tid_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1535_; 
v_tid_1522_ = lean_ctor_get_uint64(v_traceState_1510_, sizeof(void*)*1);
v_isSharedCheck_1535_ = !lean_is_exclusive(v_traceState_1510_);
if (v_isSharedCheck_1535_ == 0)
{
lean_object* v_unused_1536_; 
v_unused_1536_ = lean_ctor_get(v_traceState_1510_, 0);
lean_dec(v_unused_1536_);
v___x_1524_ = v_traceState_1510_;
v_isShared_1525_ = v_isSharedCheck_1535_;
goto v_resetjp_1523_;
}
else
{
lean_dec(v_traceState_1510_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1535_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1526_; lean_object* v___x_1528_; 
v___x_1526_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg___closed__1);
if (v_isShared_1525_ == 0)
{
lean_ctor_set(v___x_1524_, 0, v___x_1526_);
v___x_1528_ = v___x_1524_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v___x_1526_);
lean_ctor_set_uint64(v_reuseFailAlloc_1534_, sizeof(void*)*1, v_tid_1522_);
v___x_1528_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
lean_object* v___x_1530_; 
if (v_isShared_1521_ == 0)
{
lean_ctor_set(v___x_1520_, 4, v___x_1528_);
v___x_1530_ = v___x_1520_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v_env_1511_);
lean_ctor_set(v_reuseFailAlloc_1533_, 1, v_nextMacroScope_1512_);
lean_ctor_set(v_reuseFailAlloc_1533_, 2, v_ngen_1513_);
lean_ctor_set(v_reuseFailAlloc_1533_, 3, v_auxDeclNGen_1514_);
lean_ctor_set(v_reuseFailAlloc_1533_, 4, v___x_1528_);
lean_ctor_set(v_reuseFailAlloc_1533_, 5, v_cache_1515_);
lean_ctor_set(v_reuseFailAlloc_1533_, 6, v_messages_1516_);
lean_ctor_set(v_reuseFailAlloc_1533_, 7, v_infoState_1517_);
lean_ctor_set(v_reuseFailAlloc_1533_, 8, v_snapshotTasks_1518_);
v___x_1530_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1531_ = lean_st_ref_set(v___y_1504_, v___x_1530_);
v___x_1532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1532_, 0, v_traces_1508_);
return v___x_1532_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg___boxed(lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg(v___y_1538_);
lean_dec(v___y_1538_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1(lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_){
_start:
{
lean_object* v___x_1550_; 
v___x_1550_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg(v___y_1548_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___boxed(lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_){
_start:
{
lean_object* v_res_1560_; 
v_res_1560_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1(v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_);
lean_dec(v___y_1558_);
lean_dec_ref(v___y_1557_);
lean_dec(v___y_1556_);
lean_dec_ref(v___y_1555_);
lean_dec(v___y_1554_);
lean_dec_ref(v___y_1553_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
return v_res_1560_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__2(lean_object* v_opts_1561_, lean_object* v_opt_1562_){
_start:
{
lean_object* v_name_1563_; lean_object* v_defValue_1564_; lean_object* v_map_1565_; lean_object* v___x_1566_; 
v_name_1563_ = lean_ctor_get(v_opt_1562_, 0);
v_defValue_1564_ = lean_ctor_get(v_opt_1562_, 1);
v_map_1565_ = lean_ctor_get(v_opts_1561_, 0);
v___x_1566_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1565_, v_name_1563_);
if (lean_obj_tag(v___x_1566_) == 0)
{
uint8_t v___x_1567_; 
v___x_1567_ = lean_unbox(v_defValue_1564_);
return v___x_1567_;
}
else
{
lean_object* v_val_1568_; 
v_val_1568_ = lean_ctor_get(v___x_1566_, 0);
lean_inc(v_val_1568_);
lean_dec_ref_known(v___x_1566_, 1);
if (lean_obj_tag(v_val_1568_) == 1)
{
uint8_t v_v_1569_; 
v_v_1569_ = lean_ctor_get_uint8(v_val_1568_, 0);
lean_dec_ref_known(v_val_1568_, 0);
return v_v_1569_;
}
else
{
uint8_t v___x_1570_; 
lean_dec(v_val_1568_);
v___x_1570_ = lean_unbox(v_defValue_1564_);
return v___x_1570_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__2___boxed(lean_object* v_opts_1571_, lean_object* v_opt_1572_){
_start:
{
uint8_t v_res_1573_; lean_object* v_r_1574_; 
v_res_1573_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__2(v_opts_1571_, v_opt_1572_);
lean_dec_ref(v_opt_1572_);
lean_dec_ref(v_opts_1571_);
v_r_1574_ = lean_box(v_res_1573_);
return v_r_1574_;
}
}
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__4(lean_object* v_e_1575_){
_start:
{
if (lean_obj_tag(v_e_1575_) == 0)
{
uint8_t v___x_1576_; 
v___x_1576_ = 2;
return v___x_1576_;
}
else
{
lean_object* v_a_1577_; 
v_a_1577_ = lean_ctor_get(v_e_1575_, 0);
if (lean_obj_tag(v_a_1577_) == 0)
{
uint8_t v___x_1578_; 
v___x_1578_ = 1;
return v___x_1578_;
}
else
{
uint8_t v___x_1579_; 
v___x_1579_ = 0;
return v___x_1579_;
}
}
}
}
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__4___boxed(lean_object* v_e_1580_){
_start:
{
uint8_t v_res_1581_; lean_object* v_r_1582_; 
v_res_1581_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__4(v_e_1580_);
lean_dec_ref(v_e_1580_);
v_r_1582_ = lean_box(v_res_1581_);
return v_r_1582_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5_spec__6(size_t v_sz_1583_, size_t v_i_1584_, lean_object* v_bs_1585_){
_start:
{
uint8_t v___x_1586_; 
v___x_1586_ = lean_usize_dec_lt(v_i_1584_, v_sz_1583_);
if (v___x_1586_ == 0)
{
return v_bs_1585_;
}
else
{
lean_object* v_v_1587_; lean_object* v_msg_1588_; lean_object* v___x_1589_; lean_object* v_bs_x27_1590_; size_t v___x_1591_; size_t v___x_1592_; lean_object* v___x_1593_; 
v_v_1587_ = lean_array_uget_borrowed(v_bs_1585_, v_i_1584_);
v_msg_1588_ = lean_ctor_get(v_v_1587_, 1);
lean_inc_ref(v_msg_1588_);
v___x_1589_ = lean_unsigned_to_nat(0u);
v_bs_x27_1590_ = lean_array_uset(v_bs_1585_, v_i_1584_, v___x_1589_);
v___x_1591_ = ((size_t)1ULL);
v___x_1592_ = lean_usize_add(v_i_1584_, v___x_1591_);
v___x_1593_ = lean_array_uset(v_bs_x27_1590_, v_i_1584_, v_msg_1588_);
v_i_1584_ = v___x_1592_;
v_bs_1585_ = v___x_1593_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5_spec__6___boxed(lean_object* v_sz_1595_, lean_object* v_i_1596_, lean_object* v_bs_1597_){
_start:
{
size_t v_sz_boxed_1598_; size_t v_i_boxed_1599_; lean_object* v_res_1600_; 
v_sz_boxed_1598_ = lean_unbox_usize(v_sz_1595_);
lean_dec(v_sz_1595_);
v_i_boxed_1599_ = lean_unbox_usize(v_i_1596_);
lean_dec(v_i_1596_);
v_res_1600_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5_spec__6(v_sz_boxed_1598_, v_i_boxed_1599_, v_bs_1597_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0_spec__0(lean_object* v_msgData_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_){
_start:
{
lean_object* v___x_1607_; lean_object* v_env_1608_; lean_object* v___x_1609_; lean_object* v_mctx_1610_; lean_object* v_lctx_1611_; lean_object* v_options_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1607_ = lean_st_ref_get(v___y_1605_);
v_env_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc_ref(v_env_1608_);
lean_dec(v___x_1607_);
v___x_1609_ = lean_st_ref_get(v___y_1603_);
v_mctx_1610_ = lean_ctor_get(v___x_1609_, 0);
lean_inc_ref(v_mctx_1610_);
lean_dec(v___x_1609_);
v_lctx_1611_ = lean_ctor_get(v___y_1602_, 2);
v_options_1612_ = lean_ctor_get(v___y_1604_, 2);
lean_inc_ref(v_options_1612_);
lean_inc_ref(v_lctx_1611_);
v___x_1613_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1613_, 0, v_env_1608_);
lean_ctor_set(v___x_1613_, 1, v_mctx_1610_);
lean_ctor_set(v___x_1613_, 2, v_lctx_1611_);
lean_ctor_set(v___x_1613_, 3, v_options_1612_);
v___x_1614_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1613_);
lean_ctor_set(v___x_1614_, 1, v_msgData_1601_);
v___x_1615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1614_);
return v___x_1615_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0_spec__0___boxed(lean_object* v_msgData_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0_spec__0(v_msgData_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5___redArg(lean_object* v_oldTraces_1623_, lean_object* v_data_1624_, lean_object* v_ref_1625_, lean_object* v_msg_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v_fileName_1632_; lean_object* v_fileMap_1633_; lean_object* v_options_1634_; lean_object* v_currRecDepth_1635_; lean_object* v_maxRecDepth_1636_; lean_object* v_ref_1637_; lean_object* v_currNamespace_1638_; lean_object* v_openDecls_1639_; lean_object* v_initHeartbeats_1640_; lean_object* v_maxHeartbeats_1641_; lean_object* v_quotContext_1642_; lean_object* v_currMacroScope_1643_; uint8_t v_diag_1644_; lean_object* v_cancelTk_x3f_1645_; uint8_t v_suppressElabErrors_1646_; lean_object* v_inheritedTraceOptions_1647_; lean_object* v___x_1648_; lean_object* v_traceState_1649_; lean_object* v_traces_1650_; lean_object* v_ref_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; size_t v_sz_1654_; size_t v___x_1655_; lean_object* v___x_1656_; lean_object* v_msg_1657_; lean_object* v___x_1658_; lean_object* v_a_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1696_; 
v_fileName_1632_ = lean_ctor_get(v___y_1629_, 0);
v_fileMap_1633_ = lean_ctor_get(v___y_1629_, 1);
v_options_1634_ = lean_ctor_get(v___y_1629_, 2);
v_currRecDepth_1635_ = lean_ctor_get(v___y_1629_, 3);
v_maxRecDepth_1636_ = lean_ctor_get(v___y_1629_, 4);
v_ref_1637_ = lean_ctor_get(v___y_1629_, 5);
v_currNamespace_1638_ = lean_ctor_get(v___y_1629_, 6);
v_openDecls_1639_ = lean_ctor_get(v___y_1629_, 7);
v_initHeartbeats_1640_ = lean_ctor_get(v___y_1629_, 8);
v_maxHeartbeats_1641_ = lean_ctor_get(v___y_1629_, 9);
v_quotContext_1642_ = lean_ctor_get(v___y_1629_, 10);
v_currMacroScope_1643_ = lean_ctor_get(v___y_1629_, 11);
v_diag_1644_ = lean_ctor_get_uint8(v___y_1629_, sizeof(void*)*14);
v_cancelTk_x3f_1645_ = lean_ctor_get(v___y_1629_, 12);
v_suppressElabErrors_1646_ = lean_ctor_get_uint8(v___y_1629_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1647_ = lean_ctor_get(v___y_1629_, 13);
v___x_1648_ = lean_st_ref_get(v___y_1630_);
v_traceState_1649_ = lean_ctor_get(v___x_1648_, 4);
lean_inc_ref(v_traceState_1649_);
lean_dec(v___x_1648_);
v_traces_1650_ = lean_ctor_get(v_traceState_1649_, 0);
lean_inc_ref(v_traces_1650_);
lean_dec_ref(v_traceState_1649_);
v_ref_1651_ = l_Lean_replaceRef(v_ref_1625_, v_ref_1637_);
lean_inc_ref(v_inheritedTraceOptions_1647_);
lean_inc(v_cancelTk_x3f_1645_);
lean_inc(v_currMacroScope_1643_);
lean_inc(v_quotContext_1642_);
lean_inc(v_maxHeartbeats_1641_);
lean_inc(v_initHeartbeats_1640_);
lean_inc(v_openDecls_1639_);
lean_inc(v_currNamespace_1638_);
lean_inc(v_maxRecDepth_1636_);
lean_inc(v_currRecDepth_1635_);
lean_inc_ref(v_options_1634_);
lean_inc_ref(v_fileMap_1633_);
lean_inc_ref(v_fileName_1632_);
v___x_1652_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1652_, 0, v_fileName_1632_);
lean_ctor_set(v___x_1652_, 1, v_fileMap_1633_);
lean_ctor_set(v___x_1652_, 2, v_options_1634_);
lean_ctor_set(v___x_1652_, 3, v_currRecDepth_1635_);
lean_ctor_set(v___x_1652_, 4, v_maxRecDepth_1636_);
lean_ctor_set(v___x_1652_, 5, v_ref_1651_);
lean_ctor_set(v___x_1652_, 6, v_currNamespace_1638_);
lean_ctor_set(v___x_1652_, 7, v_openDecls_1639_);
lean_ctor_set(v___x_1652_, 8, v_initHeartbeats_1640_);
lean_ctor_set(v___x_1652_, 9, v_maxHeartbeats_1641_);
lean_ctor_set(v___x_1652_, 10, v_quotContext_1642_);
lean_ctor_set(v___x_1652_, 11, v_currMacroScope_1643_);
lean_ctor_set(v___x_1652_, 12, v_cancelTk_x3f_1645_);
lean_ctor_set(v___x_1652_, 13, v_inheritedTraceOptions_1647_);
lean_ctor_set_uint8(v___x_1652_, sizeof(void*)*14, v_diag_1644_);
lean_ctor_set_uint8(v___x_1652_, sizeof(void*)*14 + 1, v_suppressElabErrors_1646_);
v___x_1653_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1650_);
lean_dec_ref(v_traces_1650_);
v_sz_1654_ = lean_array_size(v___x_1653_);
v___x_1655_ = ((size_t)0ULL);
v___x_1656_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5_spec__6(v_sz_1654_, v___x_1655_, v___x_1653_);
v_msg_1657_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1657_, 0, v_data_1624_);
lean_ctor_set(v_msg_1657_, 1, v_msg_1626_);
lean_ctor_set(v_msg_1657_, 2, v___x_1656_);
v___x_1658_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0_spec__0(v_msg_1657_, v___y_1627_, v___y_1628_, v___x_1652_, v___y_1630_);
lean_dec_ref_known(v___x_1652_, 14);
v_a_1659_ = lean_ctor_get(v___x_1658_, 0);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1661_ = v___x_1658_;
v_isShared_1662_ = v_isSharedCheck_1696_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_a_1659_);
lean_dec(v___x_1658_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1696_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v___x_1663_; lean_object* v_traceState_1664_; lean_object* v_env_1665_; lean_object* v_nextMacroScope_1666_; lean_object* v_ngen_1667_; lean_object* v_auxDeclNGen_1668_; lean_object* v_cache_1669_; lean_object* v_messages_1670_; lean_object* v_infoState_1671_; lean_object* v_snapshotTasks_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1695_; 
v___x_1663_ = lean_st_ref_take(v___y_1630_);
v_traceState_1664_ = lean_ctor_get(v___x_1663_, 4);
v_env_1665_ = lean_ctor_get(v___x_1663_, 0);
v_nextMacroScope_1666_ = lean_ctor_get(v___x_1663_, 1);
v_ngen_1667_ = lean_ctor_get(v___x_1663_, 2);
v_auxDeclNGen_1668_ = lean_ctor_get(v___x_1663_, 3);
v_cache_1669_ = lean_ctor_get(v___x_1663_, 5);
v_messages_1670_ = lean_ctor_get(v___x_1663_, 6);
v_infoState_1671_ = lean_ctor_get(v___x_1663_, 7);
v_snapshotTasks_1672_ = lean_ctor_get(v___x_1663_, 8);
v_isSharedCheck_1695_ = !lean_is_exclusive(v___x_1663_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1674_ = v___x_1663_;
v_isShared_1675_ = v_isSharedCheck_1695_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_snapshotTasks_1672_);
lean_inc(v_infoState_1671_);
lean_inc(v_messages_1670_);
lean_inc(v_cache_1669_);
lean_inc(v_traceState_1664_);
lean_inc(v_auxDeclNGen_1668_);
lean_inc(v_ngen_1667_);
lean_inc(v_nextMacroScope_1666_);
lean_inc(v_env_1665_);
lean_dec(v___x_1663_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1695_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
uint64_t v_tid_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1693_; 
v_tid_1676_ = lean_ctor_get_uint64(v_traceState_1664_, sizeof(void*)*1);
v_isSharedCheck_1693_ = !lean_is_exclusive(v_traceState_1664_);
if (v_isSharedCheck_1693_ == 0)
{
lean_object* v_unused_1694_; 
v_unused_1694_ = lean_ctor_get(v_traceState_1664_, 0);
lean_dec(v_unused_1694_);
v___x_1678_ = v_traceState_1664_;
v_isShared_1679_ = v_isSharedCheck_1693_;
goto v_resetjp_1677_;
}
else
{
lean_dec(v_traceState_1664_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1693_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1683_; 
v___x_1680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1680_, 0, v_ref_1625_);
lean_ctor_set(v___x_1680_, 1, v_a_1659_);
v___x_1681_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1623_, v___x_1680_);
if (v_isShared_1679_ == 0)
{
lean_ctor_set(v___x_1678_, 0, v___x_1681_);
v___x_1683_ = v___x_1678_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v___x_1681_);
lean_ctor_set_uint64(v_reuseFailAlloc_1692_, sizeof(void*)*1, v_tid_1676_);
v___x_1683_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
lean_object* v___x_1685_; 
if (v_isShared_1675_ == 0)
{
lean_ctor_set(v___x_1674_, 4, v___x_1683_);
v___x_1685_ = v___x_1674_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_env_1665_);
lean_ctor_set(v_reuseFailAlloc_1691_, 1, v_nextMacroScope_1666_);
lean_ctor_set(v_reuseFailAlloc_1691_, 2, v_ngen_1667_);
lean_ctor_set(v_reuseFailAlloc_1691_, 3, v_auxDeclNGen_1668_);
lean_ctor_set(v_reuseFailAlloc_1691_, 4, v___x_1683_);
lean_ctor_set(v_reuseFailAlloc_1691_, 5, v_cache_1669_);
lean_ctor_set(v_reuseFailAlloc_1691_, 6, v_messages_1670_);
lean_ctor_set(v_reuseFailAlloc_1691_, 7, v_infoState_1671_);
lean_ctor_set(v_reuseFailAlloc_1691_, 8, v_snapshotTasks_1672_);
v___x_1685_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1689_; 
v___x_1686_ = lean_st_ref_set(v___y_1630_, v___x_1685_);
v___x_1687_ = lean_box(0);
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 0, v___x_1687_);
v___x_1689_ = v___x_1661_;
goto v_reusejp_1688_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v___x_1687_);
v___x_1689_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1688_;
}
v_reusejp_1688_:
{
return v___x_1689_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5___redArg___boxed(lean_object* v_oldTraces_1697_, lean_object* v_data_1698_, lean_object* v_ref_1699_, lean_object* v_msg_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_){
_start:
{
lean_object* v_res_1706_; 
v_res_1706_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5___redArg(v_oldTraces_1697_, v_data_1698_, v_ref_1699_, v_msg_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_);
lean_dec(v___y_1704_);
lean_dec_ref(v___y_1703_);
lean_dec(v___y_1702_);
lean_dec_ref(v___y_1701_);
return v_res_1706_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__6___redArg(lean_object* v_x_1707_){
_start:
{
if (lean_obj_tag(v_x_1707_) == 0)
{
lean_object* v_a_1709_; lean_object* v___x_1711_; uint8_t v_isShared_1712_; uint8_t v_isSharedCheck_1716_; 
v_a_1709_ = lean_ctor_get(v_x_1707_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v_x_1707_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1711_ = v_x_1707_;
v_isShared_1712_ = v_isSharedCheck_1716_;
goto v_resetjp_1710_;
}
else
{
lean_inc(v_a_1709_);
lean_dec(v_x_1707_);
v___x_1711_ = lean_box(0);
v_isShared_1712_ = v_isSharedCheck_1716_;
goto v_resetjp_1710_;
}
v_resetjp_1710_:
{
lean_object* v___x_1714_; 
if (v_isShared_1712_ == 0)
{
lean_ctor_set_tag(v___x_1711_, 1);
v___x_1714_ = v___x_1711_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v_a_1709_);
v___x_1714_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
return v___x_1714_;
}
}
}
else
{
lean_object* v_a_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1724_; 
v_a_1717_ = lean_ctor_get(v_x_1707_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v_x_1707_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1719_ = v_x_1707_;
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_a_1717_);
lean_dec(v_x_1707_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v___x_1722_; 
if (v_isShared_1720_ == 0)
{
lean_ctor_set_tag(v___x_1719_, 0);
v___x_1722_ = v___x_1719_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_a_1717_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__6___redArg___boxed(lean_object* v_x_1725_, lean_object* v___y_1726_){
_start:
{
lean_object* v_res_1727_; 
v_res_1727_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__6___redArg(v_x_1725_);
return v_res_1727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__7(lean_object* v_opts_1728_, lean_object* v_opt_1729_){
_start:
{
lean_object* v_name_1730_; lean_object* v_defValue_1731_; lean_object* v_map_1732_; lean_object* v___x_1733_; 
v_name_1730_ = lean_ctor_get(v_opt_1729_, 0);
v_defValue_1731_ = lean_ctor_get(v_opt_1729_, 1);
v_map_1732_ = lean_ctor_get(v_opts_1728_, 0);
v___x_1733_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1732_, v_name_1730_);
if (lean_obj_tag(v___x_1733_) == 0)
{
lean_inc(v_defValue_1731_);
return v_defValue_1731_;
}
else
{
lean_object* v_val_1734_; 
v_val_1734_ = lean_ctor_get(v___x_1733_, 0);
lean_inc(v_val_1734_);
lean_dec_ref_known(v___x_1733_, 1);
if (lean_obj_tag(v_val_1734_) == 3)
{
lean_object* v_v_1735_; 
v_v_1735_ = lean_ctor_get(v_val_1734_, 0);
lean_inc(v_v_1735_);
lean_dec_ref_known(v_val_1734_, 1);
return v_v_1735_;
}
else
{
lean_dec(v_val_1734_);
lean_inc(v_defValue_1731_);
return v_defValue_1731_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__7___boxed(lean_object* v_opts_1736_, lean_object* v_opt_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__7(v_opts_1736_, v_opt_1737_);
lean_dec_ref(v_opt_1737_);
lean_dec_ref(v_opts_1736_);
return v_res_1738_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__1(void){
_start:
{
lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1740_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__0));
v___x_1741_ = l_Lean_stringToMessageData(v___x_1740_);
return v___x_1741_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__2(void){
_start:
{
lean_object* v___x_1742_; double v___x_1743_; 
v___x_1742_ = lean_unsigned_to_nat(0u);
v___x_1743_ = lean_float_of_nat(v___x_1742_);
return v___x_1743_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__4(void){
_start:
{
lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1745_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__3));
v___x_1746_ = l_Lean_stringToMessageData(v___x_1745_);
return v___x_1746_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__5(void){
_start:
{
lean_object* v___x_1747_; double v___x_1748_; 
v___x_1747_ = lean_unsigned_to_nat(1000u);
v___x_1748_ = lean_float_of_nat(v___x_1747_);
return v___x_1748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3(lean_object* v_cls_1749_, uint8_t v_collapsed_1750_, lean_object* v_tag_1751_, lean_object* v_opts_1752_, uint8_t v_clsEnabled_1753_, lean_object* v_oldTraces_1754_, lean_object* v_msg_1755_, lean_object* v_resStartStop_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
lean_object* v_fst_1766_; lean_object* v_snd_1767_; lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1865_; 
v_fst_1766_ = lean_ctor_get(v_resStartStop_1756_, 0);
v_snd_1767_ = lean_ctor_get(v_resStartStop_1756_, 1);
v_isSharedCheck_1865_ = !lean_is_exclusive(v_resStartStop_1756_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1769_ = v_resStartStop_1756_;
v_isShared_1770_ = v_isSharedCheck_1865_;
goto v_resetjp_1768_;
}
else
{
lean_inc(v_snd_1767_);
lean_inc(v_fst_1766_);
lean_dec(v_resStartStop_1756_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1865_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v___y_1772_; lean_object* v___y_1773_; lean_object* v_data_1774_; lean_object* v_fst_1785_; lean_object* v_snd_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1864_; 
v_fst_1785_ = lean_ctor_get(v_snd_1767_, 0);
v_snd_1786_ = lean_ctor_get(v_snd_1767_, 1);
v_isSharedCheck_1864_ = !lean_is_exclusive(v_snd_1767_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1788_ = v_snd_1767_;
v_isShared_1789_ = v_isSharedCheck_1864_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_snd_1786_);
lean_inc(v_fst_1785_);
lean_dec(v_snd_1767_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1864_;
goto v_resetjp_1787_;
}
v___jp_1771_:
{
lean_object* v___x_1775_; 
lean_inc(v___y_1773_);
v___x_1775_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5___redArg(v_oldTraces_1754_, v_data_1774_, v___y_1773_, v___y_1772_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_);
if (lean_obj_tag(v___x_1775_) == 0)
{
lean_object* v___x_1776_; 
lean_dec_ref_known(v___x_1775_, 1);
v___x_1776_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__6___redArg(v_fst_1766_);
return v___x_1776_;
}
else
{
lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1784_; 
lean_dec(v_fst_1766_);
v_a_1777_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1779_ = v___x_1775_;
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v___x_1775_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___x_1782_; 
if (v_isShared_1780_ == 0)
{
v___x_1782_ = v___x_1779_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_a_1777_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
}
v_resetjp_1787_:
{
lean_object* v___x_1790_; uint8_t v___x_1791_; lean_object* v___y_1793_; lean_object* v_a_1794_; uint8_t v___y_1818_; double v___y_1849_; 
v___x_1790_ = l_Lean_trace_profiler;
v___x_1791_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__2(v_opts_1752_, v___x_1790_);
if (v___x_1791_ == 0)
{
v___y_1818_ = v___x_1791_;
goto v___jp_1817_;
}
else
{
lean_object* v___x_1854_; uint8_t v___x_1855_; 
v___x_1854_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1855_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__2(v_opts_1752_, v___x_1854_);
if (v___x_1855_ == 0)
{
lean_object* v___x_1856_; lean_object* v___x_1857_; double v___x_1858_; double v___x_1859_; double v___x_1860_; 
v___x_1856_ = l_Lean_trace_profiler_threshold;
v___x_1857_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__7(v_opts_1752_, v___x_1856_);
v___x_1858_ = lean_float_of_nat(v___x_1857_);
v___x_1859_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__5, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__5_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__5);
v___x_1860_ = lean_float_div(v___x_1858_, v___x_1859_);
v___y_1849_ = v___x_1860_;
goto v___jp_1848_;
}
else
{
lean_object* v___x_1861_; lean_object* v___x_1862_; double v___x_1863_; 
v___x_1861_ = l_Lean_trace_profiler_threshold;
v___x_1862_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__7(v_opts_1752_, v___x_1861_);
v___x_1863_ = lean_float_of_nat(v___x_1862_);
v___y_1849_ = v___x_1863_;
goto v___jp_1848_;
}
}
v___jp_1792_:
{
uint8_t v_result_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1800_; 
v_result_1795_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__4(v_fst_1766_);
v___x_1796_ = l_Lean_TraceResult_toEmoji(v_result_1795_);
v___x_1797_ = l_Lean_stringToMessageData(v___x_1796_);
v___x_1798_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__1);
if (v_isShared_1789_ == 0)
{
lean_ctor_set_tag(v___x_1788_, 7);
lean_ctor_set(v___x_1788_, 1, v___x_1798_);
lean_ctor_set(v___x_1788_, 0, v___x_1797_);
v___x_1800_ = v___x_1788_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v___x_1797_);
lean_ctor_set(v_reuseFailAlloc_1811_, 1, v___x_1798_);
v___x_1800_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
lean_object* v_m_1802_; 
if (v_isShared_1770_ == 0)
{
lean_ctor_set_tag(v___x_1769_, 7);
lean_ctor_set(v___x_1769_, 1, v_a_1794_);
lean_ctor_set(v___x_1769_, 0, v___x_1800_);
v_m_1802_ = v___x_1769_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v___x_1800_);
lean_ctor_set(v_reuseFailAlloc_1810_, 1, v_a_1794_);
v_m_1802_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
lean_object* v___x_1803_; lean_object* v___x_1804_; double v___x_1805_; lean_object* v_data_1806_; 
v___x_1803_ = lean_box(v_result_1795_);
v___x_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1803_);
v___x_1805_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__2);
lean_inc_ref(v_tag_1751_);
lean_inc_ref(v___x_1804_);
lean_inc(v_cls_1749_);
v_data_1806_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1806_, 0, v_cls_1749_);
lean_ctor_set(v_data_1806_, 1, v___x_1804_);
lean_ctor_set(v_data_1806_, 2, v_tag_1751_);
lean_ctor_set_float(v_data_1806_, sizeof(void*)*3, v___x_1805_);
lean_ctor_set_float(v_data_1806_, sizeof(void*)*3 + 8, v___x_1805_);
lean_ctor_set_uint8(v_data_1806_, sizeof(void*)*3 + 16, v_collapsed_1750_);
if (v___x_1791_ == 0)
{
lean_dec_ref_known(v___x_1804_, 1);
lean_dec(v_snd_1786_);
lean_dec(v_fst_1785_);
lean_dec_ref(v_tag_1751_);
lean_dec(v_cls_1749_);
v___y_1772_ = v_m_1802_;
v___y_1773_ = v___y_1793_;
v_data_1774_ = v_data_1806_;
goto v___jp_1771_;
}
else
{
lean_object* v_data_1807_; double v___x_1808_; double v___x_1809_; 
lean_dec_ref_known(v_data_1806_, 3);
v_data_1807_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1807_, 0, v_cls_1749_);
lean_ctor_set(v_data_1807_, 1, v___x_1804_);
lean_ctor_set(v_data_1807_, 2, v_tag_1751_);
v___x_1808_ = lean_unbox_float(v_fst_1785_);
lean_dec(v_fst_1785_);
lean_ctor_set_float(v_data_1807_, sizeof(void*)*3, v___x_1808_);
v___x_1809_ = lean_unbox_float(v_snd_1786_);
lean_dec(v_snd_1786_);
lean_ctor_set_float(v_data_1807_, sizeof(void*)*3 + 8, v___x_1809_);
lean_ctor_set_uint8(v_data_1807_, sizeof(void*)*3 + 16, v_collapsed_1750_);
v___y_1772_ = v_m_1802_;
v___y_1773_ = v___y_1793_;
v_data_1774_ = v_data_1807_;
goto v___jp_1771_;
}
}
}
}
v___jp_1812_:
{
lean_object* v_ref_1813_; lean_object* v___x_1814_; 
v_ref_1813_ = lean_ctor_get(v___y_1763_, 5);
lean_inc(v___y_1764_);
lean_inc_ref(v___y_1763_);
lean_inc(v___y_1762_);
lean_inc_ref(v___y_1761_);
lean_inc(v___y_1760_);
lean_inc_ref(v___y_1759_);
lean_inc(v___y_1758_);
lean_inc_ref(v___y_1757_);
lean_inc(v_fst_1766_);
v___x_1814_ = lean_apply_10(v_msg_1755_, v_fst_1766_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, lean_box(0));
if (lean_obj_tag(v___x_1814_) == 0)
{
lean_object* v_a_1815_; 
v_a_1815_ = lean_ctor_get(v___x_1814_, 0);
lean_inc(v_a_1815_);
lean_dec_ref_known(v___x_1814_, 1);
v___y_1793_ = v_ref_1813_;
v_a_1794_ = v_a_1815_;
goto v___jp_1792_;
}
else
{
lean_object* v___x_1816_; 
lean_dec_ref_known(v___x_1814_, 1);
v___x_1816_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__4, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__4_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__4);
v___y_1793_ = v_ref_1813_;
v_a_1794_ = v___x_1816_;
goto v___jp_1792_;
}
}
v___jp_1817_:
{
if (v_clsEnabled_1753_ == 0)
{
if (v___y_1818_ == 0)
{
lean_object* v___x_1819_; lean_object* v_traceState_1820_; lean_object* v_env_1821_; lean_object* v_nextMacroScope_1822_; lean_object* v_ngen_1823_; lean_object* v_auxDeclNGen_1824_; lean_object* v_cache_1825_; lean_object* v_messages_1826_; lean_object* v_infoState_1827_; lean_object* v_snapshotTasks_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1847_; 
lean_del_object(v___x_1788_);
lean_dec(v_snd_1786_);
lean_dec(v_fst_1785_);
lean_del_object(v___x_1769_);
lean_dec_ref(v_msg_1755_);
lean_dec_ref(v_tag_1751_);
lean_dec(v_cls_1749_);
v___x_1819_ = lean_st_ref_take(v___y_1764_);
v_traceState_1820_ = lean_ctor_get(v___x_1819_, 4);
v_env_1821_ = lean_ctor_get(v___x_1819_, 0);
v_nextMacroScope_1822_ = lean_ctor_get(v___x_1819_, 1);
v_ngen_1823_ = lean_ctor_get(v___x_1819_, 2);
v_auxDeclNGen_1824_ = lean_ctor_get(v___x_1819_, 3);
v_cache_1825_ = lean_ctor_get(v___x_1819_, 5);
v_messages_1826_ = lean_ctor_get(v___x_1819_, 6);
v_infoState_1827_ = lean_ctor_get(v___x_1819_, 7);
v_snapshotTasks_1828_ = lean_ctor_get(v___x_1819_, 8);
v_isSharedCheck_1847_ = !lean_is_exclusive(v___x_1819_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1830_ = v___x_1819_;
v_isShared_1831_ = v_isSharedCheck_1847_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_snapshotTasks_1828_);
lean_inc(v_infoState_1827_);
lean_inc(v_messages_1826_);
lean_inc(v_cache_1825_);
lean_inc(v_traceState_1820_);
lean_inc(v_auxDeclNGen_1824_);
lean_inc(v_ngen_1823_);
lean_inc(v_nextMacroScope_1822_);
lean_inc(v_env_1821_);
lean_dec(v___x_1819_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1847_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
uint64_t v_tid_1832_; lean_object* v_traces_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1846_; 
v_tid_1832_ = lean_ctor_get_uint64(v_traceState_1820_, sizeof(void*)*1);
v_traces_1833_ = lean_ctor_get(v_traceState_1820_, 0);
v_isSharedCheck_1846_ = !lean_is_exclusive(v_traceState_1820_);
if (v_isSharedCheck_1846_ == 0)
{
v___x_1835_ = v_traceState_1820_;
v_isShared_1836_ = v_isSharedCheck_1846_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_traces_1833_);
lean_dec(v_traceState_1820_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1846_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v___x_1837_; lean_object* v___x_1839_; 
v___x_1837_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1754_, v_traces_1833_);
lean_dec_ref(v_traces_1833_);
if (v_isShared_1836_ == 0)
{
lean_ctor_set(v___x_1835_, 0, v___x_1837_);
v___x_1839_ = v___x_1835_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v___x_1837_);
lean_ctor_set_uint64(v_reuseFailAlloc_1845_, sizeof(void*)*1, v_tid_1832_);
v___x_1839_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
lean_object* v___x_1841_; 
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 4, v___x_1839_);
v___x_1841_ = v___x_1830_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v_env_1821_);
lean_ctor_set(v_reuseFailAlloc_1844_, 1, v_nextMacroScope_1822_);
lean_ctor_set(v_reuseFailAlloc_1844_, 2, v_ngen_1823_);
lean_ctor_set(v_reuseFailAlloc_1844_, 3, v_auxDeclNGen_1824_);
lean_ctor_set(v_reuseFailAlloc_1844_, 4, v___x_1839_);
lean_ctor_set(v_reuseFailAlloc_1844_, 5, v_cache_1825_);
lean_ctor_set(v_reuseFailAlloc_1844_, 6, v_messages_1826_);
lean_ctor_set(v_reuseFailAlloc_1844_, 7, v_infoState_1827_);
lean_ctor_set(v_reuseFailAlloc_1844_, 8, v_snapshotTasks_1828_);
v___x_1841_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1842_ = lean_st_ref_set(v___y_1764_, v___x_1841_);
v___x_1843_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__6___redArg(v_fst_1766_);
return v___x_1843_;
}
}
}
}
}
else
{
goto v___jp_1812_;
}
}
else
{
goto v___jp_1812_;
}
}
v___jp_1848_:
{
double v___x_1850_; double v___x_1851_; double v___x_1852_; uint8_t v___x_1853_; 
v___x_1850_ = lean_unbox_float(v_snd_1786_);
v___x_1851_ = lean_unbox_float(v_fst_1785_);
v___x_1852_ = lean_float_sub(v___x_1850_, v___x_1851_);
v___x_1853_ = lean_float_decLt(v___y_1849_, v___x_1852_);
v___y_1818_ = v___x_1853_;
goto v___jp_1817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___boxed(lean_object** _args){
lean_object* v_cls_1866_ = _args[0];
lean_object* v_collapsed_1867_ = _args[1];
lean_object* v_tag_1868_ = _args[2];
lean_object* v_opts_1869_ = _args[3];
lean_object* v_clsEnabled_1870_ = _args[4];
lean_object* v_oldTraces_1871_ = _args[5];
lean_object* v_msg_1872_ = _args[6];
lean_object* v_resStartStop_1873_ = _args[7];
lean_object* v___y_1874_ = _args[8];
lean_object* v___y_1875_ = _args[9];
lean_object* v___y_1876_ = _args[10];
lean_object* v___y_1877_ = _args[11];
lean_object* v___y_1878_ = _args[12];
lean_object* v___y_1879_ = _args[13];
lean_object* v___y_1880_ = _args[14];
lean_object* v___y_1881_ = _args[15];
lean_object* v___y_1882_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_1883_; uint8_t v_clsEnabled_boxed_1884_; lean_object* v_res_1885_; 
v_collapsed_boxed_1883_ = lean_unbox(v_collapsed_1867_);
v_clsEnabled_boxed_1884_ = lean_unbox(v_clsEnabled_1870_);
v_res_1885_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3(v_cls_1866_, v_collapsed_boxed_1883_, v_tag_1868_, v_opts_1869_, v_clsEnabled_boxed_1884_, v_oldTraces_1871_, v_msg_1872_, v_resStartStop_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_, v___y_1881_);
lean_dec(v___y_1881_);
lean_dec_ref(v___y_1880_);
lean_dec(v___y_1879_);
lean_dec_ref(v___y_1878_);
lean_dec(v___y_1877_);
lean_dec_ref(v___y_1876_);
lean_dec(v___y_1875_);
lean_dec_ref(v___y_1874_);
lean_dec_ref(v_opts_1869_);
return v_res_1885_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0___redArg(lean_object* v_cls_1888_, lean_object* v_msg_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_){
_start:
{
lean_object* v_ref_1895_; lean_object* v___x_1896_; lean_object* v_a_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1941_; 
v_ref_1895_ = lean_ctor_get(v___y_1892_, 5);
v___x_1896_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0_spec__0(v_msg_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_);
v_a_1897_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1899_ = v___x_1896_;
v_isShared_1900_ = v_isSharedCheck_1941_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_a_1897_);
lean_dec(v___x_1896_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1941_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1901_; lean_object* v_traceState_1902_; lean_object* v_env_1903_; lean_object* v_nextMacroScope_1904_; lean_object* v_ngen_1905_; lean_object* v_auxDeclNGen_1906_; lean_object* v_cache_1907_; lean_object* v_messages_1908_; lean_object* v_infoState_1909_; lean_object* v_snapshotTasks_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1940_; 
v___x_1901_ = lean_st_ref_take(v___y_1893_);
v_traceState_1902_ = lean_ctor_get(v___x_1901_, 4);
v_env_1903_ = lean_ctor_get(v___x_1901_, 0);
v_nextMacroScope_1904_ = lean_ctor_get(v___x_1901_, 1);
v_ngen_1905_ = lean_ctor_get(v___x_1901_, 2);
v_auxDeclNGen_1906_ = lean_ctor_get(v___x_1901_, 3);
v_cache_1907_ = lean_ctor_get(v___x_1901_, 5);
v_messages_1908_ = lean_ctor_get(v___x_1901_, 6);
v_infoState_1909_ = lean_ctor_get(v___x_1901_, 7);
v_snapshotTasks_1910_ = lean_ctor_get(v___x_1901_, 8);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1912_ = v___x_1901_;
v_isShared_1913_ = v_isSharedCheck_1940_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_snapshotTasks_1910_);
lean_inc(v_infoState_1909_);
lean_inc(v_messages_1908_);
lean_inc(v_cache_1907_);
lean_inc(v_traceState_1902_);
lean_inc(v_auxDeclNGen_1906_);
lean_inc(v_ngen_1905_);
lean_inc(v_nextMacroScope_1904_);
lean_inc(v_env_1903_);
lean_dec(v___x_1901_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1940_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
uint64_t v_tid_1914_; lean_object* v_traces_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1939_; 
v_tid_1914_ = lean_ctor_get_uint64(v_traceState_1902_, sizeof(void*)*1);
v_traces_1915_ = lean_ctor_get(v_traceState_1902_, 0);
v_isSharedCheck_1939_ = !lean_is_exclusive(v_traceState_1902_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1917_ = v_traceState_1902_;
v_isShared_1918_ = v_isSharedCheck_1939_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_traces_1915_);
lean_dec(v_traceState_1902_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1939_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v___x_1919_; double v___x_1920_; uint8_t v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1929_; 
v___x_1919_ = lean_box(0);
v___x_1920_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3___closed__2);
v___x_1921_ = 0;
v___x_1922_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__32));
v___x_1923_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1923_, 0, v_cls_1888_);
lean_ctor_set(v___x_1923_, 1, v___x_1919_);
lean_ctor_set(v___x_1923_, 2, v___x_1922_);
lean_ctor_set_float(v___x_1923_, sizeof(void*)*3, v___x_1920_);
lean_ctor_set_float(v___x_1923_, sizeof(void*)*3 + 8, v___x_1920_);
lean_ctor_set_uint8(v___x_1923_, sizeof(void*)*3 + 16, v___x_1921_);
v___x_1924_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0___redArg___closed__0));
v___x_1925_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1925_, 0, v___x_1923_);
lean_ctor_set(v___x_1925_, 1, v_a_1897_);
lean_ctor_set(v___x_1925_, 2, v___x_1924_);
lean_inc(v_ref_1895_);
v___x_1926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1926_, 0, v_ref_1895_);
lean_ctor_set(v___x_1926_, 1, v___x_1925_);
v___x_1927_ = l_Lean_PersistentArray_push___redArg(v_traces_1915_, v___x_1926_);
if (v_isShared_1918_ == 0)
{
lean_ctor_set(v___x_1917_, 0, v___x_1927_);
v___x_1929_ = v___x_1917_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1938_; 
v_reuseFailAlloc_1938_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1938_, 0, v___x_1927_);
lean_ctor_set_uint64(v_reuseFailAlloc_1938_, sizeof(void*)*1, v_tid_1914_);
v___x_1929_ = v_reuseFailAlloc_1938_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
lean_object* v___x_1931_; 
if (v_isShared_1913_ == 0)
{
lean_ctor_set(v___x_1912_, 4, v___x_1929_);
v___x_1931_ = v___x_1912_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v_env_1903_);
lean_ctor_set(v_reuseFailAlloc_1937_, 1, v_nextMacroScope_1904_);
lean_ctor_set(v_reuseFailAlloc_1937_, 2, v_ngen_1905_);
lean_ctor_set(v_reuseFailAlloc_1937_, 3, v_auxDeclNGen_1906_);
lean_ctor_set(v_reuseFailAlloc_1937_, 4, v___x_1929_);
lean_ctor_set(v_reuseFailAlloc_1937_, 5, v_cache_1907_);
lean_ctor_set(v_reuseFailAlloc_1937_, 6, v_messages_1908_);
lean_ctor_set(v_reuseFailAlloc_1937_, 7, v_infoState_1909_);
lean_ctor_set(v_reuseFailAlloc_1937_, 8, v_snapshotTasks_1910_);
v___x_1931_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1935_; 
v___x_1932_ = lean_st_ref_set(v___y_1893_, v___x_1931_);
v___x_1933_ = lean_box(0);
if (v_isShared_1900_ == 0)
{
lean_ctor_set(v___x_1899_, 0, v___x_1933_);
v___x_1935_ = v___x_1899_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v___x_1933_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0___redArg___boxed(lean_object* v_cls_1942_, lean_object* v_msg_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_){
_start:
{
lean_object* v_res_1949_; 
v_res_1949_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0___redArg(v_cls_1942_, v_msg_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_);
lean_dec(v___y_1947_);
lean_dec_ref(v___y_1946_);
lean_dec(v___y_1945_);
lean_dec_ref(v___y_1944_);
return v_res_1949_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__4(void){
_start:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; 
v___x_1959_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__3));
v___x_1960_ = l_Lean_stringToMessageData(v___x_1959_);
return v___x_1960_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg(lean_object* v_as_x27_1961_, lean_object* v_b_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_){
_start:
{
if (lean_obj_tag(v_as_x27_1961_) == 0)
{
lean_object* v___x_1972_; 
v___x_1972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1972_, 0, v_b_1962_);
return v___x_1972_;
}
else
{
lean_object* v_head_1973_; lean_object* v_tail_1974_; lean_object* v___x_1975_; lean_object* v_options_1976_; lean_object* v_goal_1977_; lean_object* v_name_1978_; lean_object* v_run_x27_1979_; lean_object* v_inheritedTraceOptions_1980_; uint8_t v_hasTrace_1981_; lean_object* v___x_1985_; lean_object* v___y_1987_; 
lean_dec_ref(v_b_1962_);
v_head_1973_ = lean_ctor_get(v_as_x27_1961_, 0);
v_tail_1974_ = lean_ctor_get(v_as_x27_1961_, 1);
v___x_1975_ = lean_st_ref_get(v___y_1964_);
v_options_1976_ = lean_ctor_get(v___y_1969_, 2);
v_goal_1977_ = lean_ctor_get(v___x_1975_, 3);
lean_inc(v_goal_1977_);
lean_dec(v___x_1975_);
v_name_1978_ = lean_ctor_get(v_head_1973_, 0);
v_run_x27_1979_ = lean_ctor_get(v_head_1973_, 1);
v_inheritedTraceOptions_1980_ = lean_ctor_get(v___y_1969_, 13);
v_hasTrace_1981_ = lean_ctor_get_uint8(v_options_1976_, sizeof(void*)*1);
v___x_1985_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__2));
if (v_hasTrace_1981_ == 0)
{
lean_object* v___x_2025_; 
lean_inc(v_run_x27_1979_);
lean_inc(v___y_1970_);
lean_inc_ref(v___y_1969_);
lean_inc(v___y_1968_);
lean_inc_ref(v___y_1967_);
lean_inc(v___y_1966_);
lean_inc_ref(v___y_1965_);
lean_inc(v___y_1964_);
lean_inc_ref(v___y_1963_);
v___x_2025_ = lean_apply_10(v_run_x27_1979_, v_goal_1977_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, lean_box(0));
v___y_1987_ = v___x_2025_;
goto v___jp_1986_;
}
else
{
lean_object* v___f_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; uint8_t v___x_2030_; lean_object* v___y_2032_; lean_object* v___y_2033_; lean_object* v_a_2034_; lean_object* v___y_2047_; lean_object* v___y_2048_; lean_object* v_a_2049_; 
lean_inc(v_goal_1977_);
lean_inc(v_name_1978_);
v___f_2026_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_run___lam__0___boxed), 12, 2);
lean_closure_set(v___f_2026_, 0, v_name_1978_);
lean_closure_set(v___f_2026_, 1, v_goal_1977_);
v___x_2027_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__31));
v___x_2028_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__32));
v___x_2029_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35);
v___x_2030_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1980_, v_options_1976_, v___x_2029_);
if (v___x_2030_ == 0)
{
lean_object* v___x_2099_; uint8_t v___x_2100_; 
v___x_2099_ = l_Lean_trace_profiler;
v___x_2100_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__2(v_options_1976_, v___x_2099_);
if (v___x_2100_ == 0)
{
lean_object* v___x_2101_; 
lean_dec_ref(v___f_2026_);
lean_inc(v_run_x27_1979_);
lean_inc(v___y_1970_);
lean_inc_ref(v___y_1969_);
lean_inc(v___y_1968_);
lean_inc_ref(v___y_1967_);
lean_inc(v___y_1966_);
lean_inc_ref(v___y_1965_);
lean_inc(v___y_1964_);
lean_inc_ref(v___y_1963_);
v___x_2101_ = lean_apply_10(v_run_x27_1979_, v_goal_1977_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, lean_box(0));
v___y_1987_ = v___x_2101_;
goto v___jp_1986_;
}
else
{
goto v___jp_2058_;
}
}
else
{
goto v___jp_2058_;
}
v___jp_2031_:
{
lean_object* v___x_2035_; double v___x_2036_; double v___x_2037_; double v___x_2038_; double v___x_2039_; double v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2035_ = lean_io_mono_nanos_now();
v___x_2036_ = lean_float_of_nat(v___y_2032_);
v___x_2037_ = lean_float_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__36, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__36_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__36);
v___x_2038_ = lean_float_div(v___x_2036_, v___x_2037_);
v___x_2039_ = lean_float_of_nat(v___x_2035_);
v___x_2040_ = lean_float_div(v___x_2039_, v___x_2037_);
v___x_2041_ = lean_box_float(v___x_2038_);
v___x_2042_ = lean_box_float(v___x_2040_);
v___x_2043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2041_);
lean_ctor_set(v___x_2043_, 1, v___x_2042_);
v___x_2044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2044_, 0, v_a_2034_);
lean_ctor_set(v___x_2044_, 1, v___x_2043_);
v___x_2045_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3(v___x_2027_, v_hasTrace_1981_, v___x_2028_, v_options_1976_, v___x_2030_, v___y_2033_, v___f_2026_, v___x_2044_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_);
v___y_1987_ = v___x_2045_;
goto v___jp_1986_;
}
v___jp_2046_:
{
lean_object* v___x_2050_; double v___x_2051_; double v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2050_ = lean_io_get_num_heartbeats();
v___x_2051_ = lean_float_of_nat(v___y_2047_);
v___x_2052_ = lean_float_of_nat(v___x_2050_);
v___x_2053_ = lean_box_float(v___x_2051_);
v___x_2054_ = lean_box_float(v___x_2052_);
v___x_2055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2053_);
lean_ctor_set(v___x_2055_, 1, v___x_2054_);
v___x_2056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2056_, 0, v_a_2049_);
lean_ctor_set(v___x_2056_, 1, v___x_2055_);
v___x_2057_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3(v___x_2027_, v_hasTrace_1981_, v___x_2028_, v_options_1976_, v___x_2030_, v___y_2048_, v___f_2026_, v___x_2056_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_);
v___y_1987_ = v___x_2057_;
goto v___jp_1986_;
}
v___jp_2058_:
{
lean_object* v___x_2059_; lean_object* v_a_2060_; lean_object* v___x_2061_; uint8_t v___x_2062_; 
v___x_2059_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__1___redArg(v___y_1970_);
v_a_2060_ = lean_ctor_get(v___x_2059_, 0);
lean_inc(v_a_2060_);
lean_dec_ref(v___x_2059_);
v___x_2061_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2062_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__2(v_options_1976_, v___x_2061_);
if (v___x_2062_ == 0)
{
lean_object* v___x_2063_; lean_object* v___x_2064_; 
v___x_2063_ = lean_io_mono_nanos_now();
lean_inc(v_run_x27_1979_);
lean_inc(v___y_1970_);
lean_inc_ref(v___y_1969_);
lean_inc(v___y_1968_);
lean_inc_ref(v___y_1967_);
lean_inc(v___y_1966_);
lean_inc_ref(v___y_1965_);
lean_inc(v___y_1964_);
lean_inc_ref(v___y_1963_);
v___x_2064_ = lean_apply_10(v_run_x27_1979_, v_goal_1977_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, lean_box(0));
if (lean_obj_tag(v___x_2064_) == 0)
{
lean_object* v_a_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2072_; 
v_a_2065_ = lean_ctor_get(v___x_2064_, 0);
v_isSharedCheck_2072_ = !lean_is_exclusive(v___x_2064_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2067_ = v___x_2064_;
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_a_2065_);
lean_dec(v___x_2064_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v___x_2070_; 
if (v_isShared_2068_ == 0)
{
lean_ctor_set_tag(v___x_2067_, 1);
v___x_2070_ = v___x_2067_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_a_2065_);
v___x_2070_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
v___y_2032_ = v___x_2063_;
v___y_2033_ = v_a_2060_;
v_a_2034_ = v___x_2070_;
goto v___jp_2031_;
}
}
}
else
{
lean_object* v_a_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2080_; 
v_a_2073_ = lean_ctor_get(v___x_2064_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v___x_2064_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2075_ = v___x_2064_;
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_a_2073_);
lean_dec(v___x_2064_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v___x_2078_; 
if (v_isShared_2076_ == 0)
{
lean_ctor_set_tag(v___x_2075_, 0);
v___x_2078_ = v___x_2075_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v_a_2073_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
v___y_2032_ = v___x_2063_;
v___y_2033_ = v_a_2060_;
v_a_2034_ = v___x_2078_;
goto v___jp_2031_;
}
}
}
}
else
{
lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2081_ = lean_io_get_num_heartbeats();
lean_inc(v_run_x27_1979_);
lean_inc(v___y_1970_);
lean_inc_ref(v___y_1969_);
lean_inc(v___y_1968_);
lean_inc_ref(v___y_1967_);
lean_inc(v___y_1966_);
lean_inc_ref(v___y_1965_);
lean_inc(v___y_1964_);
lean_inc_ref(v___y_1963_);
v___x_2082_ = lean_apply_10(v_run_x27_1979_, v_goal_1977_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, lean_box(0));
if (lean_obj_tag(v___x_2082_) == 0)
{
lean_object* v_a_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2090_; 
v_a_2083_ = lean_ctor_get(v___x_2082_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2085_ = v___x_2082_;
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_a_2083_);
lean_dec(v___x_2082_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v___x_2088_; 
if (v_isShared_2086_ == 0)
{
lean_ctor_set_tag(v___x_2085_, 1);
v___x_2088_ = v___x_2085_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_a_2083_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
v___y_2047_ = v___x_2081_;
v___y_2048_ = v_a_2060_;
v_a_2049_ = v___x_2088_;
goto v___jp_2046_;
}
}
}
else
{
lean_object* v_a_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2098_; 
v_a_2091_ = lean_ctor_get(v___x_2082_, 0);
v_isSharedCheck_2098_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2093_ = v___x_2082_;
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_a_2091_);
lean_dec(v___x_2082_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2096_; 
if (v_isShared_2094_ == 0)
{
lean_ctor_set_tag(v___x_2093_, 0);
v___x_2096_ = v___x_2093_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v_a_2091_);
v___x_2096_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
v___y_2047_ = v___x_2081_;
v___y_2048_ = v_a_2060_;
v_a_2049_ = v___x_2096_;
goto v___jp_2046_;
}
}
}
}
}
}
v___jp_1982_:
{
lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1983_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__1));
v___x_1984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1984_, 0, v___x_1983_);
return v___x_1984_;
}
v___jp_1986_:
{
if (lean_obj_tag(v___y_1987_) == 0)
{
lean_object* v_a_1988_; 
v_a_1988_ = lean_ctor_get(v___y_1987_, 0);
lean_inc(v_a_1988_);
lean_dec_ref_known(v___y_1987_, 1);
if (lean_obj_tag(v_a_1988_) == 1)
{
lean_object* v_val_1989_; lean_object* v___x_1990_; lean_object* v_rewriteCache_1991_; lean_object* v_acNfCache_1992_; lean_object* v_relevantFVars_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2002_; 
v_val_1989_ = lean_ctor_get(v_a_1988_, 0);
lean_inc(v_val_1989_);
lean_dec_ref_known(v_a_1988_, 1);
v___x_1990_ = lean_st_ref_take(v___y_1964_);
v_rewriteCache_1991_ = lean_ctor_get(v___x_1990_, 0);
v_acNfCache_1992_ = lean_ctor_get(v___x_1990_, 1);
v_relevantFVars_1993_ = lean_ctor_get(v___x_1990_, 2);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1990_);
if (v_isSharedCheck_2002_ == 0)
{
lean_object* v_unused_2003_; 
v_unused_2003_ = lean_ctor_get(v___x_1990_, 3);
lean_dec(v_unused_2003_);
v___x_1995_ = v___x_1990_;
v_isShared_1996_ = v_isSharedCheck_2002_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_relevantFVars_1993_);
lean_inc(v_acNfCache_1992_);
lean_inc(v_rewriteCache_1991_);
lean_dec(v___x_1990_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2002_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1998_; 
if (v_isShared_1996_ == 0)
{
lean_ctor_set(v___x_1995_, 3, v_val_1989_);
v___x_1998_ = v___x_1995_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_rewriteCache_1991_);
lean_ctor_set(v_reuseFailAlloc_2001_, 1, v_acNfCache_1992_);
lean_ctor_set(v_reuseFailAlloc_2001_, 2, v_relevantFVars_1993_);
lean_ctor_set(v_reuseFailAlloc_2001_, 3, v_val_1989_);
v___x_1998_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
lean_object* v___x_1999_; 
v___x_1999_ = lean_st_ref_set(v___y_1964_, v___x_1998_);
v_as_x27_1961_ = v_tail_1974_;
v_b_1962_ = v___x_1985_;
goto _start;
}
}
}
else
{
lean_dec(v_a_1988_);
if (v_hasTrace_1981_ == 0)
{
goto v___jp_1982_;
}
else
{
lean_object* v___x_2004_; lean_object* v___x_2005_; uint8_t v___x_2006_; 
v___x_2004_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__31));
v___x_2005_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35);
v___x_2006_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1980_, v_options_1976_, v___x_2005_);
if (v___x_2006_ == 0)
{
goto v___jp_1982_;
}
else
{
lean_object* v___x_2007_; lean_object* v___x_2008_; 
v___x_2007_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__4);
v___x_2008_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0___redArg(v___x_2004_, v___x_2007_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_);
if (lean_obj_tag(v___x_2008_) == 0)
{
lean_dec_ref_known(v___x_2008_, 1);
goto v___jp_1982_;
}
else
{
lean_object* v_a_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2016_; 
v_a_2009_ = lean_ctor_get(v___x_2008_, 0);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___x_2008_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_2011_ = v___x_2008_;
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_a_2009_);
lean_dec(v___x_2008_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v___x_2014_; 
if (v_isShared_2012_ == 0)
{
v___x_2014_ = v___x_2011_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v_a_2009_);
v___x_2014_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
return v___x_2014_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2024_; 
v_a_2017_ = lean_ctor_get(v___y_1987_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___y_1987_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2019_ = v___y_1987_;
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___y_1987_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2022_; 
if (v_isShared_2020_ == 0)
{
v___x_2022_ = v___x_2019_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_a_2017_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___boxed(lean_object* v_as_x27_2102_, lean_object* v_b_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_){
_start:
{
lean_object* v_res_2113_; 
v_res_2113_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg(v_as_x27_2102_, v_b_2103_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
lean_dec(v___y_2107_);
lean_dec_ref(v___y_2106_);
lean_dec(v___y_2105_);
lean_dec_ref(v___y_2104_);
lean_dec(v_as_x27_2102_);
return v_res_2113_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__2(void){
_start:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___x_2116_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__1));
v___x_2117_ = l_Lean_stringToMessageData(v___x_2116_);
return v___x_2117_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__4(void){
_start:
{
lean_object* v___x_2119_; lean_object* v___x_2120_; 
v___x_2119_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__3));
v___x_2120_ = l_Lean_stringToMessageData(v___x_2119_);
return v___x_2120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline(lean_object* v_passes_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_, lean_object* v_a_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_, lean_object* v_a_2129_){
_start:
{
lean_object* v___x_2131_; lean_object* v___x_2132_; 
v___x_2131_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__0));
v___x_2132_ = l_Lean_Core_checkSystem(v___x_2131_, v_a_2128_, v_a_2129_);
if (lean_obj_tag(v___x_2132_) == 0)
{
lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; 
lean_dec_ref_known(v___x_2132_, 1);
v___x_2133_ = lean_st_ref_get(v_a_2123_);
v___x_2134_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg___closed__2));
v___x_2135_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg(v_passes_2121_, v___x_2134_, v_a_2122_, v_a_2123_, v_a_2124_, v_a_2125_, v_a_2126_, v_a_2127_, v_a_2128_, v_a_2129_);
if (lean_obj_tag(v___x_2135_) == 0)
{
lean_object* v_a_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2198_; 
v_a_2136_ = lean_ctor_get(v___x_2135_, 0);
v_isSharedCheck_2198_ = !lean_is_exclusive(v___x_2135_);
if (v_isSharedCheck_2198_ == 0)
{
v___x_2138_ = v___x_2135_;
v_isShared_2139_ = v_isSharedCheck_2198_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_a_2136_);
lean_dec(v___x_2135_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2198_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v_fst_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2196_; 
v_fst_2140_ = lean_ctor_get(v_a_2136_, 0);
v_isSharedCheck_2196_ = !lean_is_exclusive(v_a_2136_);
if (v_isSharedCheck_2196_ == 0)
{
lean_object* v_unused_2197_; 
v_unused_2197_ = lean_ctor_get(v_a_2136_, 1);
lean_dec(v_unused_2197_);
v___x_2142_ = v_a_2136_;
v_isShared_2143_ = v_isSharedCheck_2196_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_fst_2140_);
lean_dec(v_a_2136_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2196_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
if (lean_obj_tag(v_fst_2140_) == 0)
{
lean_object* v___x_2144_; lean_object* v_goal_2145_; lean_object* v_goal_2146_; uint8_t v___x_2152_; 
v___x_2144_ = lean_st_ref_get(v_a_2123_);
v_goal_2145_ = lean_ctor_get(v___x_2133_, 3);
lean_inc(v_goal_2145_);
lean_dec(v___x_2133_);
v_goal_2146_ = lean_ctor_get(v___x_2144_, 3);
lean_inc(v_goal_2146_);
lean_dec(v___x_2144_);
v___x_2152_ = l_Lean_instBEqMVarId_beq(v_goal_2145_, v_goal_2146_);
lean_dec(v_goal_2145_);
if (v___x_2152_ == 0)
{
lean_object* v_options_2153_; uint8_t v_hasTrace_2154_; 
lean_del_object(v___x_2138_);
v_options_2153_ = lean_ctor_get(v_a_2128_, 2);
v_hasTrace_2154_ = lean_ctor_get_uint8(v_options_2153_, sizeof(void*)*1);
if (v_hasTrace_2154_ == 0)
{
lean_dec(v_goal_2146_);
lean_del_object(v___x_2142_);
goto _start;
}
else
{
lean_object* v_inheritedTraceOptions_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; uint8_t v___x_2159_; 
v_inheritedTraceOptions_2156_ = lean_ctor_get(v_a_2128_, 13);
v___x_2157_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__31));
v___x_2158_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35);
v___x_2159_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2156_, v_options_2153_, v___x_2158_);
if (v___x_2159_ == 0)
{
lean_dec(v_goal_2146_);
lean_del_object(v___x_2142_);
goto _start;
}
else
{
lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2164_; 
v___x_2161_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__2, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__2_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__2);
v___x_2162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2162_, 0, v_goal_2146_);
if (v_isShared_2143_ == 0)
{
lean_ctor_set_tag(v___x_2142_, 7);
lean_ctor_set(v___x_2142_, 1, v___x_2162_);
lean_ctor_set(v___x_2142_, 0, v___x_2161_);
v___x_2164_ = v___x_2142_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v___x_2161_);
lean_ctor_set(v_reuseFailAlloc_2175_, 1, v___x_2162_);
v___x_2164_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
lean_object* v___x_2165_; 
v___x_2165_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0___redArg(v___x_2157_, v___x_2164_, v_a_2126_, v_a_2127_, v_a_2128_, v_a_2129_);
if (lean_obj_tag(v___x_2165_) == 0)
{
lean_dec_ref_known(v___x_2165_, 1);
goto _start;
}
else
{
lean_object* v_a_2167_; lean_object* v___x_2169_; uint8_t v_isShared_2170_; uint8_t v_isSharedCheck_2174_; 
v_a_2167_ = lean_ctor_get(v___x_2165_, 0);
v_isSharedCheck_2174_ = !lean_is_exclusive(v___x_2165_);
if (v_isSharedCheck_2174_ == 0)
{
v___x_2169_ = v___x_2165_;
v_isShared_2170_ = v_isSharedCheck_2174_;
goto v_resetjp_2168_;
}
else
{
lean_inc(v_a_2167_);
lean_dec(v___x_2165_);
v___x_2169_ = lean_box(0);
v_isShared_2170_ = v_isSharedCheck_2174_;
goto v_resetjp_2168_;
}
v_resetjp_2168_:
{
lean_object* v___x_2172_; 
if (v_isShared_2170_ == 0)
{
v___x_2172_ = v___x_2169_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v_a_2167_);
v___x_2172_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
return v___x_2172_;
}
}
}
}
}
}
}
else
{
lean_object* v_options_2176_; uint8_t v_hasTrace_2177_; 
lean_del_object(v___x_2142_);
v_options_2176_ = lean_ctor_get(v_a_2128_, 2);
v_hasTrace_2177_ = lean_ctor_get_uint8(v_options_2176_, sizeof(void*)*1);
if (v_hasTrace_2177_ == 0)
{
goto v___jp_2147_;
}
else
{
lean_object* v_inheritedTraceOptions_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; uint8_t v___x_2181_; 
v_inheritedTraceOptions_2178_ = lean_ctor_get(v_a_2128_, 13);
v___x_2179_ = ((lean_object*)(l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__31));
v___x_2180_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_TypeAnalysisPass_run___closed__35);
v___x_2181_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2178_, v_options_2176_, v___x_2180_);
if (v___x_2181_ == 0)
{
goto v___jp_2147_;
}
else
{
lean_object* v___x_2182_; lean_object* v___x_2183_; 
v___x_2182_ = lean_obj_once(&l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__4, &l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__4_once, _init_l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___closed__4);
v___x_2183_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0___redArg(v___x_2179_, v___x_2182_, v_a_2126_, v_a_2127_, v_a_2128_, v_a_2129_);
if (lean_obj_tag(v___x_2183_) == 0)
{
lean_dec_ref_known(v___x_2183_, 1);
goto v___jp_2147_;
}
else
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
lean_dec(v_goal_2146_);
lean_del_object(v___x_2138_);
v_a_2184_ = lean_ctor_get(v___x_2183_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2183_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2183_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2183_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2189_; 
if (v_isShared_2187_ == 0)
{
v___x_2189_ = v___x_2186_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2184_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
}
}
}
v___jp_2147_:
{
lean_object* v___x_2148_; lean_object* v___x_2150_; 
v___x_2148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2148_, 0, v_goal_2146_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set(v___x_2138_, 0, v___x_2148_);
v___x_2150_ = v___x_2138_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v___x_2148_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
else
{
lean_object* v_val_2192_; lean_object* v___x_2194_; 
lean_del_object(v___x_2142_);
lean_dec(v___x_2133_);
v_val_2192_ = lean_ctor_get(v_fst_2140_, 0);
lean_inc(v_val_2192_);
lean_dec_ref_known(v_fst_2140_, 1);
if (v_isShared_2139_ == 0)
{
lean_ctor_set(v___x_2138_, 0, v_val_2192_);
v___x_2194_ = v___x_2138_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v_val_2192_);
v___x_2194_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
return v___x_2194_;
}
}
}
}
}
else
{
lean_object* v_a_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2206_; 
lean_dec(v___x_2133_);
v_a_2199_ = lean_ctor_get(v___x_2135_, 0);
v_isSharedCheck_2206_ = !lean_is_exclusive(v___x_2135_);
if (v_isSharedCheck_2206_ == 0)
{
v___x_2201_ = v___x_2135_;
v_isShared_2202_ = v_isSharedCheck_2206_;
goto v_resetjp_2200_;
}
else
{
lean_inc(v_a_2199_);
lean_dec(v___x_2135_);
v___x_2201_ = lean_box(0);
v_isShared_2202_ = v_isSharedCheck_2206_;
goto v_resetjp_2200_;
}
v_resetjp_2200_:
{
lean_object* v___x_2204_; 
if (v_isShared_2202_ == 0)
{
v___x_2204_ = v___x_2201_;
goto v_reusejp_2203_;
}
else
{
lean_object* v_reuseFailAlloc_2205_; 
v_reuseFailAlloc_2205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2205_, 0, v_a_2199_);
v___x_2204_ = v_reuseFailAlloc_2205_;
goto v_reusejp_2203_;
}
v_reusejp_2203_:
{
return v___x_2204_;
}
}
}
}
else
{
lean_object* v_a_2207_; lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2214_; 
v_a_2207_ = lean_ctor_get(v___x_2132_, 0);
v_isSharedCheck_2214_ = !lean_is_exclusive(v___x_2132_);
if (v_isSharedCheck_2214_ == 0)
{
v___x_2209_ = v___x_2132_;
v_isShared_2210_ = v_isSharedCheck_2214_;
goto v_resetjp_2208_;
}
else
{
lean_inc(v_a_2207_);
lean_dec(v___x_2132_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2214_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
lean_object* v___x_2212_; 
if (v_isShared_2210_ == 0)
{
v___x_2212_ = v___x_2209_;
goto v_reusejp_2211_;
}
else
{
lean_object* v_reuseFailAlloc_2213_; 
v_reuseFailAlloc_2213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2213_, 0, v_a_2207_);
v___x_2212_ = v_reuseFailAlloc_2213_;
goto v_reusejp_2211_;
}
v_reusejp_2211_:
{
return v___x_2212_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline___boxed(lean_object* v_passes_2215_, lean_object* v_a_2216_, lean_object* v_a_2217_, lean_object* v_a_2218_, lean_object* v_a_2219_, lean_object* v_a_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_, lean_object* v_a_2224_){
_start:
{
lean_object* v_res_2225_; 
v_res_2225_ = l_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline(v_passes_2215_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_);
lean_dec(v_a_2223_);
lean_dec_ref(v_a_2222_);
lean_dec(v_a_2221_);
lean_dec_ref(v_a_2220_);
lean_dec(v_a_2219_);
lean_dec_ref(v_a_2218_);
lean_dec(v_a_2217_);
lean_dec_ref(v_a_2216_);
lean_dec(v_passes_2215_);
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0(lean_object* v_cls_2226_, lean_object* v_msg_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_){
_start:
{
lean_object* v___x_2237_; 
v___x_2237_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0___redArg(v_cls_2226_, v_msg_2227_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0___boxed(lean_object* v_cls_2238_, lean_object* v_msg_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_){
_start:
{
lean_object* v_res_2249_; 
v_res_2249_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__0(v_cls_2238_, v_msg_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_);
lean_dec(v___y_2247_);
lean_dec_ref(v___y_2246_);
lean_dec(v___y_2245_);
lean_dec_ref(v___y_2244_);
lean_dec(v___y_2243_);
lean_dec_ref(v___y_2242_);
lean_dec(v___y_2241_);
lean_dec_ref(v___y_2240_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__6(lean_object* v_00_u03b1_2250_, lean_object* v_x_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_){
_start:
{
lean_object* v___x_2261_; 
v___x_2261_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__6___redArg(v_x_2251_);
return v___x_2261_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__6___boxed(lean_object* v_00_u03b1_2262_, lean_object* v_x_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_){
_start:
{
lean_object* v_res_2273_; 
v_res_2273_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__6(v_00_u03b1_2262_, v_x_2263_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_);
lean_dec(v___y_2271_);
lean_dec_ref(v___y_2270_);
lean_dec(v___y_2269_);
lean_dec_ref(v___y_2268_);
lean_dec(v___y_2267_);
lean_dec_ref(v___y_2266_);
lean_dec(v___y_2265_);
lean_dec_ref(v___y_2264_);
return v_res_2273_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4(lean_object* v_as_2274_, lean_object* v_as_x27_2275_, lean_object* v_b_2276_, lean_object* v_a_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_){
_start:
{
lean_object* v___x_2287_; 
v___x_2287_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___redArg(v_as_x27_2275_, v_b_2276_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_);
return v___x_2287_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4___boxed(lean_object* v_as_2288_, lean_object* v_as_x27_2289_, lean_object* v_b_2290_, lean_object* v_a_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_){
_start:
{
lean_object* v_res_2301_; 
v_res_2301_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__4(v_as_2288_, v_as_x27_2289_, v_b_2290_, v_a_2291_, v___y_2292_, v___y_2293_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
lean_dec(v___y_2297_);
lean_dec_ref(v___y_2296_);
lean_dec(v___y_2295_);
lean_dec_ref(v___y_2294_);
lean_dec(v___y_2293_);
lean_dec_ref(v___y_2292_);
lean_dec(v_as_x27_2289_);
lean_dec(v_as_2288_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5(lean_object* v_oldTraces_2302_, lean_object* v_data_2303_, lean_object* v_ref_2304_, lean_object* v_msg_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_){
_start:
{
lean_object* v___x_2315_; 
v___x_2315_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5___redArg(v_oldTraces_2302_, v_data_2303_, v_ref_2304_, v_msg_2305_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_);
return v___x_2315_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5___boxed(lean_object* v_oldTraces_2316_, lean_object* v_data_2317_, lean_object* v_ref_2318_, lean_object* v_msg_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_){
_start:
{
lean_object* v_res_2329_; 
v_res_2329_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Tactic_BVDecide_Frontend_Normalize_PreProcessPass_fixpointPipeline_spec__3_spec__5(v_oldTraces_2316_, v_data_2317_, v_ref_2318_, v_msg_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_);
lean_dec(v___y_2327_);
lean_dec_ref(v___y_2326_);
lean_dec(v___y_2325_);
lean_dec_ref(v___y_2324_);
lean_dec(v___y_2323_);
lean_dec_ref(v___y_2322_);
lean_dec(v___y_2321_);
lean_dec_ref(v___y_2320_);
return v_res_2329_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Attr(builtin);
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
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_BVDecide_Frontend_Attr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_BVDecide_Frontend_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_BVDecide_Frontend_Normalize_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
