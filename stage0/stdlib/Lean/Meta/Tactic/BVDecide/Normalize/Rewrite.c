// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Normalize.Rewrite
// Imports: public import Lean.Meta.Tactic.BVDecide.Normalize.Basic import Lean.Meta.Tactic.BVDecide.Normalize.Simproc import Lean.Meta.Sym.Simp.Rewrite import Lean.Meta.Sym.Simp.EvalGround
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_evalGround___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_dischargeNone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Meta_Tactic_BVDecide_bvNormalizeExt;
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_dischargeNone___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__7___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__3_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__5_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__6;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "  ==>  "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__7_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__8;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "rewriteRules"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__1_value),LEAN_SCALAR_PTR_LITERAL(39, 217, 1, 104, 84, 94, 139, 227)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__7(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___redArg___lam__0(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_){
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
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___redArg___lam__0___boxed(lean_object* v_x_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___redArg___lam__0(v_x_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___redArg(lean_object* v_mvarId_23_, lean_object* v_x_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v___f_34_; lean_object* v___x_35_; 
lean_inc(v___y_28_);
lean_inc_ref(v___y_27_);
lean_inc(v___y_26_);
lean_inc_ref(v___y_25_);
v___f_34_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___redArg___lam__0___boxed), 10, 5);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___redArg___boxed(lean_object* v_mvarId_44_, lean_object* v_x_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___redArg(v_mvarId_44_, v_x_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3(lean_object* v_00_u03b1_56_, lean_object* v_mvarId_57_, lean_object* v_x_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___redArg(v_mvarId_57_, v_x_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___boxed(lean_object* v_00_u03b1_69_, lean_object* v_mvarId_70_, lean_object* v_x_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3(v_00_u03b1_69_, v_mvarId_70_, v_x_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0(lean_object* v_x_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__0));
v___x_96_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___boxed(lean_object* v_x_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0(v_x_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_);
lean_dec(v___y_106_);
lean_dec_ref(v___y_105_);
lean_dec(v___y_104_);
lean_dec_ref(v___y_103_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_101_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v_x_97_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1(lean_object* v_a_110_, lean_object* v_x_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1___closed__0));
v___x_124_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_110_, v___x_123_, v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_, v___y_121_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1___boxed(lean_object* v_a_125_, lean_object* v_x_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1(v_a_125_, v_x_126_, v___y_127_, v___y_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_);
lean_dec(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
lean_dec(v___y_132_);
lean_dec_ref(v___y_131_);
lean_dec(v___y_130_);
lean_dec_ref(v___y_129_);
lean_dec(v___y_128_);
lean_dec_ref(v_a_125_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2(lean_object* v___f_139_, lean_object* v_x_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_){
_start:
{
lean_object* v___x_152_; 
lean_inc_ref(v___y_141_);
v___x_152_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteSimproc(v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_);
if (lean_obj_tag(v___x_152_) == 0)
{
lean_object* v_a_153_; lean_object* v___x_154_; 
v_a_153_ = lean_ctor_get(v___x_152_, 0);
lean_inc(v_a_153_);
v___x_154_ = lean_box(0);
if (lean_obj_tag(v_a_153_) == 0)
{
uint8_t v_done_155_; 
v_done_155_ = lean_ctor_get_uint8(v_a_153_, 0);
if (v_done_155_ == 0)
{
uint8_t v_contextDependent_156_; lean_object* v___x_157_; 
lean_dec_ref_known(v___x_152_, 1);
v_contextDependent_156_ = lean_ctor_get_uint8(v_a_153_, 1);
lean_dec_ref_known(v_a_153_, 0);
lean_inc(v___y_150_);
lean_inc_ref(v___y_149_);
lean_inc(v___y_148_);
lean_inc_ref(v___y_147_);
lean_inc(v___y_146_);
lean_inc_ref(v___y_145_);
lean_inc(v___y_144_);
lean_inc_ref(v___y_143_);
lean_inc(v___y_142_);
v___x_157_ = lean_apply_12(v___f_139_, v___x_154_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, lean_box(0));
if (lean_obj_tag(v___x_157_) == 0)
{
lean_object* v_a_158_; uint8_t v___y_160_; 
v_a_158_ = lean_ctor_get(v___x_157_, 0);
lean_inc(v_a_158_);
if (v_contextDependent_156_ == 0)
{
lean_dec(v_a_158_);
return v___x_157_;
}
else
{
if (lean_obj_tag(v_a_158_) == 0)
{
uint8_t v_contextDependent_170_; 
v_contextDependent_170_ = lean_ctor_get_uint8(v_a_158_, 1);
v___y_160_ = v_contextDependent_170_;
goto v___jp_159_;
}
else
{
uint8_t v_contextDependent_171_; 
v_contextDependent_171_ = lean_ctor_get_uint8(v_a_158_, sizeof(void*)*2 + 1);
v___y_160_ = v_contextDependent_171_;
goto v___jp_159_;
}
}
v___jp_159_:
{
if (v___y_160_ == 0)
{
lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_168_; 
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_168_ == 0)
{
lean_object* v_unused_169_; 
v_unused_169_ = lean_ctor_get(v___x_157_, 0);
lean_dec(v_unused_169_);
v___x_162_ = v___x_157_;
v_isShared_163_ = v_isSharedCheck_168_;
goto v_resetjp_161_;
}
else
{
lean_dec(v___x_157_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_168_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_164_; lean_object* v___x_166_; 
v___x_164_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_158_);
if (v_isShared_163_ == 0)
{
lean_ctor_set(v___x_162_, 0, v___x_164_);
v___x_166_ = v___x_162_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v___x_164_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
}
else
{
lean_dec(v_a_158_);
return v___x_157_;
}
}
}
else
{
return v___x_157_;
}
}
else
{
lean_dec_ref_known(v_a_153_, 0);
lean_dec_ref(v___y_141_);
lean_dec_ref(v___f_139_);
return v___x_152_;
}
}
else
{
uint8_t v_done_172_; 
v_done_172_ = lean_ctor_get_uint8(v_a_153_, sizeof(void*)*2);
if (v_done_172_ == 0)
{
lean_object* v_e_x27_173_; lean_object* v_proof_174_; uint8_t v_contextDependent_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_225_; 
lean_dec_ref_known(v___x_152_, 1);
v_e_x27_173_ = lean_ctor_get(v_a_153_, 0);
v_proof_174_ = lean_ctor_get(v_a_153_, 1);
v_contextDependent_175_ = lean_ctor_get_uint8(v_a_153_, sizeof(void*)*2 + 1);
v_isSharedCheck_225_ = !lean_is_exclusive(v_a_153_);
if (v_isSharedCheck_225_ == 0)
{
v___x_177_ = v_a_153_;
v_isShared_178_ = v_isSharedCheck_225_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_proof_174_);
lean_inc(v_e_x27_173_);
lean_dec(v_a_153_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_225_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_179_; 
lean_inc(v___y_150_);
lean_inc_ref(v___y_149_);
lean_inc(v___y_148_);
lean_inc_ref(v___y_147_);
lean_inc(v___y_146_);
lean_inc_ref(v___y_145_);
lean_inc(v___y_144_);
lean_inc_ref(v___y_143_);
lean_inc(v___y_142_);
lean_inc_ref(v_e_x27_173_);
v___x_179_ = lean_apply_12(v___f_139_, v___x_154_, v_e_x27_173_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, lean_box(0));
if (lean_obj_tag(v___x_179_) == 0)
{
lean_object* v_a_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_224_; 
v_a_180_ = lean_ctor_get(v___x_179_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_179_);
if (v_isSharedCheck_224_ == 0)
{
v___x_182_ = v___x_179_;
v_isShared_183_ = v_isSharedCheck_224_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_a_180_);
lean_dec(v___x_179_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_224_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
if (lean_obj_tag(v_a_180_) == 0)
{
uint8_t v_done_184_; uint8_t v_contextDependent_185_; uint8_t v___y_187_; 
lean_dec_ref(v___y_141_);
v_done_184_ = lean_ctor_get_uint8(v_a_180_, 0);
v_contextDependent_185_ = lean_ctor_get_uint8(v_a_180_, 1);
lean_dec_ref_known(v_a_180_, 0);
if (v_contextDependent_175_ == 0)
{
v___y_187_ = v_contextDependent_185_;
goto v___jp_186_;
}
else
{
v___y_187_ = v_contextDependent_175_;
goto v___jp_186_;
}
v___jp_186_:
{
lean_object* v___x_189_; 
if (v_isShared_178_ == 0)
{
v___x_189_ = v___x_177_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v_e_x27_173_);
lean_ctor_set(v_reuseFailAlloc_193_, 1, v_proof_174_);
v___x_189_ = v_reuseFailAlloc_193_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
lean_object* v___x_191_; 
lean_ctor_set_uint8(v___x_189_, sizeof(void*)*2, v_done_184_);
lean_ctor_set_uint8(v___x_189_, sizeof(void*)*2 + 1, v___y_187_);
if (v_isShared_183_ == 0)
{
lean_ctor_set(v___x_182_, 0, v___x_189_);
v___x_191_ = v___x_182_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v___x_189_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
}
}
else
{
lean_object* v_e_x27_194_; lean_object* v_proof_195_; uint8_t v_done_196_; uint8_t v_contextDependent_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_223_; 
lean_del_object(v___x_182_);
lean_del_object(v___x_177_);
v_e_x27_194_ = lean_ctor_get(v_a_180_, 0);
v_proof_195_ = lean_ctor_get(v_a_180_, 1);
v_done_196_ = lean_ctor_get_uint8(v_a_180_, sizeof(void*)*2);
v_contextDependent_197_ = lean_ctor_get_uint8(v_a_180_, sizeof(void*)*2 + 1);
v_isSharedCheck_223_ = !lean_is_exclusive(v_a_180_);
if (v_isSharedCheck_223_ == 0)
{
v___x_199_ = v_a_180_;
v_isShared_200_ = v_isSharedCheck_223_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_proof_195_);
lean_inc(v_e_x27_194_);
lean_dec(v_a_180_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_223_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_201_; 
lean_inc_ref(v_e_x27_194_);
v___x_201_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_141_, v_e_x27_173_, v_proof_174_, v_e_x27_194_, v_proof_195_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v_a_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_214_; 
v_a_202_ = lean_ctor_get(v___x_201_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_214_ == 0)
{
v___x_204_ = v___x_201_;
v_isShared_205_ = v_isSharedCheck_214_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_a_202_);
lean_dec(v___x_201_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_214_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
uint8_t v___y_207_; 
if (v_contextDependent_175_ == 0)
{
v___y_207_ = v_contextDependent_197_;
goto v___jp_206_;
}
else
{
v___y_207_ = v_contextDependent_175_;
goto v___jp_206_;
}
v___jp_206_:
{
lean_object* v___x_209_; 
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 1, v_a_202_);
v___x_209_ = v___x_199_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_e_x27_194_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v_a_202_);
lean_ctor_set_uint8(v_reuseFailAlloc_213_, sizeof(void*)*2, v_done_196_);
v___x_209_ = v_reuseFailAlloc_213_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
lean_object* v___x_211_; 
lean_ctor_set_uint8(v___x_209_, sizeof(void*)*2 + 1, v___y_207_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_209_);
v___x_211_ = v___x_204_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v___x_209_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
}
}
else
{
lean_object* v_a_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_222_; 
lean_del_object(v___x_199_);
lean_dec_ref(v_e_x27_194_);
v_a_215_ = lean_ctor_get(v___x_201_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_222_ == 0)
{
v___x_217_ = v___x_201_;
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_a_215_);
lean_dec(v___x_201_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_220_; 
if (v_isShared_218_ == 0)
{
v___x_220_ = v___x_217_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_a_215_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_177_);
lean_dec_ref(v_proof_174_);
lean_dec_ref(v_e_x27_173_);
lean_dec_ref(v___y_141_);
return v___x_179_;
}
}
}
else
{
lean_dec_ref_known(v_a_153_, 2);
lean_dec_ref(v___y_141_);
lean_dec_ref(v___f_139_);
return v___x_152_;
}
}
}
else
{
lean_dec_ref(v___y_141_);
lean_dec_ref(v___f_139_);
return v___x_152_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2___boxed(lean_object* v___f_226_, lean_object* v_x_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2(v___f_226_, v_x_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_, v___y_237_);
lean_dec(v___y_237_);
lean_dec_ref(v___y_236_);
lean_dec(v___y_235_);
lean_dec_ref(v___y_234_);
lean_dec(v___y_233_);
lean_dec_ref(v___y_232_);
lean_dec(v___y_231_);
lean_dec_ref(v___y_230_);
lean_dec(v___y_229_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3(lean_object* v___x_240_, lean_object* v___f_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
lean_object* v___x_253_; 
lean_inc_ref(v___y_242_);
v___x_253_ = l_Lean_Meta_Sym_Simp_evalGround___redArg(v___x_240_, v___y_242_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_);
if (lean_obj_tag(v___x_253_) == 0)
{
lean_object* v_a_254_; lean_object* v___x_255_; 
v_a_254_ = lean_ctor_get(v___x_253_, 0);
lean_inc(v_a_254_);
v___x_255_ = lean_box(0);
if (lean_obj_tag(v_a_254_) == 0)
{
uint8_t v_done_256_; 
v_done_256_ = lean_ctor_get_uint8(v_a_254_, 0);
if (v_done_256_ == 0)
{
uint8_t v_contextDependent_257_; lean_object* v___x_258_; 
lean_dec_ref_known(v___x_253_, 1);
v_contextDependent_257_ = lean_ctor_get_uint8(v_a_254_, 1);
lean_dec_ref_known(v_a_254_, 0);
v___x_258_ = lean_apply_12(v___f_241_, v___x_255_, v___y_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_, lean_box(0));
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v_a_259_; uint8_t v___y_261_; 
v_a_259_ = lean_ctor_get(v___x_258_, 0);
lean_inc(v_a_259_);
if (v_contextDependent_257_ == 0)
{
lean_dec(v_a_259_);
return v___x_258_;
}
else
{
if (lean_obj_tag(v_a_259_) == 0)
{
uint8_t v_contextDependent_271_; 
v_contextDependent_271_ = lean_ctor_get_uint8(v_a_259_, 1);
v___y_261_ = v_contextDependent_271_;
goto v___jp_260_;
}
else
{
uint8_t v_contextDependent_272_; 
v_contextDependent_272_ = lean_ctor_get_uint8(v_a_259_, sizeof(void*)*2 + 1);
v___y_261_ = v_contextDependent_272_;
goto v___jp_260_;
}
}
v___jp_260_:
{
if (v___y_261_ == 0)
{
lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_269_; 
v_isSharedCheck_269_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_269_ == 0)
{
lean_object* v_unused_270_; 
v_unused_270_ = lean_ctor_get(v___x_258_, 0);
lean_dec(v_unused_270_);
v___x_263_ = v___x_258_;
v_isShared_264_ = v_isSharedCheck_269_;
goto v_resetjp_262_;
}
else
{
lean_dec(v___x_258_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_269_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_265_; lean_object* v___x_267_; 
v___x_265_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_259_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 0, v___x_265_);
v___x_267_ = v___x_263_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_265_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
else
{
lean_dec(v_a_259_);
return v___x_258_;
}
}
}
else
{
return v___x_258_;
}
}
else
{
lean_dec_ref_known(v_a_254_, 0);
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
lean_dec(v___y_245_);
lean_dec_ref(v___y_244_);
lean_dec(v___y_243_);
lean_dec_ref(v___y_242_);
lean_dec_ref(v___f_241_);
return v___x_253_;
}
}
else
{
uint8_t v_done_273_; 
v_done_273_ = lean_ctor_get_uint8(v_a_254_, sizeof(void*)*2);
if (v_done_273_ == 0)
{
lean_object* v_e_x27_274_; lean_object* v_proof_275_; uint8_t v_contextDependent_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_326_; 
lean_dec_ref_known(v___x_253_, 1);
v_e_x27_274_ = lean_ctor_get(v_a_254_, 0);
v_proof_275_ = lean_ctor_get(v_a_254_, 1);
v_contextDependent_276_ = lean_ctor_get_uint8(v_a_254_, sizeof(void*)*2 + 1);
v_isSharedCheck_326_ = !lean_is_exclusive(v_a_254_);
if (v_isSharedCheck_326_ == 0)
{
v___x_278_ = v_a_254_;
v_isShared_279_ = v_isSharedCheck_326_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_proof_275_);
lean_inc(v_e_x27_274_);
lean_dec(v_a_254_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_326_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_280_; 
lean_inc(v___y_251_);
lean_inc_ref(v___y_250_);
lean_inc(v___y_249_);
lean_inc_ref(v___y_248_);
lean_inc(v___y_247_);
lean_inc_ref(v_e_x27_274_);
v___x_280_ = lean_apply_12(v___f_241_, v___x_255_, v_e_x27_274_, v___y_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_, lean_box(0));
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_325_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_325_ == 0)
{
v___x_283_ = v___x_280_;
v_isShared_284_ = v_isSharedCheck_325_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_280_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_325_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
if (lean_obj_tag(v_a_281_) == 0)
{
uint8_t v_done_285_; uint8_t v_contextDependent_286_; uint8_t v___y_288_; 
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_242_);
v_done_285_ = lean_ctor_get_uint8(v_a_281_, 0);
v_contextDependent_286_ = lean_ctor_get_uint8(v_a_281_, 1);
lean_dec_ref_known(v_a_281_, 0);
if (v_contextDependent_276_ == 0)
{
v___y_288_ = v_contextDependent_286_;
goto v___jp_287_;
}
else
{
v___y_288_ = v_contextDependent_276_;
goto v___jp_287_;
}
v___jp_287_:
{
lean_object* v___x_290_; 
if (v_isShared_279_ == 0)
{
v___x_290_ = v___x_278_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_e_x27_274_);
lean_ctor_set(v_reuseFailAlloc_294_, 1, v_proof_275_);
v___x_290_ = v_reuseFailAlloc_294_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
lean_object* v___x_292_; 
lean_ctor_set_uint8(v___x_290_, sizeof(void*)*2, v_done_285_);
lean_ctor_set_uint8(v___x_290_, sizeof(void*)*2 + 1, v___y_288_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 0, v___x_290_);
v___x_292_ = v___x_283_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v___x_290_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
else
{
lean_object* v_e_x27_295_; lean_object* v_proof_296_; uint8_t v_done_297_; uint8_t v_contextDependent_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_324_; 
lean_del_object(v___x_283_);
lean_del_object(v___x_278_);
v_e_x27_295_ = lean_ctor_get(v_a_281_, 0);
v_proof_296_ = lean_ctor_get(v_a_281_, 1);
v_done_297_ = lean_ctor_get_uint8(v_a_281_, sizeof(void*)*2);
v_contextDependent_298_ = lean_ctor_get_uint8(v_a_281_, sizeof(void*)*2 + 1);
v_isSharedCheck_324_ = !lean_is_exclusive(v_a_281_);
if (v_isSharedCheck_324_ == 0)
{
v___x_300_ = v_a_281_;
v_isShared_301_ = v_isSharedCheck_324_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_proof_296_);
lean_inc(v_e_x27_295_);
lean_dec(v_a_281_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_324_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_302_; 
lean_inc_ref(v_e_x27_295_);
v___x_302_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_242_, v_e_x27_274_, v_proof_275_, v_e_x27_295_, v_proof_296_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_);
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v___y_247_);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_315_; 
v_a_303_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_315_ == 0)
{
v___x_305_ = v___x_302_;
v_isShared_306_ = v_isSharedCheck_315_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v___x_302_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_315_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
uint8_t v___y_308_; 
if (v_contextDependent_276_ == 0)
{
v___y_308_ = v_contextDependent_298_;
goto v___jp_307_;
}
else
{
v___y_308_ = v_contextDependent_276_;
goto v___jp_307_;
}
v___jp_307_:
{
lean_object* v___x_310_; 
if (v_isShared_301_ == 0)
{
lean_ctor_set(v___x_300_, 1, v_a_303_);
v___x_310_ = v___x_300_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_e_x27_295_);
lean_ctor_set(v_reuseFailAlloc_314_, 1, v_a_303_);
lean_ctor_set_uint8(v_reuseFailAlloc_314_, sizeof(void*)*2, v_done_297_);
v___x_310_ = v_reuseFailAlloc_314_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
lean_object* v___x_312_; 
lean_ctor_set_uint8(v___x_310_, sizeof(void*)*2 + 1, v___y_308_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_310_);
v___x_312_ = v___x_305_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_310_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
}
}
else
{
lean_object* v_a_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_323_; 
lean_del_object(v___x_300_);
lean_dec_ref(v_e_x27_295_);
v_a_316_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_323_ == 0)
{
v___x_318_ = v___x_302_;
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_a_316_);
lean_dec(v___x_302_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v___x_321_; 
if (v_isShared_319_ == 0)
{
v___x_321_ = v___x_318_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_a_316_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_278_);
lean_dec_ref(v_proof_275_);
lean_dec_ref(v_e_x27_274_);
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_242_);
return v___x_280_;
}
}
}
else
{
lean_dec_ref_known(v_a_254_, 2);
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
lean_dec(v___y_245_);
lean_dec_ref(v___y_244_);
lean_dec(v___y_243_);
lean_dec_ref(v___y_242_);
lean_dec_ref(v___f_241_);
return v___x_253_;
}
}
}
else
{
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
lean_dec(v___y_245_);
lean_dec_ref(v___y_244_);
lean_dec(v___y_243_);
lean_dec_ref(v___y_242_);
lean_dec_ref(v___f_241_);
return v___x_253_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3___boxed(lean_object* v___x_327_, lean_object* v___f_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3(v___x_327_, v___f_328_, v___y_329_, v___y_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
lean_dec(v___x_327_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0(lean_object* v_msgData_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v___x_347_; lean_object* v_env_348_; lean_object* v___x_349_; lean_object* v_mctx_350_; lean_object* v_lctx_351_; lean_object* v_options_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_347_ = lean_st_ref_get(v___y_345_);
v_env_348_ = lean_ctor_get(v___x_347_, 0);
lean_inc_ref(v_env_348_);
lean_dec(v___x_347_);
v___x_349_ = lean_st_ref_get(v___y_343_);
v_mctx_350_ = lean_ctor_get(v___x_349_, 0);
lean_inc_ref(v_mctx_350_);
lean_dec(v___x_349_);
v_lctx_351_ = lean_ctor_get(v___y_342_, 2);
v_options_352_ = lean_ctor_get(v___y_344_, 2);
lean_inc_ref(v_options_352_);
lean_inc_ref(v_lctx_351_);
v___x_353_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_353_, 0, v_env_348_);
lean_ctor_set(v___x_353_, 1, v_mctx_350_);
lean_ctor_set(v___x_353_, 2, v_lctx_351_);
lean_ctor_set(v___x_353_, 3, v_options_352_);
v___x_354_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
lean_ctor_set(v___x_354_, 1, v_msgData_341_);
v___x_355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_355_, 0, v___x_354_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0___boxed(lean_object* v_msgData_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0(v_msgData_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
return v_res_362_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_363_; double v___x_364_; 
v___x_363_ = lean_unsigned_to_nat(0u);
v___x_364_ = lean_float_of_nat(v___x_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg(lean_object* v_cls_368_, lean_object* v_msg_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_){
_start:
{
lean_object* v_ref_375_; lean_object* v___x_376_; lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_421_; 
v_ref_375_ = lean_ctor_get(v___y_372_, 5);
v___x_376_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0(v_msg_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_);
v_a_377_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_421_ == 0)
{
v___x_379_ = v___x_376_;
v_isShared_380_ = v_isSharedCheck_421_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_376_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_421_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_381_; lean_object* v_traceState_382_; lean_object* v_env_383_; lean_object* v_nextMacroScope_384_; lean_object* v_ngen_385_; lean_object* v_auxDeclNGen_386_; lean_object* v_cache_387_; lean_object* v_messages_388_; lean_object* v_infoState_389_; lean_object* v_snapshotTasks_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_420_; 
v___x_381_ = lean_st_ref_take(v___y_373_);
v_traceState_382_ = lean_ctor_get(v___x_381_, 4);
v_env_383_ = lean_ctor_get(v___x_381_, 0);
v_nextMacroScope_384_ = lean_ctor_get(v___x_381_, 1);
v_ngen_385_ = lean_ctor_get(v___x_381_, 2);
v_auxDeclNGen_386_ = lean_ctor_get(v___x_381_, 3);
v_cache_387_ = lean_ctor_get(v___x_381_, 5);
v_messages_388_ = lean_ctor_get(v___x_381_, 6);
v_infoState_389_ = lean_ctor_get(v___x_381_, 7);
v_snapshotTasks_390_ = lean_ctor_get(v___x_381_, 8);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_420_ == 0)
{
v___x_392_ = v___x_381_;
v_isShared_393_ = v_isSharedCheck_420_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_snapshotTasks_390_);
lean_inc(v_infoState_389_);
lean_inc(v_messages_388_);
lean_inc(v_cache_387_);
lean_inc(v_traceState_382_);
lean_inc(v_auxDeclNGen_386_);
lean_inc(v_ngen_385_);
lean_inc(v_nextMacroScope_384_);
lean_inc(v_env_383_);
lean_dec(v___x_381_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_420_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
uint64_t v_tid_394_; lean_object* v_traces_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_419_; 
v_tid_394_ = lean_ctor_get_uint64(v_traceState_382_, sizeof(void*)*1);
v_traces_395_ = lean_ctor_get(v_traceState_382_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v_traceState_382_);
if (v_isSharedCheck_419_ == 0)
{
v___x_397_ = v_traceState_382_;
v_isShared_398_ = v_isSharedCheck_419_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_traces_395_);
lean_dec(v_traceState_382_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_419_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_399_; double v___x_400_; uint8_t v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_409_; 
v___x_399_ = lean_box(0);
v___x_400_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0);
v___x_401_ = 0;
v___x_402_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__1));
v___x_403_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_403_, 0, v_cls_368_);
lean_ctor_set(v___x_403_, 1, v___x_399_);
lean_ctor_set(v___x_403_, 2, v___x_402_);
lean_ctor_set_float(v___x_403_, sizeof(void*)*3, v___x_400_);
lean_ctor_set_float(v___x_403_, sizeof(void*)*3 + 8, v___x_400_);
lean_ctor_set_uint8(v___x_403_, sizeof(void*)*3 + 16, v___x_401_);
v___x_404_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__2));
v___x_405_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_405_, 0, v___x_403_);
lean_ctor_set(v___x_405_, 1, v_a_377_);
lean_ctor_set(v___x_405_, 2, v___x_404_);
lean_inc(v_ref_375_);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v_ref_375_);
lean_ctor_set(v___x_406_, 1, v___x_405_);
v___x_407_ = l_Lean_PersistentArray_push___redArg(v_traces_395_, v___x_406_);
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 0, v___x_407_);
v___x_409_ = v___x_397_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v___x_407_);
lean_ctor_set_uint64(v_reuseFailAlloc_418_, sizeof(void*)*1, v_tid_394_);
v___x_409_ = v_reuseFailAlloc_418_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
lean_object* v___x_411_; 
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 4, v___x_409_);
v___x_411_ = v___x_392_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_env_383_);
lean_ctor_set(v_reuseFailAlloc_417_, 1, v_nextMacroScope_384_);
lean_ctor_set(v_reuseFailAlloc_417_, 2, v_ngen_385_);
lean_ctor_set(v_reuseFailAlloc_417_, 3, v_auxDeclNGen_386_);
lean_ctor_set(v_reuseFailAlloc_417_, 4, v___x_409_);
lean_ctor_set(v_reuseFailAlloc_417_, 5, v_cache_387_);
lean_ctor_set(v_reuseFailAlloc_417_, 6, v_messages_388_);
lean_ctor_set(v_reuseFailAlloc_417_, 7, v_infoState_389_);
lean_ctor_set(v_reuseFailAlloc_417_, 8, v_snapshotTasks_390_);
v___x_411_ = v_reuseFailAlloc_417_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_415_; 
v___x_412_ = lean_st_ref_set(v___y_373_, v___x_411_);
v___x_413_ = lean_box(0);
if (v_isShared_380_ == 0)
{
lean_ctor_set(v___x_379_, 0, v___x_413_);
v___x_415_ = v___x_379_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v___x_413_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___boxed(lean_object* v_cls_422_, lean_object* v_msg_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg(v_cls_422_, v_msg_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_);
lean_dec(v___y_427_);
lean_dec_ref(v___y_426_);
lean_dec(v___y_425_);
lean_dec_ref(v___y_424_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__1(uint8_t v___x_430_, lean_object* v___f_431_, lean_object* v_____r_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_){
_start:
{
lean_object* v___x_442_; lean_object* v_rewriteCache_443_; lean_object* v_acNfCache_444_; lean_object* v_typeAnalysis_445_; lean_object* v_goal_446_; lean_object* v_hypotheses_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_457_; 
v___x_442_ = lean_st_ref_take(v___y_434_);
v_rewriteCache_443_ = lean_ctor_get(v___x_442_, 0);
v_acNfCache_444_ = lean_ctor_get(v___x_442_, 1);
v_typeAnalysis_445_ = lean_ctor_get(v___x_442_, 2);
v_goal_446_ = lean_ctor_get(v___x_442_, 3);
v_hypotheses_447_ = lean_ctor_get(v___x_442_, 4);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_457_ == 0)
{
v___x_449_ = v___x_442_;
v_isShared_450_ = v_isSharedCheck_457_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_hypotheses_447_);
lean_inc(v_goal_446_);
lean_inc(v_typeAnalysis_445_);
lean_inc(v_acNfCache_444_);
lean_inc(v_rewriteCache_443_);
lean_dec(v___x_442_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_457_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_rewriteCache_443_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v_acNfCache_444_);
lean_ctor_set(v_reuseFailAlloc_456_, 2, v_typeAnalysis_445_);
lean_ctor_set(v_reuseFailAlloc_456_, 3, v_goal_446_);
lean_ctor_set(v_reuseFailAlloc_456_, 4, v_hypotheses_447_);
v___x_452_ = v_reuseFailAlloc_456_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
lean_ctor_set_uint8(v___x_452_, sizeof(void*)*5, v___x_430_);
v___x_453_ = lean_st_ref_set(v___y_434_, v___x_452_);
v___x_454_ = lean_box(0);
lean_inc(v___y_440_);
lean_inc_ref(v___y_439_);
lean_inc(v___y_438_);
lean_inc_ref(v___y_437_);
lean_inc(v___y_436_);
lean_inc_ref(v___y_435_);
lean_inc(v___y_434_);
lean_inc_ref(v___y_433_);
v___x_455_ = lean_apply_10(v___f_431_, v___x_454_, v___y_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, lean_box(0));
return v___x_455_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__1___boxed(lean_object* v___x_458_, lean_object* v___f_459_, lean_object* v_____r_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
uint8_t v___x_29049__boxed_470_; lean_object* v_res_471_; 
v___x_29049__boxed_470_ = lean_unbox(v___x_458_);
v_res_471_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__1(v___x_29049__boxed_470_, v___f_459_, v_____r_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
lean_dec(v___y_468_);
lean_dec_ref(v___y_467_);
lean_dec(v___y_466_);
lean_dec_ref(v___y_465_);
lean_dec(v___y_464_);
lean_dec_ref(v___y_463_);
lean_dec(v___y_462_);
lean_dec_ref(v___y_461_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__6_spec__7___redArg(lean_object* v_x_472_, lean_object* v_x_473_, lean_object* v_x_474_, lean_object* v_x_475_){
_start:
{
lean_object* v_ks_476_; lean_object* v_vs_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_501_; 
v_ks_476_ = lean_ctor_get(v_x_472_, 0);
v_vs_477_ = lean_ctor_get(v_x_472_, 1);
v_isSharedCheck_501_ = !lean_is_exclusive(v_x_472_);
if (v_isSharedCheck_501_ == 0)
{
v___x_479_ = v_x_472_;
v_isShared_480_ = v_isSharedCheck_501_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_vs_477_);
lean_inc(v_ks_476_);
lean_dec(v_x_472_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_501_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_481_; uint8_t v___x_482_; 
v___x_481_ = lean_array_get_size(v_ks_476_);
v___x_482_ = lean_nat_dec_lt(v_x_473_, v___x_481_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_486_; 
lean_dec(v_x_473_);
v___x_483_ = lean_array_push(v_ks_476_, v_x_474_);
v___x_484_ = lean_array_push(v_vs_477_, v_x_475_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 1, v___x_484_);
lean_ctor_set(v___x_479_, 0, v___x_483_);
v___x_486_ = v___x_479_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_483_);
lean_ctor_set(v_reuseFailAlloc_487_, 1, v___x_484_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
else
{
lean_object* v_k_x27_488_; uint8_t v___x_489_; 
v_k_x27_488_ = lean_array_fget_borrowed(v_ks_476_, v_x_473_);
v___x_489_ = l_Lean_instBEqMVarId_beq(v_x_474_, v_k_x27_488_);
if (v___x_489_ == 0)
{
lean_object* v___x_491_; 
if (v_isShared_480_ == 0)
{
v___x_491_ = v___x_479_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_ks_476_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v_vs_477_);
v___x_491_ = v_reuseFailAlloc_495_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = lean_unsigned_to_nat(1u);
v___x_493_ = lean_nat_add(v_x_473_, v___x_492_);
lean_dec(v_x_473_);
v_x_472_ = v___x_491_;
v_x_473_ = v___x_493_;
goto _start;
}
}
else
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_499_; 
v___x_496_ = lean_array_fset(v_ks_476_, v_x_473_, v_x_474_);
v___x_497_ = lean_array_fset(v_vs_477_, v_x_473_, v_x_475_);
lean_dec(v_x_473_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 1, v___x_497_);
lean_ctor_set(v___x_479_, 0, v___x_496_);
v___x_499_ = v___x_479_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v___x_496_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v___x_497_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__6___redArg(lean_object* v_n_502_, lean_object* v_k_503_, lean_object* v_v_504_){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = lean_unsigned_to_nat(0u);
v___x_506_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__6_spec__7___redArg(v_n_502_, v___x_505_, v_k_503_, v_v_504_);
return v___x_506_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4___redArg(lean_object* v_x_508_, size_t v_x_509_, size_t v_x_510_, lean_object* v_x_511_, lean_object* v_x_512_){
_start:
{
if (lean_obj_tag(v_x_508_) == 0)
{
lean_object* v_es_513_; size_t v___x_514_; size_t v___x_515_; lean_object* v_j_516_; lean_object* v___x_517_; uint8_t v___x_518_; 
v_es_513_ = lean_ctor_get(v_x_508_, 0);
v___x_514_ = ((size_t)31ULL);
v___x_515_ = lean_usize_land(v_x_509_, v___x_514_);
v_j_516_ = lean_usize_to_nat(v___x_515_);
v___x_517_ = lean_array_get_size(v_es_513_);
v___x_518_ = lean_nat_dec_lt(v_j_516_, v___x_517_);
if (v___x_518_ == 0)
{
lean_dec(v_j_516_);
lean_dec(v_x_512_);
lean_dec(v_x_511_);
return v_x_508_;
}
else
{
lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_557_; 
lean_inc_ref(v_es_513_);
v_isSharedCheck_557_ = !lean_is_exclusive(v_x_508_);
if (v_isSharedCheck_557_ == 0)
{
lean_object* v_unused_558_; 
v_unused_558_ = lean_ctor_get(v_x_508_, 0);
lean_dec(v_unused_558_);
v___x_520_ = v_x_508_;
v_isShared_521_ = v_isSharedCheck_557_;
goto v_resetjp_519_;
}
else
{
lean_dec(v_x_508_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_557_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v_v_522_; lean_object* v___x_523_; lean_object* v_xs_x27_524_; lean_object* v___y_526_; 
v_v_522_ = lean_array_fget(v_es_513_, v_j_516_);
v___x_523_ = lean_box(0);
v_xs_x27_524_ = lean_array_fset(v_es_513_, v_j_516_, v___x_523_);
switch(lean_obj_tag(v_v_522_))
{
case 0:
{
lean_object* v_key_531_; lean_object* v_val_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_542_; 
v_key_531_ = lean_ctor_get(v_v_522_, 0);
v_val_532_ = lean_ctor_get(v_v_522_, 1);
v_isSharedCheck_542_ = !lean_is_exclusive(v_v_522_);
if (v_isSharedCheck_542_ == 0)
{
v___x_534_ = v_v_522_;
v_isShared_535_ = v_isSharedCheck_542_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_val_532_);
lean_inc(v_key_531_);
lean_dec(v_v_522_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_542_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
uint8_t v___x_536_; 
v___x_536_ = l_Lean_instBEqMVarId_beq(v_x_511_, v_key_531_);
if (v___x_536_ == 0)
{
lean_object* v___x_537_; lean_object* v___x_538_; 
lean_del_object(v___x_534_);
v___x_537_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_531_, v_val_532_, v_x_511_, v_x_512_);
v___x_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_538_, 0, v___x_537_);
v___y_526_ = v___x_538_;
goto v___jp_525_;
}
else
{
lean_object* v___x_540_; 
lean_dec(v_val_532_);
lean_dec(v_key_531_);
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 1, v_x_512_);
lean_ctor_set(v___x_534_, 0, v_x_511_);
v___x_540_ = v___x_534_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_x_511_);
lean_ctor_set(v_reuseFailAlloc_541_, 1, v_x_512_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
v___y_526_ = v___x_540_;
goto v___jp_525_;
}
}
}
}
case 1:
{
lean_object* v_node_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_555_; 
v_node_543_ = lean_ctor_get(v_v_522_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v_v_522_);
if (v_isSharedCheck_555_ == 0)
{
v___x_545_ = v_v_522_;
v_isShared_546_ = v_isSharedCheck_555_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_node_543_);
lean_dec(v_v_522_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_555_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
size_t v___x_547_; size_t v___x_548_; size_t v___x_549_; size_t v___x_550_; lean_object* v___x_551_; lean_object* v___x_553_; 
v___x_547_ = ((size_t)5ULL);
v___x_548_ = lean_usize_shift_right(v_x_509_, v___x_547_);
v___x_549_ = ((size_t)1ULL);
v___x_550_ = lean_usize_add(v_x_510_, v___x_549_);
v___x_551_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4___redArg(v_node_543_, v___x_548_, v___x_550_, v_x_511_, v_x_512_);
if (v_isShared_546_ == 0)
{
lean_ctor_set(v___x_545_, 0, v___x_551_);
v___x_553_ = v___x_545_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_551_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
v___y_526_ = v___x_553_;
goto v___jp_525_;
}
}
}
default: 
{
lean_object* v___x_556_; 
v___x_556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_556_, 0, v_x_511_);
lean_ctor_set(v___x_556_, 1, v_x_512_);
v___y_526_ = v___x_556_;
goto v___jp_525_;
}
}
v___jp_525_:
{
lean_object* v___x_527_; lean_object* v___x_529_; 
v___x_527_ = lean_array_fset(v_xs_x27_524_, v_j_516_, v___y_526_);
lean_dec(v_j_516_);
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 0, v___x_527_);
v___x_529_ = v___x_520_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_527_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
}
}
else
{
lean_object* v_ks_559_; lean_object* v_vs_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_580_; 
v_ks_559_ = lean_ctor_get(v_x_508_, 0);
v_vs_560_ = lean_ctor_get(v_x_508_, 1);
v_isSharedCheck_580_ = !lean_is_exclusive(v_x_508_);
if (v_isSharedCheck_580_ == 0)
{
v___x_562_ = v_x_508_;
v_isShared_563_ = v_isSharedCheck_580_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_vs_560_);
lean_inc(v_ks_559_);
lean_dec(v_x_508_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_580_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_565_; 
if (v_isShared_563_ == 0)
{
v___x_565_ = v___x_562_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_ks_559_);
lean_ctor_set(v_reuseFailAlloc_579_, 1, v_vs_560_);
v___x_565_ = v_reuseFailAlloc_579_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
lean_object* v_newNode_566_; uint8_t v___y_568_; size_t v___x_574_; uint8_t v___x_575_; 
v_newNode_566_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__6___redArg(v___x_565_, v_x_511_, v_x_512_);
v___x_574_ = ((size_t)7ULL);
v___x_575_ = lean_usize_dec_le(v___x_574_, v_x_510_);
if (v___x_575_ == 0)
{
lean_object* v___x_576_; lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_576_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_566_);
v___x_577_ = lean_unsigned_to_nat(4u);
v___x_578_ = lean_nat_dec_lt(v___x_576_, v___x_577_);
lean_dec(v___x_576_);
v___y_568_ = v___x_578_;
goto v___jp_567_;
}
else
{
v___y_568_ = v___x_575_;
goto v___jp_567_;
}
v___jp_567_:
{
if (v___y_568_ == 0)
{
lean_object* v_ks_569_; lean_object* v_vs_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v_ks_569_ = lean_ctor_get(v_newNode_566_, 0);
lean_inc_ref(v_ks_569_);
v_vs_570_ = lean_ctor_get(v_newNode_566_, 1);
lean_inc_ref(v_vs_570_);
lean_dec_ref(v_newNode_566_);
v___x_571_ = lean_unsigned_to_nat(0u);
v___x_572_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4___redArg___closed__0);
v___x_573_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__7___redArg(v_x_510_, v_ks_569_, v_vs_570_, v___x_571_, v___x_572_);
lean_dec_ref(v_vs_570_);
lean_dec_ref(v_ks_569_);
return v___x_573_;
}
else
{
return v_newNode_566_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__7___redArg(size_t v_depth_581_, lean_object* v_keys_582_, lean_object* v_vals_583_, lean_object* v_i_584_, lean_object* v_entries_585_){
_start:
{
lean_object* v___x_586_; uint8_t v___x_587_; 
v___x_586_ = lean_array_get_size(v_keys_582_);
v___x_587_ = lean_nat_dec_lt(v_i_584_, v___x_586_);
if (v___x_587_ == 0)
{
lean_dec(v_i_584_);
return v_entries_585_;
}
else
{
lean_object* v_k_588_; lean_object* v_v_589_; uint64_t v___x_590_; size_t v_h_591_; size_t v___x_592_; lean_object* v___x_593_; size_t v___x_594_; size_t v___x_595_; size_t v___x_596_; size_t v_h_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v_k_588_ = lean_array_fget_borrowed(v_keys_582_, v_i_584_);
v_v_589_ = lean_array_fget_borrowed(v_vals_583_, v_i_584_);
v___x_590_ = l_Lean_instHashableMVarId_hash(v_k_588_);
v_h_591_ = lean_uint64_to_usize(v___x_590_);
v___x_592_ = ((size_t)5ULL);
v___x_593_ = lean_unsigned_to_nat(1u);
v___x_594_ = ((size_t)1ULL);
v___x_595_ = lean_usize_sub(v_depth_581_, v___x_594_);
v___x_596_ = lean_usize_mul(v___x_592_, v___x_595_);
v_h_597_ = lean_usize_shift_right(v_h_591_, v___x_596_);
v___x_598_ = lean_nat_add(v_i_584_, v___x_593_);
lean_dec(v_i_584_);
lean_inc(v_v_589_);
lean_inc(v_k_588_);
v___x_599_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4___redArg(v_entries_585_, v_h_597_, v_depth_581_, v_k_588_, v_v_589_);
v_i_584_ = v___x_598_;
v_entries_585_ = v___x_599_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object* v_depth_601_, lean_object* v_keys_602_, lean_object* v_vals_603_, lean_object* v_i_604_, lean_object* v_entries_605_){
_start:
{
size_t v_depth_boxed_606_; lean_object* v_res_607_; 
v_depth_boxed_606_ = lean_unbox_usize(v_depth_601_);
lean_dec(v_depth_601_);
v_res_607_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__7___redArg(v_depth_boxed_606_, v_keys_602_, v_vals_603_, v_i_604_, v_entries_605_);
lean_dec_ref(v_vals_603_);
lean_dec_ref(v_keys_602_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_x_608_, lean_object* v_x_609_, lean_object* v_x_610_, lean_object* v_x_611_, lean_object* v_x_612_){
_start:
{
size_t v_x_29184__boxed_613_; size_t v_x_29185__boxed_614_; lean_object* v_res_615_; 
v_x_29184__boxed_613_ = lean_unbox_usize(v_x_609_);
lean_dec(v_x_609_);
v_x_29185__boxed_614_ = lean_unbox_usize(v_x_610_);
lean_dec(v_x_610_);
v_res_615_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4___redArg(v_x_608_, v_x_29184__boxed_613_, v_x_29185__boxed_614_, v_x_611_, v_x_612_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2___redArg(lean_object* v_x_616_, lean_object* v_x_617_, lean_object* v_x_618_){
_start:
{
uint64_t v___x_619_; size_t v___x_620_; size_t v___x_621_; lean_object* v___x_622_; 
v___x_619_ = l_Lean_instHashableMVarId_hash(v_x_617_);
v___x_620_ = lean_uint64_to_usize(v___x_619_);
v___x_621_ = ((size_t)1ULL);
v___x_622_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4___redArg(v_x_616_, v___x_620_, v___x_621_, v_x_617_, v_x_618_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg(lean_object* v_mvarId_623_, lean_object* v_val_624_, lean_object* v___y_625_){
_start:
{
lean_object* v___x_627_; lean_object* v_mctx_628_; lean_object* v_cache_629_; lean_object* v_zetaDeltaFVarIds_630_; lean_object* v_postponed_631_; lean_object* v_diag_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_660_; 
v___x_627_ = lean_st_ref_take(v___y_625_);
v_mctx_628_ = lean_ctor_get(v___x_627_, 0);
v_cache_629_ = lean_ctor_get(v___x_627_, 1);
v_zetaDeltaFVarIds_630_ = lean_ctor_get(v___x_627_, 2);
v_postponed_631_ = lean_ctor_get(v___x_627_, 3);
v_diag_632_ = lean_ctor_get(v___x_627_, 4);
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_627_);
if (v_isSharedCheck_660_ == 0)
{
v___x_634_ = v___x_627_;
v_isShared_635_ = v_isSharedCheck_660_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_diag_632_);
lean_inc(v_postponed_631_);
lean_inc(v_zetaDeltaFVarIds_630_);
lean_inc(v_cache_629_);
lean_inc(v_mctx_628_);
lean_dec(v___x_627_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_660_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v_depth_636_; lean_object* v_levelAssignDepth_637_; lean_object* v_lmvarCounter_638_; lean_object* v_mvarCounter_639_; lean_object* v_lDecls_640_; lean_object* v_decls_641_; lean_object* v_userNames_642_; lean_object* v_lAssignment_643_; lean_object* v_eAssignment_644_; lean_object* v_dAssignment_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_659_; 
v_depth_636_ = lean_ctor_get(v_mctx_628_, 0);
v_levelAssignDepth_637_ = lean_ctor_get(v_mctx_628_, 1);
v_lmvarCounter_638_ = lean_ctor_get(v_mctx_628_, 2);
v_mvarCounter_639_ = lean_ctor_get(v_mctx_628_, 3);
v_lDecls_640_ = lean_ctor_get(v_mctx_628_, 4);
v_decls_641_ = lean_ctor_get(v_mctx_628_, 5);
v_userNames_642_ = lean_ctor_get(v_mctx_628_, 6);
v_lAssignment_643_ = lean_ctor_get(v_mctx_628_, 7);
v_eAssignment_644_ = lean_ctor_get(v_mctx_628_, 8);
v_dAssignment_645_ = lean_ctor_get(v_mctx_628_, 9);
v_isSharedCheck_659_ = !lean_is_exclusive(v_mctx_628_);
if (v_isSharedCheck_659_ == 0)
{
v___x_647_ = v_mctx_628_;
v_isShared_648_ = v_isSharedCheck_659_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_dAssignment_645_);
lean_inc(v_eAssignment_644_);
lean_inc(v_lAssignment_643_);
lean_inc(v_userNames_642_);
lean_inc(v_decls_641_);
lean_inc(v_lDecls_640_);
lean_inc(v_mvarCounter_639_);
lean_inc(v_lmvarCounter_638_);
lean_inc(v_levelAssignDepth_637_);
lean_inc(v_depth_636_);
lean_dec(v_mctx_628_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_659_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_649_; lean_object* v___x_651_; 
v___x_649_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2___redArg(v_eAssignment_644_, v_mvarId_623_, v_val_624_);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 8, v___x_649_);
v___x_651_ = v___x_647_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_depth_636_);
lean_ctor_set(v_reuseFailAlloc_658_, 1, v_levelAssignDepth_637_);
lean_ctor_set(v_reuseFailAlloc_658_, 2, v_lmvarCounter_638_);
lean_ctor_set(v_reuseFailAlloc_658_, 3, v_mvarCounter_639_);
lean_ctor_set(v_reuseFailAlloc_658_, 4, v_lDecls_640_);
lean_ctor_set(v_reuseFailAlloc_658_, 5, v_decls_641_);
lean_ctor_set(v_reuseFailAlloc_658_, 6, v_userNames_642_);
lean_ctor_set(v_reuseFailAlloc_658_, 7, v_lAssignment_643_);
lean_ctor_set(v_reuseFailAlloc_658_, 8, v___x_649_);
lean_ctor_set(v_reuseFailAlloc_658_, 9, v_dAssignment_645_);
v___x_651_ = v_reuseFailAlloc_658_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
lean_object* v___x_653_; 
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 0, v___x_651_);
v___x_653_ = v___x_634_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v___x_651_);
lean_ctor_set(v_reuseFailAlloc_657_, 1, v_cache_629_);
lean_ctor_set(v_reuseFailAlloc_657_, 2, v_zetaDeltaFVarIds_630_);
lean_ctor_set(v_reuseFailAlloc_657_, 3, v_postponed_631_);
lean_ctor_set(v_reuseFailAlloc_657_, 4, v_diag_632_);
v___x_653_ = v_reuseFailAlloc_657_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_654_ = lean_st_ref_set(v___y_625_, v___x_653_);
v___x_655_ = lean_box(0);
v___x_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_656_, 0, v___x_655_);
return v___x_656_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___boxed(lean_object* v_mvarId_661_, lean_object* v_val_662_, lean_object* v___y_663_, lean_object* v___y_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg(v_mvarId_661_, v_val_662_, v___y_663_);
lean_dec(v___y_663_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0(lean_object* v_snd_666_, lean_object* v_a_667_, lean_object* v___x_668_, lean_object* v_____r_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_679_ = lean_array_push(v_snd_666_, v_a_667_);
v___x_680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_680_, 0, v___x_668_);
lean_ctor_set(v___x_680_, 1, v___x_679_);
v___x_681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
v___x_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_682_, 0, v___x_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0___boxed(lean_object* v_snd_683_, lean_object* v_a_684_, lean_object* v___x_685_, lean_object* v_____r_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0(v_snd_683_, v_a_684_, v___x_685_, v_____r_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_);
lean_dec(v___y_694_);
lean_dec_ref(v___y_693_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec(v___y_688_);
lean_dec_ref(v___y_687_);
return v_res_696_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__6(void){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_707_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__3));
v___x_708_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__5));
v___x_709_ = l_Lean_Name_append(v___x_708_, v___x_707_);
return v___x_709_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__8(void){
_start:
{
lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_711_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__7));
v___x_712_ = l_Lean_stringToMessageData(v___x_711_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg(lean_object* v_upperBound_713_, lean_object* v___x_714_, lean_object* v___x_715_, lean_object* v___x_716_, lean_object* v_a_717_, lean_object* v_b_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
lean_object* v___y_729_; uint8_t v___x_751_; 
v___x_751_ = lean_nat_dec_lt(v_a_717_, v_upperBound_713_);
if (v___x_751_ == 0)
{
lean_object* v___x_752_; 
lean_dec(v_a_717_);
lean_dec_ref(v___x_716_);
lean_dec_ref(v___x_715_);
v___x_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_752_, 0, v_b_718_);
return v___x_752_;
}
else
{
lean_object* v___x_753_; lean_object* v_type_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_753_ = lean_array_fget_borrowed(v___x_714_, v_a_717_);
v_type_754_ = lean_ctor_get(v___x_753_, 1);
lean_inc_ref(v_type_754_);
v___x_755_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_755_, 0, v_type_754_);
lean_inc_ref(v___x_716_);
lean_inc_ref(v___x_715_);
v___x_756_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(v___x_755_, v___x_715_, v___x_716_, v___y_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v_a_757_; lean_object* v___x_758_; 
v_a_757_ = lean_ctor_get(v___x_756_, 0);
lean_inc(v_a_757_);
lean_dec_ref_known(v___x_756_, 1);
lean_inc(v___x_753_);
v___x_758_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v___x_753_, v_a_757_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_);
if (lean_obj_tag(v___x_758_) == 0)
{
lean_object* v_a_759_; lean_object* v_snd_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_822_; 
v_a_759_ = lean_ctor_get(v___x_758_, 0);
lean_inc(v_a_759_);
lean_dec_ref_known(v___x_758_, 1);
v_snd_760_ = lean_ctor_get(v_b_718_, 1);
v_isSharedCheck_822_ = !lean_is_exclusive(v_b_718_);
if (v_isSharedCheck_822_ == 0)
{
lean_object* v_unused_823_; 
v_unused_823_ = lean_ctor_get(v_b_718_, 0);
lean_dec(v_unused_823_);
v___x_762_ = v_b_718_;
v_isShared_763_ = v_isSharedCheck_822_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_snd_760_);
lean_dec(v_b_718_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_822_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v_type_764_; lean_object* v_value_765_; uint8_t v___x_766_; 
v_type_764_ = lean_ctor_get(v_a_759_, 1);
v_value_765_ = lean_ctor_get(v_a_759_, 2);
lean_inc_ref(v_type_764_);
v___x_766_ = l_Lean_Expr_isFalse(v_type_764_);
if (v___x_766_ == 0)
{
lean_object* v___x_767_; lean_object* v___f_768_; uint8_t v___x_795_; 
lean_del_object(v___x_762_);
v___x_767_ = lean_box(0);
lean_inc(v_a_759_);
lean_inc(v_snd_760_);
v___f_768_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0___boxed), 13, 3);
lean_closure_set(v___f_768_, 0, v_snd_760_);
lean_closure_set(v___f_768_, 1, v_a_759_);
lean_closure_set(v___f_768_, 2, v___x_767_);
v___x_795_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp_beq(v___x_753_, v_a_759_);
if (v___x_795_ == 0)
{
lean_inc_ref(v_type_764_);
lean_dec(v_snd_760_);
lean_dec(v_a_759_);
goto v___jp_772_;
}
else
{
if (v___x_766_ == 0)
{
lean_object* v___x_796_; lean_object* v___x_797_; 
lean_dec_ref(v___f_768_);
v___x_796_ = lean_box(0);
v___x_797_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0(v_snd_760_, v_a_759_, v___x_767_, v___x_796_, v___y_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_);
v___y_729_ = v___x_797_;
goto v___jp_728_;
}
else
{
lean_inc_ref(v_type_764_);
lean_dec(v_snd_760_);
lean_dec(v_a_759_);
goto v___jp_772_;
}
}
v___jp_769_:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = lean_box(0);
v___x_771_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__1(v___x_751_, v___f_768_, v___x_770_, v___y_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_);
v___y_729_ = v___x_771_;
goto v___jp_728_;
}
v___jp_772_:
{
lean_object* v_options_773_; uint8_t v_hasTrace_774_; 
v_options_773_ = lean_ctor_get(v___y_725_, 2);
v_hasTrace_774_ = lean_ctor_get_uint8(v_options_773_, sizeof(void*)*1);
if (v_hasTrace_774_ == 0)
{
lean_dec_ref(v_type_764_);
goto v___jp_769_;
}
else
{
lean_object* v_inheritedTraceOptions_775_; lean_object* v___x_776_; lean_object* v___x_777_; uint8_t v___x_778_; 
v_inheritedTraceOptions_775_ = lean_ctor_get(v___y_725_, 13);
v___x_776_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__3));
v___x_777_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__6);
v___x_778_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_775_, v_options_773_, v___x_777_);
if (v___x_778_ == 0)
{
lean_dec_ref(v_type_764_);
goto v___jp_769_;
}
else
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
lean_inc_ref(v_type_754_);
v___x_779_ = l_Lean_MessageData_ofExpr(v_type_754_);
v___x_780_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___closed__8);
v___x_781_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_781_, 0, v___x_779_);
lean_ctor_set(v___x_781_, 1, v___x_780_);
v___x_782_ = l_Lean_MessageData_ofExpr(v_type_764_);
v___x_783_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_781_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
v___x_784_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg(v___x_776_, v___x_783_, v___y_723_, v___y_724_, v___y_725_, v___y_726_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; lean_object* v___x_786_; 
v_a_785_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_785_);
lean_dec_ref_known(v___x_784_, 1);
v___x_786_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__1(v___x_751_, v___f_768_, v_a_785_, v___y_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_);
v___y_729_ = v___x_786_;
goto v___jp_728_;
}
else
{
lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_794_; 
lean_dec_ref(v___f_768_);
lean_dec(v_a_717_);
lean_dec_ref(v___x_716_);
lean_dec_ref(v___x_715_);
v_a_787_ = lean_ctor_get(v___x_784_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_794_ == 0)
{
v___x_789_ = v___x_784_;
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v___x_784_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_792_; 
if (v_isShared_790_ == 0)
{
v___x_792_ = v___x_789_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_a_787_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_798_; lean_object* v_goal_799_; lean_object* v___x_800_; 
lean_inc_ref(v_value_765_);
lean_dec(v_a_759_);
lean_dec(v_a_717_);
lean_dec_ref(v___x_716_);
lean_dec_ref(v___x_715_);
v___x_798_ = lean_st_ref_get(v___y_720_);
v_goal_799_ = lean_ctor_get(v___x_798_, 3);
lean_inc(v_goal_799_);
lean_dec(v___x_798_);
v___x_800_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg(v_goal_799_, v_value_765_, v___y_724_);
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_812_; 
v_isSharedCheck_812_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_812_ == 0)
{
lean_object* v_unused_813_; 
v_unused_813_ = lean_ctor_get(v___x_800_, 0);
lean_dec(v_unused_813_);
v___x_802_ = v___x_800_;
v_isShared_803_ = v_isSharedCheck_812_;
goto v_resetjp_801_;
}
else
{
lean_dec(v___x_800_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_812_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_807_; 
v___x_804_ = lean_box(v___x_766_);
v___x_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
if (v_isShared_763_ == 0)
{
lean_ctor_set(v___x_762_, 0, v___x_805_);
v___x_807_ = v___x_762_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v___x_805_);
lean_ctor_set(v_reuseFailAlloc_811_, 1, v_snd_760_);
v___x_807_ = v_reuseFailAlloc_811_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
lean_object* v___x_809_; 
if (v_isShared_803_ == 0)
{
lean_ctor_set(v___x_802_, 0, v___x_807_);
v___x_809_ = v___x_802_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_807_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
}
else
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
lean_del_object(v___x_762_);
lean_dec(v_snd_760_);
v_a_814_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_800_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_800_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
}
}
else
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_831_; 
lean_dec_ref(v_b_718_);
lean_dec(v_a_717_);
lean_dec_ref(v___x_716_);
lean_dec_ref(v___x_715_);
v_a_824_ = lean_ctor_get(v___x_758_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_831_ == 0)
{
v___x_826_ = v___x_758_;
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_758_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_827_ == 0)
{
v___x_829_ = v___x_826_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_a_824_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
}
else
{
lean_object* v_a_832_; lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_839_; 
lean_dec_ref(v_b_718_);
lean_dec(v_a_717_);
lean_dec_ref(v___x_716_);
lean_dec_ref(v___x_715_);
v_a_832_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_839_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_839_ == 0)
{
v___x_834_ = v___x_756_;
v_isShared_835_ = v_isSharedCheck_839_;
goto v_resetjp_833_;
}
else
{
lean_inc(v_a_832_);
lean_dec(v___x_756_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_839_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
lean_object* v___x_837_; 
if (v_isShared_835_ == 0)
{
v___x_837_ = v___x_834_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v_a_832_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
return v___x_837_;
}
}
}
}
v___jp_728_:
{
if (lean_obj_tag(v___y_729_) == 0)
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_742_; 
v_a_730_ = lean_ctor_get(v___y_729_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___y_729_);
if (v_isSharedCheck_742_ == 0)
{
v___x_732_ = v___y_729_;
v_isShared_733_ = v_isSharedCheck_742_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___y_729_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_742_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
if (lean_obj_tag(v_a_730_) == 0)
{
lean_object* v_a_734_; lean_object* v___x_736_; 
lean_dec(v_a_717_);
lean_dec_ref(v___x_716_);
lean_dec_ref(v___x_715_);
v_a_734_ = lean_ctor_get(v_a_730_, 0);
lean_inc(v_a_734_);
lean_dec_ref_known(v_a_730_, 1);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 0, v_a_734_);
v___x_736_ = v___x_732_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_a_734_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
else
{
lean_object* v_a_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
lean_del_object(v___x_732_);
v_a_738_ = lean_ctor_get(v_a_730_, 0);
lean_inc(v_a_738_);
lean_dec_ref_known(v_a_730_, 1);
v___x_739_ = lean_unsigned_to_nat(1u);
v___x_740_ = lean_nat_add(v_a_717_, v___x_739_);
lean_dec(v_a_717_);
v_a_717_ = v___x_740_;
v_b_718_ = v_a_738_;
goto _start;
}
}
}
else
{
lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_750_; 
lean_dec(v_a_717_);
lean_dec_ref(v___x_716_);
lean_dec_ref(v___x_715_);
v_a_743_ = lean_ctor_get(v___y_729_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___y_729_);
if (v_isSharedCheck_750_ == 0)
{
v___x_745_ = v___y_729_;
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_dec(v___y_729_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_748_; 
if (v_isShared_746_ == 0)
{
v___x_748_ = v___x_745_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_a_743_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___boxed(lean_object* v_upperBound_840_, lean_object* v___x_841_, lean_object* v___x_842_, lean_object* v___x_843_, lean_object* v_a_844_, lean_object* v_b_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg(v_upperBound_840_, v___x_841_, v___x_842_, v___x_843_, v_a_844_, v_b_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_, v___y_853_);
lean_dec(v___y_853_);
lean_dec_ref(v___y_852_);
lean_dec(v___y_851_);
lean_dec_ref(v___y_850_);
lean_dec(v___y_849_);
lean_dec_ref(v___y_848_);
lean_dec(v___y_847_);
lean_dec_ref(v___y_846_);
lean_dec_ref(v___x_841_);
lean_dec(v_upperBound_840_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4(lean_object* v___x_856_, lean_object* v___x_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
lean_object* v___x_867_; lean_object* v_hypotheses_868_; lean_object* v___x_869_; lean_object* v_newHyps_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_867_ = lean_st_ref_get(v___y_859_);
v_hypotheses_868_ = lean_ctor_get(v___x_867_, 4);
lean_inc_ref(v_hypotheses_868_);
lean_dec(v___x_867_);
v___x_869_ = lean_array_get_size(v_hypotheses_868_);
v_newHyps_870_ = lean_mk_empty_array_with_capacity(v___x_869_);
v___x_871_ = lean_unsigned_to_nat(0u);
v___x_872_ = lean_box(0);
v___x_873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
lean_ctor_set(v___x_873_, 1, v_newHyps_870_);
v___x_874_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg(v___x_869_, v_hypotheses_868_, v___x_856_, v___x_857_, v___x_871_, v___x_873_, v___y_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_, v___y_864_, v___y_865_);
lean_dec_ref(v_hypotheses_868_);
if (lean_obj_tag(v___x_874_) == 0)
{
lean_object* v_a_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_905_; 
v_a_875_ = lean_ctor_get(v___x_874_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_905_ == 0)
{
v___x_877_ = v___x_874_;
v_isShared_878_ = v_isSharedCheck_905_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_a_875_);
lean_dec(v___x_874_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_905_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v_fst_879_; 
v_fst_879_ = lean_ctor_get(v_a_875_, 0);
if (lean_obj_tag(v_fst_879_) == 0)
{
lean_object* v_snd_880_; lean_object* v___x_881_; lean_object* v_rewriteCache_882_; lean_object* v_acNfCache_883_; lean_object* v_typeAnalysis_884_; lean_object* v_goal_885_; uint8_t v_didChange_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_899_; 
v_snd_880_ = lean_ctor_get(v_a_875_, 1);
lean_inc(v_snd_880_);
lean_dec(v_a_875_);
v___x_881_ = lean_st_ref_take(v___y_859_);
v_rewriteCache_882_ = lean_ctor_get(v___x_881_, 0);
v_acNfCache_883_ = lean_ctor_get(v___x_881_, 1);
v_typeAnalysis_884_ = lean_ctor_get(v___x_881_, 2);
v_goal_885_ = lean_ctor_get(v___x_881_, 3);
v_didChange_886_ = lean_ctor_get_uint8(v___x_881_, sizeof(void*)*5);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_899_ == 0)
{
lean_object* v_unused_900_; 
v_unused_900_ = lean_ctor_get(v___x_881_, 4);
lean_dec(v_unused_900_);
v___x_888_ = v___x_881_;
v_isShared_889_ = v_isSharedCheck_899_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_goal_885_);
lean_inc(v_typeAnalysis_884_);
lean_inc(v_acNfCache_883_);
lean_inc(v_rewriteCache_882_);
lean_dec(v___x_881_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_899_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_891_; 
if (v_isShared_889_ == 0)
{
lean_ctor_set(v___x_888_, 4, v_snd_880_);
v___x_891_ = v___x_888_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_rewriteCache_882_);
lean_ctor_set(v_reuseFailAlloc_898_, 1, v_acNfCache_883_);
lean_ctor_set(v_reuseFailAlloc_898_, 2, v_typeAnalysis_884_);
lean_ctor_set(v_reuseFailAlloc_898_, 3, v_goal_885_);
lean_ctor_set(v_reuseFailAlloc_898_, 4, v_snd_880_);
lean_ctor_set_uint8(v_reuseFailAlloc_898_, sizeof(void*)*5, v_didChange_886_);
v___x_891_ = v_reuseFailAlloc_898_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
lean_object* v___x_892_; uint8_t v___x_893_; lean_object* v___x_894_; lean_object* v___x_896_; 
v___x_892_ = lean_st_ref_set(v___y_859_, v___x_891_);
v___x_893_ = 0;
v___x_894_ = lean_box(v___x_893_);
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 0, v___x_894_);
v___x_896_ = v___x_877_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v___x_894_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
}
else
{
lean_object* v_val_901_; lean_object* v___x_903_; 
lean_inc_ref(v_fst_879_);
lean_dec(v_a_875_);
v_val_901_ = lean_ctor_get(v_fst_879_, 0);
lean_inc(v_val_901_);
lean_dec_ref_known(v_fst_879_, 1);
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 0, v_val_901_);
v___x_903_ = v___x_877_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_val_901_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
else
{
lean_object* v_a_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_913_; 
v_a_906_ = lean_ctor_get(v___x_874_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_913_ == 0)
{
v___x_908_ = v___x_874_;
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_a_906_);
lean_dec(v___x_874_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_911_; 
if (v_isShared_909_ == 0)
{
v___x_911_ = v___x_908_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_a_906_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4___boxed(lean_object* v___x_914_, lean_object* v___x_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4(v___x_914_, v___x_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
lean_dec(v___y_917_);
lean_dec_ref(v___y_916_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5(lean_object* v___x_926_, lean_object* v___f_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_){
_start:
{
lean_object* v___x_937_; 
v___x_937_ = l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg(v___x_926_, v___y_935_);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; lean_object* v___x_939_; lean_object* v_maxSteps_940_; lean_object* v_goal_941_; lean_object* v___f_942_; lean_object* v___f_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___f_947_; lean_object* v___x_948_; lean_object* v___f_949_; lean_object* v___x_950_; 
v_a_938_ = lean_ctor_get(v___x_937_, 0);
lean_inc(v_a_938_);
lean_dec_ref_known(v___x_937_, 1);
v___x_939_ = lean_st_ref_get(v___y_929_);
v_maxSteps_940_ = lean_ctor_get(v___y_928_, 1);
v_goal_941_ = lean_ctor_get(v___x_939_, 3);
lean_inc(v_goal_941_);
lean_dec(v___x_939_);
v___f_942_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1___boxed), 13, 1);
lean_closure_set(v___f_942_, 0, v_a_938_);
v___f_943_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2___boxed), 13, 1);
lean_closure_set(v___f_943_, 0, v___f_942_);
v___x_944_ = lean_unsigned_to_nat(2u);
lean_inc(v_maxSteps_940_);
v___x_945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_945_, 0, v_maxSteps_940_);
lean_ctor_set(v___x_945_, 1, v___x_944_);
v___x_946_ = lean_unsigned_to_nat(255u);
v___f_947_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3___boxed), 13, 2);
lean_closure_set(v___f_947_, 0, v___x_946_);
lean_closure_set(v___f_947_, 1, v___f_943_);
v___x_948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_948_, 0, v___f_927_);
lean_ctor_set(v___x_948_, 1, v___f_947_);
v___f_949_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4___boxed), 11, 2);
lean_closure_set(v___f_949_, 0, v___x_948_);
lean_closure_set(v___f_949_, 1, v___x_945_);
v___x_950_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___redArg(v_goal_941_, v___f_949_, v___y_928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_);
return v___x_950_;
}
else
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_958_; 
lean_dec_ref(v___f_927_);
v_a_951_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_958_ == 0)
{
v___x_953_ = v___x_937_;
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_937_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_954_ == 0)
{
v___x_956_ = v___x_953_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_951_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___boxed(lean_object* v___x_959_, lean_object* v___f_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5(v___x_959_, v___f_960_, v___y_961_, v___y_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_);
lean_dec(v___y_968_);
lean_dec_ref(v___y_967_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
lean_dec(v___y_964_);
lean_dec_ref(v___y_963_);
lean_dec(v___y_962_);
lean_dec_ref(v___y_961_);
lean_dec_ref(v___x_959_);
return v_res_970_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__3(void){
_start:
{
lean_object* v___f_975_; lean_object* v___x_976_; lean_object* v___f_977_; 
v___f_975_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__0));
v___x_976_ = l_Lean_Meta_Tactic_BVDecide_bvNormalizeExt;
v___f_977_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___boxed), 11, 2);
lean_closure_set(v___f_977_, 0, v___x_976_);
lean_closure_set(v___f_977_, 1, v___f_975_);
return v___f_977_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4(void){
_start:
{
lean_object* v___f_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
v___f_978_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__3);
v___x_979_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__2));
v___x_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_979_);
lean_ctor_set(v___x_980_, 1, v___f_978_);
return v___x_980_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass(void){
_start:
{
lean_object* v___x_981_; 
v___x_981_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0(lean_object* v_cls_982_, lean_object* v_msg_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
lean_object* v___x_993_; 
v___x_993_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg(v_cls_982_, v_msg_983_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___boxed(lean_object* v_cls_994_, lean_object* v_msg_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0(v_cls_994_, v_msg_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec_ref(v___y_1000_);
lean_dec(v___y_999_);
lean_dec_ref(v___y_998_);
lean_dec(v___y_997_);
lean_dec_ref(v___y_996_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1(lean_object* v_mvarId_1006_, lean_object* v_val_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_){
_start:
{
lean_object* v___x_1017_; 
v___x_1017_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg(v_mvarId_1006_, v_val_1007_, v___y_1013_);
return v___x_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___boxed(lean_object* v_mvarId_1018_, lean_object* v_val_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_){
_start:
{
lean_object* v_res_1029_; 
v_res_1029_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1(v_mvarId_1018_, v_val_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_);
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2(lean_object* v_upperBound_1030_, lean_object* v___x_1031_, lean_object* v___x_1032_, lean_object* v___x_1033_, lean_object* v_inst_1034_, lean_object* v_R_1035_, lean_object* v_a_1036_, lean_object* v_b_1037_, lean_object* v_c_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_){
_start:
{
lean_object* v___x_1048_; 
v___x_1048_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg(v_upperBound_1030_, v___x_1031_, v___x_1032_, v___x_1033_, v_a_1036_, v_b_1037_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_);
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___boxed(lean_object** _args){
lean_object* v_upperBound_1049_ = _args[0];
lean_object* v___x_1050_ = _args[1];
lean_object* v___x_1051_ = _args[2];
lean_object* v___x_1052_ = _args[3];
lean_object* v_inst_1053_ = _args[4];
lean_object* v_R_1054_ = _args[5];
lean_object* v_a_1055_ = _args[6];
lean_object* v_b_1056_ = _args[7];
lean_object* v_c_1057_ = _args[8];
lean_object* v___y_1058_ = _args[9];
lean_object* v___y_1059_ = _args[10];
lean_object* v___y_1060_ = _args[11];
lean_object* v___y_1061_ = _args[12];
lean_object* v___y_1062_ = _args[13];
lean_object* v___y_1063_ = _args[14];
lean_object* v___y_1064_ = _args[15];
lean_object* v___y_1065_ = _args[16];
lean_object* v___y_1066_ = _args[17];
_start:
{
lean_object* v_res_1067_; 
v_res_1067_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2(v_upperBound_1049_, v___x_1050_, v___x_1051_, v___x_1052_, v_inst_1053_, v_R_1054_, v_a_1055_, v_b_1056_, v_c_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
lean_dec(v___y_1061_);
lean_dec_ref(v___y_1060_);
lean_dec(v___y_1059_);
lean_dec_ref(v___y_1058_);
lean_dec_ref(v___x_1050_);
lean_dec(v_upperBound_1049_);
return v_res_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2(lean_object* v_00_u03b2_1068_, lean_object* v_x_1069_, lean_object* v_x_1070_, lean_object* v_x_1071_){
_start:
{
lean_object* v___x_1072_; 
v___x_1072_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2___redArg(v_x_1069_, v_x_1070_, v_x_1071_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1073_, lean_object* v_x_1074_, size_t v_x_1075_, size_t v_x_1076_, lean_object* v_x_1077_, lean_object* v_x_1078_){
_start:
{
lean_object* v___x_1079_; 
v___x_1079_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4___redArg(v_x_1074_, v_x_1075_, v_x_1076_, v_x_1077_, v_x_1078_);
return v___x_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1080_, lean_object* v_x_1081_, lean_object* v_x_1082_, lean_object* v_x_1083_, lean_object* v_x_1084_, lean_object* v_x_1085_){
_start:
{
size_t v_x_30062__boxed_1086_; size_t v_x_30063__boxed_1087_; lean_object* v_res_1088_; 
v_x_30062__boxed_1086_ = lean_unbox_usize(v_x_1082_);
lean_dec(v_x_1082_);
v_x_30063__boxed_1087_ = lean_unbox_usize(v_x_1083_);
lean_dec(v_x_1083_);
v_res_1088_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4(v_00_u03b2_1080_, v_x_1081_, v_x_30062__boxed_1086_, v_x_30063__boxed_1087_, v_x_1084_, v_x_1085_);
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_1089_, lean_object* v_n_1090_, lean_object* v_k_1091_, lean_object* v_v_1092_){
_start:
{
lean_object* v___x_1093_; 
v___x_1093_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__6___redArg(v_n_1090_, v_k_1091_, v_v_1092_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_1094_, size_t v_depth_1095_, lean_object* v_keys_1096_, lean_object* v_vals_1097_, lean_object* v_heq_1098_, lean_object* v_i_1099_, lean_object* v_entries_1100_){
_start:
{
lean_object* v___x_1101_; 
v___x_1101_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__7___redArg(v_depth_1095_, v_keys_1096_, v_vals_1097_, v_i_1099_, v_entries_1100_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__7___boxed(lean_object* v_00_u03b2_1102_, lean_object* v_depth_1103_, lean_object* v_keys_1104_, lean_object* v_vals_1105_, lean_object* v_heq_1106_, lean_object* v_i_1107_, lean_object* v_entries_1108_){
_start:
{
size_t v_depth_boxed_1109_; lean_object* v_res_1110_; 
v_depth_boxed_1109_ = lean_unbox_usize(v_depth_1103_);
lean_dec(v_depth_1103_);
v_res_1110_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__7(v_00_u03b2_1102_, v_depth_boxed_1109_, v_keys_1104_, v_vals_1105_, v_heq_1106_, v_i_1107_, v_entries_1108_);
lean_dec_ref(v_vals_1105_);
lean_dec_ref(v_keys_1104_);
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__6_spec__7(lean_object* v_00_u03b2_1111_, lean_object* v_x_1112_, lean_object* v_x_1113_, lean_object* v_x_1114_, lean_object* v_x_1115_){
_start:
{
lean_object* v___x_1116_; 
v___x_1116_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1_spec__2_spec__4_spec__6_spec__7___redArg(v_x_1112_, v_x_1113_, v_x_1114_, v_x_1115_);
return v___x_1116_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass = _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass();
lean_mark_persistent(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(builtin);
}
#ifdef __cplusplus
}
#endif
