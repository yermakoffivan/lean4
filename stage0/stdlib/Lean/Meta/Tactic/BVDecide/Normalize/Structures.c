// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Normalize.Structures
// Imports: public import Lean.Meta.Tactic.BVDecide.Normalize.TypeAnalysis import Lean.Meta.Tactic.BVDecide.Normalize.ApplyControlFlow import Lean.Meta.Tactic.Ext public import Lean.Meta.Sym.Simp.SimpM import Lean.Meta.Sym.Simp.Theorems import Lean.Meta.Sym.Simp.Rewrite import Lean.Meta.Sym.Util
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_getStructureInfo(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Meta_mkProjFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_inferType___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_unfoldReducible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_StructureInfo_getProjFn_x3f(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_dischargeNone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Ext_instInhabitedExtTheorem_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Meta_Ext_extExtension;
extern lean_object* l_Lean_Meta_Ext_instInhabitedExtTheorems_default;
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getMatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_insert(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addDefaultTypeAnalysisLemmas(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp_beq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_mkConstAppWithMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_mkConstAppWithMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg___closed__0;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_iff"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_dischargeNone___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__1;
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__2 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3_spec__4_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__0 = (const lean_object*)&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__0_value;
static const lean_string_object l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__1 = (const lean_object*)&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__1_value;
static const lean_string_object l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__2 = (const lean_object*)&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__2_value;
static const lean_ctor_object l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__3_value_aux_0),((lean_object*)&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__3_value_aux_1),((lean_object*)&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__3 = (const lean_object*)&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__3_value;
static const lean_string_object l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__4 = (const lean_object*)&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__4_value;
static const lean_ctor_object l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__5 = (const lean_object*)&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__5_value;
static lean_once_cell_t l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__6;
static const lean_string_object l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Using ext_iff: "};
static const lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__7 = (const lean_object*)&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__7_value;
static lean_once_cell_t l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__8;
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3_spec__4_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "  ==>  "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___lam__0___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___closed__0_value),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___lam__1___boxed, .m_arity = 10, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___closed__1_value)} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__2_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__3 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__3_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__4_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__5;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__1_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Learned hypothesis: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structures"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___closed__1_value),LEAN_SCALAR_PTR_LITERAL(74, 214, 82, 86, 36, 11, 245, 232)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___closed__2_value),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___closed__3_value;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_mkConstAppWithMVars(lean_object* v_declName_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v_declName_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_);
if (lean_obj_tag(v___x_7_) == 0)
{
lean_object* v_a_8_; lean_object* v___x_9_; 
v_a_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_n(v_a_8_, 2);
lean_dec_ref_known(v___x_7_, 1);
lean_inc(v_a_5_);
lean_inc_ref(v_a_4_);
lean_inc(v_a_3_);
lean_inc_ref(v_a_2_);
v___x_9_ = lean_infer_type(v_a_8_, v_a_2_, v_a_3_, v_a_4_, v_a_5_);
if (lean_obj_tag(v___x_9_) == 0)
{
lean_object* v_a_10_; lean_object* v___x_11_; uint8_t v___x_12_; lean_object* v___x_13_; 
v_a_10_ = lean_ctor_get(v___x_9_, 0);
lean_inc(v_a_10_);
lean_dec_ref_known(v___x_9_, 1);
v___x_11_ = lean_box(0);
v___x_12_ = 0;
v___x_13_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_10_, v___x_11_, v___x_12_, v_a_2_, v_a_3_, v_a_4_, v_a_5_);
if (lean_obj_tag(v___x_13_) == 0)
{
lean_object* v_a_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_23_; 
v_a_14_ = lean_ctor_get(v___x_13_, 0);
v_isSharedCheck_23_ = !lean_is_exclusive(v___x_13_);
if (v_isSharedCheck_23_ == 0)
{
v___x_16_ = v___x_13_;
v_isShared_17_ = v_isSharedCheck_23_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_a_14_);
lean_dec(v___x_13_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_23_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v_fst_18_; lean_object* v___x_19_; lean_object* v___x_21_; 
v_fst_18_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_fst_18_);
lean_dec(v_a_14_);
v___x_19_ = l_Lean_mkAppN(v_a_8_, v_fst_18_);
lean_dec(v_fst_18_);
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 0, v___x_19_);
v___x_21_ = v___x_16_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_22_; 
v_reuseFailAlloc_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_22_, 0, v___x_19_);
v___x_21_ = v_reuseFailAlloc_22_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
return v___x_21_;
}
}
}
else
{
lean_object* v_a_24_; lean_object* v___x_26_; uint8_t v_isShared_27_; uint8_t v_isSharedCheck_31_; 
lean_dec(v_a_8_);
v_a_24_ = lean_ctor_get(v___x_13_, 0);
v_isSharedCheck_31_ = !lean_is_exclusive(v___x_13_);
if (v_isSharedCheck_31_ == 0)
{
v___x_26_ = v___x_13_;
v_isShared_27_ = v_isSharedCheck_31_;
goto v_resetjp_25_;
}
else
{
lean_inc(v_a_24_);
lean_dec(v___x_13_);
v___x_26_ = lean_box(0);
v_isShared_27_ = v_isSharedCheck_31_;
goto v_resetjp_25_;
}
v_resetjp_25_:
{
lean_object* v___x_29_; 
if (v_isShared_27_ == 0)
{
v___x_29_ = v___x_26_;
goto v_reusejp_28_;
}
else
{
lean_object* v_reuseFailAlloc_30_; 
v_reuseFailAlloc_30_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_30_, 0, v_a_24_);
v___x_29_ = v_reuseFailAlloc_30_;
goto v_reusejp_28_;
}
v_reusejp_28_:
{
return v___x_29_;
}
}
}
}
else
{
lean_dec(v_a_8_);
return v___x_9_;
}
}
else
{
return v___x_7_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_mkConstAppWithMVars___boxed(lean_object* v_declName_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_mkConstAppWithMVars(v_declName_32_, v_a_33_, v_a_34_, v_a_35_, v_a_36_);
lean_dec(v_a_36_);
lean_dec_ref(v_a_35_);
lean_dec(v_a_34_);
lean_dec_ref(v_a_33_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__1_spec__2___redArg(lean_object* v_xs_39_, lean_object* v_j_40_){
_start:
{
lean_object* v_zero_41_; uint8_t v_isZero_42_; 
v_zero_41_ = lean_unsigned_to_nat(0u);
v_isZero_42_ = lean_nat_dec_eq(v_j_40_, v_zero_41_);
if (v_isZero_42_ == 1)
{
lean_dec(v_j_40_);
return v_xs_39_;
}
else
{
lean_object* v___x_43_; lean_object* v_priority_44_; lean_object* v_one_45_; lean_object* v_n_46_; lean_object* v___x_47_; lean_object* v_priority_48_; uint8_t v___x_49_; 
v___x_43_ = lean_array_fget_borrowed(v_xs_39_, v_j_40_);
v_priority_44_ = lean_ctor_get(v___x_43_, 1);
v_one_45_ = lean_unsigned_to_nat(1u);
v_n_46_ = lean_nat_sub(v_j_40_, v_one_45_);
v___x_47_ = lean_array_fget_borrowed(v_xs_39_, v_n_46_);
v_priority_48_ = lean_ctor_get(v___x_47_, 1);
v___x_49_ = lean_nat_dec_lt(v_priority_44_, v_priority_48_);
if (v___x_49_ == 0)
{
lean_dec(v_n_46_);
lean_dec(v_j_40_);
return v_xs_39_;
}
else
{
lean_object* v___x_50_; 
v___x_50_ = lean_array_fswap(v_xs_39_, v_j_40_, v_n_46_);
lean_dec(v_j_40_);
v_xs_39_ = v___x_50_;
v_j_40_ = v_n_46_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__1(lean_object* v_xs_52_, lean_object* v_i_53_, lean_object* v_fuel_54_){
_start:
{
lean_object* v_zero_55_; uint8_t v_isZero_56_; 
v_zero_55_ = lean_unsigned_to_nat(0u);
v_isZero_56_ = lean_nat_dec_eq(v_fuel_54_, v_zero_55_);
if (v_isZero_56_ == 1)
{
lean_dec(v_fuel_54_);
lean_dec(v_i_53_);
return v_xs_52_;
}
else
{
lean_object* v___x_57_; uint8_t v___x_58_; 
v___x_57_ = lean_array_get_size(v_xs_52_);
v___x_58_ = lean_nat_dec_lt(v_i_53_, v___x_57_);
if (v___x_58_ == 0)
{
lean_dec(v_fuel_54_);
lean_dec(v_i_53_);
return v_xs_52_;
}
else
{
lean_object* v_one_59_; lean_object* v_n_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v_one_59_ = lean_unsigned_to_nat(1u);
v_n_60_ = lean_nat_sub(v_fuel_54_, v_one_59_);
lean_dec(v_fuel_54_);
lean_inc(v_i_53_);
v___x_61_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__1_spec__2___redArg(v_xs_52_, v_i_53_);
v___x_62_ = lean_nat_add(v_i_53_, v_one_59_);
lean_dec(v_i_53_);
v_xs_52_ = v___x_61_;
v_i_53_ = v___x_62_;
v_fuel_54_ = v_n_60_;
goto _start;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_64_, lean_object* v_i_65_, lean_object* v_k_66_){
_start:
{
lean_object* v___x_67_; uint8_t v___x_68_; 
v___x_67_ = lean_array_get_size(v_keys_64_);
v___x_68_ = lean_nat_dec_lt(v_i_65_, v___x_67_);
if (v___x_68_ == 0)
{
lean_dec(v_i_65_);
return v___x_68_;
}
else
{
lean_object* v_k_x27_69_; uint8_t v___x_70_; 
v_k_x27_69_ = lean_array_fget_borrowed(v_keys_64_, v_i_65_);
v___x_70_ = lean_name_eq(v_k_66_, v_k_x27_69_);
if (v___x_70_ == 0)
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_unsigned_to_nat(1u);
v___x_72_ = lean_nat_add(v_i_65_, v___x_71_);
lean_dec(v_i_65_);
v_i_65_ = v___x_72_;
goto _start;
}
else
{
lean_dec(v_i_65_);
return v___x_70_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_74_, lean_object* v_i_75_, lean_object* v_k_76_){
_start:
{
uint8_t v_res_77_; lean_object* v_r_78_; 
v_res_77_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0_spec__1___redArg(v_keys_74_, v_i_75_, v_k_76_);
lean_dec(v_k_76_);
lean_dec_ref(v_keys_74_);
v_r_78_ = lean_box(v_res_77_);
return v_r_78_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0___redArg(lean_object* v_x_79_, size_t v_x_80_, lean_object* v_x_81_){
_start:
{
if (lean_obj_tag(v_x_79_) == 0)
{
lean_object* v_es_82_; lean_object* v___x_83_; size_t v___x_84_; size_t v___x_85_; lean_object* v_j_86_; lean_object* v___x_87_; 
v_es_82_ = lean_ctor_get(v_x_79_, 0);
v___x_83_ = lean_box(2);
v___x_84_ = ((size_t)31ULL);
v___x_85_ = lean_usize_land(v_x_80_, v___x_84_);
v_j_86_ = lean_usize_to_nat(v___x_85_);
v___x_87_ = lean_array_get_borrowed(v___x_83_, v_es_82_, v_j_86_);
lean_dec(v_j_86_);
switch(lean_obj_tag(v___x_87_))
{
case 0:
{
lean_object* v_key_88_; uint8_t v___x_89_; 
v_key_88_ = lean_ctor_get(v___x_87_, 0);
v___x_89_ = lean_name_eq(v_x_81_, v_key_88_);
return v___x_89_;
}
case 1:
{
lean_object* v_node_90_; size_t v___x_91_; size_t v___x_92_; 
v_node_90_ = lean_ctor_get(v___x_87_, 0);
v___x_91_ = ((size_t)5ULL);
v___x_92_ = lean_usize_shift_right(v_x_80_, v___x_91_);
v_x_79_ = v_node_90_;
v_x_80_ = v___x_92_;
goto _start;
}
default: 
{
uint8_t v___x_94_; 
v___x_94_ = 0;
return v___x_94_;
}
}
}
else
{
lean_object* v_ks_95_; lean_object* v___x_96_; uint8_t v___x_97_; 
v_ks_95_ = lean_ctor_get(v_x_79_, 0);
v___x_96_ = lean_unsigned_to_nat(0u);
v___x_97_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0_spec__1___redArg(v_ks_95_, v___x_96_, v_x_81_);
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_98_, lean_object* v_x_99_, lean_object* v_x_100_){
_start:
{
size_t v_x_1610__boxed_101_; uint8_t v_res_102_; lean_object* v_r_103_; 
v_x_1610__boxed_101_ = lean_unbox_usize(v_x_99_);
lean_dec(v_x_99_);
v_res_102_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0___redArg(v_x_98_, v_x_1610__boxed_101_, v_x_100_);
lean_dec(v_x_100_);
lean_dec_ref(v_x_98_);
v_r_103_ = lean_box(v_res_102_);
return v_r_103_;
}
}
static uint64_t _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_104_; uint64_t v___x_105_; 
v___x_104_ = lean_unsigned_to_nat(1723u);
v___x_105_ = lean_uint64_of_nat(v___x_104_);
return v___x_105_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg(lean_object* v_x_106_, lean_object* v_x_107_){
_start:
{
uint64_t v___y_109_; 
if (lean_obj_tag(v_x_107_) == 0)
{
uint64_t v___x_112_; 
v___x_112_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg___closed__0);
v___y_109_ = v___x_112_;
goto v___jp_108_;
}
else
{
uint64_t v_hash_113_; 
v_hash_113_ = lean_ctor_get_uint64(v_x_107_, sizeof(void*)*2);
v___y_109_ = v_hash_113_;
goto v___jp_108_;
}
v___jp_108_:
{
size_t v___x_110_; uint8_t v___x_111_; 
v___x_110_ = lean_uint64_to_usize(v___y_109_);
v___x_111_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0___redArg(v_x_106_, v___x_110_, v_x_107_);
return v___x_111_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg___boxed(lean_object* v_x_114_, lean_object* v_x_115_){
_start:
{
uint8_t v_res_116_; lean_object* v_r_117_; 
v_res_116_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg(v_x_114_, v_x_115_);
lean_dec(v_x_115_);
lean_dec_ref(v_x_114_);
v_r_117_ = lean_box(v_res_116_);
return v_r_117_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__2(lean_object* v___x_118_, lean_object* v_as_119_, size_t v_i_120_, size_t v_stop_121_, lean_object* v_b_122_){
_start:
{
lean_object* v___y_124_; uint8_t v___x_128_; 
v___x_128_ = lean_usize_dec_eq(v_i_120_, v_stop_121_);
if (v___x_128_ == 0)
{
lean_object* v_erased_129_; lean_object* v___x_130_; lean_object* v_declName_131_; uint8_t v___x_132_; 
v_erased_129_ = lean_ctor_get(v___x_118_, 1);
v___x_130_ = lean_array_uget_borrowed(v_as_119_, v_i_120_);
v_declName_131_ = lean_ctor_get(v___x_130_, 0);
v___x_132_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg(v_erased_129_, v_declName_131_);
if (v___x_132_ == 0)
{
lean_object* v___x_133_; 
lean_inc(v___x_130_);
v___x_133_ = lean_array_push(v_b_122_, v___x_130_);
v___y_124_ = v___x_133_;
goto v___jp_123_;
}
else
{
v___y_124_ = v_b_122_;
goto v___jp_123_;
}
}
else
{
return v_b_122_;
}
v___jp_123_:
{
size_t v___x_125_; size_t v___x_126_; 
v___x_125_ = ((size_t)1ULL);
v___x_126_ = lean_usize_add(v_i_120_, v___x_125_);
v_i_120_ = v___x_126_;
v_b_122_ = v___y_124_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__2___boxed(lean_object* v___x_134_, lean_object* v_as_135_, lean_object* v_i_136_, lean_object* v_stop_137_, lean_object* v_b_138_){
_start:
{
size_t v_i_boxed_139_; size_t v_stop_boxed_140_; lean_object* v_res_141_; 
v_i_boxed_139_ = lean_unbox_usize(v_i_136_);
lean_dec(v_i_136_);
v_stop_boxed_140_ = lean_unbox_usize(v_stop_137_);
lean_dec(v_stop_137_);
v_res_141_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__2(v___x_134_, v_as_135_, v_i_boxed_139_, v_stop_boxed_140_, v_b_138_);
lean_dec_ref(v_as_135_);
lean_dec_ref(v___x_134_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f(lean_object* v_info_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v_a_152_; lean_object* v_toConstantVal_176_; lean_object* v_name_177_; lean_object* v___x_178_; 
v_toConstantVal_176_ = lean_ctor_get(v_info_145_, 0);
lean_inc_ref(v_toConstantVal_176_);
lean_dec_ref(v_info_145_);
v_name_177_ = lean_ctor_get(v_toConstantVal_176_, 0);
lean_inc(v_name_177_);
lean_dec_ref(v_toConstantVal_176_);
v___x_178_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_mkConstAppWithMVars(v_name_177_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v_a_179_; lean_object* v___x_180_; lean_object* v_env_181_; lean_object* v___x_182_; lean_object* v_ext_183_; lean_object* v_toEnvExtension_184_; lean_object* v_asyncMode_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v_tree_188_; lean_object* v___x_189_; 
v_a_179_ = lean_ctor_get(v___x_178_, 0);
lean_inc(v_a_179_);
lean_dec_ref_known(v___x_178_, 1);
v___x_180_ = lean_st_ref_get(v_a_149_);
v_env_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc_ref(v_env_181_);
lean_dec(v___x_180_);
v___x_182_ = l_Lean_Meta_Ext_extExtension;
v_ext_183_ = lean_ctor_get(v___x_182_, 1);
v_toEnvExtension_184_ = lean_ctor_get(v_ext_183_, 0);
v_asyncMode_185_ = lean_ctor_get(v_toEnvExtension_184_, 2);
v___x_186_ = l_Lean_Meta_Ext_instInhabitedExtTheorems_default;
v___x_187_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_186_, v___x_182_, v_env_181_, v_asyncMode_185_);
v_tree_188_ = lean_ctor_get(v___x_187_, 0);
lean_inc_ref(v_tree_188_);
v___x_189_ = l_Lean_Meta_DiscrTree_getMatch___redArg(v_tree_188_, v_a_179_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
lean_dec_ref(v_tree_188_);
if (lean_obj_tag(v___x_189_) == 0)
{
lean_object* v_a_190_; lean_object* v___y_192_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; uint8_t v___x_200_; 
v_a_190_ = lean_ctor_get(v___x_189_, 0);
lean_inc(v_a_190_);
lean_dec_ref_known(v___x_189_, 1);
v___x_197_ = lean_unsigned_to_nat(0u);
v___x_198_ = lean_array_get_size(v_a_190_);
v___x_199_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f___closed__1));
v___x_200_ = lean_nat_dec_lt(v___x_197_, v___x_198_);
if (v___x_200_ == 0)
{
lean_dec(v_a_190_);
lean_dec(v___x_187_);
v___y_192_ = v___x_199_;
goto v___jp_191_;
}
else
{
uint8_t v___x_201_; 
v___x_201_ = lean_nat_dec_le(v___x_198_, v___x_198_);
if (v___x_201_ == 0)
{
if (v___x_200_ == 0)
{
lean_dec(v_a_190_);
lean_dec(v___x_187_);
v___y_192_ = v___x_199_;
goto v___jp_191_;
}
else
{
size_t v___x_202_; size_t v___x_203_; lean_object* v___x_204_; 
v___x_202_ = ((size_t)0ULL);
v___x_203_ = lean_usize_of_nat(v___x_198_);
v___x_204_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__2(v___x_187_, v_a_190_, v___x_202_, v___x_203_, v___x_199_);
lean_dec(v_a_190_);
lean_dec(v___x_187_);
v___y_192_ = v___x_204_;
goto v___jp_191_;
}
}
else
{
size_t v___x_205_; size_t v___x_206_; lean_object* v___x_207_; 
v___x_205_ = ((size_t)0ULL);
v___x_206_ = lean_usize_of_nat(v___x_198_);
v___x_207_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__2(v___x_187_, v_a_190_, v___x_205_, v___x_206_, v___x_199_);
lean_dec(v_a_190_);
lean_dec(v___x_187_);
v___y_192_ = v___x_207_;
goto v___jp_191_;
}
}
v___jp_191_:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_193_ = lean_unsigned_to_nat(0u);
v___x_194_ = lean_array_get_size(v___y_192_);
v___x_195_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__1(v___y_192_, v___x_193_, v___x_194_);
v___x_196_ = l_Array_reverse___redArg(v___x_195_);
v_a_152_ = v___x_196_;
goto v___jp_151_;
}
}
else
{
lean_dec(v___x_187_);
if (lean_obj_tag(v___x_189_) == 0)
{
lean_object* v_a_208_; 
v_a_208_ = lean_ctor_get(v___x_189_, 0);
lean_inc(v_a_208_);
lean_dec_ref_known(v___x_189_, 1);
v_a_152_ = v_a_208_;
goto v___jp_151_;
}
else
{
lean_object* v_a_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_216_; 
v_a_209_ = lean_ctor_get(v___x_189_, 0);
v_isSharedCheck_216_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_216_ == 0)
{
v___x_211_ = v___x_189_;
v_isShared_212_ = v_isSharedCheck_216_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_a_209_);
lean_dec(v___x_189_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_216_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v___x_214_; 
if (v_isShared_212_ == 0)
{
v___x_214_ = v___x_211_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_a_209_);
v___x_214_ = v_reuseFailAlloc_215_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
return v___x_214_;
}
}
}
}
}
else
{
lean_object* v_a_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_224_; 
v_a_217_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_224_ == 0)
{
v___x_219_ = v___x_178_;
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_a_217_);
lean_dec(v___x_178_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_222_; 
if (v_isShared_220_ == 0)
{
v___x_222_ = v___x_219_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_a_217_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
v___jp_151_:
{
lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_153_ = lean_array_get_size(v_a_152_);
v___x_154_ = lean_unsigned_to_nat(0u);
v___x_155_ = lean_nat_dec_eq(v___x_153_, v___x_154_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v_declName_158_; 
v___x_156_ = l_Lean_Meta_Ext_instInhabitedExtTheorem_default;
v___x_157_ = lean_array_get(v___x_156_, v_a_152_, v___x_154_);
lean_dec_ref(v_a_152_);
v_declName_158_ = lean_ctor_get(v___x_157_, 0);
lean_inc(v_declName_158_);
lean_dec(v___x_157_);
if (lean_obj_tag(v_declName_158_) == 1)
{
lean_object* v_pre_159_; lean_object* v_str_160_; lean_object* v___x_161_; lean_object* v_env_162_; uint8_t v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; uint8_t v___x_167_; 
v_pre_159_ = lean_ctor_get(v_declName_158_, 0);
lean_inc(v_pre_159_);
v_str_160_ = lean_ctor_get(v_declName_158_, 1);
lean_inc_ref(v_str_160_);
lean_dec_ref_known(v_declName_158_, 2);
v___x_161_ = lean_st_ref_get(v_a_149_);
v_env_162_ = lean_ctor_get(v___x_161_, 0);
lean_inc_ref(v_env_162_);
lean_dec(v___x_161_);
v___x_163_ = 1;
v___x_164_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f___closed__0));
v___x_165_ = lean_string_append(v_str_160_, v___x_164_);
v___x_166_ = l_Lean_Name_str___override(v_pre_159_, v___x_165_);
lean_inc(v___x_166_);
v___x_167_ = l_Lean_Environment_contains(v_env_162_, v___x_166_, v___x_163_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; lean_object* v___x_169_; 
lean_dec(v___x_166_);
v___x_168_ = lean_box(0);
v___x_169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
return v___x_169_;
}
else
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_170_, 0, v___x_166_);
v___x_171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
return v___x_171_;
}
}
else
{
lean_object* v___x_172_; lean_object* v___x_173_; 
lean_dec(v_declName_158_);
v___x_172_ = lean_box(0);
v___x_173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
return v___x_173_;
}
}
else
{
lean_object* v___x_174_; lean_object* v___x_175_; 
lean_dec_ref(v_a_152_);
v___x_174_ = lean_box(0);
v___x_175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
return v___x_175_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f___boxed(lean_object* v_info_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f(v_info_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_);
lean_dec(v_a_229_);
lean_dec_ref(v_a_228_);
lean_dec(v_a_227_);
lean_dec_ref(v_a_226_);
return v_res_231_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0(lean_object* v_00_u03b2_232_, lean_object* v_x_233_, lean_object* v_x_234_){
_start:
{
uint8_t v___x_235_; 
v___x_235_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg(v_x_233_, v_x_234_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___boxed(lean_object* v_00_u03b2_236_, lean_object* v_x_237_, lean_object* v_x_238_){
_start:
{
uint8_t v_res_239_; lean_object* v_r_240_; 
v_res_239_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0(v_00_u03b2_236_, v_x_237_, v_x_238_);
lean_dec(v_x_238_);
lean_dec_ref(v_x_237_);
v_r_240_ = lean_box(v_res_239_);
return v_r_240_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0(lean_object* v_00_u03b2_241_, lean_object* v_x_242_, size_t v_x_243_, lean_object* v_x_244_){
_start:
{
uint8_t v___x_245_; 
v___x_245_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0___redArg(v_x_242_, v_x_243_, v_x_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_246_, lean_object* v_x_247_, lean_object* v_x_248_, lean_object* v_x_249_){
_start:
{
size_t v_x_1844__boxed_250_; uint8_t v_res_251_; lean_object* v_r_252_; 
v_x_1844__boxed_250_ = lean_unbox_usize(v_x_248_);
lean_dec(v_x_248_);
v_res_251_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0(v_00_u03b2_246_, v_x_247_, v_x_1844__boxed_250_, v_x_249_);
lean_dec(v_x_249_);
lean_dec_ref(v_x_247_);
v_r_252_ = lean_box(v_res_251_);
return v_r_252_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__1_spec__2(lean_object* v_xs_253_, lean_object* v_j_254_, lean_object* v_h_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__1_spec__2___redArg(v_xs_253_, v_j_254_);
return v___x_256_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_257_, lean_object* v_keys_258_, lean_object* v_vals_259_, lean_object* v_heq_260_, lean_object* v_i_261_, lean_object* v_k_262_){
_start:
{
uint8_t v___x_263_; 
v___x_263_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0_spec__1___redArg(v_keys_258_, v_i_261_, v_k_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_264_, lean_object* v_keys_265_, lean_object* v_vals_266_, lean_object* v_heq_267_, lean_object* v_i_268_, lean_object* v_k_269_){
_start:
{
uint8_t v_res_270_; lean_object* v_r_271_; 
v_res_270_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0_spec__0_spec__1(v_00_u03b2_264_, v_keys_265_, v_vals_266_, v_heq_267_, v_i_268_, v_k_269_);
lean_dec(v_k_269_);
lean_dec_ref(v_vals_266_);
lean_dec_ref(v_keys_265_);
v_r_271_ = lean_box(v_res_270_);
return v_r_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__0(lean_object* v_snd_272_, lean_object* v_x_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_){
_start:
{
lean_object* v___x_285_; 
lean_inc_ref(v___y_274_);
v___x_285_ = l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc(v_snd_272_, v___y_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_);
if (lean_obj_tag(v___x_285_) == 0)
{
lean_object* v_a_286_; 
v_a_286_ = lean_ctor_get(v___x_285_, 0);
lean_inc(v_a_286_);
if (lean_obj_tag(v_a_286_) == 0)
{
uint8_t v_done_287_; 
v_done_287_ = lean_ctor_get_uint8(v_a_286_, 0);
if (v_done_287_ == 0)
{
uint8_t v_contextDependent_288_; lean_object* v___x_289_; 
lean_dec_ref_known(v___x_285_, 1);
v_contextDependent_288_ = lean_ctor_get_uint8(v_a_286_, 1);
lean_dec_ref_known(v_a_286_, 0);
v___x_289_ = l_Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc(v_snd_272_, v___y_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_);
if (lean_obj_tag(v___x_289_) == 0)
{
lean_object* v_a_290_; uint8_t v___y_292_; 
v_a_290_ = lean_ctor_get(v___x_289_, 0);
lean_inc(v_a_290_);
if (v_contextDependent_288_ == 0)
{
lean_dec(v_a_290_);
return v___x_289_;
}
else
{
if (lean_obj_tag(v_a_290_) == 0)
{
uint8_t v_contextDependent_302_; 
v_contextDependent_302_ = lean_ctor_get_uint8(v_a_290_, 1);
v___y_292_ = v_contextDependent_302_;
goto v___jp_291_;
}
else
{
uint8_t v_contextDependent_303_; 
v_contextDependent_303_ = lean_ctor_get_uint8(v_a_290_, sizeof(void*)*2 + 1);
v___y_292_ = v_contextDependent_303_;
goto v___jp_291_;
}
}
v___jp_291_:
{
if (v___y_292_ == 0)
{
lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_300_; 
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_300_ == 0)
{
lean_object* v_unused_301_; 
v_unused_301_ = lean_ctor_get(v___x_289_, 0);
lean_dec(v_unused_301_);
v___x_294_ = v___x_289_;
v_isShared_295_ = v_isSharedCheck_300_;
goto v_resetjp_293_;
}
else
{
lean_dec(v___x_289_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_300_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_296_; lean_object* v___x_298_; 
v___x_296_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_290_);
if (v_isShared_295_ == 0)
{
lean_ctor_set(v___x_294_, 0, v___x_296_);
v___x_298_ = v___x_294_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v___x_296_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
else
{
lean_dec(v_a_290_);
return v___x_289_;
}
}
}
else
{
return v___x_289_;
}
}
else
{
lean_dec_ref_known(v_a_286_, 0);
lean_dec_ref(v___y_274_);
return v___x_285_;
}
}
else
{
uint8_t v_done_304_; 
v_done_304_ = lean_ctor_get_uint8(v_a_286_, sizeof(void*)*2);
if (v_done_304_ == 0)
{
lean_object* v_e_x27_305_; lean_object* v_proof_306_; uint8_t v_contextDependent_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_357_; 
lean_dec_ref_known(v___x_285_, 1);
v_e_x27_305_ = lean_ctor_get(v_a_286_, 0);
v_proof_306_ = lean_ctor_get(v_a_286_, 1);
v_contextDependent_307_ = lean_ctor_get_uint8(v_a_286_, sizeof(void*)*2 + 1);
v_isSharedCheck_357_ = !lean_is_exclusive(v_a_286_);
if (v_isSharedCheck_357_ == 0)
{
v___x_309_ = v_a_286_;
v_isShared_310_ = v_isSharedCheck_357_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_proof_306_);
lean_inc(v_e_x27_305_);
lean_dec(v_a_286_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_357_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_311_; 
lean_inc_ref(v_e_x27_305_);
v___x_311_ = l_Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc(v_snd_272_, v_e_x27_305_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_356_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_356_ == 0)
{
v___x_314_ = v___x_311_;
v_isShared_315_ = v_isSharedCheck_356_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v___x_311_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_356_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
if (lean_obj_tag(v_a_312_) == 0)
{
uint8_t v_done_316_; uint8_t v_contextDependent_317_; uint8_t v___y_319_; 
lean_dec_ref(v___y_274_);
v_done_316_ = lean_ctor_get_uint8(v_a_312_, 0);
v_contextDependent_317_ = lean_ctor_get_uint8(v_a_312_, 1);
lean_dec_ref_known(v_a_312_, 0);
if (v_contextDependent_307_ == 0)
{
v___y_319_ = v_contextDependent_317_;
goto v___jp_318_;
}
else
{
v___y_319_ = v_contextDependent_307_;
goto v___jp_318_;
}
v___jp_318_:
{
lean_object* v___x_321_; 
if (v_isShared_310_ == 0)
{
v___x_321_ = v___x_309_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_e_x27_305_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v_proof_306_);
v___x_321_ = v_reuseFailAlloc_325_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
lean_object* v___x_323_; 
lean_ctor_set_uint8(v___x_321_, sizeof(void*)*2, v_done_316_);
lean_ctor_set_uint8(v___x_321_, sizeof(void*)*2 + 1, v___y_319_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 0, v___x_321_);
v___x_323_ = v___x_314_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v___x_321_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
}
else
{
lean_object* v_e_x27_326_; lean_object* v_proof_327_; uint8_t v_done_328_; uint8_t v_contextDependent_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_355_; 
lean_del_object(v___x_314_);
lean_del_object(v___x_309_);
v_e_x27_326_ = lean_ctor_get(v_a_312_, 0);
v_proof_327_ = lean_ctor_get(v_a_312_, 1);
v_done_328_ = lean_ctor_get_uint8(v_a_312_, sizeof(void*)*2);
v_contextDependent_329_ = lean_ctor_get_uint8(v_a_312_, sizeof(void*)*2 + 1);
v_isSharedCheck_355_ = !lean_is_exclusive(v_a_312_);
if (v_isSharedCheck_355_ == 0)
{
v___x_331_ = v_a_312_;
v_isShared_332_ = v_isSharedCheck_355_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_proof_327_);
lean_inc(v_e_x27_326_);
lean_dec(v_a_312_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_355_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_333_; 
lean_inc_ref(v_e_x27_326_);
v___x_333_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_274_, v_e_x27_305_, v_proof_306_, v_e_x27_326_, v_proof_327_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_346_; 
v_a_334_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_346_ == 0)
{
v___x_336_ = v___x_333_;
v_isShared_337_ = v_isSharedCheck_346_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_dec(v___x_333_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_346_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
uint8_t v___y_339_; 
if (v_contextDependent_307_ == 0)
{
v___y_339_ = v_contextDependent_329_;
goto v___jp_338_;
}
else
{
v___y_339_ = v_contextDependent_307_;
goto v___jp_338_;
}
v___jp_338_:
{
lean_object* v___x_341_; 
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 1, v_a_334_);
v___x_341_ = v___x_331_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_e_x27_326_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v_a_334_);
lean_ctor_set_uint8(v_reuseFailAlloc_345_, sizeof(void*)*2, v_done_328_);
v___x_341_ = v_reuseFailAlloc_345_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
lean_object* v___x_343_; 
lean_ctor_set_uint8(v___x_341_, sizeof(void*)*2 + 1, v___y_339_);
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 0, v___x_341_);
v___x_343_ = v___x_336_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v___x_341_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
}
}
else
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_354_; 
lean_del_object(v___x_331_);
lean_dec_ref(v_e_x27_326_);
v_a_347_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_354_ == 0)
{
v___x_349_ = v___x_333_;
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_333_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_352_; 
if (v_isShared_350_ == 0)
{
v___x_352_ = v___x_349_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_a_347_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_309_);
lean_dec_ref(v_proof_306_);
lean_dec_ref(v_e_x27_305_);
lean_dec_ref(v___y_274_);
return v___x_311_;
}
}
}
else
{
lean_dec_ref_known(v_a_286_, 2);
lean_dec_ref(v___y_274_);
return v___x_285_;
}
}
}
else
{
lean_dec_ref(v___y_274_);
return v___x_285_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__0___boxed(lean_object* v_snd_358_, lean_object* v_x_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__0(v_snd_358_, v_x_359_, v___y_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
lean_dec(v___y_367_);
lean_dec_ref(v___y_366_);
lean_dec(v___y_365_);
lean_dec_ref(v___y_364_);
lean_dec(v___y_363_);
lean_dec_ref(v___y_362_);
lean_dec(v___y_361_);
lean_dec(v_snd_358_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__1(lean_object* v_fst_373_, lean_object* v_x_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_386_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__1___closed__0));
v___x_387_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_fst_373_, v___x_386_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__1___boxed(lean_object* v_fst_388_, lean_object* v_x_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__1(v_fst_388_, v_x_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v___y_393_);
lean_dec_ref(v___y_392_);
lean_dec(v___y_391_);
lean_dec(v_fst_388_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__2(lean_object* v_post_402_, lean_object* v___f_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_){
_start:
{
lean_object* v___x_415_; 
lean_inc(v___y_413_);
lean_inc_ref(v___y_412_);
lean_inc(v___y_411_);
lean_inc_ref(v___y_410_);
lean_inc(v___y_409_);
lean_inc_ref(v___y_408_);
lean_inc(v___y_407_);
lean_inc_ref(v___y_406_);
lean_inc(v___y_405_);
lean_inc_ref(v___y_404_);
v___x_415_ = lean_apply_11(v_post_402_, v___y_404_, v___y_405_, v___y_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_, lean_box(0));
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v___x_417_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc(v_a_416_);
v___x_417_ = lean_box(0);
if (lean_obj_tag(v_a_416_) == 0)
{
uint8_t v_done_418_; 
v_done_418_ = lean_ctor_get_uint8(v_a_416_, 0);
if (v_done_418_ == 0)
{
uint8_t v_contextDependent_419_; lean_object* v___x_420_; 
lean_dec_ref_known(v___x_415_, 1);
v_contextDependent_419_ = lean_ctor_get_uint8(v_a_416_, 1);
lean_dec_ref_known(v_a_416_, 0);
v___x_420_ = lean_apply_12(v___f_403_, v___x_417_, v___y_404_, v___y_405_, v___y_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_, lean_box(0));
if (lean_obj_tag(v___x_420_) == 0)
{
lean_object* v_a_421_; uint8_t v___y_423_; 
v_a_421_ = lean_ctor_get(v___x_420_, 0);
lean_inc(v_a_421_);
if (v_contextDependent_419_ == 0)
{
lean_dec(v_a_421_);
return v___x_420_;
}
else
{
if (lean_obj_tag(v_a_421_) == 0)
{
uint8_t v_contextDependent_433_; 
v_contextDependent_433_ = lean_ctor_get_uint8(v_a_421_, 1);
v___y_423_ = v_contextDependent_433_;
goto v___jp_422_;
}
else
{
uint8_t v_contextDependent_434_; 
v_contextDependent_434_ = lean_ctor_get_uint8(v_a_421_, sizeof(void*)*2 + 1);
v___y_423_ = v_contextDependent_434_;
goto v___jp_422_;
}
}
v___jp_422_:
{
if (v___y_423_ == 0)
{
lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_431_; 
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_420_);
if (v_isSharedCheck_431_ == 0)
{
lean_object* v_unused_432_; 
v_unused_432_ = lean_ctor_get(v___x_420_, 0);
lean_dec(v_unused_432_);
v___x_425_ = v___x_420_;
v_isShared_426_ = v_isSharedCheck_431_;
goto v_resetjp_424_;
}
else
{
lean_dec(v___x_420_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_431_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_427_; lean_object* v___x_429_; 
v___x_427_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_421_);
if (v_isShared_426_ == 0)
{
lean_ctor_set(v___x_425_, 0, v___x_427_);
v___x_429_ = v___x_425_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_427_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
else
{
lean_dec(v_a_421_);
return v___x_420_;
}
}
}
else
{
return v___x_420_;
}
}
else
{
lean_dec_ref_known(v_a_416_, 0);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
lean_dec(v___y_409_);
lean_dec_ref(v___y_408_);
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec_ref(v___f_403_);
return v___x_415_;
}
}
else
{
uint8_t v_done_435_; 
v_done_435_ = lean_ctor_get_uint8(v_a_416_, sizeof(void*)*2);
if (v_done_435_ == 0)
{
lean_object* v_e_x27_436_; lean_object* v_proof_437_; uint8_t v_contextDependent_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_488_; 
lean_dec_ref_known(v___x_415_, 1);
v_e_x27_436_ = lean_ctor_get(v_a_416_, 0);
v_proof_437_ = lean_ctor_get(v_a_416_, 1);
v_contextDependent_438_ = lean_ctor_get_uint8(v_a_416_, sizeof(void*)*2 + 1);
v_isSharedCheck_488_ = !lean_is_exclusive(v_a_416_);
if (v_isSharedCheck_488_ == 0)
{
v___x_440_ = v_a_416_;
v_isShared_441_ = v_isSharedCheck_488_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_proof_437_);
lean_inc(v_e_x27_436_);
lean_dec(v_a_416_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_488_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_442_; 
lean_inc(v___y_413_);
lean_inc_ref(v___y_412_);
lean_inc(v___y_411_);
lean_inc_ref(v___y_410_);
lean_inc(v___y_409_);
lean_inc_ref(v_e_x27_436_);
v___x_442_ = lean_apply_12(v___f_403_, v___x_417_, v_e_x27_436_, v___y_405_, v___y_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_, lean_box(0));
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_487_; 
v_a_443_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_487_ == 0)
{
v___x_445_ = v___x_442_;
v_isShared_446_ = v_isSharedCheck_487_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_442_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_487_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
if (lean_obj_tag(v_a_443_) == 0)
{
uint8_t v_done_447_; uint8_t v_contextDependent_448_; uint8_t v___y_450_; 
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
lean_dec(v___y_409_);
lean_dec_ref(v___y_404_);
v_done_447_ = lean_ctor_get_uint8(v_a_443_, 0);
v_contextDependent_448_ = lean_ctor_get_uint8(v_a_443_, 1);
lean_dec_ref_known(v_a_443_, 0);
if (v_contextDependent_438_ == 0)
{
v___y_450_ = v_contextDependent_448_;
goto v___jp_449_;
}
else
{
v___y_450_ = v_contextDependent_438_;
goto v___jp_449_;
}
v___jp_449_:
{
lean_object* v___x_452_; 
if (v_isShared_441_ == 0)
{
v___x_452_ = v___x_440_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_e_x27_436_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v_proof_437_);
v___x_452_ = v_reuseFailAlloc_456_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
lean_object* v___x_454_; 
lean_ctor_set_uint8(v___x_452_, sizeof(void*)*2, v_done_447_);
lean_ctor_set_uint8(v___x_452_, sizeof(void*)*2 + 1, v___y_450_);
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 0, v___x_452_);
v___x_454_ = v___x_445_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_452_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
}
else
{
lean_object* v_e_x27_457_; lean_object* v_proof_458_; uint8_t v_done_459_; uint8_t v_contextDependent_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_486_; 
lean_del_object(v___x_445_);
lean_del_object(v___x_440_);
v_e_x27_457_ = lean_ctor_get(v_a_443_, 0);
v_proof_458_ = lean_ctor_get(v_a_443_, 1);
v_done_459_ = lean_ctor_get_uint8(v_a_443_, sizeof(void*)*2);
v_contextDependent_460_ = lean_ctor_get_uint8(v_a_443_, sizeof(void*)*2 + 1);
v_isSharedCheck_486_ = !lean_is_exclusive(v_a_443_);
if (v_isSharedCheck_486_ == 0)
{
v___x_462_ = v_a_443_;
v_isShared_463_ = v_isSharedCheck_486_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_proof_458_);
lean_inc(v_e_x27_457_);
lean_dec(v_a_443_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_486_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_464_; 
lean_inc_ref(v_e_x27_457_);
v___x_464_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_404_, v_e_x27_436_, v_proof_437_, v_e_x27_457_, v_proof_458_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
lean_dec(v___y_409_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_477_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_477_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_477_ == 0)
{
v___x_467_ = v___x_464_;
v_isShared_468_ = v_isSharedCheck_477_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v___x_464_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_477_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
uint8_t v___y_470_; 
if (v_contextDependent_438_ == 0)
{
v___y_470_ = v_contextDependent_460_;
goto v___jp_469_;
}
else
{
v___y_470_ = v_contextDependent_438_;
goto v___jp_469_;
}
v___jp_469_:
{
lean_object* v___x_472_; 
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 1, v_a_465_);
v___x_472_ = v___x_462_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v_e_x27_457_);
lean_ctor_set(v_reuseFailAlloc_476_, 1, v_a_465_);
lean_ctor_set_uint8(v_reuseFailAlloc_476_, sizeof(void*)*2, v_done_459_);
v___x_472_ = v_reuseFailAlloc_476_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
lean_object* v___x_474_; 
lean_ctor_set_uint8(v___x_472_, sizeof(void*)*2 + 1, v___y_470_);
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 0, v___x_472_);
v___x_474_ = v___x_467_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v___x_472_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
}
else
{
lean_object* v_a_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_485_; 
lean_del_object(v___x_462_);
lean_dec_ref(v_e_x27_457_);
v_a_478_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_485_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_485_ == 0)
{
v___x_480_ = v___x_464_;
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_a_478_);
lean_dec(v___x_464_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v___x_483_; 
if (v_isShared_481_ == 0)
{
v___x_483_ = v___x_480_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v_a_478_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
return v___x_483_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_440_);
lean_dec_ref(v_proof_437_);
lean_dec_ref(v_e_x27_436_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
lean_dec(v___y_409_);
lean_dec_ref(v___y_404_);
return v___x_442_;
}
}
}
else
{
lean_dec_ref_known(v_a_416_, 2);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
lean_dec(v___y_409_);
lean_dec_ref(v___y_408_);
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec_ref(v___f_403_);
return v___x_415_;
}
}
}
else
{
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
lean_dec(v___y_409_);
lean_dec_ref(v___y_408_);
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec_ref(v___f_403_);
return v___x_415_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__2___boxed(lean_object* v_post_489_, lean_object* v___f_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__2(v_post_489_, v___f_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__3(lean_object* v_pre_503_, lean_object* v___f_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v___x_516_; 
lean_inc(v___y_514_);
lean_inc_ref(v___y_513_);
lean_inc(v___y_512_);
lean_inc_ref(v___y_511_);
lean_inc(v___y_510_);
lean_inc_ref(v___y_509_);
lean_inc(v___y_508_);
lean_inc_ref(v___y_507_);
lean_inc(v___y_506_);
lean_inc_ref(v___y_505_);
v___x_516_ = lean_apply_11(v_pre_503_, v___y_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, lean_box(0));
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_a_517_; lean_object* v___x_518_; 
v_a_517_ = lean_ctor_get(v___x_516_, 0);
lean_inc(v_a_517_);
v___x_518_ = lean_box(0);
if (lean_obj_tag(v_a_517_) == 0)
{
uint8_t v_done_519_; 
v_done_519_ = lean_ctor_get_uint8(v_a_517_, 0);
if (v_done_519_ == 0)
{
uint8_t v_contextDependent_520_; lean_object* v___x_521_; 
lean_dec_ref_known(v___x_516_, 1);
v_contextDependent_520_ = lean_ctor_get_uint8(v_a_517_, 1);
lean_dec_ref_known(v_a_517_, 0);
v___x_521_ = lean_apply_12(v___f_504_, v___x_518_, v___y_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, lean_box(0));
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v_a_522_; uint8_t v___y_524_; 
v_a_522_ = lean_ctor_get(v___x_521_, 0);
lean_inc(v_a_522_);
if (v_contextDependent_520_ == 0)
{
lean_dec(v_a_522_);
return v___x_521_;
}
else
{
if (lean_obj_tag(v_a_522_) == 0)
{
uint8_t v_contextDependent_534_; 
v_contextDependent_534_ = lean_ctor_get_uint8(v_a_522_, 1);
v___y_524_ = v_contextDependent_534_;
goto v___jp_523_;
}
else
{
uint8_t v_contextDependent_535_; 
v_contextDependent_535_ = lean_ctor_get_uint8(v_a_522_, sizeof(void*)*2 + 1);
v___y_524_ = v_contextDependent_535_;
goto v___jp_523_;
}
}
v___jp_523_:
{
if (v___y_524_ == 0)
{
lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_532_; 
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_532_ == 0)
{
lean_object* v_unused_533_; 
v_unused_533_ = lean_ctor_get(v___x_521_, 0);
lean_dec(v_unused_533_);
v___x_526_ = v___x_521_;
v_isShared_527_ = v_isSharedCheck_532_;
goto v_resetjp_525_;
}
else
{
lean_dec(v___x_521_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_532_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_528_; lean_object* v___x_530_; 
v___x_528_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_522_);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v___x_528_);
v___x_530_ = v___x_526_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_528_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
else
{
lean_dec(v_a_522_);
return v___x_521_;
}
}
}
else
{
return v___x_521_;
}
}
else
{
lean_dec_ref_known(v_a_517_, 0);
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_509_);
lean_dec(v___y_508_);
lean_dec_ref(v___y_507_);
lean_dec(v___y_506_);
lean_dec_ref(v___y_505_);
lean_dec_ref(v___f_504_);
return v___x_516_;
}
}
else
{
uint8_t v_done_536_; 
v_done_536_ = lean_ctor_get_uint8(v_a_517_, sizeof(void*)*2);
if (v_done_536_ == 0)
{
lean_object* v_e_x27_537_; lean_object* v_proof_538_; uint8_t v_contextDependent_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_589_; 
lean_dec_ref_known(v___x_516_, 1);
v_e_x27_537_ = lean_ctor_get(v_a_517_, 0);
v_proof_538_ = lean_ctor_get(v_a_517_, 1);
v_contextDependent_539_ = lean_ctor_get_uint8(v_a_517_, sizeof(void*)*2 + 1);
v_isSharedCheck_589_ = !lean_is_exclusive(v_a_517_);
if (v_isSharedCheck_589_ == 0)
{
v___x_541_ = v_a_517_;
v_isShared_542_ = v_isSharedCheck_589_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_proof_538_);
lean_inc(v_e_x27_537_);
lean_dec(v_a_517_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_589_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_543_; 
lean_inc(v___y_514_);
lean_inc_ref(v___y_513_);
lean_inc(v___y_512_);
lean_inc_ref(v___y_511_);
lean_inc(v___y_510_);
lean_inc_ref(v_e_x27_537_);
v___x_543_ = lean_apply_12(v___f_504_, v___x_518_, v_e_x27_537_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, lean_box(0));
if (lean_obj_tag(v___x_543_) == 0)
{
lean_object* v_a_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_588_; 
v_a_544_ = lean_ctor_get(v___x_543_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_543_);
if (v_isSharedCheck_588_ == 0)
{
v___x_546_ = v___x_543_;
v_isShared_547_ = v_isSharedCheck_588_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_a_544_);
lean_dec(v___x_543_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_588_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
if (lean_obj_tag(v_a_544_) == 0)
{
uint8_t v_done_548_; uint8_t v_contextDependent_549_; uint8_t v___y_551_; 
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_505_);
v_done_548_ = lean_ctor_get_uint8(v_a_544_, 0);
v_contextDependent_549_ = lean_ctor_get_uint8(v_a_544_, 1);
lean_dec_ref_known(v_a_544_, 0);
if (v_contextDependent_539_ == 0)
{
v___y_551_ = v_contextDependent_549_;
goto v___jp_550_;
}
else
{
v___y_551_ = v_contextDependent_539_;
goto v___jp_550_;
}
v___jp_550_:
{
lean_object* v___x_553_; 
if (v_isShared_542_ == 0)
{
v___x_553_ = v___x_541_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_e_x27_537_);
lean_ctor_set(v_reuseFailAlloc_557_, 1, v_proof_538_);
v___x_553_ = v_reuseFailAlloc_557_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
lean_object* v___x_555_; 
lean_ctor_set_uint8(v___x_553_, sizeof(void*)*2, v_done_548_);
lean_ctor_set_uint8(v___x_553_, sizeof(void*)*2 + 1, v___y_551_);
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 0, v___x_553_);
v___x_555_ = v___x_546_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v___x_553_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
else
{
lean_object* v_e_x27_558_; lean_object* v_proof_559_; uint8_t v_done_560_; uint8_t v_contextDependent_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_587_; 
lean_del_object(v___x_546_);
lean_del_object(v___x_541_);
v_e_x27_558_ = lean_ctor_get(v_a_544_, 0);
v_proof_559_ = lean_ctor_get(v_a_544_, 1);
v_done_560_ = lean_ctor_get_uint8(v_a_544_, sizeof(void*)*2);
v_contextDependent_561_ = lean_ctor_get_uint8(v_a_544_, sizeof(void*)*2 + 1);
v_isSharedCheck_587_ = !lean_is_exclusive(v_a_544_);
if (v_isSharedCheck_587_ == 0)
{
v___x_563_ = v_a_544_;
v_isShared_564_ = v_isSharedCheck_587_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_proof_559_);
lean_inc(v_e_x27_558_);
lean_dec(v_a_544_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_587_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_565_; 
lean_inc_ref(v_e_x27_558_);
v___x_565_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_505_, v_e_x27_537_, v_proof_538_, v_e_x27_558_, v_proof_559_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_);
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec(v___y_510_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_578_; 
v_a_566_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_578_ == 0)
{
v___x_568_ = v___x_565_;
v_isShared_569_ = v_isSharedCheck_578_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v___x_565_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_578_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
uint8_t v___y_571_; 
if (v_contextDependent_539_ == 0)
{
v___y_571_ = v_contextDependent_561_;
goto v___jp_570_;
}
else
{
v___y_571_ = v_contextDependent_539_;
goto v___jp_570_;
}
v___jp_570_:
{
lean_object* v___x_573_; 
if (v_isShared_564_ == 0)
{
lean_ctor_set(v___x_563_, 1, v_a_566_);
v___x_573_ = v___x_563_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_e_x27_558_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v_a_566_);
lean_ctor_set_uint8(v_reuseFailAlloc_577_, sizeof(void*)*2, v_done_560_);
v___x_573_ = v_reuseFailAlloc_577_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
lean_object* v___x_575_; 
lean_ctor_set_uint8(v___x_573_, sizeof(void*)*2 + 1, v___y_571_);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 0, v___x_573_);
v___x_575_ = v___x_568_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_573_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
}
}
else
{
lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_586_; 
lean_del_object(v___x_563_);
lean_dec_ref(v_e_x27_558_);
v_a_579_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_586_ == 0)
{
v___x_581_ = v___x_565_;
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_dec(v___x_565_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_584_; 
if (v_isShared_582_ == 0)
{
v___x_584_ = v___x_581_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_a_579_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_541_);
lean_dec_ref(v_proof_538_);
lean_dec_ref(v_e_x27_537_);
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_505_);
return v___x_543_;
}
}
}
else
{
lean_dec_ref_known(v_a_517_, 2);
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_509_);
lean_dec(v___y_508_);
lean_dec_ref(v___y_507_);
lean_dec(v___y_506_);
lean_dec_ref(v___y_505_);
lean_dec_ref(v___f_504_);
return v___x_516_;
}
}
}
else
{
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_509_);
lean_dec(v___y_508_);
lean_dec_ref(v___y_507_);
lean_dec(v___y_506_);
lean_dec_ref(v___y_505_);
lean_dec_ref(v___f_504_);
return v___x_516_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__3___boxed(lean_object* v_pre_590_, lean_object* v___f_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__3(v_pre_590_, v___f_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3_spec__6(lean_object* v_msgData_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_){
_start:
{
lean_object* v___x_610_; lean_object* v_env_611_; lean_object* v___x_612_; lean_object* v_mctx_613_; lean_object* v_lctx_614_; lean_object* v_options_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_610_ = lean_st_ref_get(v___y_608_);
v_env_611_ = lean_ctor_get(v___x_610_, 0);
lean_inc_ref(v_env_611_);
lean_dec(v___x_610_);
v___x_612_ = lean_st_ref_get(v___y_606_);
v_mctx_613_ = lean_ctor_get(v___x_612_, 0);
lean_inc_ref(v_mctx_613_);
lean_dec(v___x_612_);
v_lctx_614_ = lean_ctor_get(v___y_605_, 2);
v_options_615_ = lean_ctor_get(v___y_607_, 2);
lean_inc_ref(v_options_615_);
lean_inc_ref(v_lctx_614_);
v___x_616_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_616_, 0, v_env_611_);
lean_ctor_set(v___x_616_, 1, v_mctx_613_);
lean_ctor_set(v___x_616_, 2, v_lctx_614_);
lean_ctor_set(v___x_616_, 3, v_options_615_);
v___x_617_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
lean_ctor_set(v___x_617_, 1, v_msgData_604_);
v___x_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3_spec__6___boxed(lean_object* v_msgData_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3_spec__6(v_msgData_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_);
lean_dec(v___y_623_);
lean_dec_ref(v___y_622_);
lean_dec(v___y_621_);
lean_dec_ref(v___y_620_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0_spec__0___redArg(lean_object* v_msg_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_){
_start:
{
lean_object* v_ref_632_; lean_object* v___x_633_; lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_642_; 
v_ref_632_ = lean_ctor_get(v___y_629_, 5);
v___x_633_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3_spec__6(v_msg_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_);
v_a_634_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_642_ == 0)
{
v___x_636_ = v___x_633_;
v_isShared_637_ = v_isSharedCheck_642_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_633_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_642_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_638_; lean_object* v___x_640_; 
lean_inc(v_ref_632_);
v___x_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_638_, 0, v_ref_632_);
lean_ctor_set(v___x_638_, 1, v_a_634_);
if (v_isShared_637_ == 0)
{
lean_ctor_set_tag(v___x_636_, 1);
lean_ctor_set(v___x_636_, 0, v___x_638_);
v___x_640_ = v___x_636_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v___x_638_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0_spec__0___redArg___boxed(lean_object* v_msg_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0_spec__0___redArg(v_msg_643_, v___y_644_, v___y_645_, v___y_646_, v___y_647_);
lean_dec(v___y_647_);
lean_dec_ref(v___y_646_);
lean_dec(v___y_645_);
lean_dec_ref(v___y_644_);
return v_res_649_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__1(void){
_start:
{
lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_651_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__0));
v___x_652_ = l_Lean_stringToMessageData(v___x_651_);
return v___x_652_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__3(void){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_654_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__2));
v___x_655_ = l_Lean_stringToMessageData(v___x_654_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0(lean_object* v_constName_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_){
_start:
{
lean_object* v___x_666_; lean_object* v_env_667_; lean_object* v___x_668_; 
v___x_666_ = lean_st_ref_get(v___y_664_);
v_env_667_ = lean_ctor_get(v___x_666_, 0);
lean_inc_ref(v_env_667_);
lean_dec(v___x_666_);
lean_inc(v_constName_656_);
v___x_668_ = l_Lean_isInductiveCore_x3f(v_env_667_, v_constName_656_);
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v___x_669_; uint8_t v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_669_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__1);
v___x_670_ = 0;
v___x_671_ = l_Lean_MessageData_ofConstName(v_constName_656_, v___x_670_);
v___x_672_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_672_, 0, v___x_669_);
lean_ctor_set(v___x_672_, 1, v___x_671_);
v___x_673_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__3, &l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__3_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__3);
v___x_674_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_674_, 0, v___x_672_);
lean_ctor_set(v___x_674_, 1, v___x_673_);
v___x_675_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0_spec__0___redArg(v___x_674_, v___y_661_, v___y_662_, v___y_663_, v___y_664_);
return v___x_675_;
}
else
{
lean_object* v_val_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_683_; 
lean_dec(v_constName_656_);
v_val_676_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_683_ == 0)
{
v___x_678_ = v___x_668_;
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_val_676_);
lean_dec(v___x_668_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_681_; 
if (v_isShared_679_ == 0)
{
lean_ctor_set_tag(v___x_678_, 0);
v___x_681_ = v___x_678_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_val_676_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___boxed(lean_object* v_constName_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0(v_constName_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec(v___y_688_);
lean_dec_ref(v___y_687_);
lean_dec(v___y_686_);
lean_dec_ref(v___y_685_);
return v_res_694_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_695_; double v___x_696_; 
v___x_695_ = lean_unsigned_to_nat(0u);
v___x_696_ = lean_float_of_nat(v___x_695_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg(lean_object* v_cls_700_, lean_object* v_msg_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_){
_start:
{
lean_object* v_ref_707_; lean_object* v___x_708_; lean_object* v_a_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_753_; 
v_ref_707_ = lean_ctor_get(v___y_704_, 5);
v___x_708_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3_spec__6(v_msg_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_);
v_a_709_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_753_ == 0)
{
v___x_711_ = v___x_708_;
v_isShared_712_ = v_isSharedCheck_753_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_a_709_);
lean_dec(v___x_708_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_753_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_713_; lean_object* v_traceState_714_; lean_object* v_env_715_; lean_object* v_nextMacroScope_716_; lean_object* v_ngen_717_; lean_object* v_auxDeclNGen_718_; lean_object* v_cache_719_; lean_object* v_messages_720_; lean_object* v_infoState_721_; lean_object* v_snapshotTasks_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_752_; 
v___x_713_ = lean_st_ref_take(v___y_705_);
v_traceState_714_ = lean_ctor_get(v___x_713_, 4);
v_env_715_ = lean_ctor_get(v___x_713_, 0);
v_nextMacroScope_716_ = lean_ctor_get(v___x_713_, 1);
v_ngen_717_ = lean_ctor_get(v___x_713_, 2);
v_auxDeclNGen_718_ = lean_ctor_get(v___x_713_, 3);
v_cache_719_ = lean_ctor_get(v___x_713_, 5);
v_messages_720_ = lean_ctor_get(v___x_713_, 6);
v_infoState_721_ = lean_ctor_get(v___x_713_, 7);
v_snapshotTasks_722_ = lean_ctor_get(v___x_713_, 8);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_752_ == 0)
{
v___x_724_ = v___x_713_;
v_isShared_725_ = v_isSharedCheck_752_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_snapshotTasks_722_);
lean_inc(v_infoState_721_);
lean_inc(v_messages_720_);
lean_inc(v_cache_719_);
lean_inc(v_traceState_714_);
lean_inc(v_auxDeclNGen_718_);
lean_inc(v_ngen_717_);
lean_inc(v_nextMacroScope_716_);
lean_inc(v_env_715_);
lean_dec(v___x_713_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_752_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
uint64_t v_tid_726_; lean_object* v_traces_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_751_; 
v_tid_726_ = lean_ctor_get_uint64(v_traceState_714_, sizeof(void*)*1);
v_traces_727_ = lean_ctor_get(v_traceState_714_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v_traceState_714_);
if (v_isSharedCheck_751_ == 0)
{
v___x_729_ = v_traceState_714_;
v_isShared_730_ = v_isSharedCheck_751_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_traces_727_);
lean_dec(v_traceState_714_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_751_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_731_; double v___x_732_; uint8_t v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_741_; 
v___x_731_ = lean_box(0);
v___x_732_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg___closed__0);
v___x_733_ = 0;
v___x_734_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg___closed__1));
v___x_735_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_735_, 0, v_cls_700_);
lean_ctor_set(v___x_735_, 1, v___x_731_);
lean_ctor_set(v___x_735_, 2, v___x_734_);
lean_ctor_set_float(v___x_735_, sizeof(void*)*3, v___x_732_);
lean_ctor_set_float(v___x_735_, sizeof(void*)*3 + 8, v___x_732_);
lean_ctor_set_uint8(v___x_735_, sizeof(void*)*3 + 16, v___x_733_);
v___x_736_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg___closed__2));
v___x_737_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_737_, 0, v___x_735_);
lean_ctor_set(v___x_737_, 1, v_a_709_);
lean_ctor_set(v___x_737_, 2, v___x_736_);
lean_inc(v_ref_707_);
v___x_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_738_, 0, v_ref_707_);
lean_ctor_set(v___x_738_, 1, v___x_737_);
v___x_739_ = l_Lean_PersistentArray_push___redArg(v_traces_727_, v___x_738_);
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 0, v___x_739_);
v___x_741_ = v___x_729_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v___x_739_);
lean_ctor_set_uint64(v_reuseFailAlloc_750_, sizeof(void*)*1, v_tid_726_);
v___x_741_ = v_reuseFailAlloc_750_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v___x_743_; 
if (v_isShared_725_ == 0)
{
lean_ctor_set(v___x_724_, 4, v___x_741_);
v___x_743_ = v___x_724_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_env_715_);
lean_ctor_set(v_reuseFailAlloc_749_, 1, v_nextMacroScope_716_);
lean_ctor_set(v_reuseFailAlloc_749_, 2, v_ngen_717_);
lean_ctor_set(v_reuseFailAlloc_749_, 3, v_auxDeclNGen_718_);
lean_ctor_set(v_reuseFailAlloc_749_, 4, v___x_741_);
lean_ctor_set(v_reuseFailAlloc_749_, 5, v_cache_719_);
lean_ctor_set(v_reuseFailAlloc_749_, 6, v_messages_720_);
lean_ctor_set(v_reuseFailAlloc_749_, 7, v_infoState_721_);
lean_ctor_set(v_reuseFailAlloc_749_, 8, v_snapshotTasks_722_);
v___x_743_ = v_reuseFailAlloc_749_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_747_; 
v___x_744_ = lean_st_ref_set(v___y_705_, v___x_743_);
v___x_745_ = lean_box(0);
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 0, v___x_745_);
v___x_747_ = v___x_711_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v___x_745_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg___boxed(lean_object* v_cls_754_, lean_object* v_msg_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg(v_cls_754_, v_msg_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
lean_dec(v___y_759_);
lean_dec_ref(v___y_758_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3_spec__4_spec__10___redArg(lean_object* v_x_762_, lean_object* v_x_763_){
_start:
{
if (lean_obj_tag(v_x_763_) == 0)
{
return v_x_762_;
}
else
{
lean_object* v_key_764_; lean_object* v_value_765_; lean_object* v_tail_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_792_; 
v_key_764_ = lean_ctor_get(v_x_763_, 0);
v_value_765_ = lean_ctor_get(v_x_763_, 1);
v_tail_766_ = lean_ctor_get(v_x_763_, 2);
v_isSharedCheck_792_ = !lean_is_exclusive(v_x_763_);
if (v_isSharedCheck_792_ == 0)
{
v___x_768_ = v_x_763_;
v_isShared_769_ = v_isSharedCheck_792_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_tail_766_);
lean_inc(v_value_765_);
lean_inc(v_key_764_);
lean_dec(v_x_763_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_792_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_770_; uint64_t v___y_772_; 
v___x_770_ = lean_array_get_size(v_x_762_);
if (lean_obj_tag(v_key_764_) == 0)
{
uint64_t v___x_790_; 
v___x_790_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg___closed__0);
v___y_772_ = v___x_790_;
goto v___jp_771_;
}
else
{
uint64_t v_hash_791_; 
v_hash_791_ = lean_ctor_get_uint64(v_key_764_, sizeof(void*)*2);
v___y_772_ = v_hash_791_;
goto v___jp_771_;
}
v___jp_771_:
{
uint64_t v___x_773_; uint64_t v___x_774_; uint64_t v_fold_775_; uint64_t v___x_776_; uint64_t v___x_777_; uint64_t v___x_778_; size_t v___x_779_; size_t v___x_780_; size_t v___x_781_; size_t v___x_782_; size_t v___x_783_; lean_object* v___x_784_; lean_object* v___x_786_; 
v___x_773_ = 32ULL;
v___x_774_ = lean_uint64_shift_right(v___y_772_, v___x_773_);
v_fold_775_ = lean_uint64_xor(v___y_772_, v___x_774_);
v___x_776_ = 16ULL;
v___x_777_ = lean_uint64_shift_right(v_fold_775_, v___x_776_);
v___x_778_ = lean_uint64_xor(v_fold_775_, v___x_777_);
v___x_779_ = lean_uint64_to_usize(v___x_778_);
v___x_780_ = lean_usize_of_nat(v___x_770_);
v___x_781_ = ((size_t)1ULL);
v___x_782_ = lean_usize_sub(v___x_780_, v___x_781_);
v___x_783_ = lean_usize_land(v___x_779_, v___x_782_);
v___x_784_ = lean_array_uget_borrowed(v_x_762_, v___x_783_);
lean_inc(v___x_784_);
if (v_isShared_769_ == 0)
{
lean_ctor_set(v___x_768_, 2, v___x_784_);
v___x_786_ = v___x_768_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_key_764_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v_value_765_);
lean_ctor_set(v_reuseFailAlloc_789_, 2, v___x_784_);
v___x_786_ = v_reuseFailAlloc_789_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
lean_object* v___x_787_; 
v___x_787_ = lean_array_uset(v_x_762_, v___x_783_, v___x_786_);
v_x_762_ = v___x_787_;
v_x_763_ = v_tail_766_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3_spec__4___redArg(lean_object* v_i_793_, lean_object* v_source_794_, lean_object* v_target_795_){
_start:
{
lean_object* v___x_796_; uint8_t v___x_797_; 
v___x_796_ = lean_array_get_size(v_source_794_);
v___x_797_ = lean_nat_dec_lt(v_i_793_, v___x_796_);
if (v___x_797_ == 0)
{
lean_dec_ref(v_source_794_);
lean_dec(v_i_793_);
return v_target_795_;
}
else
{
lean_object* v_es_798_; lean_object* v___x_799_; lean_object* v_source_800_; lean_object* v_target_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
v_es_798_ = lean_array_fget(v_source_794_, v_i_793_);
v___x_799_ = lean_box(0);
v_source_800_ = lean_array_fset(v_source_794_, v_i_793_, v___x_799_);
v_target_801_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3_spec__4_spec__10___redArg(v_target_795_, v_es_798_);
v___x_802_ = lean_unsigned_to_nat(1u);
v___x_803_ = lean_nat_add(v_i_793_, v___x_802_);
lean_dec(v_i_793_);
v_i_793_ = v___x_803_;
v_source_794_ = v_source_800_;
v_target_795_ = v_target_801_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3___redArg(lean_object* v_data_805_){
_start:
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v_nbuckets_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_806_ = lean_array_get_size(v_data_805_);
v___x_807_ = lean_unsigned_to_nat(2u);
v_nbuckets_808_ = lean_nat_mul(v___x_806_, v___x_807_);
v___x_809_ = lean_unsigned_to_nat(0u);
v___x_810_ = lean_box(0);
v___x_811_ = lean_mk_array(v_nbuckets_808_, v___x_810_);
v___x_812_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3_spec__4___redArg(v___x_809_, v_data_805_, v___x_811_);
return v___x_812_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__2___redArg(lean_object* v_a_813_, lean_object* v_x_814_){
_start:
{
if (lean_obj_tag(v_x_814_) == 0)
{
uint8_t v___x_815_; 
v___x_815_ = 0;
return v___x_815_;
}
else
{
lean_object* v_key_816_; lean_object* v_tail_817_; uint8_t v___x_818_; 
v_key_816_ = lean_ctor_get(v_x_814_, 0);
v_tail_817_ = lean_ctor_get(v_x_814_, 2);
v___x_818_ = lean_name_eq(v_key_816_, v_a_813_);
if (v___x_818_ == 0)
{
v_x_814_ = v_tail_817_;
goto _start;
}
else
{
return v___x_818_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__2___redArg___boxed(lean_object* v_a_820_, lean_object* v_x_821_){
_start:
{
uint8_t v_res_822_; lean_object* v_r_823_; 
v_res_822_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__2___redArg(v_a_820_, v_x_821_);
lean_dec(v_x_821_);
lean_dec(v_a_820_);
v_r_823_ = lean_box(v_res_822_);
return v_r_823_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1___redArg(lean_object* v_m_824_, lean_object* v_a_825_, lean_object* v_b_826_){
_start:
{
lean_object* v_size_827_; lean_object* v_buckets_828_; lean_object* v___x_829_; uint64_t v___y_831_; 
v_size_827_ = lean_ctor_get(v_m_824_, 0);
v_buckets_828_ = lean_ctor_get(v_m_824_, 1);
v___x_829_ = lean_array_get_size(v_buckets_828_);
if (lean_obj_tag(v_a_825_) == 0)
{
uint64_t v___x_868_; 
v___x_868_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg___closed__0);
v___y_831_ = v___x_868_;
goto v___jp_830_;
}
else
{
uint64_t v_hash_869_; 
v_hash_869_ = lean_ctor_get_uint64(v_a_825_, sizeof(void*)*2);
v___y_831_ = v_hash_869_;
goto v___jp_830_;
}
v___jp_830_:
{
uint64_t v___x_832_; uint64_t v___x_833_; uint64_t v_fold_834_; uint64_t v___x_835_; uint64_t v___x_836_; uint64_t v___x_837_; size_t v___x_838_; size_t v___x_839_; size_t v___x_840_; size_t v___x_841_; size_t v___x_842_; lean_object* v_bkt_843_; uint8_t v___x_844_; 
v___x_832_ = 32ULL;
v___x_833_ = lean_uint64_shift_right(v___y_831_, v___x_832_);
v_fold_834_ = lean_uint64_xor(v___y_831_, v___x_833_);
v___x_835_ = 16ULL;
v___x_836_ = lean_uint64_shift_right(v_fold_834_, v___x_835_);
v___x_837_ = lean_uint64_xor(v_fold_834_, v___x_836_);
v___x_838_ = lean_uint64_to_usize(v___x_837_);
v___x_839_ = lean_usize_of_nat(v___x_829_);
v___x_840_ = ((size_t)1ULL);
v___x_841_ = lean_usize_sub(v___x_839_, v___x_840_);
v___x_842_ = lean_usize_land(v___x_838_, v___x_841_);
v_bkt_843_ = lean_array_uget_borrowed(v_buckets_828_, v___x_842_);
v___x_844_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__2___redArg(v_a_825_, v_bkt_843_);
if (v___x_844_ == 0)
{
lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_865_; 
lean_inc_ref(v_buckets_828_);
lean_inc(v_size_827_);
v_isSharedCheck_865_ = !lean_is_exclusive(v_m_824_);
if (v_isSharedCheck_865_ == 0)
{
lean_object* v_unused_866_; lean_object* v_unused_867_; 
v_unused_866_ = lean_ctor_get(v_m_824_, 1);
lean_dec(v_unused_866_);
v_unused_867_ = lean_ctor_get(v_m_824_, 0);
lean_dec(v_unused_867_);
v___x_846_ = v_m_824_;
v_isShared_847_ = v_isSharedCheck_865_;
goto v_resetjp_845_;
}
else
{
lean_dec(v_m_824_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_865_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_848_; lean_object* v_size_x27_849_; lean_object* v___x_850_; lean_object* v_buckets_x27_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; uint8_t v___x_857_; 
v___x_848_ = lean_unsigned_to_nat(1u);
v_size_x27_849_ = lean_nat_add(v_size_827_, v___x_848_);
lean_dec(v_size_827_);
lean_inc(v_bkt_843_);
v___x_850_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_850_, 0, v_a_825_);
lean_ctor_set(v___x_850_, 1, v_b_826_);
lean_ctor_set(v___x_850_, 2, v_bkt_843_);
v_buckets_x27_851_ = lean_array_uset(v_buckets_828_, v___x_842_, v___x_850_);
v___x_852_ = lean_unsigned_to_nat(4u);
v___x_853_ = lean_nat_mul(v_size_x27_849_, v___x_852_);
v___x_854_ = lean_unsigned_to_nat(3u);
v___x_855_ = lean_nat_div(v___x_853_, v___x_854_);
lean_dec(v___x_853_);
v___x_856_ = lean_array_get_size(v_buckets_x27_851_);
v___x_857_ = lean_nat_dec_le(v___x_855_, v___x_856_);
lean_dec(v___x_855_);
if (v___x_857_ == 0)
{
lean_object* v_val_858_; lean_object* v___x_860_; 
v_val_858_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3___redArg(v_buckets_x27_851_);
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 1, v_val_858_);
lean_ctor_set(v___x_846_, 0, v_size_x27_849_);
v___x_860_ = v___x_846_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_size_x27_849_);
lean_ctor_set(v_reuseFailAlloc_861_, 1, v_val_858_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
else
{
lean_object* v___x_863_; 
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 1, v_buckets_x27_851_);
lean_ctor_set(v___x_846_, 0, v_size_x27_849_);
v___x_863_ = v___x_846_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_size_x27_849_);
lean_ctor_set(v_reuseFailAlloc_864_, 1, v_buckets_x27_851_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
else
{
lean_dec(v_b_826_);
lean_dec(v_a_825_);
return v_m_824_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__2___redArg(lean_object* v_upperBound_870_, lean_object* v___x_871_, lean_object* v_a_872_, lean_object* v_b_873_){
_start:
{
lean_object* v_a_876_; uint8_t v___x_880_; 
v___x_880_ = lean_nat_dec_lt(v_a_872_, v_upperBound_870_);
if (v___x_880_ == 0)
{
lean_object* v___x_881_; 
lean_dec(v_a_872_);
v___x_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_881_, 0, v_b_873_);
return v___x_881_;
}
else
{
lean_object* v___x_882_; 
v___x_882_ = l_Lean_StructureInfo_getProjFn_x3f(v___x_871_, v_a_872_);
if (lean_obj_tag(v___x_882_) == 1)
{
lean_object* v_val_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v_val_883_ = lean_ctor_get(v___x_882_, 0);
lean_inc(v_val_883_);
lean_dec_ref_known(v___x_882_, 1);
v___x_884_ = lean_box(0);
v___x_885_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1___redArg(v_b_873_, v_val_883_, v___x_884_);
v_a_876_ = v___x_885_;
goto v___jp_875_;
}
else
{
lean_dec(v___x_882_);
v_a_876_ = v_b_873_;
goto v___jp_875_;
}
}
v___jp_875_:
{
lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_877_ = lean_unsigned_to_nat(1u);
v___x_878_ = lean_nat_add(v_a_872_, v___x_877_);
lean_dec(v_a_872_);
v_a_872_ = v___x_878_;
v_b_873_ = v_a_876_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__2___redArg___boxed(lean_object* v_upperBound_886_, lean_object* v___x_887_, lean_object* v_a_888_, lean_object* v_b_889_, lean_object* v___y_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__2___redArg(v_upperBound_886_, v___x_887_, v_a_888_, v_b_889_);
lean_dec_ref(v___x_887_);
lean_dec(v_upperBound_886_);
return v_res_891_;
}
}
static lean_object* _init_l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__6(void){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_902_ = ((lean_object*)(l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__3));
v___x_903_ = ((lean_object*)(l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__5));
v___x_904_ = l_Lean_Name_append(v___x_903_, v___x_902_);
return v___x_904_;
}
}
static lean_object* _init_l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__8(void){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_906_ = ((lean_object*)(l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__7));
v___x_907_ = l_Lean_stringToMessageData(v___x_906_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4(lean_object* v___x_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
if (lean_obj_tag(v_a_909_) == 0)
{
lean_object* v___x_920_; lean_object* v___x_921_; 
lean_dec_ref(v___x_908_);
v___x_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_920_, 0, v_a_910_);
v___x_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_921_, 0, v___x_920_);
return v___x_921_;
}
else
{
lean_object* v_key_922_; lean_object* v_tail_923_; lean_object* v___x_924_; 
v_key_922_ = lean_ctor_get(v_a_909_, 0);
lean_inc_n(v_key_922_, 2);
v_tail_923_ = lean_ctor_get(v_a_909_, 2);
lean_inc(v_tail_923_);
lean_dec_ref_known(v_a_909_, 3);
v___x_924_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0(v_key_922_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
if (lean_obj_tag(v___x_924_) == 0)
{
lean_object* v_a_925_; lean_object* v___x_926_; 
v_a_925_ = lean_ctor_get(v___x_924_, 0);
lean_inc(v_a_925_);
lean_dec_ref_known(v___x_924_, 1);
v___x_926_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f(v_a_925_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
if (lean_obj_tag(v___x_926_) == 0)
{
lean_object* v_a_927_; lean_object* v_fst_928_; lean_object* v_snd_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_1000_; 
v_a_927_ = lean_ctor_get(v___x_926_, 0);
lean_inc(v_a_927_);
lean_dec_ref_known(v___x_926_, 1);
v_fst_928_ = lean_ctor_get(v_a_910_, 0);
v_snd_929_ = lean_ctor_get(v_a_910_, 1);
v_isSharedCheck_1000_ = !lean_is_exclusive(v_a_910_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_931_ = v_a_910_;
v_isShared_932_ = v_isSharedCheck_1000_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_snd_929_);
lean_inc(v_fst_928_);
lean_dec(v_a_910_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_1000_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v_extTheorems_934_; lean_object* v___y_935_; lean_object* v___y_936_; lean_object* v___y_937_; lean_object* v___y_938_; lean_object* v___y_939_; lean_object* v___y_940_; lean_object* v___y_941_; lean_object* v___y_942_; 
if (lean_obj_tag(v_a_927_) == 1)
{
lean_object* v_val_961_; lean_object* v___y_963_; lean_object* v___y_964_; lean_object* v___y_965_; lean_object* v___y_966_; lean_object* v___y_967_; lean_object* v___y_968_; lean_object* v___y_969_; lean_object* v___y_970_; lean_object* v_options_982_; uint8_t v_hasTrace_983_; 
v_val_961_ = lean_ctor_get(v_a_927_, 0);
lean_inc(v_val_961_);
lean_dec_ref_known(v_a_927_, 1);
v_options_982_ = lean_ctor_get(v___y_917_, 2);
v_hasTrace_983_ = lean_ctor_get_uint8(v_options_982_, sizeof(void*)*1);
if (v_hasTrace_983_ == 0)
{
v___y_963_ = v___y_911_;
v___y_964_ = v___y_912_;
v___y_965_ = v___y_913_;
v___y_966_ = v___y_914_;
v___y_967_ = v___y_915_;
v___y_968_ = v___y_916_;
v___y_969_ = v___y_917_;
v___y_970_ = v___y_918_;
goto v___jp_962_;
}
else
{
lean_object* v_inheritedTraceOptions_984_; lean_object* v___x_985_; lean_object* v___x_986_; uint8_t v___x_987_; 
v_inheritedTraceOptions_984_ = lean_ctor_get(v___y_917_, 13);
v___x_985_ = ((lean_object*)(l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__3));
v___x_986_ = lean_obj_once(&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__6, &l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__6_once, _init_l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__6);
v___x_987_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_984_, v_options_982_, v___x_986_);
if (v___x_987_ == 0)
{
v___y_963_ = v___y_911_;
v___y_964_ = v___y_912_;
v___y_965_ = v___y_913_;
v___y_966_ = v___y_914_;
v___y_967_ = v___y_915_;
v___y_968_ = v___y_916_;
v___y_969_ = v___y_917_;
v___y_970_ = v___y_918_;
goto v___jp_962_;
}
else
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_988_ = lean_obj_once(&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__8, &l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__8_once, _init_l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__8);
lean_inc(v_val_961_);
v___x_989_ = l_Lean_MessageData_ofName(v_val_961_);
v___x_990_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_988_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg(v___x_985_, v___x_990_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_dec_ref_known(v___x_991_, 1);
v___y_963_ = v___y_911_;
v___y_964_ = v___y_912_;
v___y_965_ = v___y_913_;
v___y_966_ = v___y_914_;
v___y_967_ = v___y_915_;
v___y_968_ = v___y_916_;
v___y_969_ = v___y_917_;
v___y_970_ = v___y_918_;
goto v___jp_962_;
}
else
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_999_; 
lean_dec(v_val_961_);
lean_del_object(v___x_931_);
lean_dec(v_snd_929_);
lean_dec(v_fst_928_);
lean_dec(v_tail_923_);
lean_dec(v_key_922_);
lean_dec_ref(v___x_908_);
v_a_992_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_999_ == 0)
{
v___x_994_ = v___x_991_;
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_991_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_997_; 
if (v_isShared_995_ == 0)
{
v___x_997_ = v___x_994_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_a_992_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
}
}
}
v___jp_962_:
{
lean_object* v___x_971_; 
v___x_971_ = l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(v_val_961_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_object* v_a_972_; lean_object* v___x_973_; 
v_a_972_ = lean_ctor_get(v___x_971_, 0);
lean_inc(v_a_972_);
lean_dec_ref_known(v___x_971_, 1);
v___x_973_ = l_Lean_Meta_Sym_Simp_Theorems_insert(v_fst_928_, v_a_972_);
v_extTheorems_934_ = v___x_973_;
v___y_935_ = v___y_963_;
v___y_936_ = v___y_964_;
v___y_937_ = v___y_965_;
v___y_938_ = v___y_966_;
v___y_939_ = v___y_967_;
v___y_940_ = v___y_968_;
v___y_941_ = v___y_969_;
v___y_942_ = v___y_970_;
goto v___jp_933_;
}
else
{
lean_object* v_a_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_981_; 
lean_del_object(v___x_931_);
lean_dec(v_snd_929_);
lean_dec(v_fst_928_);
lean_dec(v_tail_923_);
lean_dec(v_key_922_);
lean_dec_ref(v___x_908_);
v_a_974_ = lean_ctor_get(v___x_971_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_981_ == 0)
{
v___x_976_ = v___x_971_;
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_a_974_);
lean_dec(v___x_971_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_979_; 
if (v_isShared_977_ == 0)
{
v___x_979_ = v___x_976_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_a_974_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
}
}
}
else
{
lean_dec(v_a_927_);
v_extTheorems_934_ = v_fst_928_;
v___y_935_ = v___y_911_;
v___y_936_ = v___y_912_;
v___y_937_ = v___y_913_;
v___y_938_ = v___y_914_;
v___y_939_ = v___y_915_;
v___y_940_ = v___y_916_;
v___y_941_ = v___y_917_;
v___y_942_ = v___y_918_;
goto v___jp_933_;
}
v___jp_933_:
{
lean_object* v___x_943_; lean_object* v_fieldNames_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
lean_inc_ref(v___x_908_);
v___x_943_ = l_Lean_getStructureInfo(v___x_908_, v_key_922_);
v_fieldNames_944_ = lean_ctor_get(v___x_943_, 1);
lean_inc_ref(v_fieldNames_944_);
v___x_945_ = lean_array_get_size(v_fieldNames_944_);
lean_dec_ref(v_fieldNames_944_);
v___x_946_ = lean_unsigned_to_nat(0u);
v___x_947_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__2___redArg(v___x_945_, v___x_943_, v___x_946_, v_snd_929_);
lean_dec_ref(v___x_943_);
if (lean_obj_tag(v___x_947_) == 0)
{
lean_object* v_a_948_; lean_object* v___x_950_; 
v_a_948_ = lean_ctor_get(v___x_947_, 0);
lean_inc(v_a_948_);
lean_dec_ref_known(v___x_947_, 1);
if (v_isShared_932_ == 0)
{
lean_ctor_set(v___x_931_, 1, v_a_948_);
lean_ctor_set(v___x_931_, 0, v_extTheorems_934_);
v___x_950_ = v___x_931_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_extTheorems_934_);
lean_ctor_set(v_reuseFailAlloc_952_, 1, v_a_948_);
v___x_950_ = v_reuseFailAlloc_952_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
v_a_909_ = v_tail_923_;
v_a_910_ = v___x_950_;
goto _start;
}
}
else
{
lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_960_; 
lean_dec_ref(v_extTheorems_934_);
lean_del_object(v___x_931_);
lean_dec(v_tail_923_);
lean_dec_ref(v___x_908_);
v_a_953_ = lean_ctor_get(v___x_947_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_947_);
if (v_isSharedCheck_960_ == 0)
{
v___x_955_ = v___x_947_;
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v___x_947_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_958_; 
if (v_isShared_956_ == 0)
{
v___x_958_ = v___x_955_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_a_953_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
}
}
else
{
lean_object* v_a_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1008_; 
lean_dec(v_tail_923_);
lean_dec(v_key_922_);
lean_dec_ref(v_a_910_);
lean_dec_ref(v___x_908_);
v_a_1001_ = lean_ctor_get(v___x_926_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1003_ = v___x_926_;
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_a_1001_);
lean_dec(v___x_926_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1006_; 
if (v_isShared_1004_ == 0)
{
v___x_1006_ = v___x_1003_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_a_1001_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
}
else
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
lean_dec(v_tail_923_);
lean_dec(v_key_922_);
lean_dec_ref(v_a_910_);
lean_dec_ref(v___x_908_);
v_a_1009_ = lean_ctor_get(v___x_924_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_924_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_924_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_924_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___boxed(lean_object* v___x_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_){
_start:
{
lean_object* v_res_1029_; 
v_res_1029_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4(v___x_1017_, v_a_1018_, v_a_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec(v___y_1025_);
lean_dec_ref(v___y_1024_);
lean_dec(v___y_1023_);
lean_dec_ref(v___y_1022_);
lean_dec(v___y_1021_);
lean_dec_ref(v___y_1020_);
return v_res_1029_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__5(lean_object* v___x_1030_, lean_object* v_as_1031_, size_t v_sz_1032_, size_t v_i_1033_, lean_object* v_b_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
uint8_t v___x_1044_; 
v___x_1044_ = lean_usize_dec_lt(v_i_1033_, v_sz_1032_);
if (v___x_1044_ == 0)
{
lean_object* v___x_1045_; 
lean_dec_ref(v___x_1030_);
v___x_1045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1045_, 0, v_b_1034_);
return v___x_1045_;
}
else
{
lean_object* v_a_1046_; lean_object* v___x_1047_; 
v_a_1046_ = lean_array_uget_borrowed(v_as_1031_, v_i_1033_);
lean_inc(v_a_1046_);
lean_inc_ref(v___x_1030_);
v___x_1047_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4(v___x_1030_, v_a_1046_, v_b_1034_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_object* v_a_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1060_; 
v_a_1048_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1060_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1050_ = v___x_1047_;
v_isShared_1051_ = v_isSharedCheck_1060_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_a_1048_);
lean_dec(v___x_1047_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1060_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
if (lean_obj_tag(v_a_1048_) == 0)
{
lean_object* v_a_1052_; lean_object* v___x_1054_; 
lean_dec_ref(v___x_1030_);
v_a_1052_ = lean_ctor_get(v_a_1048_, 0);
lean_inc(v_a_1052_);
lean_dec_ref_known(v_a_1048_, 1);
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 0, v_a_1052_);
v___x_1054_ = v___x_1050_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_a_1052_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
else
{
lean_object* v_a_1056_; size_t v___x_1057_; size_t v___x_1058_; 
lean_del_object(v___x_1050_);
v_a_1056_ = lean_ctor_get(v_a_1048_, 0);
lean_inc(v_a_1056_);
lean_dec_ref_known(v_a_1048_, 1);
v___x_1057_ = ((size_t)1ULL);
v___x_1058_ = lean_usize_add(v_i_1033_, v___x_1057_);
v_i_1033_ = v___x_1058_;
v_b_1034_ = v_a_1056_;
goto _start;
}
}
}
else
{
lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1068_; 
lean_dec_ref(v___x_1030_);
v_a_1061_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1063_ = v___x_1047_;
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v___x_1047_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1066_; 
if (v_isShared_1064_ == 0)
{
v___x_1066_ = v___x_1063_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v_a_1061_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__5___boxed(lean_object* v___x_1069_, lean_object* v_as_1070_, lean_object* v_sz_1071_, lean_object* v_i_1072_, lean_object* v_b_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
size_t v_sz_boxed_1083_; size_t v_i_boxed_1084_; lean_object* v_res_1085_; 
v_sz_boxed_1083_ = lean_unbox_usize(v_sz_1071_);
lean_dec(v_sz_1071_);
v_i_boxed_1084_ = lean_unbox_usize(v_i_1072_);
lean_dec(v_i_1072_);
v_res_1085_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__5(v___x_1069_, v_as_1070_, v_sz_boxed_1083_, v_i_boxed_1084_, v_b_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
lean_dec(v___y_1081_);
lean_dec_ref(v___y_1080_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v___y_1075_);
lean_dec_ref(v___y_1074_);
lean_dec_ref(v_as_1070_);
return v_res_1085_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__0(void){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1086_ = lean_box(0);
v___x_1087_ = lean_unsigned_to_nat(16u);
v___x_1088_ = lean_mk_array(v___x_1087_, v___x_1086_);
return v___x_1088_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__1(void){
_start:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v_projFns_1091_; 
v___x_1089_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__0);
v___x_1090_ = lean_unsigned_to_nat(0u);
v_projFns_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_projFns_1091_, 0, v___x_1090_);
lean_ctor_set(v_projFns_1091_, 1, v___x_1089_);
return v_projFns_1091_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__2(void){
_start:
{
lean_object* v___x_1092_; 
v___x_1092_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1092_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__3(void){
_start:
{
lean_object* v___x_1093_; lean_object* v_extTheorems_1094_; 
v___x_1093_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__2);
v_extTheorems_1094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_extTheorems_1094_, 0, v___x_1093_);
return v_extTheorems_1094_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__4(void){
_start:
{
lean_object* v_projFns_1095_; lean_object* v_extTheorems_1096_; lean_object* v___x_1097_; 
v_projFns_1095_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__1);
v_extTheorems_1096_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__3);
v___x_1097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1097_, 0, v_extTheorems_1096_);
lean_ctor_set(v___x_1097_, 1, v_projFns_1095_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas(lean_object* v_methods_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_){
_start:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v_typeAnalysis_1110_; lean_object* v_interestingStructures_1111_; lean_object* v_env_1112_; lean_object* v_buckets_1113_; lean_object* v___x_1114_; size_t v_sz_1115_; size_t v___x_1116_; lean_object* v___x_1117_; 
v___x_1108_ = lean_st_ref_get(v_a_1100_);
v___x_1109_ = lean_st_ref_get(v_a_1106_);
v_typeAnalysis_1110_ = lean_ctor_get(v___x_1108_, 2);
lean_inc_ref(v_typeAnalysis_1110_);
lean_dec(v___x_1108_);
v_interestingStructures_1111_ = lean_ctor_get(v_typeAnalysis_1110_, 0);
lean_inc_ref(v_interestingStructures_1111_);
lean_dec_ref(v_typeAnalysis_1110_);
v_env_1112_ = lean_ctor_get(v___x_1109_, 0);
lean_inc_ref(v_env_1112_);
lean_dec(v___x_1109_);
v_buckets_1113_ = lean_ctor_get(v_interestingStructures_1111_, 1);
lean_inc_ref(v_buckets_1113_);
lean_dec_ref(v_interestingStructures_1111_);
v___x_1114_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___closed__4);
v_sz_1115_ = lean_array_size(v_buckets_1113_);
v___x_1116_ = ((size_t)0ULL);
v___x_1117_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__5(v_env_1112_, v_buckets_1113_, v_sz_1115_, v___x_1116_, v___x_1114_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_, v_a_1103_, v_a_1104_, v_a_1105_, v_a_1106_);
lean_dec_ref(v_buckets_1113_);
if (lean_obj_tag(v___x_1117_) == 0)
{
lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1140_; 
v_a_1118_ = lean_ctor_get(v___x_1117_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1120_ = v___x_1117_;
v_isShared_1121_ = v_isSharedCheck_1140_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_dec(v___x_1117_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1140_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v_fst_1122_; lean_object* v_snd_1123_; lean_object* v_pre_1124_; lean_object* v_post_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1139_; 
v_fst_1122_ = lean_ctor_get(v_a_1118_, 0);
lean_inc(v_fst_1122_);
v_snd_1123_ = lean_ctor_get(v_a_1118_, 1);
lean_inc(v_snd_1123_);
lean_dec(v_a_1118_);
v_pre_1124_ = lean_ctor_get(v_methods_1098_, 0);
v_post_1125_ = lean_ctor_get(v_methods_1098_, 1);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_methods_1098_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1127_ = v_methods_1098_;
v_isShared_1128_ = v_isSharedCheck_1139_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_post_1125_);
lean_inc(v_pre_1124_);
lean_dec(v_methods_1098_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1139_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___f_1129_; lean_object* v___f_1130_; lean_object* v___f_1131_; lean_object* v___f_1132_; lean_object* v___x_1134_; 
v___f_1129_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__0___boxed), 13, 1);
lean_closure_set(v___f_1129_, 0, v_snd_1123_);
v___f_1130_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__1___boxed), 13, 1);
lean_closure_set(v___f_1130_, 0, v_fst_1122_);
v___f_1131_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__2___boxed), 13, 2);
lean_closure_set(v___f_1131_, 0, v_post_1125_);
lean_closure_set(v___f_1131_, 1, v___f_1130_);
v___f_1132_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___lam__3___boxed), 13, 2);
lean_closure_set(v___f_1132_, 0, v_pre_1124_);
lean_closure_set(v___f_1132_, 1, v___f_1129_);
if (v_isShared_1128_ == 0)
{
lean_ctor_set(v___x_1127_, 1, v___f_1131_);
lean_ctor_set(v___x_1127_, 0, v___f_1132_);
v___x_1134_ = v___x_1127_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v___f_1132_);
lean_ctor_set(v_reuseFailAlloc_1138_, 1, v___f_1131_);
v___x_1134_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
lean_object* v___x_1136_; 
if (v_isShared_1121_ == 0)
{
lean_ctor_set(v___x_1120_, 0, v___x_1134_);
v___x_1136_ = v___x_1120_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v___x_1134_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
}
else
{
lean_object* v_a_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1148_; 
lean_dec_ref(v_methods_1098_);
v_a_1141_ = lean_ctor_get(v___x_1117_, 0);
v_isSharedCheck_1148_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1143_ = v___x_1117_;
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_a_1141_);
lean_dec(v___x_1117_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1146_; 
if (v_isShared_1144_ == 0)
{
v___x_1146_ = v___x_1143_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_a_1141_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
return v___x_1146_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas___boxed(lean_object* v_methods_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas(v_methods_1149_, v_a_1150_, v_a_1151_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_);
lean_dec(v_a_1157_);
lean_dec_ref(v_a_1156_);
lean_dec(v_a_1155_);
lean_dec_ref(v_a_1154_);
lean_dec(v_a_1153_);
lean_dec_ref(v_a_1152_);
lean_dec(v_a_1151_);
lean_dec_ref(v_a_1150_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1(lean_object* v_00_u03b2_1160_, lean_object* v_m_1161_, lean_object* v_a_1162_, lean_object* v_b_1163_){
_start:
{
lean_object* v___x_1164_; 
v___x_1164_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1___redArg(v_m_1161_, v_a_1162_, v_b_1163_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__2(lean_object* v_upperBound_1165_, lean_object* v___x_1166_, lean_object* v_inst_1167_, lean_object* v_R_1168_, lean_object* v_a_1169_, lean_object* v_b_1170_, lean_object* v_c_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v___x_1181_; 
v___x_1181_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__2___redArg(v_upperBound_1165_, v___x_1166_, v_a_1169_, v_b_1170_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__2___boxed(lean_object* v_upperBound_1182_, lean_object* v___x_1183_, lean_object* v_inst_1184_, lean_object* v_R_1185_, lean_object* v_a_1186_, lean_object* v_b_1187_, lean_object* v_c_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_){
_start:
{
lean_object* v_res_1198_; 
v_res_1198_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__2(v_upperBound_1182_, v___x_1183_, v_inst_1184_, v_R_1185_, v_a_1186_, v_b_1187_, v_c_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_);
lean_dec(v___y_1196_);
lean_dec_ref(v___y_1195_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec_ref(v___x_1183_);
lean_dec(v_upperBound_1182_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3(lean_object* v_cls_1199_, lean_object* v_msg_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_){
_start:
{
lean_object* v___x_1210_; 
v___x_1210_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg(v_cls_1199_, v_msg_1200_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___boxed(lean_object* v_cls_1211_, lean_object* v_msg_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_){
_start:
{
lean_object* v_res_1222_; 
v_res_1222_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3(v_cls_1211_, v_msg_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1215_);
lean_dec(v___y_1214_);
lean_dec_ref(v___y_1213_);
return v_res_1222_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0_spec__0(lean_object* v_00_u03b1_1223_, lean_object* v_msg_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_){
_start:
{
lean_object* v___x_1234_; 
v___x_1234_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0_spec__0___redArg(v_msg_1224_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1235_, lean_object* v_msg_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0_spec__0(v_00_u03b1_1235_, v_msg_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1242_);
lean_dec_ref(v___y_1241_);
lean_dec(v___y_1240_);
lean_dec_ref(v___y_1239_);
lean_dec(v___y_1238_);
lean_dec_ref(v___y_1237_);
return v_res_1246_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__2(lean_object* v_00_u03b2_1247_, lean_object* v_a_1248_, lean_object* v_x_1249_){
_start:
{
uint8_t v___x_1250_; 
v___x_1250_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__2___redArg(v_a_1248_, v_x_1249_);
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1251_, lean_object* v_a_1252_, lean_object* v_x_1253_){
_start:
{
uint8_t v_res_1254_; lean_object* v_r_1255_; 
v_res_1254_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__2(v_00_u03b2_1251_, v_a_1252_, v_x_1253_);
lean_dec(v_x_1253_);
lean_dec(v_a_1252_);
v_r_1255_ = lean_box(v_res_1254_);
return v_r_1255_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3(lean_object* v_00_u03b2_1256_, lean_object* v_data_1257_){
_start:
{
lean_object* v___x_1258_; 
v___x_1258_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3___redArg(v_data_1257_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_1259_, lean_object* v_i_1260_, lean_object* v_source_1261_, lean_object* v_target_1262_){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3_spec__4___redArg(v_i_1260_, v_source_1261_, v_target_1262_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3_spec__4_spec__10(lean_object* v_00_u03b2_1264_, lean_object* v_x_1265_, lean_object* v_x_1266_){
_start:
{
lean_object* v___x_1267_; 
v___x_1267_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__3_spec__4_spec__10___redArg(v_x_1265_, v_x_1266_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2___redArg___lam__0(lean_object* v_x_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_){
_start:
{
lean_object* v___x_1278_; 
lean_inc(v___y_1272_);
lean_inc_ref(v___y_1271_);
lean_inc(v___y_1270_);
lean_inc_ref(v___y_1269_);
v___x_1278_ = lean_apply_9(v_x_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_, lean_box(0));
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2___redArg___lam__0___boxed(lean_object* v_x_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2___redArg___lam__0(v_x_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_);
lean_dec(v___y_1283_);
lean_dec_ref(v___y_1282_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2___redArg(lean_object* v_mvarId_1290_, lean_object* v_x_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_){
_start:
{
lean_object* v___f_1301_; lean_object* v___x_1302_; 
lean_inc(v___y_1295_);
lean_inc_ref(v___y_1294_);
lean_inc(v___y_1293_);
lean_inc_ref(v___y_1292_);
v___f_1301_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_1301_, 0, v_x_1291_);
lean_closure_set(v___f_1301_, 1, v___y_1292_);
lean_closure_set(v___f_1301_, 2, v___y_1293_);
lean_closure_set(v___f_1301_, 3, v___y_1294_);
lean_closure_set(v___f_1301_, 4, v___y_1295_);
v___x_1302_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1290_, v___f_1301_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_);
if (lean_obj_tag(v___x_1302_) == 0)
{
return v___x_1302_;
}
else
{
lean_object* v_a_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1310_; 
v_a_1303_ = lean_ctor_get(v___x_1302_, 0);
v_isSharedCheck_1310_ = !lean_is_exclusive(v___x_1302_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1305_ = v___x_1302_;
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_a_1303_);
lean_dec(v___x_1302_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1308_; 
if (v_isShared_1306_ == 0)
{
v___x_1308_ = v___x_1305_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_a_1303_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2___redArg___boxed(lean_object* v_mvarId_1311_, lean_object* v_x_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_){
_start:
{
lean_object* v_res_1322_; 
v_res_1322_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2___redArg(v_mvarId_1311_, v_x_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_);
lean_dec(v___y_1320_);
lean_dec_ref(v___y_1319_);
lean_dec(v___y_1318_);
lean_dec_ref(v___y_1317_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2(lean_object* v_00_u03b1_1323_, lean_object* v_mvarId_1324_, lean_object* v_x_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_){
_start:
{
lean_object* v___x_1335_; 
v___x_1335_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2___redArg(v_mvarId_1324_, v_x_1325_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_, v___y_1332_, v___y_1333_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2___boxed(lean_object* v_00_u03b1_1336_, lean_object* v_mvarId_1337_, lean_object* v_x_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2(v_00_u03b1_1336_, v_mvarId_1337_, v_x_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
lean_dec(v___y_1346_);
lean_dec_ref(v___y_1345_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
lean_dec(v___y_1342_);
lean_dec_ref(v___y_1341_);
lean_dec(v___y_1340_);
lean_dec_ref(v___y_1339_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___lam__0(lean_object* v_x_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_){
_start:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1362_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___lam__0___closed__0));
v___x_1363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1363_, 0, v___x_1362_);
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___lam__0___boxed(lean_object* v_x_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_){
_start:
{
lean_object* v_res_1375_; 
v_res_1375_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___lam__0(v_x_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
lean_dec(v___y_1365_);
lean_dec_ref(v_x_1364_);
return v_res_1375_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___lam__1(uint8_t v___x_1376_, lean_object* v___f_1377_, lean_object* v_____r_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_){
_start:
{
lean_object* v___x_1388_; lean_object* v_rewriteCache_1389_; lean_object* v_acNfCache_1390_; lean_object* v_typeAnalysis_1391_; lean_object* v_goal_1392_; lean_object* v_hypotheses_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1403_; 
v___x_1388_ = lean_st_ref_take(v___y_1380_);
v_rewriteCache_1389_ = lean_ctor_get(v___x_1388_, 0);
v_acNfCache_1390_ = lean_ctor_get(v___x_1388_, 1);
v_typeAnalysis_1391_ = lean_ctor_get(v___x_1388_, 2);
v_goal_1392_ = lean_ctor_get(v___x_1388_, 3);
v_hypotheses_1393_ = lean_ctor_get(v___x_1388_, 4);
v_isSharedCheck_1403_ = !lean_is_exclusive(v___x_1388_);
if (v_isSharedCheck_1403_ == 0)
{
v___x_1395_ = v___x_1388_;
v_isShared_1396_ = v_isSharedCheck_1403_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_hypotheses_1393_);
lean_inc(v_goal_1392_);
lean_inc(v_typeAnalysis_1391_);
lean_inc(v_acNfCache_1390_);
lean_inc(v_rewriteCache_1389_);
lean_dec(v___x_1388_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1403_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1398_; 
if (v_isShared_1396_ == 0)
{
v___x_1398_ = v___x_1395_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_rewriteCache_1389_);
lean_ctor_set(v_reuseFailAlloc_1402_, 1, v_acNfCache_1390_);
lean_ctor_set(v_reuseFailAlloc_1402_, 2, v_typeAnalysis_1391_);
lean_ctor_set(v_reuseFailAlloc_1402_, 3, v_goal_1392_);
lean_ctor_set(v_reuseFailAlloc_1402_, 4, v_hypotheses_1393_);
v___x_1398_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
lean_ctor_set_uint8(v___x_1398_, sizeof(void*)*5, v___x_1376_);
v___x_1399_ = lean_st_ref_set(v___y_1380_, v___x_1398_);
v___x_1400_ = lean_box(0);
lean_inc(v___y_1386_);
lean_inc_ref(v___y_1385_);
lean_inc(v___y_1384_);
lean_inc_ref(v___y_1383_);
lean_inc(v___y_1382_);
lean_inc_ref(v___y_1381_);
lean_inc(v___y_1380_);
lean_inc_ref(v___y_1379_);
v___x_1401_ = lean_apply_10(v___f_1377_, v___x_1400_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_, lean_box(0));
return v___x_1401_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___lam__1___boxed(lean_object* v___x_1404_, lean_object* v___f_1405_, lean_object* v_____r_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_){
_start:
{
uint8_t v___x_26204__boxed_1416_; lean_object* v_res_1417_; 
v___x_26204__boxed_1416_ = lean_unbox(v___x_1404_);
v_res_1417_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___lam__1(v___x_26204__boxed_1416_, v___f_1405_, v_____r_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_);
lean_dec(v___y_1414_);
lean_dec_ref(v___y_1413_);
lean_dec(v___y_1412_);
lean_dec_ref(v___y_1411_);
lean_dec(v___y_1410_);
lean_dec_ref(v___y_1409_);
lean_dec(v___y_1408_);
lean_dec_ref(v___y_1407_);
return v_res_1417_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(lean_object* v_x_1418_, lean_object* v_x_1419_, lean_object* v_x_1420_, lean_object* v_x_1421_){
_start:
{
lean_object* v_ks_1422_; lean_object* v_vs_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1447_; 
v_ks_1422_ = lean_ctor_get(v_x_1418_, 0);
v_vs_1423_ = lean_ctor_get(v_x_1418_, 1);
v_isSharedCheck_1447_ = !lean_is_exclusive(v_x_1418_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1425_ = v_x_1418_;
v_isShared_1426_ = v_isSharedCheck_1447_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_vs_1423_);
lean_inc(v_ks_1422_);
lean_dec(v_x_1418_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1447_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1427_; uint8_t v___x_1428_; 
v___x_1427_ = lean_array_get_size(v_ks_1422_);
v___x_1428_ = lean_nat_dec_lt(v_x_1419_, v___x_1427_);
if (v___x_1428_ == 0)
{
lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1432_; 
lean_dec(v_x_1419_);
v___x_1429_ = lean_array_push(v_ks_1422_, v_x_1420_);
v___x_1430_ = lean_array_push(v_vs_1423_, v_x_1421_);
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 1, v___x_1430_);
lean_ctor_set(v___x_1425_, 0, v___x_1429_);
v___x_1432_ = v___x_1425_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v___x_1429_);
lean_ctor_set(v_reuseFailAlloc_1433_, 1, v___x_1430_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
else
{
lean_object* v_k_x27_1434_; uint8_t v___x_1435_; 
v_k_x27_1434_ = lean_array_fget_borrowed(v_ks_1422_, v_x_1419_);
v___x_1435_ = l_Lean_instBEqMVarId_beq(v_x_1420_, v_k_x27_1434_);
if (v___x_1435_ == 0)
{
lean_object* v___x_1437_; 
if (v_isShared_1426_ == 0)
{
v___x_1437_ = v___x_1425_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v_ks_1422_);
lean_ctor_set(v_reuseFailAlloc_1441_, 1, v_vs_1423_);
v___x_1437_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1438_ = lean_unsigned_to_nat(1u);
v___x_1439_ = lean_nat_add(v_x_1419_, v___x_1438_);
lean_dec(v_x_1419_);
v_x_1418_ = v___x_1437_;
v_x_1419_ = v___x_1439_;
goto _start;
}
}
else
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1445_; 
v___x_1442_ = lean_array_fset(v_ks_1422_, v_x_1419_, v_x_1420_);
v___x_1443_ = lean_array_fset(v_vs_1423_, v_x_1419_, v_x_1421_);
lean_dec(v_x_1419_);
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 1, v___x_1443_);
lean_ctor_set(v___x_1425_, 0, v___x_1442_);
v___x_1445_ = v___x_1425_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v___x_1442_);
lean_ctor_set(v_reuseFailAlloc_1446_, 1, v___x_1443_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_n_1448_, lean_object* v_k_1449_, lean_object* v_v_1450_){
_start:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1451_ = lean_unsigned_to_nat(0u);
v___x_1452_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(v_n_1448_, v___x_1451_, v_k_1449_, v_v_1450_);
return v___x_1452_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1453_; 
v___x_1453_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2___redArg(lean_object* v_x_1454_, size_t v_x_1455_, size_t v_x_1456_, lean_object* v_x_1457_, lean_object* v_x_1458_){
_start:
{
if (lean_obj_tag(v_x_1454_) == 0)
{
lean_object* v_es_1459_; size_t v___x_1460_; size_t v___x_1461_; lean_object* v_j_1462_; lean_object* v___x_1463_; uint8_t v___x_1464_; 
v_es_1459_ = lean_ctor_get(v_x_1454_, 0);
v___x_1460_ = ((size_t)31ULL);
v___x_1461_ = lean_usize_land(v_x_1455_, v___x_1460_);
v_j_1462_ = lean_usize_to_nat(v___x_1461_);
v___x_1463_ = lean_array_get_size(v_es_1459_);
v___x_1464_ = lean_nat_dec_lt(v_j_1462_, v___x_1463_);
if (v___x_1464_ == 0)
{
lean_dec(v_j_1462_);
lean_dec(v_x_1458_);
lean_dec(v_x_1457_);
return v_x_1454_;
}
else
{
lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1503_; 
lean_inc_ref(v_es_1459_);
v_isSharedCheck_1503_ = !lean_is_exclusive(v_x_1454_);
if (v_isSharedCheck_1503_ == 0)
{
lean_object* v_unused_1504_; 
v_unused_1504_ = lean_ctor_get(v_x_1454_, 0);
lean_dec(v_unused_1504_);
v___x_1466_ = v_x_1454_;
v_isShared_1467_ = v_isSharedCheck_1503_;
goto v_resetjp_1465_;
}
else
{
lean_dec(v_x_1454_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1503_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v_v_1468_; lean_object* v___x_1469_; lean_object* v_xs_x27_1470_; lean_object* v___y_1472_; 
v_v_1468_ = lean_array_fget(v_es_1459_, v_j_1462_);
v___x_1469_ = lean_box(0);
v_xs_x27_1470_ = lean_array_fset(v_es_1459_, v_j_1462_, v___x_1469_);
switch(lean_obj_tag(v_v_1468_))
{
case 0:
{
lean_object* v_key_1477_; lean_object* v_val_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1488_; 
v_key_1477_ = lean_ctor_get(v_v_1468_, 0);
v_val_1478_ = lean_ctor_get(v_v_1468_, 1);
v_isSharedCheck_1488_ = !lean_is_exclusive(v_v_1468_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1480_ = v_v_1468_;
v_isShared_1481_ = v_isSharedCheck_1488_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_val_1478_);
lean_inc(v_key_1477_);
lean_dec(v_v_1468_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1488_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
uint8_t v___x_1482_; 
v___x_1482_ = l_Lean_instBEqMVarId_beq(v_x_1457_, v_key_1477_);
if (v___x_1482_ == 0)
{
lean_object* v___x_1483_; lean_object* v___x_1484_; 
lean_del_object(v___x_1480_);
v___x_1483_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1477_, v_val_1478_, v_x_1457_, v_x_1458_);
v___x_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1484_, 0, v___x_1483_);
v___y_1472_ = v___x_1484_;
goto v___jp_1471_;
}
else
{
lean_object* v___x_1486_; 
lean_dec(v_val_1478_);
lean_dec(v_key_1477_);
if (v_isShared_1481_ == 0)
{
lean_ctor_set(v___x_1480_, 1, v_x_1458_);
lean_ctor_set(v___x_1480_, 0, v_x_1457_);
v___x_1486_ = v___x_1480_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v_x_1457_);
lean_ctor_set(v_reuseFailAlloc_1487_, 1, v_x_1458_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
v___y_1472_ = v___x_1486_;
goto v___jp_1471_;
}
}
}
}
case 1:
{
lean_object* v_node_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1501_; 
v_node_1489_ = lean_ctor_get(v_v_1468_, 0);
v_isSharedCheck_1501_ = !lean_is_exclusive(v_v_1468_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1491_ = v_v_1468_;
v_isShared_1492_ = v_isSharedCheck_1501_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_node_1489_);
lean_dec(v_v_1468_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1501_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
size_t v___x_1493_; size_t v___x_1494_; size_t v___x_1495_; size_t v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1499_; 
v___x_1493_ = ((size_t)5ULL);
v___x_1494_ = lean_usize_shift_right(v_x_1455_, v___x_1493_);
v___x_1495_ = ((size_t)1ULL);
v___x_1496_ = lean_usize_add(v_x_1456_, v___x_1495_);
v___x_1497_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2___redArg(v_node_1489_, v___x_1494_, v___x_1496_, v_x_1457_, v_x_1458_);
if (v_isShared_1492_ == 0)
{
lean_ctor_set(v___x_1491_, 0, v___x_1497_);
v___x_1499_ = v___x_1491_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v___x_1497_);
v___x_1499_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
v___y_1472_ = v___x_1499_;
goto v___jp_1471_;
}
}
}
default: 
{
lean_object* v___x_1502_; 
v___x_1502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1502_, 0, v_x_1457_);
lean_ctor_set(v___x_1502_, 1, v_x_1458_);
v___y_1472_ = v___x_1502_;
goto v___jp_1471_;
}
}
v___jp_1471_:
{
lean_object* v___x_1473_; lean_object* v___x_1475_; 
v___x_1473_ = lean_array_fset(v_xs_x27_1470_, v_j_1462_, v___y_1472_);
lean_dec(v_j_1462_);
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 0, v___x_1473_);
v___x_1475_ = v___x_1466_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v___x_1473_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
}
}
else
{
lean_object* v_ks_1505_; lean_object* v_vs_1506_; lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1526_; 
v_ks_1505_ = lean_ctor_get(v_x_1454_, 0);
v_vs_1506_ = lean_ctor_get(v_x_1454_, 1);
v_isSharedCheck_1526_ = !lean_is_exclusive(v_x_1454_);
if (v_isSharedCheck_1526_ == 0)
{
v___x_1508_ = v_x_1454_;
v_isShared_1509_ = v_isSharedCheck_1526_;
goto v_resetjp_1507_;
}
else
{
lean_inc(v_vs_1506_);
lean_inc(v_ks_1505_);
lean_dec(v_x_1454_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1526_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
lean_object* v___x_1511_; 
if (v_isShared_1509_ == 0)
{
v___x_1511_ = v___x_1508_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v_ks_1505_);
lean_ctor_set(v_reuseFailAlloc_1525_, 1, v_vs_1506_);
v___x_1511_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
lean_object* v_newNode_1512_; uint8_t v___y_1514_; size_t v___x_1520_; uint8_t v___x_1521_; 
v_newNode_1512_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__4___redArg(v___x_1511_, v_x_1457_, v_x_1458_);
v___x_1520_ = ((size_t)7ULL);
v___x_1521_ = lean_usize_dec_le(v___x_1520_, v_x_1456_);
if (v___x_1521_ == 0)
{
lean_object* v___x_1522_; lean_object* v___x_1523_; uint8_t v___x_1524_; 
v___x_1522_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1512_);
v___x_1523_ = lean_unsigned_to_nat(4u);
v___x_1524_ = lean_nat_dec_lt(v___x_1522_, v___x_1523_);
lean_dec(v___x_1522_);
v___y_1514_ = v___x_1524_;
goto v___jp_1513_;
}
else
{
v___y_1514_ = v___x_1521_;
goto v___jp_1513_;
}
v___jp_1513_:
{
if (v___y_1514_ == 0)
{
lean_object* v_ks_1515_; lean_object* v_vs_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
v_ks_1515_ = lean_ctor_get(v_newNode_1512_, 0);
lean_inc_ref(v_ks_1515_);
v_vs_1516_ = lean_ctor_get(v_newNode_1512_, 1);
lean_inc_ref(v_vs_1516_);
lean_dec_ref(v_newNode_1512_);
v___x_1517_ = lean_unsigned_to_nat(0u);
v___x_1518_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_1519_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__5___redArg(v_x_1456_, v_ks_1515_, v_vs_1516_, v___x_1517_, v___x_1518_);
lean_dec_ref(v_vs_1516_);
lean_dec_ref(v_ks_1515_);
return v___x_1519_;
}
else
{
return v_newNode_1512_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__5___redArg(size_t v_depth_1527_, lean_object* v_keys_1528_, lean_object* v_vals_1529_, lean_object* v_i_1530_, lean_object* v_entries_1531_){
_start:
{
lean_object* v___x_1532_; uint8_t v___x_1533_; 
v___x_1532_ = lean_array_get_size(v_keys_1528_);
v___x_1533_ = lean_nat_dec_lt(v_i_1530_, v___x_1532_);
if (v___x_1533_ == 0)
{
lean_dec(v_i_1530_);
return v_entries_1531_;
}
else
{
lean_object* v_k_1534_; lean_object* v_v_1535_; uint64_t v___x_1536_; size_t v_h_1537_; size_t v___x_1538_; lean_object* v___x_1539_; size_t v___x_1540_; size_t v___x_1541_; size_t v___x_1542_; size_t v_h_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; 
v_k_1534_ = lean_array_fget_borrowed(v_keys_1528_, v_i_1530_);
v_v_1535_ = lean_array_fget_borrowed(v_vals_1529_, v_i_1530_);
v___x_1536_ = l_Lean_instHashableMVarId_hash(v_k_1534_);
v_h_1537_ = lean_uint64_to_usize(v___x_1536_);
v___x_1538_ = ((size_t)5ULL);
v___x_1539_ = lean_unsigned_to_nat(1u);
v___x_1540_ = ((size_t)1ULL);
v___x_1541_ = lean_usize_sub(v_depth_1527_, v___x_1540_);
v___x_1542_ = lean_usize_mul(v___x_1538_, v___x_1541_);
v_h_1543_ = lean_usize_shift_right(v_h_1537_, v___x_1542_);
v___x_1544_ = lean_nat_add(v_i_1530_, v___x_1539_);
lean_dec(v_i_1530_);
lean_inc(v_v_1535_);
lean_inc(v_k_1534_);
v___x_1545_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2___redArg(v_entries_1531_, v_h_1543_, v_depth_1527_, v_k_1534_, v_v_1535_);
v_i_1530_ = v___x_1544_;
v_entries_1531_ = v___x_1545_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_depth_1547_, lean_object* v_keys_1548_, lean_object* v_vals_1549_, lean_object* v_i_1550_, lean_object* v_entries_1551_){
_start:
{
size_t v_depth_boxed_1552_; lean_object* v_res_1553_; 
v_depth_boxed_1552_ = lean_unbox_usize(v_depth_1547_);
lean_dec(v_depth_1547_);
v_res_1553_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__5___redArg(v_depth_boxed_1552_, v_keys_1548_, v_vals_1549_, v_i_1550_, v_entries_1551_);
lean_dec_ref(v_vals_1549_);
lean_dec_ref(v_keys_1548_);
return v_res_1553_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_1554_, lean_object* v_x_1555_, lean_object* v_x_1556_, lean_object* v_x_1557_, lean_object* v_x_1558_){
_start:
{
size_t v_x_26339__boxed_1559_; size_t v_x_26340__boxed_1560_; lean_object* v_res_1561_; 
v_x_26339__boxed_1559_ = lean_unbox_usize(v_x_1555_);
lean_dec(v_x_1555_);
v_x_26340__boxed_1560_ = lean_unbox_usize(v_x_1556_);
lean_dec(v_x_1556_);
v_res_1561_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2___redArg(v_x_1554_, v_x_26339__boxed_1559_, v_x_26340__boxed_1560_, v_x_1557_, v_x_1558_);
return v_res_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0___redArg(lean_object* v_x_1562_, lean_object* v_x_1563_, lean_object* v_x_1564_){
_start:
{
uint64_t v___x_1565_; size_t v___x_1566_; size_t v___x_1567_; lean_object* v___x_1568_; 
v___x_1565_ = l_Lean_instHashableMVarId_hash(v_x_1563_);
v___x_1566_ = lean_uint64_to_usize(v___x_1565_);
v___x_1567_ = ((size_t)1ULL);
v___x_1568_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2___redArg(v_x_1562_, v___x_1566_, v___x_1567_, v_x_1563_, v_x_1564_);
return v___x_1568_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0___redArg(lean_object* v_mvarId_1569_, lean_object* v_val_1570_, lean_object* v___y_1571_){
_start:
{
lean_object* v___x_1573_; lean_object* v_mctx_1574_; lean_object* v_cache_1575_; lean_object* v_zetaDeltaFVarIds_1576_; lean_object* v_postponed_1577_; lean_object* v_diag_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1606_; 
v___x_1573_ = lean_st_ref_take(v___y_1571_);
v_mctx_1574_ = lean_ctor_get(v___x_1573_, 0);
v_cache_1575_ = lean_ctor_get(v___x_1573_, 1);
v_zetaDeltaFVarIds_1576_ = lean_ctor_get(v___x_1573_, 2);
v_postponed_1577_ = lean_ctor_get(v___x_1573_, 3);
v_diag_1578_ = lean_ctor_get(v___x_1573_, 4);
v_isSharedCheck_1606_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1606_ == 0)
{
v___x_1580_ = v___x_1573_;
v_isShared_1581_ = v_isSharedCheck_1606_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_diag_1578_);
lean_inc(v_postponed_1577_);
lean_inc(v_zetaDeltaFVarIds_1576_);
lean_inc(v_cache_1575_);
lean_inc(v_mctx_1574_);
lean_dec(v___x_1573_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1606_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v_depth_1582_; lean_object* v_levelAssignDepth_1583_; lean_object* v_lmvarCounter_1584_; lean_object* v_mvarCounter_1585_; lean_object* v_lDecls_1586_; lean_object* v_decls_1587_; lean_object* v_userNames_1588_; lean_object* v_lAssignment_1589_; lean_object* v_eAssignment_1590_; lean_object* v_dAssignment_1591_; lean_object* v___x_1593_; uint8_t v_isShared_1594_; uint8_t v_isSharedCheck_1605_; 
v_depth_1582_ = lean_ctor_get(v_mctx_1574_, 0);
v_levelAssignDepth_1583_ = lean_ctor_get(v_mctx_1574_, 1);
v_lmvarCounter_1584_ = lean_ctor_get(v_mctx_1574_, 2);
v_mvarCounter_1585_ = lean_ctor_get(v_mctx_1574_, 3);
v_lDecls_1586_ = lean_ctor_get(v_mctx_1574_, 4);
v_decls_1587_ = lean_ctor_get(v_mctx_1574_, 5);
v_userNames_1588_ = lean_ctor_get(v_mctx_1574_, 6);
v_lAssignment_1589_ = lean_ctor_get(v_mctx_1574_, 7);
v_eAssignment_1590_ = lean_ctor_get(v_mctx_1574_, 8);
v_dAssignment_1591_ = lean_ctor_get(v_mctx_1574_, 9);
v_isSharedCheck_1605_ = !lean_is_exclusive(v_mctx_1574_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1593_ = v_mctx_1574_;
v_isShared_1594_ = v_isSharedCheck_1605_;
goto v_resetjp_1592_;
}
else
{
lean_inc(v_dAssignment_1591_);
lean_inc(v_eAssignment_1590_);
lean_inc(v_lAssignment_1589_);
lean_inc(v_userNames_1588_);
lean_inc(v_decls_1587_);
lean_inc(v_lDecls_1586_);
lean_inc(v_mvarCounter_1585_);
lean_inc(v_lmvarCounter_1584_);
lean_inc(v_levelAssignDepth_1583_);
lean_inc(v_depth_1582_);
lean_dec(v_mctx_1574_);
v___x_1593_ = lean_box(0);
v_isShared_1594_ = v_isSharedCheck_1605_;
goto v_resetjp_1592_;
}
v_resetjp_1592_:
{
lean_object* v___x_1595_; lean_object* v___x_1597_; 
v___x_1595_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0___redArg(v_eAssignment_1590_, v_mvarId_1569_, v_val_1570_);
if (v_isShared_1594_ == 0)
{
lean_ctor_set(v___x_1593_, 8, v___x_1595_);
v___x_1597_ = v___x_1593_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_depth_1582_);
lean_ctor_set(v_reuseFailAlloc_1604_, 1, v_levelAssignDepth_1583_);
lean_ctor_set(v_reuseFailAlloc_1604_, 2, v_lmvarCounter_1584_);
lean_ctor_set(v_reuseFailAlloc_1604_, 3, v_mvarCounter_1585_);
lean_ctor_set(v_reuseFailAlloc_1604_, 4, v_lDecls_1586_);
lean_ctor_set(v_reuseFailAlloc_1604_, 5, v_decls_1587_);
lean_ctor_set(v_reuseFailAlloc_1604_, 6, v_userNames_1588_);
lean_ctor_set(v_reuseFailAlloc_1604_, 7, v_lAssignment_1589_);
lean_ctor_set(v_reuseFailAlloc_1604_, 8, v___x_1595_);
lean_ctor_set(v_reuseFailAlloc_1604_, 9, v_dAssignment_1591_);
v___x_1597_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
lean_object* v___x_1599_; 
if (v_isShared_1581_ == 0)
{
lean_ctor_set(v___x_1580_, 0, v___x_1597_);
v___x_1599_ = v___x_1580_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v___x_1597_);
lean_ctor_set(v_reuseFailAlloc_1603_, 1, v_cache_1575_);
lean_ctor_set(v_reuseFailAlloc_1603_, 2, v_zetaDeltaFVarIds_1576_);
lean_ctor_set(v_reuseFailAlloc_1603_, 3, v_postponed_1577_);
lean_ctor_set(v_reuseFailAlloc_1603_, 4, v_diag_1578_);
v___x_1599_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; 
v___x_1600_ = lean_st_ref_set(v___y_1571_, v___x_1599_);
v___x_1601_ = lean_box(0);
v___x_1602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1602_, 0, v___x_1601_);
return v___x_1602_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0___redArg___boxed(lean_object* v_mvarId_1607_, lean_object* v_val_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_){
_start:
{
lean_object* v_res_1611_; 
v_res_1611_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0___redArg(v_mvarId_1607_, v_val_1608_, v___y_1609_);
lean_dec(v___y_1609_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___lam__0(lean_object* v_snd_1612_, lean_object* v_a_1613_, lean_object* v___x_1614_, lean_object* v_____r_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_){
_start:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1625_ = lean_array_push(v_snd_1612_, v_a_1613_);
v___x_1626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1626_, 0, v___x_1614_);
lean_ctor_set(v___x_1626_, 1, v___x_1625_);
v___x_1627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1626_);
v___x_1628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1627_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___lam__0___boxed(lean_object* v_snd_1629_, lean_object* v_a_1630_, lean_object* v___x_1631_, lean_object* v_____r_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___lam__0(v_snd_1629_, v_a_1630_, v___x_1631_, v_____r_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_);
lean_dec(v___y_1640_);
lean_dec_ref(v___y_1639_);
lean_dec(v___y_1638_);
lean_dec_ref(v___y_1637_);
lean_dec(v___y_1636_);
lean_dec_ref(v___y_1635_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
return v_res_1642_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___x_1644_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___closed__0));
v___x_1645_ = l_Lean_stringToMessageData(v___x_1644_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg(lean_object* v_upperBound_1646_, lean_object* v___x_1647_, lean_object* v_a_1648_, lean_object* v___x_1649_, lean_object* v_a_1650_, lean_object* v_b_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_){
_start:
{
lean_object* v___y_1662_; uint8_t v___x_1684_; 
v___x_1684_ = lean_nat_dec_lt(v_a_1650_, v_upperBound_1646_);
if (v___x_1684_ == 0)
{
lean_object* v___x_1685_; 
lean_dec(v_a_1650_);
lean_dec_ref(v___x_1649_);
lean_dec_ref(v_a_1648_);
v___x_1685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1685_, 0, v_b_1651_);
return v___x_1685_;
}
else
{
lean_object* v___x_1686_; lean_object* v_type_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1686_ = lean_array_fget_borrowed(v___x_1647_, v_a_1650_);
v_type_1687_ = lean_ctor_get(v___x_1686_, 1);
lean_inc_ref(v_type_1687_);
v___x_1688_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_1688_, 0, v_type_1687_);
lean_inc_ref(v___x_1649_);
lean_inc_ref(v_a_1648_);
v___x_1689_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(v___x_1688_, v_a_1648_, v___x_1649_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_);
if (lean_obj_tag(v___x_1689_) == 0)
{
lean_object* v_a_1690_; lean_object* v___x_1691_; 
v_a_1690_ = lean_ctor_get(v___x_1689_, 0);
lean_inc(v_a_1690_);
lean_dec_ref_known(v___x_1689_, 1);
lean_inc(v___x_1686_);
v___x_1691_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v___x_1686_, v_a_1690_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v_a_1692_; lean_object* v_snd_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1755_; 
v_a_1692_ = lean_ctor_get(v___x_1691_, 0);
lean_inc(v_a_1692_);
lean_dec_ref_known(v___x_1691_, 1);
v_snd_1693_ = lean_ctor_get(v_b_1651_, 1);
v_isSharedCheck_1755_ = !lean_is_exclusive(v_b_1651_);
if (v_isSharedCheck_1755_ == 0)
{
lean_object* v_unused_1756_; 
v_unused_1756_ = lean_ctor_get(v_b_1651_, 0);
lean_dec(v_unused_1756_);
v___x_1695_ = v_b_1651_;
v_isShared_1696_ = v_isSharedCheck_1755_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_snd_1693_);
lean_dec(v_b_1651_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1755_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v_type_1697_; lean_object* v_value_1698_; uint8_t v___x_1699_; 
v_type_1697_ = lean_ctor_get(v_a_1692_, 1);
v_value_1698_ = lean_ctor_get(v_a_1692_, 2);
lean_inc_ref(v_type_1697_);
v___x_1699_ = l_Lean_Expr_isFalse(v_type_1697_);
if (v___x_1699_ == 0)
{
lean_object* v___x_1700_; lean_object* v___f_1701_; uint8_t v___x_1728_; 
lean_del_object(v___x_1695_);
v___x_1700_ = lean_box(0);
lean_inc(v_a_1692_);
lean_inc(v_snd_1693_);
v___f_1701_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___lam__0___boxed), 13, 3);
lean_closure_set(v___f_1701_, 0, v_snd_1693_);
lean_closure_set(v___f_1701_, 1, v_a_1692_);
lean_closure_set(v___f_1701_, 2, v___x_1700_);
v___x_1728_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp_beq(v___x_1686_, v_a_1692_);
if (v___x_1728_ == 0)
{
lean_inc_ref(v_type_1697_);
lean_dec(v_snd_1693_);
lean_dec(v_a_1692_);
goto v___jp_1705_;
}
else
{
if (v___x_1699_ == 0)
{
lean_object* v___x_1729_; lean_object* v___x_1730_; 
lean_dec_ref(v___f_1701_);
v___x_1729_ = lean_box(0);
v___x_1730_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___lam__0(v_snd_1693_, v_a_1692_, v___x_1700_, v___x_1729_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_);
v___y_1662_ = v___x_1730_;
goto v___jp_1661_;
}
else
{
lean_inc_ref(v_type_1697_);
lean_dec(v_snd_1693_);
lean_dec(v_a_1692_);
goto v___jp_1705_;
}
}
v___jp_1702_:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; 
v___x_1703_ = lean_box(0);
v___x_1704_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___lam__1(v___x_1684_, v___f_1701_, v___x_1703_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_);
v___y_1662_ = v___x_1704_;
goto v___jp_1661_;
}
v___jp_1705_:
{
lean_object* v_options_1706_; uint8_t v_hasTrace_1707_; 
v_options_1706_ = lean_ctor_get(v___y_1658_, 2);
v_hasTrace_1707_ = lean_ctor_get_uint8(v_options_1706_, sizeof(void*)*1);
if (v_hasTrace_1707_ == 0)
{
lean_dec_ref(v_type_1697_);
goto v___jp_1702_;
}
else
{
lean_object* v_inheritedTraceOptions_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; uint8_t v___x_1711_; 
v_inheritedTraceOptions_1708_ = lean_ctor_get(v___y_1658_, 13);
v___x_1709_ = ((lean_object*)(l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__3));
v___x_1710_ = lean_obj_once(&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__6, &l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__6_once, _init_l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__6);
v___x_1711_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1708_, v_options_1706_, v___x_1710_);
if (v___x_1711_ == 0)
{
lean_dec_ref(v_type_1697_);
goto v___jp_1702_;
}
else
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; 
lean_inc_ref(v_type_1687_);
v___x_1712_ = l_Lean_MessageData_ofExpr(v_type_1687_);
v___x_1713_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___closed__1);
v___x_1714_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1714_, 0, v___x_1712_);
lean_ctor_set(v___x_1714_, 1, v___x_1713_);
v___x_1715_ = l_Lean_MessageData_ofExpr(v_type_1697_);
v___x_1716_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1716_, 0, v___x_1714_);
lean_ctor_set(v___x_1716_, 1, v___x_1715_);
v___x_1717_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg(v___x_1709_, v___x_1716_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_);
if (lean_obj_tag(v___x_1717_) == 0)
{
lean_object* v_a_1718_; lean_object* v___x_1719_; 
v_a_1718_ = lean_ctor_get(v___x_1717_, 0);
lean_inc(v_a_1718_);
lean_dec_ref_known(v___x_1717_, 1);
v___x_1719_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___lam__1(v___x_1684_, v___f_1701_, v_a_1718_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_);
v___y_1662_ = v___x_1719_;
goto v___jp_1661_;
}
else
{
lean_object* v_a_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1727_; 
lean_dec_ref(v___f_1701_);
lean_dec(v_a_1650_);
lean_dec_ref(v___x_1649_);
lean_dec_ref(v_a_1648_);
v_a_1720_ = lean_ctor_get(v___x_1717_, 0);
v_isSharedCheck_1727_ = !lean_is_exclusive(v___x_1717_);
if (v_isSharedCheck_1727_ == 0)
{
v___x_1722_ = v___x_1717_;
v_isShared_1723_ = v_isSharedCheck_1727_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_a_1720_);
lean_dec(v___x_1717_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1727_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1725_; 
if (v_isShared_1723_ == 0)
{
v___x_1725_ = v___x_1722_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v_a_1720_);
v___x_1725_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
return v___x_1725_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1731_; lean_object* v_goal_1732_; lean_object* v___x_1733_; 
lean_inc_ref(v_value_1698_);
lean_dec(v_a_1692_);
lean_dec(v_a_1650_);
lean_dec_ref(v___x_1649_);
lean_dec_ref(v_a_1648_);
v___x_1731_ = lean_st_ref_get(v___y_1653_);
v_goal_1732_ = lean_ctor_get(v___x_1731_, 3);
lean_inc(v_goal_1732_);
lean_dec(v___x_1731_);
v___x_1733_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0___redArg(v_goal_1732_, v_value_1698_, v___y_1657_);
if (lean_obj_tag(v___x_1733_) == 0)
{
lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1745_; 
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1745_ == 0)
{
lean_object* v_unused_1746_; 
v_unused_1746_ = lean_ctor_get(v___x_1733_, 0);
lean_dec(v_unused_1746_);
v___x_1735_ = v___x_1733_;
v_isShared_1736_ = v_isSharedCheck_1745_;
goto v_resetjp_1734_;
}
else
{
lean_dec(v___x_1733_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1745_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1740_; 
v___x_1737_ = lean_box(v___x_1699_);
v___x_1738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1737_);
if (v_isShared_1696_ == 0)
{
lean_ctor_set(v___x_1695_, 0, v___x_1738_);
v___x_1740_ = v___x_1695_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v___x_1738_);
lean_ctor_set(v_reuseFailAlloc_1744_, 1, v_snd_1693_);
v___x_1740_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
lean_object* v___x_1742_; 
if (v_isShared_1736_ == 0)
{
lean_ctor_set(v___x_1735_, 0, v___x_1740_);
v___x_1742_ = v___x_1735_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v___x_1740_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
return v___x_1742_;
}
}
}
}
else
{
lean_object* v_a_1747_; lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1754_; 
lean_del_object(v___x_1695_);
lean_dec(v_snd_1693_);
v_a_1747_ = lean_ctor_get(v___x_1733_, 0);
v_isSharedCheck_1754_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1749_ = v___x_1733_;
v_isShared_1750_ = v_isSharedCheck_1754_;
goto v_resetjp_1748_;
}
else
{
lean_inc(v_a_1747_);
lean_dec(v___x_1733_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1754_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
lean_object* v___x_1752_; 
if (v_isShared_1750_ == 0)
{
v___x_1752_ = v___x_1749_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v_a_1747_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
}
}
}
}
else
{
lean_object* v_a_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1764_; 
lean_dec_ref(v_b_1651_);
lean_dec(v_a_1650_);
lean_dec_ref(v___x_1649_);
lean_dec_ref(v_a_1648_);
v_a_1757_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1764_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1764_ == 0)
{
v___x_1759_ = v___x_1691_;
v_isShared_1760_ = v_isSharedCheck_1764_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_a_1757_);
lean_dec(v___x_1691_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1764_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1762_; 
if (v_isShared_1760_ == 0)
{
v___x_1762_ = v___x_1759_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v_a_1757_);
v___x_1762_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
return v___x_1762_;
}
}
}
}
else
{
lean_object* v_a_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1772_; 
lean_dec_ref(v_b_1651_);
lean_dec(v_a_1650_);
lean_dec_ref(v___x_1649_);
lean_dec_ref(v_a_1648_);
v_a_1765_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1772_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1767_ = v___x_1689_;
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_a_1765_);
lean_dec(v___x_1689_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v___x_1770_; 
if (v_isShared_1768_ == 0)
{
v___x_1770_ = v___x_1767_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v_a_1765_);
v___x_1770_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
return v___x_1770_;
}
}
}
}
v___jp_1661_:
{
if (lean_obj_tag(v___y_1662_) == 0)
{
lean_object* v_a_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1675_; 
v_a_1663_ = lean_ctor_get(v___y_1662_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___y_1662_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1665_ = v___y_1662_;
v_isShared_1666_ = v_isSharedCheck_1675_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_a_1663_);
lean_dec(v___y_1662_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1675_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
if (lean_obj_tag(v_a_1663_) == 0)
{
lean_object* v_a_1667_; lean_object* v___x_1669_; 
lean_dec(v_a_1650_);
lean_dec_ref(v___x_1649_);
lean_dec_ref(v_a_1648_);
v_a_1667_ = lean_ctor_get(v_a_1663_, 0);
lean_inc(v_a_1667_);
lean_dec_ref_known(v_a_1663_, 1);
if (v_isShared_1666_ == 0)
{
lean_ctor_set(v___x_1665_, 0, v_a_1667_);
v___x_1669_ = v___x_1665_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_a_1667_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
else
{
lean_object* v_a_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
lean_del_object(v___x_1665_);
v_a_1671_ = lean_ctor_get(v_a_1663_, 0);
lean_inc(v_a_1671_);
lean_dec_ref_known(v_a_1663_, 1);
v___x_1672_ = lean_unsigned_to_nat(1u);
v___x_1673_ = lean_nat_add(v_a_1650_, v___x_1672_);
lean_dec(v_a_1650_);
v_a_1650_ = v___x_1673_;
v_b_1651_ = v_a_1671_;
goto _start;
}
}
}
else
{
lean_object* v_a_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1683_; 
lean_dec(v_a_1650_);
lean_dec_ref(v___x_1649_);
lean_dec_ref(v_a_1648_);
v_a_1676_ = lean_ctor_get(v___y_1662_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v___y_1662_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1678_ = v___y_1662_;
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_a_1676_);
lean_dec(v___y_1662_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1681_; 
if (v_isShared_1679_ == 0)
{
v___x_1681_ = v___x_1678_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v_a_1676_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg___boxed(lean_object* v_upperBound_1773_, lean_object* v___x_1774_, lean_object* v_a_1775_, lean_object* v___x_1776_, lean_object* v_a_1777_, lean_object* v_b_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg(v_upperBound_1773_, v___x_1774_, v_a_1775_, v___x_1776_, v_a_1777_, v_b_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_);
lean_dec(v___y_1786_);
lean_dec_ref(v___y_1785_);
lean_dec(v___y_1784_);
lean_dec_ref(v___y_1783_);
lean_dec(v___y_1782_);
lean_dec_ref(v___y_1781_);
lean_dec(v___y_1780_);
lean_dec_ref(v___y_1779_);
lean_dec_ref(v___x_1774_);
lean_dec(v_upperBound_1773_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___lam__1(lean_object* v_methods_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_){
_start:
{
lean_object* v___x_1799_; 
v___x_1799_ = l_Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas(v_methods_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_);
if (lean_obj_tag(v___x_1799_) == 0)
{
lean_object* v_a_1800_; lean_object* v___x_1801_; 
v_a_1800_ = lean_ctor_get(v___x_1799_, 0);
lean_inc(v_a_1800_);
lean_dec_ref_known(v___x_1799_, 1);
v___x_1801_ = l_Lean_Meta_Tactic_BVDecide_Normalize_addDefaultTypeAnalysisLemmas(v_a_1800_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_);
if (lean_obj_tag(v___x_1801_) == 0)
{
lean_object* v_a_1802_; lean_object* v___x_1803_; lean_object* v_hypotheses_1804_; lean_object* v_maxSteps_1805_; lean_object* v___x_1806_; lean_object* v_newHyps_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
v_a_1802_ = lean_ctor_get(v___x_1801_, 0);
lean_inc(v_a_1802_);
lean_dec_ref_known(v___x_1801_, 1);
v___x_1803_ = lean_st_ref_get(v___y_1791_);
v_hypotheses_1804_ = lean_ctor_get(v___x_1803_, 4);
lean_inc_ref(v_hypotheses_1804_);
lean_dec(v___x_1803_);
v_maxSteps_1805_ = lean_ctor_get(v___y_1790_, 1);
v___x_1806_ = lean_array_get_size(v_hypotheses_1804_);
v_newHyps_1807_ = lean_mk_empty_array_with_capacity(v___x_1806_);
v___x_1808_ = lean_unsigned_to_nat(0u);
v___x_1809_ = lean_unsigned_to_nat(2u);
lean_inc(v_maxSteps_1805_);
v___x_1810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1810_, 0, v_maxSteps_1805_);
lean_ctor_set(v___x_1810_, 1, v___x_1809_);
v___x_1811_ = lean_box(0);
v___x_1812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1812_, 0, v___x_1811_);
lean_ctor_set(v___x_1812_, 1, v_newHyps_1807_);
v___x_1813_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg(v___x_1806_, v_hypotheses_1804_, v_a_1802_, v___x_1810_, v___x_1808_, v___x_1812_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_);
lean_dec_ref(v_hypotheses_1804_);
if (lean_obj_tag(v___x_1813_) == 0)
{
lean_object* v_a_1814_; lean_object* v___x_1816_; uint8_t v_isShared_1817_; uint8_t v_isSharedCheck_1844_; 
v_a_1814_ = lean_ctor_get(v___x_1813_, 0);
v_isSharedCheck_1844_ = !lean_is_exclusive(v___x_1813_);
if (v_isSharedCheck_1844_ == 0)
{
v___x_1816_ = v___x_1813_;
v_isShared_1817_ = v_isSharedCheck_1844_;
goto v_resetjp_1815_;
}
else
{
lean_inc(v_a_1814_);
lean_dec(v___x_1813_);
v___x_1816_ = lean_box(0);
v_isShared_1817_ = v_isSharedCheck_1844_;
goto v_resetjp_1815_;
}
v_resetjp_1815_:
{
lean_object* v_fst_1818_; 
v_fst_1818_ = lean_ctor_get(v_a_1814_, 0);
if (lean_obj_tag(v_fst_1818_) == 0)
{
lean_object* v_snd_1819_; lean_object* v___x_1820_; lean_object* v_rewriteCache_1821_; lean_object* v_acNfCache_1822_; lean_object* v_typeAnalysis_1823_; lean_object* v_goal_1824_; uint8_t v_didChange_1825_; lean_object* v___x_1827_; uint8_t v_isShared_1828_; uint8_t v_isSharedCheck_1838_; 
v_snd_1819_ = lean_ctor_get(v_a_1814_, 1);
lean_inc(v_snd_1819_);
lean_dec(v_a_1814_);
v___x_1820_ = lean_st_ref_take(v___y_1791_);
v_rewriteCache_1821_ = lean_ctor_get(v___x_1820_, 0);
v_acNfCache_1822_ = lean_ctor_get(v___x_1820_, 1);
v_typeAnalysis_1823_ = lean_ctor_get(v___x_1820_, 2);
v_goal_1824_ = lean_ctor_get(v___x_1820_, 3);
v_didChange_1825_ = lean_ctor_get_uint8(v___x_1820_, sizeof(void*)*5);
v_isSharedCheck_1838_ = !lean_is_exclusive(v___x_1820_);
if (v_isSharedCheck_1838_ == 0)
{
lean_object* v_unused_1839_; 
v_unused_1839_ = lean_ctor_get(v___x_1820_, 4);
lean_dec(v_unused_1839_);
v___x_1827_ = v___x_1820_;
v_isShared_1828_ = v_isSharedCheck_1838_;
goto v_resetjp_1826_;
}
else
{
lean_inc(v_goal_1824_);
lean_inc(v_typeAnalysis_1823_);
lean_inc(v_acNfCache_1822_);
lean_inc(v_rewriteCache_1821_);
lean_dec(v___x_1820_);
v___x_1827_ = lean_box(0);
v_isShared_1828_ = v_isSharedCheck_1838_;
goto v_resetjp_1826_;
}
v_resetjp_1826_:
{
lean_object* v___x_1830_; 
if (v_isShared_1828_ == 0)
{
lean_ctor_set(v___x_1827_, 4, v_snd_1819_);
v___x_1830_ = v___x_1827_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v_rewriteCache_1821_);
lean_ctor_set(v_reuseFailAlloc_1837_, 1, v_acNfCache_1822_);
lean_ctor_set(v_reuseFailAlloc_1837_, 2, v_typeAnalysis_1823_);
lean_ctor_set(v_reuseFailAlloc_1837_, 3, v_goal_1824_);
lean_ctor_set(v_reuseFailAlloc_1837_, 4, v_snd_1819_);
lean_ctor_set_uint8(v_reuseFailAlloc_1837_, sizeof(void*)*5, v_didChange_1825_);
v___x_1830_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
lean_object* v___x_1831_; uint8_t v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1835_; 
v___x_1831_ = lean_st_ref_set(v___y_1791_, v___x_1830_);
v___x_1832_ = 0;
v___x_1833_ = lean_box(v___x_1832_);
if (v_isShared_1817_ == 0)
{
lean_ctor_set(v___x_1816_, 0, v___x_1833_);
v___x_1835_ = v___x_1816_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v___x_1833_);
v___x_1835_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
return v___x_1835_;
}
}
}
}
else
{
lean_object* v_val_1840_; lean_object* v___x_1842_; 
lean_inc_ref(v_fst_1818_);
lean_dec(v_a_1814_);
v_val_1840_ = lean_ctor_get(v_fst_1818_, 0);
lean_inc(v_val_1840_);
lean_dec_ref_known(v_fst_1818_, 1);
if (v_isShared_1817_ == 0)
{
lean_ctor_set(v___x_1816_, 0, v_val_1840_);
v___x_1842_ = v___x_1816_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v_val_1840_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
}
}
else
{
lean_object* v_a_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1852_; 
v_a_1845_ = lean_ctor_get(v___x_1813_, 0);
v_isSharedCheck_1852_ = !lean_is_exclusive(v___x_1813_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1847_ = v___x_1813_;
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_a_1845_);
lean_dec(v___x_1813_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1850_; 
if (v_isShared_1848_ == 0)
{
v___x_1850_ = v___x_1847_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_a_1845_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
}
}
else
{
lean_object* v_a_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1860_; 
v_a_1853_ = lean_ctor_get(v___x_1801_, 0);
v_isSharedCheck_1860_ = !lean_is_exclusive(v___x_1801_);
if (v_isSharedCheck_1860_ == 0)
{
v___x_1855_ = v___x_1801_;
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_a_1853_);
lean_dec(v___x_1801_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1858_; 
if (v_isShared_1856_ == 0)
{
v___x_1858_ = v___x_1855_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v_a_1853_);
v___x_1858_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
return v___x_1858_;
}
}
}
}
else
{
lean_object* v_a_1861_; lean_object* v___x_1863_; uint8_t v_isShared_1864_; uint8_t v_isSharedCheck_1868_; 
v_a_1861_ = lean_ctor_get(v___x_1799_, 0);
v_isSharedCheck_1868_ = !lean_is_exclusive(v___x_1799_);
if (v_isSharedCheck_1868_ == 0)
{
v___x_1863_ = v___x_1799_;
v_isShared_1864_ = v_isSharedCheck_1868_;
goto v_resetjp_1862_;
}
else
{
lean_inc(v_a_1861_);
lean_dec(v___x_1799_);
v___x_1863_ = lean_box(0);
v_isShared_1864_ = v_isSharedCheck_1868_;
goto v_resetjp_1862_;
}
v_resetjp_1862_:
{
lean_object* v___x_1866_; 
if (v_isShared_1864_ == 0)
{
v___x_1866_ = v___x_1863_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v_a_1861_);
v___x_1866_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
return v___x_1866_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___lam__1___boxed(lean_object* v_methods_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_){
_start:
{
lean_object* v_res_1879_; 
v_res_1879_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___lam__1(v_methods_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_);
lean_dec(v___y_1877_);
lean_dec_ref(v___y_1876_);
lean_dec(v___y_1875_);
lean_dec_ref(v___y_1874_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
lean_dec(v___y_1871_);
lean_dec_ref(v___y_1870_);
return v_res_1879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess(lean_object* v_goal_1885_, lean_object* v_a_1886_, lean_object* v_a_1887_, lean_object* v_a_1888_, lean_object* v_a_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_){
_start:
{
lean_object* v___f_1895_; lean_object* v___x_1896_; 
v___f_1895_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___closed__2));
v___x_1896_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2___redArg(v_goal_1885_, v___f_1895_, v_a_1886_, v_a_1887_, v_a_1888_, v_a_1889_, v_a_1890_, v_a_1891_, v_a_1892_, v_a_1893_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess___boxed(lean_object* v_goal_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_){
_start:
{
lean_object* v_res_1907_; 
v_res_1907_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess(v_goal_1897_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_);
lean_dec(v_a_1905_);
lean_dec_ref(v_a_1904_);
lean_dec(v_a_1903_);
lean_dec_ref(v_a_1902_);
lean_dec(v_a_1901_);
lean_dec_ref(v_a_1900_);
lean_dec(v_a_1899_);
lean_dec_ref(v_a_1898_);
return v_res_1907_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0(lean_object* v_mvarId_1908_, lean_object* v_val_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_){
_start:
{
lean_object* v___x_1919_; 
v___x_1919_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0___redArg(v_mvarId_1908_, v_val_1909_, v___y_1915_);
return v___x_1919_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0___boxed(lean_object* v_mvarId_1920_, lean_object* v_val_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_){
_start:
{
lean_object* v_res_1931_; 
v_res_1931_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0(v_mvarId_1920_, v_val_1921_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_);
lean_dec(v___y_1929_);
lean_dec_ref(v___y_1928_);
lean_dec(v___y_1927_);
lean_dec_ref(v___y_1926_);
lean_dec(v___y_1925_);
lean_dec_ref(v___y_1924_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1(lean_object* v_upperBound_1932_, lean_object* v___x_1933_, lean_object* v_a_1934_, lean_object* v___x_1935_, lean_object* v_inst_1936_, lean_object* v_R_1937_, lean_object* v_a_1938_, lean_object* v_b_1939_, lean_object* v_c_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_){
_start:
{
lean_object* v___x_1950_; 
v___x_1950_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___redArg(v_upperBound_1932_, v___x_1933_, v_a_1934_, v___x_1935_, v_a_1938_, v_b_1939_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_);
return v___x_1950_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_1951_ = _args[0];
lean_object* v___x_1952_ = _args[1];
lean_object* v_a_1953_ = _args[2];
lean_object* v___x_1954_ = _args[3];
lean_object* v_inst_1955_ = _args[4];
lean_object* v_R_1956_ = _args[5];
lean_object* v_a_1957_ = _args[6];
lean_object* v_b_1958_ = _args[7];
lean_object* v_c_1959_ = _args[8];
lean_object* v___y_1960_ = _args[9];
lean_object* v___y_1961_ = _args[10];
lean_object* v___y_1962_ = _args[11];
lean_object* v___y_1963_ = _args[12];
lean_object* v___y_1964_ = _args[13];
lean_object* v___y_1965_ = _args[14];
lean_object* v___y_1966_ = _args[15];
lean_object* v___y_1967_ = _args[16];
lean_object* v___y_1968_ = _args[17];
_start:
{
lean_object* v_res_1969_; 
v_res_1969_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__1(v_upperBound_1951_, v___x_1952_, v_a_1953_, v___x_1954_, v_inst_1955_, v_R_1956_, v_a_1957_, v_b_1958_, v_c_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec_ref(v___x_1952_);
lean_dec(v_upperBound_1951_);
return v_res_1969_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0(lean_object* v_00_u03b2_1970_, lean_object* v_x_1971_, lean_object* v_x_1972_, lean_object* v_x_1973_){
_start:
{
lean_object* v___x_1974_; 
v___x_1974_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0___redArg(v_x_1971_, v_x_1972_, v_x_1973_);
return v___x_1974_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1975_, lean_object* v_x_1976_, size_t v_x_1977_, size_t v_x_1978_, lean_object* v_x_1979_, lean_object* v_x_1980_){
_start:
{
lean_object* v___x_1981_; 
v___x_1981_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2___redArg(v_x_1976_, v_x_1977_, v_x_1978_, v_x_1979_, v_x_1980_);
return v___x_1981_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1982_, lean_object* v_x_1983_, lean_object* v_x_1984_, lean_object* v_x_1985_, lean_object* v_x_1986_, lean_object* v_x_1987_){
_start:
{
size_t v_x_27113__boxed_1988_; size_t v_x_27114__boxed_1989_; lean_object* v_res_1990_; 
v_x_27113__boxed_1988_ = lean_unbox_usize(v_x_1984_);
lean_dec(v_x_1984_);
v_x_27114__boxed_1989_ = lean_unbox_usize(v_x_1985_);
lean_dec(v_x_1985_);
v_res_1990_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2(v_00_u03b2_1982_, v_x_1983_, v_x_27113__boxed_1988_, v_x_27114__boxed_1989_, v_x_1986_, v_x_1987_);
return v_res_1990_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_1991_, lean_object* v_n_1992_, lean_object* v_k_1993_, lean_object* v_v_1994_){
_start:
{
lean_object* v___x_1995_; 
v___x_1995_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__4___redArg(v_n_1992_, v_k_1993_, v_v_1994_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_1996_, size_t v_depth_1997_, lean_object* v_keys_1998_, lean_object* v_vals_1999_, lean_object* v_heq_2000_, lean_object* v_i_2001_, lean_object* v_entries_2002_){
_start:
{
lean_object* v___x_2003_; 
v___x_2003_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__5___redArg(v_depth_1997_, v_keys_1998_, v_vals_1999_, v_i_2001_, v_entries_2002_);
return v___x_2003_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_2004_, lean_object* v_depth_2005_, lean_object* v_keys_2006_, lean_object* v_vals_2007_, lean_object* v_heq_2008_, lean_object* v_i_2009_, lean_object* v_entries_2010_){
_start:
{
size_t v_depth_boxed_2011_; lean_object* v_res_2012_; 
v_depth_boxed_2011_ = lean_unbox_usize(v_depth_2005_);
lean_dec(v_depth_2005_);
v_res_2012_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__5(v_00_u03b2_2004_, v_depth_boxed_2011_, v_keys_2006_, v_vals_2007_, v_heq_2008_, v_i_2009_, v_entries_2010_);
lean_dec_ref(v_vals_2007_);
lean_dec_ref(v_keys_2006_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_2013_, lean_object* v_x_2014_, lean_object* v_x_2015_, lean_object* v_x_2016_, lean_object* v_x_2017_){
_start:
{
lean_object* v___x_2018_; 
v___x_2018_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(v_x_2014_, v_x_2015_, v_x_2016_, v_x_2017_);
return v___x_2018_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__0(void){
_start:
{
lean_object* v___x_2019_; 
v___x_2019_ = l_instMonadEIO(lean_box(0));
return v___x_2019_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4(lean_object* v_msg_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_){
_start:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v_toApplicative_2036_; lean_object* v___x_2038_; uint8_t v_isShared_2039_; uint8_t v_isSharedCheck_2101_; 
v___x_2034_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__0);
v___x_2035_ = l_StateRefT_x27_instMonad___redArg(v___x_2034_);
v_toApplicative_2036_ = lean_ctor_get(v___x_2035_, 0);
v_isSharedCheck_2101_ = !lean_is_exclusive(v___x_2035_);
if (v_isSharedCheck_2101_ == 0)
{
lean_object* v_unused_2102_; 
v_unused_2102_ = lean_ctor_get(v___x_2035_, 1);
lean_dec(v_unused_2102_);
v___x_2038_ = v___x_2035_;
v_isShared_2039_ = v_isSharedCheck_2101_;
goto v_resetjp_2037_;
}
else
{
lean_inc(v_toApplicative_2036_);
lean_dec(v___x_2035_);
v___x_2038_ = lean_box(0);
v_isShared_2039_ = v_isSharedCheck_2101_;
goto v_resetjp_2037_;
}
v_resetjp_2037_:
{
lean_object* v_toFunctor_2040_; lean_object* v_toSeq_2041_; lean_object* v_toSeqLeft_2042_; lean_object* v_toSeqRight_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2099_; 
v_toFunctor_2040_ = lean_ctor_get(v_toApplicative_2036_, 0);
v_toSeq_2041_ = lean_ctor_get(v_toApplicative_2036_, 2);
v_toSeqLeft_2042_ = lean_ctor_get(v_toApplicative_2036_, 3);
v_toSeqRight_2043_ = lean_ctor_get(v_toApplicative_2036_, 4);
v_isSharedCheck_2099_ = !lean_is_exclusive(v_toApplicative_2036_);
if (v_isSharedCheck_2099_ == 0)
{
lean_object* v_unused_2100_; 
v_unused_2100_ = lean_ctor_get(v_toApplicative_2036_, 1);
lean_dec(v_unused_2100_);
v___x_2045_ = v_toApplicative_2036_;
v_isShared_2046_ = v_isSharedCheck_2099_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_toSeqRight_2043_);
lean_inc(v_toSeqLeft_2042_);
lean_inc(v_toSeq_2041_);
lean_inc(v_toFunctor_2040_);
lean_dec(v_toApplicative_2036_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2099_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___f_2047_; lean_object* v___f_2048_; lean_object* v___f_2049_; lean_object* v___f_2050_; lean_object* v___x_2051_; lean_object* v___f_2052_; lean_object* v___f_2053_; lean_object* v___f_2054_; lean_object* v___x_2056_; 
v___f_2047_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__1));
v___f_2048_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__2));
lean_inc_ref(v_toFunctor_2040_);
v___f_2049_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2049_, 0, v_toFunctor_2040_);
v___f_2050_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2050_, 0, v_toFunctor_2040_);
v___x_2051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2051_, 0, v___f_2049_);
lean_ctor_set(v___x_2051_, 1, v___f_2050_);
v___f_2052_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2052_, 0, v_toSeqRight_2043_);
v___f_2053_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2053_, 0, v_toSeqLeft_2042_);
v___f_2054_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2054_, 0, v_toSeq_2041_);
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 4, v___f_2052_);
lean_ctor_set(v___x_2045_, 3, v___f_2053_);
lean_ctor_set(v___x_2045_, 2, v___f_2054_);
lean_ctor_set(v___x_2045_, 1, v___f_2047_);
lean_ctor_set(v___x_2045_, 0, v___x_2051_);
v___x_2056_ = v___x_2045_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v___x_2051_);
lean_ctor_set(v_reuseFailAlloc_2098_, 1, v___f_2047_);
lean_ctor_set(v_reuseFailAlloc_2098_, 2, v___f_2054_);
lean_ctor_set(v_reuseFailAlloc_2098_, 3, v___f_2053_);
lean_ctor_set(v_reuseFailAlloc_2098_, 4, v___f_2052_);
v___x_2056_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
lean_object* v___x_2058_; 
if (v_isShared_2039_ == 0)
{
lean_ctor_set(v___x_2038_, 1, v___f_2048_);
lean_ctor_set(v___x_2038_, 0, v___x_2056_);
v___x_2058_ = v___x_2038_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v___x_2056_);
lean_ctor_set(v_reuseFailAlloc_2097_, 1, v___f_2048_);
v___x_2058_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
lean_object* v___x_2059_; lean_object* v_toApplicative_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2095_; 
v___x_2059_ = l_StateRefT_x27_instMonad___redArg(v___x_2058_);
v_toApplicative_2060_ = lean_ctor_get(v___x_2059_, 0);
v_isSharedCheck_2095_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2095_ == 0)
{
lean_object* v_unused_2096_; 
v_unused_2096_ = lean_ctor_get(v___x_2059_, 1);
lean_dec(v_unused_2096_);
v___x_2062_ = v___x_2059_;
v_isShared_2063_ = v_isSharedCheck_2095_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_toApplicative_2060_);
lean_dec(v___x_2059_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2095_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v_toFunctor_2064_; lean_object* v_toSeq_2065_; lean_object* v_toSeqLeft_2066_; lean_object* v_toSeqRight_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2093_; 
v_toFunctor_2064_ = lean_ctor_get(v_toApplicative_2060_, 0);
v_toSeq_2065_ = lean_ctor_get(v_toApplicative_2060_, 2);
v_toSeqLeft_2066_ = lean_ctor_get(v_toApplicative_2060_, 3);
v_toSeqRight_2067_ = lean_ctor_get(v_toApplicative_2060_, 4);
v_isSharedCheck_2093_ = !lean_is_exclusive(v_toApplicative_2060_);
if (v_isSharedCheck_2093_ == 0)
{
lean_object* v_unused_2094_; 
v_unused_2094_ = lean_ctor_get(v_toApplicative_2060_, 1);
lean_dec(v_unused_2094_);
v___x_2069_ = v_toApplicative_2060_;
v_isShared_2070_ = v_isSharedCheck_2093_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_toSeqRight_2067_);
lean_inc(v_toSeqLeft_2066_);
lean_inc(v_toSeq_2065_);
lean_inc(v_toFunctor_2064_);
lean_dec(v_toApplicative_2060_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2093_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
lean_object* v___f_2071_; lean_object* v___f_2072_; lean_object* v___f_2073_; lean_object* v___f_2074_; lean_object* v___x_2075_; lean_object* v___f_2076_; lean_object* v___f_2077_; lean_object* v___f_2078_; lean_object* v___x_2080_; 
v___f_2071_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__3));
v___f_2072_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___closed__4));
lean_inc_ref(v_toFunctor_2064_);
v___f_2073_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2073_, 0, v_toFunctor_2064_);
v___f_2074_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2074_, 0, v_toFunctor_2064_);
v___x_2075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2075_, 0, v___f_2073_);
lean_ctor_set(v___x_2075_, 1, v___f_2074_);
v___f_2076_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2076_, 0, v_toSeqRight_2067_);
v___f_2077_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2077_, 0, v_toSeqLeft_2066_);
v___f_2078_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2078_, 0, v_toSeq_2065_);
if (v_isShared_2070_ == 0)
{
lean_ctor_set(v___x_2069_, 4, v___f_2076_);
lean_ctor_set(v___x_2069_, 3, v___f_2077_);
lean_ctor_set(v___x_2069_, 2, v___f_2078_);
lean_ctor_set(v___x_2069_, 1, v___f_2071_);
lean_ctor_set(v___x_2069_, 0, v___x_2075_);
v___x_2080_ = v___x_2069_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v___x_2075_);
lean_ctor_set(v_reuseFailAlloc_2092_, 1, v___f_2071_);
lean_ctor_set(v_reuseFailAlloc_2092_, 2, v___f_2078_);
lean_ctor_set(v_reuseFailAlloc_2092_, 3, v___f_2077_);
lean_ctor_set(v_reuseFailAlloc_2092_, 4, v___f_2076_);
v___x_2080_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
lean_object* v___x_2082_; 
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 1, v___f_2072_);
lean_ctor_set(v___x_2062_, 0, v___x_2080_);
v___x_2082_ = v___x_2062_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v___x_2080_);
lean_ctor_set(v_reuseFailAlloc_2091_, 1, v___f_2072_);
v___x_2082_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_62831__overap_2089_; lean_object* v___x_2090_; 
v___x_2083_ = l_StateRefT_x27_instMonad___redArg(v___x_2082_);
v___x_2084_ = l_ReaderT_instMonad___redArg(v___x_2083_);
v___x_2085_ = l_StateRefT_x27_instMonad___redArg(v___x_2084_);
v___x_2086_ = l_ReaderT_instMonad___redArg(v___x_2085_);
v___x_2087_ = lean_box(0);
v___x_2088_ = l_instInhabitedOfMonad___redArg(v___x_2086_, v___x_2087_);
v___x_62831__overap_2089_ = lean_panic_fn_borrowed(v___x_2088_, v_msg_2024_);
lean_dec(v___x_2088_);
lean_inc(v___y_2032_);
lean_inc_ref(v___y_2031_);
lean_inc(v___y_2030_);
lean_inc_ref(v___y_2029_);
lean_inc(v___y_2028_);
lean_inc_ref(v___y_2027_);
lean_inc(v___y_2026_);
lean_inc_ref(v___y_2025_);
v___x_2090_ = lean_apply_9(v___x_62831__overap_2089_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_, lean_box(0));
return v___x_2090_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4___boxed(lean_object* v_msg_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_){
_start:
{
lean_object* v_res_2113_; 
v_res_2113_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4(v_msg_2103_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
lean_dec(v___y_2107_);
lean_dec_ref(v___y_2106_);
lean_dec(v___y_2105_);
lean_dec_ref(v___y_2104_);
return v_res_2113_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__1(void){
_start:
{
lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2115_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__0));
v___x_2116_ = l_Lean_stringToMessageData(v___x_2115_);
return v___x_2116_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__5(void){
_start:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; 
v___x_2120_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__4));
v___x_2121_ = lean_unsigned_to_nat(11u);
v___x_2122_ = lean_unsigned_to_nat(122u);
v___x_2123_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__3));
v___x_2124_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__2));
v___x_2125_ = l_mkPanicMessageWithDecl(v___x_2124_, v___x_2123_, v___x_2122_, v___x_2121_, v___x_2120_);
return v___x_2125_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2(lean_object* v_constName_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_){
_start:
{
lean_object* v___x_2144_; lean_object* v_env_2145_; uint8_t v___x_2146_; lean_object* v___x_2147_; 
v___x_2144_ = lean_st_ref_get(v___y_2134_);
v_env_2145_ = lean_ctor_get(v___x_2144_, 0);
lean_inc_ref(v_env_2145_);
lean_dec(v___x_2144_);
v___x_2146_ = 0;
lean_inc(v_constName_2126_);
v___x_2147_ = l_Lean_Environment_findAsync_x3f(v_env_2145_, v_constName_2126_, v___x_2146_);
if (lean_obj_tag(v___x_2147_) == 1)
{
lean_object* v_val_2148_; uint8_t v_kind_2149_; 
v_val_2148_ = lean_ctor_get(v___x_2147_, 0);
lean_inc(v_val_2148_);
lean_dec_ref_known(v___x_2147_, 1);
v_kind_2149_ = lean_ctor_get_uint8(v_val_2148_, sizeof(void*)*3);
if (v_kind_2149_ == 6)
{
lean_object* v___x_2150_; 
v___x_2150_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_2148_);
if (lean_obj_tag(v___x_2150_) == 6)
{
lean_object* v_val_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2158_; 
lean_dec(v_constName_2126_);
v_val_2151_ = lean_ctor_get(v___x_2150_, 0);
v_isSharedCheck_2158_ = !lean_is_exclusive(v___x_2150_);
if (v_isSharedCheck_2158_ == 0)
{
v___x_2153_ = v___x_2150_;
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_val_2151_);
lean_dec(v___x_2150_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2156_; 
if (v_isShared_2154_ == 0)
{
lean_ctor_set_tag(v___x_2153_, 0);
v___x_2156_ = v___x_2153_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v_val_2151_);
v___x_2156_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
return v___x_2156_;
}
}
}
else
{
lean_object* v___x_2159_; lean_object* v___x_2160_; 
lean_dec_ref(v___x_2150_);
v___x_2159_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__5, &l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__5_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__5);
v___x_2160_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2_spec__4(v___x_2159_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
if (lean_obj_tag(v___x_2160_) == 0)
{
lean_object* v_a_2161_; lean_object* v___x_2163_; uint8_t v_isShared_2164_; uint8_t v_isSharedCheck_2169_; 
v_a_2161_ = lean_ctor_get(v___x_2160_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2160_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2163_ = v___x_2160_;
v_isShared_2164_ = v_isSharedCheck_2169_;
goto v_resetjp_2162_;
}
else
{
lean_inc(v_a_2161_);
lean_dec(v___x_2160_);
v___x_2163_ = lean_box(0);
v_isShared_2164_ = v_isSharedCheck_2169_;
goto v_resetjp_2162_;
}
v_resetjp_2162_:
{
if (lean_obj_tag(v_a_2161_) == 0)
{
lean_del_object(v___x_2163_);
goto v___jp_2136_;
}
else
{
lean_object* v_val_2165_; lean_object* v___x_2167_; 
lean_dec(v_constName_2126_);
v_val_2165_ = lean_ctor_get(v_a_2161_, 0);
lean_inc(v_val_2165_);
lean_dec_ref_known(v_a_2161_, 1);
if (v_isShared_2164_ == 0)
{
lean_ctor_set(v___x_2163_, 0, v_val_2165_);
v___x_2167_ = v___x_2163_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_val_2165_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
}
else
{
lean_object* v_a_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2177_; 
lean_dec(v_constName_2126_);
v_a_2170_ = lean_ctor_get(v___x_2160_, 0);
v_isSharedCheck_2177_ = !lean_is_exclusive(v___x_2160_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2172_ = v___x_2160_;
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_a_2170_);
lean_dec(v___x_2160_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2175_; 
if (v_isShared_2173_ == 0)
{
v___x_2175_ = v___x_2172_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v_a_2170_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
}
}
}
else
{
lean_dec(v_val_2148_);
goto v___jp_2136_;
}
}
else
{
lean_dec(v___x_2147_);
goto v___jp_2136_;
}
v___jp_2136_:
{
lean_object* v___x_2137_; uint8_t v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; 
v___x_2137_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0___closed__1);
v___x_2138_ = 0;
v___x_2139_ = l_Lean_MessageData_ofConstName(v_constName_2126_, v___x_2138_);
v___x_2140_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2137_);
lean_ctor_set(v___x_2140_, 1, v___x_2139_);
v___x_2141_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___closed__1);
v___x_2142_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2140_);
lean_ctor_set(v___x_2142_, 1, v___x_2141_);
v___x_2143_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0_spec__0___redArg(v___x_2142_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
return v___x_2143_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2___boxed(lean_object* v_constName_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_){
_start:
{
lean_object* v_res_2188_; 
v_res_2188_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2(v_constName_2178_, v___y_2179_, v___y_2180_, v___y_2181_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_);
lean_dec(v___y_2186_);
lean_dec_ref(v___y_2185_);
lean_dec(v___y_2184_);
lean_dec_ref(v___y_2183_);
lean_dec(v___y_2182_);
lean_dec_ref(v___y_2181_);
lean_dec(v___y_2180_);
lean_dec_ref(v___y_2179_);
return v_res_2188_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__0___redArg(lean_object* v_m_2189_, lean_object* v_a_2190_){
_start:
{
lean_object* v_buckets_2191_; lean_object* v___x_2192_; uint64_t v___y_2194_; 
v_buckets_2191_ = lean_ctor_get(v_m_2189_, 1);
v___x_2192_ = lean_array_get_size(v_buckets_2191_);
if (lean_obj_tag(v_a_2190_) == 0)
{
uint64_t v___x_2208_; 
v___x_2208_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_findExtIff_x3f_spec__0___redArg___closed__0);
v___y_2194_ = v___x_2208_;
goto v___jp_2193_;
}
else
{
uint64_t v_hash_2209_; 
v_hash_2209_ = lean_ctor_get_uint64(v_a_2190_, sizeof(void*)*2);
v___y_2194_ = v_hash_2209_;
goto v___jp_2193_;
}
v___jp_2193_:
{
uint64_t v___x_2195_; uint64_t v___x_2196_; uint64_t v_fold_2197_; uint64_t v___x_2198_; uint64_t v___x_2199_; uint64_t v___x_2200_; size_t v___x_2201_; size_t v___x_2202_; size_t v___x_2203_; size_t v___x_2204_; size_t v___x_2205_; lean_object* v___x_2206_; uint8_t v___x_2207_; 
v___x_2195_ = 32ULL;
v___x_2196_ = lean_uint64_shift_right(v___y_2194_, v___x_2195_);
v_fold_2197_ = lean_uint64_xor(v___y_2194_, v___x_2196_);
v___x_2198_ = 16ULL;
v___x_2199_ = lean_uint64_shift_right(v_fold_2197_, v___x_2198_);
v___x_2200_ = lean_uint64_xor(v_fold_2197_, v___x_2199_);
v___x_2201_ = lean_uint64_to_usize(v___x_2200_);
v___x_2202_ = lean_usize_of_nat(v___x_2192_);
v___x_2203_ = ((size_t)1ULL);
v___x_2204_ = lean_usize_sub(v___x_2202_, v___x_2203_);
v___x_2205_ = lean_usize_land(v___x_2201_, v___x_2204_);
v___x_2206_ = lean_array_uget_borrowed(v_buckets_2191_, v___x_2205_);
v___x_2207_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__1_spec__2___redArg(v_a_2190_, v___x_2206_);
return v___x_2207_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__0___redArg___boxed(lean_object* v_m_2210_, lean_object* v_a_2211_){
_start:
{
uint8_t v_res_2212_; lean_object* v_r_2213_; 
v_res_2212_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__0___redArg(v_m_2210_, v_a_2211_);
lean_dec(v_a_2211_);
lean_dec_ref(v_m_2210_);
v_r_2213_ = lean_box(v_res_2212_);
return v_r_2213_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_2214_; lean_object* v_dummy_2215_; 
v___x_2214_ = lean_box(0);
v_dummy_2215_ = l_Lean_Expr_sort___override(v___x_2214_);
return v_dummy_2215_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg(lean_object* v_upperBound_2219_, lean_object* v_a_2220_, lean_object* v_fst_2221_, lean_object* v_snd_2222_, lean_object* v_fst_2223_, lean_object* v_interesting_2224_, lean_object* v_a_2225_, lean_object* v_b_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_){
_start:
{
lean_object* v_a_2234_; uint8_t v___x_2238_; 
v___x_2238_ = lean_nat_dec_lt(v_a_2225_, v_upperBound_2219_);
if (v___x_2238_ == 0)
{
lean_object* v___x_2239_; 
lean_dec(v_a_2225_);
lean_dec_ref(v_fst_2223_);
lean_dec(v_fst_2221_);
lean_dec_ref(v_a_2220_);
v___x_2239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2239_, 0, v_b_2226_);
return v___x_2239_;
}
else
{
lean_object* v___x_2240_; 
lean_inc_ref(v_fst_2223_);
lean_inc(v_a_2225_);
lean_inc(v_fst_2221_);
lean_inc_ref(v_a_2220_);
v___x_2240_ = l_Lean_Meta_mkProjFn___redArg(v_a_2220_, v_fst_2221_, v_snd_2222_, v_a_2225_, v_fst_2223_, v___y_2231_);
if (lean_obj_tag(v___x_2240_) == 0)
{
lean_object* v_a_2241_; lean_object* v___x_2242_; 
v_a_2241_ = lean_ctor_get(v___x_2240_, 0);
lean_inc(v_a_2241_);
lean_dec_ref_known(v___x_2240_, 1);
v___x_2242_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v_a_2241_, v___y_2227_);
if (lean_obj_tag(v___x_2242_) == 0)
{
lean_object* v_a_2243_; lean_object* v___x_2244_; 
v_a_2243_ = lean_ctor_get(v___x_2242_, 0);
lean_inc_n(v_a_2243_, 2);
lean_dec_ref_known(v___x_2242_, 1);
v___x_2244_ = l_Lean_Meta_Sym_inferType___redArg(v_a_2243_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_);
if (lean_obj_tag(v___x_2244_) == 0)
{
lean_object* v_a_2245_; lean_object* v___x_2246_; 
v_a_2245_ = lean_ctor_get(v___x_2244_, 0);
lean_inc(v_a_2245_);
lean_dec_ref_known(v___x_2244_, 1);
v___x_2246_ = l_Lean_Meta_Sym_unfoldReducible(v_a_2245_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_);
if (lean_obj_tag(v___x_2246_) == 0)
{
lean_object* v_a_2247_; lean_object* v___x_2248_; 
v_a_2247_ = lean_ctor_get(v___x_2246_, 0);
lean_inc(v_a_2247_);
lean_dec_ref_known(v___x_2246_, 1);
v___x_2248_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_2247_, v___y_2227_);
if (lean_obj_tag(v___x_2248_) == 0)
{
lean_object* v_a_2249_; lean_object* v___x_2250_; 
v_a_2249_ = lean_ctor_get(v___x_2248_, 0);
lean_inc_n(v_a_2249_, 2);
lean_dec_ref_known(v___x_2248_, 1);
v___x_2250_ = l_Lean_Meta_isProp(v_a_2249_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_);
if (lean_obj_tag(v___x_2250_) == 0)
{
lean_object* v_a_2251_; uint8_t v___x_2252_; 
v_a_2251_ = lean_ctor_get(v___x_2250_, 0);
lean_inc(v_a_2251_);
lean_dec_ref_known(v___x_2250_, 1);
v___x_2252_ = lean_unbox(v_a_2251_);
lean_dec(v_a_2251_);
if (v___x_2252_ == 0)
{
lean_object* v_fst_2253_; lean_object* v_snd_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2281_; 
v_fst_2253_ = lean_ctor_get(v_b_2226_, 0);
v_snd_2254_ = lean_ctor_get(v_b_2226_, 1);
v_isSharedCheck_2281_ = !lean_is_exclusive(v_b_2226_);
if (v_isSharedCheck_2281_ == 0)
{
v___x_2256_ = v_b_2226_;
v_isShared_2257_ = v_isSharedCheck_2281_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_snd_2254_);
lean_inc(v_fst_2253_);
lean_dec(v_b_2226_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2281_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v___x_2258_; 
v___x_2258_ = l_Lean_Expr_getAppFn(v_a_2249_);
if (lean_obj_tag(v___x_2258_) == 4)
{
lean_object* v_declName_2259_; lean_object* v_us_2260_; uint8_t v___x_2261_; 
v_declName_2259_ = lean_ctor_get(v___x_2258_, 0);
lean_inc(v_declName_2259_);
v_us_2260_ = lean_ctor_get(v___x_2258_, 1);
lean_inc(v_us_2260_);
lean_dec_ref_known(v___x_2258_, 2);
v___x_2261_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__0___redArg(v_interesting_2224_, v_declName_2259_);
if (v___x_2261_ == 0)
{
lean_object* v___x_2263_; 
lean_dec(v_us_2260_);
lean_dec(v_declName_2259_);
lean_dec(v_a_2249_);
lean_dec(v_a_2243_);
if (v_isShared_2257_ == 0)
{
v___x_2263_ = v___x_2256_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v_fst_2253_);
lean_ctor_set(v_reuseFailAlloc_2264_, 1, v_snd_2254_);
v___x_2263_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
v_a_2234_ = v___x_2263_;
goto v___jp_2233_;
}
}
else
{
lean_object* v_dummy_2265_; lean_object* v_nargs_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2272_; 
v_dummy_2265_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0);
v_nargs_2266_ = l_Lean_Expr_getAppNumArgs(v_a_2249_);
lean_inc(v_nargs_2266_);
v___x_2267_ = lean_mk_array(v_nargs_2266_, v_dummy_2265_);
v___x_2268_ = lean_unsigned_to_nat(1u);
v___x_2269_ = lean_nat_sub(v_nargs_2266_, v___x_2268_);
lean_dec(v_nargs_2266_);
v___x_2270_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_2249_, v___x_2267_, v___x_2269_);
if (v_isShared_2257_ == 0)
{
lean_ctor_set(v___x_2256_, 1, v___x_2270_);
lean_ctor_set(v___x_2256_, 0, v_us_2260_);
v___x_2272_ = v___x_2256_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v_us_2260_);
lean_ctor_set(v_reuseFailAlloc_2277_, 1, v___x_2270_);
v___x_2272_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2273_, 0, v_declName_2259_);
lean_ctor_set(v___x_2273_, 1, v___x_2272_);
v___x_2274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2274_, 0, v_a_2243_);
lean_ctor_set(v___x_2274_, 1, v___x_2273_);
v___x_2275_ = lean_array_push(v_fst_2253_, v___x_2274_);
v___x_2276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2275_);
lean_ctor_set(v___x_2276_, 1, v_snd_2254_);
v_a_2234_ = v___x_2276_;
goto v___jp_2233_;
}
}
}
else
{
lean_object* v___x_2279_; 
lean_dec_ref(v___x_2258_);
lean_dec(v_a_2249_);
lean_dec(v_a_2243_);
if (v_isShared_2257_ == 0)
{
v___x_2279_ = v___x_2256_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v_fst_2253_);
lean_ctor_set(v_reuseFailAlloc_2280_, 1, v_snd_2254_);
v___x_2279_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
v_a_2234_ = v___x_2279_;
goto v___jp_2233_;
}
}
}
}
else
{
lean_object* v_fst_2282_; lean_object* v_snd_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2293_; 
v_fst_2282_ = lean_ctor_get(v_b_2226_, 0);
v_snd_2283_ = lean_ctor_get(v_b_2226_, 1);
v_isSharedCheck_2293_ = !lean_is_exclusive(v_b_2226_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2285_ = v_b_2226_;
v_isShared_2286_ = v_isSharedCheck_2293_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_snd_2283_);
lean_inc(v_fst_2282_);
lean_dec(v_b_2226_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2293_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2291_; 
v___x_2287_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__2));
v___x_2288_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2288_, 0, v___x_2287_);
lean_ctor_set(v___x_2288_, 1, v_a_2249_);
lean_ctor_set(v___x_2288_, 2, v_a_2243_);
v___x_2289_ = lean_array_push(v_snd_2283_, v___x_2288_);
if (v_isShared_2286_ == 0)
{
lean_ctor_set(v___x_2285_, 1, v___x_2289_);
v___x_2291_ = v___x_2285_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_fst_2282_);
lean_ctor_set(v_reuseFailAlloc_2292_, 1, v___x_2289_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
v_a_2234_ = v___x_2291_;
goto v___jp_2233_;
}
}
}
}
else
{
lean_object* v_a_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2301_; 
lean_dec(v_a_2249_);
lean_dec(v_a_2243_);
lean_dec_ref(v_b_2226_);
lean_dec(v_a_2225_);
lean_dec_ref(v_fst_2223_);
lean_dec(v_fst_2221_);
lean_dec_ref(v_a_2220_);
v_a_2294_ = lean_ctor_get(v___x_2250_, 0);
v_isSharedCheck_2301_ = !lean_is_exclusive(v___x_2250_);
if (v_isSharedCheck_2301_ == 0)
{
v___x_2296_ = v___x_2250_;
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_a_2294_);
lean_dec(v___x_2250_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
lean_object* v___x_2299_; 
if (v_isShared_2297_ == 0)
{
v___x_2299_ = v___x_2296_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2300_; 
v_reuseFailAlloc_2300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2300_, 0, v_a_2294_);
v___x_2299_ = v_reuseFailAlloc_2300_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
return v___x_2299_;
}
}
}
}
else
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2309_; 
lean_dec(v_a_2243_);
lean_dec_ref(v_b_2226_);
lean_dec(v_a_2225_);
lean_dec_ref(v_fst_2223_);
lean_dec(v_fst_2221_);
lean_dec_ref(v_a_2220_);
v_a_2302_ = lean_ctor_get(v___x_2248_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2248_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2304_ = v___x_2248_;
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v___x_2248_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2307_; 
if (v_isShared_2305_ == 0)
{
v___x_2307_ = v___x_2304_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v_a_2302_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
}
else
{
lean_object* v_a_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2317_; 
lean_dec(v_a_2243_);
lean_dec_ref(v_b_2226_);
lean_dec(v_a_2225_);
lean_dec_ref(v_fst_2223_);
lean_dec(v_fst_2221_);
lean_dec_ref(v_a_2220_);
v_a_2310_ = lean_ctor_get(v___x_2246_, 0);
v_isSharedCheck_2317_ = !lean_is_exclusive(v___x_2246_);
if (v_isSharedCheck_2317_ == 0)
{
v___x_2312_ = v___x_2246_;
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_a_2310_);
lean_dec(v___x_2246_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v___x_2315_; 
if (v_isShared_2313_ == 0)
{
v___x_2315_ = v___x_2312_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v_a_2310_);
v___x_2315_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
return v___x_2315_;
}
}
}
}
else
{
lean_object* v_a_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2325_; 
lean_dec(v_a_2243_);
lean_dec_ref(v_b_2226_);
lean_dec(v_a_2225_);
lean_dec_ref(v_fst_2223_);
lean_dec(v_fst_2221_);
lean_dec_ref(v_a_2220_);
v_a_2318_ = lean_ctor_get(v___x_2244_, 0);
v_isSharedCheck_2325_ = !lean_is_exclusive(v___x_2244_);
if (v_isSharedCheck_2325_ == 0)
{
v___x_2320_ = v___x_2244_;
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_a_2318_);
lean_dec(v___x_2244_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
lean_object* v___x_2323_; 
if (v_isShared_2321_ == 0)
{
v___x_2323_ = v___x_2320_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v_a_2318_);
v___x_2323_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
return v___x_2323_;
}
}
}
}
else
{
lean_object* v_a_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2333_; 
lean_dec_ref(v_b_2226_);
lean_dec(v_a_2225_);
lean_dec_ref(v_fst_2223_);
lean_dec(v_fst_2221_);
lean_dec_ref(v_a_2220_);
v_a_2326_ = lean_ctor_get(v___x_2242_, 0);
v_isSharedCheck_2333_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2333_ == 0)
{
v___x_2328_ = v___x_2242_;
v_isShared_2329_ = v_isSharedCheck_2333_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_a_2326_);
lean_dec(v___x_2242_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2333_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v___x_2331_; 
if (v_isShared_2329_ == 0)
{
v___x_2331_ = v___x_2328_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v_a_2326_);
v___x_2331_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
return v___x_2331_;
}
}
}
}
else
{
lean_object* v_a_2334_; lean_object* v___x_2336_; uint8_t v_isShared_2337_; uint8_t v_isSharedCheck_2341_; 
lean_dec_ref(v_b_2226_);
lean_dec(v_a_2225_);
lean_dec_ref(v_fst_2223_);
lean_dec(v_fst_2221_);
lean_dec_ref(v_a_2220_);
v_a_2334_ = lean_ctor_get(v___x_2240_, 0);
v_isSharedCheck_2341_ = !lean_is_exclusive(v___x_2240_);
if (v_isSharedCheck_2341_ == 0)
{
v___x_2336_ = v___x_2240_;
v_isShared_2337_ = v_isSharedCheck_2341_;
goto v_resetjp_2335_;
}
else
{
lean_inc(v_a_2334_);
lean_dec(v___x_2240_);
v___x_2336_ = lean_box(0);
v_isShared_2337_ = v_isSharedCheck_2341_;
goto v_resetjp_2335_;
}
v_resetjp_2335_:
{
lean_object* v___x_2339_; 
if (v_isShared_2337_ == 0)
{
v___x_2339_ = v___x_2336_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2340_; 
v_reuseFailAlloc_2340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2340_, 0, v_a_2334_);
v___x_2339_ = v_reuseFailAlloc_2340_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
return v___x_2339_;
}
}
}
}
v___jp_2233_:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2235_ = lean_unsigned_to_nat(1u);
v___x_2236_ = lean_nat_add(v_a_2225_, v___x_2235_);
lean_dec(v_a_2225_);
v_a_2225_ = v___x_2236_;
v_b_2226_ = v_a_2234_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___boxed(lean_object* v_upperBound_2342_, lean_object* v_a_2343_, lean_object* v_fst_2344_, lean_object* v_snd_2345_, lean_object* v_fst_2346_, lean_object* v_interesting_2347_, lean_object* v_a_2348_, lean_object* v_b_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_){
_start:
{
lean_object* v_res_2356_; 
v_res_2356_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg(v_upperBound_2342_, v_a_2343_, v_fst_2344_, v_snd_2345_, v_fst_2346_, v_interesting_2347_, v_a_2348_, v_b_2349_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_, v___y_2354_);
lean_dec(v___y_2354_);
lean_dec_ref(v___y_2353_);
lean_dec(v___y_2352_);
lean_dec_ref(v___y_2351_);
lean_dec(v___y_2350_);
lean_dec_ref(v_interesting_2347_);
lean_dec_ref(v_snd_2345_);
lean_dec(v_upperBound_2342_);
return v_res_2356_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__4___redArg(lean_object* v___x_2357_, lean_object* v_interesting_2358_, lean_object* v_a_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_){
_start:
{
lean_object* v_fst_2369_; lean_object* v_snd_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2436_; 
v_fst_2369_ = lean_ctor_get(v_a_2359_, 0);
v_snd_2370_ = lean_ctor_get(v_a_2359_, 1);
v_isSharedCheck_2436_ = !lean_is_exclusive(v_a_2359_);
if (v_isSharedCheck_2436_ == 0)
{
v___x_2372_ = v_a_2359_;
v_isShared_2373_ = v_isSharedCheck_2436_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_snd_2370_);
lean_inc(v_fst_2369_);
lean_dec(v_a_2359_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2436_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2374_; lean_object* v___x_2375_; uint8_t v___x_2376_; 
v___x_2374_ = lean_unsigned_to_nat(0u);
v___x_2375_ = lean_array_get_size(v_fst_2369_);
v___x_2376_ = lean_nat_dec_lt(v___x_2374_, v___x_2375_);
if (v___x_2376_ == 0)
{
lean_object* v___x_2378_; 
lean_dec_ref(v___x_2357_);
if (v_isShared_2373_ == 0)
{
v___x_2378_ = v___x_2372_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v_fst_2369_);
lean_ctor_set(v_reuseFailAlloc_2380_, 1, v_snd_2370_);
v___x_2378_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
lean_object* v___x_2379_; 
v___x_2379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2379_, 0, v___x_2378_);
return v___x_2379_;
}
}
else
{
lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v_snd_2384_; lean_object* v_snd_2385_; lean_object* v_fst_2386_; lean_object* v_fst_2387_; lean_object* v_fst_2388_; lean_object* v_snd_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2435_; 
lean_del_object(v___x_2372_);
v___x_2381_ = lean_unsigned_to_nat(1u);
v___x_2382_ = lean_nat_sub(v___x_2375_, v___x_2381_);
v___x_2383_ = lean_array_fget_borrowed(v_fst_2369_, v___x_2382_);
lean_dec(v___x_2382_);
v_snd_2384_ = lean_ctor_get(v___x_2383_, 1);
v_snd_2385_ = lean_ctor_get(v_snd_2384_, 1);
lean_inc(v_snd_2385_);
v_fst_2386_ = lean_ctor_get(v___x_2383_, 0);
lean_inc(v_fst_2386_);
v_fst_2387_ = lean_ctor_get(v_snd_2384_, 0);
v_fst_2388_ = lean_ctor_get(v_snd_2385_, 0);
v_snd_2389_ = lean_ctor_get(v_snd_2385_, 1);
v_isSharedCheck_2435_ = !lean_is_exclusive(v_snd_2385_);
if (v_isSharedCheck_2435_ == 0)
{
v___x_2391_ = v_snd_2385_;
v_isShared_2392_ = v_isSharedCheck_2435_;
goto v_resetjp_2390_;
}
else
{
lean_inc(v_snd_2389_);
lean_inc(v_fst_2388_);
lean_dec(v_snd_2385_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2435_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; 
lean_inc_n(v_fst_2387_, 2);
lean_inc_ref(v___x_2357_);
v___x_2393_ = l_Lean_getStructureInfo(v___x_2357_, v_fst_2387_);
v___x_2394_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__0(v_fst_2387_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_);
if (lean_obj_tag(v___x_2394_) == 0)
{
lean_object* v_a_2395_; lean_object* v_ctors_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; 
v_a_2395_ = lean_ctor_get(v___x_2394_, 0);
lean_inc(v_a_2395_);
lean_dec_ref_known(v___x_2394_, 1);
v_ctors_2396_ = lean_ctor_get(v_a_2395_, 4);
lean_inc(v_ctors_2396_);
lean_dec(v_a_2395_);
v___x_2397_ = lean_box(0);
v___x_2398_ = l_List_head_x21___redArg(v___x_2397_, v_ctors_2396_);
lean_dec(v_ctors_2396_);
v___x_2399_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__2(v___x_2398_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_);
if (lean_obj_tag(v___x_2399_) == 0)
{
lean_object* v_a_2400_; lean_object* v_fieldNames_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2405_; 
v_a_2400_ = lean_ctor_get(v___x_2399_, 0);
lean_inc(v_a_2400_);
lean_dec_ref_known(v___x_2399_, 1);
v_fieldNames_2401_ = lean_ctor_get(v___x_2393_, 1);
lean_inc_ref(v_fieldNames_2401_);
lean_dec_ref(v___x_2393_);
v___x_2402_ = lean_array_get_size(v_fieldNames_2401_);
lean_dec_ref(v_fieldNames_2401_);
v___x_2403_ = lean_array_pop(v_fst_2369_);
if (v_isShared_2392_ == 0)
{
lean_ctor_set(v___x_2391_, 1, v_snd_2370_);
lean_ctor_set(v___x_2391_, 0, v___x_2403_);
v___x_2405_ = v___x_2391_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v___x_2403_);
lean_ctor_set(v_reuseFailAlloc_2418_, 1, v_snd_2370_);
v___x_2405_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
lean_object* v___x_2406_; 
v___x_2406_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg(v___x_2402_, v_a_2400_, v_fst_2388_, v_snd_2389_, v_fst_2386_, v_interesting_2358_, v___x_2374_, v___x_2405_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_);
lean_dec(v_snd_2389_);
if (lean_obj_tag(v___x_2406_) == 0)
{
lean_object* v_a_2407_; lean_object* v_fst_2408_; lean_object* v_snd_2409_; lean_object* v___x_2411_; uint8_t v_isShared_2412_; uint8_t v_isSharedCheck_2417_; 
v_a_2407_ = lean_ctor_get(v___x_2406_, 0);
lean_inc(v_a_2407_);
lean_dec_ref_known(v___x_2406_, 1);
v_fst_2408_ = lean_ctor_get(v_a_2407_, 0);
v_snd_2409_ = lean_ctor_get(v_a_2407_, 1);
v_isSharedCheck_2417_ = !lean_is_exclusive(v_a_2407_);
if (v_isSharedCheck_2417_ == 0)
{
v___x_2411_ = v_a_2407_;
v_isShared_2412_ = v_isSharedCheck_2417_;
goto v_resetjp_2410_;
}
else
{
lean_inc(v_snd_2409_);
lean_inc(v_fst_2408_);
lean_dec(v_a_2407_);
v___x_2411_ = lean_box(0);
v_isShared_2412_ = v_isSharedCheck_2417_;
goto v_resetjp_2410_;
}
v_resetjp_2410_:
{
lean_object* v___x_2414_; 
if (v_isShared_2412_ == 0)
{
v___x_2414_ = v___x_2411_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v_fst_2408_);
lean_ctor_set(v_reuseFailAlloc_2416_, 1, v_snd_2409_);
v___x_2414_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
v_a_2359_ = v___x_2414_;
goto _start;
}
}
}
else
{
lean_dec_ref(v___x_2357_);
return v___x_2406_;
}
}
}
else
{
lean_object* v_a_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2426_; 
lean_dec_ref(v___x_2393_);
lean_del_object(v___x_2391_);
lean_dec(v_snd_2389_);
lean_dec(v_fst_2388_);
lean_dec(v_fst_2386_);
lean_dec(v_snd_2370_);
lean_dec(v_fst_2369_);
lean_dec_ref(v___x_2357_);
v_a_2419_ = lean_ctor_get(v___x_2399_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v___x_2399_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2421_ = v___x_2399_;
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_a_2419_);
lean_dec(v___x_2399_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___x_2424_; 
if (v_isShared_2422_ == 0)
{
v___x_2424_ = v___x_2421_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v_a_2419_);
v___x_2424_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
return v___x_2424_;
}
}
}
}
else
{
lean_object* v_a_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2434_; 
lean_dec_ref(v___x_2393_);
lean_del_object(v___x_2391_);
lean_dec(v_snd_2389_);
lean_dec(v_fst_2388_);
lean_dec(v_fst_2386_);
lean_dec(v_snd_2370_);
lean_dec(v_fst_2369_);
lean_dec_ref(v___x_2357_);
v_a_2427_ = lean_ctor_get(v___x_2394_, 0);
v_isSharedCheck_2434_ = !lean_is_exclusive(v___x_2394_);
if (v_isSharedCheck_2434_ == 0)
{
v___x_2429_ = v___x_2394_;
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
else
{
lean_inc(v_a_2427_);
lean_dec(v___x_2394_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
lean_object* v___x_2432_; 
if (v_isShared_2430_ == 0)
{
v___x_2432_ = v___x_2429_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v_a_2427_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__4___redArg___boxed(lean_object* v___x_2437_, lean_object* v_interesting_2438_, lean_object* v_a_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_){
_start:
{
lean_object* v_res_2449_; 
v_res_2449_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__4___redArg(v___x_2437_, v_interesting_2438_, v_a_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_);
lean_dec(v___y_2447_);
lean_dec_ref(v___y_2446_);
lean_dec(v___y_2445_);
lean_dec_ref(v___y_2444_);
lean_dec(v___y_2443_);
lean_dec_ref(v___y_2442_);
lean_dec(v___y_2441_);
lean_dec_ref(v___y_2440_);
lean_dec_ref(v_interesting_2438_);
return v_res_2449_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2_spec__5___redArg(lean_object* v___x_2450_, lean_object* v_interesting_2451_, lean_object* v_as_2452_, size_t v_sz_2453_, size_t v_i_2454_, lean_object* v_b_2455_, lean_object* v___y_2456_){
_start:
{
uint8_t v___x_2458_; 
v___x_2458_ = lean_usize_dec_lt(v_i_2454_, v_sz_2453_);
if (v___x_2458_ == 0)
{
lean_object* v___x_2459_; 
v___x_2459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2459_, 0, v_b_2455_);
return v___x_2459_;
}
else
{
lean_object* v_snd_2460_; lean_object* v___x_2462_; uint8_t v_isShared_2463_; uint8_t v_isSharedCheck_2506_; 
v_snd_2460_ = lean_ctor_get(v_b_2455_, 1);
v_isSharedCheck_2506_ = !lean_is_exclusive(v_b_2455_);
if (v_isSharedCheck_2506_ == 0)
{
lean_object* v_unused_2507_; 
v_unused_2507_ = lean_ctor_get(v_b_2455_, 0);
lean_dec(v_unused_2507_);
v___x_2462_ = v_b_2455_;
v_isShared_2463_ = v_isSharedCheck_2506_;
goto v_resetjp_2461_;
}
else
{
lean_inc(v_snd_2460_);
lean_dec(v_b_2455_);
v___x_2462_ = lean_box(0);
v_isShared_2463_ = v_isSharedCheck_2506_;
goto v_resetjp_2461_;
}
v_resetjp_2461_:
{
lean_object* v___x_2464_; lean_object* v_a_2466_; lean_object* v_a_2473_; 
v___x_2464_ = lean_box(0);
v_a_2473_ = lean_array_uget_borrowed(v_as_2452_, v_i_2454_);
if (lean_obj_tag(v_a_2473_) == 0)
{
v_a_2466_ = v_snd_2460_;
goto v___jp_2465_;
}
else
{
lean_object* v_val_2474_; lean_object* v___x_2475_; uint8_t v___x_2476_; uint8_t v___x_2477_; 
v_val_2474_ = lean_ctor_get(v_a_2473_, 0);
v___x_2475_ = lean_unsigned_to_nat(0u);
v___x_2476_ = lean_nat_dec_eq(v___x_2450_, v___x_2475_);
v___x_2477_ = l_Lean_LocalDecl_isLet(v_val_2474_, v___x_2476_);
if (v___x_2477_ == 0)
{
uint8_t v___x_2478_; 
v___x_2478_ = l_Lean_LocalDecl_isImplementationDetail(v_val_2474_);
if (v___x_2478_ == 0)
{
lean_object* v___x_2479_; lean_object* v___x_2480_; 
v___x_2479_ = l_Lean_LocalDecl_type(v_val_2474_);
v___x_2480_ = l_Lean_Expr_getAppFn(v___x_2479_);
if (lean_obj_tag(v___x_2480_) == 4)
{
lean_object* v_declName_2481_; lean_object* v_us_2482_; uint8_t v___x_2483_; 
v_declName_2481_ = lean_ctor_get(v___x_2480_, 0);
lean_inc(v_declName_2481_);
v_us_2482_ = lean_ctor_get(v___x_2480_, 1);
lean_inc(v_us_2482_);
lean_dec_ref_known(v___x_2480_, 2);
v___x_2483_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__0___redArg(v_interesting_2451_, v_declName_2481_);
if (v___x_2483_ == 0)
{
lean_dec(v_us_2482_);
lean_dec(v_declName_2481_);
lean_dec_ref(v___x_2479_);
v_a_2466_ = v_snd_2460_;
goto v___jp_2465_;
}
else
{
lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; 
v___x_2484_ = l_Lean_LocalDecl_fvarId(v_val_2474_);
v___x_2485_ = l_Lean_mkFVar(v___x_2484_);
v___x_2486_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_2485_, v___y_2456_);
if (lean_obj_tag(v___x_2486_) == 0)
{
lean_object* v_a_2487_; lean_object* v_dummy_2488_; lean_object* v_nargs_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; 
v_a_2487_ = lean_ctor_get(v___x_2486_, 0);
lean_inc(v_a_2487_);
lean_dec_ref_known(v___x_2486_, 1);
v_dummy_2488_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0);
v_nargs_2489_ = l_Lean_Expr_getAppNumArgs(v___x_2479_);
lean_inc(v_nargs_2489_);
v___x_2490_ = lean_mk_array(v_nargs_2489_, v_dummy_2488_);
v___x_2491_ = lean_unsigned_to_nat(1u);
v___x_2492_ = lean_nat_sub(v_nargs_2489_, v___x_2491_);
lean_dec(v_nargs_2489_);
v___x_2493_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_2479_, v___x_2490_, v___x_2492_);
v___x_2494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2494_, 0, v_us_2482_);
lean_ctor_set(v___x_2494_, 1, v___x_2493_);
v___x_2495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2495_, 0, v_declName_2481_);
lean_ctor_set(v___x_2495_, 1, v___x_2494_);
v___x_2496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2496_, 0, v_a_2487_);
lean_ctor_set(v___x_2496_, 1, v___x_2495_);
v___x_2497_ = lean_array_push(v_snd_2460_, v___x_2496_);
v_a_2466_ = v___x_2497_;
goto v___jp_2465_;
}
else
{
lean_object* v_a_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2505_; 
lean_dec(v_us_2482_);
lean_dec(v_declName_2481_);
lean_dec_ref(v___x_2479_);
lean_del_object(v___x_2462_);
lean_dec(v_snd_2460_);
v_a_2498_ = lean_ctor_get(v___x_2486_, 0);
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2486_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2500_ = v___x_2486_;
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_a_2498_);
lean_dec(v___x_2486_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v___x_2503_; 
if (v_isShared_2501_ == 0)
{
v___x_2503_ = v___x_2500_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_a_2498_);
v___x_2503_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2502_;
}
v_reusejp_2502_:
{
return v___x_2503_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_2480_);
lean_dec_ref(v___x_2479_);
v_a_2466_ = v_snd_2460_;
goto v___jp_2465_;
}
}
else
{
v_a_2466_ = v_snd_2460_;
goto v___jp_2465_;
}
}
else
{
v_a_2466_ = v_snd_2460_;
goto v___jp_2465_;
}
}
v___jp_2465_:
{
lean_object* v___x_2468_; 
if (v_isShared_2463_ == 0)
{
lean_ctor_set(v___x_2462_, 1, v_a_2466_);
lean_ctor_set(v___x_2462_, 0, v___x_2464_);
v___x_2468_ = v___x_2462_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v___x_2464_);
lean_ctor_set(v_reuseFailAlloc_2472_, 1, v_a_2466_);
v___x_2468_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
size_t v___x_2469_; size_t v___x_2470_; 
v___x_2469_ = ((size_t)1ULL);
v___x_2470_ = lean_usize_add(v_i_2454_, v___x_2469_);
v_i_2454_ = v___x_2470_;
v_b_2455_ = v___x_2468_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v___x_2508_, lean_object* v_interesting_2509_, lean_object* v_as_2510_, lean_object* v_sz_2511_, lean_object* v_i_2512_, lean_object* v_b_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
size_t v_sz_boxed_2516_; size_t v_i_boxed_2517_; lean_object* v_res_2518_; 
v_sz_boxed_2516_ = lean_unbox_usize(v_sz_2511_);
lean_dec(v_sz_2511_);
v_i_boxed_2517_ = lean_unbox_usize(v_i_2512_);
lean_dec(v_i_2512_);
v_res_2518_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2_spec__5___redArg(v___x_2508_, v_interesting_2509_, v_as_2510_, v_sz_boxed_2516_, v_i_boxed_2517_, v_b_2513_, v___y_2514_);
lean_dec(v___y_2514_);
lean_dec_ref(v_as_2510_);
lean_dec_ref(v_interesting_2509_);
lean_dec(v___x_2508_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2(lean_object* v___x_2519_, lean_object* v_interesting_2520_, lean_object* v_as_2521_, size_t v_sz_2522_, size_t v_i_2523_, lean_object* v_b_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_){
_start:
{
uint8_t v___x_2534_; 
v___x_2534_ = lean_usize_dec_lt(v_i_2523_, v_sz_2522_);
if (v___x_2534_ == 0)
{
lean_object* v___x_2535_; 
v___x_2535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2535_, 0, v_b_2524_);
return v___x_2535_;
}
else
{
lean_object* v_snd_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2582_; 
v_snd_2536_ = lean_ctor_get(v_b_2524_, 1);
v_isSharedCheck_2582_ = !lean_is_exclusive(v_b_2524_);
if (v_isSharedCheck_2582_ == 0)
{
lean_object* v_unused_2583_; 
v_unused_2583_ = lean_ctor_get(v_b_2524_, 0);
lean_dec(v_unused_2583_);
v___x_2538_ = v_b_2524_;
v_isShared_2539_ = v_isSharedCheck_2582_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_snd_2536_);
lean_dec(v_b_2524_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2582_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
lean_object* v___x_2540_; lean_object* v_a_2542_; lean_object* v_a_2549_; 
v___x_2540_ = lean_box(0);
v_a_2549_ = lean_array_uget_borrowed(v_as_2521_, v_i_2523_);
if (lean_obj_tag(v_a_2549_) == 0)
{
v_a_2542_ = v_snd_2536_;
goto v___jp_2541_;
}
else
{
lean_object* v_val_2550_; lean_object* v___x_2551_; uint8_t v___x_2552_; uint8_t v___x_2553_; 
v_val_2550_ = lean_ctor_get(v_a_2549_, 0);
v___x_2551_ = lean_unsigned_to_nat(0u);
v___x_2552_ = lean_nat_dec_eq(v___x_2519_, v___x_2551_);
v___x_2553_ = l_Lean_LocalDecl_isLet(v_val_2550_, v___x_2552_);
if (v___x_2553_ == 0)
{
uint8_t v___x_2554_; 
v___x_2554_ = l_Lean_LocalDecl_isImplementationDetail(v_val_2550_);
if (v___x_2554_ == 0)
{
lean_object* v___x_2555_; lean_object* v___x_2556_; 
v___x_2555_ = l_Lean_LocalDecl_type(v_val_2550_);
v___x_2556_ = l_Lean_Expr_getAppFn(v___x_2555_);
if (lean_obj_tag(v___x_2556_) == 4)
{
lean_object* v_declName_2557_; lean_object* v_us_2558_; uint8_t v___x_2559_; 
v_declName_2557_ = lean_ctor_get(v___x_2556_, 0);
lean_inc(v_declName_2557_);
v_us_2558_ = lean_ctor_get(v___x_2556_, 1);
lean_inc(v_us_2558_);
lean_dec_ref_known(v___x_2556_, 2);
v___x_2559_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__0___redArg(v_interesting_2520_, v_declName_2557_);
if (v___x_2559_ == 0)
{
lean_dec(v_us_2558_);
lean_dec(v_declName_2557_);
lean_dec_ref(v___x_2555_);
v_a_2542_ = v_snd_2536_;
goto v___jp_2541_;
}
else
{
lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; 
v___x_2560_ = l_Lean_LocalDecl_fvarId(v_val_2550_);
v___x_2561_ = l_Lean_mkFVar(v___x_2560_);
v___x_2562_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_2561_, v___y_2528_);
if (lean_obj_tag(v___x_2562_) == 0)
{
lean_object* v_a_2563_; lean_object* v_dummy_2564_; lean_object* v_nargs_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
v_a_2563_ = lean_ctor_get(v___x_2562_, 0);
lean_inc(v_a_2563_);
lean_dec_ref_known(v___x_2562_, 1);
v_dummy_2564_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0);
v_nargs_2565_ = l_Lean_Expr_getAppNumArgs(v___x_2555_);
lean_inc(v_nargs_2565_);
v___x_2566_ = lean_mk_array(v_nargs_2565_, v_dummy_2564_);
v___x_2567_ = lean_unsigned_to_nat(1u);
v___x_2568_ = lean_nat_sub(v_nargs_2565_, v___x_2567_);
lean_dec(v_nargs_2565_);
v___x_2569_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_2555_, v___x_2566_, v___x_2568_);
v___x_2570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2570_, 0, v_us_2558_);
lean_ctor_set(v___x_2570_, 1, v___x_2569_);
v___x_2571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2571_, 0, v_declName_2557_);
lean_ctor_set(v___x_2571_, 1, v___x_2570_);
v___x_2572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2572_, 0, v_a_2563_);
lean_ctor_set(v___x_2572_, 1, v___x_2571_);
v___x_2573_ = lean_array_push(v_snd_2536_, v___x_2572_);
v_a_2542_ = v___x_2573_;
goto v___jp_2541_;
}
else
{
lean_object* v_a_2574_; lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2581_; 
lean_dec(v_us_2558_);
lean_dec(v_declName_2557_);
lean_dec_ref(v___x_2555_);
lean_del_object(v___x_2538_);
lean_dec(v_snd_2536_);
v_a_2574_ = lean_ctor_get(v___x_2562_, 0);
v_isSharedCheck_2581_ = !lean_is_exclusive(v___x_2562_);
if (v_isSharedCheck_2581_ == 0)
{
v___x_2576_ = v___x_2562_;
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
else
{
lean_inc(v_a_2574_);
lean_dec(v___x_2562_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___x_2579_; 
if (v_isShared_2577_ == 0)
{
v___x_2579_ = v___x_2576_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v_a_2574_);
v___x_2579_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
return v___x_2579_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_2556_);
lean_dec_ref(v___x_2555_);
v_a_2542_ = v_snd_2536_;
goto v___jp_2541_;
}
}
else
{
v_a_2542_ = v_snd_2536_;
goto v___jp_2541_;
}
}
else
{
v_a_2542_ = v_snd_2536_;
goto v___jp_2541_;
}
}
v___jp_2541_:
{
lean_object* v___x_2544_; 
if (v_isShared_2539_ == 0)
{
lean_ctor_set(v___x_2538_, 1, v_a_2542_);
lean_ctor_set(v___x_2538_, 0, v___x_2540_);
v___x_2544_ = v___x_2538_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v___x_2540_);
lean_ctor_set(v_reuseFailAlloc_2548_, 1, v_a_2542_);
v___x_2544_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2543_;
}
v_reusejp_2543_:
{
size_t v___x_2545_; size_t v___x_2546_; lean_object* v___x_2547_; 
v___x_2545_ = ((size_t)1ULL);
v___x_2546_ = lean_usize_add(v_i_2523_, v___x_2545_);
v___x_2547_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2_spec__5___redArg(v___x_2519_, v_interesting_2520_, v_as_2521_, v_sz_2522_, v___x_2546_, v___x_2544_, v___y_2528_);
return v___x_2547_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2___boxed(lean_object* v___x_2584_, lean_object* v_interesting_2585_, lean_object* v_as_2586_, lean_object* v_sz_2587_, lean_object* v_i_2588_, lean_object* v_b_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_){
_start:
{
size_t v_sz_boxed_2599_; size_t v_i_boxed_2600_; lean_object* v_res_2601_; 
v_sz_boxed_2599_ = lean_unbox_usize(v_sz_2587_);
lean_dec(v_sz_2587_);
v_i_boxed_2600_ = lean_unbox_usize(v_i_2588_);
lean_dec(v_i_2588_);
v_res_2601_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2(v___x_2584_, v_interesting_2585_, v_as_2586_, v_sz_boxed_2599_, v_i_boxed_2600_, v_b_2589_, v___y_2590_, v___y_2591_, v___y_2592_, v___y_2593_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_);
lean_dec(v___y_2597_);
lean_dec_ref(v___y_2596_);
lean_dec(v___y_2595_);
lean_dec_ref(v___y_2594_);
lean_dec(v___y_2593_);
lean_dec_ref(v___y_2592_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec_ref(v_as_2586_);
lean_dec_ref(v_interesting_2585_);
lean_dec(v___x_2584_);
return v_res_2601_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3_spec__9___redArg(lean_object* v___x_2602_, lean_object* v_interesting_2603_, lean_object* v_as_2604_, size_t v_sz_2605_, size_t v_i_2606_, lean_object* v_b_2607_, lean_object* v___y_2608_){
_start:
{
uint8_t v___x_2610_; 
v___x_2610_ = lean_usize_dec_lt(v_i_2606_, v_sz_2605_);
if (v___x_2610_ == 0)
{
lean_object* v___x_2611_; 
v___x_2611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2611_, 0, v_b_2607_);
return v___x_2611_;
}
else
{
lean_object* v_snd_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2658_; 
v_snd_2612_ = lean_ctor_get(v_b_2607_, 1);
v_isSharedCheck_2658_ = !lean_is_exclusive(v_b_2607_);
if (v_isSharedCheck_2658_ == 0)
{
lean_object* v_unused_2659_; 
v_unused_2659_ = lean_ctor_get(v_b_2607_, 0);
lean_dec(v_unused_2659_);
v___x_2614_ = v_b_2607_;
v_isShared_2615_ = v_isSharedCheck_2658_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_snd_2612_);
lean_dec(v_b_2607_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2658_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2616_; lean_object* v_a_2618_; lean_object* v_a_2625_; 
v___x_2616_ = lean_box(0);
v_a_2625_ = lean_array_uget_borrowed(v_as_2604_, v_i_2606_);
if (lean_obj_tag(v_a_2625_) == 0)
{
v_a_2618_ = v_snd_2612_;
goto v___jp_2617_;
}
else
{
lean_object* v_val_2626_; lean_object* v___x_2627_; uint8_t v___x_2628_; uint8_t v___x_2629_; 
v_val_2626_ = lean_ctor_get(v_a_2625_, 0);
v___x_2627_ = lean_unsigned_to_nat(0u);
v___x_2628_ = lean_nat_dec_eq(v___x_2602_, v___x_2627_);
v___x_2629_ = l_Lean_LocalDecl_isLet(v_val_2626_, v___x_2628_);
if (v___x_2629_ == 0)
{
uint8_t v___x_2630_; 
v___x_2630_ = l_Lean_LocalDecl_isImplementationDetail(v_val_2626_);
if (v___x_2630_ == 0)
{
lean_object* v___x_2631_; lean_object* v___x_2632_; 
v___x_2631_ = l_Lean_LocalDecl_type(v_val_2626_);
v___x_2632_ = l_Lean_Expr_getAppFn(v___x_2631_);
if (lean_obj_tag(v___x_2632_) == 4)
{
lean_object* v_declName_2633_; lean_object* v_us_2634_; uint8_t v___x_2635_; 
v_declName_2633_ = lean_ctor_get(v___x_2632_, 0);
lean_inc(v_declName_2633_);
v_us_2634_ = lean_ctor_get(v___x_2632_, 1);
lean_inc(v_us_2634_);
lean_dec_ref_known(v___x_2632_, 2);
v___x_2635_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__0___redArg(v_interesting_2603_, v_declName_2633_);
if (v___x_2635_ == 0)
{
lean_dec(v_us_2634_);
lean_dec(v_declName_2633_);
lean_dec_ref(v___x_2631_);
v_a_2618_ = v_snd_2612_;
goto v___jp_2617_;
}
else
{
lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; 
v___x_2636_ = l_Lean_LocalDecl_fvarId(v_val_2626_);
v___x_2637_ = l_Lean_mkFVar(v___x_2636_);
v___x_2638_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_2637_, v___y_2608_);
if (lean_obj_tag(v___x_2638_) == 0)
{
lean_object* v_a_2639_; lean_object* v_dummy_2640_; lean_object* v_nargs_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; 
v_a_2639_ = lean_ctor_get(v___x_2638_, 0);
lean_inc(v_a_2639_);
lean_dec_ref_known(v___x_2638_, 1);
v_dummy_2640_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0);
v_nargs_2641_ = l_Lean_Expr_getAppNumArgs(v___x_2631_);
lean_inc(v_nargs_2641_);
v___x_2642_ = lean_mk_array(v_nargs_2641_, v_dummy_2640_);
v___x_2643_ = lean_unsigned_to_nat(1u);
v___x_2644_ = lean_nat_sub(v_nargs_2641_, v___x_2643_);
lean_dec(v_nargs_2641_);
v___x_2645_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_2631_, v___x_2642_, v___x_2644_);
v___x_2646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2646_, 0, v_us_2634_);
lean_ctor_set(v___x_2646_, 1, v___x_2645_);
v___x_2647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2647_, 0, v_declName_2633_);
lean_ctor_set(v___x_2647_, 1, v___x_2646_);
v___x_2648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2648_, 0, v_a_2639_);
lean_ctor_set(v___x_2648_, 1, v___x_2647_);
v___x_2649_ = lean_array_push(v_snd_2612_, v___x_2648_);
v_a_2618_ = v___x_2649_;
goto v___jp_2617_;
}
else
{
lean_object* v_a_2650_; lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2657_; 
lean_dec(v_us_2634_);
lean_dec(v_declName_2633_);
lean_dec_ref(v___x_2631_);
lean_del_object(v___x_2614_);
lean_dec(v_snd_2612_);
v_a_2650_ = lean_ctor_get(v___x_2638_, 0);
v_isSharedCheck_2657_ = !lean_is_exclusive(v___x_2638_);
if (v_isSharedCheck_2657_ == 0)
{
v___x_2652_ = v___x_2638_;
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
else
{
lean_inc(v_a_2650_);
lean_dec(v___x_2638_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v___x_2655_; 
if (v_isShared_2653_ == 0)
{
v___x_2655_ = v___x_2652_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v_a_2650_);
v___x_2655_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
return v___x_2655_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_2632_);
lean_dec_ref(v___x_2631_);
v_a_2618_ = v_snd_2612_;
goto v___jp_2617_;
}
}
else
{
v_a_2618_ = v_snd_2612_;
goto v___jp_2617_;
}
}
else
{
v_a_2618_ = v_snd_2612_;
goto v___jp_2617_;
}
}
v___jp_2617_:
{
lean_object* v___x_2620_; 
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 1, v_a_2618_);
lean_ctor_set(v___x_2614_, 0, v___x_2616_);
v___x_2620_ = v___x_2614_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v___x_2616_);
lean_ctor_set(v_reuseFailAlloc_2624_, 1, v_a_2618_);
v___x_2620_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
size_t v___x_2621_; size_t v___x_2622_; 
v___x_2621_ = ((size_t)1ULL);
v___x_2622_ = lean_usize_add(v_i_2606_, v___x_2621_);
v_i_2606_ = v___x_2622_;
v_b_2607_ = v___x_2620_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3_spec__9___redArg___boxed(lean_object* v___x_2660_, lean_object* v_interesting_2661_, lean_object* v_as_2662_, lean_object* v_sz_2663_, lean_object* v_i_2664_, lean_object* v_b_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_){
_start:
{
size_t v_sz_boxed_2668_; size_t v_i_boxed_2669_; lean_object* v_res_2670_; 
v_sz_boxed_2668_ = lean_unbox_usize(v_sz_2663_);
lean_dec(v_sz_2663_);
v_i_boxed_2669_ = lean_unbox_usize(v_i_2664_);
lean_dec(v_i_2664_);
v_res_2670_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3_spec__9___redArg(v___x_2660_, v_interesting_2661_, v_as_2662_, v_sz_boxed_2668_, v_i_boxed_2669_, v_b_2665_, v___y_2666_);
lean_dec(v___y_2666_);
lean_dec_ref(v_as_2662_);
lean_dec_ref(v_interesting_2661_);
lean_dec(v___x_2660_);
return v_res_2670_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3(lean_object* v___x_2671_, lean_object* v_interesting_2672_, lean_object* v_as_2673_, size_t v_sz_2674_, size_t v_i_2675_, lean_object* v_b_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_){
_start:
{
uint8_t v___x_2686_; 
v___x_2686_ = lean_usize_dec_lt(v_i_2675_, v_sz_2674_);
if (v___x_2686_ == 0)
{
lean_object* v___x_2687_; 
v___x_2687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2687_, 0, v_b_2676_);
return v___x_2687_;
}
else
{
lean_object* v_snd_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2734_; 
v_snd_2688_ = lean_ctor_get(v_b_2676_, 1);
v_isSharedCheck_2734_ = !lean_is_exclusive(v_b_2676_);
if (v_isSharedCheck_2734_ == 0)
{
lean_object* v_unused_2735_; 
v_unused_2735_ = lean_ctor_get(v_b_2676_, 0);
lean_dec(v_unused_2735_);
v___x_2690_ = v_b_2676_;
v_isShared_2691_ = v_isSharedCheck_2734_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_snd_2688_);
lean_dec(v_b_2676_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2734_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v___x_2692_; lean_object* v_a_2694_; lean_object* v_a_2701_; 
v___x_2692_ = lean_box(0);
v_a_2701_ = lean_array_uget_borrowed(v_as_2673_, v_i_2675_);
if (lean_obj_tag(v_a_2701_) == 0)
{
v_a_2694_ = v_snd_2688_;
goto v___jp_2693_;
}
else
{
lean_object* v_val_2702_; lean_object* v___x_2703_; uint8_t v___x_2704_; uint8_t v___x_2705_; 
v_val_2702_ = lean_ctor_get(v_a_2701_, 0);
v___x_2703_ = lean_unsigned_to_nat(0u);
v___x_2704_ = lean_nat_dec_eq(v___x_2671_, v___x_2703_);
v___x_2705_ = l_Lean_LocalDecl_isLet(v_val_2702_, v___x_2704_);
if (v___x_2705_ == 0)
{
uint8_t v___x_2706_; 
v___x_2706_ = l_Lean_LocalDecl_isImplementationDetail(v_val_2702_);
if (v___x_2706_ == 0)
{
lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___x_2707_ = l_Lean_LocalDecl_type(v_val_2702_);
v___x_2708_ = l_Lean_Expr_getAppFn(v___x_2707_);
if (lean_obj_tag(v___x_2708_) == 4)
{
lean_object* v_declName_2709_; lean_object* v_us_2710_; uint8_t v___x_2711_; 
v_declName_2709_ = lean_ctor_get(v___x_2708_, 0);
lean_inc(v_declName_2709_);
v_us_2710_ = lean_ctor_get(v___x_2708_, 1);
lean_inc(v_us_2710_);
lean_dec_ref_known(v___x_2708_, 2);
v___x_2711_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__0___redArg(v_interesting_2672_, v_declName_2709_);
if (v___x_2711_ == 0)
{
lean_dec(v_us_2710_);
lean_dec(v_declName_2709_);
lean_dec_ref(v___x_2707_);
v_a_2694_ = v_snd_2688_;
goto v___jp_2693_;
}
else
{
lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; 
v___x_2712_ = l_Lean_LocalDecl_fvarId(v_val_2702_);
v___x_2713_ = l_Lean_mkFVar(v___x_2712_);
v___x_2714_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_2713_, v___y_2680_);
if (lean_obj_tag(v___x_2714_) == 0)
{
lean_object* v_a_2715_; lean_object* v_dummy_2716_; lean_object* v_nargs_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; 
v_a_2715_ = lean_ctor_get(v___x_2714_, 0);
lean_inc(v_a_2715_);
lean_dec_ref_known(v___x_2714_, 1);
v_dummy_2716_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg___closed__0);
v_nargs_2717_ = l_Lean_Expr_getAppNumArgs(v___x_2707_);
lean_inc(v_nargs_2717_);
v___x_2718_ = lean_mk_array(v_nargs_2717_, v_dummy_2716_);
v___x_2719_ = lean_unsigned_to_nat(1u);
v___x_2720_ = lean_nat_sub(v_nargs_2717_, v___x_2719_);
lean_dec(v_nargs_2717_);
v___x_2721_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_2707_, v___x_2718_, v___x_2720_);
v___x_2722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2722_, 0, v_us_2710_);
lean_ctor_set(v___x_2722_, 1, v___x_2721_);
v___x_2723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2723_, 0, v_declName_2709_);
lean_ctor_set(v___x_2723_, 1, v___x_2722_);
v___x_2724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2724_, 0, v_a_2715_);
lean_ctor_set(v___x_2724_, 1, v___x_2723_);
v___x_2725_ = lean_array_push(v_snd_2688_, v___x_2724_);
v_a_2694_ = v___x_2725_;
goto v___jp_2693_;
}
else
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
lean_dec(v_us_2710_);
lean_dec(v_declName_2709_);
lean_dec_ref(v___x_2707_);
lean_del_object(v___x_2690_);
lean_dec(v_snd_2688_);
v_a_2726_ = lean_ctor_get(v___x_2714_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2714_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___x_2714_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2714_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
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
return v___x_2731_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_2708_);
lean_dec_ref(v___x_2707_);
v_a_2694_ = v_snd_2688_;
goto v___jp_2693_;
}
}
else
{
v_a_2694_ = v_snd_2688_;
goto v___jp_2693_;
}
}
else
{
v_a_2694_ = v_snd_2688_;
goto v___jp_2693_;
}
}
v___jp_2693_:
{
lean_object* v___x_2696_; 
if (v_isShared_2691_ == 0)
{
lean_ctor_set(v___x_2690_, 1, v_a_2694_);
lean_ctor_set(v___x_2690_, 0, v___x_2692_);
v___x_2696_ = v___x_2690_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v___x_2692_);
lean_ctor_set(v_reuseFailAlloc_2700_, 1, v_a_2694_);
v___x_2696_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
size_t v___x_2697_; size_t v___x_2698_; lean_object* v___x_2699_; 
v___x_2697_ = ((size_t)1ULL);
v___x_2698_ = lean_usize_add(v_i_2675_, v___x_2697_);
v___x_2699_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3_spec__9___redArg(v___x_2671_, v_interesting_2672_, v_as_2673_, v_sz_2674_, v___x_2698_, v___x_2696_, v___y_2680_);
return v___x_2699_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3___boxed(lean_object* v___x_2736_, lean_object* v_interesting_2737_, lean_object* v_as_2738_, lean_object* v_sz_2739_, lean_object* v_i_2740_, lean_object* v_b_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_){
_start:
{
size_t v_sz_boxed_2751_; size_t v_i_boxed_2752_; lean_object* v_res_2753_; 
v_sz_boxed_2751_ = lean_unbox_usize(v_sz_2739_);
lean_dec(v_sz_2739_);
v_i_boxed_2752_ = lean_unbox_usize(v_i_2740_);
lean_dec(v_i_2740_);
v_res_2753_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3(v___x_2736_, v_interesting_2737_, v_as_2738_, v_sz_boxed_2751_, v_i_boxed_2752_, v_b_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_);
lean_dec(v___y_2749_);
lean_dec_ref(v___y_2748_);
lean_dec(v___y_2747_);
lean_dec_ref(v___y_2746_);
lean_dec(v___y_2745_);
lean_dec_ref(v___y_2744_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
lean_dec_ref(v_as_2738_);
lean_dec_ref(v_interesting_2737_);
lean_dec(v___x_2736_);
return v_res_2753_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1(lean_object* v_init_2754_, lean_object* v___x_2755_, lean_object* v_interesting_2756_, lean_object* v_n_2757_, lean_object* v_b_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_){
_start:
{
if (lean_obj_tag(v_n_2757_) == 0)
{
lean_object* v_cs_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; size_t v_sz_2771_; size_t v___x_2772_; lean_object* v___x_2773_; 
v_cs_2768_ = lean_ctor_get(v_n_2757_, 0);
v___x_2769_ = lean_box(0);
v___x_2770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2770_, 0, v___x_2769_);
lean_ctor_set(v___x_2770_, 1, v_b_2758_);
v_sz_2771_ = lean_array_size(v_cs_2768_);
v___x_2772_ = ((size_t)0ULL);
v___x_2773_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__2(v_init_2754_, v___x_2755_, v_interesting_2756_, v_cs_2768_, v_sz_2771_, v___x_2772_, v___x_2770_, v___y_2759_, v___y_2760_, v___y_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
if (lean_obj_tag(v___x_2773_) == 0)
{
lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2788_; 
v_a_2774_ = lean_ctor_get(v___x_2773_, 0);
v_isSharedCheck_2788_ = !lean_is_exclusive(v___x_2773_);
if (v_isSharedCheck_2788_ == 0)
{
v___x_2776_ = v___x_2773_;
v_isShared_2777_ = v_isSharedCheck_2788_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_dec(v___x_2773_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2788_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v_fst_2778_; 
v_fst_2778_ = lean_ctor_get(v_a_2774_, 0);
if (lean_obj_tag(v_fst_2778_) == 0)
{
lean_object* v_snd_2779_; lean_object* v___x_2780_; lean_object* v___x_2782_; 
v_snd_2779_ = lean_ctor_get(v_a_2774_, 1);
lean_inc(v_snd_2779_);
lean_dec(v_a_2774_);
v___x_2780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2780_, 0, v_snd_2779_);
if (v_isShared_2777_ == 0)
{
lean_ctor_set(v___x_2776_, 0, v___x_2780_);
v___x_2782_ = v___x_2776_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v___x_2780_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
return v___x_2782_;
}
}
else
{
lean_object* v_val_2784_; lean_object* v___x_2786_; 
lean_inc_ref(v_fst_2778_);
lean_dec(v_a_2774_);
v_val_2784_ = lean_ctor_get(v_fst_2778_, 0);
lean_inc(v_val_2784_);
lean_dec_ref_known(v_fst_2778_, 1);
if (v_isShared_2777_ == 0)
{
lean_ctor_set(v___x_2776_, 0, v_val_2784_);
v___x_2786_ = v___x_2776_;
goto v_reusejp_2785_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v_val_2784_);
v___x_2786_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2785_;
}
v_reusejp_2785_:
{
return v___x_2786_;
}
}
}
}
else
{
lean_object* v_a_2789_; lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2796_; 
v_a_2789_ = lean_ctor_get(v___x_2773_, 0);
v_isSharedCheck_2796_ = !lean_is_exclusive(v___x_2773_);
if (v_isSharedCheck_2796_ == 0)
{
v___x_2791_ = v___x_2773_;
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
else
{
lean_inc(v_a_2789_);
lean_dec(v___x_2773_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
lean_object* v___x_2794_; 
if (v_isShared_2792_ == 0)
{
v___x_2794_ = v___x_2791_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v_a_2789_);
v___x_2794_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
return v___x_2794_;
}
}
}
}
else
{
lean_object* v_vs_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; size_t v_sz_2800_; size_t v___x_2801_; lean_object* v___x_2802_; 
v_vs_2797_ = lean_ctor_get(v_n_2757_, 0);
v___x_2798_ = lean_box(0);
v___x_2799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2799_, 0, v___x_2798_);
lean_ctor_set(v___x_2799_, 1, v_b_2758_);
v_sz_2800_ = lean_array_size(v_vs_2797_);
v___x_2801_ = ((size_t)0ULL);
v___x_2802_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3(v___x_2755_, v_interesting_2756_, v_vs_2797_, v_sz_2800_, v___x_2801_, v___x_2799_, v___y_2759_, v___y_2760_, v___y_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
if (lean_obj_tag(v___x_2802_) == 0)
{
lean_object* v_a_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2817_; 
v_a_2803_ = lean_ctor_get(v___x_2802_, 0);
v_isSharedCheck_2817_ = !lean_is_exclusive(v___x_2802_);
if (v_isSharedCheck_2817_ == 0)
{
v___x_2805_ = v___x_2802_;
v_isShared_2806_ = v_isSharedCheck_2817_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_a_2803_);
lean_dec(v___x_2802_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2817_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v_fst_2807_; 
v_fst_2807_ = lean_ctor_get(v_a_2803_, 0);
if (lean_obj_tag(v_fst_2807_) == 0)
{
lean_object* v_snd_2808_; lean_object* v___x_2809_; lean_object* v___x_2811_; 
v_snd_2808_ = lean_ctor_get(v_a_2803_, 1);
lean_inc(v_snd_2808_);
lean_dec(v_a_2803_);
v___x_2809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2809_, 0, v_snd_2808_);
if (v_isShared_2806_ == 0)
{
lean_ctor_set(v___x_2805_, 0, v___x_2809_);
v___x_2811_ = v___x_2805_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v___x_2809_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
else
{
lean_object* v_val_2813_; lean_object* v___x_2815_; 
lean_inc_ref(v_fst_2807_);
lean_dec(v_a_2803_);
v_val_2813_ = lean_ctor_get(v_fst_2807_, 0);
lean_inc(v_val_2813_);
lean_dec_ref_known(v_fst_2807_, 1);
if (v_isShared_2806_ == 0)
{
lean_ctor_set(v___x_2805_, 0, v_val_2813_);
v___x_2815_ = v___x_2805_;
goto v_reusejp_2814_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v_val_2813_);
v___x_2815_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2814_;
}
v_reusejp_2814_:
{
return v___x_2815_;
}
}
}
}
else
{
lean_object* v_a_2818_; lean_object* v___x_2820_; uint8_t v_isShared_2821_; uint8_t v_isSharedCheck_2825_; 
v_a_2818_ = lean_ctor_get(v___x_2802_, 0);
v_isSharedCheck_2825_ = !lean_is_exclusive(v___x_2802_);
if (v_isSharedCheck_2825_ == 0)
{
v___x_2820_ = v___x_2802_;
v_isShared_2821_ = v_isSharedCheck_2825_;
goto v_resetjp_2819_;
}
else
{
lean_inc(v_a_2818_);
lean_dec(v___x_2802_);
v___x_2820_ = lean_box(0);
v_isShared_2821_ = v_isSharedCheck_2825_;
goto v_resetjp_2819_;
}
v_resetjp_2819_:
{
lean_object* v___x_2823_; 
if (v_isShared_2821_ == 0)
{
v___x_2823_ = v___x_2820_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v_a_2818_);
v___x_2823_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
return v___x_2823_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__2(lean_object* v_init_2826_, lean_object* v___x_2827_, lean_object* v_interesting_2828_, lean_object* v_as_2829_, size_t v_sz_2830_, size_t v_i_2831_, lean_object* v_b_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_){
_start:
{
uint8_t v___x_2842_; 
v___x_2842_ = lean_usize_dec_lt(v_i_2831_, v_sz_2830_);
if (v___x_2842_ == 0)
{
lean_object* v___x_2843_; 
v___x_2843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2843_, 0, v_b_2832_);
return v___x_2843_;
}
else
{
lean_object* v_snd_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2878_; 
v_snd_2844_ = lean_ctor_get(v_b_2832_, 1);
v_isSharedCheck_2878_ = !lean_is_exclusive(v_b_2832_);
if (v_isSharedCheck_2878_ == 0)
{
lean_object* v_unused_2879_; 
v_unused_2879_ = lean_ctor_get(v_b_2832_, 0);
lean_dec(v_unused_2879_);
v___x_2846_ = v_b_2832_;
v_isShared_2847_ = v_isSharedCheck_2878_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_snd_2844_);
lean_dec(v_b_2832_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2878_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v_a_2848_; lean_object* v___x_2849_; 
v_a_2848_ = lean_array_uget_borrowed(v_as_2829_, v_i_2831_);
lean_inc(v_snd_2844_);
v___x_2849_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1(v_init_2826_, v___x_2827_, v_interesting_2828_, v_a_2848_, v_snd_2844_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_);
if (lean_obj_tag(v___x_2849_) == 0)
{
lean_object* v_a_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2869_; 
v_a_2850_ = lean_ctor_get(v___x_2849_, 0);
v_isSharedCheck_2869_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2869_ == 0)
{
v___x_2852_ = v___x_2849_;
v_isShared_2853_ = v_isSharedCheck_2869_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_a_2850_);
lean_dec(v___x_2849_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2869_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
if (lean_obj_tag(v_a_2850_) == 0)
{
lean_object* v___x_2854_; lean_object* v___x_2856_; 
v___x_2854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2854_, 0, v_a_2850_);
if (v_isShared_2847_ == 0)
{
lean_ctor_set(v___x_2846_, 0, v___x_2854_);
v___x_2856_ = v___x_2846_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2860_; 
v_reuseFailAlloc_2860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2860_, 0, v___x_2854_);
lean_ctor_set(v_reuseFailAlloc_2860_, 1, v_snd_2844_);
v___x_2856_ = v_reuseFailAlloc_2860_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
lean_object* v___x_2858_; 
if (v_isShared_2853_ == 0)
{
lean_ctor_set(v___x_2852_, 0, v___x_2856_);
v___x_2858_ = v___x_2852_;
goto v_reusejp_2857_;
}
else
{
lean_object* v_reuseFailAlloc_2859_; 
v_reuseFailAlloc_2859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2859_, 0, v___x_2856_);
v___x_2858_ = v_reuseFailAlloc_2859_;
goto v_reusejp_2857_;
}
v_reusejp_2857_:
{
return v___x_2858_;
}
}
}
else
{
lean_object* v_a_2861_; lean_object* v___x_2862_; lean_object* v___x_2864_; 
lean_del_object(v___x_2852_);
lean_dec(v_snd_2844_);
v_a_2861_ = lean_ctor_get(v_a_2850_, 0);
lean_inc(v_a_2861_);
lean_dec_ref_known(v_a_2850_, 1);
v___x_2862_ = lean_box(0);
if (v_isShared_2847_ == 0)
{
lean_ctor_set(v___x_2846_, 1, v_a_2861_);
lean_ctor_set(v___x_2846_, 0, v___x_2862_);
v___x_2864_ = v___x_2846_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v___x_2862_);
lean_ctor_set(v_reuseFailAlloc_2868_, 1, v_a_2861_);
v___x_2864_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
size_t v___x_2865_; size_t v___x_2866_; 
v___x_2865_ = ((size_t)1ULL);
v___x_2866_ = lean_usize_add(v_i_2831_, v___x_2865_);
v_i_2831_ = v___x_2866_;
v_b_2832_ = v___x_2864_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2870_; lean_object* v___x_2872_; uint8_t v_isShared_2873_; uint8_t v_isSharedCheck_2877_; 
lean_del_object(v___x_2846_);
lean_dec(v_snd_2844_);
v_a_2870_ = lean_ctor_get(v___x_2849_, 0);
v_isSharedCheck_2877_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2877_ == 0)
{
v___x_2872_ = v___x_2849_;
v_isShared_2873_ = v_isSharedCheck_2877_;
goto v_resetjp_2871_;
}
else
{
lean_inc(v_a_2870_);
lean_dec(v___x_2849_);
v___x_2872_ = lean_box(0);
v_isShared_2873_ = v_isSharedCheck_2877_;
goto v_resetjp_2871_;
}
v_resetjp_2871_:
{
lean_object* v___x_2875_; 
if (v_isShared_2873_ == 0)
{
v___x_2875_ = v___x_2872_;
goto v_reusejp_2874_;
}
else
{
lean_object* v_reuseFailAlloc_2876_; 
v_reuseFailAlloc_2876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2876_, 0, v_a_2870_);
v___x_2875_ = v_reuseFailAlloc_2876_;
goto v_reusejp_2874_;
}
v_reusejp_2874_:
{
return v___x_2875_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__2___boxed(lean_object* v_init_2880_, lean_object* v___x_2881_, lean_object* v_interesting_2882_, lean_object* v_as_2883_, lean_object* v_sz_2884_, lean_object* v_i_2885_, lean_object* v_b_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_){
_start:
{
size_t v_sz_boxed_2896_; size_t v_i_boxed_2897_; lean_object* v_res_2898_; 
v_sz_boxed_2896_ = lean_unbox_usize(v_sz_2884_);
lean_dec(v_sz_2884_);
v_i_boxed_2897_ = lean_unbox_usize(v_i_2885_);
lean_dec(v_i_2885_);
v_res_2898_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__2(v_init_2880_, v___x_2881_, v_interesting_2882_, v_as_2883_, v_sz_boxed_2896_, v_i_boxed_2897_, v_b_2886_, v___y_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_);
lean_dec(v___y_2894_);
lean_dec_ref(v___y_2893_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
lean_dec(v___y_2890_);
lean_dec_ref(v___y_2889_);
lean_dec(v___y_2888_);
lean_dec_ref(v___y_2887_);
lean_dec_ref(v_as_2883_);
lean_dec_ref(v_interesting_2882_);
lean_dec(v___x_2881_);
lean_dec_ref(v_init_2880_);
return v_res_2898_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1___boxed(lean_object* v_init_2899_, lean_object* v___x_2900_, lean_object* v_interesting_2901_, lean_object* v_n_2902_, lean_object* v_b_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_){
_start:
{
lean_object* v_res_2913_; 
v_res_2913_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1(v_init_2899_, v___x_2900_, v_interesting_2901_, v_n_2902_, v_b_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_);
lean_dec(v___y_2911_);
lean_dec_ref(v___y_2910_);
lean_dec(v___y_2909_);
lean_dec_ref(v___y_2908_);
lean_dec(v___y_2907_);
lean_dec_ref(v___y_2906_);
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2904_);
lean_dec_ref(v_n_2902_);
lean_dec_ref(v_interesting_2901_);
lean_dec(v___x_2900_);
lean_dec_ref(v_init_2899_);
return v_res_2913_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1(lean_object* v___x_2914_, lean_object* v_interesting_2915_, lean_object* v_t_2916_, lean_object* v_init_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_){
_start:
{
lean_object* v_root_2927_; lean_object* v_tail_2928_; lean_object* v___x_2929_; 
v_root_2927_ = lean_ctor_get(v_t_2916_, 0);
v_tail_2928_ = lean_ctor_get(v_t_2916_, 1);
lean_inc_ref(v_init_2917_);
v___x_2929_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1(v_init_2917_, v___x_2914_, v_interesting_2915_, v_root_2927_, v_init_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_);
lean_dec_ref(v_init_2917_);
if (lean_obj_tag(v___x_2929_) == 0)
{
lean_object* v_a_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2966_; 
v_a_2930_ = lean_ctor_get(v___x_2929_, 0);
v_isSharedCheck_2966_ = !lean_is_exclusive(v___x_2929_);
if (v_isSharedCheck_2966_ == 0)
{
v___x_2932_ = v___x_2929_;
v_isShared_2933_ = v_isSharedCheck_2966_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_a_2930_);
lean_dec(v___x_2929_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2966_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
if (lean_obj_tag(v_a_2930_) == 0)
{
lean_object* v_a_2934_; lean_object* v___x_2936_; 
v_a_2934_ = lean_ctor_get(v_a_2930_, 0);
lean_inc(v_a_2934_);
lean_dec_ref_known(v_a_2930_, 1);
if (v_isShared_2933_ == 0)
{
lean_ctor_set(v___x_2932_, 0, v_a_2934_);
v___x_2936_ = v___x_2932_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v_a_2934_);
v___x_2936_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
return v___x_2936_;
}
}
else
{
lean_object* v_a_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; size_t v_sz_2941_; size_t v___x_2942_; lean_object* v___x_2943_; 
lean_del_object(v___x_2932_);
v_a_2938_ = lean_ctor_get(v_a_2930_, 0);
lean_inc(v_a_2938_);
lean_dec_ref_known(v_a_2930_, 1);
v___x_2939_ = lean_box(0);
v___x_2940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2940_, 0, v___x_2939_);
lean_ctor_set(v___x_2940_, 1, v_a_2938_);
v_sz_2941_ = lean_array_size(v_tail_2928_);
v___x_2942_ = ((size_t)0ULL);
v___x_2943_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2(v___x_2914_, v_interesting_2915_, v_tail_2928_, v_sz_2941_, v___x_2942_, v___x_2940_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_);
if (lean_obj_tag(v___x_2943_) == 0)
{
lean_object* v_a_2944_; lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_2957_; 
v_a_2944_ = lean_ctor_get(v___x_2943_, 0);
v_isSharedCheck_2957_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_2957_ == 0)
{
v___x_2946_ = v___x_2943_;
v_isShared_2947_ = v_isSharedCheck_2957_;
goto v_resetjp_2945_;
}
else
{
lean_inc(v_a_2944_);
lean_dec(v___x_2943_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_2957_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
lean_object* v_fst_2948_; 
v_fst_2948_ = lean_ctor_get(v_a_2944_, 0);
if (lean_obj_tag(v_fst_2948_) == 0)
{
lean_object* v_snd_2949_; lean_object* v___x_2951_; 
v_snd_2949_ = lean_ctor_get(v_a_2944_, 1);
lean_inc(v_snd_2949_);
lean_dec(v_a_2944_);
if (v_isShared_2947_ == 0)
{
lean_ctor_set(v___x_2946_, 0, v_snd_2949_);
v___x_2951_ = v___x_2946_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v_snd_2949_);
v___x_2951_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
return v___x_2951_;
}
}
else
{
lean_object* v_val_2953_; lean_object* v___x_2955_; 
lean_inc_ref(v_fst_2948_);
lean_dec(v_a_2944_);
v_val_2953_ = lean_ctor_get(v_fst_2948_, 0);
lean_inc(v_val_2953_);
lean_dec_ref_known(v_fst_2948_, 1);
if (v_isShared_2947_ == 0)
{
lean_ctor_set(v___x_2946_, 0, v_val_2953_);
v___x_2955_ = v___x_2946_;
goto v_reusejp_2954_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v_val_2953_);
v___x_2955_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2954_;
}
v_reusejp_2954_:
{
return v___x_2955_;
}
}
}
}
else
{
lean_object* v_a_2958_; lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_2965_; 
v_a_2958_ = lean_ctor_get(v___x_2943_, 0);
v_isSharedCheck_2965_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_2965_ == 0)
{
v___x_2960_ = v___x_2943_;
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
else
{
lean_inc(v_a_2958_);
lean_dec(v___x_2943_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
v_resetjp_2959_:
{
lean_object* v___x_2963_; 
if (v_isShared_2961_ == 0)
{
v___x_2963_ = v___x_2960_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v_a_2958_);
v___x_2963_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
return v___x_2963_;
}
}
}
}
}
}
else
{
lean_object* v_a_2967_; lean_object* v___x_2969_; uint8_t v_isShared_2970_; uint8_t v_isSharedCheck_2974_; 
v_a_2967_ = lean_ctor_get(v___x_2929_, 0);
v_isSharedCheck_2974_ = !lean_is_exclusive(v___x_2929_);
if (v_isSharedCheck_2974_ == 0)
{
v___x_2969_ = v___x_2929_;
v_isShared_2970_ = v_isSharedCheck_2974_;
goto v_resetjp_2968_;
}
else
{
lean_inc(v_a_2967_);
lean_dec(v___x_2929_);
v___x_2969_ = lean_box(0);
v_isShared_2970_ = v_isSharedCheck_2974_;
goto v_resetjp_2968_;
}
v_resetjp_2968_:
{
lean_object* v___x_2972_; 
if (v_isShared_2970_ == 0)
{
v___x_2972_ = v___x_2969_;
goto v_reusejp_2971_;
}
else
{
lean_object* v_reuseFailAlloc_2973_; 
v_reuseFailAlloc_2973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2973_, 0, v_a_2967_);
v___x_2972_ = v_reuseFailAlloc_2973_;
goto v_reusejp_2971_;
}
v_reusejp_2971_:
{
return v___x_2972_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1___boxed(lean_object* v___x_2975_, lean_object* v_interesting_2976_, lean_object* v_t_2977_, lean_object* v_init_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_){
_start:
{
lean_object* v_res_2988_; 
v_res_2988_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1(v___x_2975_, v_interesting_2976_, v_t_2977_, v_init_2978_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_);
lean_dec(v___y_2986_);
lean_dec_ref(v___y_2985_);
lean_dec(v___y_2984_);
lean_dec_ref(v___y_2983_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2981_);
lean_dec(v___y_2980_);
lean_dec_ref(v___y_2979_);
lean_dec_ref(v_t_2977_);
lean_dec_ref(v_interesting_2976_);
lean_dec(v___x_2975_);
return v_res_2988_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2990_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg___closed__0));
v___x_2991_ = l_Lean_stringToMessageData(v___x_2990_);
return v___x_2991_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg(lean_object* v_as_2992_, size_t v_i_2993_, size_t v_stop_2994_, lean_object* v_b_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_){
_start:
{
lean_object* v_a_3002_; uint8_t v___x_3008_; 
v___x_3008_ = lean_usize_dec_eq(v_i_2993_, v_stop_2994_);
if (v___x_3008_ == 0)
{
lean_object* v_options_3009_; uint8_t v_hasTrace_3010_; 
v_options_3009_ = lean_ctor_get(v___y_2998_, 2);
v_hasTrace_3010_ = lean_ctor_get_uint8(v_options_3009_, sizeof(void*)*1);
if (v_hasTrace_3010_ == 0)
{
goto v___jp_3006_;
}
else
{
lean_object* v_inheritedTraceOptions_3011_; lean_object* v_cls_3012_; lean_object* v___x_3013_; uint8_t v___x_3014_; 
v_inheritedTraceOptions_3011_ = lean_ctor_get(v___y_2998_, 13);
v_cls_3012_ = ((lean_object*)(l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__3));
v___x_3013_ = lean_obj_once(&l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__6, &l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__6_once, _init_l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__4___closed__6);
v___x_3014_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3011_, v_options_3009_, v___x_3013_);
if (v___x_3014_ == 0)
{
goto v___jp_3006_;
}
else
{
lean_object* v___x_3015_; lean_object* v_type_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; 
v___x_3015_ = lean_array_uget_borrowed(v_as_2992_, v_i_2993_);
v_type_3016_ = lean_ctor_get(v___x_3015_, 1);
v___x_3017_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg___closed__1);
lean_inc_ref(v_type_3016_);
v___x_3018_ = l_Lean_MessageData_ofExpr(v_type_3016_);
v___x_3019_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3019_, 0, v___x_3017_);
lean_ctor_set(v___x_3019_, 1, v___x_3018_);
v___x_3020_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_addStructureSimpLemmas_spec__3___redArg(v_cls_3012_, v___x_3019_, v___y_2996_, v___y_2997_, v___y_2998_, v___y_2999_);
if (lean_obj_tag(v___x_3020_) == 0)
{
lean_object* v_a_3021_; 
v_a_3021_ = lean_ctor_get(v___x_3020_, 0);
lean_inc(v_a_3021_);
lean_dec_ref_known(v___x_3020_, 1);
v_a_3002_ = v_a_3021_;
goto v___jp_3001_;
}
else
{
return v___x_3020_;
}
}
}
}
else
{
lean_object* v___x_3022_; 
v___x_3022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3022_, 0, v_b_2995_);
return v___x_3022_;
}
v___jp_3001_:
{
size_t v___x_3003_; size_t v___x_3004_; 
v___x_3003_ = ((size_t)1ULL);
v___x_3004_ = lean_usize_add(v_i_2993_, v___x_3003_);
v_i_2993_ = v___x_3004_;
v_b_2995_ = v_a_3002_;
goto _start;
}
v___jp_3006_:
{
lean_object* v___x_3007_; 
v___x_3007_ = lean_box(0);
v_a_3002_ = v___x_3007_;
goto v___jp_3001_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg___boxed(lean_object* v_as_3023_, lean_object* v_i_3024_, lean_object* v_stop_3025_, lean_object* v_b_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_){
_start:
{
size_t v_i_boxed_3032_; size_t v_stop_boxed_3033_; lean_object* v_res_3034_; 
v_i_boxed_3032_ = lean_unbox_usize(v_i_3024_);
lean_dec(v_i_3024_);
v_stop_boxed_3033_ = lean_unbox_usize(v_stop_3025_);
lean_dec(v_stop_3025_);
v_res_3034_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg(v_as_3023_, v_i_boxed_3032_, v_stop_boxed_3033_, v_b_3026_, v___y_3027_, v___y_3028_, v___y_3029_, v___y_3030_);
lean_dec(v___y_3030_);
lean_dec_ref(v___y_3029_);
lean_dec(v___y_3028_);
lean_dec_ref(v___y_3027_);
lean_dec_ref(v_as_3023_);
return v_res_3034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___lam__0(lean_object* v_size_3035_, lean_object* v_interestingStructures_3036_, lean_object* v___x_3037_, lean_object* v___x_3038_, lean_object* v_goal_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_){
_start:
{
lean_object* v_lctx_3049_; lean_object* v_decls_3050_; lean_object* v___x_3051_; 
v_lctx_3049_ = lean_ctor_get(v___y_3044_, 2);
v_decls_3050_ = lean_ctor_get(v_lctx_3049_, 1);
v___x_3051_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1(v_size_3035_, v_interestingStructures_3036_, v_decls_3050_, v___x_3037_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_);
if (lean_obj_tag(v___x_3051_) == 0)
{
lean_object* v_a_3052_; lean_object* v___x_3053_; lean_object* v_env_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; 
v_a_3052_ = lean_ctor_get(v___x_3051_, 0);
lean_inc(v_a_3052_);
lean_dec_ref_known(v___x_3051_, 1);
v___x_3053_ = lean_st_ref_get(v___y_3047_);
v_env_3054_ = lean_ctor_get(v___x_3053_, 0);
lean_inc_ref(v_env_3054_);
lean_dec(v___x_3053_);
v___x_3055_ = lean_mk_empty_array_with_capacity(v___x_3038_);
v___x_3056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3056_, 0, v_a_3052_);
lean_ctor_set(v___x_3056_, 1, v___x_3055_);
v___x_3057_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__4___redArg(v_env_3054_, v_interestingStructures_3036_, v___x_3056_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_);
if (lean_obj_tag(v___x_3057_) == 0)
{
lean_object* v_a_3058_; lean_object* v_snd_3059_; lean_object* v___y_3079_; lean_object* v___x_3088_; uint8_t v___x_3089_; 
v_a_3058_ = lean_ctor_get(v___x_3057_, 0);
lean_inc(v_a_3058_);
lean_dec_ref_known(v___x_3057_, 1);
v_snd_3059_ = lean_ctor_get(v_a_3058_, 1);
lean_inc(v_snd_3059_);
lean_dec(v_a_3058_);
v___x_3088_ = lean_array_get_size(v_snd_3059_);
v___x_3089_ = lean_nat_dec_lt(v___x_3038_, v___x_3088_);
if (v___x_3089_ == 0)
{
goto v___jp_3060_;
}
else
{
lean_object* v___x_3090_; uint8_t v___x_3091_; 
v___x_3090_ = lean_box(0);
v___x_3091_ = lean_nat_dec_le(v___x_3088_, v___x_3088_);
if (v___x_3091_ == 0)
{
if (v___x_3089_ == 0)
{
goto v___jp_3060_;
}
else
{
size_t v___x_3092_; size_t v___x_3093_; lean_object* v___x_3094_; 
v___x_3092_ = ((size_t)0ULL);
v___x_3093_ = lean_usize_of_nat(v___x_3088_);
v___x_3094_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg(v_snd_3059_, v___x_3092_, v___x_3093_, v___x_3090_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_);
v___y_3079_ = v___x_3094_;
goto v___jp_3078_;
}
}
else
{
size_t v___x_3095_; size_t v___x_3096_; lean_object* v___x_3097_; 
v___x_3095_ = ((size_t)0ULL);
v___x_3096_ = lean_usize_of_nat(v___x_3088_);
v___x_3097_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg(v_snd_3059_, v___x_3095_, v___x_3096_, v___x_3090_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_);
v___y_3079_ = v___x_3097_;
goto v___jp_3078_;
}
}
v___jp_3060_:
{
lean_object* v___x_3061_; lean_object* v_rewriteCache_3062_; lean_object* v_acNfCache_3063_; lean_object* v_typeAnalysis_3064_; lean_object* v_goal_3065_; lean_object* v_hypotheses_3066_; uint8_t v_didChange_3067_; lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3077_; 
v___x_3061_ = lean_st_ref_take(v___y_3041_);
v_rewriteCache_3062_ = lean_ctor_get(v___x_3061_, 0);
v_acNfCache_3063_ = lean_ctor_get(v___x_3061_, 1);
v_typeAnalysis_3064_ = lean_ctor_get(v___x_3061_, 2);
v_goal_3065_ = lean_ctor_get(v___x_3061_, 3);
v_hypotheses_3066_ = lean_ctor_get(v___x_3061_, 4);
v_didChange_3067_ = lean_ctor_get_uint8(v___x_3061_, sizeof(void*)*5);
v_isSharedCheck_3077_ = !lean_is_exclusive(v___x_3061_);
if (v_isSharedCheck_3077_ == 0)
{
v___x_3069_ = v___x_3061_;
v_isShared_3070_ = v_isSharedCheck_3077_;
goto v_resetjp_3068_;
}
else
{
lean_inc(v_hypotheses_3066_);
lean_inc(v_goal_3065_);
lean_inc(v_typeAnalysis_3064_);
lean_inc(v_acNfCache_3063_);
lean_inc(v_rewriteCache_3062_);
lean_dec(v___x_3061_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3077_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v___x_3071_; lean_object* v___x_3073_; 
v___x_3071_ = l_Array_append___redArg(v_hypotheses_3066_, v_snd_3059_);
lean_dec(v_snd_3059_);
if (v_isShared_3070_ == 0)
{
lean_ctor_set(v___x_3069_, 4, v___x_3071_);
v___x_3073_ = v___x_3069_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3076_; 
v_reuseFailAlloc_3076_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_3076_, 0, v_rewriteCache_3062_);
lean_ctor_set(v_reuseFailAlloc_3076_, 1, v_acNfCache_3063_);
lean_ctor_set(v_reuseFailAlloc_3076_, 2, v_typeAnalysis_3064_);
lean_ctor_set(v_reuseFailAlloc_3076_, 3, v_goal_3065_);
lean_ctor_set(v_reuseFailAlloc_3076_, 4, v___x_3071_);
lean_ctor_set_uint8(v_reuseFailAlloc_3076_, sizeof(void*)*5, v_didChange_3067_);
v___x_3073_ = v_reuseFailAlloc_3076_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; 
v___x_3074_ = lean_st_ref_set(v___y_3041_, v___x_3073_);
v___x_3075_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess(v_goal_3039_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_);
return v___x_3075_;
}
}
}
v___jp_3078_:
{
if (lean_obj_tag(v___y_3079_) == 0)
{
lean_dec_ref_known(v___y_3079_, 1);
goto v___jp_3060_;
}
else
{
lean_object* v_a_3080_; lean_object* v___x_3082_; uint8_t v_isShared_3083_; uint8_t v_isSharedCheck_3087_; 
lean_dec(v_snd_3059_);
lean_dec(v_goal_3039_);
v_a_3080_ = lean_ctor_get(v___y_3079_, 0);
v_isSharedCheck_3087_ = !lean_is_exclusive(v___y_3079_);
if (v_isSharedCheck_3087_ == 0)
{
v___x_3082_ = v___y_3079_;
v_isShared_3083_ = v_isSharedCheck_3087_;
goto v_resetjp_3081_;
}
else
{
lean_inc(v_a_3080_);
lean_dec(v___y_3079_);
v___x_3082_ = lean_box(0);
v_isShared_3083_ = v_isSharedCheck_3087_;
goto v_resetjp_3081_;
}
v_resetjp_3081_:
{
lean_object* v___x_3085_; 
if (v_isShared_3083_ == 0)
{
v___x_3085_ = v___x_3082_;
goto v_reusejp_3084_;
}
else
{
lean_object* v_reuseFailAlloc_3086_; 
v_reuseFailAlloc_3086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3086_, 0, v_a_3080_);
v___x_3085_ = v_reuseFailAlloc_3086_;
goto v_reusejp_3084_;
}
v_reusejp_3084_:
{
return v___x_3085_;
}
}
}
}
}
else
{
lean_object* v_a_3098_; lean_object* v___x_3100_; uint8_t v_isShared_3101_; uint8_t v_isSharedCheck_3105_; 
lean_dec(v_goal_3039_);
v_a_3098_ = lean_ctor_get(v___x_3057_, 0);
v_isSharedCheck_3105_ = !lean_is_exclusive(v___x_3057_);
if (v_isSharedCheck_3105_ == 0)
{
v___x_3100_ = v___x_3057_;
v_isShared_3101_ = v_isSharedCheck_3105_;
goto v_resetjp_3099_;
}
else
{
lean_inc(v_a_3098_);
lean_dec(v___x_3057_);
v___x_3100_ = lean_box(0);
v_isShared_3101_ = v_isSharedCheck_3105_;
goto v_resetjp_3099_;
}
v_resetjp_3099_:
{
lean_object* v___x_3103_; 
if (v_isShared_3101_ == 0)
{
v___x_3103_ = v___x_3100_;
goto v_reusejp_3102_;
}
else
{
lean_object* v_reuseFailAlloc_3104_; 
v_reuseFailAlloc_3104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3104_, 0, v_a_3098_);
v___x_3103_ = v_reuseFailAlloc_3104_;
goto v_reusejp_3102_;
}
v_reusejp_3102_:
{
return v___x_3103_;
}
}
}
}
else
{
lean_object* v_a_3106_; lean_object* v___x_3108_; uint8_t v_isShared_3109_; uint8_t v_isSharedCheck_3113_; 
lean_dec(v_goal_3039_);
v_a_3106_ = lean_ctor_get(v___x_3051_, 0);
v_isSharedCheck_3113_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3113_ == 0)
{
v___x_3108_ = v___x_3051_;
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
else
{
lean_inc(v_a_3106_);
lean_dec(v___x_3051_);
v___x_3108_ = lean_box(0);
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
v_resetjp_3107_:
{
lean_object* v___x_3111_; 
if (v_isShared_3109_ == 0)
{
v___x_3111_ = v___x_3108_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v_a_3106_);
v___x_3111_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
return v___x_3111_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___lam__0___boxed(lean_object* v_size_3114_, lean_object* v_interestingStructures_3115_, lean_object* v___x_3116_, lean_object* v___x_3117_, lean_object* v_goal_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_){
_start:
{
lean_object* v_res_3128_; 
v_res_3128_ = l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___lam__0(v_size_3114_, v_interestingStructures_3115_, v___x_3116_, v___x_3117_, v_goal_3118_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_, v___y_3126_);
lean_dec(v___y_3126_);
lean_dec_ref(v___y_3125_);
lean_dec(v___y_3124_);
lean_dec_ref(v___y_3123_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec(v___y_3120_);
lean_dec_ref(v___y_3119_);
lean_dec(v___x_3117_);
lean_dec_ref(v_interestingStructures_3115_);
lean_dec(v_size_3114_);
return v_res_3128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___lam__1(lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_){
_start:
{
lean_object* v___x_3140_; lean_object* v_typeAnalysis_3141_; lean_object* v_interestingStructures_3142_; lean_object* v_size_3143_; lean_object* v___x_3144_; uint8_t v___x_3145_; 
v___x_3140_ = lean_st_ref_get(v___y_3132_);
v_typeAnalysis_3141_ = lean_ctor_get(v___x_3140_, 2);
lean_inc_ref(v_typeAnalysis_3141_);
lean_dec(v___x_3140_);
v_interestingStructures_3142_ = lean_ctor_get(v_typeAnalysis_3141_, 0);
lean_inc_ref(v_interestingStructures_3142_);
lean_dec_ref(v_typeAnalysis_3141_);
v_size_3143_ = lean_ctor_get(v_interestingStructures_3142_, 0);
lean_inc(v_size_3143_);
v___x_3144_ = lean_unsigned_to_nat(0u);
v___x_3145_ = lean_nat_dec_eq(v_size_3143_, v___x_3144_);
if (v___x_3145_ == 0)
{
lean_object* v___x_3146_; lean_object* v_goal_3147_; lean_object* v___x_3148_; lean_object* v___f_3149_; lean_object* v___x_3150_; 
v___x_3146_ = lean_st_ref_get(v___y_3132_);
v_goal_3147_ = lean_ctor_get(v___x_3146_, 3);
lean_inc_n(v_goal_3147_, 2);
lean_dec(v___x_3146_);
v___x_3148_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___lam__1___closed__0));
v___f_3149_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___lam__0___boxed), 14, 5);
lean_closure_set(v___f_3149_, 0, v_size_3143_);
lean_closure_set(v___f_3149_, 1, v_interestingStructures_3142_);
lean_closure_set(v___f_3149_, 2, v___x_3148_);
lean_closure_set(v___f_3149_, 3, v___x_3144_);
lean_closure_set(v___f_3149_, 4, v_goal_3147_);
v___x_3150_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Structures_0__Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_postprocess_spec__2___redArg(v_goal_3147_, v___f_3149_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_, v___y_3138_);
return v___x_3150_;
}
else
{
uint8_t v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; 
lean_dec(v_size_3143_);
lean_dec_ref(v_interestingStructures_3142_);
v___x_3151_ = 0;
v___x_3152_ = lean_box(v___x_3151_);
v___x_3153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3153_, 0, v___x_3152_);
return v___x_3153_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___lam__1___boxed(lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_){
_start:
{
lean_object* v_res_3163_; 
v_res_3163_ = l_Lean_Meta_Tactic_BVDecide_Normalize_structuresPass___lam__1(v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_);
lean_dec(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3156_);
lean_dec(v___y_3155_);
lean_dec_ref(v___y_3154_);
return v_res_3163_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__0(lean_object* v_00_u03b2_3172_, lean_object* v_m_3173_, lean_object* v_a_3174_){
_start:
{
uint8_t v___x_3175_; 
v___x_3175_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__0___redArg(v_m_3173_, v_a_3174_);
return v___x_3175_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__0___boxed(lean_object* v_00_u03b2_3176_, lean_object* v_m_3177_, lean_object* v_a_3178_){
_start:
{
uint8_t v_res_3179_; lean_object* v_r_3180_; 
v_res_3179_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__0(v_00_u03b2_3176_, v_m_3177_, v_a_3178_);
lean_dec(v_a_3178_);
lean_dec_ref(v_m_3177_);
v_r_3180_ = lean_box(v_res_3179_);
return v_r_3180_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3(lean_object* v_upperBound_3181_, lean_object* v_a_3182_, lean_object* v_fst_3183_, lean_object* v_snd_3184_, lean_object* v_fst_3185_, lean_object* v_interesting_3186_, lean_object* v_inst_3187_, lean_object* v_R_3188_, lean_object* v_a_3189_, lean_object* v_b_3190_, lean_object* v_c_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_){
_start:
{
lean_object* v___x_3201_; 
v___x_3201_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___redArg(v_upperBound_3181_, v_a_3182_, v_fst_3183_, v_snd_3184_, v_fst_3185_, v_interesting_3186_, v_a_3189_, v_b_3190_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_, v___y_3199_);
return v___x_3201_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3___boxed(lean_object** _args){
lean_object* v_upperBound_3202_ = _args[0];
lean_object* v_a_3203_ = _args[1];
lean_object* v_fst_3204_ = _args[2];
lean_object* v_snd_3205_ = _args[3];
lean_object* v_fst_3206_ = _args[4];
lean_object* v_interesting_3207_ = _args[5];
lean_object* v_inst_3208_ = _args[6];
lean_object* v_R_3209_ = _args[7];
lean_object* v_a_3210_ = _args[8];
lean_object* v_b_3211_ = _args[9];
lean_object* v_c_3212_ = _args[10];
lean_object* v___y_3213_ = _args[11];
lean_object* v___y_3214_ = _args[12];
lean_object* v___y_3215_ = _args[13];
lean_object* v___y_3216_ = _args[14];
lean_object* v___y_3217_ = _args[15];
lean_object* v___y_3218_ = _args[16];
lean_object* v___y_3219_ = _args[17];
lean_object* v___y_3220_ = _args[18];
lean_object* v___y_3221_ = _args[19];
_start:
{
lean_object* v_res_3222_; 
v_res_3222_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__3(v_upperBound_3202_, v_a_3203_, v_fst_3204_, v_snd_3205_, v_fst_3206_, v_interesting_3207_, v_inst_3208_, v_R_3209_, v_a_3210_, v_b_3211_, v_c_3212_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_, v___y_3219_, v___y_3220_);
lean_dec(v___y_3220_);
lean_dec_ref(v___y_3219_);
lean_dec(v___y_3218_);
lean_dec_ref(v___y_3217_);
lean_dec(v___y_3216_);
lean_dec_ref(v___y_3215_);
lean_dec(v___y_3214_);
lean_dec_ref(v___y_3213_);
lean_dec_ref(v_interesting_3207_);
lean_dec_ref(v_snd_3205_);
lean_dec(v_upperBound_3202_);
return v_res_3222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__4(lean_object* v___x_3223_, lean_object* v_interesting_3224_, lean_object* v_inst_3225_, lean_object* v_a_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_){
_start:
{
lean_object* v___x_3236_; 
v___x_3236_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__4___redArg(v___x_3223_, v_interesting_3224_, v_a_3226_, v___y_3227_, v___y_3228_, v___y_3229_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_3233_, v___y_3234_);
return v___x_3236_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__4___boxed(lean_object* v___x_3237_, lean_object* v_interesting_3238_, lean_object* v_inst_3239_, lean_object* v_a_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_){
_start:
{
lean_object* v_res_3250_; 
v_res_3250_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__4(v___x_3237_, v_interesting_3238_, v_inst_3239_, v_a_3240_, v___y_3241_, v___y_3242_, v___y_3243_, v___y_3244_, v___y_3245_, v___y_3246_, v___y_3247_, v___y_3248_);
lean_dec(v___y_3248_);
lean_dec_ref(v___y_3247_);
lean_dec(v___y_3246_);
lean_dec_ref(v___y_3245_);
lean_dec(v___y_3244_);
lean_dec_ref(v___y_3243_);
lean_dec(v___y_3242_);
lean_dec_ref(v___y_3241_);
lean_dec_ref(v_interesting_3238_);
return v_res_3250_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5(lean_object* v_as_3251_, size_t v_i_3252_, size_t v_stop_3253_, lean_object* v_b_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_){
_start:
{
lean_object* v___x_3264_; 
v___x_3264_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___redArg(v_as_3251_, v_i_3252_, v_stop_3253_, v_b_3254_, v___y_3259_, v___y_3260_, v___y_3261_, v___y_3262_);
return v___x_3264_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5___boxed(lean_object* v_as_3265_, lean_object* v_i_3266_, lean_object* v_stop_3267_, lean_object* v_b_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_){
_start:
{
size_t v_i_boxed_3278_; size_t v_stop_boxed_3279_; lean_object* v_res_3280_; 
v_i_boxed_3278_ = lean_unbox_usize(v_i_3266_);
lean_dec(v_i_3266_);
v_stop_boxed_3279_ = lean_unbox_usize(v_stop_3267_);
lean_dec(v_stop_3267_);
v_res_3280_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__5(v_as_3265_, v_i_boxed_3278_, v_stop_boxed_3279_, v_b_3268_, v___y_3269_, v___y_3270_, v___y_3271_, v___y_3272_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_);
lean_dec(v___y_3276_);
lean_dec_ref(v___y_3275_);
lean_dec(v___y_3274_);
lean_dec_ref(v___y_3273_);
lean_dec(v___y_3272_);
lean_dec_ref(v___y_3271_);
lean_dec(v___y_3270_);
lean_dec_ref(v___y_3269_);
lean_dec_ref(v_as_3265_);
return v_res_3280_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2_spec__5(lean_object* v___x_3281_, lean_object* v_interesting_3282_, lean_object* v_as_3283_, size_t v_sz_3284_, size_t v_i_3285_, lean_object* v_b_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_){
_start:
{
lean_object* v___x_3296_; 
v___x_3296_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2_spec__5___redArg(v___x_3281_, v_interesting_3282_, v_as_3283_, v_sz_3284_, v_i_3285_, v_b_3286_, v___y_3290_);
return v___x_3296_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2_spec__5___boxed(lean_object* v___x_3297_, lean_object* v_interesting_3298_, lean_object* v_as_3299_, lean_object* v_sz_3300_, lean_object* v_i_3301_, lean_object* v_b_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_){
_start:
{
size_t v_sz_boxed_3312_; size_t v_i_boxed_3313_; lean_object* v_res_3314_; 
v_sz_boxed_3312_ = lean_unbox_usize(v_sz_3300_);
lean_dec(v_sz_3300_);
v_i_boxed_3313_ = lean_unbox_usize(v_i_3301_);
lean_dec(v_i_3301_);
v_res_3314_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__2_spec__5(v___x_3297_, v_interesting_3298_, v_as_3299_, v_sz_boxed_3312_, v_i_boxed_3313_, v_b_3302_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_);
lean_dec(v___y_3310_);
lean_dec_ref(v___y_3309_);
lean_dec(v___y_3308_);
lean_dec_ref(v___y_3307_);
lean_dec(v___y_3306_);
lean_dec_ref(v___y_3305_);
lean_dec(v___y_3304_);
lean_dec_ref(v___y_3303_);
lean_dec_ref(v_as_3299_);
lean_dec_ref(v_interesting_3298_);
lean_dec(v___x_3297_);
return v_res_3314_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3_spec__9(lean_object* v___x_3315_, lean_object* v_interesting_3316_, lean_object* v_as_3317_, size_t v_sz_3318_, size_t v_i_3319_, lean_object* v_b_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_){
_start:
{
lean_object* v___x_3330_; 
v___x_3330_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3_spec__9___redArg(v___x_3315_, v_interesting_3316_, v_as_3317_, v_sz_3318_, v_i_3319_, v_b_3320_, v___y_3324_);
return v___x_3330_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3_spec__9___boxed(lean_object* v___x_3331_, lean_object* v_interesting_3332_, lean_object* v_as_3333_, lean_object* v_sz_3334_, lean_object* v_i_3335_, lean_object* v_b_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_){
_start:
{
size_t v_sz_boxed_3346_; size_t v_i_boxed_3347_; lean_object* v_res_3348_; 
v_sz_boxed_3346_ = lean_unbox_usize(v_sz_3334_);
lean_dec(v_sz_3334_);
v_i_boxed_3347_ = lean_unbox_usize(v_i_3335_);
lean_dec(v_i_3335_);
v_res_3348_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Tactic_BVDecide_Normalize_structuresPass_spec__1_spec__1_spec__3_spec__9(v___x_3331_, v_interesting_3332_, v_as_3333_, v_sz_boxed_3346_, v_i_boxed_3347_, v_b_3336_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_);
lean_dec(v___y_3344_);
lean_dec_ref(v___y_3343_);
lean_dec(v___y_3342_);
lean_dec_ref(v___y_3341_);
lean_dec(v___y_3340_);
lean_dec_ref(v___y_3339_);
lean_dec(v___y_3338_);
lean_dec_ref(v___y_3337_);
lean_dec_ref(v_as_3333_);
lean_dec_ref(v_interesting_3332_);
lean_dec(v___x_3331_);
return v_res_3348_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_TypeAnalysis(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Ext(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Theorems(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Structures(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_TypeAnalysis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Theorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Structures(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_TypeAnalysis(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Ext(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Theorems(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Structures(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_TypeAnalysis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Theorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Structures(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Structures(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Normalize_Structures(builtin);
}
#ifdef __cplusplus
}
#endif
