// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Normalize.Basic
// Imports: public import Lean.Meta.Tactic.BVDecide.Attr public import Std.Tactic.BVDecide.Syntax public import Lean.Meta.Sym.ExprPtr public import Lean.Meta.Sym.SymM public import Lean.Meta.Sym.Simp.SimpM import Lean.Meta.Sym.InferType
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
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_instBEqFVarId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instHashableFVarId_hash___boxed(lean_object*);
lean_object* l_instMonadExceptOfEIO(lean_object*);
lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(lean_object*);
lean_object* l_Lean_instMonadAlwaysExceptReaderT___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_ReaderT_instMonadLift___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_getPropHyps(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
size_t lean_usize_add(size_t, size_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_Meta_Sym_getLevel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assign___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instExceptToTraceResultBool___lam__0___boxed(lean_object*);
lean_object* l_instMonadControlReaderT(lean_object*, lean_object*);
lean_object* l_instMonadControlStateRefT_x27(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfPure___redArg(lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_withContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t l_Lean_Expr_hash(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KVMap_instValueBool;
lean_object* l_Lean_Option_get___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_simpleEnum_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_simpleEnum_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_enumWithDefault_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_enumWithDefault_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp_hash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp_hash___closed__0;
LEAN_EXPORT uint64_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(183, 66, 254, 161, 210, 133, 94, 78)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getGoal___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getGoal___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setGoal___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setGoal___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqFVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableFVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkAcNf___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkAcNf___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkAcNf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkAcNf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_rewriteFinished___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_rewriteFinished___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_rewriteFinished(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_rewriteFinished___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_acNfFinished___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_acNfFinished___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_acNfFinished(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_acNfFinished___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__4_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__6;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__7;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__9;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__10;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__11;
static const lean_array_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Learned hypothesis: "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "  ==>  "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Running pass: "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instExceptToTraceResultBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__6___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___boxed(lean_object**);
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Fixpoint iteration solved the goal"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg___closed__1_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bv_decide"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Pipeline reached a fixpoint"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__2;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Rerunning pipeline"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
lean_object* v_info_8_; lean_object* v_ctors_9_; lean_object* v___x_10_; 
v_info_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_info_8_);
v_ctors_9_ = lean_ctor_get(v_t_6_, 1);
lean_inc_ref(v_ctors_9_);
lean_dec_ref(v_t_6_);
v___x_10_ = lean_apply_2(v_k_7_, v_info_8_, v_ctors_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, lean_object* v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_13_, v_k_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___boxed(lean_object* v_motive_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim(v_motive_17_, v_ctorIdx_18_, v_t_19_, v_h_20_, v_k_21_);
lean_dec(v_ctorIdx_18_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_simpleEnum_elim___redArg(lean_object* v_t_23_, lean_object* v_simpleEnum_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_23_, v_simpleEnum_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_simpleEnum_elim(lean_object* v_motive_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_simpleEnum_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_27_, v_simpleEnum_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_enumWithDefault_elim___redArg(lean_object* v_t_31_, lean_object* v_enumWithDefault_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_31_, v_enumWithDefault_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_enumWithDefault_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_enumWithDefault_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_35_, v_enumWithDefault_37_);
return v___x_38_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = lean_box(0);
v___x_43_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__1));
v___x_44_ = l_Lean_Expr_const___override(v___x_43_, v___x_42_);
return v___x_44_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_45_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2);
v___x_46_ = lean_box(0);
v___x_47_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_47_, 0, v___x_46_);
lean_ctor_set(v___x_47_, 1, v___x_45_);
lean_ctor_set(v___x_47_, 2, v___x_45_);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default;
return v___x_49_;
}
}
static uint64_t _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp_hash___closed__0(void){
_start:
{
lean_object* v___x_50_; uint64_t v___x_51_; 
v___x_50_ = lean_unsigned_to_nat(1723u);
v___x_51_ = lean_uint64_of_nat(v___x_50_);
return v___x_51_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp_hash(lean_object* v_x_52_){
_start:
{
lean_object* v_name_53_; lean_object* v_type_54_; lean_object* v_value_55_; uint64_t v___x_56_; uint64_t v___y_58_; 
v_name_53_ = lean_ctor_get(v_x_52_, 0);
v_type_54_ = lean_ctor_get(v_x_52_, 1);
v_value_55_ = lean_ctor_get(v_x_52_, 2);
v___x_56_ = 0ULL;
if (lean_obj_tag(v_name_53_) == 0)
{
uint64_t v___x_64_; 
v___x_64_ = lean_uint64_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp_hash___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp_hash___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp_hash___closed__0);
v___y_58_ = v___x_64_;
goto v___jp_57_;
}
else
{
uint64_t v_hash_65_; 
v_hash_65_ = lean_ctor_get_uint64(v_name_53_, sizeof(void*)*2);
v___y_58_ = v_hash_65_;
goto v___jp_57_;
}
v___jp_57_:
{
uint64_t v___x_59_; uint64_t v___x_60_; uint64_t v___x_61_; uint64_t v___x_62_; uint64_t v___x_63_; 
v___x_59_ = lean_uint64_mix_hash(v___x_56_, v___y_58_);
v___x_60_ = l_Lean_Expr_hash(v_type_54_);
v___x_61_ = lean_uint64_mix_hash(v___x_59_, v___x_60_);
v___x_62_ = l_Lean_Expr_hash(v_value_55_);
v___x_63_ = lean_uint64_mix_hash(v___x_61_, v___x_62_);
return v___x_63_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp_hash___boxed(lean_object* v_x_66_){
_start:
{
uint64_t v_res_67_; lean_object* v_r_68_; 
v_res_67_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp_hash(v_x_66_);
lean_dec_ref(v_x_66_);
v_r_68_ = lean_box_uint64(v_res_67_);
return v_r_68_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp_beq(lean_object* v_x_71_, lean_object* v_x_72_){
_start:
{
lean_object* v_name_73_; lean_object* v_type_74_; lean_object* v_value_75_; lean_object* v_name_76_; lean_object* v_type_77_; lean_object* v_value_78_; uint8_t v___x_79_; 
v_name_73_ = lean_ctor_get(v_x_71_, 0);
v_type_74_ = lean_ctor_get(v_x_71_, 1);
v_value_75_ = lean_ctor_get(v_x_71_, 2);
v_name_76_ = lean_ctor_get(v_x_72_, 0);
v_type_77_ = lean_ctor_get(v_x_72_, 1);
v_value_78_ = lean_ctor_get(v_x_72_, 2);
v___x_79_ = lean_name_eq(v_name_73_, v_name_76_);
if (v___x_79_ == 0)
{
return v___x_79_;
}
else
{
uint8_t v___x_80_; 
v___x_80_ = lean_expr_eqv(v_type_74_, v_type_77_);
if (v___x_80_ == 0)
{
return v___x_80_;
}
else
{
uint8_t v___x_81_; 
v___x_81_ = lean_expr_eqv(v_value_75_, v_value_78_);
return v___x_81_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp_beq___boxed(lean_object* v_x_82_, lean_object* v_x_83_){
_start:
{
uint8_t v_res_84_; lean_object* v_r_85_; 
v_res_84_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp_beq(v_x_82_, v_x_83_);
lean_dec_ref(v_x_83_);
lean_dec_ref(v_x_82_);
v_r_85_ = lean_box(v_res_84_);
return v_r_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(lean_object* v_hyp_93_, lean_object* v_result_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_){
_start:
{
if (lean_obj_tag(v_result_94_) == 0)
{
lean_object* v___x_101_; 
lean_dec_ref_known(v_result_94_, 0);
v___x_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_101_, 0, v_hyp_93_);
return v___x_101_;
}
else
{
lean_object* v_e_x27_102_; lean_object* v_proof_103_; lean_object* v_name_104_; lean_object* v_type_105_; lean_object* v_value_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_135_; 
v_e_x27_102_ = lean_ctor_get(v_result_94_, 0);
lean_inc_ref(v_e_x27_102_);
v_proof_103_ = lean_ctor_get(v_result_94_, 1);
lean_inc_ref(v_proof_103_);
lean_dec_ref_known(v_result_94_, 2);
v_name_104_ = lean_ctor_get(v_hyp_93_, 0);
v_type_105_ = lean_ctor_get(v_hyp_93_, 1);
v_value_106_ = lean_ctor_get(v_hyp_93_, 2);
v_isSharedCheck_135_ = !lean_is_exclusive(v_hyp_93_);
if (v_isSharedCheck_135_ == 0)
{
v___x_108_ = v_hyp_93_;
v_isShared_109_ = v_isSharedCheck_135_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_value_106_);
lean_inc(v_type_105_);
lean_inc(v_name_104_);
lean_dec(v_hyp_93_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_135_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___x_110_; 
lean_inc_ref(v_type_105_);
v___x_110_ = l_Lean_Meta_Sym_getLevel___redArg(v_type_105_, v_a_95_, v_a_96_, v_a_97_, v_a_98_, v_a_99_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_126_; 
v_a_111_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_126_ == 0)
{
v___x_113_ = v___x_110_;
v_isShared_114_ = v_isSharedCheck_126_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_110_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_126_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_121_; 
v___x_115_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2));
v___x_116_ = lean_box(0);
v___x_117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_117_, 0, v_a_111_);
lean_ctor_set(v___x_117_, 1, v___x_116_);
v___x_118_ = l_Lean_mkConst(v___x_115_, v___x_117_);
lean_inc_ref(v_e_x27_102_);
v___x_119_ = l_Lean_mkApp4(v___x_118_, v_type_105_, v_e_x27_102_, v_proof_103_, v_value_106_);
if (v_isShared_109_ == 0)
{
lean_ctor_set(v___x_108_, 2, v___x_119_);
lean_ctor_set(v___x_108_, 1, v_e_x27_102_);
v___x_121_ = v___x_108_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_name_104_);
lean_ctor_set(v_reuseFailAlloc_125_, 1, v_e_x27_102_);
lean_ctor_set(v_reuseFailAlloc_125_, 2, v___x_119_);
v___x_121_ = v_reuseFailAlloc_125_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
lean_object* v___x_123_; 
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 0, v___x_121_);
v___x_123_ = v___x_113_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_121_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
}
}
else
{
lean_object* v_a_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_134_; 
lean_del_object(v___x_108_);
lean_dec_ref(v_value_106_);
lean_dec_ref(v_type_105_);
lean_dec(v_name_104_);
lean_dec_ref(v_proof_103_);
lean_dec_ref(v_e_x27_102_);
v_a_127_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_134_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_134_ == 0)
{
v___x_129_ = v___x_110_;
v_isShared_130_ = v_isSharedCheck_134_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_a_127_);
lean_dec(v___x_110_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_134_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_132_; 
if (v_isShared_130_ == 0)
{
v___x_132_ = v___x_129_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v_a_127_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___boxed(lean_object* v_hyp_136_, lean_object* v_result_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v_hyp_136_, v_result_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_);
lean_dec(v_a_142_);
lean_dec_ref(v_a_141_);
lean_dec(v_a_140_);
lean_dec_ref(v_a_139_);
lean_dec(v_a_138_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult(lean_object* v_hyp_145_, lean_object* v_result_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v_hyp_145_, v_result_146_, v_a_148_, v_a_149_, v_a_150_, v_a_151_, v_a_152_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___boxed(lean_object* v_hyp_155_, lean_object* v_result_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult(v_hyp_155_, v_result_156_, v_a_157_, v_a_158_, v_a_159_, v_a_160_, v_a_161_, v_a_162_);
lean_dec(v_a_162_);
lean_dec_ref(v_a_161_);
lean_dec(v_a_160_);
lean_dec_ref(v_a_159_);
lean_dec(v_a_158_);
lean_dec_ref(v_a_157_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg(lean_object* v_a_165_){
_start:
{
lean_object* v___x_167_; 
lean_inc_ref(v_a_165_);
v___x_167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_167_, 0, v_a_165_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg___boxed(lean_object* v_a_168_, lean_object* v_a_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg(v_a_168_);
lean_dec_ref(v_a_168_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig(lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_){
_start:
{
lean_object* v___x_180_; 
lean_inc_ref(v_a_171_);
v___x_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_180_, 0, v_a_171_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___boxed(lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig(v_a_181_, v_a_182_, v_a_183_, v_a_184_, v_a_185_, v_a_186_, v_a_187_, v_a_188_);
lean_dec(v_a_188_);
lean_dec_ref(v_a_187_);
lean_dec(v_a_186_);
lean_dec_ref(v_a_185_);
lean_dec(v_a_184_);
lean_dec_ref(v_a_183_);
lean_dec(v_a_182_);
lean_dec_ref(v_a_181_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getGoal___redArg(lean_object* v_a_191_){
_start:
{
lean_object* v___x_193_; lean_object* v_goal_194_; lean_object* v___x_195_; 
v___x_193_ = lean_st_ref_get(v_a_191_);
v_goal_194_ = lean_ctor_get(v___x_193_, 3);
lean_inc(v_goal_194_);
lean_dec(v___x_193_);
v___x_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_195_, 0, v_goal_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getGoal___redArg___boxed(lean_object* v_a_196_, lean_object* v_a_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getGoal___redArg(v_a_196_);
lean_dec(v_a_196_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getGoal(lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_){
_start:
{
lean_object* v___x_208_; lean_object* v_goal_209_; lean_object* v___x_210_; 
v___x_208_ = lean_st_ref_get(v_a_200_);
v_goal_209_ = lean_ctor_get(v___x_208_, 3);
lean_inc(v_goal_209_);
lean_dec(v___x_208_);
v___x_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_210_, 0, v_goal_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getGoal___boxed(lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getGoal(v_a_211_, v_a_212_, v_a_213_, v_a_214_, v_a_215_, v_a_216_, v_a_217_, v_a_218_);
lean_dec(v_a_218_);
lean_dec_ref(v_a_217_);
lean_dec(v_a_216_);
lean_dec_ref(v_a_215_);
lean_dec(v_a_214_);
lean_dec_ref(v_a_213_);
lean_dec(v_a_212_);
lean_dec_ref(v_a_211_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setGoal___redArg(lean_object* v_g_221_, lean_object* v_a_222_){
_start:
{
lean_object* v___x_224_; lean_object* v_fst_226_; lean_object* v_snd_227_; lean_object* v_rewriteCache_230_; lean_object* v_acNfCache_231_; lean_object* v_typeAnalysis_232_; lean_object* v_goal_233_; lean_object* v_hypotheses_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_248_; 
v___x_224_ = lean_st_ref_take(v_a_222_);
v_rewriteCache_230_ = lean_ctor_get(v___x_224_, 0);
v_acNfCache_231_ = lean_ctor_get(v___x_224_, 1);
v_typeAnalysis_232_ = lean_ctor_get(v___x_224_, 2);
v_goal_233_ = lean_ctor_get(v___x_224_, 3);
v_hypotheses_234_ = lean_ctor_get(v___x_224_, 4);
v_isSharedCheck_248_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_248_ == 0)
{
v___x_236_ = v___x_224_;
v_isShared_237_ = v_isSharedCheck_248_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_hypotheses_234_);
lean_inc(v_goal_233_);
lean_inc(v_typeAnalysis_232_);
lean_inc(v_acNfCache_231_);
lean_inc(v_rewriteCache_230_);
lean_dec(v___x_224_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_248_;
goto v_resetjp_235_;
}
v___jp_225_:
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = lean_st_ref_set(v_a_222_, v_snd_227_);
v___x_229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_229_, 0, v_fst_226_);
return v___x_229_;
}
v_resetjp_235_:
{
lean_object* v___x_238_; uint8_t v___x_239_; 
v___x_238_ = lean_box(0);
v___x_239_ = l_Lean_instBEqMVarId_beq(v_g_221_, v_goal_233_);
lean_dec(v_goal_233_);
if (v___x_239_ == 0)
{
uint8_t v___x_240_; lean_object* v___x_242_; 
v___x_240_ = 1;
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 3, v_g_221_);
v___x_242_ = v___x_236_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_rewriteCache_230_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v_acNfCache_231_);
lean_ctor_set(v_reuseFailAlloc_243_, 2, v_typeAnalysis_232_);
lean_ctor_set(v_reuseFailAlloc_243_, 3, v_g_221_);
lean_ctor_set(v_reuseFailAlloc_243_, 4, v_hypotheses_234_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
lean_ctor_set_uint8(v___x_242_, sizeof(void*)*5, v___x_240_);
v_fst_226_ = v___x_238_;
v_snd_227_ = v___x_242_;
goto v___jp_225_;
}
}
else
{
uint8_t v___x_244_; lean_object* v___x_246_; 
v___x_244_ = 0;
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 3, v_g_221_);
v___x_246_ = v___x_236_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v_rewriteCache_230_);
lean_ctor_set(v_reuseFailAlloc_247_, 1, v_acNfCache_231_);
lean_ctor_set(v_reuseFailAlloc_247_, 2, v_typeAnalysis_232_);
lean_ctor_set(v_reuseFailAlloc_247_, 3, v_g_221_);
lean_ctor_set(v_reuseFailAlloc_247_, 4, v_hypotheses_234_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
lean_ctor_set_uint8(v___x_246_, sizeof(void*)*5, v___x_244_);
v_fst_226_ = v___x_238_;
v_snd_227_ = v___x_246_;
goto v___jp_225_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setGoal___redArg___boxed(lean_object* v_g_249_, lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setGoal___redArg(v_g_249_, v_a_250_);
lean_dec(v_a_250_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setGoal(lean_object* v_g_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_){
_start:
{
lean_object* v___x_263_; lean_object* v_fst_265_; lean_object* v_snd_266_; lean_object* v_rewriteCache_269_; lean_object* v_acNfCache_270_; lean_object* v_typeAnalysis_271_; lean_object* v_goal_272_; lean_object* v_hypotheses_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_287_; 
v___x_263_ = lean_st_ref_take(v_a_255_);
v_rewriteCache_269_ = lean_ctor_get(v___x_263_, 0);
v_acNfCache_270_ = lean_ctor_get(v___x_263_, 1);
v_typeAnalysis_271_ = lean_ctor_get(v___x_263_, 2);
v_goal_272_ = lean_ctor_get(v___x_263_, 3);
v_hypotheses_273_ = lean_ctor_get(v___x_263_, 4);
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_287_ == 0)
{
v___x_275_ = v___x_263_;
v_isShared_276_ = v_isSharedCheck_287_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_hypotheses_273_);
lean_inc(v_goal_272_);
lean_inc(v_typeAnalysis_271_);
lean_inc(v_acNfCache_270_);
lean_inc(v_rewriteCache_269_);
lean_dec(v___x_263_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_287_;
goto v_resetjp_274_;
}
v___jp_264_:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_st_ref_set(v_a_255_, v_snd_266_);
v___x_268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_268_, 0, v_fst_265_);
return v___x_268_;
}
v_resetjp_274_:
{
lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_277_ = lean_box(0);
v___x_278_ = l_Lean_instBEqMVarId_beq(v_g_253_, v_goal_272_);
lean_dec(v_goal_272_);
if (v___x_278_ == 0)
{
uint8_t v___x_279_; lean_object* v___x_281_; 
v___x_279_ = 1;
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 3, v_g_253_);
v___x_281_ = v___x_275_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_rewriteCache_269_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v_acNfCache_270_);
lean_ctor_set(v_reuseFailAlloc_282_, 2, v_typeAnalysis_271_);
lean_ctor_set(v_reuseFailAlloc_282_, 3, v_g_253_);
lean_ctor_set(v_reuseFailAlloc_282_, 4, v_hypotheses_273_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
lean_ctor_set_uint8(v___x_281_, sizeof(void*)*5, v___x_279_);
v_fst_265_ = v___x_277_;
v_snd_266_ = v___x_281_;
goto v___jp_264_;
}
}
else
{
uint8_t v___x_283_; lean_object* v___x_285_; 
v___x_283_ = 0;
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 3, v_g_253_);
v___x_285_ = v___x_275_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_rewriteCache_269_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v_acNfCache_270_);
lean_ctor_set(v_reuseFailAlloc_286_, 2, v_typeAnalysis_271_);
lean_ctor_set(v_reuseFailAlloc_286_, 3, v_g_253_);
lean_ctor_set(v_reuseFailAlloc_286_, 4, v_hypotheses_273_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
lean_ctor_set_uint8(v___x_285_, sizeof(void*)*5, v___x_283_);
v_fst_265_ = v___x_277_;
v_snd_266_ = v___x_285_;
goto v___jp_264_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setGoal___boxed(lean_object* v_g_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setGoal(v_g_288_, v_a_289_, v_a_290_, v_a_291_, v_a_292_, v_a_293_, v_a_294_, v_a_295_, v_a_296_);
lean_dec(v_a_296_);
lean_dec_ref(v_a_295_);
lean_dec(v_a_294_);
lean_dec_ref(v_a_293_);
lean_dec(v_a_292_);
lean_dec_ref(v_a_291_);
lean_dec(v_a_290_);
lean_dec_ref(v_a_289_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg(lean_object* v_a_299_){
_start:
{
lean_object* v___x_301_; uint8_t v_didChange_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_301_ = lean_st_ref_get(v_a_299_);
v_didChange_302_ = lean_ctor_get_uint8(v___x_301_, sizeof(void*)*5);
lean_dec(v___x_301_);
v___x_303_ = lean_box(v_didChange_302_);
v___x_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg___boxed(lean_object* v_a_305_, lean_object* v_a_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg(v_a_305_);
lean_dec(v_a_305_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange(lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_){
_start:
{
lean_object* v___x_317_; uint8_t v_didChange_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_317_ = lean_st_ref_get(v_a_309_);
v_didChange_318_ = lean_ctor_get_uint8(v___x_317_, sizeof(void*)*5);
lean_dec(v___x_317_);
v___x_319_ = lean_box(v_didChange_318_);
v___x_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___boxed(lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange(v_a_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_);
lean_dec(v_a_328_);
lean_dec_ref(v_a_327_);
lean_dec(v_a_326_);
lean_dec_ref(v_a_325_);
lean_dec(v_a_324_);
lean_dec_ref(v_a_323_);
lean_dec(v_a_322_);
lean_dec_ref(v_a_321_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg(lean_object* v_a_331_){
_start:
{
lean_object* v___x_333_; lean_object* v_rewriteCache_334_; lean_object* v_acNfCache_335_; lean_object* v_typeAnalysis_336_; lean_object* v_goal_337_; lean_object* v_hypotheses_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_349_; 
v___x_333_ = lean_st_ref_take(v_a_331_);
v_rewriteCache_334_ = lean_ctor_get(v___x_333_, 0);
v_acNfCache_335_ = lean_ctor_get(v___x_333_, 1);
v_typeAnalysis_336_ = lean_ctor_get(v___x_333_, 2);
v_goal_337_ = lean_ctor_get(v___x_333_, 3);
v_hypotheses_338_ = lean_ctor_get(v___x_333_, 4);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_349_ == 0)
{
v___x_340_ = v___x_333_;
v_isShared_341_ = v_isSharedCheck_349_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_hypotheses_338_);
lean_inc(v_goal_337_);
lean_inc(v_typeAnalysis_336_);
lean_inc(v_acNfCache_335_);
lean_inc(v_rewriteCache_334_);
lean_dec(v___x_333_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_349_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
uint8_t v___x_342_; lean_object* v___x_344_; 
v___x_342_ = 0;
if (v_isShared_341_ == 0)
{
v___x_344_ = v___x_340_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_rewriteCache_334_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v_acNfCache_335_);
lean_ctor_set(v_reuseFailAlloc_348_, 2, v_typeAnalysis_336_);
lean_ctor_set(v_reuseFailAlloc_348_, 3, v_goal_337_);
lean_ctor_set(v_reuseFailAlloc_348_, 4, v_hypotheses_338_);
v___x_344_ = v_reuseFailAlloc_348_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
lean_ctor_set_uint8(v___x_344_, sizeof(void*)*5, v___x_342_);
v___x_345_ = lean_st_ref_set(v_a_331_, v___x_344_);
v___x_346_ = lean_box(0);
v___x_347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
return v___x_347_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg___boxed(lean_object* v_a_350_, lean_object* v_a_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg(v_a_350_);
lean_dec(v_a_350_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange(lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_){
_start:
{
lean_object* v___x_362_; lean_object* v_rewriteCache_363_; lean_object* v_acNfCache_364_; lean_object* v_typeAnalysis_365_; lean_object* v_goal_366_; lean_object* v_hypotheses_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_378_; 
v___x_362_ = lean_st_ref_take(v_a_354_);
v_rewriteCache_363_ = lean_ctor_get(v___x_362_, 0);
v_acNfCache_364_ = lean_ctor_get(v___x_362_, 1);
v_typeAnalysis_365_ = lean_ctor_get(v___x_362_, 2);
v_goal_366_ = lean_ctor_get(v___x_362_, 3);
v_hypotheses_367_ = lean_ctor_get(v___x_362_, 4);
v_isSharedCheck_378_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_378_ == 0)
{
v___x_369_ = v___x_362_;
v_isShared_370_ = v_isSharedCheck_378_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_hypotheses_367_);
lean_inc(v_goal_366_);
lean_inc(v_typeAnalysis_365_);
lean_inc(v_acNfCache_364_);
lean_inc(v_rewriteCache_363_);
lean_dec(v___x_362_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_378_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
uint8_t v___x_371_; lean_object* v___x_373_; 
v___x_371_ = 0;
if (v_isShared_370_ == 0)
{
v___x_373_ = v___x_369_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v_rewriteCache_363_);
lean_ctor_set(v_reuseFailAlloc_377_, 1, v_acNfCache_364_);
lean_ctor_set(v_reuseFailAlloc_377_, 2, v_typeAnalysis_365_);
lean_ctor_set(v_reuseFailAlloc_377_, 3, v_goal_366_);
lean_ctor_set(v_reuseFailAlloc_377_, 4, v_hypotheses_367_);
v___x_373_ = v_reuseFailAlloc_377_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
lean_ctor_set_uint8(v___x_373_, sizeof(void*)*5, v___x_371_);
v___x_374_ = lean_st_ref_set(v_a_354_, v___x_373_);
v___x_375_ = lean_box(0);
v___x_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
return v___x_376_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___boxed(lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange(v_a_379_, v_a_380_, v_a_381_, v_a_382_, v_a_383_, v_a_384_, v_a_385_, v_a_386_);
lean_dec(v_a_386_);
lean_dec_ref(v_a_385_);
lean_dec(v_a_384_);
lean_dec_ref(v_a_383_);
lean_dec(v_a_382_);
lean_dec_ref(v_a_381_);
lean_dec(v_a_380_);
lean_dec_ref(v_a_379_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg(lean_object* v_a_389_){
_start:
{
lean_object* v___x_391_; lean_object* v_rewriteCache_392_; lean_object* v_acNfCache_393_; lean_object* v_typeAnalysis_394_; lean_object* v_goal_395_; lean_object* v_hypotheses_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_407_; 
v___x_391_ = lean_st_ref_take(v_a_389_);
v_rewriteCache_392_ = lean_ctor_get(v___x_391_, 0);
v_acNfCache_393_ = lean_ctor_get(v___x_391_, 1);
v_typeAnalysis_394_ = lean_ctor_get(v___x_391_, 2);
v_goal_395_ = lean_ctor_get(v___x_391_, 3);
v_hypotheses_396_ = lean_ctor_get(v___x_391_, 4);
v_isSharedCheck_407_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_407_ == 0)
{
v___x_398_ = v___x_391_;
v_isShared_399_ = v_isSharedCheck_407_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_hypotheses_396_);
lean_inc(v_goal_395_);
lean_inc(v_typeAnalysis_394_);
lean_inc(v_acNfCache_393_);
lean_inc(v_rewriteCache_392_);
lean_dec(v___x_391_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_407_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
uint8_t v___x_400_; lean_object* v___x_402_; 
v___x_400_ = 1;
if (v_isShared_399_ == 0)
{
v___x_402_ = v___x_398_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v_rewriteCache_392_);
lean_ctor_set(v_reuseFailAlloc_406_, 1, v_acNfCache_393_);
lean_ctor_set(v_reuseFailAlloc_406_, 2, v_typeAnalysis_394_);
lean_ctor_set(v_reuseFailAlloc_406_, 3, v_goal_395_);
lean_ctor_set(v_reuseFailAlloc_406_, 4, v_hypotheses_396_);
v___x_402_ = v_reuseFailAlloc_406_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
lean_ctor_set_uint8(v___x_402_, sizeof(void*)*5, v___x_400_);
v___x_403_ = lean_st_ref_set(v_a_389_, v___x_402_);
v___x_404_ = lean_box(0);
v___x_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
return v___x_405_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg___boxed(lean_object* v_a_408_, lean_object* v_a_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg(v_a_408_);
lean_dec(v_a_408_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange(lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_){
_start:
{
lean_object* v___x_420_; lean_object* v_rewriteCache_421_; lean_object* v_acNfCache_422_; lean_object* v_typeAnalysis_423_; lean_object* v_goal_424_; lean_object* v_hypotheses_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_436_; 
v___x_420_ = lean_st_ref_take(v_a_412_);
v_rewriteCache_421_ = lean_ctor_get(v___x_420_, 0);
v_acNfCache_422_ = lean_ctor_get(v___x_420_, 1);
v_typeAnalysis_423_ = lean_ctor_get(v___x_420_, 2);
v_goal_424_ = lean_ctor_get(v___x_420_, 3);
v_hypotheses_425_ = lean_ctor_get(v___x_420_, 4);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_420_);
if (v_isSharedCheck_436_ == 0)
{
v___x_427_ = v___x_420_;
v_isShared_428_ = v_isSharedCheck_436_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_hypotheses_425_);
lean_inc(v_goal_424_);
lean_inc(v_typeAnalysis_423_);
lean_inc(v_acNfCache_422_);
lean_inc(v_rewriteCache_421_);
lean_dec(v___x_420_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_436_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
uint8_t v___x_429_; lean_object* v___x_431_; 
v___x_429_ = 1;
if (v_isShared_428_ == 0)
{
v___x_431_ = v___x_427_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_rewriteCache_421_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v_acNfCache_422_);
lean_ctor_set(v_reuseFailAlloc_435_, 2, v_typeAnalysis_423_);
lean_ctor_set(v_reuseFailAlloc_435_, 3, v_goal_424_);
lean_ctor_set(v_reuseFailAlloc_435_, 4, v_hypotheses_425_);
v___x_431_ = v_reuseFailAlloc_435_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
lean_ctor_set_uint8(v___x_431_, sizeof(void*)*5, v___x_429_);
v___x_432_ = lean_st_ref_set(v_a_412_, v___x_431_);
v___x_433_ = lean_box(0);
v___x_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
return v___x_434_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___boxed(lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange(v_a_437_, v_a_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_, v_a_443_, v_a_444_);
lean_dec(v_a_444_);
lean_dec_ref(v_a_443_);
lean_dec(v_a_442_);
lean_dec_ref(v_a_441_);
lean_dec(v_a_440_);
lean_dec_ref(v_a_439_);
lean_dec(v_a_438_);
lean_dec_ref(v_a_437_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg(lean_object* v_fvar_449_, lean_object* v_a_450_){
_start:
{
lean_object* v___x_452_; lean_object* v_rewriteCache_453_; lean_object* v___x_454_; lean_object* v___x_455_; uint8_t v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_452_ = lean_st_ref_get(v_a_450_);
v_rewriteCache_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc_ref(v_rewriteCache_453_);
lean_dec(v___x_452_);
v___x_454_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__0));
v___x_455_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__1));
v___x_456_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_454_, v___x_455_, v_rewriteCache_453_, v_fvar_449_);
lean_dec_ref(v_rewriteCache_453_);
v___x_457_ = lean_box(v___x_456_);
v___x_458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___boxed(lean_object* v_fvar_459_, lean_object* v_a_460_, lean_object* v_a_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg(v_fvar_459_, v_a_460_);
lean_dec(v_a_460_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten(lean_object* v_fvar_463_, lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_){
_start:
{
lean_object* v___x_473_; lean_object* v_rewriteCache_474_; lean_object* v___x_475_; lean_object* v___x_476_; uint8_t v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_473_ = lean_st_ref_get(v_a_465_);
v_rewriteCache_474_ = lean_ctor_get(v___x_473_, 0);
lean_inc_ref(v_rewriteCache_474_);
lean_dec(v___x_473_);
v___x_475_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__0));
v___x_476_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__1));
v___x_477_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_475_, v___x_476_, v_rewriteCache_474_, v_fvar_463_);
lean_dec_ref(v_rewriteCache_474_);
v___x_478_ = lean_box(v___x_477_);
v___x_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_479_, 0, v___x_478_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___boxed(lean_object* v_fvar_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten(v_fvar_480_, v_a_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_, v_a_488_);
lean_dec(v_a_488_);
lean_dec_ref(v_a_487_);
lean_dec(v_a_486_);
lean_dec_ref(v_a_485_);
lean_dec(v_a_484_);
lean_dec_ref(v_a_483_);
lean_dec(v_a_482_);
lean_dec_ref(v_a_481_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkAcNf___redArg(lean_object* v_fvar_491_, lean_object* v_a_492_){
_start:
{
lean_object* v___x_494_; lean_object* v_acNfCache_495_; lean_object* v___x_496_; lean_object* v___x_497_; uint8_t v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_494_ = lean_st_ref_get(v_a_492_);
v_acNfCache_495_ = lean_ctor_get(v___x_494_, 1);
lean_inc_ref(v_acNfCache_495_);
lean_dec(v___x_494_);
v___x_496_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__0));
v___x_497_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__1));
v___x_498_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_496_, v___x_497_, v_acNfCache_495_, v_fvar_491_);
lean_dec_ref(v_acNfCache_495_);
v___x_499_ = lean_box(v___x_498_);
v___x_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkAcNf___redArg___boxed(lean_object* v_fvar_501_, lean_object* v_a_502_, lean_object* v_a_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkAcNf___redArg(v_fvar_501_, v_a_502_);
lean_dec(v_a_502_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkAcNf(lean_object* v_fvar_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_){
_start:
{
lean_object* v___x_515_; lean_object* v_acNfCache_516_; lean_object* v___x_517_; lean_object* v___x_518_; uint8_t v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_515_ = lean_st_ref_get(v_a_507_);
v_acNfCache_516_ = lean_ctor_get(v___x_515_, 1);
lean_inc_ref(v_acNfCache_516_);
lean_dec(v___x_515_);
v___x_517_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__0));
v___x_518_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__1));
v___x_519_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_517_, v___x_518_, v_acNfCache_516_, v_fvar_505_);
lean_dec_ref(v_acNfCache_516_);
v___x_520_ = lean_box(v___x_519_);
v___x_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_521_, 0, v___x_520_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkAcNf___boxed(lean_object* v_fvar_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkAcNf(v_fvar_522_, v_a_523_, v_a_524_, v_a_525_, v_a_526_, v_a_527_, v_a_528_, v_a_529_, v_a_530_);
lean_dec(v_a_530_);
lean_dec_ref(v_a_529_);
lean_dec(v_a_528_);
lean_dec_ref(v_a_527_);
lean_dec(v_a_526_);
lean_dec_ref(v_a_525_);
lean_dec(v_a_524_);
lean_dec_ref(v_a_523_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_rewriteFinished___redArg(lean_object* v_fvar_533_, lean_object* v_a_534_){
_start:
{
lean_object* v___x_536_; lean_object* v_rewriteCache_537_; lean_object* v_acNfCache_538_; lean_object* v_typeAnalysis_539_; lean_object* v_goal_540_; lean_object* v_hypotheses_541_; uint8_t v_didChange_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_555_; 
v___x_536_ = lean_st_ref_take(v_a_534_);
v_rewriteCache_537_ = lean_ctor_get(v___x_536_, 0);
v_acNfCache_538_ = lean_ctor_get(v___x_536_, 1);
v_typeAnalysis_539_ = lean_ctor_get(v___x_536_, 2);
v_goal_540_ = lean_ctor_get(v___x_536_, 3);
v_hypotheses_541_ = lean_ctor_get(v___x_536_, 4);
v_didChange_542_ = lean_ctor_get_uint8(v___x_536_, sizeof(void*)*5);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_536_);
if (v_isSharedCheck_555_ == 0)
{
v___x_544_ = v___x_536_;
v_isShared_545_ = v_isSharedCheck_555_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_hypotheses_541_);
lean_inc(v_goal_540_);
lean_inc(v_typeAnalysis_539_);
lean_inc(v_acNfCache_538_);
lean_inc(v_rewriteCache_537_);
lean_dec(v___x_536_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_555_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_551_; 
v___x_546_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__0));
v___x_547_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__1));
v___x_548_ = lean_box(0);
v___x_549_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_546_, v___x_547_, v_rewriteCache_537_, v_fvar_533_, v___x_548_);
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 0, v___x_549_);
v___x_551_ = v___x_544_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_549_);
lean_ctor_set(v_reuseFailAlloc_554_, 1, v_acNfCache_538_);
lean_ctor_set(v_reuseFailAlloc_554_, 2, v_typeAnalysis_539_);
lean_ctor_set(v_reuseFailAlloc_554_, 3, v_goal_540_);
lean_ctor_set(v_reuseFailAlloc_554_, 4, v_hypotheses_541_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, sizeof(void*)*5, v_didChange_542_);
v___x_551_ = v_reuseFailAlloc_554_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = lean_st_ref_set(v_a_534_, v___x_551_);
v___x_553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_553_, 0, v___x_548_);
return v___x_553_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_rewriteFinished___redArg___boxed(lean_object* v_fvar_556_, lean_object* v_a_557_, lean_object* v_a_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_rewriteFinished___redArg(v_fvar_556_, v_a_557_);
lean_dec(v_a_557_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_rewriteFinished(lean_object* v_fvar_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_){
_start:
{
lean_object* v___x_570_; lean_object* v_rewriteCache_571_; lean_object* v_acNfCache_572_; lean_object* v_typeAnalysis_573_; lean_object* v_goal_574_; lean_object* v_hypotheses_575_; uint8_t v_didChange_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_589_; 
v___x_570_ = lean_st_ref_take(v_a_562_);
v_rewriteCache_571_ = lean_ctor_get(v___x_570_, 0);
v_acNfCache_572_ = lean_ctor_get(v___x_570_, 1);
v_typeAnalysis_573_ = lean_ctor_get(v___x_570_, 2);
v_goal_574_ = lean_ctor_get(v___x_570_, 3);
v_hypotheses_575_ = lean_ctor_get(v___x_570_, 4);
v_didChange_576_ = lean_ctor_get_uint8(v___x_570_, sizeof(void*)*5);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_589_ == 0)
{
v___x_578_ = v___x_570_;
v_isShared_579_ = v_isSharedCheck_589_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_hypotheses_575_);
lean_inc(v_goal_574_);
lean_inc(v_typeAnalysis_573_);
lean_inc(v_acNfCache_572_);
lean_inc(v_rewriteCache_571_);
lean_dec(v___x_570_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_589_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_585_; 
v___x_580_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__0));
v___x_581_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__1));
v___x_582_ = lean_box(0);
v___x_583_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_580_, v___x_581_, v_rewriteCache_571_, v_fvar_560_, v___x_582_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 0, v___x_583_);
v___x_585_ = v___x_578_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_583_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v_acNfCache_572_);
lean_ctor_set(v_reuseFailAlloc_588_, 2, v_typeAnalysis_573_);
lean_ctor_set(v_reuseFailAlloc_588_, 3, v_goal_574_);
lean_ctor_set(v_reuseFailAlloc_588_, 4, v_hypotheses_575_);
lean_ctor_set_uint8(v_reuseFailAlloc_588_, sizeof(void*)*5, v_didChange_576_);
v___x_585_ = v_reuseFailAlloc_588_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_586_ = lean_st_ref_set(v_a_562_, v___x_585_);
v___x_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_587_, 0, v___x_582_);
return v___x_587_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_rewriteFinished___boxed(lean_object* v_fvar_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_rewriteFinished(v_fvar_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_, v_a_597_, v_a_598_);
lean_dec(v_a_598_);
lean_dec_ref(v_a_597_);
lean_dec(v_a_596_);
lean_dec_ref(v_a_595_);
lean_dec(v_a_594_);
lean_dec_ref(v_a_593_);
lean_dec(v_a_592_);
lean_dec_ref(v_a_591_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_acNfFinished___redArg(lean_object* v_fvar_601_, lean_object* v_a_602_){
_start:
{
lean_object* v___x_604_; lean_object* v_rewriteCache_605_; lean_object* v_acNfCache_606_; lean_object* v_typeAnalysis_607_; lean_object* v_goal_608_; lean_object* v_hypotheses_609_; uint8_t v_didChange_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_623_; 
v___x_604_ = lean_st_ref_take(v_a_602_);
v_rewriteCache_605_ = lean_ctor_get(v___x_604_, 0);
v_acNfCache_606_ = lean_ctor_get(v___x_604_, 1);
v_typeAnalysis_607_ = lean_ctor_get(v___x_604_, 2);
v_goal_608_ = lean_ctor_get(v___x_604_, 3);
v_hypotheses_609_ = lean_ctor_get(v___x_604_, 4);
v_didChange_610_ = lean_ctor_get_uint8(v___x_604_, sizeof(void*)*5);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_604_);
if (v_isSharedCheck_623_ == 0)
{
v___x_612_ = v___x_604_;
v_isShared_613_ = v_isSharedCheck_623_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_hypotheses_609_);
lean_inc(v_goal_608_);
lean_inc(v_typeAnalysis_607_);
lean_inc(v_acNfCache_606_);
lean_inc(v_rewriteCache_605_);
lean_dec(v___x_604_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_623_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_619_; 
v___x_614_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__0));
v___x_615_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__1));
v___x_616_ = lean_box(0);
v___x_617_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_614_, v___x_615_, v_acNfCache_606_, v_fvar_601_, v___x_616_);
if (v_isShared_613_ == 0)
{
lean_ctor_set(v___x_612_, 1, v___x_617_);
v___x_619_ = v___x_612_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_rewriteCache_605_);
lean_ctor_set(v_reuseFailAlloc_622_, 1, v___x_617_);
lean_ctor_set(v_reuseFailAlloc_622_, 2, v_typeAnalysis_607_);
lean_ctor_set(v_reuseFailAlloc_622_, 3, v_goal_608_);
lean_ctor_set(v_reuseFailAlloc_622_, 4, v_hypotheses_609_);
lean_ctor_set_uint8(v_reuseFailAlloc_622_, sizeof(void*)*5, v_didChange_610_);
v___x_619_ = v_reuseFailAlloc_622_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_620_ = lean_st_ref_set(v_a_602_, v___x_619_);
v___x_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_621_, 0, v___x_616_);
return v___x_621_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_acNfFinished___redArg___boxed(lean_object* v_fvar_624_, lean_object* v_a_625_, lean_object* v_a_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_acNfFinished___redArg(v_fvar_624_, v_a_625_);
lean_dec(v_a_625_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_acNfFinished(lean_object* v_fvar_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_){
_start:
{
lean_object* v___x_638_; lean_object* v_rewriteCache_639_; lean_object* v_acNfCache_640_; lean_object* v_typeAnalysis_641_; lean_object* v_goal_642_; lean_object* v_hypotheses_643_; uint8_t v_didChange_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_657_; 
v___x_638_ = lean_st_ref_take(v_a_630_);
v_rewriteCache_639_ = lean_ctor_get(v___x_638_, 0);
v_acNfCache_640_ = lean_ctor_get(v___x_638_, 1);
v_typeAnalysis_641_ = lean_ctor_get(v___x_638_, 2);
v_goal_642_ = lean_ctor_get(v___x_638_, 3);
v_hypotheses_643_ = lean_ctor_get(v___x_638_, 4);
v_didChange_644_ = lean_ctor_get_uint8(v___x_638_, sizeof(void*)*5);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_657_ == 0)
{
v___x_646_ = v___x_638_;
v_isShared_647_ = v_isSharedCheck_657_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_hypotheses_643_);
lean_inc(v_goal_642_);
lean_inc(v_typeAnalysis_641_);
lean_inc(v_acNfCache_640_);
lean_inc(v_rewriteCache_639_);
lean_dec(v___x_638_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_657_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_653_; 
v___x_648_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__0));
v___x_649_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_checkRewritten___redArg___closed__1));
v___x_650_ = lean_box(0);
v___x_651_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_648_, v___x_649_, v_acNfCache_640_, v_fvar_628_, v___x_650_);
if (v_isShared_647_ == 0)
{
lean_ctor_set(v___x_646_, 1, v___x_651_);
v___x_653_ = v___x_646_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_rewriteCache_639_);
lean_ctor_set(v_reuseFailAlloc_656_, 1, v___x_651_);
lean_ctor_set(v_reuseFailAlloc_656_, 2, v_typeAnalysis_641_);
lean_ctor_set(v_reuseFailAlloc_656_, 3, v_goal_642_);
lean_ctor_set(v_reuseFailAlloc_656_, 4, v_hypotheses_643_);
lean_ctor_set_uint8(v_reuseFailAlloc_656_, sizeof(void*)*5, v_didChange_644_);
v___x_653_ = v_reuseFailAlloc_656_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_654_ = lean_st_ref_set(v_a_630_, v___x_653_);
v___x_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_655_, 0, v___x_650_);
return v___x_655_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_acNfFinished___boxed(lean_object* v_fvar_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_acNfFinished(v_fvar_658_, v_a_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_, v_a_665_, v_a_666_);
lean_dec(v_a_666_);
lean_dec_ref(v_a_665_);
lean_dec(v_a_664_);
lean_dec_ref(v_a_663_);
lean_dec(v_a_662_);
lean_dec_ref(v_a_661_);
lean_dec(v_a_660_);
lean_dec_ref(v_a_659_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg(lean_object* v_a_669_){
_start:
{
lean_object* v___x_671_; lean_object* v_typeAnalysis_672_; lean_object* v___x_673_; 
v___x_671_ = lean_st_ref_get(v_a_669_);
v_typeAnalysis_672_ = lean_ctor_get(v___x_671_, 2);
lean_inc_ref(v_typeAnalysis_672_);
lean_dec(v___x_671_);
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v_typeAnalysis_672_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg___boxed(lean_object* v_a_674_, lean_object* v_a_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg(v_a_674_);
lean_dec(v_a_674_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis(lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_){
_start:
{
lean_object* v___x_686_; lean_object* v_typeAnalysis_687_; lean_object* v___x_688_; 
v___x_686_ = lean_st_ref_get(v_a_678_);
v_typeAnalysis_687_ = lean_ctor_get(v___x_686_, 2);
lean_inc_ref(v_typeAnalysis_687_);
lean_dec(v___x_686_);
v___x_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_688_, 0, v_typeAnalysis_687_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___boxed(lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_){
_start:
{
lean_object* v_res_698_; 
v_res_698_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis(v_a_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_, v_a_696_);
lean_dec(v_a_696_);
lean_dec_ref(v_a_695_);
lean_dec(v_a_694_);
lean_dec_ref(v_a_693_);
lean_dec(v_a_692_);
lean_dec_ref(v_a_691_);
lean_dec(v_a_690_);
lean_dec_ref(v_a_689_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg(lean_object* v_n_704_, lean_object* v_a_705_){
_start:
{
lean_object* v___x_707_; lean_object* v_typeAnalysis_708_; lean_object* v_interestingStructures_709_; lean_object* v_uninteresting_710_; lean_object* v___x_711_; lean_object* v___x_712_; uint8_t v___x_713_; 
v___x_707_ = lean_st_ref_get(v_a_705_);
v_typeAnalysis_708_ = lean_ctor_get(v___x_707_, 2);
lean_inc_ref(v_typeAnalysis_708_);
lean_dec(v___x_707_);
v_interestingStructures_709_ = lean_ctor_get(v_typeAnalysis_708_, 0);
lean_inc_ref(v_interestingStructures_709_);
v_uninteresting_710_ = lean_ctor_get(v_typeAnalysis_708_, 3);
lean_inc_ref(v_uninteresting_710_);
lean_dec_ref(v_typeAnalysis_708_);
v___x_711_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_712_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
lean_inc(v_n_704_);
v___x_713_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_711_, v___x_712_, v_uninteresting_710_, v_n_704_);
lean_dec_ref(v_uninteresting_710_);
if (v___x_713_ == 0)
{
uint8_t v___x_714_; 
v___x_714_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_711_, v___x_712_, v_interestingStructures_709_, v_n_704_);
lean_dec_ref(v_interestingStructures_709_);
if (v___x_714_ == 0)
{
lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_715_ = lean_box(0);
v___x_716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_716_, 0, v___x_715_);
return v___x_716_;
}
else
{
lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_717_ = lean_box(v___x_714_);
v___x_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_718_, 0, v___x_717_);
v___x_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_719_, 0, v___x_718_);
return v___x_719_;
}
}
else
{
lean_object* v___x_720_; lean_object* v___x_721_; 
lean_dec_ref(v_interestingStructures_709_);
lean_dec(v_n_704_);
v___x_720_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2));
v___x_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_721_, 0, v___x_720_);
return v___x_721_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___boxed(lean_object* v_n_722_, lean_object* v_a_723_, lean_object* v_a_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg(v_n_722_, v_a_723_);
lean_dec(v_a_723_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure(lean_object* v_n_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_){
_start:
{
lean_object* v___x_736_; lean_object* v_typeAnalysis_737_; lean_object* v_interestingStructures_738_; lean_object* v_uninteresting_739_; lean_object* v___x_740_; lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_736_ = lean_st_ref_get(v_a_728_);
v_typeAnalysis_737_ = lean_ctor_get(v___x_736_, 2);
lean_inc_ref(v_typeAnalysis_737_);
lean_dec(v___x_736_);
v_interestingStructures_738_ = lean_ctor_get(v_typeAnalysis_737_, 0);
lean_inc_ref(v_interestingStructures_738_);
v_uninteresting_739_ = lean_ctor_get(v_typeAnalysis_737_, 3);
lean_inc_ref(v_uninteresting_739_);
lean_dec_ref(v_typeAnalysis_737_);
v___x_740_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_741_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
lean_inc(v_n_726_);
v___x_742_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_740_, v___x_741_, v_uninteresting_739_, v_n_726_);
lean_dec_ref(v_uninteresting_739_);
if (v___x_742_ == 0)
{
uint8_t v___x_743_; 
v___x_743_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_740_, v___x_741_, v_interestingStructures_738_, v_n_726_);
lean_dec_ref(v_interestingStructures_738_);
if (v___x_743_ == 0)
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = lean_box(0);
v___x_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_745_, 0, v___x_744_);
return v___x_745_;
}
else
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_746_ = lean_box(v___x_743_);
v___x_747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
v___x_748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_748_, 0, v___x_747_);
return v___x_748_;
}
}
else
{
lean_object* v___x_749_; lean_object* v___x_750_; 
lean_dec_ref(v_interestingStructures_738_);
lean_dec(v_n_726_);
v___x_749_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2));
v___x_750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
return v___x_750_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___boxed(lean_object* v_n_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure(v_n_751_, v_a_752_, v_a_753_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_);
lean_dec(v_a_759_);
lean_dec_ref(v_a_758_);
lean_dec(v_a_757_);
lean_dec_ref(v_a_756_);
lean_dec(v_a_755_);
lean_dec_ref(v_a_754_);
lean_dec(v_a_753_);
lean_dec_ref(v_a_752_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg(lean_object* v_f_762_, lean_object* v_a_763_){
_start:
{
lean_object* v___x_765_; lean_object* v_rewriteCache_766_; lean_object* v_acNfCache_767_; lean_object* v_typeAnalysis_768_; lean_object* v_goal_769_; lean_object* v_hypotheses_770_; uint8_t v_didChange_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_782_; 
v___x_765_ = lean_st_ref_take(v_a_763_);
v_rewriteCache_766_ = lean_ctor_get(v___x_765_, 0);
v_acNfCache_767_ = lean_ctor_get(v___x_765_, 1);
v_typeAnalysis_768_ = lean_ctor_get(v___x_765_, 2);
v_goal_769_ = lean_ctor_get(v___x_765_, 3);
v_hypotheses_770_ = lean_ctor_get(v___x_765_, 4);
v_didChange_771_ = lean_ctor_get_uint8(v___x_765_, sizeof(void*)*5);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_782_ == 0)
{
v___x_773_ = v___x_765_;
v_isShared_774_ = v_isSharedCheck_782_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_hypotheses_770_);
lean_inc(v_goal_769_);
lean_inc(v_typeAnalysis_768_);
lean_inc(v_acNfCache_767_);
lean_inc(v_rewriteCache_766_);
lean_dec(v___x_765_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_782_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_775_; lean_object* v___x_777_; 
v___x_775_ = lean_apply_1(v_f_762_, v_typeAnalysis_768_);
if (v_isShared_774_ == 0)
{
lean_ctor_set(v___x_773_, 2, v___x_775_);
v___x_777_ = v___x_773_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_rewriteCache_766_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v_acNfCache_767_);
lean_ctor_set(v_reuseFailAlloc_781_, 2, v___x_775_);
lean_ctor_set(v_reuseFailAlloc_781_, 3, v_goal_769_);
lean_ctor_set(v_reuseFailAlloc_781_, 4, v_hypotheses_770_);
lean_ctor_set_uint8(v_reuseFailAlloc_781_, sizeof(void*)*5, v_didChange_771_);
v___x_777_ = v_reuseFailAlloc_781_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_778_ = lean_st_ref_set(v_a_763_, v___x_777_);
v___x_779_ = lean_box(0);
v___x_780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_780_, 0, v___x_779_);
return v___x_780_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg___boxed(lean_object* v_f_783_, lean_object* v_a_784_, lean_object* v_a_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg(v_f_783_, v_a_784_);
lean_dec(v_a_784_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis(lean_object* v_f_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_){
_start:
{
lean_object* v___x_797_; lean_object* v_rewriteCache_798_; lean_object* v_acNfCache_799_; lean_object* v_typeAnalysis_800_; lean_object* v_goal_801_; lean_object* v_hypotheses_802_; uint8_t v_didChange_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_814_; 
v___x_797_ = lean_st_ref_take(v_a_789_);
v_rewriteCache_798_ = lean_ctor_get(v___x_797_, 0);
v_acNfCache_799_ = lean_ctor_get(v___x_797_, 1);
v_typeAnalysis_800_ = lean_ctor_get(v___x_797_, 2);
v_goal_801_ = lean_ctor_get(v___x_797_, 3);
v_hypotheses_802_ = lean_ctor_get(v___x_797_, 4);
v_didChange_803_ = lean_ctor_get_uint8(v___x_797_, sizeof(void*)*5);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_814_ == 0)
{
v___x_805_ = v___x_797_;
v_isShared_806_ = v_isSharedCheck_814_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_hypotheses_802_);
lean_inc(v_goal_801_);
lean_inc(v_typeAnalysis_800_);
lean_inc(v_acNfCache_799_);
lean_inc(v_rewriteCache_798_);
lean_dec(v___x_797_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_814_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_807_; lean_object* v___x_809_; 
v___x_807_ = lean_apply_1(v_f_787_, v_typeAnalysis_800_);
if (v_isShared_806_ == 0)
{
lean_ctor_set(v___x_805_, 2, v___x_807_);
v___x_809_ = v___x_805_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_rewriteCache_798_);
lean_ctor_set(v_reuseFailAlloc_813_, 1, v_acNfCache_799_);
lean_ctor_set(v_reuseFailAlloc_813_, 2, v___x_807_);
lean_ctor_set(v_reuseFailAlloc_813_, 3, v_goal_801_);
lean_ctor_set(v_reuseFailAlloc_813_, 4, v_hypotheses_802_);
lean_ctor_set_uint8(v_reuseFailAlloc_813_, sizeof(void*)*5, v_didChange_803_);
v___x_809_ = v_reuseFailAlloc_813_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_810_ = lean_st_ref_set(v_a_789_, v___x_809_);
v___x_811_ = lean_box(0);
v___x_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_812_, 0, v___x_811_);
return v___x_812_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___boxed(lean_object* v_f_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis(v_f_815_, v_a_816_, v_a_817_, v_a_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_);
lean_dec(v_a_823_);
lean_dec_ref(v_a_822_);
lean_dec(v_a_821_);
lean_dec_ref(v_a_820_);
lean_dec(v_a_819_);
lean_dec_ref(v_a_818_);
lean_dec(v_a_817_);
lean_dec_ref(v_a_816_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg(lean_object* v_n_826_, lean_object* v_a_827_){
_start:
{
lean_object* v___x_829_; lean_object* v_typeAnalysis_830_; lean_object* v_rewriteCache_831_; lean_object* v_acNfCache_832_; lean_object* v_goal_833_; lean_object* v_hypotheses_834_; uint8_t v_didChange_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_859_; 
v___x_829_ = lean_st_ref_take(v_a_827_);
v_typeAnalysis_830_ = lean_ctor_get(v___x_829_, 2);
v_rewriteCache_831_ = lean_ctor_get(v___x_829_, 0);
v_acNfCache_832_ = lean_ctor_get(v___x_829_, 1);
v_goal_833_ = lean_ctor_get(v___x_829_, 3);
v_hypotheses_834_ = lean_ctor_get(v___x_829_, 4);
v_didChange_835_ = lean_ctor_get_uint8(v___x_829_, sizeof(void*)*5);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_829_);
if (v_isSharedCheck_859_ == 0)
{
v___x_837_ = v___x_829_;
v_isShared_838_ = v_isSharedCheck_859_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_hypotheses_834_);
lean_inc(v_goal_833_);
lean_inc(v_typeAnalysis_830_);
lean_inc(v_acNfCache_832_);
lean_inc(v_rewriteCache_831_);
lean_dec(v___x_829_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_859_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v_interestingStructures_839_; lean_object* v_interestingEnums_840_; lean_object* v_interestingMatchers_841_; lean_object* v_uninteresting_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_858_; 
v_interestingStructures_839_ = lean_ctor_get(v_typeAnalysis_830_, 0);
v_interestingEnums_840_ = lean_ctor_get(v_typeAnalysis_830_, 1);
v_interestingMatchers_841_ = lean_ctor_get(v_typeAnalysis_830_, 2);
v_uninteresting_842_ = lean_ctor_get(v_typeAnalysis_830_, 3);
v_isSharedCheck_858_ = !lean_is_exclusive(v_typeAnalysis_830_);
if (v_isSharedCheck_858_ == 0)
{
v___x_844_ = v_typeAnalysis_830_;
v_isShared_845_ = v_isSharedCheck_858_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_uninteresting_842_);
lean_inc(v_interestingMatchers_841_);
lean_inc(v_interestingEnums_840_);
lean_inc(v_interestingStructures_839_);
lean_dec(v_typeAnalysis_830_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_858_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_851_; 
v___x_846_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_847_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_848_ = lean_box(0);
v___x_849_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_846_, v___x_847_, v_interestingStructures_839_, v_n_826_, v___x_848_);
if (v_isShared_845_ == 0)
{
lean_ctor_set(v___x_844_, 0, v___x_849_);
v___x_851_ = v___x_844_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v___x_849_);
lean_ctor_set(v_reuseFailAlloc_857_, 1, v_interestingEnums_840_);
lean_ctor_set(v_reuseFailAlloc_857_, 2, v_interestingMatchers_841_);
lean_ctor_set(v_reuseFailAlloc_857_, 3, v_uninteresting_842_);
v___x_851_ = v_reuseFailAlloc_857_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
lean_object* v___x_853_; 
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 2, v___x_851_);
v___x_853_ = v___x_837_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_rewriteCache_831_);
lean_ctor_set(v_reuseFailAlloc_856_, 1, v_acNfCache_832_);
lean_ctor_set(v_reuseFailAlloc_856_, 2, v___x_851_);
lean_ctor_set(v_reuseFailAlloc_856_, 3, v_goal_833_);
lean_ctor_set(v_reuseFailAlloc_856_, 4, v_hypotheses_834_);
lean_ctor_set_uint8(v_reuseFailAlloc_856_, sizeof(void*)*5, v_didChange_835_);
v___x_853_ = v_reuseFailAlloc_856_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = lean_st_ref_set(v_a_827_, v___x_853_);
v___x_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_855_, 0, v___x_848_);
return v___x_855_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg___boxed(lean_object* v_n_860_, lean_object* v_a_861_, lean_object* v_a_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg(v_n_860_, v_a_861_);
lean_dec(v_a_861_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure(lean_object* v_n_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_){
_start:
{
lean_object* v___x_874_; lean_object* v_typeAnalysis_875_; lean_object* v_rewriteCache_876_; lean_object* v_acNfCache_877_; lean_object* v_goal_878_; lean_object* v_hypotheses_879_; uint8_t v_didChange_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_904_; 
v___x_874_ = lean_st_ref_take(v_a_866_);
v_typeAnalysis_875_ = lean_ctor_get(v___x_874_, 2);
v_rewriteCache_876_ = lean_ctor_get(v___x_874_, 0);
v_acNfCache_877_ = lean_ctor_get(v___x_874_, 1);
v_goal_878_ = lean_ctor_get(v___x_874_, 3);
v_hypotheses_879_ = lean_ctor_get(v___x_874_, 4);
v_didChange_880_ = lean_ctor_get_uint8(v___x_874_, sizeof(void*)*5);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_904_ == 0)
{
v___x_882_ = v___x_874_;
v_isShared_883_ = v_isSharedCheck_904_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_hypotheses_879_);
lean_inc(v_goal_878_);
lean_inc(v_typeAnalysis_875_);
lean_inc(v_acNfCache_877_);
lean_inc(v_rewriteCache_876_);
lean_dec(v___x_874_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_904_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v_interestingStructures_884_; lean_object* v_interestingEnums_885_; lean_object* v_interestingMatchers_886_; lean_object* v_uninteresting_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_903_; 
v_interestingStructures_884_ = lean_ctor_get(v_typeAnalysis_875_, 0);
v_interestingEnums_885_ = lean_ctor_get(v_typeAnalysis_875_, 1);
v_interestingMatchers_886_ = lean_ctor_get(v_typeAnalysis_875_, 2);
v_uninteresting_887_ = lean_ctor_get(v_typeAnalysis_875_, 3);
v_isSharedCheck_903_ = !lean_is_exclusive(v_typeAnalysis_875_);
if (v_isSharedCheck_903_ == 0)
{
v___x_889_ = v_typeAnalysis_875_;
v_isShared_890_ = v_isSharedCheck_903_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_uninteresting_887_);
lean_inc(v_interestingMatchers_886_);
lean_inc(v_interestingEnums_885_);
lean_inc(v_interestingStructures_884_);
lean_dec(v_typeAnalysis_875_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_903_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_896_; 
v___x_891_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_892_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_893_ = lean_box(0);
v___x_894_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_891_, v___x_892_, v_interestingStructures_884_, v_n_864_, v___x_893_);
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 0, v___x_894_);
v___x_896_ = v___x_889_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v___x_894_);
lean_ctor_set(v_reuseFailAlloc_902_, 1, v_interestingEnums_885_);
lean_ctor_set(v_reuseFailAlloc_902_, 2, v_interestingMatchers_886_);
lean_ctor_set(v_reuseFailAlloc_902_, 3, v_uninteresting_887_);
v___x_896_ = v_reuseFailAlloc_902_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
lean_object* v___x_898_; 
if (v_isShared_883_ == 0)
{
lean_ctor_set(v___x_882_, 2, v___x_896_);
v___x_898_ = v___x_882_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_rewriteCache_876_);
lean_ctor_set(v_reuseFailAlloc_901_, 1, v_acNfCache_877_);
lean_ctor_set(v_reuseFailAlloc_901_, 2, v___x_896_);
lean_ctor_set(v_reuseFailAlloc_901_, 3, v_goal_878_);
lean_ctor_set(v_reuseFailAlloc_901_, 4, v_hypotheses_879_);
lean_ctor_set_uint8(v_reuseFailAlloc_901_, sizeof(void*)*5, v_didChange_880_);
v___x_898_ = v_reuseFailAlloc_901_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_899_ = lean_st_ref_set(v_a_866_, v___x_898_);
v___x_900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_900_, 0, v___x_893_);
return v___x_900_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___boxed(lean_object* v_n_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure(v_n_905_, v_a_906_, v_a_907_, v_a_908_, v_a_909_, v_a_910_, v_a_911_, v_a_912_, v_a_913_);
lean_dec(v_a_913_);
lean_dec_ref(v_a_912_);
lean_dec(v_a_911_);
lean_dec_ref(v_a_910_);
lean_dec(v_a_909_);
lean_dec_ref(v_a_908_);
lean_dec(v_a_907_);
lean_dec_ref(v_a_906_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg(lean_object* v_n_916_, lean_object* v_a_917_){
_start:
{
lean_object* v___x_919_; lean_object* v_typeAnalysis_920_; lean_object* v_rewriteCache_921_; lean_object* v_acNfCache_922_; lean_object* v_goal_923_; lean_object* v_hypotheses_924_; uint8_t v_didChange_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_949_; 
v___x_919_ = lean_st_ref_take(v_a_917_);
v_typeAnalysis_920_ = lean_ctor_get(v___x_919_, 2);
v_rewriteCache_921_ = lean_ctor_get(v___x_919_, 0);
v_acNfCache_922_ = lean_ctor_get(v___x_919_, 1);
v_goal_923_ = lean_ctor_get(v___x_919_, 3);
v_hypotheses_924_ = lean_ctor_get(v___x_919_, 4);
v_didChange_925_ = lean_ctor_get_uint8(v___x_919_, sizeof(void*)*5);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_919_);
if (v_isSharedCheck_949_ == 0)
{
v___x_927_ = v___x_919_;
v_isShared_928_ = v_isSharedCheck_949_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_hypotheses_924_);
lean_inc(v_goal_923_);
lean_inc(v_typeAnalysis_920_);
lean_inc(v_acNfCache_922_);
lean_inc(v_rewriteCache_921_);
lean_dec(v___x_919_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_949_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v_interestingStructures_929_; lean_object* v_interestingEnums_930_; lean_object* v_interestingMatchers_931_; lean_object* v_uninteresting_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_948_; 
v_interestingStructures_929_ = lean_ctor_get(v_typeAnalysis_920_, 0);
v_interestingEnums_930_ = lean_ctor_get(v_typeAnalysis_920_, 1);
v_interestingMatchers_931_ = lean_ctor_get(v_typeAnalysis_920_, 2);
v_uninteresting_932_ = lean_ctor_get(v_typeAnalysis_920_, 3);
v_isSharedCheck_948_ = !lean_is_exclusive(v_typeAnalysis_920_);
if (v_isSharedCheck_948_ == 0)
{
v___x_934_ = v_typeAnalysis_920_;
v_isShared_935_ = v_isSharedCheck_948_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_uninteresting_932_);
lean_inc(v_interestingMatchers_931_);
lean_inc(v_interestingEnums_930_);
lean_inc(v_interestingStructures_929_);
lean_dec(v_typeAnalysis_920_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_948_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_941_; 
v___x_936_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_937_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_938_ = lean_box(0);
v___x_939_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_936_, v___x_937_, v_interestingEnums_930_, v_n_916_, v___x_938_);
if (v_isShared_935_ == 0)
{
lean_ctor_set(v___x_934_, 1, v___x_939_);
v___x_941_ = v___x_934_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_interestingStructures_929_);
lean_ctor_set(v_reuseFailAlloc_947_, 1, v___x_939_);
lean_ctor_set(v_reuseFailAlloc_947_, 2, v_interestingMatchers_931_);
lean_ctor_set(v_reuseFailAlloc_947_, 3, v_uninteresting_932_);
v___x_941_ = v_reuseFailAlloc_947_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
lean_object* v___x_943_; 
if (v_isShared_928_ == 0)
{
lean_ctor_set(v___x_927_, 2, v___x_941_);
v___x_943_ = v___x_927_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_rewriteCache_921_);
lean_ctor_set(v_reuseFailAlloc_946_, 1, v_acNfCache_922_);
lean_ctor_set(v_reuseFailAlloc_946_, 2, v___x_941_);
lean_ctor_set(v_reuseFailAlloc_946_, 3, v_goal_923_);
lean_ctor_set(v_reuseFailAlloc_946_, 4, v_hypotheses_924_);
lean_ctor_set_uint8(v_reuseFailAlloc_946_, sizeof(void*)*5, v_didChange_925_);
v___x_943_ = v_reuseFailAlloc_946_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_944_ = lean_st_ref_set(v_a_917_, v___x_943_);
v___x_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_945_, 0, v___x_938_);
return v___x_945_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg___boxed(lean_object* v_n_950_, lean_object* v_a_951_, lean_object* v_a_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg(v_n_950_, v_a_951_);
lean_dec(v_a_951_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum(lean_object* v_n_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_){
_start:
{
lean_object* v___x_964_; lean_object* v_typeAnalysis_965_; lean_object* v_rewriteCache_966_; lean_object* v_acNfCache_967_; lean_object* v_goal_968_; lean_object* v_hypotheses_969_; uint8_t v_didChange_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_994_; 
v___x_964_ = lean_st_ref_take(v_a_956_);
v_typeAnalysis_965_ = lean_ctor_get(v___x_964_, 2);
v_rewriteCache_966_ = lean_ctor_get(v___x_964_, 0);
v_acNfCache_967_ = lean_ctor_get(v___x_964_, 1);
v_goal_968_ = lean_ctor_get(v___x_964_, 3);
v_hypotheses_969_ = lean_ctor_get(v___x_964_, 4);
v_didChange_970_ = lean_ctor_get_uint8(v___x_964_, sizeof(void*)*5);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_994_ == 0)
{
v___x_972_ = v___x_964_;
v_isShared_973_ = v_isSharedCheck_994_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_hypotheses_969_);
lean_inc(v_goal_968_);
lean_inc(v_typeAnalysis_965_);
lean_inc(v_acNfCache_967_);
lean_inc(v_rewriteCache_966_);
lean_dec(v___x_964_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_994_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v_interestingStructures_974_; lean_object* v_interestingEnums_975_; lean_object* v_interestingMatchers_976_; lean_object* v_uninteresting_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_993_; 
v_interestingStructures_974_ = lean_ctor_get(v_typeAnalysis_965_, 0);
v_interestingEnums_975_ = lean_ctor_get(v_typeAnalysis_965_, 1);
v_interestingMatchers_976_ = lean_ctor_get(v_typeAnalysis_965_, 2);
v_uninteresting_977_ = lean_ctor_get(v_typeAnalysis_965_, 3);
v_isSharedCheck_993_ = !lean_is_exclusive(v_typeAnalysis_965_);
if (v_isSharedCheck_993_ == 0)
{
v___x_979_ = v_typeAnalysis_965_;
v_isShared_980_ = v_isSharedCheck_993_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_uninteresting_977_);
lean_inc(v_interestingMatchers_976_);
lean_inc(v_interestingEnums_975_);
lean_inc(v_interestingStructures_974_);
lean_dec(v_typeAnalysis_965_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_993_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_986_; 
v___x_981_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_982_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_983_ = lean_box(0);
v___x_984_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_981_, v___x_982_, v_interestingEnums_975_, v_n_954_, v___x_983_);
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 1, v___x_984_);
v___x_986_ = v___x_979_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_interestingStructures_974_);
lean_ctor_set(v_reuseFailAlloc_992_, 1, v___x_984_);
lean_ctor_set(v_reuseFailAlloc_992_, 2, v_interestingMatchers_976_);
lean_ctor_set(v_reuseFailAlloc_992_, 3, v_uninteresting_977_);
v___x_986_ = v_reuseFailAlloc_992_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
lean_object* v___x_988_; 
if (v_isShared_973_ == 0)
{
lean_ctor_set(v___x_972_, 2, v___x_986_);
v___x_988_ = v___x_972_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_rewriteCache_966_);
lean_ctor_set(v_reuseFailAlloc_991_, 1, v_acNfCache_967_);
lean_ctor_set(v_reuseFailAlloc_991_, 2, v___x_986_);
lean_ctor_set(v_reuseFailAlloc_991_, 3, v_goal_968_);
lean_ctor_set(v_reuseFailAlloc_991_, 4, v_hypotheses_969_);
lean_ctor_set_uint8(v_reuseFailAlloc_991_, sizeof(void*)*5, v_didChange_970_);
v___x_988_ = v_reuseFailAlloc_991_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_989_ = lean_st_ref_set(v_a_956_, v___x_988_);
v___x_990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_990_, 0, v___x_983_);
return v___x_990_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___boxed(lean_object* v_n_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum(v_n_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_, v_a_1001_, v_a_1002_, v_a_1003_);
lean_dec(v_a_1003_);
lean_dec_ref(v_a_1002_);
lean_dec(v_a_1001_);
lean_dec_ref(v_a_1000_);
lean_dec(v_a_999_);
lean_dec_ref(v_a_998_);
lean_dec(v_a_997_);
lean_dec_ref(v_a_996_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg(lean_object* v_n_1006_, lean_object* v_k_1007_, lean_object* v_a_1008_){
_start:
{
lean_object* v___x_1010_; lean_object* v_typeAnalysis_1011_; lean_object* v_rewriteCache_1012_; lean_object* v_acNfCache_1013_; lean_object* v_goal_1014_; lean_object* v_hypotheses_1015_; uint8_t v_didChange_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1040_; 
v___x_1010_ = lean_st_ref_take(v_a_1008_);
v_typeAnalysis_1011_ = lean_ctor_get(v___x_1010_, 2);
v_rewriteCache_1012_ = lean_ctor_get(v___x_1010_, 0);
v_acNfCache_1013_ = lean_ctor_get(v___x_1010_, 1);
v_goal_1014_ = lean_ctor_get(v___x_1010_, 3);
v_hypotheses_1015_ = lean_ctor_get(v___x_1010_, 4);
v_didChange_1016_ = lean_ctor_get_uint8(v___x_1010_, sizeof(void*)*5);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1018_ = v___x_1010_;
v_isShared_1019_ = v_isSharedCheck_1040_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_hypotheses_1015_);
lean_inc(v_goal_1014_);
lean_inc(v_typeAnalysis_1011_);
lean_inc(v_acNfCache_1013_);
lean_inc(v_rewriteCache_1012_);
lean_dec(v___x_1010_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1040_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v_interestingStructures_1020_; lean_object* v_interestingEnums_1021_; lean_object* v_interestingMatchers_1022_; lean_object* v_uninteresting_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1039_; 
v_interestingStructures_1020_ = lean_ctor_get(v_typeAnalysis_1011_, 0);
v_interestingEnums_1021_ = lean_ctor_get(v_typeAnalysis_1011_, 1);
v_interestingMatchers_1022_ = lean_ctor_get(v_typeAnalysis_1011_, 2);
v_uninteresting_1023_ = lean_ctor_get(v_typeAnalysis_1011_, 3);
v_isSharedCheck_1039_ = !lean_is_exclusive(v_typeAnalysis_1011_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1025_ = v_typeAnalysis_1011_;
v_isShared_1026_ = v_isSharedCheck_1039_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_uninteresting_1023_);
lean_inc(v_interestingMatchers_1022_);
lean_inc(v_interestingEnums_1021_);
lean_inc(v_interestingStructures_1020_);
lean_dec(v_typeAnalysis_1011_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1039_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1031_; 
v___x_1027_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_1028_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_1029_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_1027_, v___x_1028_, v_interestingMatchers_1022_, v_n_1006_, v_k_1007_);
if (v_isShared_1026_ == 0)
{
lean_ctor_set(v___x_1025_, 2, v___x_1029_);
v___x_1031_ = v___x_1025_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_interestingStructures_1020_);
lean_ctor_set(v_reuseFailAlloc_1038_, 1, v_interestingEnums_1021_);
lean_ctor_set(v_reuseFailAlloc_1038_, 2, v___x_1029_);
lean_ctor_set(v_reuseFailAlloc_1038_, 3, v_uninteresting_1023_);
v___x_1031_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
lean_object* v___x_1033_; 
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 2, v___x_1031_);
v___x_1033_ = v___x_1018_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_rewriteCache_1012_);
lean_ctor_set(v_reuseFailAlloc_1037_, 1, v_acNfCache_1013_);
lean_ctor_set(v_reuseFailAlloc_1037_, 2, v___x_1031_);
lean_ctor_set(v_reuseFailAlloc_1037_, 3, v_goal_1014_);
lean_ctor_set(v_reuseFailAlloc_1037_, 4, v_hypotheses_1015_);
lean_ctor_set_uint8(v_reuseFailAlloc_1037_, sizeof(void*)*5, v_didChange_1016_);
v___x_1033_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1034_ = lean_st_ref_set(v_a_1008_, v___x_1033_);
v___x_1035_ = lean_box(0);
v___x_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1035_);
return v___x_1036_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg___boxed(lean_object* v_n_1041_, lean_object* v_k_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg(v_n_1041_, v_k_1042_, v_a_1043_);
lean_dec(v_a_1043_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher(lean_object* v_n_1046_, lean_object* v_k_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_){
_start:
{
lean_object* v___x_1057_; lean_object* v_typeAnalysis_1058_; lean_object* v_rewriteCache_1059_; lean_object* v_acNfCache_1060_; lean_object* v_goal_1061_; lean_object* v_hypotheses_1062_; uint8_t v_didChange_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1087_; 
v___x_1057_ = lean_st_ref_take(v_a_1049_);
v_typeAnalysis_1058_ = lean_ctor_get(v___x_1057_, 2);
v_rewriteCache_1059_ = lean_ctor_get(v___x_1057_, 0);
v_acNfCache_1060_ = lean_ctor_get(v___x_1057_, 1);
v_goal_1061_ = lean_ctor_get(v___x_1057_, 3);
v_hypotheses_1062_ = lean_ctor_get(v___x_1057_, 4);
v_didChange_1063_ = lean_ctor_get_uint8(v___x_1057_, sizeof(void*)*5);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1065_ = v___x_1057_;
v_isShared_1066_ = v_isSharedCheck_1087_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_hypotheses_1062_);
lean_inc(v_goal_1061_);
lean_inc(v_typeAnalysis_1058_);
lean_inc(v_acNfCache_1060_);
lean_inc(v_rewriteCache_1059_);
lean_dec(v___x_1057_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1087_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v_interestingStructures_1067_; lean_object* v_interestingEnums_1068_; lean_object* v_interestingMatchers_1069_; lean_object* v_uninteresting_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1086_; 
v_interestingStructures_1067_ = lean_ctor_get(v_typeAnalysis_1058_, 0);
v_interestingEnums_1068_ = lean_ctor_get(v_typeAnalysis_1058_, 1);
v_interestingMatchers_1069_ = lean_ctor_get(v_typeAnalysis_1058_, 2);
v_uninteresting_1070_ = lean_ctor_get(v_typeAnalysis_1058_, 3);
v_isSharedCheck_1086_ = !lean_is_exclusive(v_typeAnalysis_1058_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1072_ = v_typeAnalysis_1058_;
v_isShared_1073_ = v_isSharedCheck_1086_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_uninteresting_1070_);
lean_inc(v_interestingMatchers_1069_);
lean_inc(v_interestingEnums_1068_);
lean_inc(v_interestingStructures_1067_);
lean_dec(v_typeAnalysis_1058_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1086_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1078_; 
v___x_1074_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_1075_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_1076_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_1074_, v___x_1075_, v_interestingMatchers_1069_, v_n_1046_, v_k_1047_);
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 2, v___x_1076_);
v___x_1078_ = v___x_1072_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_interestingStructures_1067_);
lean_ctor_set(v_reuseFailAlloc_1085_, 1, v_interestingEnums_1068_);
lean_ctor_set(v_reuseFailAlloc_1085_, 2, v___x_1076_);
lean_ctor_set(v_reuseFailAlloc_1085_, 3, v_uninteresting_1070_);
v___x_1078_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
lean_object* v___x_1080_; 
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 2, v___x_1078_);
v___x_1080_ = v___x_1065_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v_rewriteCache_1059_);
lean_ctor_set(v_reuseFailAlloc_1084_, 1, v_acNfCache_1060_);
lean_ctor_set(v_reuseFailAlloc_1084_, 2, v___x_1078_);
lean_ctor_set(v_reuseFailAlloc_1084_, 3, v_goal_1061_);
lean_ctor_set(v_reuseFailAlloc_1084_, 4, v_hypotheses_1062_);
lean_ctor_set_uint8(v_reuseFailAlloc_1084_, sizeof(void*)*5, v_didChange_1063_);
v___x_1080_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1081_ = lean_st_ref_set(v_a_1049_, v___x_1080_);
v___x_1082_ = lean_box(0);
v___x_1083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1082_);
return v___x_1083_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___boxed(lean_object* v_n_1088_, lean_object* v_k_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_){
_start:
{
lean_object* v_res_1099_; 
v_res_1099_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher(v_n_1088_, v_k_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_);
lean_dec(v_a_1097_);
lean_dec_ref(v_a_1096_);
lean_dec(v_a_1095_);
lean_dec_ref(v_a_1094_);
lean_dec(v_a_1093_);
lean_dec_ref(v_a_1092_);
lean_dec(v_a_1091_);
lean_dec_ref(v_a_1090_);
return v_res_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg(lean_object* v_n_1100_, lean_object* v_a_1101_){
_start:
{
lean_object* v___x_1103_; lean_object* v_typeAnalysis_1104_; lean_object* v_rewriteCache_1105_; lean_object* v_acNfCache_1106_; lean_object* v_goal_1107_; lean_object* v_hypotheses_1108_; uint8_t v_didChange_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1133_; 
v___x_1103_ = lean_st_ref_take(v_a_1101_);
v_typeAnalysis_1104_ = lean_ctor_get(v___x_1103_, 2);
v_rewriteCache_1105_ = lean_ctor_get(v___x_1103_, 0);
v_acNfCache_1106_ = lean_ctor_get(v___x_1103_, 1);
v_goal_1107_ = lean_ctor_get(v___x_1103_, 3);
v_hypotheses_1108_ = lean_ctor_get(v___x_1103_, 4);
v_didChange_1109_ = lean_ctor_get_uint8(v___x_1103_, sizeof(void*)*5);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1111_ = v___x_1103_;
v_isShared_1112_ = v_isSharedCheck_1133_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_hypotheses_1108_);
lean_inc(v_goal_1107_);
lean_inc(v_typeAnalysis_1104_);
lean_inc(v_acNfCache_1106_);
lean_inc(v_rewriteCache_1105_);
lean_dec(v___x_1103_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1133_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v_interestingStructures_1113_; lean_object* v_interestingEnums_1114_; lean_object* v_interestingMatchers_1115_; lean_object* v_uninteresting_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1132_; 
v_interestingStructures_1113_ = lean_ctor_get(v_typeAnalysis_1104_, 0);
v_interestingEnums_1114_ = lean_ctor_get(v_typeAnalysis_1104_, 1);
v_interestingMatchers_1115_ = lean_ctor_get(v_typeAnalysis_1104_, 2);
v_uninteresting_1116_ = lean_ctor_get(v_typeAnalysis_1104_, 3);
v_isSharedCheck_1132_ = !lean_is_exclusive(v_typeAnalysis_1104_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1118_ = v_typeAnalysis_1104_;
v_isShared_1119_ = v_isSharedCheck_1132_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_uninteresting_1116_);
lean_inc(v_interestingMatchers_1115_);
lean_inc(v_interestingEnums_1114_);
lean_inc(v_interestingStructures_1113_);
lean_dec(v_typeAnalysis_1104_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1132_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1125_; 
v___x_1120_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_1121_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_1122_ = lean_box(0);
v___x_1123_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_1120_, v___x_1121_, v_uninteresting_1116_, v_n_1100_, v___x_1122_);
if (v_isShared_1119_ == 0)
{
lean_ctor_set(v___x_1118_, 3, v___x_1123_);
v___x_1125_ = v___x_1118_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_interestingStructures_1113_);
lean_ctor_set(v_reuseFailAlloc_1131_, 1, v_interestingEnums_1114_);
lean_ctor_set(v_reuseFailAlloc_1131_, 2, v_interestingMatchers_1115_);
lean_ctor_set(v_reuseFailAlloc_1131_, 3, v___x_1123_);
v___x_1125_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
lean_object* v___x_1127_; 
if (v_isShared_1112_ == 0)
{
lean_ctor_set(v___x_1111_, 2, v___x_1125_);
v___x_1127_ = v___x_1111_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_rewriteCache_1105_);
lean_ctor_set(v_reuseFailAlloc_1130_, 1, v_acNfCache_1106_);
lean_ctor_set(v_reuseFailAlloc_1130_, 2, v___x_1125_);
lean_ctor_set(v_reuseFailAlloc_1130_, 3, v_goal_1107_);
lean_ctor_set(v_reuseFailAlloc_1130_, 4, v_hypotheses_1108_);
lean_ctor_set_uint8(v_reuseFailAlloc_1130_, sizeof(void*)*5, v_didChange_1109_);
v___x_1127_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1128_ = lean_st_ref_set(v_a_1101_, v___x_1127_);
v___x_1129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1122_);
return v___x_1129_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg___boxed(lean_object* v_n_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_){
_start:
{
lean_object* v_res_1137_; 
v_res_1137_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg(v_n_1134_, v_a_1135_);
lean_dec(v_a_1135_);
return v_res_1137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst(lean_object* v_n_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_){
_start:
{
lean_object* v___x_1148_; lean_object* v_typeAnalysis_1149_; lean_object* v_rewriteCache_1150_; lean_object* v_acNfCache_1151_; lean_object* v_goal_1152_; lean_object* v_hypotheses_1153_; uint8_t v_didChange_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1178_; 
v___x_1148_ = lean_st_ref_take(v_a_1140_);
v_typeAnalysis_1149_ = lean_ctor_get(v___x_1148_, 2);
v_rewriteCache_1150_ = lean_ctor_get(v___x_1148_, 0);
v_acNfCache_1151_ = lean_ctor_get(v___x_1148_, 1);
v_goal_1152_ = lean_ctor_get(v___x_1148_, 3);
v_hypotheses_1153_ = lean_ctor_get(v___x_1148_, 4);
v_didChange_1154_ = lean_ctor_get_uint8(v___x_1148_, sizeof(void*)*5);
v_isSharedCheck_1178_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1156_ = v___x_1148_;
v_isShared_1157_ = v_isSharedCheck_1178_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_hypotheses_1153_);
lean_inc(v_goal_1152_);
lean_inc(v_typeAnalysis_1149_);
lean_inc(v_acNfCache_1151_);
lean_inc(v_rewriteCache_1150_);
lean_dec(v___x_1148_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1178_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v_interestingStructures_1158_; lean_object* v_interestingEnums_1159_; lean_object* v_interestingMatchers_1160_; lean_object* v_uninteresting_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1177_; 
v_interestingStructures_1158_ = lean_ctor_get(v_typeAnalysis_1149_, 0);
v_interestingEnums_1159_ = lean_ctor_get(v_typeAnalysis_1149_, 1);
v_interestingMatchers_1160_ = lean_ctor_get(v_typeAnalysis_1149_, 2);
v_uninteresting_1161_ = lean_ctor_get(v_typeAnalysis_1149_, 3);
v_isSharedCheck_1177_ = !lean_is_exclusive(v_typeAnalysis_1149_);
if (v_isSharedCheck_1177_ == 0)
{
v___x_1163_ = v_typeAnalysis_1149_;
v_isShared_1164_ = v_isSharedCheck_1177_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_uninteresting_1161_);
lean_inc(v_interestingMatchers_1160_);
lean_inc(v_interestingEnums_1159_);
lean_inc(v_interestingStructures_1158_);
lean_dec(v_typeAnalysis_1149_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1177_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1170_; 
v___x_1165_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_1166_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_1167_ = lean_box(0);
v___x_1168_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_1165_, v___x_1166_, v_uninteresting_1161_, v_n_1138_, v___x_1167_);
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 3, v___x_1168_);
v___x_1170_ = v___x_1163_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v_interestingStructures_1158_);
lean_ctor_set(v_reuseFailAlloc_1176_, 1, v_interestingEnums_1159_);
lean_ctor_set(v_reuseFailAlloc_1176_, 2, v_interestingMatchers_1160_);
lean_ctor_set(v_reuseFailAlloc_1176_, 3, v___x_1168_);
v___x_1170_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
lean_object* v___x_1172_; 
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 2, v___x_1170_);
v___x_1172_ = v___x_1156_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_rewriteCache_1150_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v_acNfCache_1151_);
lean_ctor_set(v_reuseFailAlloc_1175_, 2, v___x_1170_);
lean_ctor_set(v_reuseFailAlloc_1175_, 3, v_goal_1152_);
lean_ctor_set(v_reuseFailAlloc_1175_, 4, v_hypotheses_1153_);
lean_ctor_set_uint8(v_reuseFailAlloc_1175_, sizeof(void*)*5, v_didChange_1154_);
v___x_1172_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; 
v___x_1173_ = lean_st_ref_set(v_a_1140_, v___x_1172_);
v___x_1174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1167_);
return v___x_1174_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___boxed(lean_object* v_n_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_){
_start:
{
lean_object* v_res_1189_; 
v_res_1189_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst(v_n_1179_, v_a_1180_, v_a_1181_, v_a_1182_, v_a_1183_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_);
lean_dec(v_a_1187_);
lean_dec_ref(v_a_1186_);
lean_dec(v_a_1185_);
lean_dec_ref(v_a_1184_);
lean_dec(v_a_1183_);
lean_dec_ref(v_a_1182_);
lean_dec(v_a_1181_);
lean_dec_ref(v_a_1180_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___lam__0(lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v___x_1197_; 
v___x_1197_ = l_Lean_Meta_getPropHyps(v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___lam__0___boxed(lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___lam__0(v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_);
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
lean_dec(v___y_1201_);
lean_dec_ref(v___y_1200_);
lean_dec(v___y_1199_);
lean_dec_ref(v___y_1198_);
return v_res_1205_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_1206_; 
v___x_1206_ = l_instMonadEIO(lean_box(0));
return v___x_1206_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1207_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0);
v___x_1208_ = l_StateRefT_x27_instMonad___redArg(v___x_1207_);
return v___x_1208_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__6(void){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = l_instMonadControlReaderT(lean_box(0), lean_box(0));
return v___x_1213_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__7(void){
_start:
{
lean_object* v___x_1214_; 
v___x_1214_ = l_instMonadControlStateRefT_x27(lean_box(0), lean_box(0), lean_box(0));
return v___x_1214_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__9(void){
_start:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1216_ = lean_box(0);
v___x_1217_ = lean_unsigned_to_nat(16u);
v___x_1218_ = lean_mk_array(v___x_1217_, v___x_1216_);
return v___x_1218_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__10(void){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1219_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__9, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__9_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__9);
v___x_1220_ = lean_unsigned_to_nat(0u);
v___x_1221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1220_);
lean_ctor_set(v___x_1221_, 1, v___x_1219_);
return v___x_1221_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__11(void){
_start:
{
lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1222_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__10);
v___x_1223_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1222_);
lean_ctor_set(v___x_1223_, 1, v___x_1222_);
lean_ctor_set(v___x_1223_, 2, v___x_1222_);
lean_ctor_set(v___x_1223_, 3, v___x_1222_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg(lean_object* v_cfg_1226_, lean_object* v_goal_1227_, lean_object* v_x_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_){
_start:
{
lean_object* v___x_1236_; lean_object* v_toApplicative_1237_; lean_object* v_toFunctor_1238_; lean_object* v_toSeq_1239_; lean_object* v_toSeqLeft_1240_; lean_object* v_toSeqRight_1241_; lean_object* v___f_1242_; lean_object* v___f_1243_; lean_object* v___f_1244_; lean_object* v___f_1245_; lean_object* v___x_1246_; lean_object* v___f_1247_; lean_object* v___f_1248_; lean_object* v___f_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v_toApplicative_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1352_; 
v___x_1236_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1);
v_toApplicative_1237_ = lean_ctor_get(v___x_1236_, 0);
v_toFunctor_1238_ = lean_ctor_get(v_toApplicative_1237_, 0);
v_toSeq_1239_ = lean_ctor_get(v_toApplicative_1237_, 2);
v_toSeqLeft_1240_ = lean_ctor_get(v_toApplicative_1237_, 3);
v_toSeqRight_1241_ = lean_ctor_get(v_toApplicative_1237_, 4);
v___f_1242_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2));
v___f_1243_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_1238_, 2);
v___f_1244_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1244_, 0, v_toFunctor_1238_);
v___f_1245_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1245_, 0, v_toFunctor_1238_);
v___x_1246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___f_1244_);
lean_ctor_set(v___x_1246_, 1, v___f_1245_);
lean_inc(v_toSeqRight_1241_);
v___f_1247_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1247_, 0, v_toSeqRight_1241_);
lean_inc(v_toSeqLeft_1240_);
v___f_1248_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1248_, 0, v_toSeqLeft_1240_);
lean_inc(v_toSeq_1239_);
v___f_1249_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1249_, 0, v_toSeq_1239_);
v___x_1250_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1246_);
lean_ctor_set(v___x_1250_, 1, v___f_1242_);
lean_ctor_set(v___x_1250_, 2, v___f_1249_);
lean_ctor_set(v___x_1250_, 3, v___f_1248_);
lean_ctor_set(v___x_1250_, 4, v___f_1247_);
v___x_1251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1250_);
lean_ctor_set(v___x_1251_, 1, v___f_1243_);
v___x_1252_ = l_StateRefT_x27_instMonad___redArg(v___x_1251_);
v_toApplicative_1253_ = lean_ctor_get(v___x_1252_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v___x_1252_);
if (v_isSharedCheck_1352_ == 0)
{
lean_object* v_unused_1353_; 
v_unused_1353_ = lean_ctor_get(v___x_1252_, 1);
lean_dec(v_unused_1353_);
v___x_1255_ = v___x_1252_;
v_isShared_1256_ = v_isSharedCheck_1352_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_toApplicative_1253_);
lean_dec(v___x_1252_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1352_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v_toFunctor_1257_; lean_object* v_toSeq_1258_; lean_object* v_toSeqLeft_1259_; lean_object* v_toSeqRight_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1350_; 
v_toFunctor_1257_ = lean_ctor_get(v_toApplicative_1253_, 0);
v_toSeq_1258_ = lean_ctor_get(v_toApplicative_1253_, 2);
v_toSeqLeft_1259_ = lean_ctor_get(v_toApplicative_1253_, 3);
v_toSeqRight_1260_ = lean_ctor_get(v_toApplicative_1253_, 4);
v_isSharedCheck_1350_ = !lean_is_exclusive(v_toApplicative_1253_);
if (v_isSharedCheck_1350_ == 0)
{
lean_object* v_unused_1351_; 
v_unused_1351_ = lean_ctor_get(v_toApplicative_1253_, 1);
lean_dec(v_unused_1351_);
v___x_1262_ = v_toApplicative_1253_;
v_isShared_1263_ = v_isSharedCheck_1350_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_toSeqRight_1260_);
lean_inc(v_toSeqLeft_1259_);
lean_inc(v_toSeq_1258_);
lean_inc(v_toFunctor_1257_);
lean_dec(v_toApplicative_1253_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1350_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___f_1264_; lean_object* v___f_1265_; lean_object* v___f_1266_; lean_object* v___f_1267_; lean_object* v___x_1268_; lean_object* v___f_1269_; lean_object* v___f_1270_; lean_object* v___f_1271_; lean_object* v___x_1273_; 
v___f_1264_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__4));
v___f_1265_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__5));
lean_inc_ref(v_toFunctor_1257_);
v___f_1266_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1266_, 0, v_toFunctor_1257_);
v___f_1267_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1267_, 0, v_toFunctor_1257_);
v___x_1268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1268_, 0, v___f_1266_);
lean_ctor_set(v___x_1268_, 1, v___f_1267_);
v___f_1269_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1269_, 0, v_toSeqRight_1260_);
v___f_1270_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1270_, 0, v_toSeqLeft_1259_);
v___f_1271_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1271_, 0, v_toSeq_1258_);
if (v_isShared_1263_ == 0)
{
lean_ctor_set(v___x_1262_, 4, v___f_1269_);
lean_ctor_set(v___x_1262_, 3, v___f_1270_);
lean_ctor_set(v___x_1262_, 2, v___f_1271_);
lean_ctor_set(v___x_1262_, 1, v___f_1264_);
lean_ctor_set(v___x_1262_, 0, v___x_1268_);
v___x_1273_ = v___x_1262_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v___x_1268_);
lean_ctor_set(v_reuseFailAlloc_1349_, 1, v___f_1264_);
lean_ctor_set(v_reuseFailAlloc_1349_, 2, v___f_1271_);
lean_ctor_set(v_reuseFailAlloc_1349_, 3, v___f_1270_);
lean_ctor_set(v_reuseFailAlloc_1349_, 4, v___f_1269_);
v___x_1273_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
lean_object* v___x_1275_; 
if (v_isShared_1256_ == 0)
{
lean_ctor_set(v___x_1255_, 1, v___f_1265_);
lean_ctor_set(v___x_1255_, 0, v___x_1273_);
v___x_1275_ = v___x_1255_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v___x_1273_);
lean_ctor_set(v_reuseFailAlloc_1348_, 1, v___f_1265_);
v___x_1275_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v_toApplicative_1280_; lean_object* v_toFunctor_1281_; lean_object* v_toSeq_1282_; lean_object* v_toSeqLeft_1283_; lean_object* v_toSeqRight_1284_; lean_object* v___f_1285_; lean_object* v___f_1286_; lean_object* v___f_1287_; lean_object* v___x_1288_; lean_object* v___f_1289_; lean_object* v___f_1290_; lean_object* v___f_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___f_1297_; lean_object* v___f_1298_; lean_object* v___x_1299_; lean_object* v___f_1300_; lean_object* v___f_1301_; lean_object* v___x_1302_; lean_object* v___x_1900__overap_1303_; lean_object* v___x_1304_; 
v___x_1276_ = l_StateRefT_x27_instMonad___redArg(v___x_1275_);
v___x_1277_ = l_ReaderT_instMonad___redArg(v___x_1276_);
v___x_1278_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__6);
v___x_1279_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__7);
v_toApplicative_1280_ = lean_ctor_get(v___x_1236_, 0);
v_toFunctor_1281_ = lean_ctor_get(v_toApplicative_1280_, 0);
v_toSeq_1282_ = lean_ctor_get(v_toApplicative_1280_, 2);
v_toSeqLeft_1283_ = lean_ctor_get(v_toApplicative_1280_, 3);
v_toSeqRight_1284_ = lean_ctor_get(v_toApplicative_1280_, 4);
v___f_1285_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__8));
lean_inc_ref_n(v_toFunctor_1281_, 2);
v___f_1286_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1286_, 0, v_toFunctor_1281_);
v___f_1287_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1287_, 0, v_toFunctor_1281_);
v___x_1288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___f_1286_);
lean_ctor_set(v___x_1288_, 1, v___f_1287_);
lean_inc(v_toSeqRight_1284_);
v___f_1289_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1289_, 0, v_toSeqRight_1284_);
lean_inc(v_toSeqLeft_1283_);
v___f_1290_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1290_, 0, v_toSeqLeft_1283_);
lean_inc(v_toSeq_1282_);
v___f_1291_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1291_, 0, v_toSeq_1282_);
v___x_1292_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1288_);
lean_ctor_set(v___x_1292_, 1, v___f_1242_);
lean_ctor_set(v___x_1292_, 2, v___f_1291_);
lean_ctor_set(v___x_1292_, 3, v___f_1290_);
lean_ctor_set(v___x_1292_, 4, v___f_1289_);
v___x_1293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
lean_ctor_set(v___x_1293_, 1, v___f_1243_);
v___x_1294_ = l_StateRefT_x27_instMonad___redArg(v___x_1293_);
v___x_1295_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_1295_, 0, lean_box(0));
lean_closure_set(v___x_1295_, 1, lean_box(0));
lean_closure_set(v___x_1295_, 2, v___x_1294_);
v___x_1296_ = l_instMonadControlTOfPure___redArg(v___x_1295_);
lean_inc_ref(v___x_1296_);
v___f_1297_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1297_, 0, v___x_1279_);
lean_closure_set(v___f_1297_, 1, v___x_1296_);
v___f_1298_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1298_, 0, v___x_1279_);
lean_closure_set(v___f_1298_, 1, v___x_1296_);
v___x_1299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1299_, 0, v___f_1297_);
lean_ctor_set(v___x_1299_, 1, v___f_1298_);
lean_inc_ref(v___x_1299_);
v___f_1300_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1300_, 0, v___x_1278_);
lean_closure_set(v___f_1300_, 1, v___x_1299_);
v___f_1301_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1301_, 0, v___x_1278_);
lean_closure_set(v___f_1301_, 1, v___x_1299_);
v___x_1302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___f_1300_);
lean_ctor_set(v___x_1302_, 1, v___f_1301_);
lean_inc(v_goal_1227_);
v___x_1900__overap_1303_ = l_Lean_MVarId_withContext___redArg(v___x_1302_, v___x_1277_, v_goal_1227_, v___f_1285_);
lean_inc(v_a_1234_);
lean_inc_ref(v_a_1233_);
lean_inc(v_a_1232_);
lean_inc_ref(v_a_1231_);
lean_inc(v_a_1230_);
lean_inc_ref(v_a_1229_);
v___x_1304_ = lean_apply_7(v___x_1900__overap_1303_, v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_, v_a_1233_, v_a_1234_, lean_box(0));
if (lean_obj_tag(v___x_1304_) == 0)
{
lean_object* v_a_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; uint8_t v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
v_a_1305_ = lean_ctor_get(v___x_1304_, 0);
lean_inc(v_a_1305_);
lean_dec_ref_known(v___x_1304_, 1);
v___x_1306_ = lean_array_get_size(v_a_1305_);
lean_dec(v_a_1305_);
v___x_1307_ = lean_unsigned_to_nat(0u);
v___x_1308_ = lean_unsigned_to_nat(4u);
v___x_1309_ = lean_nat_mul(v___x_1306_, v___x_1308_);
v___x_1310_ = lean_unsigned_to_nat(3u);
v___x_1311_ = lean_nat_div(v___x_1309_, v___x_1310_);
lean_dec(v___x_1309_);
v___x_1312_ = l_Nat_nextPowerOfTwo(v___x_1311_);
lean_dec(v___x_1311_);
v___x_1313_ = lean_box(0);
v___x_1314_ = lean_mk_array(v___x_1312_, v___x_1313_);
v___x_1315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1307_);
lean_ctor_set(v___x_1315_, 1, v___x_1314_);
v___x_1316_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__11, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__11_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__11);
v___x_1317_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__12));
v___x_1318_ = 0;
lean_inc_ref(v___x_1315_);
v___x_1319_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1319_, 0, v___x_1315_);
lean_ctor_set(v___x_1319_, 1, v___x_1315_);
lean_ctor_set(v___x_1319_, 2, v___x_1316_);
lean_ctor_set(v___x_1319_, 3, v_goal_1227_);
lean_ctor_set(v___x_1319_, 4, v___x_1317_);
lean_ctor_set_uint8(v___x_1319_, sizeof(void*)*5, v___x_1318_);
v___x_1320_ = lean_st_mk_ref(v___x_1319_);
lean_inc(v_a_1234_);
lean_inc_ref(v_a_1233_);
lean_inc(v_a_1232_);
lean_inc_ref(v_a_1231_);
lean_inc(v_a_1230_);
lean_inc_ref(v_a_1229_);
lean_inc(v___x_1320_);
v___x_1321_ = lean_apply_9(v_x_1228_, v_cfg_1226_, v___x_1320_, v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_, v_a_1233_, v_a_1234_, lean_box(0));
if (lean_obj_tag(v___x_1321_) == 0)
{
lean_object* v_a_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1331_; 
v_a_1322_ = lean_ctor_get(v___x_1321_, 0);
v_isSharedCheck_1331_ = !lean_is_exclusive(v___x_1321_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1324_ = v___x_1321_;
v_isShared_1325_ = v_isSharedCheck_1331_;
goto v_resetjp_1323_;
}
else
{
lean_inc(v_a_1322_);
lean_dec(v___x_1321_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1331_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1329_; 
v___x_1326_ = lean_st_ref_get(v___x_1320_);
lean_dec(v___x_1320_);
v___x_1327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1327_, 0, v_a_1322_);
lean_ctor_set(v___x_1327_, 1, v___x_1326_);
if (v_isShared_1325_ == 0)
{
lean_ctor_set(v___x_1324_, 0, v___x_1327_);
v___x_1329_ = v___x_1324_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v___x_1327_);
v___x_1329_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
return v___x_1329_;
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
else
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
lean_dec_ref(v_x_1228_);
lean_dec(v_goal_1227_);
lean_dec_ref(v_cfg_1226_);
v_a_1340_ = lean_ctor_get(v___x_1304_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1304_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1304_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1304_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
v___x_1345_ = v___x_1342_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1340_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___boxed(lean_object* v_cfg_1354_, lean_object* v_goal_1355_, lean_object* v_x_1356_, lean_object* v_a_1357_, lean_object* v_a_1358_, lean_object* v_a_1359_, lean_object* v_a_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_, lean_object* v_a_1363_){
_start:
{
lean_object* v_res_1364_; 
v_res_1364_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg(v_cfg_1354_, v_goal_1355_, v_x_1356_, v_a_1357_, v_a_1358_, v_a_1359_, v_a_1360_, v_a_1361_, v_a_1362_);
lean_dec(v_a_1362_);
lean_dec_ref(v_a_1361_);
lean_dec(v_a_1360_);
lean_dec_ref(v_a_1359_);
lean_dec(v_a_1358_);
lean_dec_ref(v_a_1357_);
return v_res_1364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run(lean_object* v_00_u03b1_1365_, lean_object* v_cfg_1366_, lean_object* v_goal_1367_, lean_object* v_x_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_){
_start:
{
lean_object* v___x_1376_; lean_object* v_toApplicative_1377_; lean_object* v_toFunctor_1378_; lean_object* v_toSeq_1379_; lean_object* v_toSeqLeft_1380_; lean_object* v_toSeqRight_1381_; lean_object* v___f_1382_; lean_object* v___f_1383_; lean_object* v___f_1384_; lean_object* v___f_1385_; lean_object* v___x_1386_; lean_object* v___f_1387_; lean_object* v___f_1388_; lean_object* v___f_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v_toApplicative_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1492_; 
v___x_1376_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1);
v_toApplicative_1377_ = lean_ctor_get(v___x_1376_, 0);
v_toFunctor_1378_ = lean_ctor_get(v_toApplicative_1377_, 0);
v_toSeq_1379_ = lean_ctor_get(v_toApplicative_1377_, 2);
v_toSeqLeft_1380_ = lean_ctor_get(v_toApplicative_1377_, 3);
v_toSeqRight_1381_ = lean_ctor_get(v_toApplicative_1377_, 4);
v___f_1382_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2));
v___f_1383_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_1378_, 2);
v___f_1384_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1384_, 0, v_toFunctor_1378_);
v___f_1385_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1385_, 0, v_toFunctor_1378_);
v___x_1386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1386_, 0, v___f_1384_);
lean_ctor_set(v___x_1386_, 1, v___f_1385_);
lean_inc(v_toSeqRight_1381_);
v___f_1387_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1387_, 0, v_toSeqRight_1381_);
lean_inc(v_toSeqLeft_1380_);
v___f_1388_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1388_, 0, v_toSeqLeft_1380_);
lean_inc(v_toSeq_1379_);
v___f_1389_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1389_, 0, v_toSeq_1379_);
v___x_1390_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1386_);
lean_ctor_set(v___x_1390_, 1, v___f_1382_);
lean_ctor_set(v___x_1390_, 2, v___f_1389_);
lean_ctor_set(v___x_1390_, 3, v___f_1388_);
lean_ctor_set(v___x_1390_, 4, v___f_1387_);
v___x_1391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1390_);
lean_ctor_set(v___x_1391_, 1, v___f_1383_);
v___x_1392_ = l_StateRefT_x27_instMonad___redArg(v___x_1391_);
v_toApplicative_1393_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1492_ == 0)
{
lean_object* v_unused_1493_; 
v_unused_1493_ = lean_ctor_get(v___x_1392_, 1);
lean_dec(v_unused_1493_);
v___x_1395_ = v___x_1392_;
v_isShared_1396_ = v_isSharedCheck_1492_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_toApplicative_1393_);
lean_dec(v___x_1392_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1492_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v_toFunctor_1397_; lean_object* v_toSeq_1398_; lean_object* v_toSeqLeft_1399_; lean_object* v_toSeqRight_1400_; lean_object* v___x_1402_; uint8_t v_isShared_1403_; uint8_t v_isSharedCheck_1490_; 
v_toFunctor_1397_ = lean_ctor_get(v_toApplicative_1393_, 0);
v_toSeq_1398_ = lean_ctor_get(v_toApplicative_1393_, 2);
v_toSeqLeft_1399_ = lean_ctor_get(v_toApplicative_1393_, 3);
v_toSeqRight_1400_ = lean_ctor_get(v_toApplicative_1393_, 4);
v_isSharedCheck_1490_ = !lean_is_exclusive(v_toApplicative_1393_);
if (v_isSharedCheck_1490_ == 0)
{
lean_object* v_unused_1491_; 
v_unused_1491_ = lean_ctor_get(v_toApplicative_1393_, 1);
lean_dec(v_unused_1491_);
v___x_1402_ = v_toApplicative_1393_;
v_isShared_1403_ = v_isSharedCheck_1490_;
goto v_resetjp_1401_;
}
else
{
lean_inc(v_toSeqRight_1400_);
lean_inc(v_toSeqLeft_1399_);
lean_inc(v_toSeq_1398_);
lean_inc(v_toFunctor_1397_);
lean_dec(v_toApplicative_1393_);
v___x_1402_ = lean_box(0);
v_isShared_1403_ = v_isSharedCheck_1490_;
goto v_resetjp_1401_;
}
v_resetjp_1401_:
{
lean_object* v___f_1404_; lean_object* v___f_1405_; lean_object* v___f_1406_; lean_object* v___f_1407_; lean_object* v___x_1408_; lean_object* v___f_1409_; lean_object* v___f_1410_; lean_object* v___f_1411_; lean_object* v___x_1413_; 
v___f_1404_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__4));
v___f_1405_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__5));
lean_inc_ref(v_toFunctor_1397_);
v___f_1406_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1406_, 0, v_toFunctor_1397_);
v___f_1407_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1407_, 0, v_toFunctor_1397_);
v___x_1408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1408_, 0, v___f_1406_);
lean_ctor_set(v___x_1408_, 1, v___f_1407_);
v___f_1409_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1409_, 0, v_toSeqRight_1400_);
v___f_1410_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1410_, 0, v_toSeqLeft_1399_);
v___f_1411_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1411_, 0, v_toSeq_1398_);
if (v_isShared_1403_ == 0)
{
lean_ctor_set(v___x_1402_, 4, v___f_1409_);
lean_ctor_set(v___x_1402_, 3, v___f_1410_);
lean_ctor_set(v___x_1402_, 2, v___f_1411_);
lean_ctor_set(v___x_1402_, 1, v___f_1404_);
lean_ctor_set(v___x_1402_, 0, v___x_1408_);
v___x_1413_ = v___x_1402_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v___x_1408_);
lean_ctor_set(v_reuseFailAlloc_1489_, 1, v___f_1404_);
lean_ctor_set(v_reuseFailAlloc_1489_, 2, v___f_1411_);
lean_ctor_set(v_reuseFailAlloc_1489_, 3, v___f_1410_);
lean_ctor_set(v_reuseFailAlloc_1489_, 4, v___f_1409_);
v___x_1413_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
lean_object* v___x_1415_; 
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 1, v___f_1405_);
lean_ctor_set(v___x_1395_, 0, v___x_1413_);
v___x_1415_ = v___x_1395_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v___x_1413_);
lean_ctor_set(v_reuseFailAlloc_1488_, 1, v___f_1405_);
v___x_1415_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v_toApplicative_1420_; lean_object* v_toFunctor_1421_; lean_object* v_toSeq_1422_; lean_object* v_toSeqLeft_1423_; lean_object* v_toSeqRight_1424_; lean_object* v___f_1425_; lean_object* v___f_1426_; lean_object* v___f_1427_; lean_object* v___x_1428_; lean_object* v___f_1429_; lean_object* v___f_1430_; lean_object* v___f_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___f_1437_; lean_object* v___f_1438_; lean_object* v___x_1439_; lean_object* v___f_1440_; lean_object* v___f_1441_; lean_object* v___x_1442_; lean_object* v___x_2065__overap_1443_; lean_object* v___x_1444_; 
v___x_1416_ = l_StateRefT_x27_instMonad___redArg(v___x_1415_);
v___x_1417_ = l_ReaderT_instMonad___redArg(v___x_1416_);
v___x_1418_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__6);
v___x_1419_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__7);
v_toApplicative_1420_ = lean_ctor_get(v___x_1376_, 0);
v_toFunctor_1421_ = lean_ctor_get(v_toApplicative_1420_, 0);
v_toSeq_1422_ = lean_ctor_get(v_toApplicative_1420_, 2);
v_toSeqLeft_1423_ = lean_ctor_get(v_toApplicative_1420_, 3);
v_toSeqRight_1424_ = lean_ctor_get(v_toApplicative_1420_, 4);
v___f_1425_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__8));
lean_inc_ref_n(v_toFunctor_1421_, 2);
v___f_1426_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1426_, 0, v_toFunctor_1421_);
v___f_1427_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1427_, 0, v_toFunctor_1421_);
v___x_1428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___f_1426_);
lean_ctor_set(v___x_1428_, 1, v___f_1427_);
lean_inc(v_toSeqRight_1424_);
v___f_1429_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1429_, 0, v_toSeqRight_1424_);
lean_inc(v_toSeqLeft_1423_);
v___f_1430_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1430_, 0, v_toSeqLeft_1423_);
lean_inc(v_toSeq_1422_);
v___f_1431_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1431_, 0, v_toSeq_1422_);
v___x_1432_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1428_);
lean_ctor_set(v___x_1432_, 1, v___f_1382_);
lean_ctor_set(v___x_1432_, 2, v___f_1431_);
lean_ctor_set(v___x_1432_, 3, v___f_1430_);
lean_ctor_set(v___x_1432_, 4, v___f_1429_);
v___x_1433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1432_);
lean_ctor_set(v___x_1433_, 1, v___f_1383_);
v___x_1434_ = l_StateRefT_x27_instMonad___redArg(v___x_1433_);
v___x_1435_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_1435_, 0, lean_box(0));
lean_closure_set(v___x_1435_, 1, lean_box(0));
lean_closure_set(v___x_1435_, 2, v___x_1434_);
v___x_1436_ = l_instMonadControlTOfPure___redArg(v___x_1435_);
lean_inc_ref(v___x_1436_);
v___f_1437_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1437_, 0, v___x_1419_);
lean_closure_set(v___f_1437_, 1, v___x_1436_);
v___f_1438_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1438_, 0, v___x_1419_);
lean_closure_set(v___f_1438_, 1, v___x_1436_);
v___x_1439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1439_, 0, v___f_1437_);
lean_ctor_set(v___x_1439_, 1, v___f_1438_);
lean_inc_ref(v___x_1439_);
v___f_1440_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1440_, 0, v___x_1418_);
lean_closure_set(v___f_1440_, 1, v___x_1439_);
v___f_1441_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1441_, 0, v___x_1418_);
lean_closure_set(v___f_1441_, 1, v___x_1439_);
v___x_1442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1442_, 0, v___f_1440_);
lean_ctor_set(v___x_1442_, 1, v___f_1441_);
lean_inc(v_goal_1367_);
v___x_2065__overap_1443_ = l_Lean_MVarId_withContext___redArg(v___x_1442_, v___x_1417_, v_goal_1367_, v___f_1425_);
lean_inc(v_a_1374_);
lean_inc_ref(v_a_1373_);
lean_inc(v_a_1372_);
lean_inc_ref(v_a_1371_);
lean_inc(v_a_1370_);
lean_inc_ref(v_a_1369_);
v___x_1444_ = lean_apply_7(v___x_2065__overap_1443_, v_a_1369_, v_a_1370_, v_a_1371_, v_a_1372_, v_a_1373_, v_a_1374_, lean_box(0));
if (lean_obj_tag(v___x_1444_) == 0)
{
lean_object* v_a_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; uint8_t v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; 
v_a_1445_ = lean_ctor_get(v___x_1444_, 0);
lean_inc(v_a_1445_);
lean_dec_ref_known(v___x_1444_, 1);
v___x_1446_ = lean_array_get_size(v_a_1445_);
lean_dec(v_a_1445_);
v___x_1447_ = lean_unsigned_to_nat(0u);
v___x_1448_ = lean_unsigned_to_nat(4u);
v___x_1449_ = lean_nat_mul(v___x_1446_, v___x_1448_);
v___x_1450_ = lean_unsigned_to_nat(3u);
v___x_1451_ = lean_nat_div(v___x_1449_, v___x_1450_);
lean_dec(v___x_1449_);
v___x_1452_ = l_Nat_nextPowerOfTwo(v___x_1451_);
lean_dec(v___x_1451_);
v___x_1453_ = lean_box(0);
v___x_1454_ = lean_mk_array(v___x_1452_, v___x_1453_);
v___x_1455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1447_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
v___x_1456_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__11, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__11_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__11);
v___x_1457_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__12));
v___x_1458_ = 0;
lean_inc_ref(v___x_1455_);
v___x_1459_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1459_, 0, v___x_1455_);
lean_ctor_set(v___x_1459_, 1, v___x_1455_);
lean_ctor_set(v___x_1459_, 2, v___x_1456_);
lean_ctor_set(v___x_1459_, 3, v_goal_1367_);
lean_ctor_set(v___x_1459_, 4, v___x_1457_);
lean_ctor_set_uint8(v___x_1459_, sizeof(void*)*5, v___x_1458_);
v___x_1460_ = lean_st_mk_ref(v___x_1459_);
lean_inc(v_a_1374_);
lean_inc_ref(v_a_1373_);
lean_inc(v_a_1372_);
lean_inc_ref(v_a_1371_);
lean_inc(v_a_1370_);
lean_inc_ref(v_a_1369_);
lean_inc(v___x_1460_);
v___x_1461_ = lean_apply_9(v_x_1368_, v_cfg_1366_, v___x_1460_, v_a_1369_, v_a_1370_, v_a_1371_, v_a_1372_, v_a_1373_, v_a_1374_, lean_box(0));
if (lean_obj_tag(v___x_1461_) == 0)
{
lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1471_; 
v_a_1462_ = lean_ctor_get(v___x_1461_, 0);
v_isSharedCheck_1471_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1464_ = v___x_1461_;
v_isShared_1465_ = v_isSharedCheck_1471_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1461_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1471_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1469_; 
v___x_1466_ = lean_st_ref_get(v___x_1460_);
lean_dec(v___x_1460_);
v___x_1467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1467_, 0, v_a_1462_);
lean_ctor_set(v___x_1467_, 1, v___x_1466_);
if (v_isShared_1465_ == 0)
{
lean_ctor_set(v___x_1464_, 0, v___x_1467_);
v___x_1469_ = v___x_1464_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v___x_1467_);
v___x_1469_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
return v___x_1469_;
}
}
}
else
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
lean_dec(v___x_1460_);
v_a_1472_ = lean_ctor_get(v___x_1461_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1461_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1461_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1477_; 
if (v_isShared_1475_ == 0)
{
v___x_1477_ = v___x_1474_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_a_1472_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
}
else
{
lean_object* v_a_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1487_; 
lean_dec_ref(v_x_1368_);
lean_dec(v_goal_1367_);
lean_dec_ref(v_cfg_1366_);
v_a_1480_ = lean_ctor_get(v___x_1444_, 0);
v_isSharedCheck_1487_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1482_ = v___x_1444_;
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_a_1480_);
lean_dec(v___x_1444_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1485_; 
if (v_isShared_1483_ == 0)
{
v___x_1485_ = v___x_1482_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v_a_1480_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___boxed(lean_object* v_00_u03b1_1494_, lean_object* v_cfg_1495_, lean_object* v_goal_1496_, lean_object* v_x_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_, lean_object* v_a_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run(v_00_u03b1_1494_, v_cfg_1495_, v_goal_1496_, v_x_1497_, v_a_1498_, v_a_1499_, v_a_1500_, v_a_1501_, v_a_1502_, v_a_1503_);
lean_dec(v_a_1503_);
lean_dec_ref(v_a_1502_);
lean_dec(v_a_1501_);
lean_dec_ref(v_a_1500_);
lean_dec(v_a_1499_);
lean_dec_ref(v_a_1498_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg(lean_object* v_cfg_1506_, lean_object* v_goal_1507_, lean_object* v_x_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_){
_start:
{
lean_object* v___x_1516_; lean_object* v_toApplicative_1517_; lean_object* v_toFunctor_1518_; lean_object* v_toSeq_1519_; lean_object* v_toSeqLeft_1520_; lean_object* v_toSeqRight_1521_; lean_object* v___f_1522_; lean_object* v___f_1523_; lean_object* v___f_1524_; lean_object* v___f_1525_; lean_object* v___x_1526_; lean_object* v___f_1527_; lean_object* v___f_1528_; lean_object* v___f_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v_toApplicative_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1623_; 
v___x_1516_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1);
v_toApplicative_1517_ = lean_ctor_get(v___x_1516_, 0);
v_toFunctor_1518_ = lean_ctor_get(v_toApplicative_1517_, 0);
v_toSeq_1519_ = lean_ctor_get(v_toApplicative_1517_, 2);
v_toSeqLeft_1520_ = lean_ctor_get(v_toApplicative_1517_, 3);
v_toSeqRight_1521_ = lean_ctor_get(v_toApplicative_1517_, 4);
v___f_1522_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2));
v___f_1523_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_1518_, 2);
v___f_1524_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1524_, 0, v_toFunctor_1518_);
v___f_1525_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1525_, 0, v_toFunctor_1518_);
v___x_1526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1526_, 0, v___f_1524_);
lean_ctor_set(v___x_1526_, 1, v___f_1525_);
lean_inc(v_toSeqRight_1521_);
v___f_1527_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1527_, 0, v_toSeqRight_1521_);
lean_inc(v_toSeqLeft_1520_);
v___f_1528_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1528_, 0, v_toSeqLeft_1520_);
lean_inc(v_toSeq_1519_);
v___f_1529_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1529_, 0, v_toSeq_1519_);
v___x_1530_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1526_);
lean_ctor_set(v___x_1530_, 1, v___f_1522_);
lean_ctor_set(v___x_1530_, 2, v___f_1529_);
lean_ctor_set(v___x_1530_, 3, v___f_1528_);
lean_ctor_set(v___x_1530_, 4, v___f_1527_);
v___x_1531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1531_, 0, v___x_1530_);
lean_ctor_set(v___x_1531_, 1, v___f_1523_);
v___x_1532_ = l_StateRefT_x27_instMonad___redArg(v___x_1531_);
v_toApplicative_1533_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1623_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1623_ == 0)
{
lean_object* v_unused_1624_; 
v_unused_1624_ = lean_ctor_get(v___x_1532_, 1);
lean_dec(v_unused_1624_);
v___x_1535_ = v___x_1532_;
v_isShared_1536_ = v_isSharedCheck_1623_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_toApplicative_1533_);
lean_dec(v___x_1532_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1623_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v_toFunctor_1537_; lean_object* v_toSeq_1538_; lean_object* v_toSeqLeft_1539_; lean_object* v_toSeqRight_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1621_; 
v_toFunctor_1537_ = lean_ctor_get(v_toApplicative_1533_, 0);
v_toSeq_1538_ = lean_ctor_get(v_toApplicative_1533_, 2);
v_toSeqLeft_1539_ = lean_ctor_get(v_toApplicative_1533_, 3);
v_toSeqRight_1540_ = lean_ctor_get(v_toApplicative_1533_, 4);
v_isSharedCheck_1621_ = !lean_is_exclusive(v_toApplicative_1533_);
if (v_isSharedCheck_1621_ == 0)
{
lean_object* v_unused_1622_; 
v_unused_1622_ = lean_ctor_get(v_toApplicative_1533_, 1);
lean_dec(v_unused_1622_);
v___x_1542_ = v_toApplicative_1533_;
v_isShared_1543_ = v_isSharedCheck_1621_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_toSeqRight_1540_);
lean_inc(v_toSeqLeft_1539_);
lean_inc(v_toSeq_1538_);
lean_inc(v_toFunctor_1537_);
lean_dec(v_toApplicative_1533_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1621_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___f_1544_; lean_object* v___f_1545_; lean_object* v___f_1546_; lean_object* v___f_1547_; lean_object* v___x_1548_; lean_object* v___f_1549_; lean_object* v___f_1550_; lean_object* v___f_1551_; lean_object* v___x_1553_; 
v___f_1544_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__4));
v___f_1545_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__5));
lean_inc_ref(v_toFunctor_1537_);
v___f_1546_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1546_, 0, v_toFunctor_1537_);
v___f_1547_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1547_, 0, v_toFunctor_1537_);
v___x_1548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1548_, 0, v___f_1546_);
lean_ctor_set(v___x_1548_, 1, v___f_1547_);
v___f_1549_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1549_, 0, v_toSeqRight_1540_);
v___f_1550_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1550_, 0, v_toSeqLeft_1539_);
v___f_1551_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1551_, 0, v_toSeq_1538_);
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 4, v___f_1549_);
lean_ctor_set(v___x_1542_, 3, v___f_1550_);
lean_ctor_set(v___x_1542_, 2, v___f_1551_);
lean_ctor_set(v___x_1542_, 1, v___f_1544_);
lean_ctor_set(v___x_1542_, 0, v___x_1548_);
v___x_1553_ = v___x_1542_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v___x_1548_);
lean_ctor_set(v_reuseFailAlloc_1620_, 1, v___f_1544_);
lean_ctor_set(v_reuseFailAlloc_1620_, 2, v___f_1551_);
lean_ctor_set(v_reuseFailAlloc_1620_, 3, v___f_1550_);
lean_ctor_set(v_reuseFailAlloc_1620_, 4, v___f_1549_);
v___x_1553_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
lean_object* v___x_1555_; 
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 1, v___f_1545_);
lean_ctor_set(v___x_1535_, 0, v___x_1553_);
v___x_1555_ = v___x_1535_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v___x_1553_);
lean_ctor_set(v_reuseFailAlloc_1619_, 1, v___f_1545_);
v___x_1555_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v_toApplicative_1560_; lean_object* v_toFunctor_1561_; lean_object* v_toSeq_1562_; lean_object* v_toSeqLeft_1563_; lean_object* v_toSeqRight_1564_; lean_object* v___f_1565_; lean_object* v___f_1566_; lean_object* v___f_1567_; lean_object* v___x_1568_; lean_object* v___f_1569_; lean_object* v___f_1570_; lean_object* v___f_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___f_1577_; lean_object* v___f_1578_; lean_object* v___x_1579_; lean_object* v___f_1580_; lean_object* v___f_1581_; lean_object* v___x_1582_; lean_object* v___x_2348__overap_1583_; lean_object* v___x_1584_; 
v___x_1556_ = l_StateRefT_x27_instMonad___redArg(v___x_1555_);
v___x_1557_ = l_ReaderT_instMonad___redArg(v___x_1556_);
v___x_1558_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__6);
v___x_1559_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__7);
v_toApplicative_1560_ = lean_ctor_get(v___x_1516_, 0);
v_toFunctor_1561_ = lean_ctor_get(v_toApplicative_1560_, 0);
v_toSeq_1562_ = lean_ctor_get(v_toApplicative_1560_, 2);
v_toSeqLeft_1563_ = lean_ctor_get(v_toApplicative_1560_, 3);
v_toSeqRight_1564_ = lean_ctor_get(v_toApplicative_1560_, 4);
v___f_1565_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__8));
lean_inc_ref_n(v_toFunctor_1561_, 2);
v___f_1566_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1566_, 0, v_toFunctor_1561_);
v___f_1567_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1567_, 0, v_toFunctor_1561_);
v___x_1568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1568_, 0, v___f_1566_);
lean_ctor_set(v___x_1568_, 1, v___f_1567_);
lean_inc(v_toSeqRight_1564_);
v___f_1569_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1569_, 0, v_toSeqRight_1564_);
lean_inc(v_toSeqLeft_1563_);
v___f_1570_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1570_, 0, v_toSeqLeft_1563_);
lean_inc(v_toSeq_1562_);
v___f_1571_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1571_, 0, v_toSeq_1562_);
v___x_1572_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1572_, 0, v___x_1568_);
lean_ctor_set(v___x_1572_, 1, v___f_1522_);
lean_ctor_set(v___x_1572_, 2, v___f_1571_);
lean_ctor_set(v___x_1572_, 3, v___f_1570_);
lean_ctor_set(v___x_1572_, 4, v___f_1569_);
v___x_1573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1572_);
lean_ctor_set(v___x_1573_, 1, v___f_1523_);
v___x_1574_ = l_StateRefT_x27_instMonad___redArg(v___x_1573_);
v___x_1575_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_1575_, 0, lean_box(0));
lean_closure_set(v___x_1575_, 1, lean_box(0));
lean_closure_set(v___x_1575_, 2, v___x_1574_);
v___x_1576_ = l_instMonadControlTOfPure___redArg(v___x_1575_);
lean_inc_ref(v___x_1576_);
v___f_1577_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1577_, 0, v___x_1559_);
lean_closure_set(v___f_1577_, 1, v___x_1576_);
v___f_1578_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1578_, 0, v___x_1559_);
lean_closure_set(v___f_1578_, 1, v___x_1576_);
v___x_1579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1579_, 0, v___f_1577_);
lean_ctor_set(v___x_1579_, 1, v___f_1578_);
lean_inc_ref(v___x_1579_);
v___f_1580_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1580_, 0, v___x_1558_);
lean_closure_set(v___f_1580_, 1, v___x_1579_);
v___f_1581_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1581_, 0, v___x_1558_);
lean_closure_set(v___f_1581_, 1, v___x_1579_);
v___x_1582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1582_, 0, v___f_1580_);
lean_ctor_set(v___x_1582_, 1, v___f_1581_);
lean_inc(v_goal_1507_);
v___x_2348__overap_1583_ = l_Lean_MVarId_withContext___redArg(v___x_1582_, v___x_1557_, v_goal_1507_, v___f_1565_);
lean_inc(v_a_1514_);
lean_inc_ref(v_a_1513_);
lean_inc(v_a_1512_);
lean_inc_ref(v_a_1511_);
lean_inc(v_a_1510_);
lean_inc_ref(v_a_1509_);
v___x_1584_ = lean_apply_7(v___x_2348__overap_1583_, v_a_1509_, v_a_1510_, v_a_1511_, v_a_1512_, v_a_1513_, v_a_1514_, lean_box(0));
if (lean_obj_tag(v___x_1584_) == 0)
{
lean_object* v_a_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; uint8_t v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
v_a_1585_ = lean_ctor_get(v___x_1584_, 0);
lean_inc(v_a_1585_);
lean_dec_ref_known(v___x_1584_, 1);
v___x_1586_ = lean_array_get_size(v_a_1585_);
lean_dec(v_a_1585_);
v___x_1587_ = lean_unsigned_to_nat(0u);
v___x_1588_ = lean_unsigned_to_nat(4u);
v___x_1589_ = lean_nat_mul(v___x_1586_, v___x_1588_);
v___x_1590_ = lean_unsigned_to_nat(3u);
v___x_1591_ = lean_nat_div(v___x_1589_, v___x_1590_);
lean_dec(v___x_1589_);
v___x_1592_ = l_Nat_nextPowerOfTwo(v___x_1591_);
lean_dec(v___x_1591_);
v___x_1593_ = lean_box(0);
v___x_1594_ = lean_mk_array(v___x_1592_, v___x_1593_);
v___x_1595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1587_);
lean_ctor_set(v___x_1595_, 1, v___x_1594_);
v___x_1596_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__11, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__11_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__11);
v___x_1597_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__12));
v___x_1598_ = 0;
lean_inc_ref(v___x_1595_);
v___x_1599_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1599_, 0, v___x_1595_);
lean_ctor_set(v___x_1599_, 1, v___x_1595_);
lean_ctor_set(v___x_1599_, 2, v___x_1596_);
lean_ctor_set(v___x_1599_, 3, v_goal_1507_);
lean_ctor_set(v___x_1599_, 4, v___x_1597_);
lean_ctor_set_uint8(v___x_1599_, sizeof(void*)*5, v___x_1598_);
v___x_1600_ = lean_st_mk_ref(v___x_1599_);
lean_inc(v_a_1514_);
lean_inc_ref(v_a_1513_);
lean_inc(v_a_1512_);
lean_inc_ref(v_a_1511_);
lean_inc(v_a_1510_);
lean_inc_ref(v_a_1509_);
lean_inc(v___x_1600_);
v___x_1601_ = lean_apply_9(v_x_1508_, v_cfg_1506_, v___x_1600_, v_a_1509_, v_a_1510_, v_a_1511_, v_a_1512_, v_a_1513_, v_a_1514_, lean_box(0));
if (lean_obj_tag(v___x_1601_) == 0)
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1610_; 
v_a_1602_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1610_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1604_ = v___x_1601_;
v_isShared_1605_ = v_isSharedCheck_1610_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v___x_1601_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1610_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1606_; lean_object* v___x_1608_; 
v___x_1606_ = lean_st_ref_get(v___x_1600_);
lean_dec(v___x_1600_);
lean_dec(v___x_1606_);
if (v_isShared_1605_ == 0)
{
v___x_1608_ = v___x_1604_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v_a_1602_);
v___x_1608_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
return v___x_1608_;
}
}
}
else
{
lean_dec(v___x_1600_);
return v___x_1601_;
}
}
else
{
lean_object* v_a_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1618_; 
lean_dec_ref(v_x_1508_);
lean_dec(v_goal_1507_);
lean_dec_ref(v_cfg_1506_);
v_a_1611_ = lean_ctor_get(v___x_1584_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v___x_1584_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1613_ = v___x_1584_;
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_a_1611_);
lean_dec(v___x_1584_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1616_; 
if (v_isShared_1614_ == 0)
{
v___x_1616_ = v___x_1613_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v_a_1611_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg___boxed(lean_object* v_cfg_1625_, lean_object* v_goal_1626_, lean_object* v_x_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_){
_start:
{
lean_object* v_res_1635_; 
v_res_1635_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg(v_cfg_1625_, v_goal_1626_, v_x_1627_, v_a_1628_, v_a_1629_, v_a_1630_, v_a_1631_, v_a_1632_, v_a_1633_);
lean_dec(v_a_1633_);
lean_dec_ref(v_a_1632_);
lean_dec(v_a_1631_);
lean_dec_ref(v_a_1630_);
lean_dec(v_a_1629_);
lean_dec_ref(v_a_1628_);
return v_res_1635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27(lean_object* v_00_u03b1_1636_, lean_object* v_cfg_1637_, lean_object* v_goal_1638_, lean_object* v_x_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_){
_start:
{
lean_object* v___x_1647_; lean_object* v_toApplicative_1648_; lean_object* v_toFunctor_1649_; lean_object* v_toSeq_1650_; lean_object* v_toSeqLeft_1651_; lean_object* v_toSeqRight_1652_; lean_object* v___f_1653_; lean_object* v___f_1654_; lean_object* v___f_1655_; lean_object* v___f_1656_; lean_object* v___x_1657_; lean_object* v___f_1658_; lean_object* v___f_1659_; lean_object* v___f_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v_toApplicative_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1754_; 
v___x_1647_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1);
v_toApplicative_1648_ = lean_ctor_get(v___x_1647_, 0);
v_toFunctor_1649_ = lean_ctor_get(v_toApplicative_1648_, 0);
v_toSeq_1650_ = lean_ctor_get(v_toApplicative_1648_, 2);
v_toSeqLeft_1651_ = lean_ctor_get(v_toApplicative_1648_, 3);
v_toSeqRight_1652_ = lean_ctor_get(v_toApplicative_1648_, 4);
v___f_1653_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2));
v___f_1654_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_1649_, 2);
v___f_1655_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1655_, 0, v_toFunctor_1649_);
v___f_1656_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1656_, 0, v_toFunctor_1649_);
v___x_1657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1657_, 0, v___f_1655_);
lean_ctor_set(v___x_1657_, 1, v___f_1656_);
lean_inc(v_toSeqRight_1652_);
v___f_1658_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1658_, 0, v_toSeqRight_1652_);
lean_inc(v_toSeqLeft_1651_);
v___f_1659_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1659_, 0, v_toSeqLeft_1651_);
lean_inc(v_toSeq_1650_);
v___f_1660_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1660_, 0, v_toSeq_1650_);
v___x_1661_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1657_);
lean_ctor_set(v___x_1661_, 1, v___f_1653_);
lean_ctor_set(v___x_1661_, 2, v___f_1660_);
lean_ctor_set(v___x_1661_, 3, v___f_1659_);
lean_ctor_set(v___x_1661_, 4, v___f_1658_);
v___x_1662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1661_);
lean_ctor_set(v___x_1662_, 1, v___f_1654_);
v___x_1663_ = l_StateRefT_x27_instMonad___redArg(v___x_1662_);
v_toApplicative_1664_ = lean_ctor_get(v___x_1663_, 0);
v_isSharedCheck_1754_ = !lean_is_exclusive(v___x_1663_);
if (v_isSharedCheck_1754_ == 0)
{
lean_object* v_unused_1755_; 
v_unused_1755_ = lean_ctor_get(v___x_1663_, 1);
lean_dec(v_unused_1755_);
v___x_1666_ = v___x_1663_;
v_isShared_1667_ = v_isSharedCheck_1754_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_toApplicative_1664_);
lean_dec(v___x_1663_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1754_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v_toFunctor_1668_; lean_object* v_toSeq_1669_; lean_object* v_toSeqLeft_1670_; lean_object* v_toSeqRight_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1752_; 
v_toFunctor_1668_ = lean_ctor_get(v_toApplicative_1664_, 0);
v_toSeq_1669_ = lean_ctor_get(v_toApplicative_1664_, 2);
v_toSeqLeft_1670_ = lean_ctor_get(v_toApplicative_1664_, 3);
v_toSeqRight_1671_ = lean_ctor_get(v_toApplicative_1664_, 4);
v_isSharedCheck_1752_ = !lean_is_exclusive(v_toApplicative_1664_);
if (v_isSharedCheck_1752_ == 0)
{
lean_object* v_unused_1753_; 
v_unused_1753_ = lean_ctor_get(v_toApplicative_1664_, 1);
lean_dec(v_unused_1753_);
v___x_1673_ = v_toApplicative_1664_;
v_isShared_1674_ = v_isSharedCheck_1752_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_toSeqRight_1671_);
lean_inc(v_toSeqLeft_1670_);
lean_inc(v_toSeq_1669_);
lean_inc(v_toFunctor_1668_);
lean_dec(v_toApplicative_1664_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1752_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___f_1675_; lean_object* v___f_1676_; lean_object* v___f_1677_; lean_object* v___f_1678_; lean_object* v___x_1679_; lean_object* v___f_1680_; lean_object* v___f_1681_; lean_object* v___f_1682_; lean_object* v___x_1684_; 
v___f_1675_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__4));
v___f_1676_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__5));
lean_inc_ref(v_toFunctor_1668_);
v___f_1677_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1677_, 0, v_toFunctor_1668_);
v___f_1678_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1678_, 0, v_toFunctor_1668_);
v___x_1679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1679_, 0, v___f_1677_);
lean_ctor_set(v___x_1679_, 1, v___f_1678_);
v___f_1680_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1680_, 0, v_toSeqRight_1671_);
v___f_1681_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1681_, 0, v_toSeqLeft_1670_);
v___f_1682_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1682_, 0, v_toSeq_1669_);
if (v_isShared_1674_ == 0)
{
lean_ctor_set(v___x_1673_, 4, v___f_1680_);
lean_ctor_set(v___x_1673_, 3, v___f_1681_);
lean_ctor_set(v___x_1673_, 2, v___f_1682_);
lean_ctor_set(v___x_1673_, 1, v___f_1675_);
lean_ctor_set(v___x_1673_, 0, v___x_1679_);
v___x_1684_ = v___x_1673_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v___x_1679_);
lean_ctor_set(v_reuseFailAlloc_1751_, 1, v___f_1675_);
lean_ctor_set(v_reuseFailAlloc_1751_, 2, v___f_1682_);
lean_ctor_set(v_reuseFailAlloc_1751_, 3, v___f_1681_);
lean_ctor_set(v_reuseFailAlloc_1751_, 4, v___f_1680_);
v___x_1684_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
lean_object* v___x_1686_; 
if (v_isShared_1667_ == 0)
{
lean_ctor_set(v___x_1666_, 1, v___f_1676_);
lean_ctor_set(v___x_1666_, 0, v___x_1684_);
v___x_1686_ = v___x_1666_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v___x_1684_);
lean_ctor_set(v_reuseFailAlloc_1750_, 1, v___f_1676_);
v___x_1686_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v_toApplicative_1691_; lean_object* v_toFunctor_1692_; lean_object* v_toSeq_1693_; lean_object* v_toSeqLeft_1694_; lean_object* v_toSeqRight_1695_; lean_object* v___f_1696_; lean_object* v___f_1697_; lean_object* v___f_1698_; lean_object* v___x_1699_; lean_object* v___f_1700_; lean_object* v___f_1701_; lean_object* v___f_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___f_1708_; lean_object* v___f_1709_; lean_object* v___x_1710_; lean_object* v___f_1711_; lean_object* v___f_1712_; lean_object* v___x_1713_; lean_object* v___x_2538__overap_1714_; lean_object* v___x_1715_; 
v___x_1687_ = l_StateRefT_x27_instMonad___redArg(v___x_1686_);
v___x_1688_ = l_ReaderT_instMonad___redArg(v___x_1687_);
v___x_1689_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__6);
v___x_1690_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__7);
v_toApplicative_1691_ = lean_ctor_get(v___x_1647_, 0);
v_toFunctor_1692_ = lean_ctor_get(v_toApplicative_1691_, 0);
v_toSeq_1693_ = lean_ctor_get(v_toApplicative_1691_, 2);
v_toSeqLeft_1694_ = lean_ctor_get(v_toApplicative_1691_, 3);
v_toSeqRight_1695_ = lean_ctor_get(v_toApplicative_1691_, 4);
v___f_1696_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__8));
lean_inc_ref_n(v_toFunctor_1692_, 2);
v___f_1697_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1697_, 0, v_toFunctor_1692_);
v___f_1698_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1698_, 0, v_toFunctor_1692_);
v___x_1699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1699_, 0, v___f_1697_);
lean_ctor_set(v___x_1699_, 1, v___f_1698_);
lean_inc(v_toSeqRight_1695_);
v___f_1700_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1700_, 0, v_toSeqRight_1695_);
lean_inc(v_toSeqLeft_1694_);
v___f_1701_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1701_, 0, v_toSeqLeft_1694_);
lean_inc(v_toSeq_1693_);
v___f_1702_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1702_, 0, v_toSeq_1693_);
v___x_1703_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1703_, 0, v___x_1699_);
lean_ctor_set(v___x_1703_, 1, v___f_1653_);
lean_ctor_set(v___x_1703_, 2, v___f_1702_);
lean_ctor_set(v___x_1703_, 3, v___f_1701_);
lean_ctor_set(v___x_1703_, 4, v___f_1700_);
v___x_1704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1704_, 0, v___x_1703_);
lean_ctor_set(v___x_1704_, 1, v___f_1654_);
v___x_1705_ = l_StateRefT_x27_instMonad___redArg(v___x_1704_);
v___x_1706_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_1706_, 0, lean_box(0));
lean_closure_set(v___x_1706_, 1, lean_box(0));
lean_closure_set(v___x_1706_, 2, v___x_1705_);
v___x_1707_ = l_instMonadControlTOfPure___redArg(v___x_1706_);
lean_inc_ref(v___x_1707_);
v___f_1708_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1708_, 0, v___x_1690_);
lean_closure_set(v___f_1708_, 1, v___x_1707_);
v___f_1709_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1709_, 0, v___x_1690_);
lean_closure_set(v___f_1709_, 1, v___x_1707_);
v___x_1710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1710_, 0, v___f_1708_);
lean_ctor_set(v___x_1710_, 1, v___f_1709_);
lean_inc_ref(v___x_1710_);
v___f_1711_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1711_, 0, v___x_1689_);
lean_closure_set(v___f_1711_, 1, v___x_1710_);
v___f_1712_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1712_, 0, v___x_1689_);
lean_closure_set(v___f_1712_, 1, v___x_1710_);
v___x_1713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1713_, 0, v___f_1711_);
lean_ctor_set(v___x_1713_, 1, v___f_1712_);
lean_inc(v_goal_1638_);
v___x_2538__overap_1714_ = l_Lean_MVarId_withContext___redArg(v___x_1713_, v___x_1688_, v_goal_1638_, v___f_1696_);
lean_inc(v_a_1645_);
lean_inc_ref(v_a_1644_);
lean_inc(v_a_1643_);
lean_inc_ref(v_a_1642_);
lean_inc(v_a_1641_);
lean_inc_ref(v_a_1640_);
v___x_1715_ = lean_apply_7(v___x_2538__overap_1714_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, lean_box(0));
if (lean_obj_tag(v___x_1715_) == 0)
{
lean_object* v_a_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; uint8_t v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; 
v_a_1716_ = lean_ctor_get(v___x_1715_, 0);
lean_inc(v_a_1716_);
lean_dec_ref_known(v___x_1715_, 1);
v___x_1717_ = lean_array_get_size(v_a_1716_);
lean_dec(v_a_1716_);
v___x_1718_ = lean_unsigned_to_nat(0u);
v___x_1719_ = lean_unsigned_to_nat(4u);
v___x_1720_ = lean_nat_mul(v___x_1717_, v___x_1719_);
v___x_1721_ = lean_unsigned_to_nat(3u);
v___x_1722_ = lean_nat_div(v___x_1720_, v___x_1721_);
lean_dec(v___x_1720_);
v___x_1723_ = l_Nat_nextPowerOfTwo(v___x_1722_);
lean_dec(v___x_1722_);
v___x_1724_ = lean_box(0);
v___x_1725_ = lean_mk_array(v___x_1723_, v___x_1724_);
v___x_1726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1726_, 0, v___x_1718_);
lean_ctor_set(v___x_1726_, 1, v___x_1725_);
v___x_1727_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__11, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__11_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__11);
v___x_1728_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__12));
v___x_1729_ = 0;
lean_inc_ref(v___x_1726_);
v___x_1730_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1730_, 0, v___x_1726_);
lean_ctor_set(v___x_1730_, 1, v___x_1726_);
lean_ctor_set(v___x_1730_, 2, v___x_1727_);
lean_ctor_set(v___x_1730_, 3, v_goal_1638_);
lean_ctor_set(v___x_1730_, 4, v___x_1728_);
lean_ctor_set_uint8(v___x_1730_, sizeof(void*)*5, v___x_1729_);
v___x_1731_ = lean_st_mk_ref(v___x_1730_);
lean_inc(v_a_1645_);
lean_inc_ref(v_a_1644_);
lean_inc(v_a_1643_);
lean_inc_ref(v_a_1642_);
lean_inc(v_a_1641_);
lean_inc_ref(v_a_1640_);
lean_inc(v___x_1731_);
v___x_1732_ = lean_apply_9(v_x_1639_, v_cfg_1637_, v___x_1731_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, lean_box(0));
if (lean_obj_tag(v___x_1732_) == 0)
{
lean_object* v_a_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1741_; 
v_a_1733_ = lean_ctor_get(v___x_1732_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1735_ = v___x_1732_;
v_isShared_1736_ = v_isSharedCheck_1741_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_a_1733_);
lean_dec(v___x_1732_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1741_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___x_1737_; lean_object* v___x_1739_; 
v___x_1737_ = lean_st_ref_get(v___x_1731_);
lean_dec(v___x_1731_);
lean_dec(v___x_1737_);
if (v_isShared_1736_ == 0)
{
v___x_1739_ = v___x_1735_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_a_1733_);
v___x_1739_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
return v___x_1739_;
}
}
}
else
{
lean_dec(v___x_1731_);
return v___x_1732_;
}
}
else
{
lean_object* v_a_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1749_; 
lean_dec_ref(v_x_1639_);
lean_dec(v_goal_1638_);
lean_dec_ref(v_cfg_1637_);
v_a_1742_ = lean_ctor_get(v___x_1715_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1744_ = v___x_1715_;
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_a_1742_);
lean_dec(v___x_1715_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1747_; 
if (v_isShared_1745_ == 0)
{
v___x_1747_ = v___x_1744_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_a_1742_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___boxed(lean_object* v_00_u03b1_1756_, lean_object* v_cfg_1757_, lean_object* v_goal_1758_, lean_object* v_x_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_, lean_object* v_a_1762_, lean_object* v_a_1763_, lean_object* v_a_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_){
_start:
{
lean_object* v_res_1767_; 
v_res_1767_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27(v_00_u03b1_1756_, v_cfg_1757_, v_goal_1758_, v_x_1759_, v_a_1760_, v_a_1761_, v_a_1762_, v_a_1763_, v_a_1764_, v_a_1765_);
lean_dec(v_a_1765_);
lean_dec_ref(v_a_1764_);
lean_dec(v_a_1763_);
lean_dec_ref(v_a_1762_);
lean_dec(v_a_1761_);
lean_dec_ref(v_a_1760_);
return v_res_1767_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__0___redArg(lean_object* v_e_1768_, lean_object* v___y_1769_){
_start:
{
uint8_t v___x_1771_; 
v___x_1771_ = l_Lean_Expr_hasMVar(v_e_1768_);
if (v___x_1771_ == 0)
{
lean_object* v___x_1772_; 
v___x_1772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1772_, 0, v_e_1768_);
return v___x_1772_;
}
else
{
lean_object* v___x_1773_; lean_object* v_mctx_1774_; lean_object* v___x_1775_; lean_object* v_fst_1776_; lean_object* v_snd_1777_; lean_object* v___x_1778_; lean_object* v_cache_1779_; lean_object* v_zetaDeltaFVarIds_1780_; lean_object* v_postponed_1781_; lean_object* v_diag_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1791_; 
v___x_1773_ = lean_st_ref_get(v___y_1769_);
v_mctx_1774_ = lean_ctor_get(v___x_1773_, 0);
lean_inc_ref(v_mctx_1774_);
lean_dec(v___x_1773_);
v___x_1775_ = l_Lean_instantiateMVarsCore(v_mctx_1774_, v_e_1768_);
v_fst_1776_ = lean_ctor_get(v___x_1775_, 0);
lean_inc(v_fst_1776_);
v_snd_1777_ = lean_ctor_get(v___x_1775_, 1);
lean_inc(v_snd_1777_);
lean_dec_ref(v___x_1775_);
v___x_1778_ = lean_st_ref_take(v___y_1769_);
v_cache_1779_ = lean_ctor_get(v___x_1778_, 1);
v_zetaDeltaFVarIds_1780_ = lean_ctor_get(v___x_1778_, 2);
v_postponed_1781_ = lean_ctor_get(v___x_1778_, 3);
v_diag_1782_ = lean_ctor_get(v___x_1778_, 4);
v_isSharedCheck_1791_ = !lean_is_exclusive(v___x_1778_);
if (v_isSharedCheck_1791_ == 0)
{
lean_object* v_unused_1792_; 
v_unused_1792_ = lean_ctor_get(v___x_1778_, 0);
lean_dec(v_unused_1792_);
v___x_1784_ = v___x_1778_;
v_isShared_1785_ = v_isSharedCheck_1791_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_diag_1782_);
lean_inc(v_postponed_1781_);
lean_inc(v_zetaDeltaFVarIds_1780_);
lean_inc(v_cache_1779_);
lean_dec(v___x_1778_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1791_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v___x_1787_; 
if (v_isShared_1785_ == 0)
{
lean_ctor_set(v___x_1784_, 0, v_snd_1777_);
v___x_1787_ = v___x_1784_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1790_; 
v_reuseFailAlloc_1790_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1790_, 0, v_snd_1777_);
lean_ctor_set(v_reuseFailAlloc_1790_, 1, v_cache_1779_);
lean_ctor_set(v_reuseFailAlloc_1790_, 2, v_zetaDeltaFVarIds_1780_);
lean_ctor_set(v_reuseFailAlloc_1790_, 3, v_postponed_1781_);
lean_ctor_set(v_reuseFailAlloc_1790_, 4, v_diag_1782_);
v___x_1787_ = v_reuseFailAlloc_1790_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
lean_object* v___x_1788_; lean_object* v___x_1789_; 
v___x_1788_ = lean_st_ref_set(v___y_1769_, v___x_1787_);
v___x_1789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1789_, 0, v_fst_1776_);
return v___x_1789_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__0___redArg___boxed(lean_object* v_e_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_){
_start:
{
lean_object* v_res_1796_; 
v_res_1796_ = l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__0___redArg(v_e_1793_, v___y_1794_);
lean_dec(v___y_1794_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__0(lean_object* v_e_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_){
_start:
{
lean_object* v___x_1807_; 
v___x_1807_ = l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__0___redArg(v_e_1797_, v___y_1803_);
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__0___boxed(lean_object* v_e_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v_res_1818_; 
v_res_1818_ = l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__0(v_e_1808_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
lean_dec(v___y_1816_);
lean_dec_ref(v___y_1815_);
lean_dec(v___y_1814_);
lean_dec_ref(v___y_1813_);
lean_dec(v___y_1812_);
lean_dec_ref(v___y_1811_);
lean_dec(v___y_1810_);
lean_dec_ref(v___y_1809_);
return v_res_1818_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2___redArg___lam__0(lean_object* v_x_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_){
_start:
{
lean_object* v___x_1829_; 
lean_inc(v___y_1823_);
lean_inc_ref(v___y_1822_);
lean_inc(v___y_1821_);
lean_inc_ref(v___y_1820_);
v___x_1829_ = lean_apply_9(v_x_1819_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_, lean_box(0));
return v___x_1829_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2___redArg___lam__0___boxed(lean_object* v_x_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_){
_start:
{
lean_object* v_res_1840_; 
v_res_1840_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2___redArg___lam__0(v_x_1830_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
lean_dec(v___y_1832_);
lean_dec_ref(v___y_1831_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2___redArg(lean_object* v_mvarId_1841_, lean_object* v_x_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_){
_start:
{
lean_object* v___f_1852_; lean_object* v___x_1853_; 
lean_inc(v___y_1846_);
lean_inc_ref(v___y_1845_);
lean_inc(v___y_1844_);
lean_inc_ref(v___y_1843_);
v___f_1852_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_1852_, 0, v_x_1842_);
lean_closure_set(v___f_1852_, 1, v___y_1843_);
lean_closure_set(v___f_1852_, 2, v___y_1844_);
lean_closure_set(v___f_1852_, 3, v___y_1845_);
lean_closure_set(v___f_1852_, 4, v___y_1846_);
v___x_1853_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1841_, v___f_1852_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_);
if (lean_obj_tag(v___x_1853_) == 0)
{
return v___x_1853_;
}
else
{
lean_object* v_a_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1861_; 
v_a_1854_ = lean_ctor_get(v___x_1853_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1856_ = v___x_1853_;
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_a_1854_);
lean_dec(v___x_1853_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1859_; 
if (v_isShared_1857_ == 0)
{
v___x_1859_ = v___x_1856_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_a_1854_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2___redArg___boxed(lean_object* v_mvarId_1862_, lean_object* v_x_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_){
_start:
{
lean_object* v_res_1873_; 
v_res_1873_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2___redArg(v_mvarId_1862_, v_x_1863_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_);
lean_dec(v___y_1871_);
lean_dec_ref(v___y_1870_);
lean_dec(v___y_1869_);
lean_dec_ref(v___y_1868_);
lean_dec(v___y_1867_);
lean_dec_ref(v___y_1866_);
lean_dec(v___y_1865_);
lean_dec_ref(v___y_1864_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2(lean_object* v_00_u03b1_1874_, lean_object* v_mvarId_1875_, lean_object* v_x_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_){
_start:
{
lean_object* v___x_1886_; 
v___x_1886_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2___redArg(v_mvarId_1875_, v_x_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2___boxed(lean_object* v_00_u03b1_1887_, lean_object* v_mvarId_1888_, lean_object* v_x_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_){
_start:
{
lean_object* v_res_1899_; 
v_res_1899_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2(v_00_u03b1_1887_, v_mvarId_1888_, v_x_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
lean_dec(v___y_1891_);
lean_dec_ref(v___y_1890_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__1(size_t v_sz_1900_, size_t v_i_1901_, lean_object* v_bs_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_){
_start:
{
uint8_t v___x_1912_; 
v___x_1912_ = lean_usize_dec_lt(v_i_1901_, v_sz_1900_);
if (v___x_1912_ == 0)
{
lean_object* v___x_1913_; 
v___x_1913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1913_, 0, v_bs_1902_);
return v___x_1913_;
}
else
{
lean_object* v_v_1914_; lean_object* v___x_1915_; 
v_v_1914_ = lean_array_uget(v_bs_1902_, v_i_1901_);
lean_inc(v_v_1914_);
v___x_1915_ = l_Lean_FVarId_getUserName___redArg(v_v_1914_, v___y_1907_, v___y_1909_, v___y_1910_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1916_; lean_object* v___x_1917_; 
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc(v_a_1916_);
lean_dec_ref_known(v___x_1915_, 1);
lean_inc(v_v_1914_);
v___x_1917_ = l_Lean_FVarId_getType___redArg(v_v_1914_, v___y_1907_, v___y_1909_, v___y_1910_);
if (lean_obj_tag(v___x_1917_) == 0)
{
lean_object* v_a_1918_; lean_object* v___x_1919_; 
v_a_1918_ = lean_ctor_get(v___x_1917_, 0);
lean_inc(v_a_1918_);
lean_dec_ref_known(v___x_1917_, 1);
v___x_1919_ = l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__0___redArg(v_a_1918_, v___y_1908_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v_a_1920_; lean_object* v___x_1921_; lean_object* v_bs_x27_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; size_t v___x_1925_; size_t v___x_1926_; lean_object* v___x_1927_; 
v_a_1920_ = lean_ctor_get(v___x_1919_, 0);
lean_inc(v_a_1920_);
lean_dec_ref_known(v___x_1919_, 1);
v___x_1921_ = lean_unsigned_to_nat(0u);
v_bs_x27_1922_ = lean_array_uset(v_bs_1902_, v_i_1901_, v___x_1921_);
v___x_1923_ = l_Lean_mkFVar(v_v_1914_);
v___x_1924_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1924_, 0, v_a_1916_);
lean_ctor_set(v___x_1924_, 1, v_a_1920_);
lean_ctor_set(v___x_1924_, 2, v___x_1923_);
v___x_1925_ = ((size_t)1ULL);
v___x_1926_ = lean_usize_add(v_i_1901_, v___x_1925_);
v___x_1927_ = lean_array_uset(v_bs_x27_1922_, v_i_1901_, v___x_1924_);
v_i_1901_ = v___x_1926_;
v_bs_1902_ = v___x_1927_;
goto _start;
}
else
{
lean_object* v_a_1929_; lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1936_; 
lean_dec(v_a_1916_);
lean_dec(v_v_1914_);
lean_dec_ref(v_bs_1902_);
v_a_1929_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1931_ = v___x_1919_;
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
else
{
lean_inc(v_a_1929_);
lean_dec(v___x_1919_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
lean_object* v___x_1934_; 
if (v_isShared_1932_ == 0)
{
v___x_1934_ = v___x_1931_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v_a_1929_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
}
}
}
}
else
{
lean_object* v_a_1937_; lean_object* v___x_1939_; uint8_t v_isShared_1940_; uint8_t v_isSharedCheck_1944_; 
lean_dec(v_a_1916_);
lean_dec(v_v_1914_);
lean_dec_ref(v_bs_1902_);
v_a_1937_ = lean_ctor_get(v___x_1917_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1939_ = v___x_1917_;
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
else
{
lean_inc(v_a_1937_);
lean_dec(v___x_1917_);
v___x_1939_ = lean_box(0);
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
v_resetjp_1938_:
{
lean_object* v___x_1942_; 
if (v_isShared_1940_ == 0)
{
v___x_1942_ = v___x_1939_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v_a_1937_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
}
else
{
lean_object* v_a_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1952_; 
lean_dec(v_v_1914_);
lean_dec_ref(v_bs_1902_);
v_a_1945_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1952_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1947_ = v___x_1915_;
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_a_1945_);
lean_dec(v___x_1915_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1950_; 
if (v_isShared_1948_ == 0)
{
v___x_1950_ = v___x_1947_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_a_1945_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
return v___x_1950_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__1___boxed(lean_object* v_sz_1953_, lean_object* v_i_1954_, lean_object* v_bs_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_){
_start:
{
size_t v_sz_boxed_1965_; size_t v_i_boxed_1966_; lean_object* v_res_1967_; 
v_sz_boxed_1965_ = lean_unbox_usize(v_sz_1953_);
lean_dec(v_sz_1953_);
v_i_boxed_1966_ = lean_unbox_usize(v_i_1954_);
lean_dec(v_i_1954_);
v_res_1967_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__1(v_sz_boxed_1965_, v_i_boxed_1966_, v_bs_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
lean_dec(v___y_1957_);
lean_dec_ref(v___y_1956_);
return v_res_1967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal___lam__0(lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_){
_start:
{
lean_object* v___x_1977_; 
v___x_1977_ = l_Lean_Meta_getPropHyps(v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_);
if (lean_obj_tag(v___x_1977_) == 0)
{
lean_object* v_a_1978_; size_t v_sz_1979_; size_t v___x_1980_; lean_object* v___x_1981_; 
v_a_1978_ = lean_ctor_get(v___x_1977_, 0);
lean_inc(v_a_1978_);
lean_dec_ref_known(v___x_1977_, 1);
v_sz_1979_ = lean_array_size(v_a_1978_);
v___x_1980_ = ((size_t)0ULL);
v___x_1981_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__1(v_sz_1979_, v___x_1980_, v_a_1978_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_);
if (lean_obj_tag(v___x_1981_) == 0)
{
lean_object* v_a_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_2005_; 
v_a_1982_ = lean_ctor_get(v___x_1981_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1981_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_1984_ = v___x_1981_;
v_isShared_1985_ = v_isSharedCheck_2005_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_a_1982_);
lean_dec(v___x_1981_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_2005_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1986_; lean_object* v_rewriteCache_1987_; lean_object* v_acNfCache_1988_; lean_object* v_typeAnalysis_1989_; lean_object* v_goal_1990_; uint8_t v_didChange_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_2003_; 
v___x_1986_ = lean_st_ref_take(v___y_1969_);
v_rewriteCache_1987_ = lean_ctor_get(v___x_1986_, 0);
v_acNfCache_1988_ = lean_ctor_get(v___x_1986_, 1);
v_typeAnalysis_1989_ = lean_ctor_get(v___x_1986_, 2);
v_goal_1990_ = lean_ctor_get(v___x_1986_, 3);
v_didChange_1991_ = lean_ctor_get_uint8(v___x_1986_, sizeof(void*)*5);
v_isSharedCheck_2003_ = !lean_is_exclusive(v___x_1986_);
if (v_isSharedCheck_2003_ == 0)
{
lean_object* v_unused_2004_; 
v_unused_2004_ = lean_ctor_get(v___x_1986_, 4);
lean_dec(v_unused_2004_);
v___x_1993_ = v___x_1986_;
v_isShared_1994_ = v_isSharedCheck_2003_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_goal_1990_);
lean_inc(v_typeAnalysis_1989_);
lean_inc(v_acNfCache_1988_);
lean_inc(v_rewriteCache_1987_);
lean_dec(v___x_1986_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_2003_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1996_; 
if (v_isShared_1994_ == 0)
{
lean_ctor_set(v___x_1993_, 4, v_a_1982_);
v___x_1996_ = v___x_1993_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v_rewriteCache_1987_);
lean_ctor_set(v_reuseFailAlloc_2002_, 1, v_acNfCache_1988_);
lean_ctor_set(v_reuseFailAlloc_2002_, 2, v_typeAnalysis_1989_);
lean_ctor_set(v_reuseFailAlloc_2002_, 3, v_goal_1990_);
lean_ctor_set(v_reuseFailAlloc_2002_, 4, v_a_1982_);
lean_ctor_set_uint8(v_reuseFailAlloc_2002_, sizeof(void*)*5, v_didChange_1991_);
v___x_1996_ = v_reuseFailAlloc_2002_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_2000_; 
v___x_1997_ = lean_st_ref_set(v___y_1969_, v___x_1996_);
v___x_1998_ = lean_box(0);
if (v_isShared_1985_ == 0)
{
lean_ctor_set(v___x_1984_, 0, v___x_1998_);
v___x_2000_ = v___x_1984_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v___x_1998_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
}
}
}
else
{
lean_object* v_a_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2013_; 
v_a_2006_ = lean_ctor_get(v___x_1981_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_1981_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2008_ = v___x_1981_;
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_a_2006_);
lean_dec(v___x_1981_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2011_; 
if (v_isShared_2009_ == 0)
{
v___x_2011_ = v___x_2008_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_a_2006_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
}
else
{
lean_object* v_a_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2021_; 
v_a_2014_ = lean_ctor_get(v___x_1977_, 0);
v_isSharedCheck_2021_ = !lean_is_exclusive(v___x_1977_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_2016_ = v___x_1977_;
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_a_2014_);
lean_dec(v___x_1977_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2019_; 
if (v_isShared_2017_ == 0)
{
v___x_2019_ = v___x_2016_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v_a_2014_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal___lam__0___boxed(lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_){
_start:
{
lean_object* v_res_2031_; 
v_res_2031_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal___lam__0(v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_);
lean_dec(v___y_2029_);
lean_dec_ref(v___y_2028_);
lean_dec(v___y_2027_);
lean_dec_ref(v___y_2026_);
lean_dec(v___y_2025_);
lean_dec_ref(v___y_2024_);
lean_dec(v___y_2023_);
lean_dec_ref(v___y_2022_);
return v_res_2031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal(lean_object* v_a_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_, lean_object* v_a_2037_, lean_object* v_a_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_){
_start:
{
lean_object* v___x_2042_; lean_object* v_rewriteCache_2043_; lean_object* v_acNfCache_2044_; lean_object* v_typeAnalysis_2045_; lean_object* v_goal_2046_; lean_object* v_hypotheses_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2060_; 
v___x_2042_ = lean_st_ref_take(v_a_2034_);
v_rewriteCache_2043_ = lean_ctor_get(v___x_2042_, 0);
v_acNfCache_2044_ = lean_ctor_get(v___x_2042_, 1);
v_typeAnalysis_2045_ = lean_ctor_get(v___x_2042_, 2);
v_goal_2046_ = lean_ctor_get(v___x_2042_, 3);
v_hypotheses_2047_ = lean_ctor_get(v___x_2042_, 4);
v_isSharedCheck_2060_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2049_ = v___x_2042_;
v_isShared_2050_ = v_isSharedCheck_2060_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_hypotheses_2047_);
lean_inc(v_goal_2046_);
lean_inc(v_typeAnalysis_2045_);
lean_inc(v_acNfCache_2044_);
lean_inc(v_rewriteCache_2043_);
lean_dec(v___x_2042_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2060_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
uint8_t v___x_2051_; lean_object* v___x_2053_; 
v___x_2051_ = 1;
if (v_isShared_2050_ == 0)
{
v___x_2053_ = v___x_2049_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_rewriteCache_2043_);
lean_ctor_set(v_reuseFailAlloc_2059_, 1, v_acNfCache_2044_);
lean_ctor_set(v_reuseFailAlloc_2059_, 2, v_typeAnalysis_2045_);
lean_ctor_set(v_reuseFailAlloc_2059_, 3, v_goal_2046_);
lean_ctor_set(v_reuseFailAlloc_2059_, 4, v_hypotheses_2047_);
v___x_2053_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v_goal_2056_; lean_object* v___f_2057_; lean_object* v___x_2058_; 
lean_ctor_set_uint8(v___x_2053_, sizeof(void*)*5, v___x_2051_);
v___x_2054_ = lean_st_ref_set(v_a_2034_, v___x_2053_);
v___x_2055_ = lean_st_ref_get(v_a_2034_);
v_goal_2056_ = lean_ctor_get(v___x_2055_, 3);
lean_inc(v_goal_2056_);
lean_dec(v___x_2055_);
v___f_2057_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal___closed__0));
v___x_2058_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal_spec__2___redArg(v_goal_2056_, v___f_2057_, v_a_2033_, v_a_2034_, v_a_2035_, v_a_2036_, v_a_2037_, v_a_2038_, v_a_2039_, v_a_2040_);
return v___x_2058_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal___boxed(lean_object* v_a_2061_, lean_object* v_a_2062_, lean_object* v_a_2063_, lean_object* v_a_2064_, lean_object* v_a_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_){
_start:
{
lean_object* v_res_2070_; 
v_res_2070_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectHypsFromGoal(v_a_2061_, v_a_2062_, v_a_2063_, v_a_2064_, v_a_2065_, v_a_2066_, v_a_2067_, v_a_2068_);
lean_dec(v_a_2068_);
lean_dec_ref(v_a_2067_);
lean_dec(v_a_2066_);
lean_dec_ref(v_a_2065_);
lean_dec(v_a_2064_);
lean_dec_ref(v_a_2063_);
lean_dec(v_a_2062_);
lean_dec_ref(v_a_2061_);
return v_res_2070_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2(void){
_start:
{
lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2073_ = l_Lean_Core_instMonadTraceCoreM;
v___x_2074_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2075_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_2074_, v___x_2073_);
return v___x_2075_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3(void){
_start:
{
lean_object* v___x_2076_; lean_object* v___f_2077_; lean_object* v___x_2078_; 
v___x_2076_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2);
v___f_2077_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2078_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2077_, v___x_2076_);
return v___x_2078_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4(void){
_start:
{
lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
v___x_2079_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3);
v___x_2080_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2081_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_2080_, v___x_2079_);
return v___x_2081_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5(void){
_start:
{
lean_object* v___x_2082_; lean_object* v___f_2083_; lean_object* v___x_2084_; 
v___x_2082_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4);
v___f_2083_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2084_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2083_, v___x_2082_);
return v___x_2084_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6(void){
_start:
{
lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; 
v___x_2085_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5);
v___x_2086_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2087_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_2086_, v___x_2085_);
return v___x_2087_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7(void){
_start:
{
lean_object* v___x_2088_; lean_object* v___f_2089_; lean_object* v___x_2090_; 
v___x_2088_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6);
v___f_2089_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2090_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2089_, v___x_2088_);
return v___x_2090_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14(void){
_start:
{
lean_object* v_cls_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; 
v_cls_2101_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2102_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13));
v___x_2103_ = l_Lean_Name_append(v___x_2102_, v_cls_2101_);
return v___x_2103_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17(void){
_start:
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
v___x_2106_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_2107_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2108_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16));
v___x_2109_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_2108_, v___x_2107_, v___x_2106_);
return v___x_2109_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18(void){
_start:
{
lean_object* v___x_2110_; lean_object* v___f_2111_; lean_object* v___f_2112_; lean_object* v___x_2113_; 
v___x_2110_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17);
v___f_2111_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2112_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15));
v___x_2113_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2112_, v___f_2111_, v___x_2110_);
return v___x_2113_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19(void){
_start:
{
lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___x_2114_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18);
v___x_2115_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2116_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16));
v___x_2117_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_2116_, v___x_2115_, v___x_2114_);
return v___x_2117_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20(void){
_start:
{
lean_object* v___x_2118_; lean_object* v___f_2119_; lean_object* v___f_2120_; lean_object* v___x_2121_; 
v___x_2118_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19);
v___f_2119_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2120_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15));
v___x_2121_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2120_, v___f_2119_, v___x_2118_);
return v___x_2121_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21(void){
_start:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; 
v___x_2122_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20);
v___x_2123_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2124_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16));
v___x_2125_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_2124_, v___x_2123_, v___x_2122_);
return v___x_2125_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22(void){
_start:
{
lean_object* v___x_2126_; lean_object* v___f_2127_; lean_object* v___f_2128_; lean_object* v___x_2129_; 
v___x_2126_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21);
v___f_2127_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2128_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15));
v___x_2129_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2128_, v___f_2127_, v___x_2126_);
return v___x_2129_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23(void){
_start:
{
lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___f_2132_; 
v___x_2130_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2131_ = l_Lean_Meta_instAddMessageContextMetaM;
v___f_2132_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2132_, 0, v___x_2131_);
lean_closure_set(v___f_2132_, 1, v___x_2130_);
return v___f_2132_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24(void){
_start:
{
lean_object* v___f_2133_; lean_object* v___f_2134_; lean_object* v___f_2135_; 
v___f_2133_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2134_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23);
v___f_2135_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2135_, 0, v___f_2134_);
lean_closure_set(v___f_2135_, 1, v___f_2133_);
return v___f_2135_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25(void){
_start:
{
lean_object* v___x_2136_; lean_object* v___f_2137_; lean_object* v___f_2138_; 
v___x_2136_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___f_2137_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24);
v___f_2138_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2138_, 0, v___f_2137_);
lean_closure_set(v___f_2138_, 1, v___x_2136_);
return v___f_2138_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26(void){
_start:
{
lean_object* v___f_2139_; lean_object* v___f_2140_; lean_object* v___f_2141_; 
v___f_2139_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2140_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25);
v___f_2141_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2141_, 0, v___f_2140_);
lean_closure_set(v___f_2141_, 1, v___f_2139_);
return v___f_2141_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28(void){
_start:
{
lean_object* v___x_2143_; lean_object* v___x_2144_; 
v___x_2143_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27));
v___x_2144_ = l_Lean_stringToMessageData(v___x_2143_);
return v___x_2144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp(lean_object* v_hyp_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_, lean_object* v_a_2149_, lean_object* v_a_2150_, lean_object* v_a_2151_, lean_object* v_a_2152_, lean_object* v_a_2153_){
_start:
{
lean_object* v___y_2156_; lean_object* v___x_2175_; lean_object* v_toApplicative_2176_; lean_object* v_toFunctor_2177_; lean_object* v_toSeq_2178_; lean_object* v_toSeqLeft_2179_; lean_object* v_toSeqRight_2180_; lean_object* v___f_2181_; lean_object* v___f_2182_; lean_object* v___f_2183_; lean_object* v___f_2184_; lean_object* v___x_2185_; lean_object* v___f_2186_; lean_object* v___f_2187_; lean_object* v___f_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v_toApplicative_2192_; lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2239_; 
v___x_2175_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1);
v_toApplicative_2176_ = lean_ctor_get(v___x_2175_, 0);
v_toFunctor_2177_ = lean_ctor_get(v_toApplicative_2176_, 0);
v_toSeq_2178_ = lean_ctor_get(v_toApplicative_2176_, 2);
v_toSeqLeft_2179_ = lean_ctor_get(v_toApplicative_2176_, 3);
v_toSeqRight_2180_ = lean_ctor_get(v_toApplicative_2176_, 4);
v___f_2181_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2));
v___f_2182_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_2177_, 2);
v___f_2183_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2183_, 0, v_toFunctor_2177_);
v___f_2184_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2184_, 0, v_toFunctor_2177_);
v___x_2185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2185_, 0, v___f_2183_);
lean_ctor_set(v___x_2185_, 1, v___f_2184_);
lean_inc(v_toSeqRight_2180_);
v___f_2186_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2186_, 0, v_toSeqRight_2180_);
lean_inc(v_toSeqLeft_2179_);
v___f_2187_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2187_, 0, v_toSeqLeft_2179_);
lean_inc(v_toSeq_2178_);
v___f_2188_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2188_, 0, v_toSeq_2178_);
v___x_2189_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2189_, 0, v___x_2185_);
lean_ctor_set(v___x_2189_, 1, v___f_2181_);
lean_ctor_set(v___x_2189_, 2, v___f_2188_);
lean_ctor_set(v___x_2189_, 3, v___f_2187_);
lean_ctor_set(v___x_2189_, 4, v___f_2186_);
v___x_2190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2190_, 0, v___x_2189_);
lean_ctor_set(v___x_2190_, 1, v___f_2182_);
v___x_2191_ = l_StateRefT_x27_instMonad___redArg(v___x_2190_);
v_toApplicative_2192_ = lean_ctor_get(v___x_2191_, 0);
v_isSharedCheck_2239_ = !lean_is_exclusive(v___x_2191_);
if (v_isSharedCheck_2239_ == 0)
{
lean_object* v_unused_2240_; 
v_unused_2240_ = lean_ctor_get(v___x_2191_, 1);
lean_dec(v_unused_2240_);
v___x_2194_ = v___x_2191_;
v_isShared_2195_ = v_isSharedCheck_2239_;
goto v_resetjp_2193_;
}
else
{
lean_inc(v_toApplicative_2192_);
lean_dec(v___x_2191_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2239_;
goto v_resetjp_2193_;
}
v___jp_2155_:
{
lean_object* v___x_2157_; lean_object* v_rewriteCache_2158_; lean_object* v_acNfCache_2159_; lean_object* v_typeAnalysis_2160_; lean_object* v_goal_2161_; lean_object* v_hypotheses_2162_; uint8_t v_didChange_2163_; lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2174_; 
v___x_2157_ = lean_st_ref_take(v___y_2156_);
v_rewriteCache_2158_ = lean_ctor_get(v___x_2157_, 0);
v_acNfCache_2159_ = lean_ctor_get(v___x_2157_, 1);
v_typeAnalysis_2160_ = lean_ctor_get(v___x_2157_, 2);
v_goal_2161_ = lean_ctor_get(v___x_2157_, 3);
v_hypotheses_2162_ = lean_ctor_get(v___x_2157_, 4);
v_didChange_2163_ = lean_ctor_get_uint8(v___x_2157_, sizeof(void*)*5);
v_isSharedCheck_2174_ = !lean_is_exclusive(v___x_2157_);
if (v_isSharedCheck_2174_ == 0)
{
v___x_2165_ = v___x_2157_;
v_isShared_2166_ = v_isSharedCheck_2174_;
goto v_resetjp_2164_;
}
else
{
lean_inc(v_hypotheses_2162_);
lean_inc(v_goal_2161_);
lean_inc(v_typeAnalysis_2160_);
lean_inc(v_acNfCache_2159_);
lean_inc(v_rewriteCache_2158_);
lean_dec(v___x_2157_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2174_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
lean_object* v___x_2167_; lean_object* v___x_2169_; 
v___x_2167_ = lean_array_push(v_hypotheses_2162_, v_hyp_2145_);
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 4, v___x_2167_);
v___x_2169_ = v___x_2165_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v_rewriteCache_2158_);
lean_ctor_set(v_reuseFailAlloc_2173_, 1, v_acNfCache_2159_);
lean_ctor_set(v_reuseFailAlloc_2173_, 2, v_typeAnalysis_2160_);
lean_ctor_set(v_reuseFailAlloc_2173_, 3, v_goal_2161_);
lean_ctor_set(v_reuseFailAlloc_2173_, 4, v___x_2167_);
lean_ctor_set_uint8(v_reuseFailAlloc_2173_, sizeof(void*)*5, v_didChange_2163_);
v___x_2169_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___x_2170_ = lean_st_ref_set(v___y_2156_, v___x_2169_);
v___x_2171_ = lean_box(0);
v___x_2172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2172_, 0, v___x_2171_);
return v___x_2172_;
}
}
}
v_resetjp_2193_:
{
lean_object* v_toFunctor_2196_; lean_object* v_toSeq_2197_; lean_object* v_toSeqLeft_2198_; lean_object* v_toSeqRight_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2237_; 
v_toFunctor_2196_ = lean_ctor_get(v_toApplicative_2192_, 0);
v_toSeq_2197_ = lean_ctor_get(v_toApplicative_2192_, 2);
v_toSeqLeft_2198_ = lean_ctor_get(v_toApplicative_2192_, 3);
v_toSeqRight_2199_ = lean_ctor_get(v_toApplicative_2192_, 4);
v_isSharedCheck_2237_ = !lean_is_exclusive(v_toApplicative_2192_);
if (v_isSharedCheck_2237_ == 0)
{
lean_object* v_unused_2238_; 
v_unused_2238_ = lean_ctor_get(v_toApplicative_2192_, 1);
lean_dec(v_unused_2238_);
v___x_2201_ = v_toApplicative_2192_;
v_isShared_2202_ = v_isSharedCheck_2237_;
goto v_resetjp_2200_;
}
else
{
lean_inc(v_toSeqRight_2199_);
lean_inc(v_toSeqLeft_2198_);
lean_inc(v_toSeq_2197_);
lean_inc(v_toFunctor_2196_);
lean_dec(v_toApplicative_2192_);
v___x_2201_ = lean_box(0);
v_isShared_2202_ = v_isSharedCheck_2237_;
goto v_resetjp_2200_;
}
v_resetjp_2200_:
{
lean_object* v___f_2203_; lean_object* v___f_2204_; lean_object* v___f_2205_; lean_object* v___f_2206_; lean_object* v___x_2207_; lean_object* v___f_2208_; lean_object* v___f_2209_; lean_object* v___f_2210_; lean_object* v___x_2212_; 
v___f_2203_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__4));
v___f_2204_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__5));
lean_inc_ref(v_toFunctor_2196_);
v___f_2205_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2205_, 0, v_toFunctor_2196_);
v___f_2206_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2206_, 0, v_toFunctor_2196_);
v___x_2207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2207_, 0, v___f_2205_);
lean_ctor_set(v___x_2207_, 1, v___f_2206_);
v___f_2208_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2208_, 0, v_toSeqRight_2199_);
v___f_2209_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2209_, 0, v_toSeqLeft_2198_);
v___f_2210_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2210_, 0, v_toSeq_2197_);
if (v_isShared_2202_ == 0)
{
lean_ctor_set(v___x_2201_, 4, v___f_2208_);
lean_ctor_set(v___x_2201_, 3, v___f_2209_);
lean_ctor_set(v___x_2201_, 2, v___f_2210_);
lean_ctor_set(v___x_2201_, 1, v___f_2203_);
lean_ctor_set(v___x_2201_, 0, v___x_2207_);
v___x_2212_ = v___x_2201_;
goto v_reusejp_2211_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v___x_2207_);
lean_ctor_set(v_reuseFailAlloc_2236_, 1, v___f_2203_);
lean_ctor_set(v_reuseFailAlloc_2236_, 2, v___f_2210_);
lean_ctor_set(v_reuseFailAlloc_2236_, 3, v___f_2209_);
lean_ctor_set(v_reuseFailAlloc_2236_, 4, v___f_2208_);
v___x_2212_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2211_;
}
v_reusejp_2211_:
{
lean_object* v___x_2214_; 
if (v_isShared_2195_ == 0)
{
lean_ctor_set(v___x_2194_, 1, v___f_2204_);
lean_ctor_set(v___x_2194_, 0, v___x_2212_);
v___x_2214_ = v___x_2194_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v___x_2212_);
lean_ctor_set(v_reuseFailAlloc_2235_, 1, v___f_2204_);
v___x_2214_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v_options_2220_; uint8_t v_hasTrace_2221_; 
v___x_2215_ = l_StateRefT_x27_instMonad___redArg(v___x_2214_);
v___x_2216_ = l_ReaderT_instMonad___redArg(v___x_2215_);
v___x_2217_ = l_StateRefT_x27_instMonad___redArg(v___x_2216_);
v___x_2218_ = l_ReaderT_instMonad___redArg(v___x_2217_);
v___x_2219_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7);
v_options_2220_ = lean_ctor_get(v_a_2152_, 2);
v_hasTrace_2221_ = lean_ctor_get_uint8(v_options_2220_, sizeof(void*)*1);
if (v_hasTrace_2221_ == 0)
{
lean_dec_ref(v___x_2218_);
v___y_2156_ = v_a_2147_;
goto v___jp_2155_;
}
else
{
lean_object* v_inheritedTraceOptions_2222_; lean_object* v_cls_2223_; lean_object* v___x_2224_; uint8_t v___x_2225_; 
v_inheritedTraceOptions_2222_ = lean_ctor_get(v_a_2152_, 13);
v_cls_2223_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2224_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14);
v___x_2225_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2222_, v_options_2220_, v___x_2224_);
if (v___x_2225_ == 0)
{
lean_dec_ref(v___x_2218_);
v___y_2156_ = v_a_2147_;
goto v___jp_2155_;
}
else
{
lean_object* v___x_2226_; lean_object* v_toMonadRef_2227_; lean_object* v_type_2228_; lean_object* v___f_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_3835__overap_2233_; lean_object* v___x_2234_; 
v___x_2226_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22);
v_toMonadRef_2227_ = lean_ctor_get(v___x_2226_, 0);
v_type_2228_ = lean_ctor_get(v_hyp_2145_, 1);
v___f_2229_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26);
v___x_2230_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
lean_inc_ref(v_type_2228_);
v___x_2231_ = l_Lean_MessageData_ofExpr(v_type_2228_);
v___x_2232_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2232_, 0, v___x_2230_);
lean_ctor_set(v___x_2232_, 1, v___x_2231_);
lean_inc_ref(v_toMonadRef_2227_);
v___x_3835__overap_2233_ = l_Lean_addTrace___redArg(v___x_2218_, v___x_2219_, v_toMonadRef_2227_, v___f_2229_, v_cls_2223_, v___x_2232_);
lean_inc(v_a_2153_);
lean_inc_ref(v_a_2152_);
lean_inc(v_a_2151_);
lean_inc_ref(v_a_2150_);
lean_inc(v_a_2149_);
lean_inc_ref(v_a_2148_);
lean_inc(v_a_2147_);
lean_inc_ref(v_a_2146_);
v___x_2234_ = lean_apply_9(v___x_3835__overap_2233_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_, v_a_2152_, v_a_2153_, lean_box(0));
if (lean_obj_tag(v___x_2234_) == 0)
{
lean_dec_ref_known(v___x_2234_, 1);
v___y_2156_ = v_a_2147_;
goto v___jp_2155_;
}
else
{
lean_dec_ref(v_hyp_2145_);
return v___x_2234_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___boxed(lean_object* v_hyp_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_, lean_object* v_a_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_){
_start:
{
lean_object* v_res_2251_; 
v_res_2251_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp(v_hyp_2241_, v_a_2242_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_, v_a_2247_, v_a_2248_, v_a_2249_);
lean_dec(v_a_2249_);
lean_dec_ref(v_a_2248_);
lean_dec(v_a_2247_);
lean_dec_ref(v_a_2246_);
lean_dec(v_a_2245_);
lean_dec_ref(v_a_2244_);
lean_dec(v_a_2243_);
lean_dec_ref(v_a_2242_);
return v_res_2251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0(lean_object* v___x_2252_, lean_object* v___f_2253_, lean_object* v___x_2254_, lean_object* v___f_2255_, lean_object* v___x_2256_, lean_object* v___f_2257_, lean_object* v___x_2258_, lean_object* v___x_2259_, lean_object* v_x_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_){
_start:
{
lean_object* v_options_2274_; uint8_t v_hasTrace_2275_; 
v_options_2274_ = lean_ctor_get(v___y_2268_, 2);
v_hasTrace_2275_ = lean_ctor_get_uint8(v_options_2274_, sizeof(void*)*1);
if (v_hasTrace_2275_ == 0)
{
lean_dec_ref(v___y_2261_);
lean_dec_ref(v___x_2259_);
lean_dec_ref(v___x_2258_);
lean_dec(v___f_2257_);
lean_dec(v___x_2256_);
lean_dec(v___f_2255_);
lean_dec(v___x_2254_);
lean_dec(v___f_2253_);
lean_dec(v___x_2252_);
goto v___jp_2271_;
}
else
{
lean_object* v_inheritedTraceOptions_2276_; lean_object* v_cls_2277_; lean_object* v___x_2278_; uint8_t v___x_2279_; 
v_inheritedTraceOptions_2276_ = lean_ctor_get(v___y_2268_, 13);
v_cls_2277_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2278_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14);
v___x_2279_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2276_, v_options_2274_, v___x_2278_);
if (v___x_2279_ == 0)
{
lean_dec_ref(v___y_2261_);
lean_dec_ref(v___x_2259_);
lean_dec_ref(v___x_2258_);
lean_dec(v___f_2257_);
lean_dec(v___x_2256_);
lean_dec(v___f_2255_);
lean_dec(v___x_2254_);
lean_dec(v___f_2253_);
lean_dec(v___x_2252_);
goto v___jp_2271_;
}
else
{
lean_object* v___f_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v_toMonadRef_2289_; lean_object* v_type_2290_; lean_object* v___x_2291_; lean_object* v___f_2292_; lean_object* v___f_2293_; lean_object* v___f_2294_; lean_object* v___f_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_4604__overap_2299_; lean_object* v___x_2300_; 
v___f_2280_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15));
v___x_2281_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16));
v___x_2282_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_2283_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_2281_, v___x_2252_, v___x_2282_);
v___x_2284_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2280_, v___f_2253_, v___x_2283_);
lean_inc(v___x_2254_);
v___x_2285_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_2281_, v___x_2254_, v___x_2284_);
lean_inc(v___f_2255_);
v___x_2286_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2280_, v___f_2255_, v___x_2285_);
lean_inc(v___x_2256_);
v___x_2287_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_2281_, v___x_2256_, v___x_2286_);
lean_inc(v___f_2257_);
v___x_2288_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2280_, v___f_2257_, v___x_2287_);
v_toMonadRef_2289_ = lean_ctor_get(v___x_2288_, 0);
lean_inc_ref(v_toMonadRef_2289_);
lean_dec_ref(v___x_2288_);
v_type_2290_ = lean_ctor_get(v___y_2261_, 1);
lean_inc_ref(v_type_2290_);
lean_dec_ref(v___y_2261_);
v___x_2291_ = l_Lean_Meta_instAddMessageContextMetaM;
v___f_2292_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2292_, 0, v___x_2291_);
lean_closure_set(v___f_2292_, 1, v___x_2254_);
v___f_2293_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2293_, 0, v___f_2292_);
lean_closure_set(v___f_2293_, 1, v___f_2255_);
v___f_2294_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2294_, 0, v___f_2293_);
lean_closure_set(v___f_2294_, 1, v___x_2256_);
v___f_2295_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2295_, 0, v___f_2294_);
lean_closure_set(v___f_2295_, 1, v___f_2257_);
v___x_2296_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_2297_ = l_Lean_MessageData_ofExpr(v_type_2290_);
v___x_2298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2296_);
lean_ctor_set(v___x_2298_, 1, v___x_2297_);
v___x_4604__overap_2299_ = l_Lean_addTrace___redArg(v___x_2258_, v___x_2259_, v_toMonadRef_2289_, v___f_2295_, v_cls_2277_, v___x_2298_);
lean_inc(v___y_2269_);
lean_inc_ref(v___y_2268_);
lean_inc(v___y_2267_);
lean_inc_ref(v___y_2266_);
lean_inc(v___y_2265_);
lean_inc_ref(v___y_2264_);
lean_inc(v___y_2263_);
lean_inc_ref(v___y_2262_);
v___x_2300_ = lean_apply_9(v___x_4604__overap_2299_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_, lean_box(0));
return v___x_2300_;
}
}
v___jp_2271_:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2272_ = lean_box(0);
v___x_2273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2273_, 0, v___x_2272_);
return v___x_2273_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0___boxed(lean_object** _args){
lean_object* v___x_2301_ = _args[0];
lean_object* v___f_2302_ = _args[1];
lean_object* v___x_2303_ = _args[2];
lean_object* v___f_2304_ = _args[3];
lean_object* v___x_2305_ = _args[4];
lean_object* v___f_2306_ = _args[5];
lean_object* v___x_2307_ = _args[6];
lean_object* v___x_2308_ = _args[7];
lean_object* v_x_2309_ = _args[8];
lean_object* v___y_2310_ = _args[9];
lean_object* v___y_2311_ = _args[10];
lean_object* v___y_2312_ = _args[11];
lean_object* v___y_2313_ = _args[12];
lean_object* v___y_2314_ = _args[13];
lean_object* v___y_2315_ = _args[14];
lean_object* v___y_2316_ = _args[15];
lean_object* v___y_2317_ = _args[16];
lean_object* v___y_2318_ = _args[17];
lean_object* v___y_2319_ = _args[18];
_start:
{
lean_object* v_res_2320_; 
v_res_2320_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0(v___x_2301_, v___f_2302_, v___x_2303_, v___f_2304_, v___x_2305_, v___f_2306_, v___x_2307_, v___x_2308_, v_x_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_);
lean_dec(v___y_2318_);
lean_dec_ref(v___y_2317_);
lean_dec(v___y_2316_);
lean_dec_ref(v___y_2315_);
lean_dec(v___y_2314_);
lean_dec_ref(v___y_2313_);
lean_dec(v___y_2312_);
lean_dec_ref(v___y_2311_);
return v_res_2320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps(lean_object* v_hyps_2321_, lean_object* v_a_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_){
_start:
{
lean_object* v___y_2351_; lean_object* v___x_2352_; lean_object* v_toApplicative_2353_; lean_object* v_toFunctor_2354_; lean_object* v_toSeq_2355_; lean_object* v_toSeqLeft_2356_; lean_object* v_toSeqRight_2357_; lean_object* v___f_2358_; lean_object* v___f_2359_; lean_object* v___f_2360_; lean_object* v___f_2361_; lean_object* v___x_2362_; lean_object* v___f_2363_; lean_object* v___f_2364_; lean_object* v___f_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v_toApplicative_2369_; lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2417_; 
v___x_2352_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1);
v_toApplicative_2353_ = lean_ctor_get(v___x_2352_, 0);
v_toFunctor_2354_ = lean_ctor_get(v_toApplicative_2353_, 0);
v_toSeq_2355_ = lean_ctor_get(v_toApplicative_2353_, 2);
v_toSeqLeft_2356_ = lean_ctor_get(v_toApplicative_2353_, 3);
v_toSeqRight_2357_ = lean_ctor_get(v_toApplicative_2353_, 4);
v___f_2358_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2));
v___f_2359_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_2354_, 2);
v___f_2360_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2360_, 0, v_toFunctor_2354_);
v___f_2361_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2361_, 0, v_toFunctor_2354_);
v___x_2362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2362_, 0, v___f_2360_);
lean_ctor_set(v___x_2362_, 1, v___f_2361_);
lean_inc(v_toSeqRight_2357_);
v___f_2363_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2363_, 0, v_toSeqRight_2357_);
lean_inc(v_toSeqLeft_2356_);
v___f_2364_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2364_, 0, v_toSeqLeft_2356_);
lean_inc(v_toSeq_2355_);
v___f_2365_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2365_, 0, v_toSeq_2355_);
v___x_2366_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2366_, 0, v___x_2362_);
lean_ctor_set(v___x_2366_, 1, v___f_2358_);
lean_ctor_set(v___x_2366_, 2, v___f_2365_);
lean_ctor_set(v___x_2366_, 3, v___f_2364_);
lean_ctor_set(v___x_2366_, 4, v___f_2363_);
v___x_2367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2366_);
lean_ctor_set(v___x_2367_, 1, v___f_2359_);
v___x_2368_ = l_StateRefT_x27_instMonad___redArg(v___x_2367_);
v_toApplicative_2369_ = lean_ctor_get(v___x_2368_, 0);
v_isSharedCheck_2417_ = !lean_is_exclusive(v___x_2368_);
if (v_isSharedCheck_2417_ == 0)
{
lean_object* v_unused_2418_; 
v_unused_2418_ = lean_ctor_get(v___x_2368_, 1);
lean_dec(v_unused_2418_);
v___x_2371_ = v___x_2368_;
v_isShared_2372_ = v_isSharedCheck_2417_;
goto v_resetjp_2370_;
}
else
{
lean_inc(v_toApplicative_2369_);
lean_dec(v___x_2368_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2417_;
goto v_resetjp_2370_;
}
v___jp_2331_:
{
lean_object* v___x_2332_; lean_object* v_rewriteCache_2333_; lean_object* v_acNfCache_2334_; lean_object* v_typeAnalysis_2335_; lean_object* v_goal_2336_; lean_object* v_hypotheses_2337_; uint8_t v_didChange_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2349_; 
v___x_2332_ = lean_st_ref_take(v_a_2323_);
v_rewriteCache_2333_ = lean_ctor_get(v___x_2332_, 0);
v_acNfCache_2334_ = lean_ctor_get(v___x_2332_, 1);
v_typeAnalysis_2335_ = lean_ctor_get(v___x_2332_, 2);
v_goal_2336_ = lean_ctor_get(v___x_2332_, 3);
v_hypotheses_2337_ = lean_ctor_get(v___x_2332_, 4);
v_didChange_2338_ = lean_ctor_get_uint8(v___x_2332_, sizeof(void*)*5);
v_isSharedCheck_2349_ = !lean_is_exclusive(v___x_2332_);
if (v_isSharedCheck_2349_ == 0)
{
v___x_2340_ = v___x_2332_;
v_isShared_2341_ = v_isSharedCheck_2349_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_hypotheses_2337_);
lean_inc(v_goal_2336_);
lean_inc(v_typeAnalysis_2335_);
lean_inc(v_acNfCache_2334_);
lean_inc(v_rewriteCache_2333_);
lean_dec(v___x_2332_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2349_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2342_; lean_object* v___x_2344_; 
v___x_2342_ = l_Array_append___redArg(v_hypotheses_2337_, v_hyps_2321_);
lean_dec_ref(v_hyps_2321_);
if (v_isShared_2341_ == 0)
{
lean_ctor_set(v___x_2340_, 4, v___x_2342_);
v___x_2344_ = v___x_2340_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2348_; 
v_reuseFailAlloc_2348_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_2348_, 0, v_rewriteCache_2333_);
lean_ctor_set(v_reuseFailAlloc_2348_, 1, v_acNfCache_2334_);
lean_ctor_set(v_reuseFailAlloc_2348_, 2, v_typeAnalysis_2335_);
lean_ctor_set(v_reuseFailAlloc_2348_, 3, v_goal_2336_);
lean_ctor_set(v_reuseFailAlloc_2348_, 4, v___x_2342_);
lean_ctor_set_uint8(v_reuseFailAlloc_2348_, sizeof(void*)*5, v_didChange_2338_);
v___x_2344_ = v_reuseFailAlloc_2348_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; 
v___x_2345_ = lean_st_ref_set(v_a_2323_, v___x_2344_);
v___x_2346_ = lean_box(0);
v___x_2347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2347_, 0, v___x_2346_);
return v___x_2347_;
}
}
}
v___jp_2350_:
{
if (lean_obj_tag(v___y_2351_) == 0)
{
lean_dec_ref_known(v___y_2351_, 1);
goto v___jp_2331_;
}
else
{
lean_dec_ref(v_hyps_2321_);
return v___y_2351_;
}
}
v_resetjp_2370_:
{
lean_object* v_toFunctor_2373_; lean_object* v_toSeq_2374_; lean_object* v_toSeqLeft_2375_; lean_object* v_toSeqRight_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2415_; 
v_toFunctor_2373_ = lean_ctor_get(v_toApplicative_2369_, 0);
v_toSeq_2374_ = lean_ctor_get(v_toApplicative_2369_, 2);
v_toSeqLeft_2375_ = lean_ctor_get(v_toApplicative_2369_, 3);
v_toSeqRight_2376_ = lean_ctor_get(v_toApplicative_2369_, 4);
v_isSharedCheck_2415_ = !lean_is_exclusive(v_toApplicative_2369_);
if (v_isSharedCheck_2415_ == 0)
{
lean_object* v_unused_2416_; 
v_unused_2416_ = lean_ctor_get(v_toApplicative_2369_, 1);
lean_dec(v_unused_2416_);
v___x_2378_ = v_toApplicative_2369_;
v_isShared_2379_ = v_isSharedCheck_2415_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_toSeqRight_2376_);
lean_inc(v_toSeqLeft_2375_);
lean_inc(v_toSeq_2374_);
lean_inc(v_toFunctor_2373_);
lean_dec(v_toApplicative_2369_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2415_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___f_2380_; lean_object* v___f_2381_; lean_object* v___f_2382_; lean_object* v___f_2383_; lean_object* v___x_2384_; lean_object* v___f_2385_; lean_object* v___f_2386_; lean_object* v___f_2387_; lean_object* v___x_2389_; 
v___f_2380_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__4));
v___f_2381_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__5));
lean_inc_ref(v_toFunctor_2373_);
v___f_2382_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2382_, 0, v_toFunctor_2373_);
v___f_2383_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2383_, 0, v_toFunctor_2373_);
v___x_2384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2384_, 0, v___f_2382_);
lean_ctor_set(v___x_2384_, 1, v___f_2383_);
v___f_2385_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2385_, 0, v_toSeqRight_2376_);
v___f_2386_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2386_, 0, v_toSeqLeft_2375_);
v___f_2387_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2387_, 0, v_toSeq_2374_);
if (v_isShared_2379_ == 0)
{
lean_ctor_set(v___x_2378_, 4, v___f_2385_);
lean_ctor_set(v___x_2378_, 3, v___f_2386_);
lean_ctor_set(v___x_2378_, 2, v___f_2387_);
lean_ctor_set(v___x_2378_, 1, v___f_2380_);
lean_ctor_set(v___x_2378_, 0, v___x_2384_);
v___x_2389_ = v___x_2378_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v___x_2384_);
lean_ctor_set(v_reuseFailAlloc_2414_, 1, v___f_2380_);
lean_ctor_set(v_reuseFailAlloc_2414_, 2, v___f_2387_);
lean_ctor_set(v_reuseFailAlloc_2414_, 3, v___f_2386_);
lean_ctor_set(v_reuseFailAlloc_2414_, 4, v___f_2385_);
v___x_2389_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
lean_object* v___x_2391_; 
if (v_isShared_2372_ == 0)
{
lean_ctor_set(v___x_2371_, 1, v___f_2381_);
lean_ctor_set(v___x_2371_, 0, v___x_2389_);
v___x_2391_ = v___x_2371_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v___x_2389_);
lean_ctor_set(v_reuseFailAlloc_2413_, 1, v___f_2381_);
v___x_2391_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___f_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; uint8_t v___x_2401_; 
v___x_2392_ = l_StateRefT_x27_instMonad___redArg(v___x_2391_);
v___x_2393_ = l_ReaderT_instMonad___redArg(v___x_2392_);
v___x_2394_ = l_StateRefT_x27_instMonad___redArg(v___x_2393_);
v___x_2395_ = l_ReaderT_instMonad___redArg(v___x_2394_);
v___f_2396_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2397_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2398_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7);
v___x_2399_ = lean_unsigned_to_nat(0u);
v___x_2400_ = lean_array_get_size(v_hyps_2321_);
v___x_2401_ = lean_nat_dec_lt(v___x_2399_, v___x_2400_);
if (v___x_2401_ == 0)
{
lean_dec_ref(v___x_2395_);
goto v___jp_2331_;
}
else
{
lean_object* v___f_2402_; lean_object* v___x_2403_; uint8_t v___x_2404_; 
lean_inc_ref(v___x_2395_);
v___f_2402_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0___boxed), 19, 8);
lean_closure_set(v___f_2402_, 0, v___x_2397_);
lean_closure_set(v___f_2402_, 1, v___f_2396_);
lean_closure_set(v___f_2402_, 2, v___x_2397_);
lean_closure_set(v___f_2402_, 3, v___f_2396_);
lean_closure_set(v___f_2402_, 4, v___x_2397_);
lean_closure_set(v___f_2402_, 5, v___f_2396_);
lean_closure_set(v___f_2402_, 6, v___x_2395_);
lean_closure_set(v___f_2402_, 7, v___x_2398_);
v___x_2403_ = lean_box(0);
v___x_2404_ = lean_nat_dec_le(v___x_2400_, v___x_2400_);
if (v___x_2404_ == 0)
{
if (v___x_2401_ == 0)
{
lean_dec_ref(v___f_2402_);
lean_dec_ref(v___x_2395_);
goto v___jp_2331_;
}
else
{
size_t v___x_2405_; size_t v___x_2406_; lean_object* v___x_4280__overap_2407_; lean_object* v___x_2408_; 
v___x_2405_ = ((size_t)0ULL);
v___x_2406_ = lean_usize_of_nat(v___x_2400_);
lean_inc_ref(v_hyps_2321_);
v___x_4280__overap_2407_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2395_, v___f_2402_, v_hyps_2321_, v___x_2405_, v___x_2406_, v___x_2403_);
lean_inc(v_a_2329_);
lean_inc_ref(v_a_2328_);
lean_inc(v_a_2327_);
lean_inc_ref(v_a_2326_);
lean_inc(v_a_2325_);
lean_inc_ref(v_a_2324_);
lean_inc(v_a_2323_);
lean_inc_ref(v_a_2322_);
v___x_2408_ = lean_apply_9(v___x_4280__overap_2407_, v_a_2322_, v_a_2323_, v_a_2324_, v_a_2325_, v_a_2326_, v_a_2327_, v_a_2328_, v_a_2329_, lean_box(0));
v___y_2351_ = v___x_2408_;
goto v___jp_2350_;
}
}
else
{
size_t v___x_2409_; size_t v___x_2410_; lean_object* v___x_4284__overap_2411_; lean_object* v___x_2412_; 
v___x_2409_ = ((size_t)0ULL);
v___x_2410_ = lean_usize_of_nat(v___x_2400_);
lean_inc_ref(v_hyps_2321_);
v___x_4284__overap_2411_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2395_, v___f_2402_, v_hyps_2321_, v___x_2409_, v___x_2410_, v___x_2403_);
lean_inc(v_a_2329_);
lean_inc_ref(v_a_2328_);
lean_inc(v_a_2327_);
lean_inc_ref(v_a_2326_);
lean_inc(v_a_2325_);
lean_inc_ref(v_a_2324_);
lean_inc(v_a_2323_);
lean_inc_ref(v_a_2322_);
v___x_2412_ = lean_apply_9(v___x_4284__overap_2411_, v_a_2322_, v_a_2323_, v_a_2324_, v_a_2325_, v_a_2326_, v_a_2327_, v_a_2328_, v_a_2329_, lean_box(0));
v___y_2351_ = v___x_2412_;
goto v___jp_2350_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___boxed(lean_object* v_hyps_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_, lean_object* v_a_2423_, lean_object* v_a_2424_, lean_object* v_a_2425_, lean_object* v_a_2426_, lean_object* v_a_2427_, lean_object* v_a_2428_){
_start:
{
lean_object* v_res_2429_; 
v_res_2429_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps(v_hyps_2419_, v_a_2420_, v_a_2421_, v_a_2422_, v_a_2423_, v_a_2424_, v_a_2425_, v_a_2426_, v_a_2427_);
lean_dec(v_a_2427_);
lean_dec_ref(v_a_2426_);
lean_dec(v_a_2425_);
lean_dec_ref(v_a_2424_);
lean_dec(v_a_2423_);
lean_dec_ref(v_a_2422_);
lean_dec(v_a_2421_);
lean_dec_ref(v_a_2420_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg(lean_object* v_a_2430_){
_start:
{
lean_object* v___x_2432_; lean_object* v_hypotheses_2433_; lean_object* v___x_2434_; 
v___x_2432_ = lean_st_ref_get(v_a_2430_);
v_hypotheses_2433_ = lean_ctor_get(v___x_2432_, 4);
lean_inc_ref(v_hypotheses_2433_);
lean_dec(v___x_2432_);
v___x_2434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2434_, 0, v_hypotheses_2433_);
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg___boxed(lean_object* v_a_2435_, lean_object* v_a_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg(v_a_2435_);
lean_dec(v_a_2435_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps(lean_object* v_a_2438_, lean_object* v_a_2439_, lean_object* v_a_2440_, lean_object* v_a_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_, lean_object* v_a_2444_, lean_object* v_a_2445_){
_start:
{
lean_object* v___x_2447_; lean_object* v_hypotheses_2448_; lean_object* v___x_2449_; 
v___x_2447_ = lean_st_ref_get(v_a_2439_);
v_hypotheses_2448_ = lean_ctor_get(v___x_2447_, 4);
lean_inc_ref(v_hypotheses_2448_);
lean_dec(v___x_2447_);
v___x_2449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2449_, 0, v_hypotheses_2448_);
return v___x_2449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed(lean_object* v_a_2450_, lean_object* v_a_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_){
_start:
{
lean_object* v_res_2459_; 
v_res_2459_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps(v_a_2450_, v_a_2451_, v_a_2452_, v_a_2453_, v_a_2454_, v_a_2455_, v_a_2456_, v_a_2457_);
lean_dec(v_a_2457_);
lean_dec_ref(v_a_2456_);
lean_dec(v_a_2455_);
lean_dec_ref(v_a_2454_);
lean_dec(v_a_2453_);
lean_dec_ref(v_a_2452_);
lean_dec(v_a_2451_);
lean_dec_ref(v_a_2450_);
return v_res_2459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0(lean_object* v_hyps_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_){
_start:
{
lean_object* v___x_2470_; lean_object* v_rewriteCache_2471_; lean_object* v_acNfCache_2472_; lean_object* v_typeAnalysis_2473_; lean_object* v_goal_2474_; uint8_t v_didChange_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2485_; 
v___x_2470_ = lean_st_ref_take(v___y_2462_);
v_rewriteCache_2471_ = lean_ctor_get(v___x_2470_, 0);
v_acNfCache_2472_ = lean_ctor_get(v___x_2470_, 1);
v_typeAnalysis_2473_ = lean_ctor_get(v___x_2470_, 2);
v_goal_2474_ = lean_ctor_get(v___x_2470_, 3);
v_didChange_2475_ = lean_ctor_get_uint8(v___x_2470_, sizeof(void*)*5);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2470_);
if (v_isSharedCheck_2485_ == 0)
{
lean_object* v_unused_2486_; 
v_unused_2486_ = lean_ctor_get(v___x_2470_, 4);
lean_dec(v_unused_2486_);
v___x_2477_ = v___x_2470_;
v_isShared_2478_ = v_isSharedCheck_2485_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_goal_2474_);
lean_inc(v_typeAnalysis_2473_);
lean_inc(v_acNfCache_2472_);
lean_inc(v_rewriteCache_2471_);
lean_dec(v___x_2470_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2485_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2480_; 
if (v_isShared_2478_ == 0)
{
lean_ctor_set(v___x_2477_, 4, v_hyps_2460_);
v___x_2480_ = v___x_2477_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v_rewriteCache_2471_);
lean_ctor_set(v_reuseFailAlloc_2484_, 1, v_acNfCache_2472_);
lean_ctor_set(v_reuseFailAlloc_2484_, 2, v_typeAnalysis_2473_);
lean_ctor_set(v_reuseFailAlloc_2484_, 3, v_goal_2474_);
lean_ctor_set(v_reuseFailAlloc_2484_, 4, v_hyps_2460_);
lean_ctor_set_uint8(v_reuseFailAlloc_2484_, sizeof(void*)*5, v_didChange_2475_);
v___x_2480_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; 
v___x_2481_ = lean_st_ref_set(v___y_2462_, v___x_2480_);
v___x_2482_ = lean_box(0);
v___x_2483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2483_, 0, v___x_2482_);
return v___x_2483_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0___boxed(lean_object* v_hyps_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_){
_start:
{
lean_object* v_res_2497_; 
v_res_2497_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0(v_hyps_2487_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
lean_dec(v___y_2495_);
lean_dec_ref(v___y_2494_);
lean_dec(v___y_2493_);
lean_dec_ref(v___y_2492_);
lean_dec(v___y_2491_);
lean_dec_ref(v___y_2490_);
lean_dec(v___y_2489_);
lean_dec_ref(v___y_2488_);
return v_res_2497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__1(lean_object* v_inst_2498_, lean_object* v_hyps_2499_){
_start:
{
lean_object* v___f_2500_; lean_object* v___x_2501_; 
v___f_2500_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_2500_, 0, v_hyps_2499_);
v___x_2501_ = lean_apply_2(v_inst_2498_, lean_box(0), v___f_2500_);
return v___x_2501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2(lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_){
_start:
{
lean_object* v___x_2511_; lean_object* v_rewriteCache_2512_; lean_object* v_acNfCache_2513_; lean_object* v_typeAnalysis_2514_; lean_object* v_goal_2515_; uint8_t v_didChange_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2527_; 
v___x_2511_ = lean_st_ref_take(v___y_2503_);
v_rewriteCache_2512_ = lean_ctor_get(v___x_2511_, 0);
v_acNfCache_2513_ = lean_ctor_get(v___x_2511_, 1);
v_typeAnalysis_2514_ = lean_ctor_get(v___x_2511_, 2);
v_goal_2515_ = lean_ctor_get(v___x_2511_, 3);
v_didChange_2516_ = lean_ctor_get_uint8(v___x_2511_, sizeof(void*)*5);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2527_ == 0)
{
lean_object* v_unused_2528_; 
v_unused_2528_ = lean_ctor_get(v___x_2511_, 4);
lean_dec(v_unused_2528_);
v___x_2518_ = v___x_2511_;
v_isShared_2519_ = v_isSharedCheck_2527_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_goal_2515_);
lean_inc(v_typeAnalysis_2514_);
lean_inc(v_acNfCache_2513_);
lean_inc(v_rewriteCache_2512_);
lean_dec(v___x_2511_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2527_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2520_; lean_object* v___x_2522_; 
v___x_2520_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__12));
if (v_isShared_2519_ == 0)
{
lean_ctor_set(v___x_2518_, 4, v___x_2520_);
v___x_2522_ = v___x_2518_;
goto v_reusejp_2521_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_rewriteCache_2512_);
lean_ctor_set(v_reuseFailAlloc_2526_, 1, v_acNfCache_2513_);
lean_ctor_set(v_reuseFailAlloc_2526_, 2, v_typeAnalysis_2514_);
lean_ctor_set(v_reuseFailAlloc_2526_, 3, v_goal_2515_);
lean_ctor_set(v_reuseFailAlloc_2526_, 4, v___x_2520_);
lean_ctor_set_uint8(v_reuseFailAlloc_2526_, sizeof(void*)*5, v_didChange_2516_);
v___x_2522_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2521_;
}
v_reusejp_2521_:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; 
v___x_2523_ = lean_st_ref_set(v___y_2503_, v___x_2522_);
v___x_2524_ = lean_box(0);
v___x_2525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2525_, 0, v___x_2524_);
return v___x_2525_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2___boxed(lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_){
_start:
{
lean_object* v_res_2538_; 
v_res_2538_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2(v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
lean_dec(v___y_2536_);
lean_dec_ref(v___y_2535_);
lean_dec(v___y_2534_);
lean_dec_ref(v___y_2533_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3(lean_object* v_toPure_2539_, lean_object* v_cls_2540_, lean_object* v_____do__lift_2541_, lean_object* v_____do__lift_2542_){
_start:
{
uint8_t v_hasTrace_2543_; 
v_hasTrace_2543_ = lean_ctor_get_uint8(v_____do__lift_2542_, sizeof(void*)*1);
if (v_hasTrace_2543_ == 0)
{
lean_object* v___x_2544_; lean_object* v___x_2545_; 
lean_dec(v_cls_2540_);
v___x_2544_ = lean_box(v_hasTrace_2543_);
v___x_2545_ = lean_apply_2(v_toPure_2539_, lean_box(0), v___x_2544_);
return v___x_2545_;
}
else
{
lean_object* v___x_2546_; lean_object* v___x_2547_; uint8_t v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; 
v___x_2546_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13));
v___x_2547_ = l_Lean_Name_append(v___x_2546_, v_cls_2540_);
v___x_2548_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_2541_, v_____do__lift_2542_, v___x_2547_);
lean_dec(v___x_2547_);
v___x_2549_ = lean_box(v___x_2548_);
v___x_2550_ = lean_apply_2(v_toPure_2539_, lean_box(0), v___x_2549_);
return v___x_2550_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3___boxed(lean_object* v_toPure_2551_, lean_object* v_cls_2552_, lean_object* v_____do__lift_2553_, lean_object* v_____do__lift_2554_){
_start:
{
lean_object* v_res_2555_; 
v_res_2555_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3(v_toPure_2551_, v_cls_2552_, v_____do__lift_2553_, v_____do__lift_2554_);
lean_dec_ref(v_____do__lift_2554_);
lean_dec_ref(v_____do__lift_2553_);
return v_res_2555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__4(lean_object* v_toPure_2556_, lean_object* v_cls_2557_, lean_object* v_toBind_2558_, lean_object* v_inst_2559_, lean_object* v_____do__lift_2560_){
_start:
{
lean_object* v___f_2561_; lean_object* v___x_2562_; 
v___f_2561_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_2561_, 0, v_toPure_2556_);
lean_closure_set(v___f_2561_, 1, v_cls_2557_);
lean_closure_set(v___f_2561_, 2, v_____do__lift_2560_);
v___x_2562_ = lean_apply_4(v_toBind_2558_, lean_box(0), lean_box(0), v_inst_2559_, v___f_2561_);
return v___x_2562_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_2564_; lean_object* v___x_2565_; 
v___x_2564_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__0));
v___x_2565_ = l_Lean_stringToMessageData(v___x_2564_);
return v___x_2565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5(lean_object* v_toPure_2566_, lean_object* v_a_2567_, lean_object* v___y_2568_, lean_object* v_inst_2569_, lean_object* v_inst_2570_, lean_object* v_inst_2571_, lean_object* v_inst_2572_, lean_object* v_cls_2573_, uint8_t v_____do__lift_2574_){
_start:
{
if (v_____do__lift_2574_ == 0)
{
lean_object* v___x_2575_; lean_object* v___x_2576_; 
lean_dec(v_cls_2573_);
lean_dec(v_inst_2572_);
lean_dec_ref(v_inst_2571_);
lean_dec_ref(v_inst_2570_);
lean_dec_ref(v_inst_2569_);
lean_dec_ref(v___y_2568_);
lean_dec_ref(v_a_2567_);
v___x_2575_ = lean_box(0);
v___x_2576_ = lean_apply_2(v_toPure_2566_, lean_box(0), v___x_2575_);
return v___x_2576_;
}
else
{
lean_object* v_type_2577_; lean_object* v_type_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; 
lean_dec(v_toPure_2566_);
v_type_2577_ = lean_ctor_get(v_a_2567_, 1);
lean_inc_ref(v_type_2577_);
lean_dec_ref(v_a_2567_);
v_type_2578_ = lean_ctor_get(v___y_2568_, 1);
lean_inc_ref(v_type_2578_);
lean_dec_ref(v___y_2568_);
v___x_2579_ = l_Lean_MessageData_ofExpr(v_type_2577_);
v___x_2580_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_2581_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2581_, 0, v___x_2579_);
lean_ctor_set(v___x_2581_, 1, v___x_2580_);
v___x_2582_ = l_Lean_MessageData_ofExpr(v_type_2578_);
v___x_2583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2581_);
lean_ctor_set(v___x_2583_, 1, v___x_2582_);
v___x_2584_ = l_Lean_addTrace___redArg(v_inst_2569_, v_inst_2570_, v_inst_2571_, v_inst_2572_, v_cls_2573_, v___x_2583_);
return v___x_2584_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___boxed(lean_object* v_toPure_2585_, lean_object* v_a_2586_, lean_object* v___y_2587_, lean_object* v_inst_2588_, lean_object* v_inst_2589_, lean_object* v_inst_2590_, lean_object* v_inst_2591_, lean_object* v_cls_2592_, lean_object* v_____do__lift_2593_){
_start:
{
uint8_t v_____do__lift_3056__boxed_2594_; lean_object* v_res_2595_; 
v_____do__lift_3056__boxed_2594_ = lean_unbox(v_____do__lift_2593_);
v_res_2595_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5(v_toPure_2585_, v_a_2586_, v___y_2587_, v_inst_2588_, v_inst_2589_, v_inst_2590_, v_inst_2591_, v_cls_2592_, v_____do__lift_3056__boxed_2594_);
return v_res_2595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__6(lean_object* v_inst_2596_, lean_object* v_toPure_2597_, lean_object* v_toBind_2598_, lean_object* v_inst_2599_, lean_object* v_a_2600_, lean_object* v_inst_2601_, lean_object* v_inst_2602_, lean_object* v_inst_2603_, lean_object* v_x_2604_, lean_object* v___y_2605_){
_start:
{
lean_object* v_getInheritedTraceOptions_2606_; lean_object* v_cls_2607_; lean_object* v___f_2608_; lean_object* v___f_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; 
v_getInheritedTraceOptions_2606_ = lean_ctor_get(v_inst_2596_, 2);
lean_inc(v_getInheritedTraceOptions_2606_);
v_cls_2607_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
lean_inc_n(v_toBind_2598_, 2);
lean_inc(v_toPure_2597_);
v___f_2608_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__4), 5, 4);
lean_closure_set(v___f_2608_, 0, v_toPure_2597_);
lean_closure_set(v___f_2608_, 1, v_cls_2607_);
lean_closure_set(v___f_2608_, 2, v_toBind_2598_);
lean_closure_set(v___f_2608_, 3, v_inst_2599_);
v___f_2609_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___boxed), 9, 8);
lean_closure_set(v___f_2609_, 0, v_toPure_2597_);
lean_closure_set(v___f_2609_, 1, v_a_2600_);
lean_closure_set(v___f_2609_, 2, v___y_2605_);
lean_closure_set(v___f_2609_, 3, v_inst_2601_);
lean_closure_set(v___f_2609_, 4, v_inst_2596_);
lean_closure_set(v___f_2609_, 5, v_inst_2602_);
lean_closure_set(v___f_2609_, 6, v_inst_2603_);
lean_closure_set(v___f_2609_, 7, v_cls_2607_);
v___x_2610_ = lean_apply_4(v_toBind_2598_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_2606_, v___f_2608_);
v___x_2611_ = lean_apply_4(v_toBind_2598_, lean_box(0), lean_box(0), v___x_2610_, v___f_2609_);
return v___x_2611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11(lean_object* v_toPure_2612_, lean_object* v_res_2613_, lean_object* v_____r_2614_){
_start:
{
lean_object* v___x_2615_; 
v___x_2615_ = lean_apply_2(v_toPure_2612_, lean_box(0), v_res_2613_);
return v___x_2615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7(lean_object* v_inst_2616_, lean_object* v_toBind_2617_, lean_object* v___f_2618_, lean_object* v_____r_2619_){
_start:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; 
v___x_2620_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___boxed), 9, 0);
v___x_2621_ = lean_apply_2(v_inst_2616_, lean_box(0), v___x_2620_);
v___x_2622_ = lean_apply_4(v_toBind_2617_, lean_box(0), lean_box(0), v___x_2621_, v___f_2618_);
return v___x_2622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10(lean_object* v___f_2623_, lean_object* v_____r_2624_){
_start:
{
lean_object* v___x_2625_; 
v___x_2625_ = lean_apply_1(v___f_2623_, v_____r_2624_);
return v___x_2625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12(lean_object* v___f_2626_, lean_object* v_a_2627_, lean_object* v_newHyp_2628_, lean_object* v_inst_2629_, lean_object* v_inst_2630_, lean_object* v_inst_2631_, lean_object* v_inst_2632_, lean_object* v_cls_2633_, lean_object* v_toBind_2634_, lean_object* v___f_2635_, uint8_t v_____do__lift_2636_){
_start:
{
if (v_____do__lift_2636_ == 0)
{
lean_object* v___x_2637_; lean_object* v___x_2638_; 
lean_dec(v___f_2635_);
lean_dec(v_toBind_2634_);
lean_dec(v_cls_2633_);
lean_dec(v_inst_2632_);
lean_dec_ref(v_inst_2631_);
lean_dec_ref(v_inst_2630_);
lean_dec_ref(v_inst_2629_);
lean_dec_ref(v_newHyp_2628_);
lean_dec_ref(v_a_2627_);
v___x_2637_ = lean_box(0);
v___x_2638_ = lean_apply_1(v___f_2626_, v___x_2637_);
return v___x_2638_;
}
else
{
lean_object* v_type_2639_; lean_object* v_type_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
lean_dec(v___f_2626_);
v_type_2639_ = lean_ctor_get(v_a_2627_, 1);
lean_inc_ref(v_type_2639_);
lean_dec_ref(v_a_2627_);
v_type_2640_ = lean_ctor_get(v_newHyp_2628_, 1);
lean_inc_ref(v_type_2640_);
lean_dec_ref(v_newHyp_2628_);
v___x_2641_ = l_Lean_MessageData_ofExpr(v_type_2639_);
v___x_2642_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_2643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2643_, 0, v___x_2641_);
lean_ctor_set(v___x_2643_, 1, v___x_2642_);
v___x_2644_ = l_Lean_MessageData_ofExpr(v_type_2640_);
v___x_2645_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2645_, 0, v___x_2643_);
lean_ctor_set(v___x_2645_, 1, v___x_2644_);
v___x_2646_ = l_Lean_addTrace___redArg(v_inst_2629_, v_inst_2630_, v_inst_2631_, v_inst_2632_, v_cls_2633_, v___x_2645_);
v___x_2647_ = lean_apply_4(v_toBind_2634_, lean_box(0), lean_box(0), v___x_2646_, v___f_2635_);
return v___x_2647_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12___boxed(lean_object* v___f_2648_, lean_object* v_a_2649_, lean_object* v_newHyp_2650_, lean_object* v_inst_2651_, lean_object* v_inst_2652_, lean_object* v_inst_2653_, lean_object* v_inst_2654_, lean_object* v_cls_2655_, lean_object* v_toBind_2656_, lean_object* v___f_2657_, lean_object* v_____do__lift_2658_){
_start:
{
uint8_t v_____do__lift_3156__boxed_2659_; lean_object* v_res_2660_; 
v_____do__lift_3156__boxed_2659_ = lean_unbox(v_____do__lift_2658_);
v_res_2660_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12(v___f_2648_, v_a_2649_, v_newHyp_2650_, v_inst_2651_, v_inst_2652_, v_inst_2653_, v_inst_2654_, v_cls_2655_, v_toBind_2656_, v___f_2657_, v_____do__lift_3156__boxed_2659_);
return v_res_2660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__13(lean_object* v_toPure_2661_, lean_object* v_inst_2662_, lean_object* v_toBind_2663_, lean_object* v_inst_2664_, lean_object* v___f_2665_, lean_object* v_a_2666_, lean_object* v_inst_2667_, lean_object* v_inst_2668_, lean_object* v_inst_2669_, lean_object* v_inst_2670_, lean_object* v___f_2671_, lean_object* v_res_2672_){
_start:
{
lean_object* v___x_2673_; lean_object* v_zero_2674_; uint8_t v_isZero_2675_; 
v___x_2673_ = lean_array_get_size(v_res_2672_);
v_zero_2674_ = lean_unsigned_to_nat(0u);
v_isZero_2675_ = lean_nat_dec_eq(v___x_2673_, v_zero_2674_);
if (v_isZero_2675_ == 1)
{
lean_object* v___f_2676_; lean_object* v___f_2677_; lean_object* v___x_2678_; uint8_t v___x_2679_; 
lean_dec(v___f_2671_);
lean_dec(v_inst_2670_);
lean_dec_ref(v_inst_2669_);
lean_dec(v_inst_2668_);
lean_dec_ref(v_inst_2667_);
lean_dec_ref(v_a_2666_);
lean_inc_ref(v_res_2672_);
lean_inc(v_toPure_2661_);
v___f_2676_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11), 3, 2);
lean_closure_set(v___f_2676_, 0, v_toPure_2661_);
lean_closure_set(v___f_2676_, 1, v_res_2672_);
lean_inc(v_toBind_2663_);
v___f_2677_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_2677_, 0, v_inst_2662_);
lean_closure_set(v___f_2677_, 1, v_toBind_2663_);
lean_closure_set(v___f_2677_, 2, v___f_2676_);
v___x_2678_ = lean_box(0);
v___x_2679_ = lean_nat_dec_lt(v_zero_2674_, v___x_2673_);
if (v___x_2679_ == 0)
{
lean_object* v___x_2680_; lean_object* v___x_2681_; 
lean_dec_ref(v_res_2672_);
lean_dec(v___f_2665_);
lean_dec_ref(v_inst_2664_);
v___x_2680_ = lean_apply_2(v_toPure_2661_, lean_box(0), v___x_2678_);
v___x_2681_ = lean_apply_4(v_toBind_2663_, lean_box(0), lean_box(0), v___x_2680_, v___f_2677_);
return v___x_2681_;
}
else
{
uint8_t v___x_2682_; 
v___x_2682_ = lean_nat_dec_le(v___x_2673_, v___x_2673_);
if (v___x_2682_ == 0)
{
if (v___x_2679_ == 0)
{
lean_object* v___x_2683_; lean_object* v___x_2684_; 
lean_dec_ref(v_res_2672_);
lean_dec(v___f_2665_);
lean_dec_ref(v_inst_2664_);
v___x_2683_ = lean_apply_2(v_toPure_2661_, lean_box(0), v___x_2678_);
v___x_2684_ = lean_apply_4(v_toBind_2663_, lean_box(0), lean_box(0), v___x_2683_, v___f_2677_);
return v___x_2684_;
}
else
{
size_t v___x_2685_; size_t v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; 
lean_dec(v_toPure_2661_);
v___x_2685_ = ((size_t)0ULL);
v___x_2686_ = lean_usize_of_nat(v___x_2673_);
v___x_2687_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_2664_, v___f_2665_, v_res_2672_, v___x_2685_, v___x_2686_, v___x_2678_);
v___x_2688_ = lean_apply_4(v_toBind_2663_, lean_box(0), lean_box(0), v___x_2687_, v___f_2677_);
return v___x_2688_;
}
}
else
{
size_t v___x_2689_; size_t v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; 
lean_dec(v_toPure_2661_);
v___x_2689_ = ((size_t)0ULL);
v___x_2690_ = lean_usize_of_nat(v___x_2673_);
v___x_2691_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_2664_, v___f_2665_, v_res_2672_, v___x_2689_, v___x_2690_, v___x_2678_);
v___x_2692_ = lean_apply_4(v_toBind_2663_, lean_box(0), lean_box(0), v___x_2691_, v___f_2677_);
return v___x_2692_;
}
}
}
else
{
lean_object* v_one_2693_; lean_object* v_n_2694_; uint8_t v_isZero_2695_; 
lean_dec(v___f_2665_);
v_one_2693_ = lean_unsigned_to_nat(1u);
v_n_2694_ = lean_nat_sub(v___x_2673_, v_one_2693_);
v_isZero_2695_ = lean_nat_dec_eq(v_n_2694_, v_zero_2674_);
lean_dec(v_n_2694_);
if (v_isZero_2695_ == 1)
{
lean_object* v_newHyp_2696_; uint8_t v___x_2697_; 
lean_dec(v___f_2671_);
v_newHyp_2696_ = lean_array_fget_borrowed(v_res_2672_, v_zero_2674_);
v___x_2697_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp_beq(v_newHyp_2696_, v_a_2666_);
if (v___x_2697_ == 0)
{
lean_object* v_getInheritedTraceOptions_2698_; lean_object* v___f_2699_; lean_object* v___f_2700_; lean_object* v___f_2701_; lean_object* v_cls_2702_; lean_object* v___f_2703_; lean_object* v___f_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; 
lean_inc(v_newHyp_2696_);
v_getInheritedTraceOptions_2698_ = lean_ctor_get(v_inst_2667_, 2);
lean_inc(v_getInheritedTraceOptions_2698_);
lean_inc(v_toPure_2661_);
v___f_2699_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11), 3, 2);
lean_closure_set(v___f_2699_, 0, v_toPure_2661_);
lean_closure_set(v___f_2699_, 1, v_res_2672_);
lean_inc_n(v_toBind_2663_, 4);
v___f_2700_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_2700_, 0, v_inst_2662_);
lean_closure_set(v___f_2700_, 1, v_toBind_2663_);
lean_closure_set(v___f_2700_, 2, v___f_2699_);
lean_inc_ref(v___f_2700_);
v___f_2701_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_2701_, 0, v___f_2700_);
v_cls_2702_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___f_2703_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__4), 5, 4);
lean_closure_set(v___f_2703_, 0, v_toPure_2661_);
lean_closure_set(v___f_2703_, 1, v_cls_2702_);
lean_closure_set(v___f_2703_, 2, v_toBind_2663_);
lean_closure_set(v___f_2703_, 3, v_inst_2668_);
v___f_2704_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12___boxed), 11, 10);
lean_closure_set(v___f_2704_, 0, v___f_2700_);
lean_closure_set(v___f_2704_, 1, v_a_2666_);
lean_closure_set(v___f_2704_, 2, v_newHyp_2696_);
lean_closure_set(v___f_2704_, 3, v_inst_2664_);
lean_closure_set(v___f_2704_, 4, v_inst_2667_);
lean_closure_set(v___f_2704_, 5, v_inst_2669_);
lean_closure_set(v___f_2704_, 6, v_inst_2670_);
lean_closure_set(v___f_2704_, 7, v_cls_2702_);
lean_closure_set(v___f_2704_, 8, v_toBind_2663_);
lean_closure_set(v___f_2704_, 9, v___f_2701_);
v___x_2705_ = lean_apply_4(v_toBind_2663_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_2698_, v___f_2703_);
v___x_2706_ = lean_apply_4(v_toBind_2663_, lean_box(0), lean_box(0), v___x_2705_, v___f_2704_);
return v___x_2706_;
}
else
{
lean_object* v___x_2707_; 
lean_dec(v_inst_2670_);
lean_dec_ref(v_inst_2669_);
lean_dec(v_inst_2668_);
lean_dec_ref(v_inst_2667_);
lean_dec_ref(v_a_2666_);
lean_dec_ref(v_inst_2664_);
lean_dec(v_toBind_2663_);
lean_dec(v_inst_2662_);
v___x_2707_ = lean_apply_2(v_toPure_2661_, lean_box(0), v_res_2672_);
return v___x_2707_;
}
}
else
{
lean_object* v___f_2708_; lean_object* v___f_2709_; lean_object* v___x_2710_; uint8_t v___x_2711_; 
lean_dec(v_inst_2670_);
lean_dec_ref(v_inst_2669_);
lean_dec(v_inst_2668_);
lean_dec_ref(v_inst_2667_);
lean_dec_ref(v_a_2666_);
lean_inc_ref(v_res_2672_);
lean_inc(v_toPure_2661_);
v___f_2708_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11), 3, 2);
lean_closure_set(v___f_2708_, 0, v_toPure_2661_);
lean_closure_set(v___f_2708_, 1, v_res_2672_);
lean_inc(v_toBind_2663_);
v___f_2709_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_2709_, 0, v_inst_2662_);
lean_closure_set(v___f_2709_, 1, v_toBind_2663_);
lean_closure_set(v___f_2709_, 2, v___f_2708_);
v___x_2710_ = lean_box(0);
v___x_2711_ = lean_nat_dec_lt(v_zero_2674_, v___x_2673_);
if (v___x_2711_ == 0)
{
lean_object* v___x_2712_; lean_object* v___x_2713_; 
lean_dec_ref(v_res_2672_);
lean_dec(v___f_2671_);
lean_dec_ref(v_inst_2664_);
v___x_2712_ = lean_apply_2(v_toPure_2661_, lean_box(0), v___x_2710_);
v___x_2713_ = lean_apply_4(v_toBind_2663_, lean_box(0), lean_box(0), v___x_2712_, v___f_2709_);
return v___x_2713_;
}
else
{
uint8_t v___x_2714_; 
v___x_2714_ = lean_nat_dec_le(v___x_2673_, v___x_2673_);
if (v___x_2714_ == 0)
{
if (v___x_2711_ == 0)
{
lean_object* v___x_2715_; lean_object* v___x_2716_; 
lean_dec_ref(v_res_2672_);
lean_dec(v___f_2671_);
lean_dec_ref(v_inst_2664_);
v___x_2715_ = lean_apply_2(v_toPure_2661_, lean_box(0), v___x_2710_);
v___x_2716_ = lean_apply_4(v_toBind_2663_, lean_box(0), lean_box(0), v___x_2715_, v___f_2709_);
return v___x_2716_;
}
else
{
size_t v___x_2717_; size_t v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
lean_dec(v_toPure_2661_);
v___x_2717_ = ((size_t)0ULL);
v___x_2718_ = lean_usize_of_nat(v___x_2673_);
v___x_2719_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_2664_, v___f_2671_, v_res_2672_, v___x_2717_, v___x_2718_, v___x_2710_);
v___x_2720_ = lean_apply_4(v_toBind_2663_, lean_box(0), lean_box(0), v___x_2719_, v___f_2709_);
return v___x_2720_;
}
}
else
{
size_t v___x_2721_; size_t v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; 
lean_dec(v_toPure_2661_);
v___x_2721_ = ((size_t)0ULL);
v___x_2722_ = lean_usize_of_nat(v___x_2673_);
v___x_2723_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_2664_, v___f_2671_, v_res_2672_, v___x_2721_, v___x_2722_, v___x_2710_);
v___x_2724_ = lean_apply_4(v_toBind_2663_, lean_box(0), lean_box(0), v___x_2723_, v___f_2709_);
return v___x_2724_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8(lean_object* v_bs_2725_, lean_object* v_toPure_2726_, lean_object* v_____do__lift_2727_){
_start:
{
lean_object* v___x_2728_; lean_object* v___x_2729_; 
v___x_2728_ = l_Array_append___redArg(v_bs_2725_, v_____do__lift_2727_);
v___x_2729_ = lean_apply_2(v_toPure_2726_, lean_box(0), v___x_2728_);
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8___boxed(lean_object* v_bs_2730_, lean_object* v_toPure_2731_, lean_object* v_____do__lift_2732_){
_start:
{
lean_object* v_res_2733_; 
v_res_2733_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8(v_bs_2730_, v_toPure_2731_, v_____do__lift_2732_);
lean_dec_ref(v_____do__lift_2732_);
return v_res_2733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__9(lean_object* v_inst_2734_, lean_object* v_toPure_2735_, lean_object* v_toBind_2736_, lean_object* v_inst_2737_, lean_object* v_inst_2738_, lean_object* v_inst_2739_, lean_object* v_inst_2740_, lean_object* v_inst_2741_, lean_object* v_f_2742_, lean_object* v_bs_2743_, lean_object* v_a_2744_){
_start:
{
lean_object* v___f_2745_; lean_object* v___f_2746_; lean_object* v___f_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; 
lean_inc(v_inst_2740_);
lean_inc_ref(v_inst_2739_);
lean_inc_ref(v_inst_2738_);
lean_inc_ref_n(v_a_2744_, 2);
lean_inc(v_inst_2737_);
lean_inc_n(v_toBind_2736_, 3);
lean_inc_n(v_toPure_2735_, 2);
lean_inc_ref(v_inst_2734_);
v___f_2745_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__6), 10, 8);
lean_closure_set(v___f_2745_, 0, v_inst_2734_);
lean_closure_set(v___f_2745_, 1, v_toPure_2735_);
lean_closure_set(v___f_2745_, 2, v_toBind_2736_);
lean_closure_set(v___f_2745_, 3, v_inst_2737_);
lean_closure_set(v___f_2745_, 4, v_a_2744_);
lean_closure_set(v___f_2745_, 5, v_inst_2738_);
lean_closure_set(v___f_2745_, 6, v_inst_2739_);
lean_closure_set(v___f_2745_, 7, v_inst_2740_);
lean_inc_ref(v___f_2745_);
v___f_2746_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__13), 12, 11);
lean_closure_set(v___f_2746_, 0, v_toPure_2735_);
lean_closure_set(v___f_2746_, 1, v_inst_2741_);
lean_closure_set(v___f_2746_, 2, v_toBind_2736_);
lean_closure_set(v___f_2746_, 3, v_inst_2738_);
lean_closure_set(v___f_2746_, 4, v___f_2745_);
lean_closure_set(v___f_2746_, 5, v_a_2744_);
lean_closure_set(v___f_2746_, 6, v_inst_2734_);
lean_closure_set(v___f_2746_, 7, v_inst_2737_);
lean_closure_set(v___f_2746_, 8, v_inst_2739_);
lean_closure_set(v___f_2746_, 9, v_inst_2740_);
lean_closure_set(v___f_2746_, 10, v___f_2745_);
v___f_2747_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8___boxed), 3, 2);
lean_closure_set(v___f_2747_, 0, v_bs_2743_);
lean_closure_set(v___f_2747_, 1, v_toPure_2735_);
v___x_2748_ = lean_apply_1(v_f_2742_, v_a_2744_);
v___x_2749_ = lean_apply_4(v_toBind_2736_, lean_box(0), lean_box(0), v___x_2748_, v___f_2746_);
v___x_2750_ = lean_apply_4(v_toBind_2736_, lean_box(0), lean_box(0), v___x_2749_, v___f_2747_);
return v___x_2750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14(lean_object* v_hyps_2753_, lean_object* v_toPure_2754_, lean_object* v_toBind_2755_, lean_object* v___f_2756_, lean_object* v_inst_2757_, lean_object* v___f_2758_, lean_object* v_____r_2759_){
_start:
{
lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; uint8_t v___x_2763_; 
v___x_2760_ = lean_unsigned_to_nat(0u);
v___x_2761_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14___closed__0));
v___x_2762_ = lean_array_get_size(v_hyps_2753_);
v___x_2763_ = lean_nat_dec_lt(v___x_2760_, v___x_2762_);
if (v___x_2763_ == 0)
{
lean_object* v___x_2764_; lean_object* v___x_2765_; 
lean_dec(v___f_2758_);
lean_dec_ref(v_inst_2757_);
lean_dec_ref(v_hyps_2753_);
v___x_2764_ = lean_apply_2(v_toPure_2754_, lean_box(0), v___x_2761_);
v___x_2765_ = lean_apply_4(v_toBind_2755_, lean_box(0), lean_box(0), v___x_2764_, v___f_2756_);
return v___x_2765_;
}
else
{
uint8_t v___x_2766_; 
v___x_2766_ = lean_nat_dec_le(v___x_2762_, v___x_2762_);
if (v___x_2766_ == 0)
{
if (v___x_2763_ == 0)
{
lean_object* v___x_2767_; lean_object* v___x_2768_; 
lean_dec(v___f_2758_);
lean_dec_ref(v_inst_2757_);
lean_dec_ref(v_hyps_2753_);
v___x_2767_ = lean_apply_2(v_toPure_2754_, lean_box(0), v___x_2761_);
v___x_2768_ = lean_apply_4(v_toBind_2755_, lean_box(0), lean_box(0), v___x_2767_, v___f_2756_);
return v___x_2768_;
}
else
{
size_t v___x_2769_; size_t v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
lean_dec(v_toPure_2754_);
v___x_2769_ = ((size_t)0ULL);
v___x_2770_ = lean_usize_of_nat(v___x_2762_);
v___x_2771_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_2757_, v___f_2758_, v_hyps_2753_, v___x_2769_, v___x_2770_, v___x_2761_);
v___x_2772_ = lean_apply_4(v_toBind_2755_, lean_box(0), lean_box(0), v___x_2771_, v___f_2756_);
return v___x_2772_;
}
}
else
{
size_t v___x_2773_; size_t v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; 
lean_dec(v_toPure_2754_);
v___x_2773_ = ((size_t)0ULL);
v___x_2774_ = lean_usize_of_nat(v___x_2762_);
v___x_2775_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_2757_, v___f_2758_, v_hyps_2753_, v___x_2773_, v___x_2774_, v___x_2761_);
v___x_2776_ = lean_apply_4(v_toBind_2755_, lean_box(0), lean_box(0), v___x_2775_, v___f_2756_);
return v___x_2776_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__15(lean_object* v_toPure_2777_, lean_object* v_toBind_2778_, lean_object* v___f_2779_, lean_object* v_inst_2780_, lean_object* v___f_2781_, lean_object* v_inst_2782_, lean_object* v___f_2783_, lean_object* v_hyps_2784_){
_start:
{
lean_object* v___f_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; 
lean_inc(v_toBind_2778_);
v___f_2785_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14), 7, 6);
lean_closure_set(v___f_2785_, 0, v_hyps_2784_);
lean_closure_set(v___f_2785_, 1, v_toPure_2777_);
lean_closure_set(v___f_2785_, 2, v_toBind_2778_);
lean_closure_set(v___f_2785_, 3, v___f_2779_);
lean_closure_set(v___f_2785_, 4, v_inst_2780_);
lean_closure_set(v___f_2785_, 5, v___f_2781_);
v___x_2786_ = lean_apply_2(v_inst_2782_, lean_box(0), v___f_2783_);
v___x_2787_ = lean_apply_4(v_toBind_2778_, lean_box(0), lean_box(0), v___x_2786_, v___f_2785_);
return v___x_2787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg(lean_object* v_inst_2789_, lean_object* v_inst_2790_, lean_object* v_inst_2791_, lean_object* v_inst_2792_, lean_object* v_inst_2793_, lean_object* v_inst_2794_, lean_object* v_f_2795_){
_start:
{
lean_object* v_toApplicative_2796_; lean_object* v_toBind_2797_; lean_object* v_toPure_2798_; lean_object* v___f_2799_; lean_object* v___f_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___f_2803_; lean_object* v___f_2804_; lean_object* v___x_2805_; 
v_toApplicative_2796_ = lean_ctor_get(v_inst_2789_, 0);
v_toBind_2797_ = lean_ctor_get(v_inst_2789_, 1);
lean_inc_n(v_toBind_2797_, 3);
v_toPure_2798_ = lean_ctor_get(v_toApplicative_2796_, 1);
lean_inc_n(v_toPure_2798_, 2);
lean_inc_n(v_inst_2794_, 3);
v___f_2799_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2799_, 0, v_inst_2794_);
v___f_2800_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0));
v___x_2801_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 9, 0);
v___x_2802_ = lean_apply_2(v_inst_2794_, lean_box(0), v___x_2801_);
lean_inc_ref(v_inst_2789_);
v___f_2803_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__9), 11, 9);
lean_closure_set(v___f_2803_, 0, v_inst_2790_);
lean_closure_set(v___f_2803_, 1, v_toPure_2798_);
lean_closure_set(v___f_2803_, 2, v_toBind_2797_);
lean_closure_set(v___f_2803_, 3, v_inst_2791_);
lean_closure_set(v___f_2803_, 4, v_inst_2789_);
lean_closure_set(v___f_2803_, 5, v_inst_2793_);
lean_closure_set(v___f_2803_, 6, v_inst_2792_);
lean_closure_set(v___f_2803_, 7, v_inst_2794_);
lean_closure_set(v___f_2803_, 8, v_f_2795_);
v___f_2804_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__15), 8, 7);
lean_closure_set(v___f_2804_, 0, v_toPure_2798_);
lean_closure_set(v___f_2804_, 1, v_toBind_2797_);
lean_closure_set(v___f_2804_, 2, v___f_2799_);
lean_closure_set(v___f_2804_, 3, v_inst_2789_);
lean_closure_set(v___f_2804_, 4, v___f_2803_);
lean_closure_set(v___f_2804_, 5, v_inst_2794_);
lean_closure_set(v___f_2804_, 6, v___f_2800_);
v___x_2805_ = lean_apply_4(v_toBind_2797_, lean_box(0), lean_box(0), v___x_2802_, v___f_2804_);
return v___x_2805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps(lean_object* v_m_2806_, lean_object* v_inst_2807_, lean_object* v_inst_2808_, lean_object* v_inst_2809_, lean_object* v_inst_2810_, lean_object* v_inst_2811_, lean_object* v_inst_2812_, lean_object* v_f_2813_){
_start:
{
lean_object* v_toApplicative_2814_; lean_object* v_toBind_2815_; lean_object* v_toPure_2816_; lean_object* v___f_2817_; lean_object* v___f_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___f_2821_; lean_object* v___f_2822_; lean_object* v___x_2823_; 
v_toApplicative_2814_ = lean_ctor_get(v_inst_2807_, 0);
v_toBind_2815_ = lean_ctor_get(v_inst_2807_, 1);
lean_inc_n(v_toBind_2815_, 3);
v_toPure_2816_ = lean_ctor_get(v_toApplicative_2814_, 1);
lean_inc_n(v_toPure_2816_, 2);
lean_inc_n(v_inst_2812_, 3);
v___f_2817_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2817_, 0, v_inst_2812_);
v___f_2818_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0));
v___x_2819_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 9, 0);
v___x_2820_ = lean_apply_2(v_inst_2812_, lean_box(0), v___x_2819_);
lean_inc_ref(v_inst_2807_);
v___f_2821_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__9), 11, 9);
lean_closure_set(v___f_2821_, 0, v_inst_2808_);
lean_closure_set(v___f_2821_, 1, v_toPure_2816_);
lean_closure_set(v___f_2821_, 2, v_toBind_2815_);
lean_closure_set(v___f_2821_, 3, v_inst_2809_);
lean_closure_set(v___f_2821_, 4, v_inst_2807_);
lean_closure_set(v___f_2821_, 5, v_inst_2811_);
lean_closure_set(v___f_2821_, 6, v_inst_2810_);
lean_closure_set(v___f_2821_, 7, v_inst_2812_);
lean_closure_set(v___f_2821_, 8, v_f_2813_);
v___f_2822_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__15), 8, 7);
lean_closure_set(v___f_2822_, 0, v_toPure_2816_);
lean_closure_set(v___f_2822_, 1, v_toBind_2815_);
lean_closure_set(v___f_2822_, 2, v___f_2817_);
lean_closure_set(v___f_2822_, 3, v_inst_2807_);
lean_closure_set(v___f_2822_, 4, v___f_2821_);
lean_closure_set(v___f_2822_, 5, v_inst_2812_);
lean_closure_set(v___f_2822_, 6, v___f_2818_);
v___x_2823_ = lean_apply_4(v_toBind_2815_, lean_box(0), lean_box(0), v___x_2820_, v___f_2822_);
return v___x_2823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0(lean_object* v_toPure_2824_, lean_object* v_____do__lift_2825_){
_start:
{
lean_object* v___x_2826_; 
v___x_2826_ = lean_apply_2(v_toPure_2824_, lean_box(0), v_____do__lift_2825_);
return v___x_2826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1(lean_object* v_toPure_2827_, lean_object* v_____r_2828_){
_start:
{
uint8_t v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; 
v___x_2829_ = 0;
v___x_2830_ = lean_box(v___x_2829_);
v___x_2831_ = lean_apply_2(v_toPure_2827_, lean_box(0), v___x_2830_);
return v___x_2831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2(lean_object* v_snd_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_){
_start:
{
lean_object* v___x_2842_; lean_object* v_rewriteCache_2843_; lean_object* v_acNfCache_2844_; lean_object* v_typeAnalysis_2845_; lean_object* v_goal_2846_; uint8_t v_didChange_2847_; lean_object* v___x_2849_; uint8_t v_isShared_2850_; uint8_t v_isSharedCheck_2857_; 
v___x_2842_ = lean_st_ref_take(v___y_2834_);
v_rewriteCache_2843_ = lean_ctor_get(v___x_2842_, 0);
v_acNfCache_2844_ = lean_ctor_get(v___x_2842_, 1);
v_typeAnalysis_2845_ = lean_ctor_get(v___x_2842_, 2);
v_goal_2846_ = lean_ctor_get(v___x_2842_, 3);
v_didChange_2847_ = lean_ctor_get_uint8(v___x_2842_, sizeof(void*)*5);
v_isSharedCheck_2857_ = !lean_is_exclusive(v___x_2842_);
if (v_isSharedCheck_2857_ == 0)
{
lean_object* v_unused_2858_; 
v_unused_2858_ = lean_ctor_get(v___x_2842_, 4);
lean_dec(v_unused_2858_);
v___x_2849_ = v___x_2842_;
v_isShared_2850_ = v_isSharedCheck_2857_;
goto v_resetjp_2848_;
}
else
{
lean_inc(v_goal_2846_);
lean_inc(v_typeAnalysis_2845_);
lean_inc(v_acNfCache_2844_);
lean_inc(v_rewriteCache_2843_);
lean_dec(v___x_2842_);
v___x_2849_ = lean_box(0);
v_isShared_2850_ = v_isSharedCheck_2857_;
goto v_resetjp_2848_;
}
v_resetjp_2848_:
{
lean_object* v___x_2852_; 
if (v_isShared_2850_ == 0)
{
lean_ctor_set(v___x_2849_, 4, v_snd_2832_);
v___x_2852_ = v___x_2849_;
goto v_reusejp_2851_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v_rewriteCache_2843_);
lean_ctor_set(v_reuseFailAlloc_2856_, 1, v_acNfCache_2844_);
lean_ctor_set(v_reuseFailAlloc_2856_, 2, v_typeAnalysis_2845_);
lean_ctor_set(v_reuseFailAlloc_2856_, 3, v_goal_2846_);
lean_ctor_set(v_reuseFailAlloc_2856_, 4, v_snd_2832_);
lean_ctor_set_uint8(v_reuseFailAlloc_2856_, sizeof(void*)*5, v_didChange_2847_);
v___x_2852_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2851_;
}
v_reusejp_2851_:
{
lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; 
v___x_2853_ = lean_st_ref_set(v___y_2834_, v___x_2852_);
v___x_2854_ = lean_box(0);
v___x_2855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2855_, 0, v___x_2854_);
return v___x_2855_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2___boxed(lean_object* v_snd_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_){
_start:
{
lean_object* v_res_2869_; 
v_res_2869_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2(v_snd_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_);
lean_dec(v___y_2867_);
lean_dec_ref(v___y_2866_);
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
lean_dec(v___y_2863_);
lean_dec_ref(v___y_2862_);
lean_dec(v___y_2861_);
lean_dec_ref(v___y_2860_);
return v_res_2869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3(lean_object* v_inst_2870_, lean_object* v_toBind_2871_, lean_object* v___f_2872_, lean_object* v_toPure_2873_, lean_object* v_____s_2874_){
_start:
{
lean_object* v_fst_2875_; 
v_fst_2875_ = lean_ctor_get(v_____s_2874_, 0);
if (lean_obj_tag(v_fst_2875_) == 0)
{
lean_object* v_snd_2876_; lean_object* v___f_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
lean_dec(v_toPure_2873_);
v_snd_2876_ = lean_ctor_get(v_____s_2874_, 1);
lean_inc(v_snd_2876_);
lean_dec_ref(v_____s_2874_);
v___f_2877_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2___boxed), 10, 1);
lean_closure_set(v___f_2877_, 0, v_snd_2876_);
v___x_2878_ = lean_apply_2(v_inst_2870_, lean_box(0), v___f_2877_);
v___x_2879_ = lean_apply_4(v_toBind_2871_, lean_box(0), lean_box(0), v___x_2878_, v___f_2872_);
return v___x_2879_;
}
else
{
lean_object* v_val_2880_; lean_object* v___x_2881_; 
lean_inc_ref(v_fst_2875_);
lean_dec_ref(v_____s_2874_);
lean_dec(v___f_2872_);
lean_dec(v_toBind_2871_);
lean_dec(v_inst_2870_);
v_val_2880_ = lean_ctor_get(v_fst_2875_, 0);
lean_inc(v_val_2880_);
lean_dec_ref_known(v_fst_2875_, 1);
v___x_2881_ = lean_apply_2(v_toPure_2873_, lean_box(0), v_val_2880_);
return v___x_2881_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4(lean_object* v_toPure_2882_, lean_object* v_next_2883_, lean_object* v_G_2884_, lean_object* v_____do__lift_2885_){
_start:
{
if (lean_obj_tag(v_____do__lift_2885_) == 0)
{
lean_object* v_a_2886_; lean_object* v___x_2887_; 
lean_dec(v_G_2884_);
v_a_2886_ = lean_ctor_get(v_____do__lift_2885_, 0);
lean_inc(v_a_2886_);
lean_dec_ref_known(v_____do__lift_2885_, 1);
v___x_2887_ = lean_apply_2(v_toPure_2882_, lean_box(0), v_a_2886_);
return v___x_2887_;
}
else
{
lean_object* v_a_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
lean_dec(v_toPure_2882_);
v_a_2888_ = lean_ctor_get(v_____do__lift_2885_, 0);
lean_inc(v_a_2888_);
lean_dec_ref_known(v_____do__lift_2885_, 1);
v___x_2889_ = lean_unsigned_to_nat(1u);
v___x_2890_ = lean_nat_add(v_next_2883_, v___x_2889_);
v___x_2891_ = lean_apply_4(v_G_2884_, v___x_2890_, v_a_2888_, lean_box(0), lean_box(0));
return v___x_2891_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4___boxed(lean_object* v_toPure_2892_, lean_object* v_next_2893_, lean_object* v_G_2894_, lean_object* v_____do__lift_2895_){
_start:
{
lean_object* v_res_2896_; 
v_res_2896_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4(v_toPure_2892_, v_next_2893_, v_G_2894_, v_____do__lift_2895_);
lean_dec(v_next_2893_);
return v_res_2896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5(lean_object* v_snd_2897_, lean_object* v_newHyp_2898_, lean_object* v___x_2899_, lean_object* v_toPure_2900_, lean_object* v_____r_2901_){
_start:
{
lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; 
v___x_2902_ = lean_array_push(v_snd_2897_, v_newHyp_2898_);
v___x_2903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2903_, 0, v___x_2899_);
lean_ctor_set(v___x_2903_, 1, v___x_2902_);
v___x_2904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2904_, 0, v___x_2903_);
v___x_2905_ = lean_apply_2(v_toPure_2900_, lean_box(0), v___x_2904_);
return v___x_2905_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9(lean_object* v_toPure_2906_, lean_object* v___x_2907_, lean_object* v_____do__lift_2908_, lean_object* v_____do__lift_2909_){
_start:
{
uint8_t v_hasTrace_2910_; 
v_hasTrace_2910_ = lean_ctor_get_uint8(v_____do__lift_2909_, sizeof(void*)*1);
if (v_hasTrace_2910_ == 0)
{
lean_object* v___x_2911_; lean_object* v___x_2912_; 
lean_dec(v___x_2907_);
v___x_2911_ = lean_box(v_hasTrace_2910_);
v___x_2912_ = lean_apply_2(v_toPure_2906_, lean_box(0), v___x_2911_);
return v___x_2912_;
}
else
{
lean_object* v___x_2913_; lean_object* v___x_2914_; uint8_t v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; 
v___x_2913_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13));
v___x_2914_ = l_Lean_Name_append(v___x_2913_, v___x_2907_);
v___x_2915_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_2908_, v_____do__lift_2909_, v___x_2914_);
lean_dec(v___x_2914_);
v___x_2916_ = lean_box(v___x_2915_);
v___x_2917_ = lean_apply_2(v_toPure_2906_, lean_box(0), v___x_2916_);
return v___x_2917_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9___boxed(lean_object* v_toPure_2918_, lean_object* v___x_2919_, lean_object* v_____do__lift_2920_, lean_object* v_____do__lift_2921_){
_start:
{
lean_object* v_res_2922_; 
v_res_2922_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9(v_toPure_2918_, v___x_2919_, v_____do__lift_2920_, v_____do__lift_2921_);
lean_dec_ref(v_____do__lift_2921_);
lean_dec_ref(v_____do__lift_2920_);
return v_res_2922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6(lean_object* v_toPure_2923_, lean_object* v___x_2924_, lean_object* v_toBind_2925_, lean_object* v_inst_2926_, lean_object* v_____do__lift_2927_){
_start:
{
lean_object* v___f_2928_; lean_object* v___x_2929_; 
v___f_2928_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9___boxed), 4, 3);
lean_closure_set(v___f_2928_, 0, v_toPure_2923_);
lean_closure_set(v___f_2928_, 1, v___x_2924_);
lean_closure_set(v___f_2928_, 2, v_____do__lift_2927_);
v___x_2929_ = lean_apply_4(v_toBind_2925_, lean_box(0), lean_box(0), v_inst_2926_, v___f_2928_);
return v___x_2929_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7(lean_object* v___f_2930_, lean_object* v_inst_2931_, lean_object* v___x_2932_, lean_object* v_type_2933_, lean_object* v_inst_2934_, lean_object* v_inst_2935_, lean_object* v_inst_2936_, lean_object* v___x_2937_, lean_object* v_toBind_2938_, lean_object* v___f_2939_, uint8_t v_____do__lift_2940_){
_start:
{
if (v_____do__lift_2940_ == 0)
{
lean_object* v___x_2941_; lean_object* v___x_2942_; 
lean_dec(v___f_2939_);
lean_dec(v_toBind_2938_);
lean_dec(v___x_2937_);
lean_dec(v_inst_2936_);
lean_dec_ref(v_inst_2935_);
lean_dec_ref(v_inst_2934_);
lean_dec_ref(v_type_2933_);
lean_dec_ref(v___x_2932_);
lean_dec_ref(v_inst_2931_);
v___x_2941_ = lean_box(0);
v___x_2942_ = lean_apply_1(v___f_2930_, v___x_2941_);
return v___x_2942_;
}
else
{
lean_object* v_toMonadRef_2943_; lean_object* v_type_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; 
lean_dec(v___f_2930_);
v_toMonadRef_2943_ = lean_ctor_get(v_inst_2931_, 1);
lean_inc_ref(v_toMonadRef_2943_);
lean_dec_ref(v_inst_2931_);
v_type_2944_ = lean_ctor_get(v___x_2932_, 1);
lean_inc_ref(v_type_2944_);
lean_dec_ref(v___x_2932_);
v___x_2945_ = l_Lean_MessageData_ofExpr(v_type_2944_);
v___x_2946_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_2947_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2945_);
lean_ctor_set(v___x_2947_, 1, v___x_2946_);
v___x_2948_ = l_Lean_MessageData_ofExpr(v_type_2933_);
v___x_2949_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2947_);
lean_ctor_set(v___x_2949_, 1, v___x_2948_);
v___x_2950_ = l_Lean_addTrace___redArg(v_inst_2934_, v_inst_2935_, v_toMonadRef_2943_, v_inst_2936_, v___x_2937_, v___x_2949_);
v___x_2951_ = lean_apply_4(v_toBind_2938_, lean_box(0), lean_box(0), v___x_2950_, v___f_2939_);
return v___x_2951_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7___boxed(lean_object* v___f_2952_, lean_object* v_inst_2953_, lean_object* v___x_2954_, lean_object* v_type_2955_, lean_object* v_inst_2956_, lean_object* v_inst_2957_, lean_object* v_inst_2958_, lean_object* v___x_2959_, lean_object* v_toBind_2960_, lean_object* v___f_2961_, lean_object* v_____do__lift_2962_){
_start:
{
uint8_t v_____do__lift_1944__boxed_2963_; lean_object* v_res_2964_; 
v_____do__lift_1944__boxed_2963_ = lean_unbox(v_____do__lift_2962_);
v_res_2964_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7(v___f_2952_, v_inst_2953_, v___x_2954_, v_type_2955_, v_inst_2956_, v_inst_2957_, v_inst_2958_, v___x_2959_, v_toBind_2960_, v___f_2961_, v_____do__lift_1944__boxed_2963_);
return v_res_2964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8(uint8_t v___x_2965_, lean_object* v_snd_2966_, lean_object* v_toPure_2967_, lean_object* v_____r_2968_){
_start:
{
lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; 
v___x_2969_ = lean_box(v___x_2965_);
v___x_2970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2970_, 0, v___x_2969_);
v___x_2971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2971_, 0, v___x_2970_);
lean_ctor_set(v___x_2971_, 1, v_snd_2966_);
v___x_2972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2972_, 0, v___x_2971_);
v___x_2973_ = lean_apply_2(v_toPure_2967_, lean_box(0), v___x_2972_);
return v___x_2973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8___boxed(lean_object* v___x_2974_, lean_object* v_snd_2975_, lean_object* v_toPure_2976_, lean_object* v_____r_2977_){
_start:
{
uint8_t v___x_1982__boxed_2978_; lean_object* v_res_2979_; 
v___x_1982__boxed_2978_ = lean_unbox(v___x_2974_);
v_res_2979_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8(v___x_1982__boxed_2978_, v_snd_2975_, v_toPure_2976_, v_____r_2977_);
return v_res_2979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10(lean_object* v_inst_2980_, lean_object* v_value_2981_, lean_object* v_toBind_2982_, lean_object* v___f_2983_, lean_object* v_____do__lift_2984_){
_start:
{
lean_object* v___x_2985_; lean_object* v___x_2986_; 
v___x_2985_ = l_Lean_MVarId_assign___redArg(v_inst_2980_, v_____do__lift_2984_, v_value_2981_);
v___x_2986_ = lean_apply_4(v_toBind_2982_, lean_box(0), lean_box(0), v___x_2985_, v___f_2983_);
return v___x_2986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11(lean_object* v_snd_2987_, lean_object* v___x_2988_, lean_object* v_toPure_2989_, lean_object* v_inst_2990_, lean_object* v_toBind_2991_, lean_object* v_inst_2992_, lean_object* v_inst_2993_, lean_object* v_inst_2994_, lean_object* v___x_2995_, lean_object* v_inst_2996_, lean_object* v_inst_2997_, lean_object* v_inst_2998_, lean_object* v_newHyp_2999_){
_start:
{
lean_object* v_type_3000_; lean_object* v_value_3001_; uint8_t v___x_3002_; 
v_type_3000_ = lean_ctor_get(v_newHyp_2999_, 1);
v_value_3001_ = lean_ctor_get(v_newHyp_2999_, 2);
lean_inc_ref(v_type_3000_);
v___x_3002_ = l_Lean_Expr_isFalse(v_type_3000_);
if (v___x_3002_ == 0)
{
lean_object* v___f_3003_; lean_object* v___f_3004_; lean_object* v___f_3005_; lean_object* v___f_3006_; uint8_t v___x_3014_; 
lean_dec_ref(v_inst_2998_);
lean_inc(v_toPure_2989_);
lean_inc(v___x_2988_);
lean_inc_ref(v_newHyp_2999_);
lean_inc(v_snd_2987_);
v___f_3003_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5), 5, 4);
lean_closure_set(v___f_3003_, 0, v_snd_2987_);
lean_closure_set(v___f_3003_, 1, v_newHyp_2999_);
lean_closure_set(v___f_3003_, 2, v___x_2988_);
lean_closure_set(v___f_3003_, 3, v_toPure_2989_);
v___f_3004_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3004_, 0, v___f_3003_);
lean_inc(v_toBind_2991_);
v___f_3005_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_3005_, 0, v_inst_2990_);
lean_closure_set(v___f_3005_, 1, v_toBind_2991_);
lean_closure_set(v___f_3005_, 2, v___f_3004_);
lean_inc_ref(v___f_3005_);
v___f_3006_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3006_, 0, v___f_3005_);
v___x_3014_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp_beq(v___x_2995_, v_newHyp_2999_);
if (v___x_3014_ == 0)
{
lean_inc_ref(v_type_3000_);
lean_dec_ref(v_newHyp_2999_);
lean_dec(v___x_2988_);
lean_dec(v_snd_2987_);
goto v___jp_3007_;
}
else
{
if (v___x_3002_ == 0)
{
lean_object* v___x_3015_; lean_object* v___x_3016_; 
lean_dec_ref(v___f_3006_);
lean_dec_ref(v___f_3005_);
lean_dec(v_inst_2997_);
lean_dec_ref(v_inst_2996_);
lean_dec_ref(v___x_2995_);
lean_dec_ref(v_inst_2994_);
lean_dec(v_inst_2993_);
lean_dec_ref(v_inst_2992_);
lean_dec(v_toBind_2991_);
v___x_3015_ = lean_box(0);
v___x_3016_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5(v_snd_2987_, v_newHyp_2999_, v___x_2988_, v_toPure_2989_, v___x_3015_);
return v___x_3016_;
}
else
{
lean_inc_ref(v_type_3000_);
lean_dec_ref(v_newHyp_2999_);
lean_dec(v___x_2988_);
lean_dec(v_snd_2987_);
goto v___jp_3007_;
}
}
v___jp_3007_:
{
lean_object* v_getInheritedTraceOptions_3008_; lean_object* v___x_3009_; lean_object* v___f_3010_; lean_object* v___f_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; 
v_getInheritedTraceOptions_3008_ = lean_ctor_get(v_inst_2992_, 2);
lean_inc(v_getInheritedTraceOptions_3008_);
v___x_3009_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
lean_inc_n(v_toBind_2991_, 3);
v___f_3010_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6), 5, 4);
lean_closure_set(v___f_3010_, 0, v_toPure_2989_);
lean_closure_set(v___f_3010_, 1, v___x_3009_);
lean_closure_set(v___f_3010_, 2, v_toBind_2991_);
lean_closure_set(v___f_3010_, 3, v_inst_2993_);
v___f_3011_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7___boxed), 11, 10);
lean_closure_set(v___f_3011_, 0, v___f_3005_);
lean_closure_set(v___f_3011_, 1, v_inst_2994_);
lean_closure_set(v___f_3011_, 2, v___x_2995_);
lean_closure_set(v___f_3011_, 3, v_type_3000_);
lean_closure_set(v___f_3011_, 4, v_inst_2996_);
lean_closure_set(v___f_3011_, 5, v_inst_2992_);
lean_closure_set(v___f_3011_, 6, v_inst_2997_);
lean_closure_set(v___f_3011_, 7, v___x_3009_);
lean_closure_set(v___f_3011_, 8, v_toBind_2991_);
lean_closure_set(v___f_3011_, 9, v___f_3006_);
v___x_3012_ = lean_apply_4(v_toBind_2991_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3008_, v___f_3010_);
v___x_3013_ = lean_apply_4(v_toBind_2991_, lean_box(0), lean_box(0), v___x_3012_, v___f_3011_);
return v___x_3013_;
}
}
else
{
lean_object* v___x_3017_; lean_object* v___f_3018_; lean_object* v___f_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; 
lean_inc_ref(v_value_3001_);
lean_dec_ref(v_newHyp_2999_);
lean_dec(v_inst_2997_);
lean_dec_ref(v_inst_2996_);
lean_dec_ref(v___x_2995_);
lean_dec_ref(v_inst_2994_);
lean_dec(v_inst_2993_);
lean_dec_ref(v_inst_2992_);
lean_dec(v___x_2988_);
v___x_3017_ = lean_box(v___x_3002_);
v___f_3018_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8___boxed), 4, 3);
lean_closure_set(v___f_3018_, 0, v___x_3017_);
lean_closure_set(v___f_3018_, 1, v_snd_2987_);
lean_closure_set(v___f_3018_, 2, v_toPure_2989_);
lean_inc(v_toBind_2991_);
v___f_3019_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10), 5, 4);
lean_closure_set(v___f_3019_, 0, v_inst_2998_);
lean_closure_set(v___f_3019_, 1, v_value_3001_);
lean_closure_set(v___f_3019_, 2, v_toBind_2991_);
lean_closure_set(v___f_3019_, 3, v___f_3018_);
v___x_3020_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getGoal___boxed), 9, 0);
v___x_3021_ = lean_apply_2(v_inst_2990_, lean_box(0), v___x_3020_);
v___x_3022_ = lean_apply_4(v_toBind_2991_, lean_box(0), lean_box(0), v___x_3021_, v___f_3019_);
return v___x_3022_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12(lean_object* v___x_3023_, lean_object* v_toPure_3024_, lean_object* v_hyps_3025_, lean_object* v___x_3026_, lean_object* v_inst_3027_, lean_object* v_toBind_3028_, lean_object* v_inst_3029_, lean_object* v_inst_3030_, lean_object* v_inst_3031_, lean_object* v_inst_3032_, lean_object* v_inst_3033_, lean_object* v_inst_3034_, lean_object* v_f_3035_, lean_object* v___f_3036_, lean_object* v_next_3037_, lean_object* v_acc_3038_, lean_object* v_h_3039_, lean_object* v_G_3040_){
_start:
{
uint8_t v___x_3041_; 
v___x_3041_ = lean_nat_dec_lt(v_next_3037_, v___x_3023_);
if (v___x_3041_ == 0)
{
lean_object* v___x_3042_; 
lean_dec(v_G_3040_);
lean_dec(v_next_3037_);
lean_dec(v___f_3036_);
lean_dec(v_f_3035_);
lean_dec_ref(v_inst_3034_);
lean_dec(v_inst_3033_);
lean_dec_ref(v_inst_3032_);
lean_dec_ref(v_inst_3031_);
lean_dec(v_inst_3030_);
lean_dec_ref(v_inst_3029_);
lean_dec(v_toBind_3028_);
lean_dec(v_inst_3027_);
lean_dec(v___x_3026_);
v___x_3042_ = lean_apply_2(v_toPure_3024_, lean_box(0), v_acc_3038_);
return v___x_3042_;
}
else
{
lean_object* v_snd_3043_; lean_object* v___f_3044_; lean_object* v___x_3045_; lean_object* v___f_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; 
v_snd_3043_ = lean_ctor_get(v_acc_3038_, 1);
lean_inc(v_snd_3043_);
lean_dec_ref(v_acc_3038_);
lean_inc(v_next_3037_);
lean_inc(v_toPure_3024_);
v___f_3044_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_3044_, 0, v_toPure_3024_);
lean_closure_set(v___f_3044_, 1, v_next_3037_);
lean_closure_set(v___f_3044_, 2, v_G_3040_);
v___x_3045_ = lean_array_fget_borrowed(v_hyps_3025_, v_next_3037_);
lean_inc_n(v___x_3045_, 2);
lean_inc_n(v_toBind_3028_, 3);
v___f_3046_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11), 13, 12);
lean_closure_set(v___f_3046_, 0, v_snd_3043_);
lean_closure_set(v___f_3046_, 1, v___x_3026_);
lean_closure_set(v___f_3046_, 2, v_toPure_3024_);
lean_closure_set(v___f_3046_, 3, v_inst_3027_);
lean_closure_set(v___f_3046_, 4, v_toBind_3028_);
lean_closure_set(v___f_3046_, 5, v_inst_3029_);
lean_closure_set(v___f_3046_, 6, v_inst_3030_);
lean_closure_set(v___f_3046_, 7, v_inst_3031_);
lean_closure_set(v___f_3046_, 8, v___x_3045_);
lean_closure_set(v___f_3046_, 9, v_inst_3032_);
lean_closure_set(v___f_3046_, 10, v_inst_3033_);
lean_closure_set(v___f_3046_, 11, v_inst_3034_);
v___x_3047_ = lean_apply_2(v_f_3035_, v_next_3037_, v___x_3045_);
v___x_3048_ = lean_apply_4(v_toBind_3028_, lean_box(0), lean_box(0), v___x_3047_, v___f_3046_);
v___x_3049_ = lean_apply_4(v_toBind_3028_, lean_box(0), lean_box(0), v___x_3048_, v___f_3036_);
v___x_3050_ = lean_apply_4(v_toBind_3028_, lean_box(0), lean_box(0), v___x_3049_, v___f_3044_);
return v___x_3050_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12___boxed(lean_object** _args){
lean_object* v___x_3051_ = _args[0];
lean_object* v_toPure_3052_ = _args[1];
lean_object* v_hyps_3053_ = _args[2];
lean_object* v___x_3054_ = _args[3];
lean_object* v_inst_3055_ = _args[4];
lean_object* v_toBind_3056_ = _args[5];
lean_object* v_inst_3057_ = _args[6];
lean_object* v_inst_3058_ = _args[7];
lean_object* v_inst_3059_ = _args[8];
lean_object* v_inst_3060_ = _args[9];
lean_object* v_inst_3061_ = _args[10];
lean_object* v_inst_3062_ = _args[11];
lean_object* v_f_3063_ = _args[12];
lean_object* v___f_3064_ = _args[13];
lean_object* v_next_3065_ = _args[14];
lean_object* v_acc_3066_ = _args[15];
lean_object* v_h_3067_ = _args[16];
lean_object* v_G_3068_ = _args[17];
_start:
{
lean_object* v_res_3069_; 
v_res_3069_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12(v___x_3051_, v_toPure_3052_, v_hyps_3053_, v___x_3054_, v_inst_3055_, v_toBind_3056_, v_inst_3057_, v_inst_3058_, v_inst_3059_, v_inst_3060_, v_inst_3061_, v_inst_3062_, v_f_3063_, v___f_3064_, v_next_3065_, v_acc_3066_, v_h_3067_, v_G_3068_);
lean_dec_ref(v_hyps_3053_);
lean_dec(v___x_3051_);
return v_res_3069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__13(lean_object* v_toPure_3070_, lean_object* v_inst_3071_, lean_object* v_toBind_3072_, lean_object* v_inst_3073_, lean_object* v_inst_3074_, lean_object* v_inst_3075_, lean_object* v_inst_3076_, lean_object* v_inst_3077_, lean_object* v_inst_3078_, lean_object* v_f_3079_, lean_object* v___f_3080_, lean_object* v___f_3081_, lean_object* v_hyps_3082_){
_start:
{
lean_object* v___x_3083_; lean_object* v_newHyps_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___f_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; 
v___x_3083_ = lean_array_get_size(v_hyps_3082_);
v_newHyps_3084_ = lean_mk_empty_array_with_capacity(v___x_3083_);
v___x_3085_ = lean_unsigned_to_nat(0u);
v___x_3086_ = lean_box(0);
lean_inc(v_toBind_3072_);
v___f_3087_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12___boxed), 18, 14);
lean_closure_set(v___f_3087_, 0, v___x_3083_);
lean_closure_set(v___f_3087_, 1, v_toPure_3070_);
lean_closure_set(v___f_3087_, 2, v_hyps_3082_);
lean_closure_set(v___f_3087_, 3, v___x_3086_);
lean_closure_set(v___f_3087_, 4, v_inst_3071_);
lean_closure_set(v___f_3087_, 5, v_toBind_3072_);
lean_closure_set(v___f_3087_, 6, v_inst_3073_);
lean_closure_set(v___f_3087_, 7, v_inst_3074_);
lean_closure_set(v___f_3087_, 8, v_inst_3075_);
lean_closure_set(v___f_3087_, 9, v_inst_3076_);
lean_closure_set(v___f_3087_, 10, v_inst_3077_);
lean_closure_set(v___f_3087_, 11, v_inst_3078_);
lean_closure_set(v___f_3087_, 12, v_f_3079_);
lean_closure_set(v___f_3087_, 13, v___f_3080_);
v___x_3088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3088_, 0, v___x_3086_);
lean_ctor_set(v___x_3088_, 1, v_newHyps_3084_);
v___x_3089_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_3087_, v___x_3085_, v___x_3088_, lean_box(0));
v___x_3090_ = lean_apply_4(v_toBind_3072_, lean_box(0), lean_box(0), v___x_3089_, v___f_3081_);
return v___x_3090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg(lean_object* v_inst_3091_, lean_object* v_inst_3092_, lean_object* v_inst_3093_, lean_object* v_inst_3094_, lean_object* v_inst_3095_, lean_object* v_inst_3096_, lean_object* v_inst_3097_, lean_object* v_f_3098_){
_start:
{
lean_object* v_toApplicative_3099_; lean_object* v_toBind_3100_; lean_object* v_toPure_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___f_3104_; lean_object* v___f_3105_; lean_object* v___f_3106_; lean_object* v___f_3107_; lean_object* v___x_3108_; 
v_toApplicative_3099_ = lean_ctor_get(v_inst_3091_, 0);
v_toBind_3100_ = lean_ctor_get(v_inst_3091_, 1);
lean_inc_n(v_toBind_3100_, 3);
v_toPure_3101_ = lean_ctor_get(v_toApplicative_3099_, 1);
lean_inc_n(v_toPure_3101_, 4);
v___x_3102_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 9, 0);
lean_inc_n(v_inst_3092_, 2);
v___x_3103_ = lean_apply_2(v_inst_3092_, lean_box(0), v___x_3102_);
v___f_3104_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3104_, 0, v_toPure_3101_);
v___f_3105_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3105_, 0, v_toPure_3101_);
v___f_3106_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3), 5, 4);
lean_closure_set(v___f_3106_, 0, v_inst_3092_);
lean_closure_set(v___f_3106_, 1, v_toBind_3100_);
lean_closure_set(v___f_3106_, 2, v___f_3105_);
lean_closure_set(v___f_3106_, 3, v_toPure_3101_);
v___f_3107_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__13), 13, 12);
lean_closure_set(v___f_3107_, 0, v_toPure_3101_);
lean_closure_set(v___f_3107_, 1, v_inst_3092_);
lean_closure_set(v___f_3107_, 2, v_toBind_3100_);
lean_closure_set(v___f_3107_, 3, v_inst_3095_);
lean_closure_set(v___f_3107_, 4, v_inst_3096_);
lean_closure_set(v___f_3107_, 5, v_inst_3093_);
lean_closure_set(v___f_3107_, 6, v_inst_3091_);
lean_closure_set(v___f_3107_, 7, v_inst_3097_);
lean_closure_set(v___f_3107_, 8, v_inst_3094_);
lean_closure_set(v___f_3107_, 9, v_f_3098_);
lean_closure_set(v___f_3107_, 10, v___f_3104_);
lean_closure_set(v___f_3107_, 11, v___f_3106_);
v___x_3108_ = lean_apply_4(v_toBind_3100_, lean_box(0), lean_box(0), v___x_3103_, v___f_3107_);
return v___x_3108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps(lean_object* v_m_3109_, lean_object* v_inst_3110_, lean_object* v_inst_3111_, lean_object* v_inst_3112_, lean_object* v_inst_3113_, lean_object* v_inst_3114_, lean_object* v_inst_3115_, lean_object* v_inst_3116_, lean_object* v_f_3117_){
_start:
{
lean_object* v_toApplicative_3118_; lean_object* v_toBind_3119_; lean_object* v_toPure_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___f_3123_; lean_object* v___f_3124_; lean_object* v___f_3125_; lean_object* v___f_3126_; lean_object* v___x_3127_; 
v_toApplicative_3118_ = lean_ctor_get(v_inst_3110_, 0);
v_toBind_3119_ = lean_ctor_get(v_inst_3110_, 1);
lean_inc_n(v_toBind_3119_, 3);
v_toPure_3120_ = lean_ctor_get(v_toApplicative_3118_, 1);
lean_inc_n(v_toPure_3120_, 4);
v___x_3121_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 9, 0);
lean_inc_n(v_inst_3111_, 2);
v___x_3122_ = lean_apply_2(v_inst_3111_, lean_box(0), v___x_3121_);
v___f_3123_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3123_, 0, v_toPure_3120_);
v___f_3124_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3124_, 0, v_toPure_3120_);
v___f_3125_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3), 5, 4);
lean_closure_set(v___f_3125_, 0, v_inst_3111_);
lean_closure_set(v___f_3125_, 1, v_toBind_3119_);
lean_closure_set(v___f_3125_, 2, v___f_3124_);
lean_closure_set(v___f_3125_, 3, v_toPure_3120_);
v___f_3126_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__13), 13, 12);
lean_closure_set(v___f_3126_, 0, v_toPure_3120_);
lean_closure_set(v___f_3126_, 1, v_inst_3111_);
lean_closure_set(v___f_3126_, 2, v_toBind_3119_);
lean_closure_set(v___f_3126_, 3, v_inst_3114_);
lean_closure_set(v___f_3126_, 4, v_inst_3115_);
lean_closure_set(v___f_3126_, 5, v_inst_3112_);
lean_closure_set(v___f_3126_, 6, v_inst_3110_);
lean_closure_set(v___f_3126_, 7, v_inst_3116_);
lean_closure_set(v___f_3126_, 8, v_inst_3113_);
lean_closure_set(v___f_3126_, 9, v_f_3117_);
lean_closure_set(v___f_3126_, 10, v___f_3123_);
lean_closure_set(v___f_3126_, 11, v___f_3125_);
v___x_3127_ = lean_apply_4(v_toBind_3119_, lean_box(0), lean_box(0), v___x_3122_, v___f_3126_);
return v___x_3127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__14(lean_object* v_snd_3128_, lean_object* v___x_3129_, lean_object* v_toPure_3130_, lean_object* v_inst_3131_, lean_object* v_toBind_3132_, lean_object* v_inst_3133_, lean_object* v_inst_3134_, lean_object* v___x_3135_, lean_object* v_inst_3136_, lean_object* v_inst_3137_, lean_object* v_inst_3138_, lean_object* v_inst_3139_, lean_object* v_newHyp_3140_){
_start:
{
lean_object* v_type_3141_; lean_object* v_value_3142_; uint8_t v___x_3143_; 
v_type_3141_ = lean_ctor_get(v_newHyp_3140_, 1);
v_value_3142_ = lean_ctor_get(v_newHyp_3140_, 2);
lean_inc_ref(v_type_3141_);
v___x_3143_ = l_Lean_Expr_isFalse(v_type_3141_);
if (v___x_3143_ == 0)
{
lean_object* v___f_3144_; lean_object* v___f_3145_; lean_object* v___f_3146_; lean_object* v___f_3147_; uint8_t v___x_3155_; 
lean_dec_ref(v_inst_3139_);
lean_inc(v_toPure_3130_);
lean_inc(v___x_3129_);
lean_inc_ref(v_newHyp_3140_);
lean_inc(v_snd_3128_);
v___f_3144_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5), 5, 4);
lean_closure_set(v___f_3144_, 0, v_snd_3128_);
lean_closure_set(v___f_3144_, 1, v_newHyp_3140_);
lean_closure_set(v___f_3144_, 2, v___x_3129_);
lean_closure_set(v___f_3144_, 3, v_toPure_3130_);
v___f_3145_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3145_, 0, v___f_3144_);
lean_inc(v_toBind_3132_);
v___f_3146_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_3146_, 0, v_inst_3131_);
lean_closure_set(v___f_3146_, 1, v_toBind_3132_);
lean_closure_set(v___f_3146_, 2, v___f_3145_);
lean_inc_ref(v___f_3146_);
v___f_3147_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3147_, 0, v___f_3146_);
v___x_3155_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp_beq(v___x_3135_, v_newHyp_3140_);
if (v___x_3155_ == 0)
{
lean_inc_ref(v_type_3141_);
lean_dec_ref(v_newHyp_3140_);
lean_dec(v___x_3129_);
lean_dec(v_snd_3128_);
goto v___jp_3148_;
}
else
{
if (v___x_3143_ == 0)
{
lean_object* v___x_3156_; lean_object* v___x_3157_; 
lean_dec_ref(v___f_3147_);
lean_dec_ref(v___f_3146_);
lean_dec(v_inst_3138_);
lean_dec(v_inst_3137_);
lean_dec_ref(v_inst_3136_);
lean_dec_ref(v___x_3135_);
lean_dec_ref(v_inst_3134_);
lean_dec_ref(v_inst_3133_);
lean_dec(v_toBind_3132_);
v___x_3156_ = lean_box(0);
v___x_3157_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5(v_snd_3128_, v_newHyp_3140_, v___x_3129_, v_toPure_3130_, v___x_3156_);
return v___x_3157_;
}
else
{
lean_inc_ref(v_type_3141_);
lean_dec_ref(v_newHyp_3140_);
lean_dec(v___x_3129_);
lean_dec(v_snd_3128_);
goto v___jp_3148_;
}
}
v___jp_3148_:
{
lean_object* v_getInheritedTraceOptions_3149_; lean_object* v___x_3150_; lean_object* v___f_3151_; lean_object* v___f_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; 
v_getInheritedTraceOptions_3149_ = lean_ctor_get(v_inst_3133_, 2);
lean_inc(v_getInheritedTraceOptions_3149_);
v___x_3150_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
lean_inc_n(v_toBind_3132_, 3);
v___f_3151_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7___boxed), 11, 10);
lean_closure_set(v___f_3151_, 0, v___f_3146_);
lean_closure_set(v___f_3151_, 1, v_inst_3134_);
lean_closure_set(v___f_3151_, 2, v___x_3135_);
lean_closure_set(v___f_3151_, 3, v_type_3141_);
lean_closure_set(v___f_3151_, 4, v_inst_3136_);
lean_closure_set(v___f_3151_, 5, v_inst_3133_);
lean_closure_set(v___f_3151_, 6, v_inst_3137_);
lean_closure_set(v___f_3151_, 7, v___x_3150_);
lean_closure_set(v___f_3151_, 8, v_toBind_3132_);
lean_closure_set(v___f_3151_, 9, v___f_3147_);
v___f_3152_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6), 5, 4);
lean_closure_set(v___f_3152_, 0, v_toPure_3130_);
lean_closure_set(v___f_3152_, 1, v___x_3150_);
lean_closure_set(v___f_3152_, 2, v_toBind_3132_);
lean_closure_set(v___f_3152_, 3, v_inst_3138_);
v___x_3153_ = lean_apply_4(v_toBind_3132_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3149_, v___f_3152_);
v___x_3154_ = lean_apply_4(v_toBind_3132_, lean_box(0), lean_box(0), v___x_3153_, v___f_3151_);
return v___x_3154_;
}
}
else
{
lean_object* v___x_3158_; lean_object* v___f_3159_; lean_object* v___f_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; 
lean_inc_ref(v_value_3142_);
lean_dec_ref(v_newHyp_3140_);
lean_dec(v_inst_3138_);
lean_dec(v_inst_3137_);
lean_dec_ref(v_inst_3136_);
lean_dec_ref(v___x_3135_);
lean_dec_ref(v_inst_3134_);
lean_dec_ref(v_inst_3133_);
lean_dec(v___x_3129_);
v___x_3158_ = lean_box(v___x_3143_);
v___f_3159_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8___boxed), 4, 3);
lean_closure_set(v___f_3159_, 0, v___x_3158_);
lean_closure_set(v___f_3159_, 1, v_snd_3128_);
lean_closure_set(v___f_3159_, 2, v_toPure_3130_);
lean_inc(v_toBind_3132_);
v___f_3160_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10), 5, 4);
lean_closure_set(v___f_3160_, 0, v_inst_3139_);
lean_closure_set(v___f_3160_, 1, v_value_3142_);
lean_closure_set(v___f_3160_, 2, v_toBind_3132_);
lean_closure_set(v___f_3160_, 3, v___f_3159_);
v___x_3161_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getGoal___boxed), 9, 0);
v___x_3162_ = lean_apply_2(v_inst_3131_, lean_box(0), v___x_3161_);
v___x_3163_ = lean_apply_4(v_toBind_3132_, lean_box(0), lean_box(0), v___x_3162_, v___f_3160_);
return v___x_3163_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0(lean_object* v___x_3164_, lean_object* v_toPure_3165_, lean_object* v_hyps_3166_, lean_object* v___x_3167_, lean_object* v_inst_3168_, lean_object* v_toBind_3169_, lean_object* v_inst_3170_, lean_object* v_inst_3171_, lean_object* v_inst_3172_, lean_object* v_inst_3173_, lean_object* v_inst_3174_, lean_object* v_inst_3175_, lean_object* v_f_3176_, lean_object* v___f_3177_, lean_object* v_next_3178_, lean_object* v_acc_3179_, lean_object* v_h_3180_, lean_object* v_G_3181_){
_start:
{
uint8_t v___x_3182_; 
v___x_3182_ = lean_nat_dec_lt(v_next_3178_, v___x_3164_);
if (v___x_3182_ == 0)
{
lean_object* v___x_3183_; 
lean_dec(v_G_3181_);
lean_dec(v_next_3178_);
lean_dec(v___f_3177_);
lean_dec(v_f_3176_);
lean_dec_ref(v_inst_3175_);
lean_dec(v_inst_3174_);
lean_dec(v_inst_3173_);
lean_dec_ref(v_inst_3172_);
lean_dec_ref(v_inst_3171_);
lean_dec_ref(v_inst_3170_);
lean_dec(v_toBind_3169_);
lean_dec(v_inst_3168_);
lean_dec(v___x_3167_);
v___x_3183_ = lean_apply_2(v_toPure_3165_, lean_box(0), v_acc_3179_);
return v___x_3183_;
}
else
{
lean_object* v_snd_3184_; lean_object* v___f_3185_; lean_object* v___x_3186_; lean_object* v___f_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; 
v_snd_3184_ = lean_ctor_get(v_acc_3179_, 1);
lean_inc(v_snd_3184_);
lean_dec_ref(v_acc_3179_);
lean_inc(v_next_3178_);
lean_inc(v_toPure_3165_);
v___f_3185_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_3185_, 0, v_toPure_3165_);
lean_closure_set(v___f_3185_, 1, v_next_3178_);
lean_closure_set(v___f_3185_, 2, v_G_3181_);
v___x_3186_ = lean_array_fget_borrowed(v_hyps_3166_, v_next_3178_);
lean_dec(v_next_3178_);
lean_inc_n(v___x_3186_, 2);
lean_inc_n(v_toBind_3169_, 3);
v___f_3187_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__14), 13, 12);
lean_closure_set(v___f_3187_, 0, v_snd_3184_);
lean_closure_set(v___f_3187_, 1, v___x_3167_);
lean_closure_set(v___f_3187_, 2, v_toPure_3165_);
lean_closure_set(v___f_3187_, 3, v_inst_3168_);
lean_closure_set(v___f_3187_, 4, v_toBind_3169_);
lean_closure_set(v___f_3187_, 5, v_inst_3170_);
lean_closure_set(v___f_3187_, 6, v_inst_3171_);
lean_closure_set(v___f_3187_, 7, v___x_3186_);
lean_closure_set(v___f_3187_, 8, v_inst_3172_);
lean_closure_set(v___f_3187_, 9, v_inst_3173_);
lean_closure_set(v___f_3187_, 10, v_inst_3174_);
lean_closure_set(v___f_3187_, 11, v_inst_3175_);
v___x_3188_ = lean_apply_1(v_f_3176_, v___x_3186_);
v___x_3189_ = lean_apply_4(v_toBind_3169_, lean_box(0), lean_box(0), v___x_3188_, v___f_3187_);
v___x_3190_ = lean_apply_4(v_toBind_3169_, lean_box(0), lean_box(0), v___x_3189_, v___f_3177_);
v___x_3191_ = lean_apply_4(v_toBind_3169_, lean_box(0), lean_box(0), v___x_3190_, v___f_3185_);
return v___x_3191_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_3192_ = _args[0];
lean_object* v_toPure_3193_ = _args[1];
lean_object* v_hyps_3194_ = _args[2];
lean_object* v___x_3195_ = _args[3];
lean_object* v_inst_3196_ = _args[4];
lean_object* v_toBind_3197_ = _args[5];
lean_object* v_inst_3198_ = _args[6];
lean_object* v_inst_3199_ = _args[7];
lean_object* v_inst_3200_ = _args[8];
lean_object* v_inst_3201_ = _args[9];
lean_object* v_inst_3202_ = _args[10];
lean_object* v_inst_3203_ = _args[11];
lean_object* v_f_3204_ = _args[12];
lean_object* v___f_3205_ = _args[13];
lean_object* v_next_3206_ = _args[14];
lean_object* v_acc_3207_ = _args[15];
lean_object* v_h_3208_ = _args[16];
lean_object* v_G_3209_ = _args[17];
_start:
{
lean_object* v_res_3210_; 
v_res_3210_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0(v___x_3192_, v_toPure_3193_, v_hyps_3194_, v___x_3195_, v_inst_3196_, v_toBind_3197_, v_inst_3198_, v_inst_3199_, v_inst_3200_, v_inst_3201_, v_inst_3202_, v_inst_3203_, v_f_3204_, v___f_3205_, v_next_3206_, v_acc_3207_, v_h_3208_, v_G_3209_);
lean_dec_ref(v_hyps_3194_);
lean_dec(v___x_3192_);
return v_res_3210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__1(lean_object* v_toPure_3211_, lean_object* v_inst_3212_, lean_object* v_toBind_3213_, lean_object* v_inst_3214_, lean_object* v_inst_3215_, lean_object* v_inst_3216_, lean_object* v_inst_3217_, lean_object* v_inst_3218_, lean_object* v_inst_3219_, lean_object* v_f_3220_, lean_object* v___f_3221_, lean_object* v___f_3222_, lean_object* v_hyps_3223_){
_start:
{
lean_object* v___x_3224_; lean_object* v_newHyps_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___f_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; 
v___x_3224_ = lean_array_get_size(v_hyps_3223_);
v_newHyps_3225_ = lean_mk_empty_array_with_capacity(v___x_3224_);
v___x_3226_ = lean_unsigned_to_nat(0u);
v___x_3227_ = lean_box(0);
lean_inc(v_toBind_3213_);
v___f_3228_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0___boxed), 18, 14);
lean_closure_set(v___f_3228_, 0, v___x_3224_);
lean_closure_set(v___f_3228_, 1, v_toPure_3211_);
lean_closure_set(v___f_3228_, 2, v_hyps_3223_);
lean_closure_set(v___f_3228_, 3, v___x_3227_);
lean_closure_set(v___f_3228_, 4, v_inst_3212_);
lean_closure_set(v___f_3228_, 5, v_toBind_3213_);
lean_closure_set(v___f_3228_, 6, v_inst_3214_);
lean_closure_set(v___f_3228_, 7, v_inst_3215_);
lean_closure_set(v___f_3228_, 8, v_inst_3216_);
lean_closure_set(v___f_3228_, 9, v_inst_3217_);
lean_closure_set(v___f_3228_, 10, v_inst_3218_);
lean_closure_set(v___f_3228_, 11, v_inst_3219_);
lean_closure_set(v___f_3228_, 12, v_f_3220_);
lean_closure_set(v___f_3228_, 13, v___f_3221_);
v___x_3229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3229_, 0, v___x_3227_);
lean_ctor_set(v___x_3229_, 1, v_newHyps_3225_);
v___x_3230_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_3228_, v___x_3226_, v___x_3229_, lean_box(0));
v___x_3231_ = lean_apply_4(v_toBind_3213_, lean_box(0), lean_box(0), v___x_3230_, v___f_3222_);
return v___x_3231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg(lean_object* v_inst_3232_, lean_object* v_inst_3233_, lean_object* v_inst_3234_, lean_object* v_inst_3235_, lean_object* v_inst_3236_, lean_object* v_inst_3237_, lean_object* v_inst_3238_, lean_object* v_f_3239_){
_start:
{
lean_object* v_toApplicative_3240_; lean_object* v_toBind_3241_; lean_object* v_toPure_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___f_3245_; lean_object* v___f_3246_; lean_object* v___f_3247_; lean_object* v___f_3248_; lean_object* v___x_3249_; 
v_toApplicative_3240_ = lean_ctor_get(v_inst_3232_, 0);
v_toBind_3241_ = lean_ctor_get(v_inst_3232_, 1);
lean_inc_n(v_toBind_3241_, 3);
v_toPure_3242_ = lean_ctor_get(v_toApplicative_3240_, 1);
lean_inc_n(v_toPure_3242_, 4);
v___x_3243_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 9, 0);
lean_inc_n(v_inst_3233_, 2);
v___x_3244_ = lean_apply_2(v_inst_3233_, lean_box(0), v___x_3243_);
v___f_3245_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3245_, 0, v_toPure_3242_);
v___f_3246_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3), 5, 4);
lean_closure_set(v___f_3246_, 0, v_inst_3233_);
lean_closure_set(v___f_3246_, 1, v_toBind_3241_);
lean_closure_set(v___f_3246_, 2, v___f_3245_);
lean_closure_set(v___f_3246_, 3, v_toPure_3242_);
v___f_3247_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3247_, 0, v_toPure_3242_);
v___f_3248_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__1), 13, 12);
lean_closure_set(v___f_3248_, 0, v_toPure_3242_);
lean_closure_set(v___f_3248_, 1, v_inst_3233_);
lean_closure_set(v___f_3248_, 2, v_toBind_3241_);
lean_closure_set(v___f_3248_, 3, v_inst_3236_);
lean_closure_set(v___f_3248_, 4, v_inst_3234_);
lean_closure_set(v___f_3248_, 5, v_inst_3232_);
lean_closure_set(v___f_3248_, 6, v_inst_3238_);
lean_closure_set(v___f_3248_, 7, v_inst_3237_);
lean_closure_set(v___f_3248_, 8, v_inst_3235_);
lean_closure_set(v___f_3248_, 9, v_f_3239_);
lean_closure_set(v___f_3248_, 10, v___f_3247_);
lean_closure_set(v___f_3248_, 11, v___f_3246_);
v___x_3249_ = lean_apply_4(v_toBind_3241_, lean_box(0), lean_box(0), v___x_3244_, v___f_3248_);
return v___x_3249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps(lean_object* v_m_3250_, lean_object* v_inst_3251_, lean_object* v_inst_3252_, lean_object* v_inst_3253_, lean_object* v_inst_3254_, lean_object* v_inst_3255_, lean_object* v_inst_3256_, lean_object* v_inst_3257_, lean_object* v_f_3258_){
_start:
{
lean_object* v_toApplicative_3259_; lean_object* v_toBind_3260_; lean_object* v_toPure_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___f_3264_; lean_object* v___f_3265_; lean_object* v___f_3266_; lean_object* v___f_3267_; lean_object* v___x_3268_; 
v_toApplicative_3259_ = lean_ctor_get(v_inst_3251_, 0);
v_toBind_3260_ = lean_ctor_get(v_inst_3251_, 1);
lean_inc_n(v_toBind_3260_, 3);
v_toPure_3261_ = lean_ctor_get(v_toApplicative_3259_, 1);
lean_inc_n(v_toPure_3261_, 4);
v___x_3262_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 9, 0);
lean_inc_n(v_inst_3252_, 2);
v___x_3263_ = lean_apply_2(v_inst_3252_, lean_box(0), v___x_3262_);
v___f_3264_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3264_, 0, v_toPure_3261_);
v___f_3265_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3), 5, 4);
lean_closure_set(v___f_3265_, 0, v_inst_3252_);
lean_closure_set(v___f_3265_, 1, v_toBind_3260_);
lean_closure_set(v___f_3265_, 2, v___f_3264_);
lean_closure_set(v___f_3265_, 3, v_toPure_3261_);
v___f_3266_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3266_, 0, v_toPure_3261_);
v___f_3267_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__1), 13, 12);
lean_closure_set(v___f_3267_, 0, v_toPure_3261_);
lean_closure_set(v___f_3267_, 1, v_inst_3252_);
lean_closure_set(v___f_3267_, 2, v_toBind_3260_);
lean_closure_set(v___f_3267_, 3, v_inst_3255_);
lean_closure_set(v___f_3267_, 4, v_inst_3253_);
lean_closure_set(v___f_3267_, 5, v_inst_3251_);
lean_closure_set(v___f_3267_, 6, v_inst_3257_);
lean_closure_set(v___f_3267_, 7, v_inst_3256_);
lean_closure_set(v___f_3267_, 8, v_inst_3254_);
lean_closure_set(v___f_3267_, 9, v_f_3258_);
lean_closure_set(v___f_3267_, 10, v___f_3266_);
lean_closure_set(v___f_3267_, 11, v___f_3265_);
v___x_3268_ = lean_apply_4(v_toBind_3260_, lean_box(0), lean_box(0), v___x_3263_, v___f_3267_);
return v___x_3268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__0(lean_object* v_f_3269_, lean_object* v_x_3270_, lean_object* v___y_3271_){
_start:
{
lean_object* v___x_3272_; 
v___x_3272_ = lean_apply_1(v_f_3269_, v___y_3271_);
return v___x_3272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__1(lean_object* v_toApplicative_3273_, lean_object* v_inst_3274_, lean_object* v___f_3275_, lean_object* v_hyps_3276_){
_start:
{
lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; uint8_t v___x_3280_; 
v___x_3277_ = lean_unsigned_to_nat(0u);
v___x_3278_ = lean_array_get_size(v_hyps_3276_);
v___x_3279_ = lean_box(0);
v___x_3280_ = lean_nat_dec_lt(v___x_3277_, v___x_3278_);
if (v___x_3280_ == 0)
{
lean_object* v_toPure_3281_; lean_object* v___x_3282_; 
lean_dec_ref(v_hyps_3276_);
lean_dec(v___f_3275_);
lean_dec_ref(v_inst_3274_);
v_toPure_3281_ = lean_ctor_get(v_toApplicative_3273_, 1);
lean_inc(v_toPure_3281_);
lean_dec_ref(v_toApplicative_3273_);
v___x_3282_ = lean_apply_2(v_toPure_3281_, lean_box(0), v___x_3279_);
return v___x_3282_;
}
else
{
uint8_t v___x_3283_; 
v___x_3283_ = lean_nat_dec_le(v___x_3278_, v___x_3278_);
if (v___x_3283_ == 0)
{
if (v___x_3280_ == 0)
{
lean_object* v_toPure_3284_; lean_object* v___x_3285_; 
lean_dec_ref(v_hyps_3276_);
lean_dec(v___f_3275_);
lean_dec_ref(v_inst_3274_);
v_toPure_3284_ = lean_ctor_get(v_toApplicative_3273_, 1);
lean_inc(v_toPure_3284_);
lean_dec_ref(v_toApplicative_3273_);
v___x_3285_ = lean_apply_2(v_toPure_3284_, lean_box(0), v___x_3279_);
return v___x_3285_;
}
else
{
size_t v___x_3286_; size_t v___x_3287_; lean_object* v___x_3288_; 
lean_dec_ref(v_toApplicative_3273_);
v___x_3286_ = ((size_t)0ULL);
v___x_3287_ = lean_usize_of_nat(v___x_3278_);
v___x_3288_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3274_, v___f_3275_, v_hyps_3276_, v___x_3286_, v___x_3287_, v___x_3279_);
return v___x_3288_;
}
}
else
{
size_t v___x_3289_; size_t v___x_3290_; lean_object* v___x_3291_; 
lean_dec_ref(v_toApplicative_3273_);
v___x_3289_ = ((size_t)0ULL);
v___x_3290_ = lean_usize_of_nat(v___x_3278_);
v___x_3291_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3274_, v___f_3275_, v_hyps_3276_, v___x_3289_, v___x_3290_, v___x_3279_);
return v___x_3291_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg(lean_object* v_inst_3292_, lean_object* v_inst_3293_, lean_object* v_f_3294_){
_start:
{
lean_object* v_toApplicative_3295_; lean_object* v_toBind_3296_; lean_object* v___f_3297_; lean_object* v___f_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; 
v_toApplicative_3295_ = lean_ctor_get(v_inst_3292_, 0);
lean_inc_ref(v_toApplicative_3295_);
v_toBind_3296_ = lean_ctor_get(v_inst_3292_, 1);
lean_inc(v_toBind_3296_);
v___f_3297_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3297_, 0, v_f_3294_);
v___f_3298_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3298_, 0, v_toApplicative_3295_);
lean_closure_set(v___f_3298_, 1, v_inst_3292_);
lean_closure_set(v___f_3298_, 2, v___f_3297_);
v___x_3299_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 9, 0);
v___x_3300_ = lean_apply_2(v_inst_3293_, lean_box(0), v___x_3299_);
v___x_3301_ = lean_apply_4(v_toBind_3296_, lean_box(0), lean_box(0), v___x_3300_, v___f_3298_);
return v___x_3301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps(lean_object* v_m_3302_, lean_object* v_inst_3303_, lean_object* v_inst_3304_, lean_object* v_inst_3305_, lean_object* v_f_3306_){
_start:
{
lean_object* v_toApplicative_3307_; lean_object* v_toBind_3308_; lean_object* v___f_3309_; lean_object* v___f_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; 
v_toApplicative_3307_ = lean_ctor_get(v_inst_3303_, 0);
lean_inc_ref(v_toApplicative_3307_);
v_toBind_3308_ = lean_ctor_get(v_inst_3303_, 1);
lean_inc(v_toBind_3308_);
v___f_3309_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3309_, 0, v_f_3306_);
v___f_3310_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3310_, 0, v_toApplicative_3307_);
lean_closure_set(v___f_3310_, 1, v_inst_3303_);
lean_closure_set(v___f_3310_, 2, v___f_3309_);
v___x_3311_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 9, 0);
v___x_3312_ = lean_apply_2(v_inst_3304_, lean_box(0), v___x_3311_);
v___x_3313_ = lean_apply_4(v_toBind_3308_, lean_box(0), lean_box(0), v___x_3312_, v___f_3310_);
return v___x_3313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___boxed(lean_object* v_m_3314_, lean_object* v_inst_3315_, lean_object* v_inst_3316_, lean_object* v_inst_3317_, lean_object* v_f_3318_){
_start:
{
lean_object* v_res_3319_; 
v_res_3319_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps(v_m_3314_, v_inst_3315_, v_inst_3316_, v_inst_3317_, v_f_3318_);
lean_dec_ref(v_inst_3317_);
return v_res_3319_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3321_; lean_object* v___x_3322_; 
v___x_3321_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__0));
v___x_3322_ = l_Lean_stringToMessageData(v___x_3321_);
return v___x_3322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0(lean_object* v_name_3323_, lean_object* v_x_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_){
_start:
{
lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; 
v___x_3334_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1);
v___x_3335_ = l_Lean_MessageData_ofName(v_name_3323_);
v___x_3336_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3334_);
lean_ctor_set(v___x_3336_, 1, v___x_3335_);
v___x_3337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3337_, 0, v___x_3336_);
return v___x_3337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___boxed(lean_object* v_name_3338_, lean_object* v_x_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_){
_start:
{
lean_object* v_res_3349_; 
v_res_3349_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0(v_name_3338_, v_x_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_, v___y_3347_);
lean_dec(v___y_3347_);
lean_dec_ref(v___y_3346_);
lean_dec(v___y_3345_);
lean_dec_ref(v___y_3344_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
lean_dec_ref(v_x_3339_);
return v_res_3349_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0(void){
_start:
{
lean_object* v___x_3350_; 
v___x_3350_ = l_instMonadExceptOfEIO(lean_box(0));
return v___x_3350_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1(void){
_start:
{
lean_object* v___x_3351_; lean_object* v___x_3352_; 
v___x_3351_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0);
v___x_3352_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_3351_);
return v___x_3352_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2(void){
_start:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; 
v___x_3353_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1);
v___x_3354_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_3353_);
return v___x_3354_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3(void){
_start:
{
lean_object* v___x_3355_; lean_object* v___x_3356_; 
v___x_3355_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2);
v___x_3356_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_3355_);
return v___x_3356_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4(void){
_start:
{
lean_object* v___x_3357_; lean_object* v___x_3358_; 
v___x_3357_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3);
v___x_3358_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_3357_);
return v___x_3358_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5(void){
_start:
{
lean_object* v___x_3359_; lean_object* v___x_3360_; 
v___x_3359_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4);
v___x_3360_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_3359_);
return v___x_3360_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6(void){
_start:
{
lean_object* v___x_3361_; lean_object* v___x_3362_; 
v___x_3361_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5);
v___x_3362_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_3361_);
return v___x_3362_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7(void){
_start:
{
lean_object* v___x_3363_; lean_object* v___x_3364_; 
v___x_3363_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6);
v___x_3364_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_3363_);
return v___x_3364_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8(void){
_start:
{
lean_object* v___x_3365_; lean_object* v___x_3366_; 
v___x_3365_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7);
v___x_3366_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_3365_);
return v___x_3366_;
}
}
static double _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11(void){
_start:
{
lean_object* v___x_3369_; double v___x_3370_; 
v___x_3369_ = lean_unsigned_to_nat(1000000000u);
v___x_3370_ = lean_float_of_nat(v___x_3369_);
return v___x_3370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run(lean_object* v_pass_3371_, lean_object* v_a_3372_, lean_object* v_a_3373_, lean_object* v_a_3374_, lean_object* v_a_3375_, lean_object* v_a_3376_, lean_object* v_a_3377_, lean_object* v_a_3378_, lean_object* v_a_3379_){
_start:
{
lean_object* v___x_3381_; lean_object* v_toApplicative_3382_; lean_object* v_toFunctor_3383_; lean_object* v_toSeq_3384_; lean_object* v_toSeqLeft_3385_; lean_object* v_toSeqRight_3386_; lean_object* v___f_3387_; lean_object* v___f_3388_; lean_object* v___f_3389_; lean_object* v___f_3390_; lean_object* v___x_3391_; lean_object* v___f_3392_; lean_object* v___f_3393_; lean_object* v___f_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v_toApplicative_3398_; lean_object* v___x_3400_; uint8_t v_isShared_3401_; uint8_t v_isSharedCheck_3539_; 
v___x_3381_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1);
v_toApplicative_3382_ = lean_ctor_get(v___x_3381_, 0);
v_toFunctor_3383_ = lean_ctor_get(v_toApplicative_3382_, 0);
v_toSeq_3384_ = lean_ctor_get(v_toApplicative_3382_, 2);
v_toSeqLeft_3385_ = lean_ctor_get(v_toApplicative_3382_, 3);
v_toSeqRight_3386_ = lean_ctor_get(v_toApplicative_3382_, 4);
v___f_3387_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2));
v___f_3388_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_3383_, 2);
v___f_3389_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3389_, 0, v_toFunctor_3383_);
v___f_3390_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3390_, 0, v_toFunctor_3383_);
v___x_3391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3391_, 0, v___f_3389_);
lean_ctor_set(v___x_3391_, 1, v___f_3390_);
lean_inc(v_toSeqRight_3386_);
v___f_3392_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3392_, 0, v_toSeqRight_3386_);
lean_inc(v_toSeqLeft_3385_);
v___f_3393_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3393_, 0, v_toSeqLeft_3385_);
lean_inc(v_toSeq_3384_);
v___f_3394_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3394_, 0, v_toSeq_3384_);
v___x_3395_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3395_, 0, v___x_3391_);
lean_ctor_set(v___x_3395_, 1, v___f_3387_);
lean_ctor_set(v___x_3395_, 2, v___f_3394_);
lean_ctor_set(v___x_3395_, 3, v___f_3393_);
lean_ctor_set(v___x_3395_, 4, v___f_3392_);
v___x_3396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3396_, 0, v___x_3395_);
lean_ctor_set(v___x_3396_, 1, v___f_3388_);
v___x_3397_ = l_StateRefT_x27_instMonad___redArg(v___x_3396_);
v_toApplicative_3398_ = lean_ctor_get(v___x_3397_, 0);
v_isSharedCheck_3539_ = !lean_is_exclusive(v___x_3397_);
if (v_isSharedCheck_3539_ == 0)
{
lean_object* v_unused_3540_; 
v_unused_3540_ = lean_ctor_get(v___x_3397_, 1);
lean_dec(v_unused_3540_);
v___x_3400_ = v___x_3397_;
v_isShared_3401_ = v_isSharedCheck_3539_;
goto v_resetjp_3399_;
}
else
{
lean_inc(v_toApplicative_3398_);
lean_dec(v___x_3397_);
v___x_3400_ = lean_box(0);
v_isShared_3401_ = v_isSharedCheck_3539_;
goto v_resetjp_3399_;
}
v_resetjp_3399_:
{
lean_object* v_toFunctor_3402_; lean_object* v_toSeq_3403_; lean_object* v_toSeqLeft_3404_; lean_object* v_toSeqRight_3405_; lean_object* v___x_3407_; uint8_t v_isShared_3408_; uint8_t v_isSharedCheck_3537_; 
v_toFunctor_3402_ = lean_ctor_get(v_toApplicative_3398_, 0);
v_toSeq_3403_ = lean_ctor_get(v_toApplicative_3398_, 2);
v_toSeqLeft_3404_ = lean_ctor_get(v_toApplicative_3398_, 3);
v_toSeqRight_3405_ = lean_ctor_get(v_toApplicative_3398_, 4);
v_isSharedCheck_3537_ = !lean_is_exclusive(v_toApplicative_3398_);
if (v_isSharedCheck_3537_ == 0)
{
lean_object* v_unused_3538_; 
v_unused_3538_ = lean_ctor_get(v_toApplicative_3398_, 1);
lean_dec(v_unused_3538_);
v___x_3407_ = v_toApplicative_3398_;
v_isShared_3408_ = v_isSharedCheck_3537_;
goto v_resetjp_3406_;
}
else
{
lean_inc(v_toSeqRight_3405_);
lean_inc(v_toSeqLeft_3404_);
lean_inc(v_toSeq_3403_);
lean_inc(v_toFunctor_3402_);
lean_dec(v_toApplicative_3398_);
v___x_3407_ = lean_box(0);
v_isShared_3408_ = v_isSharedCheck_3537_;
goto v_resetjp_3406_;
}
v_resetjp_3406_:
{
lean_object* v___f_3409_; lean_object* v___f_3410_; lean_object* v___f_3411_; lean_object* v___f_3412_; lean_object* v___x_3413_; lean_object* v___f_3414_; lean_object* v___f_3415_; lean_object* v___f_3416_; lean_object* v___x_3418_; 
v___f_3409_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__4));
v___f_3410_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__5));
lean_inc_ref(v_toFunctor_3402_);
v___f_3411_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3411_, 0, v_toFunctor_3402_);
v___f_3412_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3412_, 0, v_toFunctor_3402_);
v___x_3413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3413_, 0, v___f_3411_);
lean_ctor_set(v___x_3413_, 1, v___f_3412_);
v___f_3414_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3414_, 0, v_toSeqRight_3405_);
v___f_3415_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3415_, 0, v_toSeqLeft_3404_);
v___f_3416_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3416_, 0, v_toSeq_3403_);
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 4, v___f_3414_);
lean_ctor_set(v___x_3407_, 3, v___f_3415_);
lean_ctor_set(v___x_3407_, 2, v___f_3416_);
lean_ctor_set(v___x_3407_, 1, v___f_3409_);
lean_ctor_set(v___x_3407_, 0, v___x_3413_);
v___x_3418_ = v___x_3407_;
goto v_reusejp_3417_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v___x_3413_);
lean_ctor_set(v_reuseFailAlloc_3536_, 1, v___f_3409_);
lean_ctor_set(v_reuseFailAlloc_3536_, 2, v___f_3416_);
lean_ctor_set(v_reuseFailAlloc_3536_, 3, v___f_3415_);
lean_ctor_set(v_reuseFailAlloc_3536_, 4, v___f_3414_);
v___x_3418_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3417_;
}
v_reusejp_3417_:
{
lean_object* v___x_3420_; 
if (v_isShared_3401_ == 0)
{
lean_ctor_set(v___x_3400_, 1, v___f_3410_);
lean_ctor_set(v___x_3400_, 0, v___x_3418_);
v___x_3420_ = v___x_3400_;
goto v_reusejp_3419_;
}
else
{
lean_object* v_reuseFailAlloc_3535_; 
v_reuseFailAlloc_3535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3535_, 0, v___x_3418_);
lean_ctor_set(v_reuseFailAlloc_3535_, 1, v___f_3410_);
v___x_3420_ = v_reuseFailAlloc_3535_;
goto v_reusejp_3419_;
}
v_reusejp_3419_:
{
lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v_toMonadRef_3427_; lean_object* v___x_3428_; lean_object* v_options_3429_; uint8_t v_hasTrace_3430_; 
v___x_3421_ = l_StateRefT_x27_instMonad___redArg(v___x_3420_);
v___x_3422_ = l_ReaderT_instMonad___redArg(v___x_3421_);
v___x_3423_ = l_StateRefT_x27_instMonad___redArg(v___x_3422_);
v___x_3424_ = l_ReaderT_instMonad___redArg(v___x_3423_);
v___x_3425_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7);
v___x_3426_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22);
v_toMonadRef_3427_ = lean_ctor_get(v___x_3426_, 0);
v___x_3428_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8);
v_options_3429_ = lean_ctor_get(v_a_3378_, 2);
v_hasTrace_3430_ = lean_ctor_get_uint8(v_options_3429_, sizeof(void*)*1);
if (v_hasTrace_3430_ == 0)
{
lean_object* v_run_x27_3431_; lean_object* v___x_3432_; 
lean_dec_ref(v___x_3424_);
v_run_x27_3431_ = lean_ctor_get(v_pass_3371_, 1);
lean_inc_ref(v_run_x27_3431_);
lean_dec_ref(v_pass_3371_);
lean_inc(v_a_3379_);
lean_inc_ref(v_a_3378_);
lean_inc(v_a_3377_);
lean_inc_ref(v_a_3376_);
lean_inc(v_a_3375_);
lean_inc_ref(v_a_3374_);
lean_inc(v_a_3373_);
lean_inc_ref(v_a_3372_);
v___x_3432_ = lean_apply_9(v_run_x27_3431_, v_a_3372_, v_a_3373_, v_a_3374_, v_a_3375_, v_a_3376_, v_a_3377_, v_a_3378_, v_a_3379_, lean_box(0));
return v___x_3432_;
}
else
{
lean_object* v_name_3433_; lean_object* v_run_x27_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3534_; 
v_name_3433_ = lean_ctor_get(v_pass_3371_, 0);
v_run_x27_3434_ = lean_ctor_get(v_pass_3371_, 1);
v_isSharedCheck_3534_ = !lean_is_exclusive(v_pass_3371_);
if (v_isSharedCheck_3534_ == 0)
{
v___x_3436_ = v_pass_3371_;
v_isShared_3437_ = v_isSharedCheck_3534_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_run_x27_3434_);
lean_inc(v_name_3433_);
lean_dec(v_pass_3371_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3534_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v_inheritedTraceOptions_3438_; lean_object* v___f_3439_; lean_object* v___f_3440_; lean_object* v___f_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; uint8_t v___x_3445_; lean_object* v___y_3447_; lean_object* v___y_3448_; lean_object* v_a_3449_; lean_object* v___y_3465_; lean_object* v___y_3466_; lean_object* v_a_3467_; 
v_inheritedTraceOptions_3438_ = lean_ctor_get(v_a_3378_, 13);
v___f_3439_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___boxed), 11, 1);
lean_closure_set(v___f_3439_, 0, v_name_3433_);
v___f_3440_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26);
v___f_3441_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9));
v___x_3442_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_3443_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10));
v___x_3444_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14);
v___x_3445_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3438_, v_options_3429_, v___x_3444_);
if (v___x_3445_ == 0)
{
lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; uint8_t v___x_3532_; 
v___x_3529_ = l_Lean_KVMap_instValueBool;
v___x_3530_ = l_Lean_trace_profiler;
v___x_3531_ = l_Lean_Option_get___redArg(v___x_3529_, v_options_3429_, v___x_3530_);
v___x_3532_ = lean_unbox(v___x_3531_);
lean_dec(v___x_3531_);
if (v___x_3532_ == 0)
{
lean_object* v___x_3533_; 
lean_dec_ref(v___f_3439_);
lean_del_object(v___x_3436_);
lean_dec_ref(v___x_3424_);
lean_inc(v_a_3379_);
lean_inc_ref(v_a_3378_);
lean_inc(v_a_3377_);
lean_inc_ref(v_a_3376_);
lean_inc(v_a_3375_);
lean_inc_ref(v_a_3374_);
lean_inc(v_a_3373_);
lean_inc_ref(v_a_3372_);
v___x_3533_ = lean_apply_9(v_run_x27_3434_, v_a_3372_, v_a_3373_, v_a_3374_, v_a_3375_, v_a_3376_, v_a_3377_, v_a_3378_, v_a_3379_, lean_box(0));
return v___x_3533_;
}
else
{
goto v___jp_3477_;
}
}
else
{
goto v___jp_3477_;
}
v___jp_3446_:
{
lean_object* v___x_3450_; double v___x_3451_; double v___x_3452_; double v___x_3453_; double v___x_3454_; double v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3459_; 
v___x_3450_ = lean_io_mono_nanos_now();
v___x_3451_ = lean_float_of_nat(v___y_3447_);
v___x_3452_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11);
v___x_3453_ = lean_float_div(v___x_3451_, v___x_3452_);
v___x_3454_ = lean_float_of_nat(v___x_3450_);
v___x_3455_ = lean_float_div(v___x_3454_, v___x_3452_);
v___x_3456_ = lean_box_float(v___x_3453_);
v___x_3457_ = lean_box_float(v___x_3455_);
if (v_isShared_3437_ == 0)
{
lean_ctor_set(v___x_3436_, 1, v___x_3457_);
lean_ctor_set(v___x_3436_, 0, v___x_3456_);
v___x_3459_ = v___x_3436_;
goto v_reusejp_3458_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v___x_3456_);
lean_ctor_set(v_reuseFailAlloc_3463_, 1, v___x_3457_);
v___x_3459_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3458_;
}
v_reusejp_3458_:
{
lean_object* v___x_3460_; lean_object* v___x_16945__overap_3461_; lean_object* v___x_3462_; 
v___x_3460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3460_, 0, v_a_3449_);
lean_ctor_set(v___x_3460_, 1, v___x_3459_);
lean_inc_ref(v_toMonadRef_3427_);
v___x_16945__overap_3461_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_box(0), lean_box(0), v___x_3424_, v___x_3425_, v_toMonadRef_3427_, v___f_3440_, lean_box(0), v___x_3428_, v___f_3441_, v___x_3442_, v_hasTrace_3430_, v___x_3443_, v_options_3429_, v___x_3445_, v___y_3448_, v___f_3439_, v___x_3460_);
lean_inc(v_a_3379_);
lean_inc_ref(v_a_3378_);
lean_inc(v_a_3377_);
lean_inc_ref(v_a_3376_);
lean_inc(v_a_3375_);
lean_inc_ref(v_a_3374_);
lean_inc(v_a_3373_);
lean_inc_ref(v_a_3372_);
v___x_3462_ = lean_apply_9(v___x_16945__overap_3461_, v_a_3372_, v_a_3373_, v_a_3374_, v_a_3375_, v_a_3376_, v_a_3377_, v_a_3378_, v_a_3379_, lean_box(0));
return v___x_3462_;
}
}
v___jp_3464_:
{
lean_object* v___x_3468_; double v___x_3469_; double v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_16966__overap_3475_; lean_object* v___x_3476_; 
v___x_3468_ = lean_io_get_num_heartbeats();
v___x_3469_ = lean_float_of_nat(v___y_3466_);
v___x_3470_ = lean_float_of_nat(v___x_3468_);
v___x_3471_ = lean_box_float(v___x_3469_);
v___x_3472_ = lean_box_float(v___x_3470_);
v___x_3473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3473_, 0, v___x_3471_);
lean_ctor_set(v___x_3473_, 1, v___x_3472_);
v___x_3474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3474_, 0, v_a_3467_);
lean_ctor_set(v___x_3474_, 1, v___x_3473_);
lean_inc_ref(v_toMonadRef_3427_);
v___x_16966__overap_3475_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_box(0), lean_box(0), v___x_3424_, v___x_3425_, v_toMonadRef_3427_, v___f_3440_, lean_box(0), v___x_3428_, v___f_3441_, v___x_3442_, v_hasTrace_3430_, v___x_3443_, v_options_3429_, v___x_3445_, v___y_3465_, v___f_3439_, v___x_3474_);
lean_inc(v_a_3379_);
lean_inc_ref(v_a_3378_);
lean_inc(v_a_3377_);
lean_inc_ref(v_a_3376_);
lean_inc(v_a_3375_);
lean_inc_ref(v_a_3374_);
lean_inc(v_a_3373_);
lean_inc_ref(v_a_3372_);
v___x_3476_ = lean_apply_9(v___x_16966__overap_3475_, v_a_3372_, v_a_3373_, v_a_3374_, v_a_3375_, v_a_3376_, v_a_3377_, v_a_3378_, v_a_3379_, lean_box(0));
return v___x_3476_;
}
v___jp_3477_:
{
lean_object* v___x_16922__overap_3478_; lean_object* v___x_3479_; 
lean_inc_ref(v___x_3424_);
v___x_16922__overap_3478_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_box(0), v___x_3424_, v___x_3425_);
lean_inc(v_a_3379_);
lean_inc_ref(v_a_3378_);
lean_inc(v_a_3377_);
lean_inc_ref(v_a_3376_);
lean_inc(v_a_3375_);
lean_inc_ref(v_a_3374_);
lean_inc(v_a_3373_);
lean_inc_ref(v_a_3372_);
v___x_3479_ = lean_apply_9(v___x_16922__overap_3478_, v_a_3372_, v_a_3373_, v_a_3374_, v_a_3375_, v_a_3376_, v_a_3377_, v_a_3378_, v_a_3379_, lean_box(0));
if (lean_obj_tag(v___x_3479_) == 0)
{
lean_object* v_a_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; uint8_t v___x_3484_; 
v_a_3480_ = lean_ctor_get(v___x_3479_, 0);
lean_inc(v_a_3480_);
lean_dec_ref_known(v___x_3479_, 1);
v___x_3481_ = l_Lean_KVMap_instValueBool;
v___x_3482_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3483_ = l_Lean_Option_get___redArg(v___x_3481_, v_options_3429_, v___x_3482_);
v___x_3484_ = lean_unbox(v___x_3483_);
lean_dec(v___x_3483_);
if (v___x_3484_ == 0)
{
lean_object* v___x_3485_; lean_object* v___x_3486_; 
v___x_3485_ = lean_io_mono_nanos_now();
lean_inc(v_a_3379_);
lean_inc_ref(v_a_3378_);
lean_inc(v_a_3377_);
lean_inc_ref(v_a_3376_);
lean_inc(v_a_3375_);
lean_inc_ref(v_a_3374_);
lean_inc(v_a_3373_);
lean_inc_ref(v_a_3372_);
v___x_3486_ = lean_apply_9(v_run_x27_3434_, v_a_3372_, v_a_3373_, v_a_3374_, v_a_3375_, v_a_3376_, v_a_3377_, v_a_3378_, v_a_3379_, lean_box(0));
if (lean_obj_tag(v___x_3486_) == 0)
{
lean_object* v_a_3487_; lean_object* v___x_3489_; uint8_t v_isShared_3490_; uint8_t v_isSharedCheck_3494_; 
v_a_3487_ = lean_ctor_get(v___x_3486_, 0);
v_isSharedCheck_3494_ = !lean_is_exclusive(v___x_3486_);
if (v_isSharedCheck_3494_ == 0)
{
v___x_3489_ = v___x_3486_;
v_isShared_3490_ = v_isSharedCheck_3494_;
goto v_resetjp_3488_;
}
else
{
lean_inc(v_a_3487_);
lean_dec(v___x_3486_);
v___x_3489_ = lean_box(0);
v_isShared_3490_ = v_isSharedCheck_3494_;
goto v_resetjp_3488_;
}
v_resetjp_3488_:
{
lean_object* v___x_3492_; 
if (v_isShared_3490_ == 0)
{
lean_ctor_set_tag(v___x_3489_, 1);
v___x_3492_ = v___x_3489_;
goto v_reusejp_3491_;
}
else
{
lean_object* v_reuseFailAlloc_3493_; 
v_reuseFailAlloc_3493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3493_, 0, v_a_3487_);
v___x_3492_ = v_reuseFailAlloc_3493_;
goto v_reusejp_3491_;
}
v_reusejp_3491_:
{
v___y_3447_ = v___x_3485_;
v___y_3448_ = v_a_3480_;
v_a_3449_ = v___x_3492_;
goto v___jp_3446_;
}
}
}
else
{
lean_object* v_a_3495_; lean_object* v___x_3497_; uint8_t v_isShared_3498_; uint8_t v_isSharedCheck_3502_; 
v_a_3495_ = lean_ctor_get(v___x_3486_, 0);
v_isSharedCheck_3502_ = !lean_is_exclusive(v___x_3486_);
if (v_isSharedCheck_3502_ == 0)
{
v___x_3497_ = v___x_3486_;
v_isShared_3498_ = v_isSharedCheck_3502_;
goto v_resetjp_3496_;
}
else
{
lean_inc(v_a_3495_);
lean_dec(v___x_3486_);
v___x_3497_ = lean_box(0);
v_isShared_3498_ = v_isSharedCheck_3502_;
goto v_resetjp_3496_;
}
v_resetjp_3496_:
{
lean_object* v___x_3500_; 
if (v_isShared_3498_ == 0)
{
lean_ctor_set_tag(v___x_3497_, 0);
v___x_3500_ = v___x_3497_;
goto v_reusejp_3499_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v_a_3495_);
v___x_3500_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3499_;
}
v_reusejp_3499_:
{
v___y_3447_ = v___x_3485_;
v___y_3448_ = v_a_3480_;
v_a_3449_ = v___x_3500_;
goto v___jp_3446_;
}
}
}
}
else
{
lean_object* v___x_3503_; lean_object* v___x_3504_; 
lean_del_object(v___x_3436_);
v___x_3503_ = lean_io_get_num_heartbeats();
lean_inc(v_a_3379_);
lean_inc_ref(v_a_3378_);
lean_inc(v_a_3377_);
lean_inc_ref(v_a_3376_);
lean_inc(v_a_3375_);
lean_inc_ref(v_a_3374_);
lean_inc(v_a_3373_);
lean_inc_ref(v_a_3372_);
v___x_3504_ = lean_apply_9(v_run_x27_3434_, v_a_3372_, v_a_3373_, v_a_3374_, v_a_3375_, v_a_3376_, v_a_3377_, v_a_3378_, v_a_3379_, lean_box(0));
if (lean_obj_tag(v___x_3504_) == 0)
{
lean_object* v_a_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3512_; 
v_a_3505_ = lean_ctor_get(v___x_3504_, 0);
v_isSharedCheck_3512_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3507_ = v___x_3504_;
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_a_3505_);
lean_dec(v___x_3504_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v___x_3510_; 
if (v_isShared_3508_ == 0)
{
lean_ctor_set_tag(v___x_3507_, 1);
v___x_3510_ = v___x_3507_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v_a_3505_);
v___x_3510_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
v___y_3465_ = v_a_3480_;
v___y_3466_ = v___x_3503_;
v_a_3467_ = v___x_3510_;
goto v___jp_3464_;
}
}
}
else
{
lean_object* v_a_3513_; lean_object* v___x_3515_; uint8_t v_isShared_3516_; uint8_t v_isSharedCheck_3520_; 
v_a_3513_ = lean_ctor_get(v___x_3504_, 0);
v_isSharedCheck_3520_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3520_ == 0)
{
v___x_3515_ = v___x_3504_;
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
else
{
lean_inc(v_a_3513_);
lean_dec(v___x_3504_);
v___x_3515_ = lean_box(0);
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
v_resetjp_3514_:
{
lean_object* v___x_3518_; 
if (v_isShared_3516_ == 0)
{
lean_ctor_set_tag(v___x_3515_, 0);
v___x_3518_ = v___x_3515_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v_a_3513_);
v___x_3518_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
v___y_3465_ = v_a_3480_;
v___y_3466_ = v___x_3503_;
v_a_3467_ = v___x_3518_;
goto v___jp_3464_;
}
}
}
}
}
else
{
lean_object* v_a_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3528_; 
lean_dec_ref(v___f_3439_);
lean_del_object(v___x_3436_);
lean_dec_ref(v_run_x27_3434_);
lean_dec_ref(v___x_3424_);
v_a_3521_ = lean_ctor_get(v___x_3479_, 0);
v_isSharedCheck_3528_ = !lean_is_exclusive(v___x_3479_);
if (v_isSharedCheck_3528_ == 0)
{
v___x_3523_ = v___x_3479_;
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_a_3521_);
lean_dec(v___x_3479_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
lean_object* v___x_3526_; 
if (v_isShared_3524_ == 0)
{
v___x_3526_ = v___x_3523_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v_a_3521_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
return v___x_3526_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___boxed(lean_object* v_pass_3541_, lean_object* v_a_3542_, lean_object* v_a_3543_, lean_object* v_a_3544_, lean_object* v_a_3545_, lean_object* v_a_3546_, lean_object* v_a_3547_, lean_object* v_a_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_){
_start:
{
lean_object* v_res_3551_; 
v_res_3551_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run(v_pass_3541_, v_a_3542_, v_a_3543_, v_a_3544_, v_a_3545_, v_a_3546_, v_a_3547_, v_a_3548_, v_a_3549_);
lean_dec(v_a_3549_);
lean_dec_ref(v_a_3548_);
lean_dec(v_a_3547_);
lean_dec_ref(v_a_3546_);
lean_dec(v_a_3545_);
lean_dec_ref(v_a_3544_);
lean_dec(v_a_3543_);
lean_dec_ref(v_a_3542_);
return v_res_3551_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3552_ = lean_unsigned_to_nat(32u);
v___x_3553_ = lean_mk_empty_array_with_capacity(v___x_3552_);
v___x_3554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3554_, 0, v___x_3553_);
return v___x_3554_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; 
v___x_3555_ = ((size_t)5ULL);
v___x_3556_ = lean_unsigned_to_nat(0u);
v___x_3557_ = lean_unsigned_to_nat(32u);
v___x_3558_ = lean_mk_empty_array_with_capacity(v___x_3557_);
v___x_3559_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg___closed__0);
v___x_3560_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3560_, 0, v___x_3559_);
lean_ctor_set(v___x_3560_, 1, v___x_3558_);
lean_ctor_set(v___x_3560_, 2, v___x_3556_);
lean_ctor_set(v___x_3560_, 3, v___x_3556_);
lean_ctor_set_usize(v___x_3560_, 4, v___x_3555_);
return v___x_3560_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg(lean_object* v___y_3561_){
_start:
{
lean_object* v___x_3563_; lean_object* v_traceState_3564_; lean_object* v_traces_3565_; lean_object* v___x_3566_; lean_object* v_traceState_3567_; lean_object* v_env_3568_; lean_object* v_nextMacroScope_3569_; lean_object* v_ngen_3570_; lean_object* v_auxDeclNGen_3571_; lean_object* v_cache_3572_; lean_object* v_messages_3573_; lean_object* v_infoState_3574_; lean_object* v_snapshotTasks_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3594_; 
v___x_3563_ = lean_st_ref_get(v___y_3561_);
v_traceState_3564_ = lean_ctor_get(v___x_3563_, 4);
lean_inc_ref(v_traceState_3564_);
lean_dec(v___x_3563_);
v_traces_3565_ = lean_ctor_get(v_traceState_3564_, 0);
lean_inc_ref(v_traces_3565_);
lean_dec_ref(v_traceState_3564_);
v___x_3566_ = lean_st_ref_take(v___y_3561_);
v_traceState_3567_ = lean_ctor_get(v___x_3566_, 4);
v_env_3568_ = lean_ctor_get(v___x_3566_, 0);
v_nextMacroScope_3569_ = lean_ctor_get(v___x_3566_, 1);
v_ngen_3570_ = lean_ctor_get(v___x_3566_, 2);
v_auxDeclNGen_3571_ = lean_ctor_get(v___x_3566_, 3);
v_cache_3572_ = lean_ctor_get(v___x_3566_, 5);
v_messages_3573_ = lean_ctor_get(v___x_3566_, 6);
v_infoState_3574_ = lean_ctor_get(v___x_3566_, 7);
v_snapshotTasks_3575_ = lean_ctor_get(v___x_3566_, 8);
v_isSharedCheck_3594_ = !lean_is_exclusive(v___x_3566_);
if (v_isSharedCheck_3594_ == 0)
{
v___x_3577_ = v___x_3566_;
v_isShared_3578_ = v_isSharedCheck_3594_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_snapshotTasks_3575_);
lean_inc(v_infoState_3574_);
lean_inc(v_messages_3573_);
lean_inc(v_cache_3572_);
lean_inc(v_traceState_3567_);
lean_inc(v_auxDeclNGen_3571_);
lean_inc(v_ngen_3570_);
lean_inc(v_nextMacroScope_3569_);
lean_inc(v_env_3568_);
lean_dec(v___x_3566_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3594_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
uint64_t v_tid_3579_; lean_object* v___x_3581_; uint8_t v_isShared_3582_; uint8_t v_isSharedCheck_3592_; 
v_tid_3579_ = lean_ctor_get_uint64(v_traceState_3567_, sizeof(void*)*1);
v_isSharedCheck_3592_ = !lean_is_exclusive(v_traceState_3567_);
if (v_isSharedCheck_3592_ == 0)
{
lean_object* v_unused_3593_; 
v_unused_3593_ = lean_ctor_get(v_traceState_3567_, 0);
lean_dec(v_unused_3593_);
v___x_3581_ = v_traceState_3567_;
v_isShared_3582_ = v_isSharedCheck_3592_;
goto v_resetjp_3580_;
}
else
{
lean_dec(v_traceState_3567_);
v___x_3581_ = lean_box(0);
v_isShared_3582_ = v_isSharedCheck_3592_;
goto v_resetjp_3580_;
}
v_resetjp_3580_:
{
lean_object* v___x_3583_; lean_object* v___x_3585_; 
v___x_3583_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg___closed__1);
if (v_isShared_3582_ == 0)
{
lean_ctor_set(v___x_3581_, 0, v___x_3583_);
v___x_3585_ = v___x_3581_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3591_, 0, v___x_3583_);
lean_ctor_set_uint64(v_reuseFailAlloc_3591_, sizeof(void*)*1, v_tid_3579_);
v___x_3585_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
lean_object* v___x_3587_; 
if (v_isShared_3578_ == 0)
{
lean_ctor_set(v___x_3577_, 4, v___x_3585_);
v___x_3587_ = v___x_3577_;
goto v_reusejp_3586_;
}
else
{
lean_object* v_reuseFailAlloc_3590_; 
v_reuseFailAlloc_3590_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3590_, 0, v_env_3568_);
lean_ctor_set(v_reuseFailAlloc_3590_, 1, v_nextMacroScope_3569_);
lean_ctor_set(v_reuseFailAlloc_3590_, 2, v_ngen_3570_);
lean_ctor_set(v_reuseFailAlloc_3590_, 3, v_auxDeclNGen_3571_);
lean_ctor_set(v_reuseFailAlloc_3590_, 4, v___x_3585_);
lean_ctor_set(v_reuseFailAlloc_3590_, 5, v_cache_3572_);
lean_ctor_set(v_reuseFailAlloc_3590_, 6, v_messages_3573_);
lean_ctor_set(v_reuseFailAlloc_3590_, 7, v_infoState_3574_);
lean_ctor_set(v_reuseFailAlloc_3590_, 8, v_snapshotTasks_3575_);
v___x_3587_ = v_reuseFailAlloc_3590_;
goto v_reusejp_3586_;
}
v_reusejp_3586_:
{
lean_object* v___x_3588_; lean_object* v___x_3589_; 
v___x_3588_ = lean_st_ref_set(v___y_3561_, v___x_3587_);
v___x_3589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3589_, 0, v_traces_3565_);
return v___x_3589_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg___boxed(lean_object* v___y_3595_, lean_object* v___y_3596_){
_start:
{
lean_object* v_res_3597_; 
v_res_3597_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg(v___y_3595_);
lean_dec(v___y_3595_);
return v_res_3597_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1(lean_object* v___y_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_){
_start:
{
lean_object* v___x_3607_; 
v___x_3607_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg(v___y_3605_);
return v___x_3607_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___boxed(lean_object* v___y_3608_, lean_object* v___y_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_){
_start:
{
lean_object* v_res_3617_; 
v_res_3617_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1(v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_);
lean_dec(v___y_3615_);
lean_dec_ref(v___y_3614_);
lean_dec(v___y_3613_);
lean_dec_ref(v___y_3612_);
lean_dec(v___y_3611_);
lean_dec_ref(v___y_3610_);
lean_dec(v___y_3609_);
lean_dec_ref(v___y_3608_);
return v_res_3617_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__2(lean_object* v_opts_3618_, lean_object* v_opt_3619_){
_start:
{
lean_object* v_name_3620_; lean_object* v_defValue_3621_; lean_object* v_map_3622_; lean_object* v___x_3623_; 
v_name_3620_ = lean_ctor_get(v_opt_3619_, 0);
v_defValue_3621_ = lean_ctor_get(v_opt_3619_, 1);
v_map_3622_ = lean_ctor_get(v_opts_3618_, 0);
v___x_3623_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3622_, v_name_3620_);
if (lean_obj_tag(v___x_3623_) == 0)
{
uint8_t v___x_3624_; 
v___x_3624_ = lean_unbox(v_defValue_3621_);
return v___x_3624_;
}
else
{
lean_object* v_val_3625_; 
v_val_3625_ = lean_ctor_get(v___x_3623_, 0);
lean_inc(v_val_3625_);
lean_dec_ref_known(v___x_3623_, 1);
if (lean_obj_tag(v_val_3625_) == 1)
{
uint8_t v_v_3626_; 
v_v_3626_ = lean_ctor_get_uint8(v_val_3625_, 0);
lean_dec_ref_known(v_val_3625_, 0);
return v_v_3626_;
}
else
{
uint8_t v___x_3627_; 
lean_dec(v_val_3625_);
v___x_3627_ = lean_unbox(v_defValue_3621_);
return v___x_3627_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__2___boxed(lean_object* v_opts_3628_, lean_object* v_opt_3629_){
_start:
{
uint8_t v_res_3630_; lean_object* v_r_3631_; 
v_res_3630_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__2(v_opts_3628_, v_opt_3629_);
lean_dec_ref(v_opt_3629_);
lean_dec_ref(v_opts_3628_);
v_r_3631_ = lean_box(v_res_3630_);
return v_r_3631_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0_spec__0(lean_object* v_msgData_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_, lean_object* v___y_3636_){
_start:
{
lean_object* v___x_3638_; lean_object* v_env_3639_; lean_object* v___x_3640_; lean_object* v_mctx_3641_; lean_object* v_lctx_3642_; lean_object* v_options_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; 
v___x_3638_ = lean_st_ref_get(v___y_3636_);
v_env_3639_ = lean_ctor_get(v___x_3638_, 0);
lean_inc_ref(v_env_3639_);
lean_dec(v___x_3638_);
v___x_3640_ = lean_st_ref_get(v___y_3634_);
v_mctx_3641_ = lean_ctor_get(v___x_3640_, 0);
lean_inc_ref(v_mctx_3641_);
lean_dec(v___x_3640_);
v_lctx_3642_ = lean_ctor_get(v___y_3633_, 2);
v_options_3643_ = lean_ctor_get(v___y_3635_, 2);
lean_inc_ref(v_options_3643_);
lean_inc_ref(v_lctx_3642_);
v___x_3644_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3644_, 0, v_env_3639_);
lean_ctor_set(v___x_3644_, 1, v_mctx_3641_);
lean_ctor_set(v___x_3644_, 2, v_lctx_3642_);
lean_ctor_set(v___x_3644_, 3, v_options_3643_);
v___x_3645_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3645_, 0, v___x_3644_);
lean_ctor_set(v___x_3645_, 1, v_msgData_3632_);
v___x_3646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3646_, 0, v___x_3645_);
return v___x_3646_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0_spec__0___boxed(lean_object* v_msgData_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_){
_start:
{
lean_object* v_res_3653_; 
v_res_3653_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0_spec__0(v_msgData_3647_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_);
lean_dec(v___y_3651_);
lean_dec_ref(v___y_3650_);
lean_dec(v___y_3649_);
lean_dec_ref(v___y_3648_);
return v_res_3653_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4_spec__5(size_t v_sz_3654_, size_t v_i_3655_, lean_object* v_bs_3656_){
_start:
{
uint8_t v___x_3657_; 
v___x_3657_ = lean_usize_dec_lt(v_i_3655_, v_sz_3654_);
if (v___x_3657_ == 0)
{
return v_bs_3656_;
}
else
{
lean_object* v_v_3658_; lean_object* v_msg_3659_; lean_object* v___x_3660_; lean_object* v_bs_x27_3661_; size_t v___x_3662_; size_t v___x_3663_; lean_object* v___x_3664_; 
v_v_3658_ = lean_array_uget_borrowed(v_bs_3656_, v_i_3655_);
v_msg_3659_ = lean_ctor_get(v_v_3658_, 1);
lean_inc_ref(v_msg_3659_);
v___x_3660_ = lean_unsigned_to_nat(0u);
v_bs_x27_3661_ = lean_array_uset(v_bs_3656_, v_i_3655_, v___x_3660_);
v___x_3662_ = ((size_t)1ULL);
v___x_3663_ = lean_usize_add(v_i_3655_, v___x_3662_);
v___x_3664_ = lean_array_uset(v_bs_x27_3661_, v_i_3655_, v_msg_3659_);
v_i_3655_ = v___x_3663_;
v_bs_3656_ = v___x_3664_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4_spec__5___boxed(lean_object* v_sz_3666_, lean_object* v_i_3667_, lean_object* v_bs_3668_){
_start:
{
size_t v_sz_boxed_3669_; size_t v_i_boxed_3670_; lean_object* v_res_3671_; 
v_sz_boxed_3669_ = lean_unbox_usize(v_sz_3666_);
lean_dec(v_sz_3666_);
v_i_boxed_3670_ = lean_unbox_usize(v_i_3667_);
lean_dec(v_i_3667_);
v_res_3671_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4_spec__5(v_sz_boxed_3669_, v_i_boxed_3670_, v_bs_3668_);
return v_res_3671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4___redArg(lean_object* v_oldTraces_3672_, lean_object* v_data_3673_, lean_object* v_ref_3674_, lean_object* v_msg_3675_, lean_object* v___y_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_){
_start:
{
lean_object* v_fileName_3681_; lean_object* v_fileMap_3682_; lean_object* v_options_3683_; lean_object* v_currRecDepth_3684_; lean_object* v_maxRecDepth_3685_; lean_object* v_ref_3686_; lean_object* v_currNamespace_3687_; lean_object* v_openDecls_3688_; lean_object* v_initHeartbeats_3689_; lean_object* v_maxHeartbeats_3690_; lean_object* v_quotContext_3691_; lean_object* v_currMacroScope_3692_; uint8_t v_diag_3693_; lean_object* v_cancelTk_x3f_3694_; uint8_t v_suppressElabErrors_3695_; lean_object* v_inheritedTraceOptions_3696_; lean_object* v___x_3697_; lean_object* v_traceState_3698_; lean_object* v_traces_3699_; lean_object* v_ref_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; size_t v_sz_3703_; size_t v___x_3704_; lean_object* v___x_3705_; lean_object* v_msg_3706_; lean_object* v___x_3707_; lean_object* v_a_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3745_; 
v_fileName_3681_ = lean_ctor_get(v___y_3678_, 0);
v_fileMap_3682_ = lean_ctor_get(v___y_3678_, 1);
v_options_3683_ = lean_ctor_get(v___y_3678_, 2);
v_currRecDepth_3684_ = lean_ctor_get(v___y_3678_, 3);
v_maxRecDepth_3685_ = lean_ctor_get(v___y_3678_, 4);
v_ref_3686_ = lean_ctor_get(v___y_3678_, 5);
v_currNamespace_3687_ = lean_ctor_get(v___y_3678_, 6);
v_openDecls_3688_ = lean_ctor_get(v___y_3678_, 7);
v_initHeartbeats_3689_ = lean_ctor_get(v___y_3678_, 8);
v_maxHeartbeats_3690_ = lean_ctor_get(v___y_3678_, 9);
v_quotContext_3691_ = lean_ctor_get(v___y_3678_, 10);
v_currMacroScope_3692_ = lean_ctor_get(v___y_3678_, 11);
v_diag_3693_ = lean_ctor_get_uint8(v___y_3678_, sizeof(void*)*14);
v_cancelTk_x3f_3694_ = lean_ctor_get(v___y_3678_, 12);
v_suppressElabErrors_3695_ = lean_ctor_get_uint8(v___y_3678_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3696_ = lean_ctor_get(v___y_3678_, 13);
v___x_3697_ = lean_st_ref_get(v___y_3679_);
v_traceState_3698_ = lean_ctor_get(v___x_3697_, 4);
lean_inc_ref(v_traceState_3698_);
lean_dec(v___x_3697_);
v_traces_3699_ = lean_ctor_get(v_traceState_3698_, 0);
lean_inc_ref(v_traces_3699_);
lean_dec_ref(v_traceState_3698_);
v_ref_3700_ = l_Lean_replaceRef(v_ref_3674_, v_ref_3686_);
lean_inc_ref(v_inheritedTraceOptions_3696_);
lean_inc(v_cancelTk_x3f_3694_);
lean_inc(v_currMacroScope_3692_);
lean_inc(v_quotContext_3691_);
lean_inc(v_maxHeartbeats_3690_);
lean_inc(v_initHeartbeats_3689_);
lean_inc(v_openDecls_3688_);
lean_inc(v_currNamespace_3687_);
lean_inc(v_maxRecDepth_3685_);
lean_inc(v_currRecDepth_3684_);
lean_inc_ref(v_options_3683_);
lean_inc_ref(v_fileMap_3682_);
lean_inc_ref(v_fileName_3681_);
v___x_3701_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3701_, 0, v_fileName_3681_);
lean_ctor_set(v___x_3701_, 1, v_fileMap_3682_);
lean_ctor_set(v___x_3701_, 2, v_options_3683_);
lean_ctor_set(v___x_3701_, 3, v_currRecDepth_3684_);
lean_ctor_set(v___x_3701_, 4, v_maxRecDepth_3685_);
lean_ctor_set(v___x_3701_, 5, v_ref_3700_);
lean_ctor_set(v___x_3701_, 6, v_currNamespace_3687_);
lean_ctor_set(v___x_3701_, 7, v_openDecls_3688_);
lean_ctor_set(v___x_3701_, 8, v_initHeartbeats_3689_);
lean_ctor_set(v___x_3701_, 9, v_maxHeartbeats_3690_);
lean_ctor_set(v___x_3701_, 10, v_quotContext_3691_);
lean_ctor_set(v___x_3701_, 11, v_currMacroScope_3692_);
lean_ctor_set(v___x_3701_, 12, v_cancelTk_x3f_3694_);
lean_ctor_set(v___x_3701_, 13, v_inheritedTraceOptions_3696_);
lean_ctor_set_uint8(v___x_3701_, sizeof(void*)*14, v_diag_3693_);
lean_ctor_set_uint8(v___x_3701_, sizeof(void*)*14 + 1, v_suppressElabErrors_3695_);
v___x_3702_ = l_Lean_PersistentArray_toArray___redArg(v_traces_3699_);
lean_dec_ref(v_traces_3699_);
v_sz_3703_ = lean_array_size(v___x_3702_);
v___x_3704_ = ((size_t)0ULL);
v___x_3705_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4_spec__5(v_sz_3703_, v___x_3704_, v___x_3702_);
v_msg_3706_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_3706_, 0, v_data_3673_);
lean_ctor_set(v_msg_3706_, 1, v_msg_3675_);
lean_ctor_set(v_msg_3706_, 2, v___x_3705_);
v___x_3707_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0_spec__0(v_msg_3706_, v___y_3676_, v___y_3677_, v___x_3701_, v___y_3679_);
lean_dec_ref_known(v___x_3701_, 14);
v_a_3708_ = lean_ctor_get(v___x_3707_, 0);
v_isSharedCheck_3745_ = !lean_is_exclusive(v___x_3707_);
if (v_isSharedCheck_3745_ == 0)
{
v___x_3710_ = v___x_3707_;
v_isShared_3711_ = v_isSharedCheck_3745_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_a_3708_);
lean_dec(v___x_3707_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3745_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
lean_object* v___x_3712_; lean_object* v_traceState_3713_; lean_object* v_env_3714_; lean_object* v_nextMacroScope_3715_; lean_object* v_ngen_3716_; lean_object* v_auxDeclNGen_3717_; lean_object* v_cache_3718_; lean_object* v_messages_3719_; lean_object* v_infoState_3720_; lean_object* v_snapshotTasks_3721_; lean_object* v___x_3723_; uint8_t v_isShared_3724_; uint8_t v_isSharedCheck_3744_; 
v___x_3712_ = lean_st_ref_take(v___y_3679_);
v_traceState_3713_ = lean_ctor_get(v___x_3712_, 4);
v_env_3714_ = lean_ctor_get(v___x_3712_, 0);
v_nextMacroScope_3715_ = lean_ctor_get(v___x_3712_, 1);
v_ngen_3716_ = lean_ctor_get(v___x_3712_, 2);
v_auxDeclNGen_3717_ = lean_ctor_get(v___x_3712_, 3);
v_cache_3718_ = lean_ctor_get(v___x_3712_, 5);
v_messages_3719_ = lean_ctor_get(v___x_3712_, 6);
v_infoState_3720_ = lean_ctor_get(v___x_3712_, 7);
v_snapshotTasks_3721_ = lean_ctor_get(v___x_3712_, 8);
v_isSharedCheck_3744_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3744_ == 0)
{
v___x_3723_ = v___x_3712_;
v_isShared_3724_ = v_isSharedCheck_3744_;
goto v_resetjp_3722_;
}
else
{
lean_inc(v_snapshotTasks_3721_);
lean_inc(v_infoState_3720_);
lean_inc(v_messages_3719_);
lean_inc(v_cache_3718_);
lean_inc(v_traceState_3713_);
lean_inc(v_auxDeclNGen_3717_);
lean_inc(v_ngen_3716_);
lean_inc(v_nextMacroScope_3715_);
lean_inc(v_env_3714_);
lean_dec(v___x_3712_);
v___x_3723_ = lean_box(0);
v_isShared_3724_ = v_isSharedCheck_3744_;
goto v_resetjp_3722_;
}
v_resetjp_3722_:
{
uint64_t v_tid_3725_; lean_object* v___x_3727_; uint8_t v_isShared_3728_; uint8_t v_isSharedCheck_3742_; 
v_tid_3725_ = lean_ctor_get_uint64(v_traceState_3713_, sizeof(void*)*1);
v_isSharedCheck_3742_ = !lean_is_exclusive(v_traceState_3713_);
if (v_isSharedCheck_3742_ == 0)
{
lean_object* v_unused_3743_; 
v_unused_3743_ = lean_ctor_get(v_traceState_3713_, 0);
lean_dec(v_unused_3743_);
v___x_3727_ = v_traceState_3713_;
v_isShared_3728_ = v_isSharedCheck_3742_;
goto v_resetjp_3726_;
}
else
{
lean_dec(v_traceState_3713_);
v___x_3727_ = lean_box(0);
v_isShared_3728_ = v_isSharedCheck_3742_;
goto v_resetjp_3726_;
}
v_resetjp_3726_:
{
lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3732_; 
v___x_3729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3729_, 0, v_ref_3674_);
lean_ctor_set(v___x_3729_, 1, v_a_3708_);
v___x_3730_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_3672_, v___x_3729_);
if (v_isShared_3728_ == 0)
{
lean_ctor_set(v___x_3727_, 0, v___x_3730_);
v___x_3732_ = v___x_3727_;
goto v_reusejp_3731_;
}
else
{
lean_object* v_reuseFailAlloc_3741_; 
v_reuseFailAlloc_3741_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3741_, 0, v___x_3730_);
lean_ctor_set_uint64(v_reuseFailAlloc_3741_, sizeof(void*)*1, v_tid_3725_);
v___x_3732_ = v_reuseFailAlloc_3741_;
goto v_reusejp_3731_;
}
v_reusejp_3731_:
{
lean_object* v___x_3734_; 
if (v_isShared_3724_ == 0)
{
lean_ctor_set(v___x_3723_, 4, v___x_3732_);
v___x_3734_ = v___x_3723_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v_env_3714_);
lean_ctor_set(v_reuseFailAlloc_3740_, 1, v_nextMacroScope_3715_);
lean_ctor_set(v_reuseFailAlloc_3740_, 2, v_ngen_3716_);
lean_ctor_set(v_reuseFailAlloc_3740_, 3, v_auxDeclNGen_3717_);
lean_ctor_set(v_reuseFailAlloc_3740_, 4, v___x_3732_);
lean_ctor_set(v_reuseFailAlloc_3740_, 5, v_cache_3718_);
lean_ctor_set(v_reuseFailAlloc_3740_, 6, v_messages_3719_);
lean_ctor_set(v_reuseFailAlloc_3740_, 7, v_infoState_3720_);
lean_ctor_set(v_reuseFailAlloc_3740_, 8, v_snapshotTasks_3721_);
v___x_3734_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3738_; 
v___x_3735_ = lean_st_ref_set(v___y_3679_, v___x_3734_);
v___x_3736_ = lean_box(0);
if (v_isShared_3711_ == 0)
{
lean_ctor_set(v___x_3710_, 0, v___x_3736_);
v___x_3738_ = v___x_3710_;
goto v_reusejp_3737_;
}
else
{
lean_object* v_reuseFailAlloc_3739_; 
v_reuseFailAlloc_3739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3739_, 0, v___x_3736_);
v___x_3738_ = v_reuseFailAlloc_3739_;
goto v_reusejp_3737_;
}
v_reusejp_3737_:
{
return v___x_3738_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4___redArg___boxed(lean_object* v_oldTraces_3746_, lean_object* v_data_3747_, lean_object* v_ref_3748_, lean_object* v_msg_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_){
_start:
{
lean_object* v_res_3755_; 
v_res_3755_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4___redArg(v_oldTraces_3746_, v_data_3747_, v_ref_3748_, v_msg_3749_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_);
lean_dec(v___y_3753_);
lean_dec_ref(v___y_3752_);
lean_dec(v___y_3751_);
lean_dec_ref(v___y_3750_);
return v_res_3755_;
}
}
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__6(lean_object* v_e_3756_){
_start:
{
if (lean_obj_tag(v_e_3756_) == 0)
{
uint8_t v___x_3757_; 
v___x_3757_ = 2;
return v___x_3757_;
}
else
{
lean_object* v_a_3758_; uint8_t v___x_3759_; 
v_a_3758_ = lean_ctor_get(v_e_3756_, 0);
v___x_3759_ = lean_unbox(v_a_3758_);
if (v___x_3759_ == 0)
{
uint8_t v___x_3760_; 
v___x_3760_ = 1;
return v___x_3760_;
}
else
{
uint8_t v___x_3761_; 
v___x_3761_ = 0;
return v___x_3761_;
}
}
}
}
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__6___boxed(lean_object* v_e_3762_){
_start:
{
uint8_t v_res_3763_; lean_object* v_r_3764_; 
v_res_3763_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__6(v_e_3762_);
lean_dec_ref(v_e_3762_);
v_r_3764_ = lean_box(v_res_3763_);
return v_r_3764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__7(lean_object* v_opts_3765_, lean_object* v_opt_3766_){
_start:
{
lean_object* v_name_3767_; lean_object* v_defValue_3768_; lean_object* v_map_3769_; lean_object* v___x_3770_; 
v_name_3767_ = lean_ctor_get(v_opt_3766_, 0);
v_defValue_3768_ = lean_ctor_get(v_opt_3766_, 1);
v_map_3769_ = lean_ctor_get(v_opts_3765_, 0);
v___x_3770_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3769_, v_name_3767_);
if (lean_obj_tag(v___x_3770_) == 0)
{
lean_inc(v_defValue_3768_);
return v_defValue_3768_;
}
else
{
lean_object* v_val_3771_; 
v_val_3771_ = lean_ctor_get(v___x_3770_, 0);
lean_inc(v_val_3771_);
lean_dec_ref_known(v___x_3770_, 1);
if (lean_obj_tag(v_val_3771_) == 3)
{
lean_object* v_v_3772_; 
v_v_3772_ = lean_ctor_get(v_val_3771_, 0);
lean_inc(v_v_3772_);
lean_dec_ref_known(v_val_3771_, 1);
return v_v_3772_;
}
else
{
lean_dec(v_val_3771_);
lean_inc(v_defValue_3768_);
return v_defValue_3768_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__7___boxed(lean_object* v_opts_3773_, lean_object* v_opt_3774_){
_start:
{
lean_object* v_res_3775_; 
v_res_3775_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__7(v_opts_3773_, v_opt_3774_);
lean_dec_ref(v_opt_3774_);
lean_dec_ref(v_opts_3773_);
return v_res_3775_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__5___redArg(lean_object* v_x_3776_){
_start:
{
if (lean_obj_tag(v_x_3776_) == 0)
{
lean_object* v_a_3778_; lean_object* v___x_3780_; uint8_t v_isShared_3781_; uint8_t v_isSharedCheck_3785_; 
v_a_3778_ = lean_ctor_get(v_x_3776_, 0);
v_isSharedCheck_3785_ = !lean_is_exclusive(v_x_3776_);
if (v_isSharedCheck_3785_ == 0)
{
v___x_3780_ = v_x_3776_;
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
else
{
lean_inc(v_a_3778_);
lean_dec(v_x_3776_);
v___x_3780_ = lean_box(0);
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
v_resetjp_3779_:
{
lean_object* v___x_3783_; 
if (v_isShared_3781_ == 0)
{
lean_ctor_set_tag(v___x_3780_, 1);
v___x_3783_ = v___x_3780_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v_a_3778_);
v___x_3783_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
return v___x_3783_;
}
}
}
else
{
lean_object* v_a_3786_; lean_object* v___x_3788_; uint8_t v_isShared_3789_; uint8_t v_isSharedCheck_3793_; 
v_a_3786_ = lean_ctor_get(v_x_3776_, 0);
v_isSharedCheck_3793_ = !lean_is_exclusive(v_x_3776_);
if (v_isSharedCheck_3793_ == 0)
{
v___x_3788_ = v_x_3776_;
v_isShared_3789_ = v_isSharedCheck_3793_;
goto v_resetjp_3787_;
}
else
{
lean_inc(v_a_3786_);
lean_dec(v_x_3776_);
v___x_3788_ = lean_box(0);
v_isShared_3789_ = v_isSharedCheck_3793_;
goto v_resetjp_3787_;
}
v_resetjp_3787_:
{
lean_object* v___x_3791_; 
if (v_isShared_3789_ == 0)
{
lean_ctor_set_tag(v___x_3788_, 0);
v___x_3791_ = v___x_3788_;
goto v_reusejp_3790_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v_a_3786_);
v___x_3791_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3790_;
}
v_reusejp_3790_:
{
return v___x_3791_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__5___redArg___boxed(lean_object* v_x_3794_, lean_object* v___y_3795_){
_start:
{
lean_object* v_res_3796_; 
v_res_3796_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__5___redArg(v_x_3794_);
return v_res_3796_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__0(void){
_start:
{
lean_object* v___x_3797_; double v___x_3798_; 
v___x_3797_ = lean_unsigned_to_nat(0u);
v___x_3798_ = lean_float_of_nat(v___x_3797_);
return v___x_3798_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__2(void){
_start:
{
lean_object* v___x_3800_; lean_object* v___x_3801_; 
v___x_3800_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__1));
v___x_3801_ = l_Lean_stringToMessageData(v___x_3800_);
return v___x_3801_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__3(void){
_start:
{
lean_object* v___x_3802_; double v___x_3803_; 
v___x_3802_ = lean_unsigned_to_nat(1000u);
v___x_3803_ = lean_float_of_nat(v___x_3802_);
return v___x_3803_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3(lean_object* v_cls_3804_, uint8_t v_collapsed_3805_, lean_object* v_tag_3806_, lean_object* v_opts_3807_, uint8_t v_clsEnabled_3808_, lean_object* v_oldTraces_3809_, lean_object* v_msg_3810_, lean_object* v_resStartStop_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_){
_start:
{
lean_object* v_fst_3821_; lean_object* v_snd_3822_; lean_object* v___y_3824_; lean_object* v___y_3825_; lean_object* v_data_3826_; lean_object* v_fst_3837_; lean_object* v_snd_3838_; lean_object* v___x_3839_; uint8_t v___x_3840_; lean_object* v___y_3842_; lean_object* v_a_3843_; uint8_t v___y_3858_; double v___y_3889_; 
v_fst_3821_ = lean_ctor_get(v_resStartStop_3811_, 0);
lean_inc(v_fst_3821_);
v_snd_3822_ = lean_ctor_get(v_resStartStop_3811_, 1);
lean_inc(v_snd_3822_);
lean_dec_ref(v_resStartStop_3811_);
v_fst_3837_ = lean_ctor_get(v_snd_3822_, 0);
lean_inc(v_fst_3837_);
v_snd_3838_ = lean_ctor_get(v_snd_3822_, 1);
lean_inc(v_snd_3838_);
lean_dec(v_snd_3822_);
v___x_3839_ = l_Lean_trace_profiler;
v___x_3840_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__2(v_opts_3807_, v___x_3839_);
if (v___x_3840_ == 0)
{
v___y_3858_ = v___x_3840_;
goto v___jp_3857_;
}
else
{
lean_object* v___x_3894_; uint8_t v___x_3895_; 
v___x_3894_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3895_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__2(v_opts_3807_, v___x_3894_);
if (v___x_3895_ == 0)
{
lean_object* v___x_3896_; lean_object* v___x_3897_; double v___x_3898_; double v___x_3899_; double v___x_3900_; 
v___x_3896_ = l_Lean_trace_profiler_threshold;
v___x_3897_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__7(v_opts_3807_, v___x_3896_);
v___x_3898_ = lean_float_of_nat(v___x_3897_);
v___x_3899_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__3);
v___x_3900_ = lean_float_div(v___x_3898_, v___x_3899_);
v___y_3889_ = v___x_3900_;
goto v___jp_3888_;
}
else
{
lean_object* v___x_3901_; lean_object* v___x_3902_; double v___x_3903_; 
v___x_3901_ = l_Lean_trace_profiler_threshold;
v___x_3902_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__7(v_opts_3807_, v___x_3901_);
v___x_3903_ = lean_float_of_nat(v___x_3902_);
v___y_3889_ = v___x_3903_;
goto v___jp_3888_;
}
}
v___jp_3823_:
{
lean_object* v___x_3827_; 
lean_inc(v___y_3824_);
v___x_3827_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4___redArg(v_oldTraces_3809_, v_data_3826_, v___y_3824_, v___y_3825_, v___y_3816_, v___y_3817_, v___y_3818_, v___y_3819_);
if (lean_obj_tag(v___x_3827_) == 0)
{
lean_object* v___x_3828_; 
lean_dec_ref_known(v___x_3827_, 1);
v___x_3828_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__5___redArg(v_fst_3821_);
return v___x_3828_;
}
else
{
lean_object* v_a_3829_; lean_object* v___x_3831_; uint8_t v_isShared_3832_; uint8_t v_isSharedCheck_3836_; 
lean_dec(v_fst_3821_);
v_a_3829_ = lean_ctor_get(v___x_3827_, 0);
v_isSharedCheck_3836_ = !lean_is_exclusive(v___x_3827_);
if (v_isSharedCheck_3836_ == 0)
{
v___x_3831_ = v___x_3827_;
v_isShared_3832_ = v_isSharedCheck_3836_;
goto v_resetjp_3830_;
}
else
{
lean_inc(v_a_3829_);
lean_dec(v___x_3827_);
v___x_3831_ = lean_box(0);
v_isShared_3832_ = v_isSharedCheck_3836_;
goto v_resetjp_3830_;
}
v_resetjp_3830_:
{
lean_object* v___x_3834_; 
if (v_isShared_3832_ == 0)
{
v___x_3834_ = v___x_3831_;
goto v_reusejp_3833_;
}
else
{
lean_object* v_reuseFailAlloc_3835_; 
v_reuseFailAlloc_3835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3835_, 0, v_a_3829_);
v___x_3834_ = v_reuseFailAlloc_3835_;
goto v_reusejp_3833_;
}
v_reusejp_3833_:
{
return v___x_3834_;
}
}
}
}
v___jp_3841_:
{
uint8_t v_result_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; double v___x_3847_; lean_object* v_data_3848_; 
v_result_3844_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__6(v_fst_3821_);
v___x_3845_ = lean_box(v_result_3844_);
v___x_3846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3846_, 0, v___x_3845_);
v___x_3847_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__0);
lean_inc_ref(v_tag_3806_);
lean_inc_ref(v___x_3846_);
lean_inc(v_cls_3804_);
v_data_3848_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3848_, 0, v_cls_3804_);
lean_ctor_set(v_data_3848_, 1, v___x_3846_);
lean_ctor_set(v_data_3848_, 2, v_tag_3806_);
lean_ctor_set_float(v_data_3848_, sizeof(void*)*3, v___x_3847_);
lean_ctor_set_float(v_data_3848_, sizeof(void*)*3 + 8, v___x_3847_);
lean_ctor_set_uint8(v_data_3848_, sizeof(void*)*3 + 16, v_collapsed_3805_);
if (v___x_3840_ == 0)
{
lean_dec_ref_known(v___x_3846_, 1);
lean_dec(v_snd_3838_);
lean_dec(v_fst_3837_);
lean_dec_ref(v_tag_3806_);
lean_dec(v_cls_3804_);
v___y_3824_ = v___y_3842_;
v___y_3825_ = v_a_3843_;
v_data_3826_ = v_data_3848_;
goto v___jp_3823_;
}
else
{
lean_object* v_data_3849_; double v___x_3850_; double v___x_3851_; 
lean_dec_ref_known(v_data_3848_, 3);
v_data_3849_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3849_, 0, v_cls_3804_);
lean_ctor_set(v_data_3849_, 1, v___x_3846_);
lean_ctor_set(v_data_3849_, 2, v_tag_3806_);
v___x_3850_ = lean_unbox_float(v_fst_3837_);
lean_dec(v_fst_3837_);
lean_ctor_set_float(v_data_3849_, sizeof(void*)*3, v___x_3850_);
v___x_3851_ = lean_unbox_float(v_snd_3838_);
lean_dec(v_snd_3838_);
lean_ctor_set_float(v_data_3849_, sizeof(void*)*3 + 8, v___x_3851_);
lean_ctor_set_uint8(v_data_3849_, sizeof(void*)*3 + 16, v_collapsed_3805_);
v___y_3824_ = v___y_3842_;
v___y_3825_ = v_a_3843_;
v_data_3826_ = v_data_3849_;
goto v___jp_3823_;
}
}
v___jp_3852_:
{
lean_object* v_ref_3853_; lean_object* v___x_3854_; 
v_ref_3853_ = lean_ctor_get(v___y_3818_, 5);
lean_inc(v___y_3819_);
lean_inc_ref(v___y_3818_);
lean_inc(v___y_3817_);
lean_inc_ref(v___y_3816_);
lean_inc(v___y_3815_);
lean_inc_ref(v___y_3814_);
lean_inc(v___y_3813_);
lean_inc_ref(v___y_3812_);
lean_inc(v_fst_3821_);
v___x_3854_ = lean_apply_10(v_msg_3810_, v_fst_3821_, v___y_3812_, v___y_3813_, v___y_3814_, v___y_3815_, v___y_3816_, v___y_3817_, v___y_3818_, v___y_3819_, lean_box(0));
if (lean_obj_tag(v___x_3854_) == 0)
{
lean_object* v_a_3855_; 
v_a_3855_ = lean_ctor_get(v___x_3854_, 0);
lean_inc(v_a_3855_);
lean_dec_ref_known(v___x_3854_, 1);
v___y_3842_ = v_ref_3853_;
v_a_3843_ = v_a_3855_;
goto v___jp_3841_;
}
else
{
lean_object* v___x_3856_; 
lean_dec_ref_known(v___x_3854_, 1);
v___x_3856_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__2);
v___y_3842_ = v_ref_3853_;
v_a_3843_ = v___x_3856_;
goto v___jp_3841_;
}
}
v___jp_3857_:
{
if (v_clsEnabled_3808_ == 0)
{
if (v___y_3858_ == 0)
{
lean_object* v___x_3859_; lean_object* v_traceState_3860_; lean_object* v_env_3861_; lean_object* v_nextMacroScope_3862_; lean_object* v_ngen_3863_; lean_object* v_auxDeclNGen_3864_; lean_object* v_cache_3865_; lean_object* v_messages_3866_; lean_object* v_infoState_3867_; lean_object* v_snapshotTasks_3868_; lean_object* v___x_3870_; uint8_t v_isShared_3871_; uint8_t v_isSharedCheck_3887_; 
lean_dec(v_snd_3838_);
lean_dec(v_fst_3837_);
lean_dec_ref(v_msg_3810_);
lean_dec_ref(v_tag_3806_);
lean_dec(v_cls_3804_);
v___x_3859_ = lean_st_ref_take(v___y_3819_);
v_traceState_3860_ = lean_ctor_get(v___x_3859_, 4);
v_env_3861_ = lean_ctor_get(v___x_3859_, 0);
v_nextMacroScope_3862_ = lean_ctor_get(v___x_3859_, 1);
v_ngen_3863_ = lean_ctor_get(v___x_3859_, 2);
v_auxDeclNGen_3864_ = lean_ctor_get(v___x_3859_, 3);
v_cache_3865_ = lean_ctor_get(v___x_3859_, 5);
v_messages_3866_ = lean_ctor_get(v___x_3859_, 6);
v_infoState_3867_ = lean_ctor_get(v___x_3859_, 7);
v_snapshotTasks_3868_ = lean_ctor_get(v___x_3859_, 8);
v_isSharedCheck_3887_ = !lean_is_exclusive(v___x_3859_);
if (v_isSharedCheck_3887_ == 0)
{
v___x_3870_ = v___x_3859_;
v_isShared_3871_ = v_isSharedCheck_3887_;
goto v_resetjp_3869_;
}
else
{
lean_inc(v_snapshotTasks_3868_);
lean_inc(v_infoState_3867_);
lean_inc(v_messages_3866_);
lean_inc(v_cache_3865_);
lean_inc(v_traceState_3860_);
lean_inc(v_auxDeclNGen_3864_);
lean_inc(v_ngen_3863_);
lean_inc(v_nextMacroScope_3862_);
lean_inc(v_env_3861_);
lean_dec(v___x_3859_);
v___x_3870_ = lean_box(0);
v_isShared_3871_ = v_isSharedCheck_3887_;
goto v_resetjp_3869_;
}
v_resetjp_3869_:
{
uint64_t v_tid_3872_; lean_object* v_traces_3873_; lean_object* v___x_3875_; uint8_t v_isShared_3876_; uint8_t v_isSharedCheck_3886_; 
v_tid_3872_ = lean_ctor_get_uint64(v_traceState_3860_, sizeof(void*)*1);
v_traces_3873_ = lean_ctor_get(v_traceState_3860_, 0);
v_isSharedCheck_3886_ = !lean_is_exclusive(v_traceState_3860_);
if (v_isSharedCheck_3886_ == 0)
{
v___x_3875_ = v_traceState_3860_;
v_isShared_3876_ = v_isSharedCheck_3886_;
goto v_resetjp_3874_;
}
else
{
lean_inc(v_traces_3873_);
lean_dec(v_traceState_3860_);
v___x_3875_ = lean_box(0);
v_isShared_3876_ = v_isSharedCheck_3886_;
goto v_resetjp_3874_;
}
v_resetjp_3874_:
{
lean_object* v___x_3877_; lean_object* v___x_3879_; 
v___x_3877_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_3809_, v_traces_3873_);
lean_dec_ref(v_traces_3873_);
if (v_isShared_3876_ == 0)
{
lean_ctor_set(v___x_3875_, 0, v___x_3877_);
v___x_3879_ = v___x_3875_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3885_; 
v_reuseFailAlloc_3885_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3885_, 0, v___x_3877_);
lean_ctor_set_uint64(v_reuseFailAlloc_3885_, sizeof(void*)*1, v_tid_3872_);
v___x_3879_ = v_reuseFailAlloc_3885_;
goto v_reusejp_3878_;
}
v_reusejp_3878_:
{
lean_object* v___x_3881_; 
if (v_isShared_3871_ == 0)
{
lean_ctor_set(v___x_3870_, 4, v___x_3879_);
v___x_3881_ = v___x_3870_;
goto v_reusejp_3880_;
}
else
{
lean_object* v_reuseFailAlloc_3884_; 
v_reuseFailAlloc_3884_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3884_, 0, v_env_3861_);
lean_ctor_set(v_reuseFailAlloc_3884_, 1, v_nextMacroScope_3862_);
lean_ctor_set(v_reuseFailAlloc_3884_, 2, v_ngen_3863_);
lean_ctor_set(v_reuseFailAlloc_3884_, 3, v_auxDeclNGen_3864_);
lean_ctor_set(v_reuseFailAlloc_3884_, 4, v___x_3879_);
lean_ctor_set(v_reuseFailAlloc_3884_, 5, v_cache_3865_);
lean_ctor_set(v_reuseFailAlloc_3884_, 6, v_messages_3866_);
lean_ctor_set(v_reuseFailAlloc_3884_, 7, v_infoState_3867_);
lean_ctor_set(v_reuseFailAlloc_3884_, 8, v_snapshotTasks_3868_);
v___x_3881_ = v_reuseFailAlloc_3884_;
goto v_reusejp_3880_;
}
v_reusejp_3880_:
{
lean_object* v___x_3882_; lean_object* v___x_3883_; 
v___x_3882_ = lean_st_ref_set(v___y_3819_, v___x_3881_);
v___x_3883_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__5___redArg(v_fst_3821_);
return v___x_3883_;
}
}
}
}
}
else
{
goto v___jp_3852_;
}
}
else
{
goto v___jp_3852_;
}
}
v___jp_3888_:
{
double v___x_3890_; double v___x_3891_; double v___x_3892_; uint8_t v___x_3893_; 
v___x_3890_ = lean_unbox_float(v_snd_3838_);
v___x_3891_ = lean_unbox_float(v_fst_3837_);
v___x_3892_ = lean_float_sub(v___x_3890_, v___x_3891_);
v___x_3893_ = lean_float_decLt(v___y_3889_, v___x_3892_);
v___y_3858_ = v___x_3893_;
goto v___jp_3857_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___boxed(lean_object** _args){
lean_object* v_cls_3904_ = _args[0];
lean_object* v_collapsed_3905_ = _args[1];
lean_object* v_tag_3906_ = _args[2];
lean_object* v_opts_3907_ = _args[3];
lean_object* v_clsEnabled_3908_ = _args[4];
lean_object* v_oldTraces_3909_ = _args[5];
lean_object* v_msg_3910_ = _args[6];
lean_object* v_resStartStop_3911_ = _args[7];
lean_object* v___y_3912_ = _args[8];
lean_object* v___y_3913_ = _args[9];
lean_object* v___y_3914_ = _args[10];
lean_object* v___y_3915_ = _args[11];
lean_object* v___y_3916_ = _args[12];
lean_object* v___y_3917_ = _args[13];
lean_object* v___y_3918_ = _args[14];
lean_object* v___y_3919_ = _args[15];
lean_object* v___y_3920_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_3921_; uint8_t v_clsEnabled_boxed_3922_; lean_object* v_res_3923_; 
v_collapsed_boxed_3921_ = lean_unbox(v_collapsed_3905_);
v_clsEnabled_boxed_3922_ = lean_unbox(v_clsEnabled_3908_);
v_res_3923_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3(v_cls_3904_, v_collapsed_boxed_3921_, v_tag_3906_, v_opts_3907_, v_clsEnabled_boxed_3922_, v_oldTraces_3909_, v_msg_3910_, v_resStartStop_3911_, v___y_3912_, v___y_3913_, v___y_3914_, v___y_3915_, v___y_3916_, v___y_3917_, v___y_3918_, v___y_3919_);
lean_dec(v___y_3919_);
lean_dec_ref(v___y_3918_);
lean_dec(v___y_3917_);
lean_dec_ref(v___y_3916_);
lean_dec(v___y_3915_);
lean_dec_ref(v___y_3914_);
lean_dec(v___y_3913_);
lean_dec_ref(v___y_3912_);
lean_dec_ref(v_opts_3907_);
return v_res_3923_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0___redArg(lean_object* v_cls_3926_, lean_object* v_msg_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_){
_start:
{
lean_object* v_ref_3933_; lean_object* v___x_3934_; lean_object* v_a_3935_; lean_object* v___x_3937_; uint8_t v_isShared_3938_; uint8_t v_isSharedCheck_3979_; 
v_ref_3933_ = lean_ctor_get(v___y_3930_, 5);
v___x_3934_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0_spec__0(v_msg_3927_, v___y_3928_, v___y_3929_, v___y_3930_, v___y_3931_);
v_a_3935_ = lean_ctor_get(v___x_3934_, 0);
v_isSharedCheck_3979_ = !lean_is_exclusive(v___x_3934_);
if (v_isSharedCheck_3979_ == 0)
{
v___x_3937_ = v___x_3934_;
v_isShared_3938_ = v_isSharedCheck_3979_;
goto v_resetjp_3936_;
}
else
{
lean_inc(v_a_3935_);
lean_dec(v___x_3934_);
v___x_3937_ = lean_box(0);
v_isShared_3938_ = v_isSharedCheck_3979_;
goto v_resetjp_3936_;
}
v_resetjp_3936_:
{
lean_object* v___x_3939_; lean_object* v_traceState_3940_; lean_object* v_env_3941_; lean_object* v_nextMacroScope_3942_; lean_object* v_ngen_3943_; lean_object* v_auxDeclNGen_3944_; lean_object* v_cache_3945_; lean_object* v_messages_3946_; lean_object* v_infoState_3947_; lean_object* v_snapshotTasks_3948_; lean_object* v___x_3950_; uint8_t v_isShared_3951_; uint8_t v_isSharedCheck_3978_; 
v___x_3939_ = lean_st_ref_take(v___y_3931_);
v_traceState_3940_ = lean_ctor_get(v___x_3939_, 4);
v_env_3941_ = lean_ctor_get(v___x_3939_, 0);
v_nextMacroScope_3942_ = lean_ctor_get(v___x_3939_, 1);
v_ngen_3943_ = lean_ctor_get(v___x_3939_, 2);
v_auxDeclNGen_3944_ = lean_ctor_get(v___x_3939_, 3);
v_cache_3945_ = lean_ctor_get(v___x_3939_, 5);
v_messages_3946_ = lean_ctor_get(v___x_3939_, 6);
v_infoState_3947_ = lean_ctor_get(v___x_3939_, 7);
v_snapshotTasks_3948_ = lean_ctor_get(v___x_3939_, 8);
v_isSharedCheck_3978_ = !lean_is_exclusive(v___x_3939_);
if (v_isSharedCheck_3978_ == 0)
{
v___x_3950_ = v___x_3939_;
v_isShared_3951_ = v_isSharedCheck_3978_;
goto v_resetjp_3949_;
}
else
{
lean_inc(v_snapshotTasks_3948_);
lean_inc(v_infoState_3947_);
lean_inc(v_messages_3946_);
lean_inc(v_cache_3945_);
lean_inc(v_traceState_3940_);
lean_inc(v_auxDeclNGen_3944_);
lean_inc(v_ngen_3943_);
lean_inc(v_nextMacroScope_3942_);
lean_inc(v_env_3941_);
lean_dec(v___x_3939_);
v___x_3950_ = lean_box(0);
v_isShared_3951_ = v_isSharedCheck_3978_;
goto v_resetjp_3949_;
}
v_resetjp_3949_:
{
uint64_t v_tid_3952_; lean_object* v_traces_3953_; lean_object* v___x_3955_; uint8_t v_isShared_3956_; uint8_t v_isSharedCheck_3977_; 
v_tid_3952_ = lean_ctor_get_uint64(v_traceState_3940_, sizeof(void*)*1);
v_traces_3953_ = lean_ctor_get(v_traceState_3940_, 0);
v_isSharedCheck_3977_ = !lean_is_exclusive(v_traceState_3940_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3955_ = v_traceState_3940_;
v_isShared_3956_ = v_isSharedCheck_3977_;
goto v_resetjp_3954_;
}
else
{
lean_inc(v_traces_3953_);
lean_dec(v_traceState_3940_);
v___x_3955_ = lean_box(0);
v_isShared_3956_ = v_isSharedCheck_3977_;
goto v_resetjp_3954_;
}
v_resetjp_3954_:
{
lean_object* v___x_3957_; double v___x_3958_; uint8_t v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3967_; 
v___x_3957_ = lean_box(0);
v___x_3958_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3___closed__0);
v___x_3959_ = 0;
v___x_3960_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10));
v___x_3961_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3961_, 0, v_cls_3926_);
lean_ctor_set(v___x_3961_, 1, v___x_3957_);
lean_ctor_set(v___x_3961_, 2, v___x_3960_);
lean_ctor_set_float(v___x_3961_, sizeof(void*)*3, v___x_3958_);
lean_ctor_set_float(v___x_3961_, sizeof(void*)*3 + 8, v___x_3958_);
lean_ctor_set_uint8(v___x_3961_, sizeof(void*)*3 + 16, v___x_3959_);
v___x_3962_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0___redArg___closed__0));
v___x_3963_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3963_, 0, v___x_3961_);
lean_ctor_set(v___x_3963_, 1, v_a_3935_);
lean_ctor_set(v___x_3963_, 2, v___x_3962_);
lean_inc(v_ref_3933_);
v___x_3964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3964_, 0, v_ref_3933_);
lean_ctor_set(v___x_3964_, 1, v___x_3963_);
v___x_3965_ = l_Lean_PersistentArray_push___redArg(v_traces_3953_, v___x_3964_);
if (v_isShared_3956_ == 0)
{
lean_ctor_set(v___x_3955_, 0, v___x_3965_);
v___x_3967_ = v___x_3955_;
goto v_reusejp_3966_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v___x_3965_);
lean_ctor_set_uint64(v_reuseFailAlloc_3976_, sizeof(void*)*1, v_tid_3952_);
v___x_3967_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3966_;
}
v_reusejp_3966_:
{
lean_object* v___x_3969_; 
if (v_isShared_3951_ == 0)
{
lean_ctor_set(v___x_3950_, 4, v___x_3967_);
v___x_3969_ = v___x_3950_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3975_; 
v_reuseFailAlloc_3975_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3975_, 0, v_env_3941_);
lean_ctor_set(v_reuseFailAlloc_3975_, 1, v_nextMacroScope_3942_);
lean_ctor_set(v_reuseFailAlloc_3975_, 2, v_ngen_3943_);
lean_ctor_set(v_reuseFailAlloc_3975_, 3, v_auxDeclNGen_3944_);
lean_ctor_set(v_reuseFailAlloc_3975_, 4, v___x_3967_);
lean_ctor_set(v_reuseFailAlloc_3975_, 5, v_cache_3945_);
lean_ctor_set(v_reuseFailAlloc_3975_, 6, v_messages_3946_);
lean_ctor_set(v_reuseFailAlloc_3975_, 7, v_infoState_3947_);
lean_ctor_set(v_reuseFailAlloc_3975_, 8, v_snapshotTasks_3948_);
v___x_3969_ = v_reuseFailAlloc_3975_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3973_; 
v___x_3970_ = lean_st_ref_set(v___y_3931_, v___x_3969_);
v___x_3971_ = lean_box(0);
if (v_isShared_3938_ == 0)
{
lean_ctor_set(v___x_3937_, 0, v___x_3971_);
v___x_3973_ = v___x_3937_;
goto v_reusejp_3972_;
}
else
{
lean_object* v_reuseFailAlloc_3974_; 
v_reuseFailAlloc_3974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3974_, 0, v___x_3971_);
v___x_3973_ = v_reuseFailAlloc_3974_;
goto v_reusejp_3972_;
}
v_reusejp_3972_:
{
return v___x_3973_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0___redArg___boxed(lean_object* v_cls_3980_, lean_object* v_msg_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_){
_start:
{
lean_object* v_res_3987_; 
v_res_3987_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0___redArg(v_cls_3980_, v_msg_3981_, v___y_3982_, v___y_3983_, v___y_3984_, v___y_3985_);
lean_dec(v___y_3985_);
lean_dec_ref(v___y_3984_);
lean_dec(v___y_3983_);
lean_dec_ref(v___y_3982_);
return v_res_3987_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_3992_; lean_object* v___x_3993_; 
v___x_3992_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg___closed__1));
v___x_3993_ = l_Lean_stringToMessageData(v___x_3992_);
return v___x_3993_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg(lean_object* v_as_x27_3994_, lean_object* v_b_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_){
_start:
{
if (lean_obj_tag(v_as_x27_3994_) == 0)
{
lean_object* v___x_4005_; 
v___x_4005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4005_, 0, v_b_3995_);
return v___x_4005_;
}
else
{
lean_object* v_head_4006_; lean_object* v_options_4007_; lean_object* v_tail_4008_; lean_object* v_name_4009_; lean_object* v_run_x27_4010_; lean_object* v_inheritedTraceOptions_4011_; uint8_t v_hasTrace_4012_; lean_object* v___x_4013_; uint8_t v___y_4015_; lean_object* v___x_4020_; lean_object* v___y_4022_; 
lean_dec_ref(v_b_3995_);
v_head_4006_ = lean_ctor_get(v_as_x27_3994_, 0);
v_options_4007_ = lean_ctor_get(v___y_4002_, 2);
v_tail_4008_ = lean_ctor_get(v_as_x27_3994_, 1);
v_name_4009_ = lean_ctor_get(v_head_4006_, 0);
v_run_x27_4010_ = lean_ctor_get(v_head_4006_, 1);
v_inheritedTraceOptions_4011_ = lean_ctor_get(v___y_4002_, 13);
v_hasTrace_4012_ = lean_ctor_get_uint8(v_options_4007_, sizeof(void*)*1);
v___x_4013_ = lean_box(0);
v___x_4020_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg___closed__0));
if (v_hasTrace_4012_ == 0)
{
lean_object* v___x_4050_; 
lean_inc_ref(v_run_x27_4010_);
lean_inc(v___y_4003_);
lean_inc_ref(v___y_4002_);
lean_inc(v___y_4001_);
lean_inc_ref(v___y_4000_);
lean_inc(v___y_3999_);
lean_inc_ref(v___y_3998_);
lean_inc(v___y_3997_);
lean_inc_ref(v___y_3996_);
v___x_4050_ = lean_apply_9(v_run_x27_4010_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_, lean_box(0));
v___y_4022_ = v___x_4050_;
goto v___jp_4021_;
}
else
{
lean_object* v___f_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; uint8_t v___x_4055_; lean_object* v___y_4057_; lean_object* v___y_4058_; lean_object* v_a_4059_; lean_object* v___y_4072_; lean_object* v___y_4073_; lean_object* v_a_4074_; 
lean_inc(v_name_4009_);
v___f_4051_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___boxed), 11, 1);
lean_closure_set(v___f_4051_, 0, v_name_4009_);
v___x_4052_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_4053_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10));
v___x_4054_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14);
v___x_4055_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4011_, v_options_4007_, v___x_4054_);
if (v___x_4055_ == 0)
{
lean_object* v___x_4124_; uint8_t v___x_4125_; 
v___x_4124_ = l_Lean_trace_profiler;
v___x_4125_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__2(v_options_4007_, v___x_4124_);
if (v___x_4125_ == 0)
{
lean_object* v___x_4126_; 
lean_dec_ref(v___f_4051_);
lean_inc_ref(v_run_x27_4010_);
lean_inc(v___y_4003_);
lean_inc_ref(v___y_4002_);
lean_inc(v___y_4001_);
lean_inc_ref(v___y_4000_);
lean_inc(v___y_3999_);
lean_inc_ref(v___y_3998_);
lean_inc(v___y_3997_);
lean_inc_ref(v___y_3996_);
v___x_4126_ = lean_apply_9(v_run_x27_4010_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_, lean_box(0));
v___y_4022_ = v___x_4126_;
goto v___jp_4021_;
}
else
{
goto v___jp_4083_;
}
}
else
{
goto v___jp_4083_;
}
v___jp_4056_:
{
lean_object* v___x_4060_; double v___x_4061_; double v___x_4062_; double v___x_4063_; double v___x_4064_; double v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; 
v___x_4060_ = lean_io_mono_nanos_now();
v___x_4061_ = lean_float_of_nat(v___y_4058_);
v___x_4062_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11);
v___x_4063_ = lean_float_div(v___x_4061_, v___x_4062_);
v___x_4064_ = lean_float_of_nat(v___x_4060_);
v___x_4065_ = lean_float_div(v___x_4064_, v___x_4062_);
v___x_4066_ = lean_box_float(v___x_4063_);
v___x_4067_ = lean_box_float(v___x_4065_);
v___x_4068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4068_, 0, v___x_4066_);
lean_ctor_set(v___x_4068_, 1, v___x_4067_);
v___x_4069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4069_, 0, v_a_4059_);
lean_ctor_set(v___x_4069_, 1, v___x_4068_);
v___x_4070_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3(v___x_4052_, v_hasTrace_4012_, v___x_4053_, v_options_4007_, v___x_4055_, v___y_4057_, v___f_4051_, v___x_4069_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_);
v___y_4022_ = v___x_4070_;
goto v___jp_4021_;
}
v___jp_4071_:
{
lean_object* v___x_4075_; double v___x_4076_; double v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; 
v___x_4075_ = lean_io_get_num_heartbeats();
v___x_4076_ = lean_float_of_nat(v___y_4073_);
v___x_4077_ = lean_float_of_nat(v___x_4075_);
v___x_4078_ = lean_box_float(v___x_4076_);
v___x_4079_ = lean_box_float(v___x_4077_);
v___x_4080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4080_, 0, v___x_4078_);
lean_ctor_set(v___x_4080_, 1, v___x_4079_);
v___x_4081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4081_, 0, v_a_4074_);
lean_ctor_set(v___x_4081_, 1, v___x_4080_);
v___x_4082_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3(v___x_4052_, v_hasTrace_4012_, v___x_4053_, v_options_4007_, v___x_4055_, v___y_4072_, v___f_4051_, v___x_4081_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_);
v___y_4022_ = v___x_4082_;
goto v___jp_4021_;
}
v___jp_4083_:
{
lean_object* v___x_4084_; lean_object* v_a_4085_; lean_object* v___x_4086_; uint8_t v___x_4087_; 
v___x_4084_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__1___redArg(v___y_4003_);
v_a_4085_ = lean_ctor_get(v___x_4084_, 0);
lean_inc(v_a_4085_);
lean_dec_ref(v___x_4084_);
v___x_4086_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4087_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__2(v_options_4007_, v___x_4086_);
if (v___x_4087_ == 0)
{
lean_object* v___x_4088_; lean_object* v___x_4089_; 
v___x_4088_ = lean_io_mono_nanos_now();
lean_inc_ref(v_run_x27_4010_);
lean_inc(v___y_4003_);
lean_inc_ref(v___y_4002_);
lean_inc(v___y_4001_);
lean_inc_ref(v___y_4000_);
lean_inc(v___y_3999_);
lean_inc_ref(v___y_3998_);
lean_inc(v___y_3997_);
lean_inc_ref(v___y_3996_);
v___x_4089_ = lean_apply_9(v_run_x27_4010_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_, lean_box(0));
if (lean_obj_tag(v___x_4089_) == 0)
{
lean_object* v_a_4090_; lean_object* v___x_4092_; uint8_t v_isShared_4093_; uint8_t v_isSharedCheck_4097_; 
v_a_4090_ = lean_ctor_get(v___x_4089_, 0);
v_isSharedCheck_4097_ = !lean_is_exclusive(v___x_4089_);
if (v_isSharedCheck_4097_ == 0)
{
v___x_4092_ = v___x_4089_;
v_isShared_4093_ = v_isSharedCheck_4097_;
goto v_resetjp_4091_;
}
else
{
lean_inc(v_a_4090_);
lean_dec(v___x_4089_);
v___x_4092_ = lean_box(0);
v_isShared_4093_ = v_isSharedCheck_4097_;
goto v_resetjp_4091_;
}
v_resetjp_4091_:
{
lean_object* v___x_4095_; 
if (v_isShared_4093_ == 0)
{
lean_ctor_set_tag(v___x_4092_, 1);
v___x_4095_ = v___x_4092_;
goto v_reusejp_4094_;
}
else
{
lean_object* v_reuseFailAlloc_4096_; 
v_reuseFailAlloc_4096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4096_, 0, v_a_4090_);
v___x_4095_ = v_reuseFailAlloc_4096_;
goto v_reusejp_4094_;
}
v_reusejp_4094_:
{
v___y_4057_ = v_a_4085_;
v___y_4058_ = v___x_4088_;
v_a_4059_ = v___x_4095_;
goto v___jp_4056_;
}
}
}
else
{
lean_object* v_a_4098_; lean_object* v___x_4100_; uint8_t v_isShared_4101_; uint8_t v_isSharedCheck_4105_; 
v_a_4098_ = lean_ctor_get(v___x_4089_, 0);
v_isSharedCheck_4105_ = !lean_is_exclusive(v___x_4089_);
if (v_isSharedCheck_4105_ == 0)
{
v___x_4100_ = v___x_4089_;
v_isShared_4101_ = v_isSharedCheck_4105_;
goto v_resetjp_4099_;
}
else
{
lean_inc(v_a_4098_);
lean_dec(v___x_4089_);
v___x_4100_ = lean_box(0);
v_isShared_4101_ = v_isSharedCheck_4105_;
goto v_resetjp_4099_;
}
v_resetjp_4099_:
{
lean_object* v___x_4103_; 
if (v_isShared_4101_ == 0)
{
lean_ctor_set_tag(v___x_4100_, 0);
v___x_4103_ = v___x_4100_;
goto v_reusejp_4102_;
}
else
{
lean_object* v_reuseFailAlloc_4104_; 
v_reuseFailAlloc_4104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4104_, 0, v_a_4098_);
v___x_4103_ = v_reuseFailAlloc_4104_;
goto v_reusejp_4102_;
}
v_reusejp_4102_:
{
v___y_4057_ = v_a_4085_;
v___y_4058_ = v___x_4088_;
v_a_4059_ = v___x_4103_;
goto v___jp_4056_;
}
}
}
}
else
{
lean_object* v___x_4106_; lean_object* v___x_4107_; 
v___x_4106_ = lean_io_get_num_heartbeats();
lean_inc_ref(v_run_x27_4010_);
lean_inc(v___y_4003_);
lean_inc_ref(v___y_4002_);
lean_inc(v___y_4001_);
lean_inc_ref(v___y_4000_);
lean_inc(v___y_3999_);
lean_inc_ref(v___y_3998_);
lean_inc(v___y_3997_);
lean_inc_ref(v___y_3996_);
v___x_4107_ = lean_apply_9(v_run_x27_4010_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_, lean_box(0));
if (lean_obj_tag(v___x_4107_) == 0)
{
lean_object* v_a_4108_; lean_object* v___x_4110_; uint8_t v_isShared_4111_; uint8_t v_isSharedCheck_4115_; 
v_a_4108_ = lean_ctor_get(v___x_4107_, 0);
v_isSharedCheck_4115_ = !lean_is_exclusive(v___x_4107_);
if (v_isSharedCheck_4115_ == 0)
{
v___x_4110_ = v___x_4107_;
v_isShared_4111_ = v_isSharedCheck_4115_;
goto v_resetjp_4109_;
}
else
{
lean_inc(v_a_4108_);
lean_dec(v___x_4107_);
v___x_4110_ = lean_box(0);
v_isShared_4111_ = v_isSharedCheck_4115_;
goto v_resetjp_4109_;
}
v_resetjp_4109_:
{
lean_object* v___x_4113_; 
if (v_isShared_4111_ == 0)
{
lean_ctor_set_tag(v___x_4110_, 1);
v___x_4113_ = v___x_4110_;
goto v_reusejp_4112_;
}
else
{
lean_object* v_reuseFailAlloc_4114_; 
v_reuseFailAlloc_4114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4114_, 0, v_a_4108_);
v___x_4113_ = v_reuseFailAlloc_4114_;
goto v_reusejp_4112_;
}
v_reusejp_4112_:
{
v___y_4072_ = v_a_4085_;
v___y_4073_ = v___x_4106_;
v_a_4074_ = v___x_4113_;
goto v___jp_4071_;
}
}
}
else
{
lean_object* v_a_4116_; lean_object* v___x_4118_; uint8_t v_isShared_4119_; uint8_t v_isSharedCheck_4123_; 
v_a_4116_ = lean_ctor_get(v___x_4107_, 0);
v_isSharedCheck_4123_ = !lean_is_exclusive(v___x_4107_);
if (v_isSharedCheck_4123_ == 0)
{
v___x_4118_ = v___x_4107_;
v_isShared_4119_ = v_isSharedCheck_4123_;
goto v_resetjp_4117_;
}
else
{
lean_inc(v_a_4116_);
lean_dec(v___x_4107_);
v___x_4118_ = lean_box(0);
v_isShared_4119_ = v_isSharedCheck_4123_;
goto v_resetjp_4117_;
}
v_resetjp_4117_:
{
lean_object* v___x_4121_; 
if (v_isShared_4119_ == 0)
{
lean_ctor_set_tag(v___x_4118_, 0);
v___x_4121_ = v___x_4118_;
goto v_reusejp_4120_;
}
else
{
lean_object* v_reuseFailAlloc_4122_; 
v_reuseFailAlloc_4122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4122_, 0, v_a_4116_);
v___x_4121_ = v_reuseFailAlloc_4122_;
goto v_reusejp_4120_;
}
v_reusejp_4120_:
{
v___y_4072_ = v_a_4085_;
v___y_4073_ = v___x_4106_;
v_a_4074_ = v___x_4121_;
goto v___jp_4071_;
}
}
}
}
}
}
v___jp_4014_:
{
lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; 
v___x_4016_ = lean_box(v___y_4015_);
v___x_4017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4017_, 0, v___x_4016_);
v___x_4018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4018_, 0, v___x_4017_);
lean_ctor_set(v___x_4018_, 1, v___x_4013_);
v___x_4019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4019_, 0, v___x_4018_);
return v___x_4019_;
}
v___jp_4021_:
{
if (lean_obj_tag(v___y_4022_) == 0)
{
lean_object* v_a_4023_; uint8_t v___x_4024_; 
v_a_4023_ = lean_ctor_get(v___y_4022_, 0);
lean_inc(v_a_4023_);
lean_dec_ref_known(v___y_4022_, 1);
v___x_4024_ = lean_unbox(v_a_4023_);
if (v___x_4024_ == 0)
{
lean_dec(v_a_4023_);
v_as_x27_3994_ = v_tail_4008_;
v_b_3995_ = v___x_4020_;
goto _start;
}
else
{
if (v_hasTrace_4012_ == 0)
{
uint8_t v___x_4026_; 
v___x_4026_ = lean_unbox(v_a_4023_);
lean_dec(v_a_4023_);
v___y_4015_ = v___x_4026_;
goto v___jp_4014_;
}
else
{
lean_object* v___x_4027_; lean_object* v___x_4028_; uint8_t v___x_4029_; 
v___x_4027_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_4028_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14);
v___x_4029_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4011_, v_options_4007_, v___x_4028_);
if (v___x_4029_ == 0)
{
uint8_t v___x_4030_; 
v___x_4030_ = lean_unbox(v_a_4023_);
lean_dec(v_a_4023_);
v___y_4015_ = v___x_4030_;
goto v___jp_4014_;
}
else
{
lean_object* v___x_4031_; lean_object* v___x_4032_; 
v___x_4031_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg___closed__2, &l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg___closed__2);
v___x_4032_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0___redArg(v___x_4027_, v___x_4031_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_);
if (lean_obj_tag(v___x_4032_) == 0)
{
uint8_t v___x_4033_; 
lean_dec_ref_known(v___x_4032_, 1);
v___x_4033_ = lean_unbox(v_a_4023_);
lean_dec(v_a_4023_);
v___y_4015_ = v___x_4033_;
goto v___jp_4014_;
}
else
{
lean_object* v_a_4034_; lean_object* v___x_4036_; uint8_t v_isShared_4037_; uint8_t v_isSharedCheck_4041_; 
lean_dec(v_a_4023_);
v_a_4034_ = lean_ctor_get(v___x_4032_, 0);
v_isSharedCheck_4041_ = !lean_is_exclusive(v___x_4032_);
if (v_isSharedCheck_4041_ == 0)
{
v___x_4036_ = v___x_4032_;
v_isShared_4037_ = v_isSharedCheck_4041_;
goto v_resetjp_4035_;
}
else
{
lean_inc(v_a_4034_);
lean_dec(v___x_4032_);
v___x_4036_ = lean_box(0);
v_isShared_4037_ = v_isSharedCheck_4041_;
goto v_resetjp_4035_;
}
v_resetjp_4035_:
{
lean_object* v___x_4039_; 
if (v_isShared_4037_ == 0)
{
v___x_4039_ = v___x_4036_;
goto v_reusejp_4038_;
}
else
{
lean_object* v_reuseFailAlloc_4040_; 
v_reuseFailAlloc_4040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4040_, 0, v_a_4034_);
v___x_4039_ = v_reuseFailAlloc_4040_;
goto v_reusejp_4038_;
}
v_reusejp_4038_:
{
return v___x_4039_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4042_; lean_object* v___x_4044_; uint8_t v_isShared_4045_; uint8_t v_isSharedCheck_4049_; 
v_a_4042_ = lean_ctor_get(v___y_4022_, 0);
v_isSharedCheck_4049_ = !lean_is_exclusive(v___y_4022_);
if (v_isSharedCheck_4049_ == 0)
{
v___x_4044_ = v___y_4022_;
v_isShared_4045_ = v_isSharedCheck_4049_;
goto v_resetjp_4043_;
}
else
{
lean_inc(v_a_4042_);
lean_dec(v___y_4022_);
v___x_4044_ = lean_box(0);
v_isShared_4045_ = v_isSharedCheck_4049_;
goto v_resetjp_4043_;
}
v_resetjp_4043_:
{
lean_object* v___x_4047_; 
if (v_isShared_4045_ == 0)
{
v___x_4047_ = v___x_4044_;
goto v_reusejp_4046_;
}
else
{
lean_object* v_reuseFailAlloc_4048_; 
v_reuseFailAlloc_4048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4048_, 0, v_a_4042_);
v___x_4047_ = v_reuseFailAlloc_4048_;
goto v_reusejp_4046_;
}
v_reusejp_4046_:
{
return v___x_4047_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg___boxed(lean_object* v_as_x27_4127_, lean_object* v_b_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_){
_start:
{
lean_object* v_res_4138_; 
v_res_4138_ = l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg(v_as_x27_4127_, v_b_4128_, v___y_4129_, v___y_4130_, v___y_4131_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_, v___y_4136_);
lean_dec(v___y_4136_);
lean_dec_ref(v___y_4135_);
lean_dec(v___y_4134_);
lean_dec_ref(v___y_4133_);
lean_dec(v___y_4132_);
lean_dec_ref(v___y_4131_);
lean_dec(v___y_4130_);
lean_dec_ref(v___y_4129_);
lean_dec(v_as_x27_4127_);
return v_res_4138_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__2(void){
_start:
{
lean_object* v___x_4141_; lean_object* v___x_4142_; 
v___x_4141_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__1));
v___x_4142_ = l_Lean_stringToMessageData(v___x_4141_);
return v___x_4142_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__4(void){
_start:
{
lean_object* v___x_4144_; lean_object* v___x_4145_; 
v___x_4144_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__3));
v___x_4145_ = l_Lean_stringToMessageData(v___x_4144_);
return v___x_4145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(lean_object* v_passes_4146_, lean_object* v_a_4147_, lean_object* v_a_4148_, lean_object* v_a_4149_, lean_object* v_a_4150_, lean_object* v_a_4151_, lean_object* v_a_4152_, lean_object* v_a_4153_, lean_object* v_a_4154_){
_start:
{
lean_object* v___x_4156_; lean_object* v___x_4157_; 
v___x_4156_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__0));
v___x_4157_ = l_Lean_Core_checkSystem(v___x_4156_, v_a_4153_, v_a_4154_);
if (lean_obj_tag(v___x_4157_) == 0)
{
lean_object* v___x_4158_; lean_object* v_rewriteCache_4159_; lean_object* v_acNfCache_4160_; lean_object* v_typeAnalysis_4161_; lean_object* v_goal_4162_; lean_object* v_hypotheses_4163_; lean_object* v___x_4165_; uint8_t v_isShared_4166_; uint8_t v_isSharedCheck_4246_; 
lean_dec_ref_known(v___x_4157_, 1);
v___x_4158_ = lean_st_ref_take(v_a_4148_);
v_rewriteCache_4159_ = lean_ctor_get(v___x_4158_, 0);
v_acNfCache_4160_ = lean_ctor_get(v___x_4158_, 1);
v_typeAnalysis_4161_ = lean_ctor_get(v___x_4158_, 2);
v_goal_4162_ = lean_ctor_get(v___x_4158_, 3);
v_hypotheses_4163_ = lean_ctor_get(v___x_4158_, 4);
v_isSharedCheck_4246_ = !lean_is_exclusive(v___x_4158_);
if (v_isSharedCheck_4246_ == 0)
{
v___x_4165_ = v___x_4158_;
v_isShared_4166_ = v_isSharedCheck_4246_;
goto v_resetjp_4164_;
}
else
{
lean_inc(v_hypotheses_4163_);
lean_inc(v_goal_4162_);
lean_inc(v_typeAnalysis_4161_);
lean_inc(v_acNfCache_4160_);
lean_inc(v_rewriteCache_4159_);
lean_dec(v___x_4158_);
v___x_4165_ = lean_box(0);
v_isShared_4166_ = v_isSharedCheck_4246_;
goto v_resetjp_4164_;
}
v_resetjp_4164_:
{
uint8_t v___x_4167_; lean_object* v___x_4169_; 
v___x_4167_ = 0;
if (v_isShared_4166_ == 0)
{
v___x_4169_ = v___x_4165_;
goto v_reusejp_4168_;
}
else
{
lean_object* v_reuseFailAlloc_4245_; 
v_reuseFailAlloc_4245_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_4245_, 0, v_rewriteCache_4159_);
lean_ctor_set(v_reuseFailAlloc_4245_, 1, v_acNfCache_4160_);
lean_ctor_set(v_reuseFailAlloc_4245_, 2, v_typeAnalysis_4161_);
lean_ctor_set(v_reuseFailAlloc_4245_, 3, v_goal_4162_);
lean_ctor_set(v_reuseFailAlloc_4245_, 4, v_hypotheses_4163_);
v___x_4169_ = v_reuseFailAlloc_4245_;
goto v_reusejp_4168_;
}
v_reusejp_4168_:
{
lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; 
lean_ctor_set_uint8(v___x_4169_, sizeof(void*)*5, v___x_4167_);
v___x_4170_ = lean_st_ref_set(v_a_4148_, v___x_4169_);
v___x_4171_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg___closed__0));
v___x_4172_ = l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg(v_passes_4146_, v___x_4171_, v_a_4147_, v_a_4148_, v_a_4149_, v_a_4150_, v_a_4151_, v_a_4152_, v_a_4153_, v_a_4154_);
if (lean_obj_tag(v___x_4172_) == 0)
{
lean_object* v_a_4173_; lean_object* v___x_4175_; uint8_t v_isShared_4176_; uint8_t v_isSharedCheck_4236_; 
v_a_4173_ = lean_ctor_get(v___x_4172_, 0);
v_isSharedCheck_4236_ = !lean_is_exclusive(v___x_4172_);
if (v_isSharedCheck_4236_ == 0)
{
v___x_4175_ = v___x_4172_;
v_isShared_4176_ = v_isSharedCheck_4236_;
goto v_resetjp_4174_;
}
else
{
lean_inc(v_a_4173_);
lean_dec(v___x_4172_);
v___x_4175_ = lean_box(0);
v_isShared_4176_ = v_isSharedCheck_4236_;
goto v_resetjp_4174_;
}
v_resetjp_4174_:
{
lean_object* v_fst_4177_; 
v_fst_4177_ = lean_ctor_get(v_a_4173_, 0);
lean_inc(v_fst_4177_);
lean_dec(v_a_4173_);
if (lean_obj_tag(v_fst_4177_) == 0)
{
lean_object* v___x_4178_; uint8_t v_didChange_4179_; 
v___x_4178_ = lean_st_ref_get(v_a_4148_);
v_didChange_4179_ = lean_ctor_get_uint8(v___x_4178_, sizeof(void*)*5);
lean_dec(v___x_4178_);
if (v_didChange_4179_ == 0)
{
lean_object* v_options_4180_; uint8_t v_hasTrace_4181_; 
v_options_4180_ = lean_ctor_get(v_a_4153_, 2);
v_hasTrace_4181_ = lean_ctor_get_uint8(v_options_4180_, sizeof(void*)*1);
if (v_hasTrace_4181_ == 0)
{
lean_object* v___x_4182_; lean_object* v___x_4184_; 
v___x_4182_ = lean_box(v_didChange_4179_);
if (v_isShared_4176_ == 0)
{
lean_ctor_set(v___x_4175_, 0, v___x_4182_);
v___x_4184_ = v___x_4175_;
goto v_reusejp_4183_;
}
else
{
lean_object* v_reuseFailAlloc_4185_; 
v_reuseFailAlloc_4185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4185_, 0, v___x_4182_);
v___x_4184_ = v_reuseFailAlloc_4185_;
goto v_reusejp_4183_;
}
v_reusejp_4183_:
{
return v___x_4184_;
}
}
else
{
lean_object* v_inheritedTraceOptions_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; uint8_t v___x_4189_; 
v_inheritedTraceOptions_4186_ = lean_ctor_get(v_a_4153_, 13);
v___x_4187_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_4188_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14);
v___x_4189_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4186_, v_options_4180_, v___x_4188_);
if (v___x_4189_ == 0)
{
lean_object* v___x_4190_; lean_object* v___x_4192_; 
v___x_4190_ = lean_box(v_didChange_4179_);
if (v_isShared_4176_ == 0)
{
lean_ctor_set(v___x_4175_, 0, v___x_4190_);
v___x_4192_ = v___x_4175_;
goto v_reusejp_4191_;
}
else
{
lean_object* v_reuseFailAlloc_4193_; 
v_reuseFailAlloc_4193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4193_, 0, v___x_4190_);
v___x_4192_ = v_reuseFailAlloc_4193_;
goto v_reusejp_4191_;
}
v_reusejp_4191_:
{
return v___x_4192_;
}
}
else
{
lean_object* v___x_4194_; lean_object* v___x_4195_; 
lean_del_object(v___x_4175_);
v___x_4194_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__2);
v___x_4195_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0___redArg(v___x_4187_, v___x_4194_, v_a_4151_, v_a_4152_, v_a_4153_, v_a_4154_);
if (lean_obj_tag(v___x_4195_) == 0)
{
lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4203_; 
v_isSharedCheck_4203_ = !lean_is_exclusive(v___x_4195_);
if (v_isSharedCheck_4203_ == 0)
{
lean_object* v_unused_4204_; 
v_unused_4204_ = lean_ctor_get(v___x_4195_, 0);
lean_dec(v_unused_4204_);
v___x_4197_ = v___x_4195_;
v_isShared_4198_ = v_isSharedCheck_4203_;
goto v_resetjp_4196_;
}
else
{
lean_dec(v___x_4195_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4203_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
lean_object* v___x_4199_; lean_object* v___x_4201_; 
v___x_4199_ = lean_box(v_didChange_4179_);
if (v_isShared_4198_ == 0)
{
lean_ctor_set(v___x_4197_, 0, v___x_4199_);
v___x_4201_ = v___x_4197_;
goto v_reusejp_4200_;
}
else
{
lean_object* v_reuseFailAlloc_4202_; 
v_reuseFailAlloc_4202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4202_, 0, v___x_4199_);
v___x_4201_ = v_reuseFailAlloc_4202_;
goto v_reusejp_4200_;
}
v_reusejp_4200_:
{
return v___x_4201_;
}
}
}
else
{
lean_object* v_a_4205_; lean_object* v___x_4207_; uint8_t v_isShared_4208_; uint8_t v_isSharedCheck_4212_; 
v_a_4205_ = lean_ctor_get(v___x_4195_, 0);
v_isSharedCheck_4212_ = !lean_is_exclusive(v___x_4195_);
if (v_isSharedCheck_4212_ == 0)
{
v___x_4207_ = v___x_4195_;
v_isShared_4208_ = v_isSharedCheck_4212_;
goto v_resetjp_4206_;
}
else
{
lean_inc(v_a_4205_);
lean_dec(v___x_4195_);
v___x_4207_ = lean_box(0);
v_isShared_4208_ = v_isSharedCheck_4212_;
goto v_resetjp_4206_;
}
v_resetjp_4206_:
{
lean_object* v___x_4210_; 
if (v_isShared_4208_ == 0)
{
v___x_4210_ = v___x_4207_;
goto v_reusejp_4209_;
}
else
{
lean_object* v_reuseFailAlloc_4211_; 
v_reuseFailAlloc_4211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4211_, 0, v_a_4205_);
v___x_4210_ = v_reuseFailAlloc_4211_;
goto v_reusejp_4209_;
}
v_reusejp_4209_:
{
return v___x_4210_;
}
}
}
}
}
}
else
{
lean_object* v_options_4213_; uint8_t v_hasTrace_4214_; 
lean_del_object(v___x_4175_);
v_options_4213_ = lean_ctor_get(v_a_4153_, 2);
v_hasTrace_4214_ = lean_ctor_get_uint8(v_options_4213_, sizeof(void*)*1);
if (v_hasTrace_4214_ == 0)
{
goto _start;
}
else
{
lean_object* v_inheritedTraceOptions_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; uint8_t v___x_4219_; 
v_inheritedTraceOptions_4216_ = lean_ctor_get(v_a_4153_, 13);
v___x_4217_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_4218_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14);
v___x_4219_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4216_, v_options_4213_, v___x_4218_);
if (v___x_4219_ == 0)
{
goto _start;
}
else
{
lean_object* v___x_4221_; lean_object* v___x_4222_; 
v___x_4221_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___closed__4);
v___x_4222_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0___redArg(v___x_4217_, v___x_4221_, v_a_4151_, v_a_4152_, v_a_4153_, v_a_4154_);
if (lean_obj_tag(v___x_4222_) == 0)
{
lean_dec_ref_known(v___x_4222_, 1);
goto _start;
}
else
{
lean_object* v_a_4224_; lean_object* v___x_4226_; uint8_t v_isShared_4227_; uint8_t v_isSharedCheck_4231_; 
v_a_4224_ = lean_ctor_get(v___x_4222_, 0);
v_isSharedCheck_4231_ = !lean_is_exclusive(v___x_4222_);
if (v_isSharedCheck_4231_ == 0)
{
v___x_4226_ = v___x_4222_;
v_isShared_4227_ = v_isSharedCheck_4231_;
goto v_resetjp_4225_;
}
else
{
lean_inc(v_a_4224_);
lean_dec(v___x_4222_);
v___x_4226_ = lean_box(0);
v_isShared_4227_ = v_isSharedCheck_4231_;
goto v_resetjp_4225_;
}
v_resetjp_4225_:
{
lean_object* v___x_4229_; 
if (v_isShared_4227_ == 0)
{
v___x_4229_ = v___x_4226_;
goto v_reusejp_4228_;
}
else
{
lean_object* v_reuseFailAlloc_4230_; 
v_reuseFailAlloc_4230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4230_, 0, v_a_4224_);
v___x_4229_ = v_reuseFailAlloc_4230_;
goto v_reusejp_4228_;
}
v_reusejp_4228_:
{
return v___x_4229_;
}
}
}
}
}
}
}
else
{
lean_object* v_val_4232_; lean_object* v___x_4234_; 
v_val_4232_ = lean_ctor_get(v_fst_4177_, 0);
lean_inc(v_val_4232_);
lean_dec_ref_known(v_fst_4177_, 1);
if (v_isShared_4176_ == 0)
{
lean_ctor_set(v___x_4175_, 0, v_val_4232_);
v___x_4234_ = v___x_4175_;
goto v_reusejp_4233_;
}
else
{
lean_object* v_reuseFailAlloc_4235_; 
v_reuseFailAlloc_4235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4235_, 0, v_val_4232_);
v___x_4234_ = v_reuseFailAlloc_4235_;
goto v_reusejp_4233_;
}
v_reusejp_4233_:
{
return v___x_4234_;
}
}
}
}
else
{
lean_object* v_a_4237_; lean_object* v___x_4239_; uint8_t v_isShared_4240_; uint8_t v_isSharedCheck_4244_; 
v_a_4237_ = lean_ctor_get(v___x_4172_, 0);
v_isSharedCheck_4244_ = !lean_is_exclusive(v___x_4172_);
if (v_isSharedCheck_4244_ == 0)
{
v___x_4239_ = v___x_4172_;
v_isShared_4240_ = v_isSharedCheck_4244_;
goto v_resetjp_4238_;
}
else
{
lean_inc(v_a_4237_);
lean_dec(v___x_4172_);
v___x_4239_ = lean_box(0);
v_isShared_4240_ = v_isSharedCheck_4244_;
goto v_resetjp_4238_;
}
v_resetjp_4238_:
{
lean_object* v___x_4242_; 
if (v_isShared_4240_ == 0)
{
v___x_4242_ = v___x_4239_;
goto v_reusejp_4241_;
}
else
{
lean_object* v_reuseFailAlloc_4243_; 
v_reuseFailAlloc_4243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4243_, 0, v_a_4237_);
v___x_4242_ = v_reuseFailAlloc_4243_;
goto v_reusejp_4241_;
}
v_reusejp_4241_:
{
return v___x_4242_;
}
}
}
}
}
}
else
{
lean_object* v_a_4247_; lean_object* v___x_4249_; uint8_t v_isShared_4250_; uint8_t v_isSharedCheck_4254_; 
v_a_4247_ = lean_ctor_get(v___x_4157_, 0);
v_isSharedCheck_4254_ = !lean_is_exclusive(v___x_4157_);
if (v_isSharedCheck_4254_ == 0)
{
v___x_4249_ = v___x_4157_;
v_isShared_4250_ = v_isSharedCheck_4254_;
goto v_resetjp_4248_;
}
else
{
lean_inc(v_a_4247_);
lean_dec(v___x_4157_);
v___x_4249_ = lean_box(0);
v_isShared_4250_ = v_isSharedCheck_4254_;
goto v_resetjp_4248_;
}
v_resetjp_4248_:
{
lean_object* v___x_4252_; 
if (v_isShared_4250_ == 0)
{
v___x_4252_ = v___x_4249_;
goto v_reusejp_4251_;
}
else
{
lean_object* v_reuseFailAlloc_4253_; 
v_reuseFailAlloc_4253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4253_, 0, v_a_4247_);
v___x_4252_ = v_reuseFailAlloc_4253_;
goto v_reusejp_4251_;
}
v_reusejp_4251_:
{
return v___x_4252_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___boxed(lean_object* v_passes_4255_, lean_object* v_a_4256_, lean_object* v_a_4257_, lean_object* v_a_4258_, lean_object* v_a_4259_, lean_object* v_a_4260_, lean_object* v_a_4261_, lean_object* v_a_4262_, lean_object* v_a_4263_, lean_object* v_a_4264_){
_start:
{
lean_object* v_res_4265_; 
v_res_4265_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(v_passes_4255_, v_a_4256_, v_a_4257_, v_a_4258_, v_a_4259_, v_a_4260_, v_a_4261_, v_a_4262_, v_a_4263_);
lean_dec(v_a_4263_);
lean_dec_ref(v_a_4262_);
lean_dec(v_a_4261_);
lean_dec_ref(v_a_4260_);
lean_dec(v_a_4259_);
lean_dec_ref(v_a_4258_);
lean_dec(v_a_4257_);
lean_dec_ref(v_a_4256_);
lean_dec(v_passes_4255_);
return v_res_4265_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0(lean_object* v_cls_4266_, lean_object* v_msg_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_){
_start:
{
lean_object* v___x_4277_; 
v___x_4277_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0___redArg(v_cls_4266_, v_msg_4267_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_);
return v___x_4277_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0___boxed(lean_object* v_cls_4278_, lean_object* v_msg_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_){
_start:
{
lean_object* v_res_4289_; 
v_res_4289_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__0(v_cls_4278_, v_msg_4279_, v___y_4280_, v___y_4281_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_, v___y_4286_, v___y_4287_);
lean_dec(v___y_4287_);
lean_dec_ref(v___y_4286_);
lean_dec(v___y_4285_);
lean_dec_ref(v___y_4284_);
lean_dec(v___y_4283_);
lean_dec_ref(v___y_4282_);
lean_dec(v___y_4281_);
lean_dec_ref(v___y_4280_);
return v_res_4289_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__5(lean_object* v_00_u03b1_4290_, lean_object* v_x_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_){
_start:
{
lean_object* v___x_4301_; 
v___x_4301_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__5___redArg(v_x_4291_);
return v___x_4301_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__5___boxed(lean_object* v_00_u03b1_4302_, lean_object* v_x_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_){
_start:
{
lean_object* v_res_4313_; 
v_res_4313_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__5(v_00_u03b1_4302_, v_x_4303_, v___y_4304_, v___y_4305_, v___y_4306_, v___y_4307_, v___y_4308_, v___y_4309_, v___y_4310_, v___y_4311_);
lean_dec(v___y_4311_);
lean_dec_ref(v___y_4310_);
lean_dec(v___y_4309_);
lean_dec_ref(v___y_4308_);
lean_dec(v___y_4307_);
lean_dec_ref(v___y_4306_);
lean_dec(v___y_4305_);
lean_dec_ref(v___y_4304_);
return v_res_4313_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4(lean_object* v_as_4314_, lean_object* v_as_x27_4315_, lean_object* v_b_4316_, lean_object* v_a_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_){
_start:
{
lean_object* v___x_4327_; 
v___x_4327_ = l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___redArg(v_as_x27_4315_, v_b_4316_, v___y_4318_, v___y_4319_, v___y_4320_, v___y_4321_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_);
return v___x_4327_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4___boxed(lean_object* v_as_4328_, lean_object* v_as_x27_4329_, lean_object* v_b_4330_, lean_object* v_a_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_){
_start:
{
lean_object* v_res_4341_; 
v_res_4341_ = l_List_forIn_x27_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__4(v_as_4328_, v_as_x27_4329_, v_b_4330_, v_a_4331_, v___y_4332_, v___y_4333_, v___y_4334_, v___y_4335_, v___y_4336_, v___y_4337_, v___y_4338_, v___y_4339_);
lean_dec(v___y_4339_);
lean_dec_ref(v___y_4338_);
lean_dec(v___y_4337_);
lean_dec_ref(v___y_4336_);
lean_dec(v___y_4335_);
lean_dec_ref(v___y_4334_);
lean_dec(v___y_4333_);
lean_dec_ref(v___y_4332_);
lean_dec(v_as_x27_4329_);
lean_dec(v_as_4328_);
return v_res_4341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4(lean_object* v_oldTraces_4342_, lean_object* v_data_4343_, lean_object* v_ref_4344_, lean_object* v_msg_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_){
_start:
{
lean_object* v___x_4355_; 
v___x_4355_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4___redArg(v_oldTraces_4342_, v_data_4343_, v_ref_4344_, v_msg_4345_, v___y_4350_, v___y_4351_, v___y_4352_, v___y_4353_);
return v___x_4355_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4___boxed(lean_object* v_oldTraces_4356_, lean_object* v_data_4357_, lean_object* v_ref_4358_, lean_object* v_msg_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_, lean_object* v___y_4365_, lean_object* v___y_4366_, lean_object* v___y_4367_, lean_object* v___y_4368_){
_start:
{
lean_object* v_res_4369_; 
v_res_4369_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_spec__3_spec__4(v_oldTraces_4356_, v_data_4357_, v_ref_4358_, v_msg_4359_, v___y_4360_, v___y_4361_, v___y_4362_, v___y_4363_, v___y_4364_, v___y_4365_, v___y_4366_, v___y_4367_);
lean_dec(v___y_4367_);
lean_dec_ref(v___y_4366_);
lean_dec(v___y_4365_);
lean_dec_ref(v___y_4364_);
lean_dec(v___y_4363_);
lean_dec_ref(v___y_4362_);
lean_dec(v___y_4361_);
lean_dec_ref(v___y_4360_);
return v_res_4369_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Attr(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_BVDecide_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default = _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default();
lean_mark_persistent(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default);
l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp = _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp();
lean_mark_persistent(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Attr(uint8_t builtin);
lean_object* initialize_Std_Tactic_BVDecide_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
