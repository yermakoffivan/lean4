// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Normalize.ShortCircuit
// Imports: public import Lean.Meta.Tactic.BVDecide.Normalize.Basic public import Std.Tactic.BVDecide.Normalize.BitVec import Lean.Meta.Sym.Simp.Theorems import Lean.Meta.Sym.Simp.Rewrite
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp_beq(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc_withDoneResult___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc_withDoneResult___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc_withDoneResult(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "BEq"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "beq"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 188, 39, 55, 57, 152, 88, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__1_value),LEAN_SCALAR_PTR_LITERAL(82, 52, 243, 194, 7, 226, 90, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__3_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__5_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__6_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "not"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__8_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__9_value),LEAN_SCALAR_PTR_LITERAL(208, 215, 171, 150, 192, 180, 249, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__11;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__12;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__13;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__14;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__8_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__15_value),LEAN_SCALAR_PTR_LITERAL(160, 26, 8, 228, 104, 32, 82, 85)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__16_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__17;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__19_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "BVDecide"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__20_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Normalize"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__21_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "mul_beq_mul_short_circuit_left"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__22_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__18_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__23_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__19_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__23_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__20_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__23_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__23_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__21_value),LEAN_SCALAR_PTR_LITERAL(105, 120, 51, 161, 199, 191, 75, 23)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__23_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__23_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__3_value),LEAN_SCALAR_PTR_LITERAL(6, 181, 64, 73, 102, 44, 61, 193)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__23_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__22_value),LEAN_SCALAR_PTR_LITERAL(53, 48, 36, 136, 58, 30, 220, 150)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__23 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__23_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__24;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "mul_beq_mul_short_circuit_right"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__25 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__25_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__18_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__19_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__26_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__20_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__26_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__26_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__21_value),LEAN_SCALAR_PTR_LITERAL(105, 120, 51, 161, 199, 191, 75, 23)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__26_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__26_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__3_value),LEAN_SCALAR_PTR_LITERAL(6, 181, 64, 73, 102, 44, 61, 193)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__26_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__25_value),LEAN_SCALAR_PTR_LITERAL(98, 146, 161, 224, 242, 166, 216, 103)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__26 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__26_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__27;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__7___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__0___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__3_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__19_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__4_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__4_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__5_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__6_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__7;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "  ==>  "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__8_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__9;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "shortCircuitPass"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___closed__1_value),LEAN_SCALAR_PTR_LITERAL(45, 197, 199, 240, 107, 41, 97, 28)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___closed__2_value),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__7(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc_withDoneResult___redArg___lam__0(lean_object* v_toPure_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v_contextDependent_3_; lean_object* v___x_5_; uint8_t v_isShared_6_; uint8_t v_isSharedCheck_12_; 
v_contextDependent_3_ = lean_ctor_get_uint8(v_x_2_, 1);
v_isSharedCheck_12_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_12_ == 0)
{
v___x_5_ = v_x_2_;
v_isShared_6_ = v_isSharedCheck_12_;
goto v_resetjp_4_;
}
else
{
lean_dec(v_x_2_);
v___x_5_ = lean_box(0);
v_isShared_6_ = v_isSharedCheck_12_;
goto v_resetjp_4_;
}
v_resetjp_4_:
{
uint8_t v___x_7_; lean_object* v___x_9_; 
v___x_7_ = 1;
if (v_isShared_6_ == 0)
{
v___x_9_ = v___x_5_;
goto v_reusejp_8_;
}
else
{
lean_object* v_reuseFailAlloc_11_; 
v_reuseFailAlloc_11_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v_reuseFailAlloc_11_, 1, v_contextDependent_3_);
v___x_9_ = v_reuseFailAlloc_11_;
goto v_reusejp_8_;
}
v_reusejp_8_:
{
lean_object* v___x_10_; 
lean_ctor_set_uint8(v___x_9_, 0, v___x_7_);
v___x_10_ = lean_apply_2(v_toPure_1_, lean_box(0), v___x_9_);
return v___x_10_;
}
}
}
else
{
lean_object* v_e_x27_13_; lean_object* v_proof_14_; uint8_t v_contextDependent_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v_e_x27_13_ = lean_ctor_get(v_x_2_, 0);
v_proof_14_ = lean_ctor_get(v_x_2_, 1);
v_contextDependent_15_ = lean_ctor_get_uint8(v_x_2_, sizeof(void*)*2 + 1);
v_isSharedCheck_24_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_24_ == 0)
{
v___x_17_ = v_x_2_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_proof_14_);
lean_inc(v_e_x27_13_);
lean_dec(v_x_2_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
uint8_t v___x_19_; lean_object* v___x_21_; 
v___x_19_ = 1;
if (v_isShared_18_ == 0)
{
v___x_21_ = v___x_17_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_e_x27_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_proof_14_);
lean_ctor_set_uint8(v_reuseFailAlloc_23_, sizeof(void*)*2 + 1, v_contextDependent_15_);
v___x_21_ = v_reuseFailAlloc_23_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
lean_object* v___x_22_; 
lean_ctor_set_uint8(v___x_21_, sizeof(void*)*2, v___x_19_);
v___x_22_ = lean_apply_2(v_toPure_1_, lean_box(0), v___x_21_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc_withDoneResult___redArg(lean_object* v_inst_25_, lean_object* v_x_26_){
_start:
{
lean_object* v_toApplicative_27_; lean_object* v_toBind_28_; lean_object* v_toPure_29_; lean_object* v___f_30_; lean_object* v___x_31_; 
v_toApplicative_27_ = lean_ctor_get(v_inst_25_, 0);
lean_inc_ref(v_toApplicative_27_);
v_toBind_28_ = lean_ctor_get(v_inst_25_, 1);
lean_inc(v_toBind_28_);
lean_dec_ref(v_inst_25_);
v_toPure_29_ = lean_ctor_get(v_toApplicative_27_, 1);
lean_inc(v_toPure_29_);
lean_dec_ref(v_toApplicative_27_);
v___f_30_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc_withDoneResult___redArg___lam__0), 2, 1);
lean_closure_set(v___f_30_, 0, v_toPure_29_);
v___x_31_ = lean_apply_4(v_toBind_28_, lean_box(0), lean_box(0), v_x_26_, v___f_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc_withDoneResult(lean_object* v_m_32_, lean_object* v_inst_33_, lean_object* v_x_34_){
_start:
{
lean_object* v_toApplicative_35_; lean_object* v_toBind_36_; lean_object* v_toPure_37_; lean_object* v___f_38_; lean_object* v___x_39_; 
v_toApplicative_35_ = lean_ctor_get(v_inst_33_, 0);
lean_inc_ref(v_toApplicative_35_);
v_toBind_36_ = lean_ctor_get(v_inst_33_, 1);
lean_inc(v_toBind_36_);
lean_dec_ref(v_inst_33_);
v_toPure_37_ = lean_ctor_get(v_toApplicative_35_, 1);
lean_inc(v_toPure_37_);
lean_dec_ref(v_toApplicative_35_);
v___f_38_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc_withDoneResult___redArg___lam__0), 2, 1);
lean_closure_set(v___f_38_, 0, v_toPure_37_);
v___x_39_ = lean_apply_4(v_toBind_36_, lean_box(0), lean_box(0), v_x_34_, v___f_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(lean_object* v_x_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0___closed__0));
v___x_54_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_54_, 0, v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0___boxed(lean_object* v_x_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v_x_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_);
lean_dec(v___y_64_);
lean_dec_ref(v___y_63_);
lean_dec(v___y_62_);
lean_dec_ref(v___y_61_);
lean_dec(v___y_60_);
lean_dec_ref(v___y_59_);
lean_dec(v___y_58_);
lean_dec_ref(v___y_57_);
lean_dec(v___y_56_);
return v_res_66_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__11(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = lean_box(0);
v___x_86_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__10));
v___x_87_ = l_Lean_mkConst(v___x_86_, v___x_85_);
return v___x_87_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__12(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_unsigned_to_nat(0u);
v___x_89_ = l_Lean_Level_ofNat(v___x_88_);
return v___x_89_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__13(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = lean_box(0);
v___x_91_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__12);
v___x_92_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
lean_ctor_set(v___x_92_, 1, v___x_90_);
return v___x_92_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__14(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_93_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__13, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__13_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__13);
v___x_94_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__2));
v___x_95_ = l_Lean_mkConst(v___x_94_, v___x_93_);
return v___x_95_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__17(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_100_ = lean_box(0);
v___x_101_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__16));
v___x_102_ = l_Lean_mkConst(v___x_101_, v___x_100_);
return v___x_102_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__24(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = lean_box(0);
v___x_116_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__23));
v___x_117_ = l_Lean_mkConst(v___x_116_, v___x_115_);
return v___x_117_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__27(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_126_ = lean_box(0);
v___x_127_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__26));
v___x_128_ = l_Lean_mkConst(v___x_127_, v___x_126_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc(lean_object* v_e_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_){
_start:
{
lean_object* v_e_x27_141_; lean_object* v_proof_142_; uint8_t v_contextDependent_143_; uint8_t v_contextDependent_148_; lean_object* v___y_153_; lean_object* v___x_159_; uint8_t v___x_160_; 
lean_inc_ref(v_e_129_);
v___x_159_ = l_Lean_Expr_cleanupAnnotations(v_e_129_);
v___x_160_ = l_Lean_Expr_isApp(v___x_159_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; lean_object* v___x_162_; 
lean_dec_ref(v___x_159_);
lean_dec_ref(v_e_129_);
v___x_161_ = lean_box(0);
v___x_162_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_161_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_162_;
goto v___jp_152_;
}
else
{
lean_object* v_arg_163_; lean_object* v___x_164_; uint8_t v___x_165_; 
v_arg_163_ = lean_ctor_get(v___x_159_, 1);
lean_inc_ref(v_arg_163_);
v___x_164_ = l_Lean_Expr_appFnCleanup___redArg(v___x_159_);
v___x_165_ = l_Lean_Expr_isApp(v___x_164_);
if (v___x_165_ == 0)
{
lean_object* v___x_166_; lean_object* v___x_167_; 
lean_dec_ref(v___x_164_);
lean_dec_ref(v_arg_163_);
lean_dec_ref(v_e_129_);
v___x_166_ = lean_box(0);
v___x_167_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_166_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_167_;
goto v___jp_152_;
}
else
{
lean_object* v_arg_168_; lean_object* v___x_169_; uint8_t v___x_170_; 
v_arg_168_ = lean_ctor_get(v___x_164_, 1);
lean_inc_ref(v_arg_168_);
v___x_169_ = l_Lean_Expr_appFnCleanup___redArg(v___x_164_);
v___x_170_ = l_Lean_Expr_isApp(v___x_169_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; lean_object* v___x_172_; 
lean_dec_ref(v___x_169_);
lean_dec_ref(v_arg_168_);
lean_dec_ref(v_arg_163_);
lean_dec_ref(v_e_129_);
v___x_171_ = lean_box(0);
v___x_172_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_171_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_172_;
goto v___jp_152_;
}
else
{
lean_object* v_arg_173_; lean_object* v___x_174_; uint8_t v___x_175_; 
v_arg_173_ = lean_ctor_get(v___x_169_, 1);
lean_inc_ref(v_arg_173_);
v___x_174_ = l_Lean_Expr_appFnCleanup___redArg(v___x_169_);
v___x_175_ = l_Lean_Expr_isApp(v___x_174_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; lean_object* v___x_177_; 
lean_dec_ref(v___x_174_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_arg_168_);
lean_dec_ref(v_arg_163_);
lean_dec_ref(v_e_129_);
v___x_176_ = lean_box(0);
v___x_177_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_176_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_177_;
goto v___jp_152_;
}
else
{
lean_object* v_arg_178_; lean_object* v___x_179_; lean_object* v___x_180_; uint8_t v___x_181_; 
v_arg_178_ = lean_ctor_get(v___x_174_, 1);
lean_inc_ref(v_arg_178_);
v___x_179_ = l_Lean_Expr_appFnCleanup___redArg(v___x_174_);
v___x_180_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__2));
v___x_181_ = l_Lean_Expr_isConstOf(v___x_179_, v___x_180_);
lean_dec_ref(v___x_179_);
if (v___x_181_ == 0)
{
lean_object* v___x_182_; lean_object* v___x_183_; 
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_arg_168_);
lean_dec_ref(v_arg_163_);
lean_dec_ref(v_e_129_);
v___x_182_ = lean_box(0);
v___x_183_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_182_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_183_;
goto v___jp_152_;
}
else
{
lean_object* v___x_184_; uint8_t v___x_185_; 
lean_inc_ref(v_arg_178_);
v___x_184_ = l_Lean_Expr_cleanupAnnotations(v_arg_178_);
v___x_185_ = l_Lean_Expr_isApp(v___x_184_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; lean_object* v___x_187_; 
lean_dec_ref(v___x_184_);
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_arg_168_);
lean_dec_ref(v_arg_163_);
lean_dec_ref(v_e_129_);
v___x_186_ = lean_box(0);
v___x_187_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_186_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_187_;
goto v___jp_152_;
}
else
{
lean_object* v_arg_188_; lean_object* v___x_189_; lean_object* v___x_190_; uint8_t v___x_191_; 
v_arg_188_ = lean_ctor_get(v___x_184_, 1);
lean_inc_ref(v_arg_188_);
v___x_189_ = l_Lean_Expr_appFnCleanup___redArg(v___x_184_);
v___x_190_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__4));
v___x_191_ = l_Lean_Expr_isConstOf(v___x_189_, v___x_190_);
lean_dec_ref(v___x_189_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; lean_object* v___x_193_; 
lean_dec_ref(v_arg_188_);
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_arg_168_);
lean_dec_ref(v_arg_163_);
lean_dec_ref(v_e_129_);
v___x_192_ = lean_box(0);
v___x_193_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_192_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_193_;
goto v___jp_152_;
}
else
{
lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_194_ = l_Lean_Expr_cleanupAnnotations(v_arg_168_);
v___x_195_ = l_Lean_Expr_isApp(v___x_194_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; lean_object* v___x_197_; 
lean_dec_ref(v___x_194_);
lean_dec_ref(v_arg_188_);
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_arg_163_);
lean_dec_ref(v_e_129_);
v___x_196_ = lean_box(0);
v___x_197_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_196_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_197_;
goto v___jp_152_;
}
else
{
lean_object* v_arg_198_; lean_object* v___x_199_; uint8_t v___x_200_; 
v_arg_198_ = lean_ctor_get(v___x_194_, 1);
lean_inc_ref(v_arg_198_);
v___x_199_ = l_Lean_Expr_appFnCleanup___redArg(v___x_194_);
v___x_200_ = l_Lean_Expr_isApp(v___x_199_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; lean_object* v___x_202_; 
lean_dec_ref(v___x_199_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_188_);
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_arg_163_);
lean_dec_ref(v_e_129_);
v___x_201_ = lean_box(0);
v___x_202_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_201_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_202_;
goto v___jp_152_;
}
else
{
lean_object* v_arg_203_; lean_object* v___x_204_; uint8_t v___x_205_; 
v_arg_203_ = lean_ctor_get(v___x_199_, 1);
lean_inc_ref(v_arg_203_);
v___x_204_ = l_Lean_Expr_appFnCleanup___redArg(v___x_199_);
v___x_205_ = l_Lean_Expr_isApp(v___x_204_);
if (v___x_205_ == 0)
{
lean_object* v___x_206_; lean_object* v___x_207_; 
lean_dec_ref(v___x_204_);
lean_dec_ref(v_arg_203_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_188_);
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_arg_163_);
lean_dec_ref(v_e_129_);
v___x_206_ = lean_box(0);
v___x_207_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_206_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_207_;
goto v___jp_152_;
}
else
{
lean_object* v___x_208_; uint8_t v___x_209_; 
v___x_208_ = l_Lean_Expr_appFnCleanup___redArg(v___x_204_);
v___x_209_ = l_Lean_Expr_isApp(v___x_208_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; lean_object* v___x_211_; 
lean_dec_ref(v___x_208_);
lean_dec_ref(v_arg_203_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_188_);
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_arg_163_);
lean_dec_ref(v_e_129_);
v___x_210_ = lean_box(0);
v___x_211_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_210_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_211_;
goto v___jp_152_;
}
else
{
lean_object* v___x_212_; uint8_t v___x_213_; 
v___x_212_ = l_Lean_Expr_appFnCleanup___redArg(v___x_208_);
v___x_213_ = l_Lean_Expr_isApp(v___x_212_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; lean_object* v___x_215_; 
lean_dec_ref(v___x_212_);
lean_dec_ref(v_arg_203_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_188_);
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_arg_163_);
lean_dec_ref(v_e_129_);
v___x_214_ = lean_box(0);
v___x_215_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_214_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_215_;
goto v___jp_152_;
}
else
{
lean_object* v___x_216_; uint8_t v___x_217_; 
v___x_216_ = l_Lean_Expr_appFnCleanup___redArg(v___x_212_);
v___x_217_ = l_Lean_Expr_isApp(v___x_216_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; lean_object* v___x_219_; 
lean_dec_ref(v___x_216_);
lean_dec_ref(v_arg_203_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_188_);
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_arg_163_);
lean_dec_ref(v_e_129_);
v___x_218_ = lean_box(0);
v___x_219_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_218_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_219_;
goto v___jp_152_;
}
else
{
lean_object* v___x_220_; lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_220_ = l_Lean_Expr_appFnCleanup___redArg(v___x_216_);
v___x_221_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__7));
v___x_222_ = l_Lean_Expr_isConstOf(v___x_220_, v___x_221_);
lean_dec_ref(v___x_220_);
if (v___x_222_ == 0)
{
lean_object* v___x_223_; lean_object* v___x_224_; 
lean_dec_ref(v_arg_203_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_188_);
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_arg_163_);
lean_dec_ref(v_e_129_);
v___x_223_ = lean_box(0);
v___x_224_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_223_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_224_;
goto v___jp_152_;
}
else
{
lean_object* v___x_225_; uint8_t v___x_226_; 
v___x_225_ = l_Lean_Expr_cleanupAnnotations(v_arg_163_);
v___x_226_ = l_Lean_Expr_isApp(v___x_225_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; lean_object* v___x_228_; 
lean_dec_ref(v___x_225_);
lean_dec_ref(v_arg_203_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_188_);
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_e_129_);
v___x_227_ = lean_box(0);
v___x_228_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_227_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_228_;
goto v___jp_152_;
}
else
{
lean_object* v_arg_229_; lean_object* v___x_230_; uint8_t v___x_231_; 
v_arg_229_ = lean_ctor_get(v___x_225_, 1);
lean_inc_ref(v_arg_229_);
v___x_230_ = l_Lean_Expr_appFnCleanup___redArg(v___x_225_);
v___x_231_ = l_Lean_Expr_isApp(v___x_230_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; lean_object* v___x_233_; 
lean_dec_ref(v___x_230_);
lean_dec_ref(v_arg_229_);
lean_dec_ref(v_arg_203_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_188_);
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_e_129_);
v___x_232_ = lean_box(0);
v___x_233_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_232_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_233_;
goto v___jp_152_;
}
else
{
lean_object* v_arg_234_; lean_object* v___x_235_; uint8_t v___x_236_; 
v_arg_234_ = lean_ctor_get(v___x_230_, 1);
lean_inc_ref(v_arg_234_);
v___x_235_ = l_Lean_Expr_appFnCleanup___redArg(v___x_230_);
v___x_236_ = l_Lean_Expr_isApp(v___x_235_);
if (v___x_236_ == 0)
{
lean_object* v___x_237_; lean_object* v___x_238_; 
lean_dec_ref(v___x_235_);
lean_dec_ref(v_arg_234_);
lean_dec_ref(v_arg_229_);
lean_dec_ref(v_arg_203_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_188_);
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_e_129_);
v___x_237_ = lean_box(0);
v___x_238_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_237_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_238_;
goto v___jp_152_;
}
else
{
lean_object* v___x_239_; uint8_t v___x_240_; 
v___x_239_ = l_Lean_Expr_appFnCleanup___redArg(v___x_235_);
v___x_240_ = l_Lean_Expr_isApp(v___x_239_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; lean_object* v___x_242_; 
lean_dec_ref(v___x_239_);
lean_dec_ref(v_arg_234_);
lean_dec_ref(v_arg_229_);
lean_dec_ref(v_arg_203_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_188_);
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_e_129_);
v___x_241_ = lean_box(0);
v___x_242_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_241_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_242_;
goto v___jp_152_;
}
else
{
lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_243_ = l_Lean_Expr_appFnCleanup___redArg(v___x_239_);
v___x_244_ = l_Lean_Expr_isApp(v___x_243_);
if (v___x_244_ == 0)
{
lean_object* v___x_245_; lean_object* v___x_246_; 
lean_dec_ref(v___x_243_);
lean_dec_ref(v_arg_234_);
lean_dec_ref(v_arg_229_);
lean_dec_ref(v_arg_203_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_188_);
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_e_129_);
v___x_245_ = lean_box(0);
v___x_246_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_245_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_246_;
goto v___jp_152_;
}
else
{
lean_object* v___x_247_; uint8_t v___x_248_; 
v___x_247_ = l_Lean_Expr_appFnCleanup___redArg(v___x_243_);
v___x_248_ = l_Lean_Expr_isApp(v___x_247_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; lean_object* v___x_250_; 
lean_dec_ref(v___x_247_);
lean_dec_ref(v_arg_234_);
lean_dec_ref(v_arg_229_);
lean_dec_ref(v_arg_203_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_188_);
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_e_129_);
v___x_249_ = lean_box(0);
v___x_250_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_249_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_250_;
goto v___jp_152_;
}
else
{
lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_251_ = l_Lean_Expr_appFnCleanup___redArg(v___x_247_);
v___x_252_ = l_Lean_Expr_isConstOf(v___x_251_, v___x_221_);
lean_dec_ref(v___x_251_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; lean_object* v___x_254_; 
lean_dec_ref(v_arg_234_);
lean_dec_ref(v_arg_229_);
lean_dec_ref(v_arg_203_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_188_);
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_e_129_);
v___x_253_ = lean_box(0);
v___x_254_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0(v___x_253_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
v___y_153_ = v___x_254_;
goto v___jp_152_;
}
else
{
uint8_t v___x_255_; 
v___x_255_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_arg_203_, v_arg_234_);
if (v___x_255_ == 0)
{
uint8_t v___x_256_; 
v___x_256_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_arg_198_, v_arg_229_);
lean_dec_ref(v_arg_229_);
if (v___x_256_ == 0)
{
lean_dec_ref(v_arg_234_);
lean_dec_ref(v_arg_203_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_188_);
lean_dec_ref(v_arg_178_);
lean_dec_ref(v_arg_173_);
lean_dec_ref(v_e_129_);
v_contextDependent_148_ = v___x_256_;
goto v___jp_147_;
}
else
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v_condition1_260_; lean_object* v_condition2_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_257_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__11, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__11_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__11);
v___x_258_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__14, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__14_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__14);
lean_inc_ref(v_arg_234_);
lean_inc_ref(v_arg_203_);
v___x_259_ = l_Lean_mkApp4(v___x_258_, v_arg_178_, v_arg_173_, v_arg_203_, v_arg_234_);
v_condition1_260_ = l_Lean_Expr_app___override(v___x_257_, v___x_259_);
v_condition2_261_ = l_Lean_Expr_app___override(v___x_257_, v_e_129_);
v___x_262_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__17, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__17_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__17);
v___x_263_ = l_Lean_mkAppB(v___x_262_, v_condition1_260_, v_condition2_261_);
v___x_264_ = l_Lean_Expr_app___override(v___x_257_, v___x_263_);
v___x_265_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_264_, v_a_134_);
if (lean_obj_tag(v___x_265_) == 0)
{
lean_object* v_a_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v_a_266_ = lean_ctor_get(v___x_265_, 0);
lean_inc(v_a_266_);
lean_dec_ref_known(v___x_265_, 1);
v___x_267_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__24, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__24_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__24);
v___x_268_ = l_Lean_mkApp4(v___x_267_, v_arg_188_, v_arg_203_, v_arg_234_, v_arg_198_);
v_e_x27_141_ = v_a_266_;
v_proof_142_ = v___x_268_;
v_contextDependent_143_ = v___x_255_;
goto v___jp_140_;
}
else
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
lean_dec_ref(v_arg_234_);
lean_dec_ref(v_arg_203_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_188_);
v_a_269_ = lean_ctor_get(v___x_265_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_265_);
if (v_isSharedCheck_276_ == 0)
{
v___x_271_ = v___x_265_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_265_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_274_; 
if (v_isShared_272_ == 0)
{
v___x_274_ = v___x_271_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_a_269_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
}
}
else
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v_condition1_280_; lean_object* v_condition2_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
lean_dec_ref(v_arg_234_);
v___x_277_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__11, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__11_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__11);
v___x_278_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__14, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__14_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__14);
lean_inc_ref(v_arg_229_);
lean_inc_ref(v_arg_198_);
v___x_279_ = l_Lean_mkApp4(v___x_278_, v_arg_178_, v_arg_173_, v_arg_198_, v_arg_229_);
v_condition1_280_ = l_Lean_Expr_app___override(v___x_277_, v___x_279_);
v_condition2_281_ = l_Lean_Expr_app___override(v___x_277_, v_e_129_);
v___x_282_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__17, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__17_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__17);
v___x_283_ = l_Lean_mkAppB(v___x_282_, v_condition1_280_, v_condition2_281_);
v___x_284_ = l_Lean_Expr_app___override(v___x_277_, v___x_283_);
v___x_285_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_284_, v_a_134_);
if (lean_obj_tag(v___x_285_) == 0)
{
lean_object* v_a_286_; lean_object* v___x_287_; lean_object* v___x_288_; uint8_t v___x_289_; 
v_a_286_ = lean_ctor_get(v___x_285_, 0);
lean_inc(v_a_286_);
lean_dec_ref_known(v___x_285_, 1);
v___x_287_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__27, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__27_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___closed__27);
v___x_288_ = l_Lean_mkApp4(v___x_287_, v_arg_188_, v_arg_203_, v_arg_198_, v_arg_229_);
v___x_289_ = 0;
v_e_x27_141_ = v_a_286_;
v_proof_142_ = v___x_288_;
v_contextDependent_143_ = v___x_289_;
goto v___jp_140_;
}
else
{
lean_object* v_a_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_297_; 
lean_dec_ref(v_arg_229_);
lean_dec_ref(v_arg_203_);
lean_dec_ref(v_arg_198_);
lean_dec_ref(v_arg_188_);
v_a_290_ = lean_ctor_get(v___x_285_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v___x_285_);
if (v_isSharedCheck_297_ == 0)
{
v___x_292_ = v___x_285_;
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_a_290_);
lean_dec(v___x_285_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_295_; 
if (v_isShared_293_ == 0)
{
v___x_295_ = v___x_292_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_a_290_);
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
}
}
}
}
}
}
}
}
v___jp_140_:
{
uint8_t v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_144_ = 1;
v___x_145_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_145_, 0, v_e_x27_141_);
lean_ctor_set(v___x_145_, 1, v_proof_142_);
lean_ctor_set_uint8(v___x_145_, sizeof(void*)*2, v___x_144_);
lean_ctor_set_uint8(v___x_145_, sizeof(void*)*2 + 1, v_contextDependent_143_);
v___x_146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
return v___x_146_;
}
v___jp_147_:
{
uint8_t v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_149_ = 1;
v___x_150_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_150_, 0, v___x_149_);
lean_ctor_set_uint8(v___x_150_, 1, v_contextDependent_148_);
v___x_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
return v___x_151_;
}
v___jp_152_:
{
lean_object* v_a_154_; 
v_a_154_ = lean_ctor_get(v___y_153_, 0);
lean_inc(v_a_154_);
lean_dec_ref(v___y_153_);
if (lean_obj_tag(v_a_154_) == 0)
{
uint8_t v_contextDependent_155_; 
v_contextDependent_155_ = lean_ctor_get_uint8(v_a_154_, 1);
lean_dec_ref_known(v_a_154_, 0);
v_contextDependent_148_ = v_contextDependent_155_;
goto v___jp_147_;
}
else
{
lean_object* v_e_x27_156_; lean_object* v_proof_157_; uint8_t v_contextDependent_158_; 
v_e_x27_156_ = lean_ctor_get(v_a_154_, 0);
lean_inc_ref(v_e_x27_156_);
v_proof_157_ = lean_ctor_get(v_a_154_, 1);
lean_inc_ref(v_proof_157_);
v_contextDependent_158_ = lean_ctor_get_uint8(v_a_154_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_154_, 2);
v_e_x27_141_ = v_e_x27_156_;
v_proof_142_ = v_proof_157_;
v_contextDependent_143_ = v_contextDependent_158_;
goto v___jp_140_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___boxed(lean_object* v_e_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc(v_e_298_, v_a_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_, v_a_305_, v_a_306_, v_a_307_);
lean_dec(v_a_307_);
lean_dec_ref(v_a_306_);
lean_dec(v_a_305_);
lean_dec_ref(v_a_304_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
lean_dec(v_a_301_);
lean_dec_ref(v_a_300_);
lean_dec(v_a_299_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3___redArg___lam__0(lean_object* v_x_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_){
_start:
{
lean_object* v___x_320_; 
lean_inc(v___y_314_);
lean_inc_ref(v___y_313_);
lean_inc(v___y_312_);
lean_inc_ref(v___y_311_);
v___x_320_ = lean_apply_9(v_x_310_, v___y_311_, v___y_312_, v___y_313_, v___y_314_, v___y_315_, v___y_316_, v___y_317_, v___y_318_, lean_box(0));
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3___redArg___lam__0___boxed(lean_object* v_x_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3___redArg___lam__0(v_x_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_, v___y_329_);
lean_dec(v___y_325_);
lean_dec_ref(v___y_324_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3___redArg(lean_object* v_mvarId_332_, lean_object* v_x_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v___f_343_; lean_object* v___x_344_; 
lean_inc(v___y_337_);
lean_inc_ref(v___y_336_);
lean_inc(v___y_335_);
lean_inc_ref(v___y_334_);
v___f_343_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_343_, 0, v_x_333_);
lean_closure_set(v___f_343_, 1, v___y_334_);
lean_closure_set(v___f_343_, 2, v___y_335_);
lean_closure_set(v___f_343_, 3, v___y_336_);
lean_closure_set(v___f_343_, 4, v___y_337_);
v___x_344_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_332_, v___f_343_, v___y_338_, v___y_339_, v___y_340_, v___y_341_);
if (lean_obj_tag(v___x_344_) == 0)
{
return v___x_344_;
}
else
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_352_; 
v_a_345_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_352_ == 0)
{
v___x_347_ = v___x_344_;
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_344_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_a_345_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3___redArg___boxed(lean_object* v_mvarId_353_, lean_object* v_x_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3___redArg(v_mvarId_353_, v_x_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3(lean_object* v_00_u03b1_365_, lean_object* v_mvarId_366_, lean_object* v_x_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
lean_object* v___x_377_; 
v___x_377_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3___redArg(v_mvarId_366_, v_x_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3___boxed(lean_object* v_00_u03b1_378_, lean_object* v_mvarId_379_, lean_object* v_x_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3(v_00_u03b1_378_, v_mvarId_379_, v_x_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__6_spec__7___redArg(lean_object* v_x_391_, lean_object* v_x_392_, lean_object* v_x_393_, lean_object* v_x_394_){
_start:
{
lean_object* v_ks_395_; lean_object* v_vs_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_420_; 
v_ks_395_ = lean_ctor_get(v_x_391_, 0);
v_vs_396_ = lean_ctor_get(v_x_391_, 1);
v_isSharedCheck_420_ = !lean_is_exclusive(v_x_391_);
if (v_isSharedCheck_420_ == 0)
{
v___x_398_ = v_x_391_;
v_isShared_399_ = v_isSharedCheck_420_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_vs_396_);
lean_inc(v_ks_395_);
lean_dec(v_x_391_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_420_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_400_; uint8_t v___x_401_; 
v___x_400_ = lean_array_get_size(v_ks_395_);
v___x_401_ = lean_nat_dec_lt(v_x_392_, v___x_400_);
if (v___x_401_ == 0)
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_405_; 
lean_dec(v_x_392_);
v___x_402_ = lean_array_push(v_ks_395_, v_x_393_);
v___x_403_ = lean_array_push(v_vs_396_, v_x_394_);
if (v_isShared_399_ == 0)
{
lean_ctor_set(v___x_398_, 1, v___x_403_);
lean_ctor_set(v___x_398_, 0, v___x_402_);
v___x_405_ = v___x_398_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v___x_402_);
lean_ctor_set(v_reuseFailAlloc_406_, 1, v___x_403_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
}
}
else
{
lean_object* v_k_x27_407_; uint8_t v___x_408_; 
v_k_x27_407_ = lean_array_fget_borrowed(v_ks_395_, v_x_392_);
v___x_408_ = l_Lean_instBEqMVarId_beq(v_x_393_, v_k_x27_407_);
if (v___x_408_ == 0)
{
lean_object* v___x_410_; 
if (v_isShared_399_ == 0)
{
v___x_410_ = v___x_398_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_ks_395_);
lean_ctor_set(v_reuseFailAlloc_414_, 1, v_vs_396_);
v___x_410_ = v_reuseFailAlloc_414_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = lean_unsigned_to_nat(1u);
v___x_412_ = lean_nat_add(v_x_392_, v___x_411_);
lean_dec(v_x_392_);
v_x_391_ = v___x_410_;
v_x_392_ = v___x_412_;
goto _start;
}
}
else
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_418_; 
v___x_415_ = lean_array_fset(v_ks_395_, v_x_392_, v_x_393_);
v___x_416_ = lean_array_fset(v_vs_396_, v_x_392_, v_x_394_);
lean_dec(v_x_392_);
if (v_isShared_399_ == 0)
{
lean_ctor_set(v___x_398_, 1, v___x_416_);
lean_ctor_set(v___x_398_, 0, v___x_415_);
v___x_418_ = v___x_398_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v___x_415_);
lean_ctor_set(v_reuseFailAlloc_419_, 1, v___x_416_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
return v___x_418_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__6___redArg(lean_object* v_n_421_, lean_object* v_k_422_, lean_object* v_v_423_){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = lean_unsigned_to_nat(0u);
v___x_425_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__6_spec__7___redArg(v_n_421_, v___x_424_, v_k_422_, v_v_423_);
return v___x_425_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4___redArg(lean_object* v_x_427_, size_t v_x_428_, size_t v_x_429_, lean_object* v_x_430_, lean_object* v_x_431_){
_start:
{
if (lean_obj_tag(v_x_427_) == 0)
{
lean_object* v_es_432_; size_t v___x_433_; size_t v___x_434_; lean_object* v_j_435_; lean_object* v___x_436_; uint8_t v___x_437_; 
v_es_432_ = lean_ctor_get(v_x_427_, 0);
v___x_433_ = ((size_t)31ULL);
v___x_434_ = lean_usize_land(v_x_428_, v___x_433_);
v_j_435_ = lean_usize_to_nat(v___x_434_);
v___x_436_ = lean_array_get_size(v_es_432_);
v___x_437_ = lean_nat_dec_lt(v_j_435_, v___x_436_);
if (v___x_437_ == 0)
{
lean_dec(v_j_435_);
lean_dec(v_x_431_);
lean_dec(v_x_430_);
return v_x_427_;
}
else
{
lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_476_; 
lean_inc_ref(v_es_432_);
v_isSharedCheck_476_ = !lean_is_exclusive(v_x_427_);
if (v_isSharedCheck_476_ == 0)
{
lean_object* v_unused_477_; 
v_unused_477_ = lean_ctor_get(v_x_427_, 0);
lean_dec(v_unused_477_);
v___x_439_ = v_x_427_;
v_isShared_440_ = v_isSharedCheck_476_;
goto v_resetjp_438_;
}
else
{
lean_dec(v_x_427_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_476_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v_v_441_; lean_object* v___x_442_; lean_object* v_xs_x27_443_; lean_object* v___y_445_; 
v_v_441_ = lean_array_fget(v_es_432_, v_j_435_);
v___x_442_ = lean_box(0);
v_xs_x27_443_ = lean_array_fset(v_es_432_, v_j_435_, v___x_442_);
switch(lean_obj_tag(v_v_441_))
{
case 0:
{
lean_object* v_key_450_; lean_object* v_val_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_461_; 
v_key_450_ = lean_ctor_get(v_v_441_, 0);
v_val_451_ = lean_ctor_get(v_v_441_, 1);
v_isSharedCheck_461_ = !lean_is_exclusive(v_v_441_);
if (v_isSharedCheck_461_ == 0)
{
v___x_453_ = v_v_441_;
v_isShared_454_ = v_isSharedCheck_461_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_val_451_);
lean_inc(v_key_450_);
lean_dec(v_v_441_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_461_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
uint8_t v___x_455_; 
v___x_455_ = l_Lean_instBEqMVarId_beq(v_x_430_, v_key_450_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; lean_object* v___x_457_; 
lean_del_object(v___x_453_);
v___x_456_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_450_, v_val_451_, v_x_430_, v_x_431_);
v___x_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
v___y_445_ = v___x_457_;
goto v___jp_444_;
}
else
{
lean_object* v___x_459_; 
lean_dec(v_val_451_);
lean_dec(v_key_450_);
if (v_isShared_454_ == 0)
{
lean_ctor_set(v___x_453_, 1, v_x_431_);
lean_ctor_set(v___x_453_, 0, v_x_430_);
v___x_459_ = v___x_453_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_x_430_);
lean_ctor_set(v_reuseFailAlloc_460_, 1, v_x_431_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
v___y_445_ = v___x_459_;
goto v___jp_444_;
}
}
}
}
case 1:
{
lean_object* v_node_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_474_; 
v_node_462_ = lean_ctor_get(v_v_441_, 0);
v_isSharedCheck_474_ = !lean_is_exclusive(v_v_441_);
if (v_isSharedCheck_474_ == 0)
{
v___x_464_ = v_v_441_;
v_isShared_465_ = v_isSharedCheck_474_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_node_462_);
lean_dec(v_v_441_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_474_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
size_t v___x_466_; size_t v___x_467_; size_t v___x_468_; size_t v___x_469_; lean_object* v___x_470_; lean_object* v___x_472_; 
v___x_466_ = ((size_t)5ULL);
v___x_467_ = lean_usize_shift_right(v_x_428_, v___x_466_);
v___x_468_ = ((size_t)1ULL);
v___x_469_ = lean_usize_add(v_x_429_, v___x_468_);
v___x_470_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4___redArg(v_node_462_, v___x_467_, v___x_469_, v_x_430_, v_x_431_);
if (v_isShared_465_ == 0)
{
lean_ctor_set(v___x_464_, 0, v___x_470_);
v___x_472_ = v___x_464_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v___x_470_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
v___y_445_ = v___x_472_;
goto v___jp_444_;
}
}
}
default: 
{
lean_object* v___x_475_; 
v___x_475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_475_, 0, v_x_430_);
lean_ctor_set(v___x_475_, 1, v_x_431_);
v___y_445_ = v___x_475_;
goto v___jp_444_;
}
}
v___jp_444_:
{
lean_object* v___x_446_; lean_object* v___x_448_; 
v___x_446_ = lean_array_fset(v_xs_x27_443_, v_j_435_, v___y_445_);
lean_dec(v_j_435_);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v___x_446_);
v___x_448_ = v___x_439_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_446_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
}
else
{
lean_object* v_ks_478_; lean_object* v_vs_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_499_; 
v_ks_478_ = lean_ctor_get(v_x_427_, 0);
v_vs_479_ = lean_ctor_get(v_x_427_, 1);
v_isSharedCheck_499_ = !lean_is_exclusive(v_x_427_);
if (v_isSharedCheck_499_ == 0)
{
v___x_481_ = v_x_427_;
v_isShared_482_ = v_isSharedCheck_499_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_vs_479_);
lean_inc(v_ks_478_);
lean_dec(v_x_427_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_499_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_484_; 
if (v_isShared_482_ == 0)
{
v___x_484_ = v___x_481_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_ks_478_);
lean_ctor_set(v_reuseFailAlloc_498_, 1, v_vs_479_);
v___x_484_ = v_reuseFailAlloc_498_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
lean_object* v_newNode_485_; uint8_t v___y_487_; size_t v___x_493_; uint8_t v___x_494_; 
v_newNode_485_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__6___redArg(v___x_484_, v_x_430_, v_x_431_);
v___x_493_ = ((size_t)7ULL);
v___x_494_ = lean_usize_dec_le(v___x_493_, v_x_429_);
if (v___x_494_ == 0)
{
lean_object* v___x_495_; lean_object* v___x_496_; uint8_t v___x_497_; 
v___x_495_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_485_);
v___x_496_ = lean_unsigned_to_nat(4u);
v___x_497_ = lean_nat_dec_lt(v___x_495_, v___x_496_);
lean_dec(v___x_495_);
v___y_487_ = v___x_497_;
goto v___jp_486_;
}
else
{
v___y_487_ = v___x_494_;
goto v___jp_486_;
}
v___jp_486_:
{
if (v___y_487_ == 0)
{
lean_object* v_ks_488_; lean_object* v_vs_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v_ks_488_ = lean_ctor_get(v_newNode_485_, 0);
lean_inc_ref(v_ks_488_);
v_vs_489_ = lean_ctor_get(v_newNode_485_, 1);
lean_inc_ref(v_vs_489_);
lean_dec_ref(v_newNode_485_);
v___x_490_ = lean_unsigned_to_nat(0u);
v___x_491_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4___redArg___closed__0);
v___x_492_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__7___redArg(v_x_429_, v_ks_488_, v_vs_489_, v___x_490_, v___x_491_);
lean_dec_ref(v_vs_489_);
lean_dec_ref(v_ks_488_);
return v___x_492_;
}
else
{
return v_newNode_485_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__7___redArg(size_t v_depth_500_, lean_object* v_keys_501_, lean_object* v_vals_502_, lean_object* v_i_503_, lean_object* v_entries_504_){
_start:
{
lean_object* v___x_505_; uint8_t v___x_506_; 
v___x_505_ = lean_array_get_size(v_keys_501_);
v___x_506_ = lean_nat_dec_lt(v_i_503_, v___x_505_);
if (v___x_506_ == 0)
{
lean_dec(v_i_503_);
return v_entries_504_;
}
else
{
lean_object* v_k_507_; lean_object* v_v_508_; uint64_t v___x_509_; size_t v_h_510_; size_t v___x_511_; lean_object* v___x_512_; size_t v___x_513_; size_t v___x_514_; size_t v___x_515_; size_t v_h_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v_k_507_ = lean_array_fget_borrowed(v_keys_501_, v_i_503_);
v_v_508_ = lean_array_fget_borrowed(v_vals_502_, v_i_503_);
v___x_509_ = l_Lean_instHashableMVarId_hash(v_k_507_);
v_h_510_ = lean_uint64_to_usize(v___x_509_);
v___x_511_ = ((size_t)5ULL);
v___x_512_ = lean_unsigned_to_nat(1u);
v___x_513_ = ((size_t)1ULL);
v___x_514_ = lean_usize_sub(v_depth_500_, v___x_513_);
v___x_515_ = lean_usize_mul(v___x_511_, v___x_514_);
v_h_516_ = lean_usize_shift_right(v_h_510_, v___x_515_);
v___x_517_ = lean_nat_add(v_i_503_, v___x_512_);
lean_dec(v_i_503_);
lean_inc(v_v_508_);
lean_inc(v_k_507_);
v___x_518_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4___redArg(v_entries_504_, v_h_516_, v_depth_500_, v_k_507_, v_v_508_);
v_i_503_ = v___x_517_;
v_entries_504_ = v___x_518_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object* v_depth_520_, lean_object* v_keys_521_, lean_object* v_vals_522_, lean_object* v_i_523_, lean_object* v_entries_524_){
_start:
{
size_t v_depth_boxed_525_; lean_object* v_res_526_; 
v_depth_boxed_525_ = lean_unbox_usize(v_depth_520_);
lean_dec(v_depth_520_);
v_res_526_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__7___redArg(v_depth_boxed_525_, v_keys_521_, v_vals_522_, v_i_523_, v_entries_524_);
lean_dec_ref(v_vals_522_);
lean_dec_ref(v_keys_521_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_x_527_, lean_object* v_x_528_, lean_object* v_x_529_, lean_object* v_x_530_, lean_object* v_x_531_){
_start:
{
size_t v_x_21661__boxed_532_; size_t v_x_21662__boxed_533_; lean_object* v_res_534_; 
v_x_21661__boxed_532_ = lean_unbox_usize(v_x_528_);
lean_dec(v_x_528_);
v_x_21662__boxed_533_ = lean_unbox_usize(v_x_529_);
lean_dec(v_x_529_);
v_res_534_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4___redArg(v_x_527_, v_x_21661__boxed_532_, v_x_21662__boxed_533_, v_x_530_, v_x_531_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2___redArg(lean_object* v_x_535_, lean_object* v_x_536_, lean_object* v_x_537_){
_start:
{
uint64_t v___x_538_; size_t v___x_539_; size_t v___x_540_; lean_object* v___x_541_; 
v___x_538_ = l_Lean_instHashableMVarId_hash(v_x_536_);
v___x_539_ = lean_uint64_to_usize(v___x_538_);
v___x_540_ = ((size_t)1ULL);
v___x_541_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4___redArg(v_x_535_, v___x_539_, v___x_540_, v_x_536_, v_x_537_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1___redArg(lean_object* v_mvarId_542_, lean_object* v_val_543_, lean_object* v___y_544_){
_start:
{
lean_object* v___x_546_; lean_object* v_mctx_547_; lean_object* v_cache_548_; lean_object* v_zetaDeltaFVarIds_549_; lean_object* v_postponed_550_; lean_object* v_diag_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_579_; 
v___x_546_ = lean_st_ref_take(v___y_544_);
v_mctx_547_ = lean_ctor_get(v___x_546_, 0);
v_cache_548_ = lean_ctor_get(v___x_546_, 1);
v_zetaDeltaFVarIds_549_ = lean_ctor_get(v___x_546_, 2);
v_postponed_550_ = lean_ctor_get(v___x_546_, 3);
v_diag_551_ = lean_ctor_get(v___x_546_, 4);
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_579_ == 0)
{
v___x_553_ = v___x_546_;
v_isShared_554_ = v_isSharedCheck_579_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_diag_551_);
lean_inc(v_postponed_550_);
lean_inc(v_zetaDeltaFVarIds_549_);
lean_inc(v_cache_548_);
lean_inc(v_mctx_547_);
lean_dec(v___x_546_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_579_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v_depth_555_; lean_object* v_levelAssignDepth_556_; lean_object* v_lmvarCounter_557_; lean_object* v_mvarCounter_558_; lean_object* v_lDecls_559_; lean_object* v_decls_560_; lean_object* v_userNames_561_; lean_object* v_lAssignment_562_; lean_object* v_eAssignment_563_; lean_object* v_dAssignment_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_578_; 
v_depth_555_ = lean_ctor_get(v_mctx_547_, 0);
v_levelAssignDepth_556_ = lean_ctor_get(v_mctx_547_, 1);
v_lmvarCounter_557_ = lean_ctor_get(v_mctx_547_, 2);
v_mvarCounter_558_ = lean_ctor_get(v_mctx_547_, 3);
v_lDecls_559_ = lean_ctor_get(v_mctx_547_, 4);
v_decls_560_ = lean_ctor_get(v_mctx_547_, 5);
v_userNames_561_ = lean_ctor_get(v_mctx_547_, 6);
v_lAssignment_562_ = lean_ctor_get(v_mctx_547_, 7);
v_eAssignment_563_ = lean_ctor_get(v_mctx_547_, 8);
v_dAssignment_564_ = lean_ctor_get(v_mctx_547_, 9);
v_isSharedCheck_578_ = !lean_is_exclusive(v_mctx_547_);
if (v_isSharedCheck_578_ == 0)
{
v___x_566_ = v_mctx_547_;
v_isShared_567_ = v_isSharedCheck_578_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_dAssignment_564_);
lean_inc(v_eAssignment_563_);
lean_inc(v_lAssignment_562_);
lean_inc(v_userNames_561_);
lean_inc(v_decls_560_);
lean_inc(v_lDecls_559_);
lean_inc(v_mvarCounter_558_);
lean_inc(v_lmvarCounter_557_);
lean_inc(v_levelAssignDepth_556_);
lean_inc(v_depth_555_);
lean_dec(v_mctx_547_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_578_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_568_; lean_object* v___x_570_; 
v___x_568_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2___redArg(v_eAssignment_563_, v_mvarId_542_, v_val_543_);
if (v_isShared_567_ == 0)
{
lean_ctor_set(v___x_566_, 8, v___x_568_);
v___x_570_ = v___x_566_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_depth_555_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v_levelAssignDepth_556_);
lean_ctor_set(v_reuseFailAlloc_577_, 2, v_lmvarCounter_557_);
lean_ctor_set(v_reuseFailAlloc_577_, 3, v_mvarCounter_558_);
lean_ctor_set(v_reuseFailAlloc_577_, 4, v_lDecls_559_);
lean_ctor_set(v_reuseFailAlloc_577_, 5, v_decls_560_);
lean_ctor_set(v_reuseFailAlloc_577_, 6, v_userNames_561_);
lean_ctor_set(v_reuseFailAlloc_577_, 7, v_lAssignment_562_);
lean_ctor_set(v_reuseFailAlloc_577_, 8, v___x_568_);
lean_ctor_set(v_reuseFailAlloc_577_, 9, v_dAssignment_564_);
v___x_570_ = v_reuseFailAlloc_577_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
lean_object* v___x_572_; 
if (v_isShared_554_ == 0)
{
lean_ctor_set(v___x_553_, 0, v___x_570_);
v___x_572_ = v___x_553_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_570_);
lean_ctor_set(v_reuseFailAlloc_576_, 1, v_cache_548_);
lean_ctor_set(v_reuseFailAlloc_576_, 2, v_zetaDeltaFVarIds_549_);
lean_ctor_set(v_reuseFailAlloc_576_, 3, v_postponed_550_);
lean_ctor_set(v_reuseFailAlloc_576_, 4, v_diag_551_);
v___x_572_ = v_reuseFailAlloc_576_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_573_ = lean_st_ref_set(v___y_544_, v___x_572_);
v___x_574_ = lean_box(0);
v___x_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
return v___x_575_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1___redArg___boxed(lean_object* v_mvarId_580_, lean_object* v_val_581_, lean_object* v___y_582_, lean_object* v___y_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1___redArg(v_mvarId_580_, v_val_581_, v___y_582_);
lean_dec(v___y_582_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__2(uint8_t v___x_585_, lean_object* v___f_586_, lean_object* v_____r_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_){
_start:
{
lean_object* v___x_597_; lean_object* v_rewriteCache_598_; lean_object* v_acNfCache_599_; lean_object* v_typeAnalysis_600_; lean_object* v_goal_601_; lean_object* v_hypotheses_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_612_; 
v___x_597_ = lean_st_ref_take(v___y_589_);
v_rewriteCache_598_ = lean_ctor_get(v___x_597_, 0);
v_acNfCache_599_ = lean_ctor_get(v___x_597_, 1);
v_typeAnalysis_600_ = lean_ctor_get(v___x_597_, 2);
v_goal_601_ = lean_ctor_get(v___x_597_, 3);
v_hypotheses_602_ = lean_ctor_get(v___x_597_, 4);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_612_ == 0)
{
v___x_604_ = v___x_597_;
v_isShared_605_ = v_isSharedCheck_612_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_hypotheses_602_);
lean_inc(v_goal_601_);
lean_inc(v_typeAnalysis_600_);
lean_inc(v_acNfCache_599_);
lean_inc(v_rewriteCache_598_);
lean_dec(v___x_597_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_612_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_607_; 
if (v_isShared_605_ == 0)
{
v___x_607_ = v___x_604_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_rewriteCache_598_);
lean_ctor_set(v_reuseFailAlloc_611_, 1, v_acNfCache_599_);
lean_ctor_set(v_reuseFailAlloc_611_, 2, v_typeAnalysis_600_);
lean_ctor_set(v_reuseFailAlloc_611_, 3, v_goal_601_);
lean_ctor_set(v_reuseFailAlloc_611_, 4, v_hypotheses_602_);
v___x_607_ = v_reuseFailAlloc_611_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
lean_ctor_set_uint8(v___x_607_, sizeof(void*)*5, v___x_585_);
v___x_608_ = lean_st_ref_set(v___y_589_, v___x_607_);
v___x_609_ = lean_box(0);
lean_inc(v___y_595_);
lean_inc_ref(v___y_594_);
lean_inc(v___y_593_);
lean_inc_ref(v___y_592_);
lean_inc(v___y_591_);
lean_inc_ref(v___y_590_);
lean_inc(v___y_589_);
lean_inc_ref(v___y_588_);
v___x_610_ = lean_apply_10(v___f_586_, v___x_609_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, lean_box(0));
return v___x_610_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__2___boxed(lean_object* v___x_613_, lean_object* v___f_614_, lean_object* v_____r_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_){
_start:
{
uint8_t v___x_21874__boxed_625_; lean_object* v_res_626_; 
v___x_21874__boxed_625_ = lean_unbox(v___x_613_);
v_res_626_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__2(v___x_21874__boxed_625_, v___f_614_, v_____r_615_, v___y_616_, v___y_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_);
lean_dec(v___y_623_);
lean_dec_ref(v___y_622_);
lean_dec(v___y_621_);
lean_dec_ref(v___y_620_);
lean_dec(v___y_619_);
lean_dec_ref(v___y_618_);
lean_dec(v___y_617_);
lean_dec_ref(v___y_616_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__1(lean_object* v_snd_627_, lean_object* v_a_628_, lean_object* v___x_629_, lean_object* v_____r_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_){
_start:
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_640_ = lean_array_push(v_snd_627_, v_a_628_);
v___x_641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_629_);
lean_ctor_set(v___x_641_, 1, v___x_640_);
v___x_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
v___x_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_643_, 0, v___x_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__1___boxed(lean_object* v_snd_644_, lean_object* v_a_645_, lean_object* v___x_646_, lean_object* v_____r_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__1(v_snd_644_, v_a_645_, v___x_646_, v_____r_647_, v___y_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec(v___y_651_);
lean_dec_ref(v___y_650_);
lean_dec(v___y_649_);
lean_dec_ref(v___y_648_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0_spec__0(lean_object* v_msgData_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_){
_start:
{
lean_object* v___x_664_; lean_object* v_env_665_; lean_object* v___x_666_; lean_object* v_mctx_667_; lean_object* v_lctx_668_; lean_object* v_options_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_664_ = lean_st_ref_get(v___y_662_);
v_env_665_ = lean_ctor_get(v___x_664_, 0);
lean_inc_ref(v_env_665_);
lean_dec(v___x_664_);
v___x_666_ = lean_st_ref_get(v___y_660_);
v_mctx_667_ = lean_ctor_get(v___x_666_, 0);
lean_inc_ref(v_mctx_667_);
lean_dec(v___x_666_);
v_lctx_668_ = lean_ctor_get(v___y_659_, 2);
v_options_669_ = lean_ctor_get(v___y_661_, 2);
lean_inc_ref(v_options_669_);
lean_inc_ref(v_lctx_668_);
v___x_670_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_670_, 0, v_env_665_);
lean_ctor_set(v___x_670_, 1, v_mctx_667_);
lean_ctor_set(v___x_670_, 2, v_lctx_668_);
lean_ctor_set(v___x_670_, 3, v_options_669_);
v___x_671_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_671_, 0, v___x_670_);
lean_ctor_set(v___x_671_, 1, v_msgData_658_);
v___x_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_672_, 0, v___x_671_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0_spec__0___boxed(lean_object* v_msgData_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0_spec__0(v_msgData_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
lean_dec(v___y_677_);
lean_dec_ref(v___y_676_);
lean_dec(v___y_675_);
lean_dec_ref(v___y_674_);
return v_res_679_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_680_; double v___x_681_; 
v___x_680_ = lean_unsigned_to_nat(0u);
v___x_681_ = lean_float_of_nat(v___x_680_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg(lean_object* v_cls_685_, lean_object* v_msg_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_){
_start:
{
lean_object* v_ref_692_; lean_object* v___x_693_; lean_object* v_a_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_738_; 
v_ref_692_ = lean_ctor_get(v___y_689_, 5);
v___x_693_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0_spec__0(v_msg_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_);
v_a_694_ = lean_ctor_get(v___x_693_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_693_);
if (v_isSharedCheck_738_ == 0)
{
v___x_696_ = v___x_693_;
v_isShared_697_ = v_isSharedCheck_738_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_a_694_);
lean_dec(v___x_693_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_738_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v___x_698_; lean_object* v_traceState_699_; lean_object* v_env_700_; lean_object* v_nextMacroScope_701_; lean_object* v_ngen_702_; lean_object* v_auxDeclNGen_703_; lean_object* v_cache_704_; lean_object* v_messages_705_; lean_object* v_infoState_706_; lean_object* v_snapshotTasks_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_737_; 
v___x_698_ = lean_st_ref_take(v___y_690_);
v_traceState_699_ = lean_ctor_get(v___x_698_, 4);
v_env_700_ = lean_ctor_get(v___x_698_, 0);
v_nextMacroScope_701_ = lean_ctor_get(v___x_698_, 1);
v_ngen_702_ = lean_ctor_get(v___x_698_, 2);
v_auxDeclNGen_703_ = lean_ctor_get(v___x_698_, 3);
v_cache_704_ = lean_ctor_get(v___x_698_, 5);
v_messages_705_ = lean_ctor_get(v___x_698_, 6);
v_infoState_706_ = lean_ctor_get(v___x_698_, 7);
v_snapshotTasks_707_ = lean_ctor_get(v___x_698_, 8);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_737_ == 0)
{
v___x_709_ = v___x_698_;
v_isShared_710_ = v_isSharedCheck_737_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_snapshotTasks_707_);
lean_inc(v_infoState_706_);
lean_inc(v_messages_705_);
lean_inc(v_cache_704_);
lean_inc(v_traceState_699_);
lean_inc(v_auxDeclNGen_703_);
lean_inc(v_ngen_702_);
lean_inc(v_nextMacroScope_701_);
lean_inc(v_env_700_);
lean_dec(v___x_698_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_737_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
uint64_t v_tid_711_; lean_object* v_traces_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_736_; 
v_tid_711_ = lean_ctor_get_uint64(v_traceState_699_, sizeof(void*)*1);
v_traces_712_ = lean_ctor_get(v_traceState_699_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v_traceState_699_);
if (v_isSharedCheck_736_ == 0)
{
v___x_714_ = v_traceState_699_;
v_isShared_715_ = v_isSharedCheck_736_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_traces_712_);
lean_dec(v_traceState_699_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_736_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_716_; double v___x_717_; uint8_t v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_726_; 
v___x_716_ = lean_box(0);
v___x_717_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg___closed__0);
v___x_718_ = 0;
v___x_719_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg___closed__1));
v___x_720_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_720_, 0, v_cls_685_);
lean_ctor_set(v___x_720_, 1, v___x_716_);
lean_ctor_set(v___x_720_, 2, v___x_719_);
lean_ctor_set_float(v___x_720_, sizeof(void*)*3, v___x_717_);
lean_ctor_set_float(v___x_720_, sizeof(void*)*3 + 8, v___x_717_);
lean_ctor_set_uint8(v___x_720_, sizeof(void*)*3 + 16, v___x_718_);
v___x_721_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg___closed__2));
v___x_722_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_722_, 0, v___x_720_);
lean_ctor_set(v___x_722_, 1, v_a_694_);
lean_ctor_set(v___x_722_, 2, v___x_721_);
lean_inc(v_ref_692_);
v___x_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_723_, 0, v_ref_692_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
v___x_724_ = l_Lean_PersistentArray_push___redArg(v_traces_712_, v___x_723_);
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 0, v___x_724_);
v___x_726_ = v___x_714_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v___x_724_);
lean_ctor_set_uint64(v_reuseFailAlloc_735_, sizeof(void*)*1, v_tid_711_);
v___x_726_ = v_reuseFailAlloc_735_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
lean_object* v___x_728_; 
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 4, v___x_726_);
v___x_728_ = v___x_709_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_env_700_);
lean_ctor_set(v_reuseFailAlloc_734_, 1, v_nextMacroScope_701_);
lean_ctor_set(v_reuseFailAlloc_734_, 2, v_ngen_702_);
lean_ctor_set(v_reuseFailAlloc_734_, 3, v_auxDeclNGen_703_);
lean_ctor_set(v_reuseFailAlloc_734_, 4, v___x_726_);
lean_ctor_set(v_reuseFailAlloc_734_, 5, v_cache_704_);
lean_ctor_set(v_reuseFailAlloc_734_, 6, v_messages_705_);
lean_ctor_set(v_reuseFailAlloc_734_, 7, v_infoState_706_);
lean_ctor_set(v_reuseFailAlloc_734_, 8, v_snapshotTasks_707_);
v___x_728_ = v_reuseFailAlloc_734_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_732_; 
v___x_729_ = lean_st_ref_set(v___y_690_, v___x_728_);
v___x_730_ = lean_box(0);
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 0, v___x_730_);
v___x_732_ = v___x_696_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v___x_730_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg___boxed(lean_object* v_cls_739_, lean_object* v_msg_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg(v_cls_739_, v_msg_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_);
lean_dec(v___y_744_);
lean_dec_ref(v___y_743_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__0(lean_object* v_x_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_758_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___lam__0___closed__0));
v___x_759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_759_, 0, v___x_758_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__0___boxed(lean_object* v_x_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__0(v_x_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
lean_dec(v___y_767_);
lean_dec_ref(v___y_766_);
lean_dec(v___y_765_);
lean_dec_ref(v___y_764_);
lean_dec(v___y_763_);
lean_dec_ref(v___y_762_);
lean_dec(v___y_761_);
lean_dec_ref(v_x_760_);
return v_res_771_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_773_; lean_object* v___f_774_; lean_object* v_methods_775_; 
v___x_773_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit_0__Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitProc___boxed), 11, 0);
v___f_774_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__0));
v_methods_775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_methods_775_, 0, v___f_774_);
lean_ctor_set(v_methods_775_, 1, v___x_773_);
return v_methods_775_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__7(void){
_start:
{
lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_785_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__4));
v___x_786_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__6));
v___x_787_ = l_Lean_Name_append(v___x_786_, v___x_785_);
return v___x_787_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__9(void){
_start:
{
lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__8));
v___x_790_ = l_Lean_stringToMessageData(v___x_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg(lean_object* v_upperBound_791_, lean_object* v___x_792_, lean_object* v_config_793_, lean_object* v_a_794_, lean_object* v_b_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_){
_start:
{
lean_object* v___y_806_; uint8_t v___x_828_; 
v___x_828_ = lean_nat_dec_lt(v_a_794_, v_upperBound_791_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; 
lean_dec(v_a_794_);
lean_dec_ref(v_config_793_);
v___x_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_829_, 0, v_b_795_);
return v___x_829_;
}
else
{
lean_object* v___x_830_; lean_object* v_type_831_; lean_object* v_methods_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_830_ = lean_array_fget_borrowed(v___x_792_, v_a_794_);
v_type_831_ = lean_ctor_get(v___x_830_, 1);
v_methods_832_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__1);
lean_inc_ref(v_type_831_);
v___x_833_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_833_, 0, v_type_831_);
lean_inc_ref(v_config_793_);
v___x_834_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(v___x_833_, v_methods_832_, v_config_793_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v_a_835_; lean_object* v___x_836_; 
v_a_835_ = lean_ctor_get(v___x_834_, 0);
lean_inc(v_a_835_);
lean_dec_ref_known(v___x_834_, 1);
lean_inc(v___x_830_);
v___x_836_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v___x_830_, v_a_835_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v_a_837_; lean_object* v_snd_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_900_; 
v_a_837_ = lean_ctor_get(v___x_836_, 0);
lean_inc(v_a_837_);
lean_dec_ref_known(v___x_836_, 1);
v_snd_838_ = lean_ctor_get(v_b_795_, 1);
v_isSharedCheck_900_ = !lean_is_exclusive(v_b_795_);
if (v_isSharedCheck_900_ == 0)
{
lean_object* v_unused_901_; 
v_unused_901_ = lean_ctor_get(v_b_795_, 0);
lean_dec(v_unused_901_);
v___x_840_ = v_b_795_;
v_isShared_841_ = v_isSharedCheck_900_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_snd_838_);
lean_dec(v_b_795_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_900_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v_type_842_; lean_object* v_value_843_; uint8_t v___x_844_; 
v_type_842_ = lean_ctor_get(v_a_837_, 1);
v_value_843_ = lean_ctor_get(v_a_837_, 2);
lean_inc_ref(v_type_842_);
v___x_844_ = l_Lean_Expr_isFalse(v_type_842_);
if (v___x_844_ == 0)
{
lean_object* v___x_845_; lean_object* v___f_846_; uint8_t v___x_873_; 
lean_del_object(v___x_840_);
v___x_845_ = lean_box(0);
lean_inc(v_a_837_);
lean_inc(v_snd_838_);
v___f_846_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__1___boxed), 13, 3);
lean_closure_set(v___f_846_, 0, v_snd_838_);
lean_closure_set(v___f_846_, 1, v_a_837_);
lean_closure_set(v___f_846_, 2, v___x_845_);
v___x_873_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp_beq(v___x_830_, v_a_837_);
if (v___x_873_ == 0)
{
lean_inc_ref(v_type_842_);
lean_dec(v_snd_838_);
lean_dec(v_a_837_);
goto v___jp_850_;
}
else
{
if (v___x_844_ == 0)
{
lean_object* v___x_874_; lean_object* v___x_875_; 
lean_dec_ref(v___f_846_);
v___x_874_ = lean_box(0);
v___x_875_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__1(v_snd_838_, v_a_837_, v___x_845_, v___x_874_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
v___y_806_ = v___x_875_;
goto v___jp_805_;
}
else
{
lean_inc_ref(v_type_842_);
lean_dec(v_snd_838_);
lean_dec(v_a_837_);
goto v___jp_850_;
}
}
v___jp_847_:
{
lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_848_ = lean_box(0);
v___x_849_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__2(v___x_828_, v___f_846_, v___x_848_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
v___y_806_ = v___x_849_;
goto v___jp_805_;
}
v___jp_850_:
{
lean_object* v_options_851_; uint8_t v_hasTrace_852_; 
v_options_851_ = lean_ctor_get(v___y_802_, 2);
v_hasTrace_852_ = lean_ctor_get_uint8(v_options_851_, sizeof(void*)*1);
if (v_hasTrace_852_ == 0)
{
lean_dec_ref(v_type_842_);
goto v___jp_847_;
}
else
{
lean_object* v_inheritedTraceOptions_853_; lean_object* v___x_854_; lean_object* v___x_855_; uint8_t v___x_856_; 
v_inheritedTraceOptions_853_ = lean_ctor_get(v___y_802_, 13);
v___x_854_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__4));
v___x_855_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__7);
v___x_856_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_853_, v_options_851_, v___x_855_);
if (v___x_856_ == 0)
{
lean_dec_ref(v_type_842_);
goto v___jp_847_;
}
else
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
lean_inc_ref(v_type_831_);
v___x_857_ = l_Lean_MessageData_ofExpr(v_type_831_);
v___x_858_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___closed__9);
v___x_859_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_859_, 0, v___x_857_);
lean_ctor_set(v___x_859_, 1, v___x_858_);
v___x_860_ = l_Lean_MessageData_ofExpr(v_type_842_);
v___x_861_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_861_, 0, v___x_859_);
lean_ctor_set(v___x_861_, 1, v___x_860_);
v___x_862_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg(v___x_854_, v___x_861_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v_a_863_; lean_object* v___x_864_; 
v_a_863_ = lean_ctor_get(v___x_862_, 0);
lean_inc(v_a_863_);
lean_dec_ref_known(v___x_862_, 1);
v___x_864_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___lam__2(v___x_828_, v___f_846_, v_a_863_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
v___y_806_ = v___x_864_;
goto v___jp_805_;
}
else
{
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_872_; 
lean_dec_ref(v___f_846_);
lean_dec(v_a_794_);
lean_dec_ref(v_config_793_);
v_a_865_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_872_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_872_ == 0)
{
v___x_867_ = v___x_862_;
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_862_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_870_; 
if (v_isShared_868_ == 0)
{
v___x_870_ = v___x_867_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_a_865_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_876_; lean_object* v_goal_877_; lean_object* v___x_878_; 
lean_inc_ref(v_value_843_);
lean_dec(v_a_837_);
lean_dec(v_a_794_);
lean_dec_ref(v_config_793_);
v___x_876_ = lean_st_ref_get(v___y_797_);
v_goal_877_ = lean_ctor_get(v___x_876_, 3);
lean_inc(v_goal_877_);
lean_dec(v___x_876_);
v___x_878_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1___redArg(v_goal_877_, v_value_843_, v___y_801_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_890_; 
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_890_ == 0)
{
lean_object* v_unused_891_; 
v_unused_891_ = lean_ctor_get(v___x_878_, 0);
lean_dec(v_unused_891_);
v___x_880_ = v___x_878_;
v_isShared_881_ = v_isSharedCheck_890_;
goto v_resetjp_879_;
}
else
{
lean_dec(v___x_878_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_890_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_885_; 
v___x_882_ = lean_box(v___x_844_);
v___x_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_883_, 0, v___x_882_);
if (v_isShared_841_ == 0)
{
lean_ctor_set(v___x_840_, 0, v___x_883_);
v___x_885_ = v___x_840_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_883_);
lean_ctor_set(v_reuseFailAlloc_889_, 1, v_snd_838_);
v___x_885_ = v_reuseFailAlloc_889_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
lean_object* v___x_887_; 
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 0, v___x_885_);
v___x_887_ = v___x_880_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v___x_885_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
else
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_899_; 
lean_del_object(v___x_840_);
lean_dec(v_snd_838_);
v_a_892_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_899_ == 0)
{
v___x_894_ = v___x_878_;
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_878_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_897_; 
if (v_isShared_895_ == 0)
{
v___x_897_ = v___x_894_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_a_892_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
}
}
}
else
{
lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
lean_dec_ref(v_b_795_);
lean_dec(v_a_794_);
lean_dec_ref(v_config_793_);
v_a_902_ = lean_ctor_get(v___x_836_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___x_836_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_836_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_902_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
else
{
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_917_; 
lean_dec_ref(v_b_795_);
lean_dec(v_a_794_);
lean_dec_ref(v_config_793_);
v_a_910_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_917_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_917_ == 0)
{
v___x_912_ = v___x_834_;
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_834_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_915_; 
if (v_isShared_913_ == 0)
{
v___x_915_ = v___x_912_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_a_910_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
}
}
}
}
v___jp_805_:
{
if (lean_obj_tag(v___y_806_) == 0)
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_819_; 
v_a_807_ = lean_ctor_get(v___y_806_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v___y_806_);
if (v_isSharedCheck_819_ == 0)
{
v___x_809_ = v___y_806_;
v_isShared_810_ = v_isSharedCheck_819_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___y_806_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_819_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
if (lean_obj_tag(v_a_807_) == 0)
{
lean_object* v_a_811_; lean_object* v___x_813_; 
lean_dec(v_a_794_);
lean_dec_ref(v_config_793_);
v_a_811_ = lean_ctor_get(v_a_807_, 0);
lean_inc(v_a_811_);
lean_dec_ref_known(v_a_807_, 1);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 0, v_a_811_);
v___x_813_ = v___x_809_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_a_811_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
else
{
lean_object* v_a_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
lean_del_object(v___x_809_);
v_a_815_ = lean_ctor_get(v_a_807_, 0);
lean_inc(v_a_815_);
lean_dec_ref_known(v_a_807_, 1);
v___x_816_ = lean_unsigned_to_nat(1u);
v___x_817_ = lean_nat_add(v_a_794_, v___x_816_);
lean_dec(v_a_794_);
v_a_794_ = v___x_817_;
v_b_795_ = v_a_815_;
goto _start;
}
}
}
else
{
lean_object* v_a_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_827_; 
lean_dec(v_a_794_);
lean_dec_ref(v_config_793_);
v_a_820_ = lean_ctor_get(v___y_806_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___y_806_);
if (v_isSharedCheck_827_ == 0)
{
v___x_822_ = v___y_806_;
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_a_820_);
lean_dec(v___y_806_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_825_; 
if (v_isShared_823_ == 0)
{
v___x_825_ = v___x_822_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_a_820_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg___boxed(lean_object* v_upperBound_918_, lean_object* v___x_919_, lean_object* v_config_920_, lean_object* v_a_921_, lean_object* v_b_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg(v_upperBound_918_, v___x_919_, v_config_920_, v_a_921_, v_b_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_);
lean_dec(v___y_930_);
lean_dec_ref(v___y_929_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
lean_dec(v___y_926_);
lean_dec_ref(v___y_925_);
lean_dec(v___y_924_);
lean_dec_ref(v___y_923_);
lean_dec_ref(v___x_919_);
lean_dec(v_upperBound_918_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___lam__0(lean_object* v_config_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
lean_object* v___x_943_; lean_object* v_hypotheses_944_; lean_object* v___x_945_; lean_object* v_newHyps_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_943_ = lean_st_ref_get(v___y_935_);
v_hypotheses_944_ = lean_ctor_get(v___x_943_, 4);
lean_inc_ref(v_hypotheses_944_);
lean_dec(v___x_943_);
v___x_945_ = lean_array_get_size(v_hypotheses_944_);
v_newHyps_946_ = lean_mk_empty_array_with_capacity(v___x_945_);
v___x_947_ = lean_unsigned_to_nat(0u);
v___x_948_ = lean_box(0);
v___x_949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
lean_ctor_set(v___x_949_, 1, v_newHyps_946_);
v___x_950_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg(v___x_945_, v_hypotheses_944_, v_config_933_, v___x_947_, v___x_949_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_);
lean_dec_ref(v_hypotheses_944_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_981_; 
v_a_951_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_981_ == 0)
{
v___x_953_ = v___x_950_;
v_isShared_954_ = v_isSharedCheck_981_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_950_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_981_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v_fst_955_; 
v_fst_955_ = lean_ctor_get(v_a_951_, 0);
if (lean_obj_tag(v_fst_955_) == 0)
{
lean_object* v_snd_956_; lean_object* v___x_957_; lean_object* v_rewriteCache_958_; lean_object* v_acNfCache_959_; lean_object* v_typeAnalysis_960_; lean_object* v_goal_961_; uint8_t v_didChange_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_975_; 
v_snd_956_ = lean_ctor_get(v_a_951_, 1);
lean_inc(v_snd_956_);
lean_dec(v_a_951_);
v___x_957_ = lean_st_ref_take(v___y_935_);
v_rewriteCache_958_ = lean_ctor_get(v___x_957_, 0);
v_acNfCache_959_ = lean_ctor_get(v___x_957_, 1);
v_typeAnalysis_960_ = lean_ctor_get(v___x_957_, 2);
v_goal_961_ = lean_ctor_get(v___x_957_, 3);
v_didChange_962_ = lean_ctor_get_uint8(v___x_957_, sizeof(void*)*5);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_975_ == 0)
{
lean_object* v_unused_976_; 
v_unused_976_ = lean_ctor_get(v___x_957_, 4);
lean_dec(v_unused_976_);
v___x_964_ = v___x_957_;
v_isShared_965_ = v_isSharedCheck_975_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_goal_961_);
lean_inc(v_typeAnalysis_960_);
lean_inc(v_acNfCache_959_);
lean_inc(v_rewriteCache_958_);
lean_dec(v___x_957_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_975_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
lean_ctor_set(v___x_964_, 4, v_snd_956_);
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_rewriteCache_958_);
lean_ctor_set(v_reuseFailAlloc_974_, 1, v_acNfCache_959_);
lean_ctor_set(v_reuseFailAlloc_974_, 2, v_typeAnalysis_960_);
lean_ctor_set(v_reuseFailAlloc_974_, 3, v_goal_961_);
lean_ctor_set(v_reuseFailAlloc_974_, 4, v_snd_956_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, sizeof(void*)*5, v_didChange_962_);
v___x_967_ = v_reuseFailAlloc_974_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
lean_object* v___x_968_; uint8_t v___x_969_; lean_object* v___x_970_; lean_object* v___x_972_; 
v___x_968_ = lean_st_ref_set(v___y_935_, v___x_967_);
v___x_969_ = 0;
v___x_970_ = lean_box(v___x_969_);
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v___x_970_);
v___x_972_ = v___x_953_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v___x_970_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
}
else
{
lean_object* v_val_977_; lean_object* v___x_979_; 
lean_inc_ref(v_fst_955_);
lean_dec(v_a_951_);
v_val_977_ = lean_ctor_get(v_fst_955_, 0);
lean_inc(v_val_977_);
lean_dec_ref_known(v_fst_955_, 1);
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v_val_977_);
v___x_979_ = v___x_953_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_val_977_);
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
else
{
lean_object* v_a_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_989_; 
v_a_982_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_989_ == 0)
{
v___x_984_ = v___x_950_;
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_a_982_);
lean_dec(v___x_950_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_987_; 
if (v_isShared_985_ == 0)
{
v___x_987_ = v___x_984_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_a_982_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___lam__0___boxed(lean_object* v_config_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___lam__0(v_config_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec(v___y_996_);
lean_dec_ref(v___y_995_);
lean_dec(v___y_994_);
lean_dec_ref(v___y_993_);
lean_dec(v___y_992_);
lean_dec_ref(v___y_991_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___lam__1(lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v___x_1010_; lean_object* v_maxSteps_1011_; lean_object* v_goal_1012_; lean_object* v___x_1013_; lean_object* v_config_1014_; lean_object* v___f_1015_; lean_object* v___x_1016_; 
v___x_1010_ = lean_st_ref_get(v___y_1002_);
v_maxSteps_1011_ = lean_ctor_get(v___y_1001_, 1);
v_goal_1012_ = lean_ctor_get(v___x_1010_, 3);
lean_inc(v_goal_1012_);
lean_dec(v___x_1010_);
v___x_1013_ = lean_unsigned_to_nat(2u);
lean_inc(v_maxSteps_1011_);
v_config_1014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_config_1014_, 0, v_maxSteps_1011_);
lean_ctor_set(v_config_1014_, 1, v___x_1013_);
v___f_1015_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___lam__0___boxed), 10, 1);
lean_closure_set(v___f_1015_, 0, v_config_1014_);
v___x_1016_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__3___redArg(v_goal_1012_, v___f_1015_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_, v___y_1008_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___lam__1___boxed(lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass___lam__1(v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
lean_dec(v___y_1022_);
lean_dec_ref(v___y_1021_);
lean_dec(v___y_1020_);
lean_dec_ref(v___y_1019_);
lean_dec(v___y_1018_);
lean_dec_ref(v___y_1017_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0(lean_object* v_cls_1035_, lean_object* v_msg_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
lean_object* v___x_1046_; 
v___x_1046_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___redArg(v_cls_1035_, v_msg_1036_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_);
return v___x_1046_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0___boxed(lean_object* v_cls_1047_, lean_object* v_msg_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_){
_start:
{
lean_object* v_res_1058_; 
v_res_1058_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__0(v_cls_1047_, v_msg_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_);
lean_dec(v___y_1056_);
lean_dec_ref(v___y_1055_);
lean_dec(v___y_1054_);
lean_dec_ref(v___y_1053_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
return v_res_1058_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1(lean_object* v_mvarId_1059_, lean_object* v_val_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1___redArg(v_mvarId_1059_, v_val_1060_, v___y_1066_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1___boxed(lean_object* v_mvarId_1071_, lean_object* v_val_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
lean_object* v_res_1082_; 
v_res_1082_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1(v_mvarId_1071_, v_val_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
return v_res_1082_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2(lean_object* v_upperBound_1083_, lean_object* v___x_1084_, lean_object* v_config_1085_, lean_object* v_inst_1086_, lean_object* v_R_1087_, lean_object* v_a_1088_, lean_object* v_b_1089_, lean_object* v_c_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_){
_start:
{
lean_object* v___x_1100_; 
v___x_1100_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___redArg(v_upperBound_1083_, v___x_1084_, v_config_1085_, v_a_1088_, v_b_1089_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2___boxed(lean_object** _args){
lean_object* v_upperBound_1101_ = _args[0];
lean_object* v___x_1102_ = _args[1];
lean_object* v_config_1103_ = _args[2];
lean_object* v_inst_1104_ = _args[3];
lean_object* v_R_1105_ = _args[4];
lean_object* v_a_1106_ = _args[5];
lean_object* v_b_1107_ = _args[6];
lean_object* v_c_1108_ = _args[7];
lean_object* v___y_1109_ = _args[8];
lean_object* v___y_1110_ = _args[9];
lean_object* v___y_1111_ = _args[10];
lean_object* v___y_1112_ = _args[11];
lean_object* v___y_1113_ = _args[12];
lean_object* v___y_1114_ = _args[13];
lean_object* v___y_1115_ = _args[14];
lean_object* v___y_1116_ = _args[15];
lean_object* v___y_1117_ = _args[16];
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__2(v_upperBound_1101_, v___x_1102_, v_config_1103_, v_inst_1104_, v_R_1105_, v_a_1106_, v_b_1107_, v_c_1108_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_);
lean_dec(v___y_1116_);
lean_dec_ref(v___y_1115_);
lean_dec(v___y_1114_);
lean_dec_ref(v___y_1113_);
lean_dec(v___y_1112_);
lean_dec_ref(v___y_1111_);
lean_dec(v___y_1110_);
lean_dec_ref(v___y_1109_);
lean_dec_ref(v___x_1102_);
lean_dec(v_upperBound_1101_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2(lean_object* v_00_u03b2_1119_, lean_object* v_x_1120_, lean_object* v_x_1121_, lean_object* v_x_1122_){
_start:
{
lean_object* v___x_1123_; 
v___x_1123_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2___redArg(v_x_1120_, v_x_1121_, v_x_1122_);
return v___x_1123_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1124_, lean_object* v_x_1125_, size_t v_x_1126_, size_t v_x_1127_, lean_object* v_x_1128_, lean_object* v_x_1129_){
_start:
{
lean_object* v___x_1130_; 
v___x_1130_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4___redArg(v_x_1125_, v_x_1126_, v_x_1127_, v_x_1128_, v_x_1129_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1131_, lean_object* v_x_1132_, lean_object* v_x_1133_, lean_object* v_x_1134_, lean_object* v_x_1135_, lean_object* v_x_1136_){
_start:
{
size_t v_x_22706__boxed_1137_; size_t v_x_22707__boxed_1138_; lean_object* v_res_1139_; 
v_x_22706__boxed_1137_ = lean_unbox_usize(v_x_1133_);
lean_dec(v_x_1133_);
v_x_22707__boxed_1138_ = lean_unbox_usize(v_x_1134_);
lean_dec(v_x_1134_);
v_res_1139_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4(v_00_u03b2_1131_, v_x_1132_, v_x_22706__boxed_1137_, v_x_22707__boxed_1138_, v_x_1135_, v_x_1136_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_1140_, lean_object* v_n_1141_, lean_object* v_k_1142_, lean_object* v_v_1143_){
_start:
{
lean_object* v___x_1144_; 
v___x_1144_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__6___redArg(v_n_1141_, v_k_1142_, v_v_1143_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_1145_, size_t v_depth_1146_, lean_object* v_keys_1147_, lean_object* v_vals_1148_, lean_object* v_heq_1149_, lean_object* v_i_1150_, lean_object* v_entries_1151_){
_start:
{
lean_object* v___x_1152_; 
v___x_1152_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__7___redArg(v_depth_1146_, v_keys_1147_, v_vals_1148_, v_i_1150_, v_entries_1151_);
return v___x_1152_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__7___boxed(lean_object* v_00_u03b2_1153_, lean_object* v_depth_1154_, lean_object* v_keys_1155_, lean_object* v_vals_1156_, lean_object* v_heq_1157_, lean_object* v_i_1158_, lean_object* v_entries_1159_){
_start:
{
size_t v_depth_boxed_1160_; lean_object* v_res_1161_; 
v_depth_boxed_1160_ = lean_unbox_usize(v_depth_1154_);
lean_dec(v_depth_1154_);
v_res_1161_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__7(v_00_u03b2_1153_, v_depth_boxed_1160_, v_keys_1155_, v_vals_1156_, v_heq_1157_, v_i_1158_, v_entries_1159_);
lean_dec_ref(v_vals_1156_);
lean_dec_ref(v_keys_1155_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__6_spec__7(lean_object* v_00_u03b2_1162_, lean_object* v_x_1163_, lean_object* v_x_1164_, lean_object* v_x_1165_, lean_object* v_x_1166_){
_start:
{
lean_object* v___x_1167_; 
v___x_1167_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_Normalize_shortCircuitPass_spec__1_spec__2_spec__4_spec__6_spec__7___redArg(v_x_1163_, v_x_1164_, v_x_1165_, v_x_1166_);
return v___x_1167_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_BVDecide_Normalize_BitVec(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Theorems(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_Normalize_BitVec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Theorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
lean_object* initialize_Std_Tactic_BVDecide_Normalize_BitVec(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Theorems(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_Normalize_BitVec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Theorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Normalize_ShortCircuit(builtin);
}
#ifdef __cplusplus
}
#endif
